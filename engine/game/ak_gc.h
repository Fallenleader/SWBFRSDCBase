/* Aurek - Galactic Conquest rules (PARITY 5.4), as traced from the game (08A37xxx-08A4xxxx, text/GalacticConquest.asr):
 *
 *  - The map: 16 planets (table 0x08B1C34C, 44 bytes each: STDTEXT name, sector, up to 5 neighbours, credit bonus, the space /
 *    ground level files - a planet with both is fought in space first when it is a home planet, else on the ground), 4 sectors
 *    (0x08B1C60C: Northern / Eastern / Southern / Western quadrants, credit bonus; their planet lists are built by 08A430DC).
 *  - Values: blueprint GalacticConquest (08A43264 family; read live in the harness, RS_GC_PROBE).  The game looks some keys up in
 *    the wrong section or under a misspelt name, so their code defaults hold: the troop caps (MaxLevel1-3 looked up in Costs:
 *    50 / 80 / 100, not the file's 60 / 80 / 100) and Logistics level 3 (500).
 *  - New game (08A377D4): every planet neutral, 0 troops; each sector gets a random commander (0..3) per side (two shuffles);
 *    two different home planets among those with a space and a ground level (Hoth, Kashyyyk, Yavin), InitialHome (150) troops
 *    each; then for each side ExtraPlanets (3) random neutral planets outside the other side's home sector, InitialNonHome (40)
 *    each.  Both sides: Init Credits (500), tech levels 0, no commanders.  The player's faction is the menu's (2 Alliance /
 *    3 Empire; 4 = random), side 1 the other.
 *  - A turn (state machine 08A38138): treasury (income, 08A391D8), purchase (tech 08A39AAC, commanders 08A39BA0, troops at the
 *    selected own planet for 1 credit each, in tens, up to its cap), one move (08A39FDC: to an own planet - capped by its room -, onto a
 *    neutral planet - occupied -, or onto an enemy one - a battle, played or auto-resolved), results (08A3A5CC), reinforce (from
 *    an own planet to a neighbouring own planet, capped by room), then the other side.  A move leaves 10 troops behind and moves
 *    in tens (08A386C4).  Thrawn / Ackbar give a second attacking move.
 *  - Income: the owned planets' bonuses + the bonus of every sector wholly owned + PlanetInSectorBonus (30) per owned planet in
 *    the sector of the side's commander 1 (Emperor / Mon Mothma) once bought; credits cap at 9999.
 *  - Sectors (08A3B590, after every change): a side owning a whole sector may buy that sector's commander for it (cost
 *    Commander1-4, halved by commander 2 - Tarkin / Leia - who also halves tech costs); a side losing the sector loses its
 *    commander there (bought or not).
 *  - Commanders: 0 Vader / Han (+CommanderGround / Space in the battle simulation), 1 Emperor / Mothma (income), 2 Tarkin / Leia
 *    (costs), 3 Thrawn / Ackbar (two attacks).
 *  - Auto-resolve (08A3A47C): every tick (0.01 s) each side's bonus b = commander 0 (5) + its infantry level bonus (ground: 0 / 5
 *    / 10, space: 0 / 0 / 5) + its space level bonus (space: 0 / 5 / 10, ground 0) (08A436C0); r = rand % 200; side 0 loses a troop
 *    when r > 100 + b0 - b1, else side 1 does; it ends when a side has none.
 *  - Results: survivors round up to tens (at least 10 for the winner).  An attacker winning takes the planet with its
 *    survivors; a home planet with a space and a ground level is fought twice (space, then ground); taking the enemy home ends
 *    the game (state 9).  A defender winning keeps its survivors (at least 10).
 * Randomness: the game's generator (x = x * 0x10000 + (x >> 16) + y; y += x; value (x >> 1) % n) - setup and battles have
 * their own states (0x08B25AC8 / 0x08B25AC0); their seeds are not traced [assumed: AK_SEED]. */
#ifndef AK_GC_H
#define AK_GC_H
#include "core/ak_core.h"
#include "assets/blueprint.h"

#define AK_GC_PLANETS 16
#define AK_GC_SECTORS 4
#define AK_GC_NONE 2                  /* owner of a neutral planet / sector */

typedef struct { u32 name_id; int sector; int nb[5], nnb; int bonus; const char *level[2]; } ak_gc_planet_def;   /* name: STDTEXT */
typedef struct { u32 name_id; int bonus; const char *key; } ak_gc_sector_def;
extern const ak_gc_planet_def ak_gc_planet_defs[AK_GC_PLANETS];
extern const char *const ak_gc_planet_keys[AK_GC_PLANETS];    /* PlanetCreditBonus keys */
extern const ak_gc_sector_def ak_gc_sector_defs[AK_GC_SECTORS];

typedef struct {
    int planet_bonus[AK_GC_PLANETS], sector_bonus[AK_GC_SECTORS];
    int init_home, init_nonhome, max_home, troop_cap[3], tech_cost[3][3], cmdr_cost[4];
    int init_credits, extra_planets, sector_planet_bonus;
    f32 tech_cost_bonus, cmdr_cost_bonus;
    int sim_cmdr[2], sim_inf[3][2], sim_space[3][2];          /* [level][0 ground, 1 space] */
} ak_gc_rules;

