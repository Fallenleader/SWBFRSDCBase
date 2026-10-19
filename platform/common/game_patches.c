/* Game option limits (Instant Action "Game Options"), offline games only.
 *
 * The game registers each option variable with its range (func_08978CEC -> func_08897814(name, variable, min, max, ...)); the menu
 * widgets take their limits from there (the numbers in GUIMENU/BFF_SERVERSETUP.GUI are not used for this).  rs_game_var_range runs
 * before each registration (hook from tools/dc/hooks.py) and changes:
 *   BFF.MinPlayersSinglePlayer (0x08C294D0)   8..16     ->  ..RS_MAX_PLAYERS (bots included; the PS Vita 64, the PS5 128)
 *   BFF.InitialTickets (0x08C294E4)           25..200   ->  RS_MIN_TICKETS..RS_MAX_TICKETS (the Vita 25..1000, the PS5 200..5000);
 *                                                           the menu step stays the game's
 * Only a registration whose variable and original range match is changed.
 *
 * Offline only: the player count of the network modes is its own variable (BFF.MinPlayersAdHoc 0x08C294D8, ...Infrastructure
 * 0x08C294D4), left at the game's 16.  The tickets variable is shared by every mode, so while the game is set up for a network game
 * (the mode byte 0x08C2932C is 1; func_08979D14 chooses the player-count variable by it) the tickets are kept
 * within the game's own 25..200 (rs_patches_frame), so a network game stays what a PSP or a PS Vita expects.
 *
 * Checked on the Linux build: with 64 players the bot fill (func_089809B8) creates 63 bots + the player, 32 per team, and each
 * bot's AI runs (per-bot AI objects scale with the count; no fixed pool); conquest tickets per team are the option x the map's team
 * factor (func_089875C8), with no other clamp. */
#include <stdio.h>
#include <stdlib.h>
#include "psp_impl.h"
#include "guest.h"
#include "game_hooks.h"

extern int rs_setting_int(const char *, int);
#define IMG(va) GIMG(va)     /* game data address -> this build's address */
#define VAR_PLAYERS_SP 0x08C294D0u
#define VAR_TICKETS    0x08C294E4u
#define MODE_NETWORK   0x08C2932Cu    /* 1: a network game (0x08C2932D: infrastructure / ad hoc); 0: single player (func_08979D14) */

static int on(void){ static int v = -1; if (v < 0) v = rs_setting_int("RS_GAME_PATCHES", 1); return v; }
static u32 tickets_min(void){ int v = rs_setting_int("RS_MIN_TICKETS", 25); if (v < 1) v = 1; return (u32)v; }
static u32 tickets_max(void){ int v = rs_setting_int("RS_MAX_TICKETS", 1000); if (v < 200) v = 200; return (u32)v; }

void rs_game_var_range(u32 name, u32 var, u32 *min, u32 *max){
    if (getenv("RS_VAR_LOG")) { char n[64]; int i = 0; for (; i < 63; i++) { u16 c = GU16(name + 2u * (u32)i); if (!c) break; n[i] = (char)c; } n[i] = 0;
        fprintf(stderr, "[VAR] %s @%08x %u..%u\n", n, var, *min, *max); }
    if (!on()) return;
    if (var == IMG(VAR_TICKETS) && *min == 25 && *max == 200) {
        u32 lo = tickets_min(), hi = tickets_max(); if (lo > hi) lo = hi;
        fprintf(stderr, "[PATCH] conquest initial tickets (offline): %u..%u -> %u..%u\n", *min, *max, lo, hi); *min = lo; *max = hi;
        u32 cur = GU32(var); if (cur < lo) GU32(var) = lo; else if (cur > hi) GU32(var) = hi; }
    else if (var == IMG(VAR_PLAYERS_SP) && *max == 16) {
        int v = rs_setting_int("RS_MAX_PLAYERS", 64); if (v < 16) v = 16;
        fprintf(stderr, "[PATCH] min players (including AI), offline: maximum %u -> %d\n", *max, v); *max = (u32)v;
        { const char *t = getenv("RS_TEST_PLAYERS"); if (t) GU32(var) = (u32)atoi(t); }       /* test harness: start with this many */
        { const char *t = getenv("RS_TEST_TICKETS"); if (t) GU32(IMG(VAR_TICKETS)) = (u32)atoi(t); } }
}

