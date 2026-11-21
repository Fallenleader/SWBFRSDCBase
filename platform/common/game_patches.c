#include <execinfo.h>
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
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "psp_impl.h"
#include "guest.h"
#include "game_hooks.h"
#include "ai_bridge.h"

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
        { int st = rs_setting_int("RS_START_TICKETS", 0); if (st > 0) { if ((u32)st > hi) *max = hi = (u32)st; GU32(var) = (u32)st; fprintf(stderr, "[PATCH] tickets at start: %d (RS_START_TICKETS)\n", st); } }
        u32 cur = GU32(var);
        /* the profiling build's 9999 tickets (RS_START_TICKETS) stayed in the game's options (clamped to the menu's top since): a count
         * at the top goes back to the game's own top, 200, once (a marker file); counts chosen in the menu afterwards stay */
        if (rs_setting_int("RS_START_TICKETS", 0) <= 0 && cur >= hi) {
            extern const char *rs_platform_data_dir(void); char mk[512]; snprintf(mk, sizeof mk, "%s/tickets_reset.txt", rs_platform_data_dir());
            FILE *f = fopen(mk, "r");
            if (!f) { GU32(var) = cur = 200; fprintf(stderr, "[PATCH] tickets: the test's count (%u) reset to 200, once\n", hi);
                f = fopen(mk, "w"); if (f) fprintf(f, "the profiling test's ticket count was reset to 200 (game_patches.c); delete this file to reset it again\n"); }
            if (f) fclose(f); }
        if (cur < lo) GU32(var) = lo; else if (cur > hi) GU32(var) = hi; }
    else if (var == IMG(VAR_PLAYERS_SP) && *max == 16) {
        int v = rs_setting_int("RS_MAX_PLAYERS", 64); if (v < 16) v = 16;
        fprintf(stderr, "[PATCH] min players (including AI), offline: maximum %u -> %d\n", *max, v); *max = (u32)v;
        {   /* a mission set up: a new profiling segment (the Vita profiling build) and a mark in the census's frames.txt */
            static int seg; extern void rs_prof_segment(void) __attribute__((weak)); extern void rs_cen_segment(int);
            fprintf(stderr, "[MATCH] setup %d (profile segment %d)\n", seg + 1, seg + 1); if (rs_prof_segment) rs_prof_segment(); rs_cen_segment(++seg); }
        { const char *t = getenv("RS_TEST_PLAYERS"); if (t) GU32(var) = (u32)atoi(t); }       /* test harness: start with this many */
        { const char *t = getenv("RS_TEST_TICKETS"); if (t) GU32(IMG(VAR_TICKETS)) = (u32)atoi(t); } }
}

