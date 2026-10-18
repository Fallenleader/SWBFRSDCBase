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
