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
    { extern void rs_ai_frame(void); rs_ai_frame(); }                    /* idle squads (below) */
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
void rs_ai_debug(unsigned fr);
void rs_ai_frame(void){
    static unsigned fr;
    if (GU32(IMG(UL_COUNT)) == 0) { ai_cmd[0] = ai_cmd[1] = 0; return; }
    if (!on() || GU8(IMG(MODE_NETWORK)) == 1 || ++fr % 30) return;
    { static int dbg = -1; if (dbg < 0) dbg = getenv("RS_AI_DEBUG") != 0; if (dbg && fr % 300 == 0) rs_ai_debug(fr); }
    if (!rs_setting_int("RS_AI_IDLE_FIX", 1)) return;
    for (int c = 0; c < 2; c++) { u32 cmd = ai_cmd[c]; if (!cmd) continue; u32 team = GU32(cmd + 4); if (!team) continue;
        u32 ns = GU32(team + 0x48); if (ns > 10) ns = 10;
        for (u32 j = 0; j < ns; j++) { u32 sq = (u32)func_0898BC68(team, j); if (!sq || !GU32(sq + 0xAC) || GU32(sq + 0x3C) != 999 || GU8(sq + 0x2A) || GU8(sq + 0x2C)) continue;
            u32 best = ai_best_post(cmd); if (best == 999) break;
            if (rs_setting_int("RS_AI_LOG", 0)) fprintf(stderr, "[AI] team %u: idle squad %u (%u bots) sent to post %u\n", GU32(team + 0x4C), j, GU32(sq + 0xAC), best);
            func_08926478(cmd, j, best); } } }
void rs_ai_debug(unsigned fr){
    for (int c = 0; c < 2; c++) { u32 cmd = ai_cmd[c]; if (!cmd) continue; u32 team = GU32(cmd + 4); if (!team) continue;
        u32 ns = GU32(team + 0x48); if (ns > 10) ns = 10;
        fprintf(stderr, "[AIDBG] f%u team %u posts take %02x hold %02x ours %02x squads %u:", fr, GU32(team + 0x4C), GU8(cmd + 0x48), GU8(cmd + 0x49), GU8(cmd + 0x4A), ns);
        for (u32 j = 0; j < ns; j++) { u32 sq = (u32)func_0898BC68(team, j); if (!sq) { fprintf(stderr, " -"); continue; }
            fprintf(stderr, " [%u: %u bots, order %x post %u, %02x%02x]", j, GU32(sq + 0xAC), GU32(sq + 0x4C), GU32(sq + 0x3C), GU8(sq + 0x2A), GU8(sq + 0x2C)); }
        fprintf(stderr, "\n"); } }
int rs_ai_assign(u32 cmd, u32 sq, u32 cp){
    static int inside;
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
int rs_stdtext_get(u32 id, u32 *rv){
    static u32 ids[64], at[64]; static int n;
    for (int i = 0; i < n; i++) if (ids[i] == id) { *rv = at[i]; return 1; }
    u16 w[512]; int k = rs_weapons_text16(id, w, 512); if (k <= 0 || n == 64) return 0;
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