/* every frame (after the pad read): a network game keeps the game's own ticket range */
void rs_renderer_frame(void);
void rs_patches_frame(void){
#ifdef RS_DESKTOP
    { extern void rs_ai_bridge_frame(void); rs_ai_bridge_frame(); }   /* ai_bridge.c: RS_AI_BRIDGE=<host:port> */
#endif
    rs_renderer_frame();                                                  /* renderer_option.c */
    { extern void rs_ai_frame(void); rs_ai_frame(); } { extern void rs_ai_frame_count(void); rs_ai_frame_count(); }                      /* idle squads (below) */
#ifdef RS_DESKTOP
    { extern void rs_dedicated_after_match(unsigned); static unsigned fr, nb; if (fr++ % 30 == 0) { static struct rs_ai_rec tmp[256]; nb = (unsigned)rs_ai_snapshot(tmp, 256, 0, 0); }
      rs_dedicated_after_match(nb); { extern volatile int rs_vclock_match; rs_vclock_match = nb > 0; } }                                                                       /* RS_DEDICATED=2 (AI training): through team selection and results */
#endif
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

/* AI squads and command posts (traced in the decompiled code; Ghidra names FUN_xxx = func_xxx).  Each team's commander
 * (func_089279D4 and the functions next to it) puts its bots in squads and sends squads to command posts:
 *  - squad sizes: func_08926220 counts the team's bots, clamps the count to 16 and copies that row of a table (0x08AD9888, ten
 *    sizes a row; 16 bots: 4,3,3,3,3) to commander +0x10; func_0892774C fills squads up to those sizes and gives a bot that fits
 *    nowhere a squad of its own (one bot) while there are squad slots (ten), the rest of the team in no squad at all;
 *  - command posts: commander +0x48 = the posts to take (next to ours), +0x49 = ours to hold (next to the enemy's), +0x50 a
 *    priority each; func_08926478(commander, squad, post) sends a squad (order 0x3F2, squad +0x3C the post); the squad then
 *    attacks or holds the post by whose it is.  Squad +0xAC = its bots.
 * With more than 16 bots a side the squads stayed those of 16 and the rest stood about as one-bot squads or with no squad at all,
 * and squads sent to hold a post parked their bots there.  So:
 *  - more than 16 bots a side (offline): eight squads for all of them, the first three of at most 5 bots (rs_ai_squad_caps);
 *  - every game: a post of ours is held by at most RS_AI_DEFENDERS bots (5): a squad that would go past that is sent to the
 *    best post to take instead (rs_ai_assign). */
extern u64 func_0898BC68(u32, u32);
extern u32 func_08926FD0(u32);
extern void func_08926478(u32, u32, u32);
#define CP_IDS   0x08B1B510u      /* the map's command posts (ids), CP_COUNT of them (at most 8) */
#define CP_COUNT 0x08C25390u
#define UL_COUNT 0x08C2C56Cu       /* the game's soldier count (the list below) */
static u32 ai_cmd[2];                                              /* the two commanders (rs_ai_squad_caps sees them) */
static int pol_squad(u32 sq); static int pol_bot(u32 id);          /* policy control (below) */
void rs_ai_squad_caps(u32 cmd){
    if (cmd && GU32(cmd + 4)) ai_cmd[GU32(GU32(cmd + 4) + 0x4C) & 1] = cmd;
    if (!on() || GU8(IMG(MODE_NETWORK)) == 1 || !cmd) return;
    u32 n = (GU32(IMG(VAR_PLAYERS_SP)) + 1) / 2; if (n <= 16) return;
    u32 cap[10] = {0}, left = n;
    for (int i = 0; i < 3; i++) { cap[i] = left < 5 ? left : 5; left -= cap[i]; }
    for (int i = 3; i < 8; i++) { u32 k = (u32)(8 - i); cap[i] = (left + k - 1) / k; left -= cap[i]; }
    for (int i = 0; i < 10; i++) GU32(cmd + 0x10 + 4u * (u32)i) = cap[i];
    { static u32 last; if (last != n) { last = n; fprintf(stderr, "[PATCH] AI squads for %u bots a side: %u %u %u %u %u %u %u %u\n", n, cap[0], cap[1], cap[2], cap[3], cap[4], cap[5], cap[6], cap[7]); } } }
/* best post for a squad to go to: the take post with the highest priority, else any post not ours (999: none) */
static u32 ai_best_post(u32 cmd){
    u32 ncp = GU32(IMG(CP_COUNT)); if (ncp > 8) return 999;
    u32 best = 999; float bp = -1e30f;
    for (u32 k = 0; k < ncp; k++) if ((GU8(cmd + 0x48) >> k) & 1) { float p = GF32(cmd + 0x50 + 4u * k); if (p > bp) { bp = p; best = GU32(IMG(CP_IDS) + 4u * k); } }
    for (u32 k = 0; k < ncp && best == 999; k++) if (!((GU8(cmd + 0x4A) >> k) & 1)) best = GU32(IMG(CP_IDS) + 4u * k);
    return best; }
/* Squads the commander has formed but not sent anywhere (target post 999) stand where they spawned until their bots die and
 * respawn into other squads - most of a side at the start of a match.  Every second (offline), such a squad is sent to the
 * best post to take.  The commanders are forgotten between matches. */
void rs_ai_debug(unsigned fr); void rs_ai_bots(unsigned fr); static void ai_unstick(unsigned fr);
void rs_ai_frame(void){
    static unsigned fr;
    if (GU32(IMG(UL_COUNT)) == 0) { ai_cmd[0] = ai_cmd[1] = 0; { extern void rs_ai_release_all(void); rs_ai_release_all(); } { extern void rs_ai_events_reset(void); rs_ai_events_reset(); } return; }   /* between matches: no squads */
    if (!on() || GU8(IMG(MODE_NETWORK)) == 1 || ++fr % 30) return;
    { static int dbg = -1; if (dbg < 0) dbg = getenv("RS_AI_DEBUG") != 0; if (dbg && fr % 300 == 0) rs_ai_debug(fr); }
    { static int bl = -1; if (bl < 0) bl = getenv("RS_AI_BOTS") != 0; if (bl && fr % 60 == 0) rs_ai_bots(fr); }
    if (!rs_setting_int("RS_AI_IDLE_FIX", 1)) return;
    for (int c = 0; c < 2; c++) { u32 cmd = ai_cmd[c]; if (!cmd) continue; u32 team = GU32(cmd + 4); if (!team) continue;
        u32 ns = GU32(team + 0x48); if (ns > 10) ns = 10;
        for (u32 j = 0; j < ns; j++) { u32 sq = (u32)func_0898BC68(team, j); if (!sq || !GU32(sq + 0xAC) || GU32(sq + 0x3C) != 999 || GU8(sq + 0x2A) || GU8(sq + 0x2C) || pol_squad(sq)) continue;
            u32 best = ai_best_post(cmd); if (best == 999) break;
            if (rs_setting_int("RS_AI_LOG", 0)) fprintf(stderr, "[AI] team %u: idle squad %u (%u bots) sent to post %u\n", GU32(team + 0x4C), j, GU32(sq + 0xAC), best);
            func_08926478(cmd, j, best); } }
    ai_unstick(fr); }
/* RS_AI_BOTS=1 (test harness): every 2 s, each soldier's position, how far it moved, its squad and the squad's order */
extern u64 func_08ABCA14(u32, u32, u32); extern u64 func_08A26FC0(u32); u32 rs_unit_list(void);
#ifdef RS_GUEST64
static int gok(u32 a){ return a >= 0x08800000u && a < 0x0C000000u && !(a & 3); }    /* a guest address in the window */
#else
static int gok(u32 a){ return a >= 0x10000u && !(a & 3); }                           /* 32-bit: native pointers */
#endif
#ifndef GFN
#define GFN(a) ((void *)(uintptr_t)(u32)(a))
#endif
#ifndef GP
#define GP(a) ((void *)(uintptr_t)(u32)(a))
#endif
static int ai_goal(u32 o){ u32 b = GU32(o + 0xB0); if (!gok(b)) return -1; u32 g = GU32(b + 0xC); if (!gok(g)) return -2; return GU16(g + 10); }
static const float *soldier_pos(u32 o){ if (!gok(o) || !gok(GU32(o))) return 0; u32 sub = o + GU32(GU32(o) - 12); if (!gok(sub) || !gok(GU32(sub))) return 0;
    u32 fn = GU32(GU32(sub) + 0x14); if (!gok(fn)) return 0;
    u32 p = ((ifn_t)GFN(fn))(sub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0).v0; return gok(p) ? (const float *)GP(p) : 0; }
void rs_ai_bots(unsigned fr){
    static u32 ids[512]; static float last[512][3]; static int idle[512];
    u32 tb = IMG(0x08C2A880u), bk = GU32(tb), nbk = GU32(tb + 4); if (!gok(bk) || nbk > 4096) return;
    int nidle = 0, nb = 0;
    for (u32 bi = 0; bi < nbk; bi++) for (u32 nd = GU32(bk + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
        if (GU8(nd + 8)) continue; u32 o = GU32(nd); if (!gok(o) || !gok(GU32(o))) continue;
        u32 so = o + GU32(GU32(o) - 16); if (!gok(so)) continue; u32 id = GU32(so + 4);
        const float *p = soldier_pos(o); if (!p) continue;
        int k = -1; for (int j = 0; j < 512; j++) if (ids[j] == id) { k = j; break; }
        if (k < 0) { for (int j = 0; j < 512; j++) if (!ids[j]) { k = j; ids[j] = id; memcpy(last[j], p, 12); idle[j] = 0; break; } if (k < 0) continue; }
        float dx = p[0] - last[k][0], dz = p[2] - last[k][2], d = sqrtf(dx * dx + dz * dz); memcpy(last[k], p, 12);
        int alive = GU8(o + 5) && GU8(o + 0x40);
        idle[k] = (d < 1.5f && alive) ? idle[k] + 1 : 0;
        u32 sq = GU32(o + 0xE4); if (!gok(sq)) sq = 0;
        nb++; if (idle[k] >= 3) nidle++;
        if (idle[k] >= 3 || getenv("RS_AI_BOTS_ALL"))
            fprintf(stderr, "[BOT] f%u goal %d id %x team %u pos %.0f %.0f %.0f moved %.1f idle %ds alive %d obj %08x squad %08x order %x post %u slot %u insq %u veh %x ctl %u fl %08x veh0 %x busy %u\n", fr, ai_goal(o), id,
                GU32(o + 12), p[0], p[1], p[2], d, idle[k] * 2, alive, o, sq, sq ? GU32(sq + 0x4C) : 0, sq ? GU32(sq + 0x3C) : 0, GU32(o + 0xF0), GU8(o + 0xE8), GU32(o + 0xF8), GU32(o + 0x54), GU32(o + 0xC8), GU32(o + 0xE0), GU8(o + 0x149));
        if ((idle[k] >= 3 || getenv("RS_AI_BOTS_ALL")) && !sq) fprintf(stderr, "[BOT]    no squad: ctl %u flags %08x b0 %08x goal %d 149 %u\n", GU32(o + 0x54), GU32(o + 0xC8), GU32(o + 0xB0), ai_goal(o), GU8(o + 0x149)); }
    fprintf(stderr, "[BOT] f%u: %d soldiers, %d idle 6 s or more\n", fr, nb, nidle); }
/* RS_DRIVE (hle.c) state report.  Every object the game made registers in its object hash (buckets at 0x08C2C200, mask 0x08C2C204 - 1;
 * entries { object, next, removed }, func_08A037D4); its info block (object + vtable[-16]) holds the id (+4) and the class (+8:
 * 0x8005 soldier, 0x8004 flyer, ...); its placement component (object + vtable[-12]) answers position (method +12) and keeps health
 * at +0x28 (as 08A049C0 and func_0898CD0C read them).  One line per soldier and vehicle:
 *   "obj <id> <class> <x> <y> <z> <health> <player> m <3x3 rows>"  (game axes; the matrix from the component's method +16),
 * player = 1 for the soldier the pad drives (+92 = the input object).  (health: +0x28 reads 0 for these objects - not the field.) */
u32 rs_input_object(void);
static unsigned probe_fr;
void rs_drive_report(FILE *f){
    fprintf(f, "pfr %u\n", probe_fr);
    {   /* RS_DRIVE_PEEK=a,b,...: words (hex addresses) as int and float */
        const char *pk = getenv("RS_DRIVE_PEEK");
        if (pk) { char buf[512]; snprintf(buf, sizeof buf, "%s", pk); fprintf(f, "peek");
            for (char *t = strtok(buf, ","); t; t = strtok(NULL, ",")) { u32 x = (u32)strtoul(t, 0, 16); if (!gok(x)) continue; u32 w = GU32(x); float fw; memcpy(&fw, &w, 4); fprintf(f, " %08x:%d/%.3f", x, (int)w, fw); }
            fprintf(f, "\n"); } }
    {   /* RS_DRIVE_MEMSCAN=v1,v2: once per report, the user-memory words holding v1 and v2 (as int or float) within 64 bytes */
        const char *ms = getenv("RS_DRIVE_MEMSCAN"); int a = 0, b = 0;
        if (ms && sscanf(ms, "%d,%d", &a, &b) == 2) {
            float fa = (float)a, fb = (float)b; int n = 0;
            for (u32 x = 0x08B00000u; x < 0x0BFFF000u && n < 60; x += 4) {
                if (!gok(x)) continue; u32 w = GU32(x); float fw; memcpy(&fw, &w, 4);
                if (w != (u32)a && fw != fa) continue;
                for (u32 y = x - 64; y <= x + 64; y += 4) { if (y == x || !gok(y)) continue; u32 v = GU32(y); float fv; memcpy(&fv, &v, 4);
                    if (v == (u32)b || fv == fb) { fprintf(f, "memscan %08x=%s %08x=%s\n", x, w == (u32)a ? "int" : "float", y, v == (u32)b ? "int" : "float"); n++; } } } } }
    if (getenv("RS_DRIVE_SQUADS")) {   /* the team spawn managers (class 0x800C, registry 0x08C2A330; 0898ABFC fills the post weights) */
        u32 lb = GU32(IMG(0x08C2A330u)), ln = GU32(IMG(0x08C2A334u)), np = GU32(IMG(0x08C25390u));
        fprintf(f, "posts %u:", np); for (u32 i = 0; i < np && i < 8; i++) fprintf(f, " %x/%02x", GU32(IMG(0x08B1B510u) + 4 * i), GU8(IMG(0x08C25394u) + i)); fprintf(f, "\n");
        if (gok(lb) && ln && ln <= 4096) for (u32 bi = 0; bi < ln; bi++) for (u32 nd = GU32(lb + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
            u32 o = GU32(nd); if (!gok(o)) continue; u32 n = GU32(o + 0x58); if (n > 8) n = 8;
            fprintf(f, "squad %08x team %u b50 %02x %02x %02x %02x b54 %02x n %u total %.2f:", o, GU32(o + 0x4C), GU8(o + 0x50), GU8(o + 0x51), GU8(o + 0x52), GU8(o + 0x53), GU8(o + 0x54), GU32(o + 0x58), GF32(o + 0x5C));
            for (u32 i = 0; i < n; i++) fprintf(f, " %x:%u/%.2f", GU32(o + 0x60 + 4 * i), GU32(o + 0x80 + 4 * i), GF32(o + 0xA0 + 4 * i));
            fprintf(f, "\n"); } }
    if (getenv("RS_DRIVE_SPAWNERS")) {   /* the unit spawners (registry 0x08C2C664: 0x800D family): team +0x58, post +0x68, timer +0xA8, unit +0x1C */
        const char *ra = getenv("RS_DRIVE_SPAWNERS"); u32 rg = ra[0] == '0' ? (u32)strtoul(ra, 0, 16) : 0x08C29FC4u;   /* (=1: the 0x800D registry; or an address) */
        u32 lb = GU32(IMG(rg)), ln = GU32(IMG(rg + 4));
        fprintf(f, "spawners");
        if (gok(lb) && ln && ln <= 4096) for (u32 bi = 0; bi < ln; bi++) for (u32 nd = GU32(lb + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
            u32 o = GU32(nd); if (!gok(o)) continue;
            fprintf(f, " %x:t%u/p%x/%.1f/u%x/c%x", GU32(o + 4), GU32(o + 0x58), GU32(o + 0x68), GF32(o + 0xA8), GU32(o + 0x1C), GU16(o + 0xE4)); }
        fprintf(f, "\n"); }
    if (getenv("RS_DRIVE_LIST")) {   /* RS_DRIVE_LIST=addr: a registry like 0x08C2C200 (buckets, count): each entry's id and class */
        u32 la = (u32)strtoul(getenv("RS_DRIVE_LIST"), 0, 16), lb = GU32(IMG(la)), ln = GU32(IMG(la + 4));
        fprintf(f, "list %08x", la);
        if (gok(lb) && ln && ln <= 4096) for (u32 bi = 0; bi < ln; bi++) for (u32 nd = GU32(lb + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
            u32 o = GU32(nd); if (!gok(o) || !gok(GU32(o))) continue;
            u32 vt = GU32(o), info = o + GU32(vt - 16); if (!gok(info)) continue;
            fprintf(f, " %x:%x%s", GU32(info + 4), GU16(info + 8), GU8(nd + 8) ? "d" : ""); }
        fprintf(f, "\n"); }
    u32 bk = GU32(IMG(0x08C2C200u)), nb = GU32(IMG(0x08C2C204u)), me = rs_input_object(); if (!gok(bk) || nb == 0 || nb > 65536) return;
    for (u32 bi = 0; bi < nb; bi++) for (u32 nd = GU32(bk + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
        if (GU8(nd + 8)) continue; u32 o = GU32(nd); if (!gok(o) || !gok(GU32(o))) continue;
        u32 vt = GU32(o), info = o + GU32(vt - 16), plc = o + GU32(vt - 12); if (!gok(info) || !gok(plc) || !gok(GU32(plc))) continue;
        u32 cls = GU16(info + 8); static int all = -1; if (all < 0) all = getenv("RS_DRIVE_ALL") != 0;
        if (!all && cls != 0x8005 && cls != 0x8004 && (cls < 0x8008 || cls > 0x801F)) continue;
        u32 fn = GU32(GU32(plc) + 12); if (!gok(fn)) continue;
        u32 pp = ((ifn_t)GFN(fn))(plc, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0).v0; if (!gok(pp)) continue;
        const float *p = (const float *)GP(pp);
        u32 fm = GU32(GU32(plc) + 16); const float *m = 0;
        if (gok(fm)) { u32 mp = ((ifn_t)GFN(fm))(plc, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0).v0; if (gok(mp)) m = (const float *)GP(mp); }
        fprintf(f, "obj %x %x %.4f %.4f %.4f %.2f %d", GU32(info + 4), cls, p[0], p[1], p[2], (cls == 0x8005 ? GF32(o + 0x25C) : GF32(plc + 0x28)), me && cls == 0x8005 && GU32(o + 92) == me);
        if (m) fprintf(f, " m %.4f %.4f %.4f %.4f %.4f %.4f %.4f %.4f %.4f", m[0], m[1], m[2], m[3], m[4], m[5], m[6], m[7], m[8]);
        if (cls == 0x8005 && getenv("RS_DRIVE_MAXHP")) fprintf(f, " mx %.2f", GF32(o + 0x34));   /* the target panel's maximum (08A56570: object +52) */
        if (me && cls == 0x8005 && GU32(o + 92) == me) { u32 w = GU32(o + 0x68); if (gok(w)) { fprintf(f, " ammo"); for (u32 j = 0x98; j <= 0xB0; j += 4) fprintf(f, " %d", (int)GU32(w + j)); } }   /* the weapon (soldier +0x68): clip at +0xA0 */
        fprintf(f, "\n");
        if (me && cls == 0x8005 && GU32(o + 92) == me && getenv("RS_DRIVE_BODYSCAN")) {   /* finding the soldier's other bodies */
            for (u32 k = 0; k < 0x600; k += 4) { u32 w = GU32(o + k); if (!gok(w)) continue; u32 b = GU32(w + 12); if (!gok(b)) continue;
                u32 cp = GU32(b + 0x118); if (!gok(cp)) continue;
                float x0 = GF32(cp), y0 = GF32(cp + 4), z0 = GF32(cp + 8), x1 = GF32(cp + 112), y1 = GF32(cp + 116), z1 = GF32(cp + 120);
                if (x0 != x0 || fabsf(x1 - x0) > 50 || fabsf(x1 - x0) < 1e-4f) continue;
                fprintf(f, "body at +%x: corner0 %.3f %.3f %.3f corner7 %.3f %.3f %.3f\n", k, x0, y0, z0, x1, y1, z1); } }
        if (me && cls == 0x8005 && GU32(o + 92) == me && getenv("RS_DRIVE_PTRSCAN")) {   /* finding fields one pointer away */
            u32 want = (u32)atoi(getenv("RS_DRIVE_PTRSCAN"));
            for (u32 k = 0; k < 0x600; k += 4) { u32 w = GU32(o + k); if (!gok(w) || !gok(w + 0x400)) continue;
                for (u32 j = 0; j < 0x400; j += 4) { u32 x = GU32(w + j); float fx; memcpy(&fx, &x, 4);
                    if (x == want || fx == (float)want) fprintf(f, "ptr +%x -> +%x = %s %u\n", k, j, x == want ? "int" : "float", want); } } }
        {   static u32 bid = 1; if (bid == 1) { const char *e = getenv("RS_DRIVE_BODYID"); bid = e ? (u32)strtoul(e, 0, 16) : 0; }
            if (bid && GU32(info + 4) == bid) {                                /* an object's physics body (object +40 -> +12) */
                u32 w = GU32(o + 40), b = gok(w) ? GU32(w + 12) : 0;
                if (gok(b)) { fprintf(f, "obody %x flags %08x pos %.3f %.3f %.3f", bid, GU32(b + 0xF8), GF32(b + 0xC0), GF32(b + 0xC4), GF32(b + 0xC8));
                    u32 cp = GU32(b + 0x118); if (gok(cp)) { fprintf(f, " corners"); for (u32 k = 0; k < 8 * 16; k += 16) fprintf(f, " %.3f %.3f %.3f", GF32(cp + k), GF32(cp + k + 4), GF32(cp + k + 8)); }
                    fprintf(f, "\n"); } } }
        {   /* RS_DRIVE_TGTSCAN=1: fields of a soldier that hold another soldier's object (seen this or last frame) - AI target fields */
            static u32 objs[256], ids[256], n_obj; static int ts = -1; if (ts < 0) ts = getenv("RS_DRIVE_TGTSCAN") != 0;
            if (ts && cls == 0x8005) {
                u32 j; for (j = 0; j < n_obj && objs[j] != o; j++) ;
                if (j == n_obj && n_obj < 256) { objs[n_obj] = o; ids[n_obj] = GU32(info + 4); n_obj++; }
                for (u32 k = 0x40; k < 0x800; k += 4) { u32 w = GU32(o + k); if (w == o) continue;
                    for (j = 0; j < n_obj; j++) if (w == objs[j] || (w == ids[j] && w != GU32(info + 4))) { fprintf(f, "tgt %x +%x -> %x %s\n", GU32(info + 4), k, ids[j], w == objs[j] ? "obj" : "id"); break; } }
                u32 c = GU32(o + 92);                                          /* its controller (the bot's brain): objects or ids */
                if (gok(c)) for (u32 k = 0; k < 0x800; k += 4) { u32 w = GU32(c + k); if (w == o) continue;
                    for (j = 0; j < n_obj; j++) if (w == objs[j] || (w == ids[j] && w > 0x1000)) { fprintf(f, "ctgt %x +%x -> %x %s\n", GU32(info + 4), k, ids[j], w == objs[j] ? "obj" : "id"); break; } }
            }
        }
        if (cls == 0x8005 && getenv("RS_DRIVE_WEAP")) {    /* a soldier's weapons (+236 -> slots +0.. / +48.., counts bytes +122 / +123): type code +188 */
            u32 inv = GU32(o + 236);
            if (gok(inv)) { u32 n1 = GU8(inv + 122), n2 = GU8(inv + 123); fprintf(f, "weap %x %u %u:", GU32(info + 4), n1, n2);
                for (u32 k = 0; k < 12; k++) { u32 w = GU32(inv + (k < 6 ? 4 * k : 48 + 4 * (k - 6))); if (!gok(w)) continue;
                    fprintf(f, " [%u] code %u", k, GU32(w + 188)); u32 wi = gok(GU32(w)) ? w + GU32(GU32(w) - 16) : 0; if (gok(wi)) fprintf(f, " cls %x", GU16(wi + 8));
                    for (u32 j = 0; j < 200; j += 4) { u32 x = GU32(w + j); if (x >> 24 == 0 && x > 0x01000000) {} }
                    fprintf(f, " h %08x %08x", GU32(w + 4), GU32(w + 8)); }
                fprintf(f, "\n"); } }
        if (getenv("RS_DRIVE_POSTS")) { u32 dv = 0; for (u32 k = 0; k < 0x800 && !dv; k += 4) if (GU32(o + k) == 0x08B086A0u) dv = o + k;   /* the post visual (089E9A24) */
            if (dv) { u32 b = dv; fprintf(f, "postvis %x cls %x at +%x base +%x owner %d full %.3f amount %.3f\n", GU32(info + 4), cls, dv - o, b - o, (int)GU32(b + 0x54), GF32(b + 0x60), GF32(b + 0x64)); } }
        if (cls == 0x8010 && getenv("RS_DRIVE_POSTS")) {   /* a command post (089E9A24): owner +0x54, full +0x60, amount +0x64; the animCap clip record's +0x14 */
            static float capv = -1; if (capv < 0) { u32 n = GU32(IMG(0x08B204FCu)); int k = 0;
                while (gok(n) && k++ < 64) { u32 h = GU32(n); if (h == 0x0C95772Cu) { capv = GF32(n + 4 + 20); break; } n = GU32(n + 4u * (h < 0x0C95772Du ? 0x1Eu : 0x1Du)); } }
            u32 dv = 0; for (u32 k = 0; k < 0x600 && !dv; k += 4) if (GU32(o + k) == 0x08B086A0u) dv = o + k;
            if (!dv) for (u32 k = 4; k < 0x600 && !dv; k += 4) if (GU32(o - k) == 0x08B086A0u) dv = o - k;
            if (dv) dv += GU32(GU32(dv) - 0x18);
            fprintf(f, "post %x cap14 %.3f dv %x", GU32(info + 4), capv, dv ? dv - o : 0);
            if (dv) fprintf(f, " owner %d full %.3f amount %.3f", (int)GU32(dv + 0x54), GF32(dv + 0x60), GF32(dv + 0x64)); fprintf(f, "\n"); }
        if (cls == 0x8004 && getenv("RS_DRIVE_VEHIN")) {   /* a flyer's controller (+92) and its axes 0..14 (vfunc +8), the inputs it set */
            u32 c = GU32(o + 92);
            if (gok(c) && gok(GU32(c))) { u32 g = GU32(GU32(c) + 8); fprintf(f, "vin %x ctl %x vt %x get %x idx %u axes", GU32(info + 4), c, GU32(c), g, GU32(c + 12));
                if (gok(g)) for (u32 n = 0; n < 15; n++) fprintf(f, " %.2f", ((ifn_t)GFN(g))(c, n, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0).f0);
                fprintf(f, " | thr %.2f yaw %.2f pitch %.2f roll %.2f flags %08x %08x %08x t740 %.3f\n", GF32(o + 492), GF32(o + 484), GF32(o + 480), GF32(o + 488), GU32(o + 844), GU32(o + 848), GU32(o + 852), GF32(o + 740));
                static u32 dumped; if (dumped != c && gok(GU32(c + 8))) { dumped = c;          /* its control scheme's binding chains, once */
                    u32 t = GU32(c + 8) + GU32(c + 12) * 16, n = GU32(t), heads = GU32(t + 4);
                    for (u32 a = 0; a < n && a < 40 && gok(heads); a++) { u32 b = GU32(heads + 4 * a); int k = 0; fprintf(f, "vbind %u:", a);
                        while (gok(b) && k++ < 8) { fprintf(f, " {vt %08x s %.2f %08x %08x %08x", GU32(b), GF32(b + 4), GU32(b + 12), GU32(b + 16), GU32(b + 20));
                            u32 c1 = GU32(b + 12), c2 = GU32(b + 16);
                            if (gok(c1) && gok(GU32(c1))) fprintf(f, " a{vt %08x %08x %08x}", GU32(c1), GU32(c1 + 12), GU32(c1 + 16));
                            if (gok(c2) && gok(GU32(c2))) fprintf(f, " b{vt %08x %08x %08x}", GU32(c2), GU32(c2 + 12), GU32(c2 + 16));
                            fprintf(f, "}"); b = GU32(b + 8); }
                        fprintf(f, "\n"); } } } }
        if (cls == 0x8005 && getenv("RS_DRIVE_AICTL")) {   /* a bot's AI controller (soldier +88): its vtable, the wanted speed +72, its first words */
            u32 c = GU32(o + 88);
            if (!gok(c)) fprintf(f, "aictl %x raw %08x\n", GU32(info + 4), c);
            if (gok(c) && gok(GU32(c))) { u32 blk = GU32(c + 56); fprintf(f, "aictl %x ctl %x vt %x svt %x s240 %x flags %08x vel %.3f %.3f %.3f w", GU32(info + 4), c, GU32(c), GU32(o), GU32(GU32(o) + 240), gok(blk) ? GU32(blk + 112) : 0, GF32(c + 72), GF32(c + 76), GF32(c + 80));
                for (u32 k = 0; k < 0x80; k += 4) fprintf(f, " %08x", GU32(c + k));
                {   u32 in = GU32(o + 92), g = gok(in) && gok(GU32(in)) ? GU32(GU32(in) + 8) : 0;   /* the sprint flag (+520 bit 5) and its control, 21 */
                    fprintf(f, " | f520 %08x in %x", GU32(o + 520), in);
                    if (gok(g)) fprintf(f, " c20 %.2f c21 %.2f", ((ifn_t)GFN(g))(in, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0).f0, ((ifn_t)GFN(g))(in, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0).f0); }
                fprintf(f, "\n"); } }
        if (cls == 0x8005 && getenv("RS_DRIVE_OBJ")) {   /* soldier objects, raw (finding fields) */
            fprintf(f, "pobj %x %x", GU32(info + 4), o); for (u32 k = 0; k < 0x600; k += 4) fprintf(f, " %08x", GU32(o + k)); fprintf(f, "\n"); }
        if (me && cls == 0x8005 && GU32(o + 92) == me && getenv("RS_DRIVE_BODY")) {   /* the player's physics body (soldier +40 -> +12), raw */
            u32 w = GU32(o + 40), b = gok(w) ? GU32(w + 12) : 0;
            if (gok(b)) { fprintf(f, "pbody %x", b); for (u32 k = 0; k < 0x180; k += 4) fprintf(f, " %08x", GU32(b + k)); fprintf(f, "\n");
                u32 cp = GU32(b + 0x118); if (gok(cp)) { fprintf(f, "pcorn"); for (u32 k = 0; k < 8 * 16; k += 4) fprintf(f, " %.4f", GF32(cp + k)); fprintf(f, "\n"); } } } } }
/* tests: set the player's soldier's health (+0x25C) */
extern rv_t func_08A61BE0(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
void rs_drive_health(float h){
    if (h < -1.5f) {                                                          /* -2 / -3: the debug commands "Kills all tanks" / "flyers" */
        extern rv_t func_08A61D98(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
        extern rv_t func_08A61DDC(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
        if (h > -2.5f) func_08A61D98(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); else func_08A61DDC(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        fprintf(stderr, "[DRIVE] kill all %s\n", h > -2.5f ? "tanks" : "flyers"); return; }
    if (h < 0) { func_08A61BE0(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); fprintf(stderr, "[DRIVE] kill (the debug command's message 0x8001)\n"); return; }   /* the game's "Kills yourself" */
    u32 bk = GU32(IMG(0x08C2C200u)), nb = GU32(IMG(0x08C2C204u)), me = rs_input_object(); if (!gok(bk) || !me) return;
    for (u32 bi = 0; bi < nb; bi++) for (u32 nd = GU32(bk + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
        u32 o = GU32(nd); if (!gok(o) || GU32(o + 92) != me) continue;
        memcpy(GP(o + 0x25C), &h, 4); fprintf(stderr, "[DRIVE] health %.1f\n", h); return; } }
/* tests: put the player's soldier at a point (game axes, feet): its physics body's position (+0xC0) and its box centre now and
 * before (+0xD0, +0xE0: 0.9 m up), velocity zeroed (+0x70) */
void rs_drive_teleport(float x, float y, float z){
    u32 bk = GU32(IMG(0x08C2C200u)), nb = GU32(IMG(0x08C2C204u)), me = rs_input_object(); if (!gok(bk) || !me) return;
    for (u32 bi = 0; bi < nb; bi++) for (u32 nd = GU32(bk + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
        u32 o = GU32(nd); if (!gok(o) || GU32(o + 92) != me) continue;
        u32 w = GU32(o + 40), b = gok(w) ? GU32(w + 12) : 0; if (!gok(b)) continue;
        float v[3] = { x, y, z }, c[3] = { x, y - 0.9f, z }, zero = 0;
        for (int k = 0; k < 3; k++) { memcpy(GP(b + 0xC0 + 4 * k), &v[k], 4); memcpy(GP(b + 0xD0 + 4 * k), &c[k], 4); memcpy(GP(b + 0xE0 + 4 * k), &c[k], 4); memcpy(GP(b + 0x70 + 4 * k), &zero, 4); }
        fprintf(stderr, "[DRIVE] teleport %.2f %.2f %.2f\n", x, y, z); return; } }
/* The AI bridge's view of the bots (ai_bridge.c, AIAgents branch): one record per AI-driven soldier in the game's AI object
 * table, with the fields traced above.  raw (may be 0) gets the first rawn bytes of each AI object, for finding the fields that
 * are not traced yet (health, ammunition, weapon, facing). */
/* the command posts for the AI bridge: position and owner (the team value, AI object +12, of the side whose commander has the
 * post in its "ours" mask, commander +0x4A; 0 = nobody's) */
extern u32 func_08ABC6F8(u32, u32, u32);
int rs_ai_posts(struct rs_ai_post *out, int max){
    u32 ncp = GU32(IMG(CP_COUNT)); if (ncp > 8) return 0; int n = 0;
    for (u32 k = 0; k < ncp && n < max; k++) {
        u32 id = GU32(IMG(CP_IDS) + 4u * k), cpo = func_08ABC6F8(0x08C2BA28u, id, 1); const float *p = gok(cpo) ? soldier_pos(cpo) : 0; if (!p) continue;
        struct rs_ai_post *q = &out[n++]; q->pos[0] = p[0]; q->pos[1] = p[1]; q->pos[2] = p[2]; q->id = id; q->owner = 0;
        for (int c = 0; c < 2; c++) { u32 cmd = ai_cmd[c]; if (cmd && GU32(cmd + 4) && ((GU8(cmd + 0x4A) >> k) & 1)) q->owner = GU32(GU32(cmd + 4) + 0x4C); } }
    return n; }
void rs_ai_extras(struct rs_ai_rec *r, int n);
int rs_ai_snapshot(struct rs_ai_rec *out, int max, u8 *raw, int rawn){
    u32 tb = IMG(0x08C2A880u), bk = GU32(tb), nbk = GU32(tb + 4); if (!gok(bk) || nbk > 4096) return 0;
    int n = 0;
    for (u32 bi = 0; bi < nbk; bi++) for (u32 nd = GU32(bk + 4 * bi); gok(nd) && n < max; nd = GU32(nd + 4)) {
        if (GU8(nd + 8)) continue; u32 o = GU32(nd); if (!gok(o) || !gok(GU32(o))) continue;
        u32 so = o + GU32(GU32(o) - 16); if (!gok(so)) continue;
        const float *p = soldier_pos(o); if (!p) continue;
        { static int pa = -1; if (pa < 0) pa = getenv("RS_AI_POSADDR") != 0;   /* field finding: where bot positions live (gdb watchpoints) */
          static unsigned cnt; if (pa && ++cnt % 97 == 1) fprintf(stderr, "[AIPOS] obj %08x id %x pos %p (%.1f %.1f %.1f) sub %08x\n", o, GU32(so + 4), (void *)p, p[0], p[1], p[2], o + GU32(GU32(o) - 12)); }
        struct rs_ai_rec *r = &out[n]; memset(r, 0, sizeof *r);
        u32 sq = GU32(o + 0xE4); if (!gok(sq)) sq = 0;
        r->id = GU32(so + 4); r->obj = o; r->team = GU32(o + 12); r->alive = GU8(o + 5) && GU8(o + 0x40);
        r->pos[0] = p[0]; r->pos[1] = p[1]; r->pos[2] = p[2];
        r->goal = ai_goal(o); r->squad_order = sq ? GU32(sq + 0x4C) : 0; r->squad_post = sq ? GU32(sq + 0x3C) : 999; r->has_squad = sq != 0;
        r->vehicle = GU32(o + 0xF8); r->ctl = GU32(o + 0x54); r->flags = GU32(o + 0xC8);
        { u32 sub = o + GU32(GU32(o) - 12); r->health = gok(sub) ? GF32(sub + 0x28) : 0.0f; }   /* <= 0: dead (func_0898CD0C, func_089A64F4) */
        r->policy = pol_bot(r->id);
        if (raw && rawn > 0) memcpy(raw + (size_t)n * rawn, GP(o), (size_t)rawn);
        n++; }
    rs_ai_extras(out, n);
    return n; }
/* Bots that stand about (traced with RS_AI_BOTS=1).  Two causes, both fixed here every second (offline, RS_AI_IDLE_FIX):
 *  - a bot taken out of its squad by func_0892CC00 (it marks the bot +0xC8 bit 0x20 and removes it; the squad-filling pass,
 *    func_0892774C, never takes a bot with that bit again) is left with no goal and no squad until it dies: a bot with no squad
 *    that has not moved for RS_AI_IDLE_SECONDS (6) or has no goal gets the bit cleared and joins a squad of its side that has
 *    room (else a squad of its own, which the idle-squad pass above sends to the best post);
 *  - a squad whose order points at a post its side already owns - it captured it (order 0x3F2 stays) or was told to defend it
 *    (order 0x3F5, func_089266D4) - waits there: with RS_AI_DEFENDERS=0 it is sent to the best post to take. */
extern rv_t func_089268D0(u32, u32, u32, u32, u32); extern u64 func_0898D728(u32, u32); extern u64 func_089E3BD4(u32); extern u32 func_089E3BC4(u32); extern u32 func_08ABC6F8(u32, u32, u32); extern rv_t func_0898D7A8(u32, u32);
/* Policy control (AIAgents: ai_bridge.c).  A bot under the trainer's policy gets a squad of its own (func_089268D0) whose order is
 * "go to a position": order 0x3F2 with the target 999, which makes the squad's destination its own +0x40 (x, y, z) - the game's
 * func_0898D4F0.  The game then walks, aims and fires as usual.  These squads are left alone by the commander (rs_ai_assign) and
 * by the idle / stuck fixes here.  Squad: +0x98 member ids, +0xAC member count, +0x3C target, +0x40 position, +0x4C order. */
#define POL_MAX 64
static struct { u32 id, sq; } pol[POL_MAX]; static u32 pol_team[POL_MAX];
static int pol_squad(u32 sq){ if (!sq) return 0; for (int i = 0; i < POL_MAX; i++) if (pol[i].sq == sq) return 1; return 0; }   /* kept while emptied too */
static int pol_bot(u32 id){ for (int i = 0; i < POL_MAX; i++) if (pol[i].id == id) return 1; return 0; }
static u32 ai_find(u32 id){
    u32 tb = IMG(0x08C2A880u), bk = GU32(tb), nbk = GU32(tb + 4); if (!gok(bk) || nbk > 4096) return 0;
    for (u32 bi = 0; bi < nbk; bi++) for (u32 nd = GU32(bk + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
        if (GU8(nd + 8)) continue; u32 o = GU32(nd); if (!gok(o) || !gok(GU32(o))) continue;
        u32 so = o + GU32(GU32(o) - 16); if (gok(so) && GU32(so + 4) == id) return o; }
    return 0; }
/* a squad pointer is only used while it is one of its side's current squads (an emptied squad can be given back to the AI pool) */
static int squad_live(u32 cmd, u32 sq){
    if (!cmd || !GU32(cmd + 4) || !gok(sq)) return 0; u32 team = GU32(cmd + 4), ns = GU32(team + 0x48); if (ns > 10) ns = 10;
    for (u32 j = 0; j < ns; j++) if ((u32)func_0898BC68(team, j) == sq) return 1; return 0; }
static u32 cmd_of(u32 o){ for (int c = 0; c < 2; c++) if (ai_cmd[c] && GU32(ai_cmd[c] + 4) && GU32(GU32(ai_cmd[c] + 4) + 0x4C) == GU32(o + 12)) return ai_cmd[c]; return 0; }
static u32 ai_goto_order(void){ static int o = -1; if (o < 0) { const char *e = getenv("RS_AI_GOTO_ORDER"); o = e ? (int)strtol(e, 0, 0) : 0x3F0; } return (u32)o; }   /* 0x3F0 (1008): go to the target's position */
/* kind 1: go to dest (x, y, z).  0 = done; < 0 = not possible now (no such bot, no commander, no squad slot) */
int rs_ai_command(u32 id, int kind, const float *dest){
    if (kind != 1) return -1;
    u32 o = ai_find(id); if (!o) return -2;
    u32 sub = o + GU32(GU32(o) - 12); if (!gok(sub) || GF32(sub + 0x28) <= 0.0f) return -2;
    /* entries whose bot is gone keep their squad (id 0, sq set): the next bot of that side reuses it - a side has only ten squads */
    int slot = -1;
    { u32 c = cmd_of(o); for (int i = 0; i < POL_MAX; i++) { if (pol[i].id == id) slot = i; else if (pol[i].id && !ai_find(pol[i].id)) pol[i].id = 0;
        if (pol[i].sq && pol_team[i] == GU32(o + 12) && !squad_live(c, pol[i].sq)) { if (slot == i) slot = -1; pol[i].id = 0; pol[i].sq = 0; } } }
    u32 sq = GU32(o + 0xE4); if (!gok(sq) || !GU8(o + 0xE8)) sq = 0;
    if (!sq || GU32(sq + 0xAC) != 1 || (slot >= 0 && pol[slot].sq != sq)) {              /* a squad of its own */
        u32 cmd = cmd_of(o); if (!cmd) return -3;
        if (sq) func_0898D7A8(sq, id);
        GU32(o + 0xC8) &= ~0x20u; sq = 0;
        for (int i = 0; i < POL_MAX && !sq; i++)                                          /* an emptied policy squad of this side */
            if (!pol[i].id && pol[i].sq && pol_team[i] == GU32(o + 12) && squad_live(cmd, pol[i].sq) && GU32(pol[i].sq + 0xAC) == 0) {
                func_0898D728(pol[i].sq, id); if (GU32(o + 0xE4) == pol[i].sq) { sq = pol[i].sq; slot = i; } }
        if (!sq) { sq = func_089268D0(cmd, o, 0, 0, 0).v0; if (!gok(sq)) return -4; } }
    if (slot < 0) { for (int i = 0; i < POL_MAX && slot < 0; i++) if (!pol[i].id && pol[i].sq == sq) slot = i;
                    for (int i = 0; i < POL_MAX && slot < 0; i++) if (!pol[i].id && !pol[i].sq) slot = i;
                    if (slot < 0) return -5; }
    pol_team[slot] = GU32(o + 12);
    pol[slot].id = id; pol[slot].sq = sq;
    GU32(sq + 0x3C) = 999; GF32(sq + 0x40) = dest[0]; GF32(sq + 0x44) = dest[1]; GF32(sq + 0x48) = dest[2]; GU32(sq + 0x4C) = ai_goto_order(); GU8(sq + 0x2A) = 0;
    return 0; }
void rs_ai_release_all(void){ memset(pol, 0, sizeof pol); memset(pol_team, 0, sizeof pol_team); }
static void ai_unstick(unsigned fr){
    static u32 ids[512]; static float last[512][3]; static unsigned seen[512]; static int still[512];
    int log = rs_setting_int("RS_AI_LOG", 0), need = rs_setting_int("RS_AI_IDLE_SECONDS", 6); if (need < 2) need = 2;
    u32 ncp = GU32(IMG(CP_COUNT));
    /* squads waiting at a post of their own side */
    if (rs_setting_int("RS_AI_DEFENDERS", 0) == 0 && ncp <= 8)
        for (int c = 0; c < 2; c++) { u32 cmd = ai_cmd[c]; if (!cmd) continue; u32 team = GU32(cmd + 4); if (!team) continue;
            u32 ns = GU32(team + 0x48); if (ns > 10) ns = 10;
            for (u32 j = 0; j < ns; j++) { u32 sq = (u32)func_0898BC68(team, j); if (!gok(sq) || !GU32(sq + 0xAC) || GU8(sq + 0x2C) || pol_squad(sq)) continue;
                u32 ord = GU32(sq + 0x4C), cp = GU32(sq + 0x3C); if (ord != 0x3F2 && ord != 0x3F5) continue;
                u32 k = 0; while (k < ncp && GU32(IMG(CP_IDS) + 4u * k) != cp) k++; if (k == ncp || !((GU8(cmd + 0x4A) >> k) & 1)) continue;
                u32 best = ai_best_post(cmd); if (best == 999 || best == cp) continue;
                if (log) fprintf(stderr, "[AI] team %u: squad %u (%u bots, order %x) at its own post %u: sent to post %u\n", GU32(team + 0x4C), j, GU32(sq + 0xAC), ord, cp, best);
                GU8(sq + 0x2A) = 0; func_08926478(cmd, j, best); } }
    /* bots with no squad */
    u32 tb = IMG(0x08C2A880u), bk = GU32(tb), nbk = GU32(tb + 4); if (!gok(bk) || nbk > 4096) return;
    for (u32 bi = 0; bi < nbk; bi++) for (u32 nd = GU32(bk + 4 * bi); gok(nd); nd = GU32(nd + 4)) {
        if (GU8(nd + 8)) continue; u32 o = GU32(nd); if (!gok(o) || !gok(GU32(o))) continue;
        u32 so = o + GU32(GU32(o) - 16), sub = o + GU32(GU32(o) - 12); if (!gok(so) || !gok(sub)) continue; u32 id = GU32(so + 4);
        int k = -1, fr_ = -1; for (int j = 0; j < 512; j++) { if (ids[j] == id) { k = j; break; } if (fr_ < 0 && (!ids[j] || fr - seen[j] > 300)) fr_ = j; }
        if (k < 0) { if (fr_ < 0) continue; k = fr_; ids[k] = id; still[k] = 0; last[k][0] = 1e9f; }
        seen[k] = fr;
        if (pol_bot(id)) { still[k] = 0; continue; }                     /* the policy's bot */
        int alive = GU8(o + 5) && GU8(o + 0x40) && GF32(sub + 0x28) > 0.0f;
        if (!alive || GU32(o + 0x54) == 999 || func_089E3BC4(o) == 0 || (u32)func_089E3BD4(o) != 0) { still[k] = 0; last[k][0] = 1e9f; continue; }
        const float *p = soldier_pos(o); if (!p) continue;
        float dx = p[0] - last[k][0], dz = p[2] - last[k][2]; memcpy(last[k], p, 12);
        still[k] = (dx * dx + dz * dz < 1.5f * 1.5f) ? still[k] + 1 : 0;
        if (GU8(o + 0xE8)) {                                                /* in a squad: stuck away from where the squad is going */
            u32 sq = GU32(o + 0xE4); if (still[k] < 2 * need || !gok(sq) || GU8(sq + 0x2C) || GU32(sq + 0x4C) != 0x3F2) continue;
            u32 cpo = func_08ABC6F8(0x08C2BA28u, GU32(sq + 0x3C), 1); const float *cp = gok(cpo) ? soldier_pos(cpo) : 0; if (!cp) continue;
            float ex = p[0] - cp[0], ez = p[2] - cp[2]; if (ex * ex + ez * ez < 25.0f * 25.0f) continue;     /* at the post: capturing */
            u32 cmd = 0; for (int c = 0; c < 2; c++) if (ai_cmd[c] && GU32(ai_cmd[c] + 4) && GU32(GU32(ai_cmd[c] + 4) + 0x4C) == GU32(o + 12)) cmd = ai_cmd[c];
            if (!cmd) continue;
            func_0898D7A8(sq, id); still[k] = 0;
            u32 nsq = func_089268D0(cmd, o, 0, 0, 0).v0;
            if (log) fprintf(stderr, "[AI] team %u: bot %x stuck %.0f m from its squad's post: %s\n", GU32(GU32(cmd + 4) + 0x4C), id, sqrtf(ex * ex + ez * ez), nsq ? "a squad of its own" : "left its squad");
            continue; }
        int nogoal = ai_goal(o) < 0;
        if (still[k] < need && !(nogoal && still[k] >= 2)) continue;
        u32 cmd = 0; for (int c = 0; c < 2; c++) if (ai_cmd[c] && GU32(ai_cmd[c] + 4) && GU32(GU32(ai_cmd[c] + 4) + 0x4C) == GU32(o + 12)) cmd = ai_cmd[c];
        if (!cmd) continue; u32 team = GU32(cmd + 4), ns = GU32(team + 0x48); if (ns > 10) ns = 10;
        GU32(o + 0xC8) &= ~0x20u; still[k] = 0;
        u32 jn = 999;
        for (u32 j = 0; j < ns && jn == 999; j++) { u32 sq = (u32)func_0898BC68(team, j);
            if (gok(sq) && GU32(sq + 0xAC) < 5 && GU32(sq + 0x4C) == 0x3F2 && !GU8(sq + 0x2A) && !GU8(sq + 0x2C)) jn = j; }
        if (jn != 999) { u32 sq = (u32)func_0898BC68(team, jn); func_0898D728(sq, id);
            if (log) fprintf(stderr, "[AI] team %u: bot %x stood still with no squad%s: joined squad %u (to post %u)\n", GU32(team + 0x4C), id, nogoal ? " (no goal)" : "", jn, GU32(sq + 0x3C)); }
        else { u32 sq = func_089268D0(cmd, o, 0, 0, 0).v0;
            if (log) fprintf(stderr, "[AI] team %u: bot %x stood still with no squad%s: %s\n", GU32(team + 0x4C), id, nogoal ? " (no goal)" : "", sq ? "a squad of its own" : "no squad slot left"); } } }
void rs_ai_debug(unsigned fr){
    for (int c = 0; c < 2; c++) { u32 cmd = ai_cmd[c]; if (!cmd) continue; u32 team = GU32(cmd + 4); if (!team) continue;
        u32 ns = GU32(team + 0x48); if (ns > 10) ns = 10;
        fprintf(stderr, "[AIDBG] f%u team %u posts take %02x hold %02x ours %02x squads %u:", fr, GU32(team + 0x4C), GU8(cmd + 0x48), GU8(cmd + 0x49), GU8(cmd + 0x4A), ns);
        for (u32 j = 0; j < ns; j++) { u32 sq = (u32)func_0898BC68(team, j); if (!sq) { fprintf(stderr, " -"); continue; }
            fprintf(stderr, " [%u: %u bots, order %x post %u, %02x%02x]", j, GU32(sq + 0xAC), GU32(sq + 0x4C), GU32(sq + 0x3C), GU8(sq + 0x2A), GU8(sq + 0x2C)); }
        fprintf(stderr, "\n"); } }
int rs_ai_assign(u32 cmd, u32 sq, u32 cp){
    static int inside;
    if (cmd && GU32(cmd + 4) && pol_squad((u32)func_0898BC68(GU32(cmd + 4), sq))) return 1;    /* the policy's squad: not the commander's */
    if (inside || !on() || !cmd) return 0;
    int lim = rs_setting_int("RS_AI_DEFENDERS", 0); if (lim < 0) return 0;        /* -1: the game's own choice; 0: no defenders */
    u32 team = GU32(cmd + 4); if (!team) return 0;
    u32 i = func_08926FD0(cp), ncp = GU32(IMG(CP_COUNT)); if (i >= 8 || ncp > 8) return 0;
    if (rs_setting_int("RS_AI_LOG", 0) > 1) fprintf(stderr, "[AI] commander %08x team %u: squad %u -> post %u (#%u) hold %02x take %02x ours %02x\n", cmd, GU32(team + 0x4C), sq, cp, i, GU8(cmd + 0x49), GU8(cmd + 0x48), GU8(cmd + 0x4A));
    if (!((GU8(cmd + 0x49) >> i) & 1)) return 0;                      /* not a post of ours to hold */
    u32 me = (u32)func_0898BC68(team, sq); if (!me) return 0;
    u32 sum = GU32(me + 0xAC), ns = GU32(team + 0x48); if (ns > 10) ns = 10;
    for (u32 j = 0; j < ns; j++) { if (j == sq) continue; u32 s = (u32)func_0898BC68(team, j);
        if (s && GU32(s + 0x3C) == cp && GU32(s + 0x4C) == 0x3F2) sum += GU32(s + 0xAC); }
    if ((int)sum <= lim) return 0;
    u32 best = ai_best_post(cmd);
    if (best == 999 || best == cp) return 0;
    if (rs_setting_int("RS_AI_LOG", 0)) fprintf(stderr, "[AI] squad %u (%u bots) not sent to hold post %u (%u bots there with it): to post %u\n", sq, GU32(me + 0xAC), cp, sum, best);
    inside = 1; func_08926478(cmd, sq, best); inside = 0; return 1; }

/* The game's list of soldiers (func_08A0AD64 adds, func_08A0ADFC removes; read by func_08973070): 32 slots at 0x08C2C4EC, the
 * count at 0x08C2C56C and a count per side at 0x08C2C570 / 0x08C2C574 (func_08A26FC0 of the soldier's +64: 1 or the other).  Adding
 * stops at 32, but removing a soldier that is not in the list still took one off the counts and wrote past the end - with more than
 * 32 soldiers the counts went wrong and, when everyone is removed at the end of a match, the game read outside its memory and
 * crashed.  The list is now native, 256 slots (the symbol is redirected, tools/dc/hooks.py), and a soldier not in it is left alone. */
#define UL_MAX 256
#define UL_SIDE1 0x08C2C570u
#define UL_SIDE2 0x08C2C574u
#define UL_FLAG  0x08C2C4E8u
extern u64 func_08A26FC0(u32);
static u32 *ul;
u32 rs_unit_list(void){ if (!ul) { ul = rs_guest_alloc(sizeof(u32) * UL_MAX, 16); memset(ul, 0, sizeof(u32) * UL_MAX); } return GA(ul); }
int rs_unit_list_add(u32 unit, u64 *rv){
    rs_unit_list(); u32 n = GU32(IMG(UL_COUNT));
    if (n >= UL_MAX) { *rv = 0; return 1; }
    u32 side = (u32)func_08A26FC0(GU32(unit + 64));
    GU32(IMG(side == 1 ? UL_SIDE1 : UL_SIDE2)) += 1;
    ul[n] = unit; GU32(IMG(UL_COUNT)) = n + 1; GU32(IMG(UL_FLAG)) = 0; *rv = 1; return 1; }
int rs_unit_list_remove(u32 unit, u64 *rv){
    rs_unit_list(); u32 n = GU32(IMG(UL_COUNT)); *rv = n;
    if (!n || n > UL_MAX) return 1;
    u32 i = 0; while (i < n && ul[i] != unit) i++;
    if (i == n) return 1;                                            /* not in the list: nothing to take away */
    u32 side = (u32)func_08A26FC0(GU32(unit + 64));
    GU32(IMG(side == 1 ? UL_SIDE1 : UL_SIDE2)) -= 1;
    ul[i] = ul[n - 1]; ul[n - 1] = 0; GU32(IMG(UL_COUNT)) = n - 1; GU32(IMG(UL_FLAG)) = 0; return 1; }

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

/* New lines of text (Weapons_Mod.txt Name = / DescriptionText =, blueprints.c): the game's text lookup (func_08834304, the line n of
 * TEXT/STDTEXT.ASR for the language in use, or 0 past its count) returns them for the numbers after the file's own. */
int rs_weapons_text16(u32 id, u16 *out, int max);
int rs_custom_maps_text16(u32 id, u16 *out, int max);   /* custom_maps.c: custom map names */
int rs_stdtext_get(u32 id, u32 *rv){
    static u32 ids[64], at[64]; static int n;
    for (int i = 0; i < n; i++) if (ids[i] == id) { *rv = at[i]; return 1; }
    u16 w[512]; int k = rs_weapons_text16(id, w, 512); if (k <= 0) k = rs_custom_maps_text16(id, w, 512); if (k <= 0 || n == 64) return 0;
    u16 *g = rs_guest_alloc(sizeof(u16) * (size_t)k, 4); memcpy(g, w, sizeof(u16) * (size_t)k);
    ids[n] = id; at[n] = GA(g); n++; *rv = GA(g); return 1; }

/* Vehicles and soldiers (tools/dc/hooks.py: func_089D7D08 is the game's vehicle-against-soldier contact, reached from
 * func_089D74B4 for a contact with an object of type 0x8005; it reacts to the soldier with the vehicle's and the soldier's physics).
 * RS_VEHICLE_RUNOVER=1: a soldier on the side of whoever is aboard is left alone (no contact reaction, so the vehicle is not
 * held up by friendly soldiers); an enemy soldier gets the game's damage message (type 0x9E500986, as func_089D710C sends:
 * { type, source id, source +0x54, amount }) for far more than any health, so being run over kills.  An empty vehicle, or a
 * soldier that is not in the game's soldier list, keeps the game's own reaction. */
extern u32 func_089D194C(u32);
static u32 obj_id(u32 o){ return GU32(o + GU32(GU32(o) - 16) + 4); }
static int obj_type(u32 o){ return (int)GU16(o + GU32(GU32(o) - 16) + 8); }
static int unit_side(u32 u){ return (int)(u32)func_08A26FC0(GU32(u + 64)); }
int rs_vehicle_hit(u32 veh, u32 man){
    static int on_ = -1; if (on_ < 0) on_ = rs_setting_int("RS_VEHICLE_RUNOVER", 1);
    if (!on_ || !on() || !veh || !man || obj_type(man) != 0x8005) return 0;
    u32 l = rs_unit_list(), n = GU32(IMG(UL_COUNT)), vid = obj_id(veh); if (n > UL_MAX) n = UL_MAX;
    int inlist = 0, side = -1;
    for (u32 i = 0; i < n; i++) { u32 s = GU32(l + 4 * i); if (!s) continue; if (s == man) { inlist = 1; continue; }
        if (side < 0 && func_089D194C(s) == vid) side = unit_side(s); }
    if (!inlist || side < 0) return 0;
    if (unit_side(man) == side) return 1;                               /* friendly: drive on */
    static u32 msg; if (!msg) msg = GA(rs_guest_alloc(16, 16));
    GU32(msg) = 0x9E500986u; GU32(msg + 4) = vid; GU32(msg + 8) = GU32(veh + 0x54); GF32(msg + 12) = 100000.0f;
    if (rs_setting_int("RS_AI_LOG", 0)) fprintf(stderr, "[VEHICLE] %08x ran over an enemy soldier %08x\n", veh, man);
    ((ifn_t)GFN(GU32(GU32(man) + 8)))(man, msg, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    return 1; }

/* Physics: vehicles pass through soldiers of the side aboard them.  func_088BBDEC(pair) is the physics engine's test of a pair of
 * bodies (pair +4, +8): 1 = not touching (the bounding boxes apart), else the narrow-phase contact.  Each body carries its game
 * object's id at +364 (the id the game looks up in its object table, 0x08C2C31C / size 0x08C2C320, as func_089D74B4 does).  A pair of
 * a vehicle (object type 0x8004) and a soldier (0x8005) whose sides are the same (RS_VEHICLE_RUNOVER) is reported as not touching. */
static int is_veh(int t){ return t == 0x8004 || t == 0x8014 || t == 0x801D || t == 0x801E; }   /* the vehicle types (func_089D74B4's table) */
static u32 obj_by_id(u32 id){
    if (id == 999 || !id) return 0;
    u32 tab = GU32(IMG(0x08C2C31Cu)), sz = GU32(IMG(0x08C2C320u)); if (!tab || !sz) return 0;
    for (u32 nd = GU32(tab + 4u * (id & (sz - 1))); nd; nd = GU32(nd + 4)) { u32 o = GU32(nd); if (!o) continue;
        u32 b = o + GU32(GU32(o) - 16); if (GU32(b + 4) == id && !(GU32(b + 16) & 1)) return o; }
    return 0; }
static int vehicle_side(u32 veh){                                         /* the side of whoever is aboard (-1: nobody); cached per frame */
    extern volatile int g_frames; static u32 cv[16]; static int cs[16], cf[16]; u32 vid = obj_id(veh); int k = (int)(vid % 16u);
    if (cv[k] == vid && cf[k] == g_frames) return cs[k];
    u32 l = rs_unit_list(), n = GU32(IMG(UL_COUNT)); if (n > UL_MAX) n = UL_MAX; int side = -1;
    for (u32 i = 0; i < n && side < 0; i++) { u32 s = GU32(l + 4 * i); if (s && func_089D194C(s) == vid) side = unit_side(s); }
    cv[k] = vid; cf[k] = g_frames; cs[k] = side; return side; }
int rs_phys_pair(u32 pair, u32 *rv){
    static int on_ = -1; if (on_ < 0) on_ = rs_setting_int("RS_VEHICLE_RUNOVER", 1) && on();
    if (!on_ || !GU32(IMG(UL_COUNT))) return 0;
    u32 ba = GU32(pair + 4), bb = GU32(pair + 8); if (!ba || !bb) return 0;
    { static int lg = -1; static unsigned n; if (lg < 0) lg = getenv("RS_PHYS_LOG") != 0;   /* TEMP */
      if (lg && ++n % 500 == 1) fprintf(stderr, "[PHYS] call %u: bodies %08x %08x ids %08x %08x objs %08x %08x\n", n, ba, bb, GU32(ba + 364), GU32(bb + 364), obj_by_id(GU32(ba + 364)), obj_by_id(GU32(bb + 364))); }
    u32 oa = obj_by_id(GU32(ba + 364)); if (!oa) return 0; int ta = obj_type(oa); if (ta != 0x8005 && !is_veh(ta)) return 0;
    u32 ob = obj_by_id(GU32(bb + 364)); if (!ob) return 0; int tb = obj_type(ob);
    { static int lg = -1; static unsigned h[64]; static unsigned n; if (lg < 0) lg = getenv("RS_PHYS_LOG") != 0;     /* TEMP: pair types */
      if (lg) { h[((ta & 0x1F) * 2 + (tb == 0x8005)) & 63]++; if (++n % 100 == 0) { fprintf(stderr, "[PHYS] pairs by type:"); for (int i = 0; i < 64; i++) if (h[i]) fprintf(stderr, " %x/%s:%u", 0x8000 + i / 2, i & 1 ? "soldier" : "other", h[i]); fprintf(stderr, "\n"); } } }
    u32 veh, man; if (is_veh(ta) && tb == 0x8005) { veh = oa; man = ob; } else if (ta == 0x8005 && is_veh(tb)) { veh = ob; man = oa; } else return 0;
    int vs = vehicle_side(veh); if (vs < 0 || func_089D194C(man) == obj_id(veh)) return 0;
    if (unit_side(man) != vs) return 0;
    { static unsigned n; if (++n % 500 == 1 && rs_setting_int("RS_AI_LOG", 0)) fprintf(stderr, "[VEHICLE] friendly soldier contacts passed through: %u\n", n); }
    *rv = 1; return 1; }
/* Look centring.  The player's soldier (func_0899530C, the soldier update: +92 is its input object, the twin-stick one for the
 * player) keeps a look timer at +0x1FC: set to about 1 while the look up / down input is used, counted down (1 a second)
 * otherwise, and when it runs out the view is levelled again (the aim direction at +0x118 returns to level the frame the timer
 * passes 0).  So the game levels the view about a second after the look input stops.
 *   RS_LOOK_CENTER_DELAY=<seconds>   how long after the look input stops the view is levelled (default 1: the game's own);
 *                                    each frame the timer is set to what remains of the delay since the input was last used
 *   RS_LOOK_CENTER=0                 never level the view (the timer is held above 0) */
extern u32 rs_input_object(void);
u64 rs_perf_us(void);
const char *rs_platform_setting(const char *key);
static u32 hum_vt;
void rs_soldier_frame(u32 sol){
    if (!hum_vt && gok(sol)) hum_vt = GU32(sol);
    static int keep = -1; static float delay = 1.0f;
    if (keep < 0) { keep = !rs_setting_int("RS_LOOK_CENTER", 1);
        const char *d = rs_platform_setting("RS_LOOK_CENTER_DELAY"); if (d && *d) delay = (float)atof(d); if (delay < 0) delay = 0;
        fprintf(stderr, "[PATCH] look centring: %s\n", keep ? "off" : "on"); if (!keep) fprintf(stderr, "[PATCH] look centring delay %.2f s\n", delay); }
    { static int lg = -1; if (lg < 0) lg = getenv("RS_LOOK_LOG") != 0;
      if (lg) { static u32 seen[64]; static int ns; int f = 0; for (int i = 0; i < ns; i++) if (seen[i] == sol) f = 1;
        static unsigned cnt; if (GU32(sol + 92) && ++cnt % 200 == 0) f = 0;
        if (!f && ns < 64) { if (cnt % 200) seen[ns++] = sol; fprintf(stderr, "[LOOK] soldier %08x input %08x (twin-stick object %08x) timer %.3f\n", sol, GU32(sol + 92), rs_input_object(), GF32(sol + 0x1FC)); } } }
    if (!sol || GU32(sol + 92) != rs_input_object()) return;
    float t = GF32(sol + 0x1FC);
    if (keep) { if (t < 0.5f) GF32(sol + 0x1FC) = 0.5f; return; }   /* never: well above one frame */
    if (delay > 0.999f && delay < 1.001f) return;                    /* the game's own */
    static u32 who; static double last_use, last_t; static float wrote;
    double now = (double)rs_perf_us() / 1e6;
    if (sol != who) { who = sol; last_use = now; wrote = t; last_t = now; }
    float expect = wrote - (float)(now - last_t);                    /* what the game's countdown would have left of ours */
    if (t > 0.05f && t > expect + 0.05f) last_use = now;           /* risen: the look input is in use */
    last_t = now;
    float left = delay - (float)(now - last_use); if (left < 0) left = 0;
    if (t > 0 || left > 0) { GF32(sol + 0x1FC) = left > 0 ? left : 0.0001f; wrote = left > 0 ? left : 0.0001f; } }

/* RS_COL_LOG=1 (diagnostics): the masks of the level collision queries (func_088B73C4: the query's +0x24 is the mask of quad flags
 * it ignores), counted by the native caller */
void rs_col_query(u32 ctx){
    static int on_ = -1; if (on_ < 0) on_ = getenv("RS_COL_LOG") != 0; if (!on_) return;
    static struct { u32 mask, fl; void *ra; unsigned n; } h[64]; static int nh; static unsigned tot;
    void *ra = __builtin_return_address(1); u32 mask = GU16(ctx + 0x24), fl = GU16(ctx + 0x26);
    int i = 0; for (; i < nh; i++) if (h[i].mask == mask && h[i].ra == ra && h[i].fl == fl) break;
    if (i == nh && nh < 64) { h[nh].mask = mask; h[nh].ra = ra; h[nh].fl = fl; h[nh].n = 0; nh++; }
    if (i < 64) h[i].n++;
    if (++tot % 500 == 0) { fprintf(stderr, "[COL] queries by mask:"); for (int k = 0; k < nh; k++) fprintf(stderr, " %04x/%04x@%p:%u", h[k].mask, h[k].fl, h[k].ra, h[k].n); fprintf(stderr, "\n"); } }
void rs_col_ray(u32 ray){
    static int on_ = -1; if (on_ < 0) on_ = getenv("RS_COL_LOG") != 0; if (!on_) return;
    static struct { u32 ex, req; void *ra; unsigned n; } h[96]; static int nh; static unsigned tot;
    void *ra = __builtin_return_address(1); u32 ex = GU32(ray + 48), req = GU32(ray + 52);
    int i = 0; for (; i < nh; i++) if (h[i].ex == ex && h[i].ra == ra && h[i].req == req) break;
    if (i == nh && nh < 96) { h[nh].ex = ex; h[nh].ra = ra; h[nh].req = req; h[nh].n = 0; nh++; }
    if (i < 96) h[i].n++;
    if (++tot % 3000 == 0) { fprintf(stderr, "[RAY] rays by exclude/require mask:"); for (int k = 0; k < nh; k++) fprintf(stderr, " %x/%x@%p:%u", h[k].ex, h[k].req, h[k].ra, h[k].n); fprintf(stderr, "\n"); } }
/* Damage (tools/dc/hooks.py: func_089E1FDC is where a soldier or vehicle takes a hit, from its message handler (func_089A7310 for
 * soldiers, func_089D6CBC): msg +0 the weapon's / projectile's blueprint hash, +4 the source's object id, +8 the source's +0x54,
 * +12 the amount after the game's scaling).  Each hit becomes an event for the AI bridge: target, source, amount, the target's health
 * before and after (killed when it goes from above 0 to 0 or below), weapon.  Checked: kills and hits match the bots' health. */
#define EVT_N 1024
static struct rs_ai_evt evq[EVT_N]; static unsigned ev_w, ev_r; static float dmg_hp; static u32 dmg_tgt;
static struct { u32 id, w; } fired[256];
static float obj_health(u32 o){ if (!gok(o) || !gok(GU32(o))) return 0; u32 sub = o + GU32(GU32(o) - 12); return gok(sub) ? GF32(sub + 0x28) : 0; }
static u32 fired_by(u32 id){ for (int i = 0; i < 256; i++) if (fired[i].id == id) return fired[i].w; return 0; }
void rs_ai_dmg_pre(u32 o, u32 msg){ { extern u32 rs_cen_dmg; rs_cen_dmg++; }
    { static int dl = -1; if (dl < 0) dl = getenv("RS_DMG_LOG") != 0;   /* the hit message's words and the native call chain (finding the sender) */
      if (dl && msg) { void *bt[8]; int n = backtrace(bt, 8); fprintf(stderr, "[DMG] fr %u o %08x id %x team %u msg", probe_fr, o, gok(o) && gok(GU32(o)) ? obj_id(o) : 0, gok(o) ? GU32(o + 12) : 0);
        for (int k = 0; k < 8; k++) fprintf(stderr, " %08x", GU32(msg + 4u * (u32)k));
        fprintf(stderr, " m128 %.3f", gok(o) ? GF32(o + 128) : 0.0f); fprintf(stderr, " bt"); for (int k = 1; k < n; k++) fprintf(stderr, " %p", bt[k]); fprintf(stderr, "\n"); } } dmg_tgt = o; dmg_hp = obj_health(o); (void)msg; }
void rs_ai_dmg_post(u32 o, u32 msg){
    if (o != dmg_tgt || !msg || !gok(o) || !gok(GU32(o))) return;
    struct rs_ai_evt e = { obj_id(o), GU32(msg + 4), GF32(msg + 12), dmg_hp, obj_health(o), GU32(msg) };
    if (e.before <= 0.0f) return;                                       /* hits on the dead */
    evq[ev_w++ % EVT_N] = e; if (ev_w - ev_r > EVT_N) ev_r = ev_w - EVT_N;
    { int k = -1; for (int i = 0; i < 256 && k < 0; i++) if (fired[i].id == e.source) k = i; for (int i = 0; i < 256 && k < 0; i++) if (!fired[i].id) k = i;
      if (k < 0) k = (int)(e.source % 256); fired[k].id = e.source; fired[k].w = e.weapon; }
    { static FILE *f; const char *pf = getenv("RS_AI_EVLOG"); if (pf) { if (!f) f = fopen(pf, "w"); if (f) { fprintf(f, "%u %x %x %.2f %.2f %.2f %x\n", probe_fr, e.target, e.source, e.amount, e.before, e.after, e.weapon); fflush(f); } } } }
int rs_ai_events(struct rs_ai_evt *out, int max){ int n = 0; while (ev_r != ev_w && n < max) out[n++] = evq[ev_r++ % EVT_N]; return n; }
void rs_ai_events_reset(void){ ev_r = ev_w; memset(fired, 0, sizeof fired); }

/* Line of sight for the AI bridge: the level ray the game's AI uses (func_0883506C builds it: +0 origin, +12 direction (unit), +36 an
 * object id to ignore (999 none), +40 length, +48 the mask of surface kinds to skip (8, as the AI's own ground probe func_0891E3F0);
 * func_08834E84 casts it and returns the hit: +0 the distance along the ray, +32 non-zero on a hit).  Eye height to eye height.
 * Checked on Tatooine: of 1193 hits between bots, 1180 had a clear line by this test at the time. */
extern rv_t func_08834E84(u32); extern void func_0883506C(u32, u32, u32, u32, u32, u32, float);
int rs_ai_los(const float *a, const float *b){
    static u32 ray, o3, d3; if (!ray) { ray = GA(rs_guest_alloc(128, 16)); o3 = GA(rs_guest_alloc(16, 16)); d3 = GA(rs_guest_alloc(16, 16)); }
    float o[3] = { a[0], a[1] + 1.5f, a[2] }, t[3] = { b[0], b[1] + 1.5f, b[2] }, d[3] = { t[0] - o[0], t[1] - o[1], t[2] - o[2] };
    float L = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]); if (L < 0.5f) return 1;
    for (int k = 0; k < 3; k++) { GF32(o3 + 4u * (u32)k) = o[k]; GF32(d3 + 4u * (u32)k) = d[k] / L; }
    func_0883506C(ray, o3, d3, 999, 0, 8, L);
    u32 hit = func_08834E84(ray).v0; if (!hit) return 1;
    return !(GU8(hit + 32) && GF32(hit) < L - 1.0f); }
/* the bridge's extras for the policy's bots: the nearest enemies, whether each is in sight, and a nearby point hidden from the
 * nearest one (8 directions at 6 and 10 units; the nearest such point that the bot itself can reach in a straight line) */
static int extras_live;
void rs_ai_extras(struct rs_ai_rec *r, int n){
    { int live = 0; for (int i = 0; i < n; i++) live += r[i].alive && r[i].health > 0; extras_live = live; }
    for (int i = 0; i < n; i++) { struct rs_ai_rec *a = &r[i];
        a->kit[0] = GU32(a->obj + 0xB4); a->kit[1] = GU32(a->obj + 0xB8); a->kit[2] = GU32(a->obj + 0xBC); a->fired = fired_by(a->id);
        if (!a->policy || !a->alive || a->health <= 0) continue;
        int best[3] = { -1, -1, -1 }; float bd[3] = { 1e30f, 1e30f, 1e30f };
        for (int j = 0; j < n; j++) { struct rs_ai_rec *e = &r[j]; if (e->team == a->team || !e->alive || e->health <= 0) continue;
            float dx = e->pos[0] - a->pos[0], dz = e->pos[2] - a->pos[2], d = dx * dx + dz * dz;
            for (int k = 0; k < 3; k++) if (d < bd[k]) { for (int m = 2; m > k; m--) { bd[m] = bd[m - 1]; best[m] = best[m - 1]; } bd[k] = d; best[k] = j; break; } }
        for (int k = 0; k < 3; k++) if (best[k] >= 0) { a->near_id[k] = r[best[k]].id; a->near_los[k] = bd[k] < 150.0f * 150.0f ? (u8)rs_ai_los(a->pos, r[best[k]].pos) : 0; }
        if (best[0] >= 0 && bd[0] < 80.0f * 80.0f) {
            const float *e = r[best[0]].pos; float bestd = 1e30f;
            for (int ring = 0; ring < 2; ring++) for (int k = 0; k < 8; k++) { float ang = 6.2831853f * (float)k / 8.0f, rad = ring ? 10.0f : 6.0f;
                float c[3] = { a->pos[0] + rad * cosf(ang), a->pos[1], a->pos[2] + rad * sinf(ang) };
                if (rs_ai_los(e, c) || !rs_ai_los(a->pos, c)) continue;
                float dd = (c[0] - a->pos[0]) * (c[0] - a->pos[0]) + (c[2] - a->pos[2]) * (c[2] - a->pos[2]);
                if (dd < bestd) { bestd = dd; memcpy(a->cover, c, 12); a->cover_ok = 1; } } } } }
/* vehicles for the bridge: every object of a vehicle type in the game's object table, its position and who is aboard */
int rs_ai_vehicles(struct rs_ai_veh *out, int max){
    u32 tab = GU32(IMG(0x08C2C31Cu)), sz = GU32(IMG(0x08C2C320u)); if (!gok(tab) || !sz || sz > 65536) return 0; int n = 0;
    for (u32 b = 0; b < sz && n < max; b++) for (u32 nd = GU32(tab + 4u * b); gok(nd) && n < max; nd = GU32(nd + 4)) { u32 o = GU32(nd); if (!gok(o) || !gok(GU32(o))) continue;
        u32 so = o + GU32(GU32(o) - 16); if (!gok(so) || (GU32(so + 16) & 1)) continue; if (!is_veh((int)GU16(so + 8))) continue;
        const float *p = soldier_pos(o); if (!p) continue;
        struct rs_ai_veh *v = &out[n++]; memcpy(v->pos, p, 12); v->id = GU32(so + 4); v->side = vehicle_side(o); }
    return n; }
/* a soldier's humanoid (the part the game's soldier update runs on, with the weapon inventory at +0xEC): an object next to the AI
 * object with the humanoid vtable and the same object id (its offset differs per soldier); cached per id */
static struct { u32 id, o, h; } humc[256];
u32 rs_ai_humanoid(u32 o){
    if (!hum_vt || !gok(o)) return 0; u32 id = obj_id(o); int k = (int)(id % 256);
    if (humc[k].id == id && humc[k].o == o && gok(humc[k].h) && GU32(humc[k].h) == hum_vt) return humc[k].h;
    for (u32 off = 0; off < 0x2000; off += 4) if (GU32(o + off) == hum_vt && obj_id(o + off) == id) { humc[k].id = id; humc[k].o = o; humc[k].h = o + off; return o + off; }
    return 0; }
/* the controls the game applies to a soldier each frame (func_089A8A98(control, humanoid): from the AI's or the network's control
 * message: +120 button bits, +124.. aim / move, +160, +164 weapon slot, +165 secondary slot).  RS_AI_CTLLOG (field finding) logs them. */
void rs_ai_ctl_pre(u32 ctl, u32 hum){
    { const char *fs = getenv("RS_AI_FORCESLOT"); if (fs && gok(ctl) && (probe_fr / 600) % 2) GU8(ctl + 164) = (u8)atoi(fs); }
    const char *pf = getenv("RS_AI_CTLLOG"); if (!pf || !gok(ctl) || !gok(hum)) return;
    static FILE *f; if (!f) f = fopen(pf, "w"); if (!f) return;
    static unsigned n; if (++n % 7) return;
    fprintf(f, "%u %x %08x %u %u", probe_fr, obj_id(hum), GU32(ctl + 120), GU8(ctl + 164), GU8(ctl + 165));
    for (u32 k = 124; k < 164; k += 4) fprintf(f, " %g", GF32(ctl + k));
    fprintf(f, " | %x\n", GU32(ctl + 160)); fflush(f); }
void rs_ai_frame_count(void){ ++probe_fr; }
int rs_in_match(void){ return GU32(IMG(UL_COUNT)) > 0; }   /* soldiers in the game's list: a match is on (gfx_gxm.c menu / match scale) */
/* (4.6) the AI pilot's wanted speed per call of 08959780 (a0 the pilot block, f12 the speed asked): RS_PILOT_LOG */
void rs_pilot_log(u32 c, float spd){
    static int on = -1; if (on < 0) on = getenv("RS_PILOT_LOG") != 0; if (!on || !gok(c)) return;
    static unsigned n; if (n++ % 7) return;
    void *bt[3]; int nb = backtrace(bt, 3);
    fprintf(stderr, "[PILOT] fr %u c %08x ask %.2f max %.2f cur88 %.2f ra %p\n", probe_fr, c, spd, GF32(c + 0x7C), GF32(c + 0x88), nb > 2 ? bt[2] : 0);
}
/* (4.6) the flyers' fly-to orders starting their fly-to (0894A074 for 0x453, 0894B2C4 for 0x454, state 1): RS_NODE_LOG.  0x453's
 * object: node +0x20, in the registry 0x08C2A204 (08ABE790), its class and its position +0x40 */
void rs_node_log(u32 kind, u32 node, u32 st){
    static int on = -1; if (on < 0) on = getenv("RS_NODE_LOG") != 0; if (!on || !gok(node)) return;
    fprintf(stderr, "[NODE] fr %u %x state %u node %08x", probe_fr, kind, st, node);
    if (kind == 0x453 && st == 1) { u32 id = GU32(node + 0x20); extern u64 func_08ABE790(u32, u32, u32); u32 o = (u32)func_08ABE790(0x08C2A204u, id, 1);
        fprintf(stderr, " obj %x", id);
        if (gok(o) && gok(GU32(o))) fprintf(stderr, " cls %x at %.1f %.1f %.1f", GU16(o + GU32(GU32(o) - 16) + 8), GF32(o + 0x40), GF32(o + 0x44), GF32(o + 0x48)); }
    fprintf(stderr, "\n");
}
/* (4.6) the space commander's orders to a pilot (089919F4: a1 the unit, a2 -> { command, object }): RS_NODE_LOG */
void rs_cmd_log(u32 cmdr, u32 unit, u32 c){
    static int on = -1; if (on < 0) on = getenv("RS_NODE_LOG") != 0; if (!on || !c) return;
    fprintf(stderr, "[CMD] fr %u cmdr %08x unit %08x command %u obj %x\n", probe_fr, cmdr, unit, GU32(c), GU32(c + 4));
}
/* (4.4) the AI's node factories (08959F30 orders, 0895A97C goal nodes): a0 the owner, a1 the id - RS_ORDER_LOG */
void rs_order_log(u32 which, u32 owner, u32 id){
    static int on = -1; if (on < 0) on = getenv("RS_ORDER_LOG") != 0; if (!on) return;
    fprintf(stderr, "[ORDER] fr %u %s %08x id %x\n", probe_fr, which == 1 ? "order" : which == 2 ? "goalnode" : "child", owner, id);
}
/* (3.5b) a vehicle spawner's spawn call (08A16320): its clock +0x74, respawn time +0x24, flags +0x1C / +0x1D, the slot +0x70: RS_VSPAWN_LOG */
void rs_vspawn_log(u32 sp_){
    static int on = -1; if (on < 0) on = getenv("RS_VSPAWN_LOG") != 0; if (!on) return;
    fprintf(stderr, "[VSPAWN] fr %u spawner %08x clock %.3f time %.3f f1c %u f1d %u slot %u at %.1f %.1f %.1f\n", probe_fr, sp_, GF32(sp_ + 0x74), GF32(sp_ + 0x24), GU8(sp_ + 0x1C), GU8(sp_ + 0x1D), GU32(sp_ + 0x70), GF32(sp_ + 0x48), GF32(sp_ + 0x4C), GF32(sp_ + 0x50));
}
void rs_vspawn_tick(u32 sp_){
    static int on = -1; if (on < 0) on = getenv("RS_VSPAWN_LOG") && getenv("RS_VSPAWN_LOG")[0] == '2'; if (!on) return;
    { static float x = -1e9f; if (x == -1e9f) x = getenv("RS_VSPAWN_X") ? (float)atof(getenv("RS_VSPAWN_X")) : 257.2f;   /* (one spawner, by its x: Hoth's Taun-Taun 257.2 by default) */
      if (fabsf(GF32(sp_ + 0x48) - x) > 1.0f) return; }
    fprintf(stderr, "[VTICK] fr %u clock %.4f near %u slots %u %u %u %u dt %.5f\n", probe_fr, GF32(sp_ + 0x74), GU8(sp_ + 0x90), GU32(sp_ + 0x60), GU32(sp_ + 0x64), GU32(sp_ + 0x68), GU32(sp_ + 0x6C), GF32(0x08B285A0));
}
/* (6.1) the soldier state that plays a table row named by a message (089A51A8: a1 -> the message, row at +0xC): RS_ANIMMSG_LOG */
void rs_animmsg_log(u32 st, u32 msg){
    static int on = -1; if (on < 0) on = getenv("RS_ANIMMSG_LOG") != 0; if (!on || !msg) return;
    void *bt[4]; int n = backtrace(bt, 4);
    fprintf(stderr, "[ANIMMSG] fr %u state %08x row %u w %08x %08x %08x %08x %08x %08x from %p %p\n", probe_fr, st, GU32(msg + 0xC), GU32(msg), GU32(msg + 4), GU32(msg + 8), GU32(msg + 0x10), GU32(msg + 0x14), GU32(msg + 0x18), n > 2 ? bt[2] : 0, n > 3 ? bt[3] : 0);
}
/* (tests) who calls a hooked function: each distinct native return address once (RS_CALLER_LOG; resolve with addr2line -f) */
void rs_caller_log(const char *fn, u32 a0){
    static int on = -1; if (on < 0) on = getenv("RS_CALLER_LOG") != 0; if (!on) return;
    void *bt[4]; int n = backtrace(bt, 4); static void *seen[64]; static int ns;
    for (int i = 0; i < ns; i++) if (seen[i] == (n > 2 ? bt[2] : 0)) return;
    if (ns < 64) seen[ns++] = n > 2 ? bt[2] : 0;
    fprintf(stderr, "[CALLER] fr %u %s a0 %08x from %p %p\n", probe_fr, fn, a0, n > 2 ? bt[2] : 0, n > 3 ? bt[3] : 0);
}
/* (4.4) the squad move order's message to member k (08931BAC: a0 the order, a1 k, a2 -> the point, t0 the node id): RS_MOVE_LOG */
void rs_move_log(u32 order, u32 k, u32 pt, u32 node){
    static int on = -1; if (on < 0) on = getenv("RS_MOVE_LOG") != 0; if (!on || (k != 0 && getenv("RS_MOVE_LOG")[0] != '2')) return;
    fprintf(stderr, "[MOVE] fr %u order %08x k %u node %u at %.1f %.1f %.1f\n", probe_fr, order, k, node, GF32(pt), GF32(pt + 4), GF32(pt + 8));
}
/* (4.4) a squad member's formation slot (08991E44: a0 the table, a1 the slot, a3 the centre, t0 -> the heading): RS_SLOT_LOG */
void rs_slot_log(u32 tab, u32 k, u32 ctr, u32 hd){
    static int on = -1; if (on < 0) on = getenv("RS_SLOT_LOG") != 0; if (!on || k >= 5) return;
    { static u32 seen[16]; int i = 0; for (; i < 16 && seen[i] && seen[i] != tab; i++) {} if (i < 16 && !seen[i]) { seen[i] = tab; fprintf(stderr, "[SLOTTAB] %08x", tab); for (u32 q = 0; q < 5; q++) fprintf(stderr, " (%.3f %.3f)", GF32(tab + 8 * q + 4), GF32(tab + 8 * q + 8)); fprintf(stderr, "\n"); } }
    static unsigned n; static int ev = -1; if (ev < 0) ev = getenv("RS_SLOT_EVERY") ? atoi(getenv("RS_SLOT_EVERY")) : 5; if (n++ % (unsigned)ev) return;
    fprintf(stderr, "[SLOT] fr %u tab %08x k %u r %.3f ang %.3f heading %.3f centre %.1f %.1f %.1f\n", probe_fr, tab, k, GF32(tab + 8 * k + 4), GF32(tab + 8 * k + 8), GF32(hd), GF32(ctr), GF32(ctr + 4), GF32(ctr + 8));
}
