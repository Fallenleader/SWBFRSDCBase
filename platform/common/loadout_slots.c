/* Customize Load-out: any weapon in either weapon slot, any explosive or special item in either of those slots, and a
 * larger credit allowance (experimental).
 *
 * The game (traced in the decompiled code):
 *  - The load-out keeps an index per category (profile +440: Weapon 1, Weapon 2, Explosive, Special Item, Power Up, ...).
 *    Categories 0..4 turn an index into an item id through one table each, 0x08ADC5E8 (10 ids), 0x08ADC610 (8), 0x08ADC630
 *    (6), 0x08ADC648 (8), 0x08ADC668 (6); the item's faction version, name, cost and model come from the id.  Every user goes
 *    through those tables: the menu's lists (func_08A2809C names, func_08A28388 models, func_08A285C0 costs, func_08A28660
 *    icons), the costs (func_08A34440), the preview (func_08A36BA0) and the spawned soldier's kit (func_08978310).
 *  - The lists' lengths: 0x08ADFC84[category * 3 + 2].
 *  - The menu's carousel (widget at 0x08C2CEDC while the menu is open) has as many entry slots as its file gives it.
 *  - Credits: func_08A34280 sets the allowance and what is left to 100.
 *
 * What this does: the five tables are redirected to native copies (tools/dc/hooks.py rewrites their symbols) in which
 * Weapon 1 and Weapon 2 each list their own weapons and then the other slot's, and Explosive and Special Item likewise.
 * A list keeps its own items first, at the same indices, so saved load-outs are unchanged.  The lengths and the
 * carousel's entry slots grow to match, and the allowance becomes RS_CREDITS (200). */
#include <string.h>
#include "psp_impl.h"
#include "guest.h"
#include "game_hooks.h"

extern int rs_setting_int(const char *, int);
extern u64 func_0888FC44(u32, u32);
#define IMG(va)  GIMG(va)
#define W32(a)   GU32(a)

static const u32 src_va[5] = {0x08ADC5E8, 0x08ADC610, 0x08ADC630, 0x08ADC648, 0x08ADC668};
static const int src_n[5] = {10, 8, 6, 8, 6};
static const int other[5] = {1, 0, 3, 2, -1};          /* the category whose items are added to a list */
static u32 (*tab)[32]; static int len[5], ready;   /* in guest memory: the game reads the tables */
#define MAXLEN 32

static int enabled(void){ static int on = -1; if (on < 0) on = rs_setting_int("RS_ANY_SLOT", 1); return on; }
/* weapons.txt (blueprints.c): new weapons for the lists Weapon 1 / Weapon 2 / Explosive / Special Item, added after the game's */
static u32 extra[4][16]; static int nextra[4];
void rs_loadout_add(int list, u32 hash){ if (list >= 0 && list < 4 && nextra[list] < 16) extra[list][nextra[list]++] = hash; }
static int has(int t, u32 id){ for (int i = 0; i < len[t]; i++) if (tab[t][i] == id) return 1; return 0; }
static void init(void){
    if (ready) return;
    tab = rs_guest_alloc(sizeof(u32) * 32 * 5, 64);
    for (int t = 0; t < 5; t++) { len[t] = src_n[t]; for (int i = 0; i < src_n[t]; i++) tab[t][i] = W32(IMG(src_va[t]) + 4u * (u32)i); }
    if (enabled()) {
        for (int t = 0; t < 5; t++) {                      /* the other slot's items (not "none", not one listed already) */
            int o = other[t]; if (o < 0) continue;
            for (int i = 0; i < src_n[o] && len[t] < MAXLEN; i++) { u32 id = W32(IMG(src_va[o]) + 4u * (u32)i); if (id && !has(t, id)) tab[t][len[t]++] = id; } }
        for (int t = 0; t < 4; t++) W32(IMG(0x08ADFC84) + 12u * (u32)t + 8) = (u32)len[t]; }
    for (int t = 0; t < 4; t++) { for (int i = 0; i < nextra[t] && len[t] < MAXLEN; i++) if (!has(t, extra[t][i])) tab[t][len[t]++] = extra[t][i];
        if (nextra[t]) W32(IMG(0x08ADFC84) + 12u * (u32)t + 8) = (u32)len[t]; }
    ready = 1; }

u32 rs_loadout_table(int t){ init(); return GA(tab[t]); }   /* symbols.h: D_08ADC5E8 etc. */

void rs_loadout_frame(void){                            /* after each pad read: the carousel's entry slots */
    init();
    if (!enabled()) return;
    u32 w = W32(IMG(0x08C2CEDC)); if (!w) return;
    u32 want = 0; for (int t = 0; t < 4; t++) if ((u32)len[t] > want) want = (u32)len[t];
    if (W32(w + 408) < want) func_0888FC44(w, want); }

void rs_credits_init(u32 credits){                      /* after func_08A34280: allowance and what is left */
    int c = rs_setting_int("RS_CREDITS", 200); if (c < 1) c = 100;
    W32(credits) = (u32)c; W32(credits + 4) = (u32)c; }
