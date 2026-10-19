/* Game option limits (Instant Action "Game Options").
 *
 * The game registers each option variable with its range (func_08978CEC -> func_08897814(name, variable, min, max, ...)); the menu
 * widgets take their limits from there (the numbers in GUIMENU/BFF_SERVERSETUP.GUI are not used for this).  rs_game_var_range runs
 * before each registration (hook from tools/dc/hooks.py) and raises the maximum of:
 *   BFF.InitialTickets (0x08C294E4)                         25..200   ->  ..RS_MAX_TICKETS (1000); the menu step stays the game's
 *   BFF.MinPlayers{SinglePlayer,AdHoc,Infrastructure}       ..16      ->  ..RS_MAX_PLAYERS (64 = 32 per team, bots included)
 *   (0x08C294D0 / D4 / D8)
 * Only a registration whose variable and original maximum match is changed.
 *
 * Checked on the Linux build: with 64 the bot fill (func_089809B8) creates 63 bots + the player, 32 per team, and each bot's AI runs
 * (per-bot AI objects scale 16 -> 64 and stay active over time, no fixed pool); conquest tickets per team are the option x the
 * map's team factor (func_089875C8), with no other clamp. */
#include <stdio.h>
#include "psp_impl.h"
#include "game_hooks.h"

extern u32 rs_image_w[];
extern int rs_setting_int(const char *, int);
#define IMG(va) ((u32)(uintptr_t)rs_image_w + ((u32)(va) - 0x08804000u))     /* game data address -> this build's address */

void rs_game_var_range(u32 var, u32 *min, u32 *max){
    static int on = -1; if (on < 0) on = rs_setting_int("RS_GAME_PATCHES", 1); if (!on) return;
    (void)min;
    if (var == IMG(0x08C294E4) && *max == 200) {
        int v = rs_setting_int("RS_MAX_TICKETS", 1000); if (v < 200) v = 200;
        fprintf(stderr, "[PATCH] conquest initial tickets: maximum %u -> %d\n", *max, v); *max = (u32)v; }
    else if ((var == IMG(0x08C294D0) || var == IMG(0x08C294D4) || var == IMG(0x08C294D8)) && *max == 16) {
        int v = rs_setting_int("RS_MAX_PLAYERS", 64); if (v < 16) v = 16;
        fprintf(stderr, "[PATCH] min players (including AI): maximum %u -> %d\n", *max, v); *max = (u32)v; }
}

/* The AI object pool.  The game's AI (squad behaviours, goals, orders: func_08956D80 and the other factories next to it) takes its
 * objects from one pool built at start-up by func_08956118: 128 blocks of the largest AI object's size (at least 620 bytes), a free
 * list at pool+4 and the count in use at pool+16 (*0x08C278D8).  Each bot holds several of them, so 128 blocks last for about 32
 * bots: the factories return nothing for the rest, and those bots stand still for the whole match.  This builds the same pool with
 * room for RS_MAX_PLAYERS bots (6 blocks each, never fewer than the game's 128). */
rv_t func_08A94784(u32 a0, u32 t1, u32 t2, u32 t3);
rv_t func_08A94838(u32 a0, u32 t1, u32 t2, u32 t3);
u32 func_089560B4(void);
#define W32(a) (*(volatile u32 *)(uintptr_t)(a))
int rs_ai_pool_init(void){
    if (!rs_setting_int("RS_GAME_PATCHES", 1)) return 0;
    int players = rs_setting_int("RS_MAX_PLAYERS", 64), n = players * 6;
    if (n <= 128) return 0;                                       /* the game's own pool */
    u32 sz = func_089560B4();
    u32 pool = func_08A94784(20, 0, 0, 0).v0;
    u32 mem = func_08A94838(sz * (u32)n, 0, 0, 0).v0;
    if (!pool) return 0;
    if (!mem) { fprintf(stderr, "[PATCH] AI object pool: no memory for %d x %u bytes, the game's 128\n", n, sz);
        mem = func_08A94838(sz << 7, 0, 0, 0).v0; n = 128; }
    W32(pool + 12) = (u32)n; W32(pool) = mem; W32(pool + 8) = sz; W32(pool + 4) = mem; W32(pool + 16) = 0;
    if (mem) { for (int i = 0; i < n - 1; i++) W32(mem + (u32)i * sz) = mem + (u32)(i + 1) * sz; W32(mem + (u32)(n - 1) * sz) = 0; }
    W32(IMG(0x08C278D8u)) = pool;
    fprintf(stderr, "[PATCH] AI object pool: %d blocks of %u bytes (the game's 128)\n", n, sz);
    return 1; }