/* every frame (after the pad read): a network game keeps the game's own ticket range */
void rs_renderer_frame(void);
void rs_patches_frame(void){
    rs_renderer_frame();                                                  /* renderer_option.c */
    if (!on() || GU8(IMG(MODE_NETWORK)) != 1) return;
    u32 t = GU32(IMG(VAR_TICKETS));
    if (t > 200) GU32(IMG(VAR_TICKETS)) = 200; else if (t < 25) GU32(IMG(VAR_TICKETS)) = 25; }

/* The AI object pool.  The game's AI (squad behaviours, goals, orders: func_08956D80 and the other factories next to it) takes its
 * objects from one pool built at start-up by func_08956118: 128 blocks of the largest AI object's size (at least 620 bytes), a free
 * list at pool+4 and the count in use at pool+16 (*0x08C278D8).  Each bot holds several of them, so 128 blocks last for about 32
 * bots: the factories return nothing for the rest, and those bots stand still for the whole match.  This builds the same pool with
 * room for RS_MAX_PLAYERS bots (6 blocks each, never fewer than the game's 128). */
rv_t func_08A94784(u32 a0, u32 t1, u32 t2, u32 t3);
rv_t func_08A94838(u32 a0, u32 t1, u32 t2, u32 t3);
u32 func_089560B4(void);
int rs_ai_pool_init(void){
    if (!on()) return 0;
    int players = rs_setting_int("RS_MAX_PLAYERS", 64), n = players * 6;
    if (n <= 128) return 0;                                       /* the game's own pool */
    u32 sz = func_089560B4();
    u32 pool = func_08A94784(20, 0, 0, 0).v0;
    u32 mem = func_08A94838(sz * (u32)n, 0, 0, 0).v0;
    if (!pool) return 0;
    if (!mem) { fprintf(stderr, "[PATCH] AI object pool: no memory for %d x %u bytes, the game's 128\n", n, sz);
        mem = func_08A94838(sz << 7, 0, 0, 0).v0; n = 128; }
    GU32(pool + 12) = (u32)n; GU32(pool) = mem; GU32(pool + 8) = sz; GU32(pool + 4) = mem; GU32(pool + 16) = 0;
    if (mem) { for (int i = 0; i < n - 1; i++) GU32(mem + (u32)i * sz) = mem + (u32)(i + 1) * sz; GU32(mem + (u32)(n - 1) * sz) = 0; }
    GU32(IMG(0x08C278D8u)) = pool;
    fprintf(stderr, "[PATCH] AI object pool: %d blocks of %u bytes (the game's 128)\n", n, sz);
    return 1; }

/* Bot names.  Each faction's names are a text table (TEXT/BOTNAMES_{ALLIANCE,EMPIRE,CIS,REPUBLIC}.ASR: 48 names each, in the
 * language played); the bot fill takes name n of the bot's faction (func_0883458C -> func_088346E0(table, n)), which is NULL past the
 * table's end, so with more than 48 bots on a side the rest were called "[NULL]".  Past the end this makes a new name from the same
 * faction's table: a rebel's first name with another rebel's surname, a trooper's letters with a new number ("AG 176" -> "AG 903"),
 * "Unit" / "Alpha" ... with a new number for droids and clones.  Made once per (faction, n), in the game's heap, UTF-16 as the table. */
