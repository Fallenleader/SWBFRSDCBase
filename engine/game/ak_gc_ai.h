/* Aurek - the Galactic Conquest AI (PARITY 5.4), as traced from the game (AI object 08A3D120 / 08A3D17C / 08A3D1D8, driven by
 * the AI player 08A42500):
 *
 *  - It works on a copy of the board (08A3D708: planets, both sides' credits, tech, commanders).
 *  - Candidate moves (08A3E044): every own planet onto every non-own neighbour, plus - when the side's commander 3 (Thrawn /
 *    Ackbar) is available - a second move from an own planet in that commander's sector; plus "no move".  Up to 495 (0x1EF).
 *  - Each move is tried with each purchase (1024 codes: a target level 0-2 per tech, a bit per commander; 08A3E57C).  The
 *    purchase is priced and the move's troops planned (08A3E5E4: troops bought at the source - 20, 30 for two moves from it -,
 *    the home planet topped up to "Troops Defending Home" 120, the attack force trimmed while its odds stay above Optimism
 *    0.62, the rest of the credits spent on own planets in tens).
 *  - Each feasible plan is scored (08A3FB1C): the board is evaluated (08A3D8A0 / 08A3D200: credits x Treasury 0.25, planet
 *    income x 0.85, sector income x 0.85 - sectors nearly owned count in part -, troop caps x 0.4, troops on the front x 1.0,
 *    troops within 2 hops of the enemy home x 1.0, 9999 for a won game; the side's score x Own Bonus 1.0 minus the enemy's x
 *    Enemy Bonus 0.75) after each battle outcome, weighted by the odds (08A3D560: p = 0.5 + 0.5 (A - D) / (A + D), A = attackers
 *    x (1 + 0.01 bonus), D = defenders x (1 + 0.01 bonus)); odds at or above Optimism count as certain, a first attack below
 *    Min Attack Probability 0.45 (that does not win the game) as hopeless (priority 3).
 *  - The best plan: the lowest priority (0 sure attack / move, 1 sure occupation, 2 risky, 3 hopeless, 5 none), plans that only
 *    move troops between interior planets last, then the highest score; a plan against the planet attacked last turn (with no
 *    fewer defenders) is dropped.  08A3F708 then picks a reinforcement for it.
 * Quirks kept: the plan's troop list is not cleared before the chosen plan is priced again (08A3E5E4 reuses the last try's
 * values); interior flags of a plan without attacks are the previous plan's [assumed: stack left-overs]; a planet index 16
 * ("none") reads as an empty planet [assumed]. */
#ifndef AK_GC_AI_H
#define AK_GC_AI_H
#include "game/ak_gc.h"

#define AK_GC_AI_PLANS 0x1EF
typedef struct {
    u32 buy[16];                       /* troops bought per planet (+0) */
    u32 snap[16];                      /* own troops at the start (+0x40) */
    s32 tech[3]; u8 cmdr[4];           /* the purchase: target tech levels, commanders (+0x80, +0x8C) */
    s32 src[2], dst[2]; u32 n[2];      /* the moves (+0x90, +0x98) and their troops (+0xA0); 16 = none */
    s32 rf_a, rf_b; u32 rf_n;          /* 08A3F708's reinforcement (+0xB0, +0xB4, +0xB8) */
    u32 eval[15];                      /* the scored board (+0xBC; [12] own, [13] enemy) */
    u32 prio; u8 flag;                 /* +0xF8, +0xFC (flag: only interior moves) */
} ak_gc_plan;

typedef struct { u8 home; s32 owner; u32 troops; } ak_gc_ai_planet;
typedef struct { int faction; u32 credits; s32 tech[3]; u8 avail[4], bought[4]; } ak_gc_ai_side;
typedef struct {
    ak_gc_ai_planet pl[17];            /* [16]: "none" */
    ak_gc_ai_side me, en; int side, enemy;
    ak_gc_plan plans[AK_GC_AI_PLANS]; u32 nplans, best;
    s32 last_target; u32 last_troops;
    u8 stale[48];                      /* 08A3E5E4's flags kept from the previous call */
    u8 dist[16][16];                   /* hops (08A3CF14) */
    const ak_gc_rules *r; const ak_gc *g;
} ak_gc_ai;

void ak_gc_ai_init(ak_gc_ai *ai);
void ak_gc_ai_plan(ak_gc_ai *ai, const ak_gc *g, const ak_gc_rules *r);          /* g->turn plays (08A3E044) */
void ak_gc_ai_reinforce_plan(ak_gc_ai *ai, const ak_gc *g, const ak_gc_rules *r); /* 08A3F708 */
const ak_gc_plan *ak_gc_ai_best(const ak_gc_ai *ai);                             /* 08A3D1D8 */

/* The AI player (08A42500, vtable 0x08B153A0) carries a turn out by pressing the menus' buttons; in rule terms (after the treasury):
 *  - purchase (state 3): plans (08A3E044); commander 2 first if planned, then each tech one level at a time to its target, then
 *    the other planned commanders; then troops, at the selected planet first (the home planet after the treasury) and then the
 *    other own planets in order, each bought in tens from 10 up to the plan's amount;
 *  - move (state 4): the plan's move from its source (20+ troops) with its troops counted up in tens, a battle when the target is
 *    the enemy's; the second move when earned (Thrawn / Ackbar);
 *  - reinforce (state 8): 08A3F708 on the board as it now is, then that move.
 * Its quirk is kept: whenever a step cannot be done - a price above the credits, a count that cannot grow, a source not its own or
 * with under 20 troops, fewer than 10 credits for a planned troop buy - it ends the whole turn (+0x33) on the spot.
 * battle: resolves a battle (NULL: auto-resolve) - returns the winning side and fills the survivors. */
typedef int (*ak_gc_battle_fn)(void *ctx, ak_gc *g, int side, int to, int n, bool second, int surv[2]);
typedef struct { int bought_tech[3], bought_cmdr[4], troops[16]; int moved[2][3]; int battles; int reinf[3]; bool ended_early; } ak_gc_ai_report;
void ak_gc_ai_turn(ak_gc_ai *ai, ak_gc *g, const ak_gc_rules *r, ak_gc_battle_fn battle, void *ctx, ak_gc_ai_report *rep);
#endif