enum { AK_GC_TECH_LOGISTICS, AK_GC_TECH_INFANTRY, AK_GC_TECH_SPACE };
typedef struct { bool home; int owner; int troops; } ak_gc_world;
typedef struct { int faction; u32 credits; int tech[3]; bool cmdr_avail[4], cmdr_bought[4]; } ak_gc_side;
typedef struct { u32 x, y; } ak_gc_rng;
typedef struct {
    ak_gc_world planet[AK_GC_PLANETS];
    ak_gc_side side[2];
    int sector_owner[AK_GC_SECTORS], cmdr[AK_GC_SECTORS][2];  /* cmdr[s][c]: the commander of faction class c (0 good, 1 bad) */
    ak_gc_rng rng_setup, rng_battle;
    int turn;                                                 /* the side to play */
    bool ai[2];                                               /* a side the AI plays (08A3BE90: its controller's vfunc +0xC) */
    bool second_ok, second_used;                              /* Thrawn / Ackbar's second move this turn (+0x7F / +0x80) */
    int winner;                                               /* -1 playing */
} ak_gc;

typedef struct { u32 planets, sectors, commander, total; } ak_gc_income;
enum { AK_GC_MOVE_BAD = 0, AK_GC_MOVE_MOVED, AK_GC_MOVE_OCCUPIED, AK_GC_MOVE_BATTLE };

void ak_gc_rules_load(const ak_blueprints *b, ak_gc_rules *r);          /* NULL blueprints: the code defaults */
static inline int ak_gc_class(int faction) { return faction == 1 || faction == 3 ? 1 : faction == 0 || faction == 2 ? 0 : 2; }  /* 08A26FC0 */
static inline int ak_gc_enemy_faction(int f) { return f == 1 ? 0 : f == 0 ? 1 : f == 2 ? 3 : f == 3 ? 2 : 4; }            /* 08A26F88 */
u32  ak_gc_rand(ak_gc_rng *g, u32 n);
void ak_gc_new(ak_gc *g, const ak_gc_rules *r, int faction, u32 seed);  /* faction 2 / 3, 4 = random */
int  ak_gc_home(const ak_gc *g, int side);                              /* the side's home planet, -1 none (08A3B2C0) */
int  ak_gc_sector_owner(const ak_gc *g, int s);                         /* 08A385C4 */
void ak_gc_update_sectors(ak_gc *g);                                    /* 08A3B590 */
int  ak_gc_cap(const ak_gc *g, const ak_gc_rules *r, int planet);       /* a planet's troop cap for its owner */
ak_gc_income ak_gc_collect(ak_gc *g, const ak_gc_rules *r, int side);   /* the treasury phase: credits added */
u32  ak_gc_tech_price(const ak_gc *g, const ak_gc_rules *r, int side, int kind, int level);
u32  ak_gc_cmdr_price(const ak_gc *g, const ak_gc_rules *r, int side, int k);
bool ak_gc_buy_tech(ak_gc *g, const ak_gc_rules *r, int side, int kind);        /* the next level */
bool ak_gc_buy_cmdr(ak_gc *g, const ak_gc_rules *r, int side, int k);
int  ak_gc_buy_troops(ak_gc *g, const ak_gc_rules *r, int side, int planet, int n);  /* at an own planet (the cursor's, 08A38C90): 1 credit
                                                                                 each, in tens, up to its cap (08A386C4); returns those bought */
int  ak_gc_move_room(const ak_gc *g, const ak_gc_rules *r, int side, int from, int to);   /* how many may go (08A386C4) */
int  ak_gc_move(ak_gc *g, const ak_gc_rules *r, int side, int from, int to, int n);       /* AK_GC_MOVE_* */
int  ak_gc_reinforce(ak_gc *g, const ak_gc_rules *r, int side, int from, int to, int n);  /* 08A3ADA8: from an own planet with 11+
    troops and an own neighbour (08A3B36C / 3A4 / 440) to an own planet not full (08A3B4E0 / 518), capped by its room [assumed:
    a neighbour; the source keeps 10] */
int  ak_gc_sim_bonus(const ak_gc *g, const ak_gc_rules *r, int side, bool space);         /* 08A436C0 */
int  ak_gc_autoresolve(ak_gc *g, const ak_gc_rules *r, int troops[2], bool space);        /* the winning side; troops left */
const char *ak_gc_battle_level(const ak_gc *g, int planet, bool second); /* the level file fought (08A3A2B8); "space_*" = space */
/* a battle's result on planet `to` attacked by `side` with `n` troops: survivors per side; returns true when the planet must be
 * fought again (a home planet's ground battle after its space battle) */
bool ak_gc_result(ak_gc *g, const ak_gc_rules *r, int side, int to, int winner, const int surv[2], bool second);
/* the turn's move bookkeeping: ak_gc_turn_start at the treasury (08A39508); ak_gc_move_source checks a move's source (08A39E00: own,
 * 11+ troops; on the second move, a planet in the side's commander-3 sector - 08A38CD0) and notes whether that move earns a second
 * (its sector's commander for the side is 3 and bought); ak_gc_after_move says whether the results go on to a second move
 * (08A3AD24) rather than the reinforcement */
void ak_gc_turn_start(ak_gc *g);
bool ak_gc_move_source(ak_gc *g, int side, int from);
bool ak_gc_after_move(ak_gc *g);
/* played battles (08A3A2B8 / 08A3A5CC): the match's starting tickets are the troops (per faction class: [0] the Republic /
 * Alliance side, [1] the CIS / Empire side - read by the ticket entity 08987414), and its result is the winning faction (-1 a
 * draw) and the tickets each class has left (08972658: 0x08C28F84 / 88 / 8C) */
void ak_gc_battle_tickets(const ak_gc *g, int side, int to, int n, int tickets[2]);
int  ak_gc_battle_winner(const ak_gc *g, int winning_faction);          /* the side, 2 = a draw */
void ak_gc_battle_survivors(const ak_gc *g, const int class_left[2], int surv[2]);
#endif