#define BOTNAME_MAX 8192
#define G16(a) GU16(a)
#define G32(a) GU32(a)
static int botname_faction(u32 hash){ return hash == 0x069928D5u ? 0 : hash == 0xA1EEEAB2u ? 1 : hash == 0x7D0DB56Fu ? 2 : hash == 0x81BE6EFAu ? 3 : -1; }
static int wlen(u32 s){ int n = 0; while (n < 64 && G16(s + 2u * (u32)n)) n++; return n; }
static int wsplit(u32 s, int n){ for (int i = n - 1; i > 0; i--) if (G16(s + 2u * (u32)i) == ' ') return i; return -1; }   /* last space */
static int wnum(u32 s, int from, int n){ if (from >= n) return 0; for (int i = from; i < n; i++) { u16 c = G16(s + 2u * (u32)i); if (c < '0' || c > '9') return 0; } return 1; }
int rs_text_get(u32 table, u32 idx, u32 *rv){
    if ((s32)idx < 0 || idx < G32(table + 16) || idx >= BOTNAME_MAX) return 0;
    int fac = botname_faction(G32(table)); u32 cnt = G32(table + 16), arr = G32(table + 8);
    if (fac < 0 || !cnt || !arr || !rs_setting_int("RS_GAME_PATCHES", 1)) return 0;
    static u32 made[4][BOTNAME_MAX];
    if (made[fac][idx]) { *rv = made[fac][idx]; return 1; }
    u32 k = idx - cnt, a = G32(arr + 4u * (idx % cnt)), b = G32(arr + 4u * ((idx * 7u + k / cnt * 5u + 3u) % cnt));
    if (!a || !b) return 0;
    u16 out[64]; int n = 0, la = wlen(a), lb = wlen(b), sa = wsplit(a, la), sb = wsplit(b, lb);
    for (u32 i = 1; i < cnt && sa <= 0; i++) { a = G32(arr + 4u * ((idx + i) % cnt)); if (!a) return 0; la = wlen(a); sa = wsplit(a, la); }   /* "Reeech": one word */
    if (sa > 0 && wnum(a, sa + 1, la)) {                                /* "AG 176", "Unit 176", "Alpha 345": its prefix, a new number */
        u32 num = (idx * 389u + 211u) % 900u + 100u;
        for (int tries = 0; tries < 900; tries++, num = num == 999 ? 100 : num + 1) {   /* not one of the table's own */
            int clash = 0;
            for (u32 i = 0; i < cnt && !clash; i++) { u32 s = G32(arr + 4u * i); int l = wlen(s), p = wsplit(s, l);
                if (p > 0 && l - p - 1 == 3 && wnum(s, p + 1, l)) { u32 v = 0; for (int j = p + 1; j < l; j++) v = v * 10 + (G16(s + 2u * (u32)j) - '0');
                    if (v == num && p == sa) { clash = 1; for (int j = 0; j < p; j++) if (G16(s + 2u * (u32)j) != G16(a + 2u * (u32)j)) { clash = 0; break; } } } }
            if (!clash) break; }
        for (int i = 0; i <= sa && n < 56; i++) out[n++] = G16(a + 2u * (u32)i);
        out[n++] = (u16)('0' + num / 100); out[n++] = (u16)('0' + num / 10 % 10); out[n++] = (u16)('0' + num % 10); }
    else {                                                             /* "Fin Olesa": a's first name, b's surname */
        if (sb <= 0 || sa <= 0 || a == b) { for (int i = 0; i < la && n < 60; i++) out[n++] = G16(a + 2u * (u32)i); }
        else { int fa = 0; while (fa < la && G16(a + 2u * (u32)fa) != ' ') fa++;   /* first word of a */
            for (int i = 0; i < fa && n < 30; i++) out[n++] = G16(a + 2u * (u32)i);
            int fb = 0; while (fb < lb && G16(b + 2u * (u32)fb) != ' ') fb++;   /* rest of b */
            for (int i = fb; i < lb && n < 60; i++) out[n++] = G16(b + 2u * (u32)i); } }
    out[n++] = 0;
    u32 m = func_08A94838(2u * (u32)n, 0, 0, 0).v0; if (!m) return 0;
    for (int i = 0; i < n; i++) G16(m + 2u * (u32)i) = out[i];
    if (rs_setting_int("RS_LOG_BOTNAMES", 0)) { char t[64]; for (int i = 0; i < n; i++) t[i] = out[i] < 128 ? (char)out[i] : '?'; fprintf(stderr, "[PATCH] bot name %d/%u of faction %d: %s\n", (int)idx, cnt, fac, t); }
    made[fac][idx] = m; *rv = m; return 1; }
