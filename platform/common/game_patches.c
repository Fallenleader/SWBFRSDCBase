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
void rs_patches_frame(void){
    if (!on() || GU8(IMG(MODE_NETWORK)) != 1) return;
    u32 t = GU32(IMG(VAR_TICKETS));
    if (t > 200) GU32(IMG(VAR_TICKETS)) = 200; else if (t < 25) GU32(IMG(VAR_TICKETS)) = 25; }
