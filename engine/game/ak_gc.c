/* Aurek - Galactic Conquest rules (see ak_gc.h; PARITY 5.4) */
#include "game/ak_gc.h"
#include <string.h>

/* 0x08B1C34C: { STDTEXT name, sector, neighbours (0x10 ends), count, credit bonus, level files } */
const ak_gc_planet_def ak_gc_planet_defs[AK_GC_PLANETS] = {
    { 74, 1, { 11, 5, 10, 13 }, 4, 60, { "space_alderaan", NULL } },
    { 75, 1, { 5, 12, 14, 9 }, 4, 50, { "boz_pity", NULL } },
    { 76, 3, { 11, 4, 13 }, 3, 40, { "endor", NULL } },
    { 77, 2, { 6, 14, 8 }, 3, 30, { "geonosis", NULL } },
    { 78, 3, { 2, 8 }, 2, 30, { "space_hoth", "hoth" } },
    { 79, 1, { 1, 0 }, 2, 30, { "space_kashyyyk_civil", "kashyyyk" } },
    { 80, 1, { 12, 3 }, 2, 30, { "space_kessel", NULL } },
    { 81, 0, { 15, 12 }, 2, 30, { "korriban", NULL } },
    { 82, 3, { 4, 13, 3 }, 3, 40, { "mustafar", NULL } },
    { 83, 0, { 1, 11, 15 }, 3, 40, { "mygeeto", NULL } },
    { 84, 2, { 0, 13, 14 }, 3, 30, { "naboo", NULL } },
    { 85, 0, { 9, 0, 2 }, 3, 30, { "ord_mantell", NULL } },
    { 86, 1, { 7, 1, 6 }, 3, 30, { "saleucami", NULL } },
    { 87, 3, { 0, 2, 8, 10 }, 4, 40, { "sullust", NULL } },
    { 88, 2, { 1, 3, 10 }, 3, 30, { "tatooine", NULL } },
    { 89, 0, { 9, 7 }, 2, 30, { "space_yavin", "yavin_iv" } },
};
const char *const ak_gc_planet_keys[AK_GC_PLANETS] = { "Alderaan", "Boz_Pity", "Endor", "Geonosis", "Hoth", "Kashyyyk", "Kessel",
    "Korriban", "Mustafar", "Mygeeto", "Naboo", "Ord_Mantell", "Saleucami", "Sullust", "Tatooine", "Yavin" };   /* 0x08AE4DC0 */
/* 0x08B1C60C { STDTEXT name, bonus }, keys 0x08AE4E00 */
const ak_gc_sector_def ak_gc_sector_defs[AK_GC_SECTORS] = { { 90, 40, "Expansion" }, { 91, 70, "Corporate" }, { 92, 50, "MidRim" },
    { 93, 60, "OuterRim" } };

static const ak_bp_object *sect(const ak_blueprints *b, const char *s) { return b ? ak_bp_find(b, "GalacticConquest", s) : NULL; }
static s32 geti(const ak_bp_object *o, const char *k, s32 def) { return o ? ak_bp_int(o, k, def) : def; }
static f32 getf(const ak_bp_object *o, const char *k, f32 def) { return o ? ak_bp_float(o, k, def) : def; }

void ak_gc_rules_load(const ak_blueprints *b, ak_gc_rules *r)
{
    memset(r, 0, sizeof *r);
    const ak_bp_object *pb = sect(b, "PlanetCreditBonus"), *qb = sect(b, "QuadrantCreditBonus"), *un = sect(b, "Units"),
        *co = sect(b, "Costs"), *in = sect(b, "Init"), *cb = sect(b, "CommanderBonus"), *bs = sect(b, "BattleSim");
    for (int i = 0; i < AK_GC_PLANETS; i++) r->planet_bonus[i] = geti(pb, ak_gc_planet_keys[i], ak_gc_planet_defs[i].bonus);
    for (int i = 0; i < AK_GC_SECTORS; i++) r->sector_bonus[i] = geti(qb, ak_gc_sector_defs[i].key, ak_gc_sector_defs[i].bonus);
    r->init_home = geti(un, "InitialHome", 150); r->init_nonhome = geti(un, "InitialNonHome", 50); r->max_home = geti(un, "MaxHome", 150);
    /* 08A43494 looks the caps up in Costs, where they are not: the defaults 0x08AE4EA8 hold */
    static const char *const capk[3] = { "MaxLevel1", "MaxLevel2", "MaxLevel3" }; static const int capd[3] = { 50, 80, 100 };
    for (int l = 0; l < 3; l++) r->troop_cap[l] = geti(co, capk[l], capd[l]);
    /* 08A4326C: { 0, L2, L3 } per kind, defaults 0x08AE4E44; the code's Logistics level 3 key (LogisticsTechLevel3) is not the
     * file's (LogisiticsTechLevel3) */
    static const char *const tk[3][2] = { { "LogisticsTechLevel2", "LogisticsTechLevel3" }, { "InfantryTechLevel2", "InfantryTechLevel3" },
                                          { "SpaceTechLevel2", "SpaceTechLevel3" } };
    static const int td[3][2] = { { 300, 500 }, { 500, 700 }, { 500, 700 } };
    for (int k = 0; k < 3; k++) { r->tech_cost[k][0] = 0; for (int l = 0; l < 2; l++) r->tech_cost[k][l + 1] = geti(co, tk[k][l], td[k][l]); }
    static const char *const ck[4] = { "Commander1", "Commander2", "Commander3", "Commander4" }; static const int cd[4] = { 700, 500, 300, 700 };
    for (int k = 0; k < 4; k++) r->cmdr_cost[k] = geti(co, ck[k], cd[k]);
    r->init_credits = geti(in, "Credits", 2000); r->extra_planets = geti(in, "ExtraPlanets", 4);
    r->sector_planet_bonus = geti(cb, "PlanetInSectorBonus", 30);
    r->tech_cost_bonus = getf(cb, "TechCostBonus", 0.5f); r->cmdr_cost_bonus = getf(cb, "CommanderCostBonus", 0.5f);   /* 0x08AEFC14 / 18 */
    r->sim_cmdr[0] = geti(bs, "CommanderGround", 5); r->sim_cmdr[1] = geti(bs, "CommanderSpace", 5);
    r->sim_inf[1][0] = geti(bs, "InfantryLevel2Ground", 5); r->sim_inf[1][1] = geti(bs, "InfantryLevel2Space", 0);
    r->sim_inf[2][0] = geti(bs, "InfantryLevel3Ground", 10); r->sim_inf[2][1] = geti(bs, "InfantryLevel3Space", 5);
    r->sim_space[1][0] = geti(bs, "SpaceLevel2Ground", 0); r->sim_space[1][1] = geti(bs, "SpaceLevel2Space", 5);
    r->sim_space[2][0] = geti(bs, "SpaceLevel3Ground", 0); r->sim_space[2][1] = geti(bs, "SpaceLevel3Space", 10);
}

u32 ak_gc_rand(ak_gc_rng *g, u32 n)
{
    g->x = g->x * 0x10000u + (u32)((s32)g->x >> 16) + g->y; g->y += g->x;
    return n ? (g->x >> 1) % n : 0;
}

static void shuffle4(ak_gc_rng *rg, int out[4][2], int col)   /* 08A377D4: a random order of 0..3, a taken pick walks on */
{
    bool used[4] = { 0 };
    for (int k = 0; k < 4; k++) { u32 v = ak_gc_rand(rg, 4); while (used[v]) v = (v + 1) & 3; out[k][col] = (int)v; used[v] = true; }
}

void ak_gc_new(ak_gc *g, const ak_gc_rules *r, int faction, u32 seed)
{
    memset(g, 0, sizeof *g); g->winner = -1;
    g->rng_setup.x = seed; g->rng_setup.y = seed ^ 0x9E3779B9u; g->rng_battle.x = seed * 2654435761u; g->rng_battle.y = ~seed;   /* [assumed] */
    int cand[AK_GC_PLANETS], nc = 0;
    for (int i = 0; i < AK_GC_PLANETS; i++) { g->planet[i].owner = AK_GC_NONE; if (ak_gc_planet_defs[i].level[1]) cand[nc++] = i; }
    shuffle4(&g->rng_setup, g->cmdr, 0); shuffle4(&g->rng_setup, g->cmdr, 1);
    u32 a = ak_gc_rand(&g->rng_setup, (u32)nc), b; do b = ak_gc_rand(&g->rng_setup, (u32)nc); while (b == a);
    int home[2] = { cand[a], cand[b] };
    for (int s = 0; s < 2; s++) { g->planet[home[s]].home = true; g->planet[home[s]].owner = s; g->planet[home[s]].troops = r->init_home; }
    for (int s = 0; s < 2; s++) {
        int other = ak_gc_planet_defs[home[!s]].sector, list[AK_GC_PLANETS], n = 0;
        for (int i = 0; i < AK_GC_PLANETS; i++) if (g->planet[i].owner == AK_GC_NONE && ak_gc_planet_defs[i].sector != other) list[n++] = i;
        for (int left = r->extra_planets; left > 0 && n > 0; left--) {
            u32 k = ak_gc_rand(&g->rng_setup, (u32)n); n--;
            g->planet[list[k]].owner = s; g->planet[list[k]].troops = r->init_nonhome;
            for (int j = (int)k; j < n; j++) list[j] = list[j + 1];
        }
    }
    for (int s = 0; s < 2; s++) { g->side[s].credits = (u32)r->init_credits; g->side[s].faction = 4; }   /* 08A3BD2C */
    g->ai[0] = false; g->ai[1] = true;
    int f = faction;
    if (f != 2 && f != 3) f = ak_gc_rand(&g->rng_setup, 2) == 0 ? 3 : 2;
    g->side[0].faction = f; g->side[1].faction = ak_gc_enemy_faction(f);
    ak_gc_update_sectors(g);
}

int ak_gc_home(const ak_gc *g, int side)
{
    for (int i = 0; i < AK_GC_PLANETS; i++) if (g->planet[i].home && g->planet[i].owner == side) return i;
    return -1;
}

int ak_gc_sector_owner(const ak_gc *g, int s)
{
    int o = AK_GC_NONE;
    for (int i = 0; i < AK_GC_PLANETS; i++) {
        if (ak_gc_planet_defs[i].sector != s) continue;
        int w = g->planet[i].owner; if (w == AK_GC_NONE) return AK_GC_NONE;
        if (o != AK_GC_NONE && w != o) return AK_GC_NONE;
        o = w;
    }
    return o;
}

void ak_gc_update_sectors(ak_gc *g)
{
    for (int s = 0; s < AK_GC_SECTORS; s++) {
        int o = g->sector_owner[s] = ak_gc_sector_owner(g, s);
        for (int i = 0; i < 2; i++) {
            int k = g->cmdr[s][ak_gc_class(g->side[i].faction) & 1];
            if (i == o) g->side[i].cmdr_avail[k] = true;
            else { g->side[i].cmdr_avail[k] = false; g->side[i].cmdr_bought[k] = false; }
        }
    }
}

int ak_gc_cap(const ak_gc *g, const ak_gc_rules *r, int p)
{
    if (g->planet[p].home) return r->max_home;
    int o = g->planet[p].owner; if (o > 1) o = g->turn;
    return r->troop_cap[g->side[o].tech[AK_GC_TECH_LOGISTICS]];
}

ak_gc_income ak_gc_collect(ak_gc *g, const ak_gc_rules *r, int side)
{
    ak_gc_income in = { 0 }; ak_gc_side *sd = &g->side[side]; int cls = ak_gc_class(sd->faction) & 1;
    for (int i = 0; i < AK_GC_PLANETS; i++) if (g->planet[i].owner == side) in.planets += (u32)r->planet_bonus[i];
    for (int s = 0; s < AK_GC_SECTORS; s++) {
        if (ak_gc_sector_owner(g, s) == side) in.sectors += (u32)r->sector_bonus[s];
        if (g->cmdr[s][cls] == 1 && sd->cmdr_bought[1])
            for (int i = 0; i < AK_GC_PLANETS; i++) if (ak_gc_planet_defs[i].sector == s && g->planet[i].owner == side) in.commander += (u32)r->sector_planet_bonus;
    }
    u32 room = 9999u - sd->credits;
    if (in.planets > room) in.planets = room;
    room -= in.planets;
    if (in.sectors > room) in.sectors = room;
    room -= in.sectors;
    if (in.commander > room) in.commander = room;
    in.total = in.planets + in.sectors + in.commander; sd->credits += in.total;
    return in;
}

static u32 discounted(const ak_gc_side *sd, u32 c, f32 f) { return sd->cmdr_bought[2] ? c - (u32)(s32)((f32)c * f) : c; }
u32 ak_gc_tech_price(const ak_gc *g, const ak_gc_rules *r, int side, int kind, int level)
{ return level < 0 || level > 2 ? 0 : discounted(&g->side[side], (u32)r->tech_cost[kind][level], r->tech_cost_bonus); }
u32 ak_gc_cmdr_price(const ak_gc *g, const ak_gc_rules *r, int side, int k)
{ return discounted(&g->side[side], (u32)r->cmdr_cost[k], r->cmdr_cost_bonus); }

bool ak_gc_buy_tech(ak_gc *g, const ak_gc_rules *r, int side, int kind)
{
    ak_gc_side *sd = &g->side[side]; int l = sd->tech[kind] + 1; if (l > 2) return false;
    u32 c = ak_gc_tech_price(g, r, side, kind, l); if (c > sd->credits) return false;
    sd->tech[kind] = l; sd->credits -= c; return true;
}
bool ak_gc_buy_cmdr(ak_gc *g, const ak_gc_rules *r, int side, int k)
{
    ak_gc_side *sd = &g->side[side]; if (!sd->cmdr_avail[k] || sd->cmdr_bought[k]) return false;
    u32 c = ak_gc_cmdr_price(g, r, side, k); if (c > sd->credits) return false;
    sd->cmdr_bought[k] = true; sd->credits -= c; return true;
}
int ak_gc_buy_troops(ak_gc *g, const ak_gc_rules *r, int side, int p, int n)
{
    if (p < 0 || p >= AK_GC_PLANETS || g->planet[p].owner != side) return 0;
    int room = ak_gc_cap(g, r, p) - g->planet[p].troops; if ((u32)room > g->side[side].credits) room = (int)g->side[side].credits;
    if (n > room) n = room;
    n -= n % 10; if (n <= 0) return 0;
    g->planet[p].troops += n; g->side[side].credits -= (u32)n; return n;
}

int ak_gc_move_room(const ak_gc *g, const ak_gc_rules *r, int side, int from, int to)
{
    if (g->planet[from].owner != side || g->planet[from].troops < 10) return 0;
    int avail = g->planet[from].troops - 10, room;
    if (g->planet[to].owner == side) room = ak_gc_cap(g, r, to) - g->planet[to].troops;
    else room = r->troop_cap[g->side[side].tech[AK_GC_TECH_LOGISTICS]];
    int n = avail < room ? avail : room; return n < 0 ? 0 : n - n % 10;
}

static bool adjacent(int a, int b) { for (int k = 0; k < ak_gc_planet_defs[a].nnb; k++) if (ak_gc_planet_defs[a].nb[k] == b) return true; return false; }

int ak_gc_move(ak_gc *g, const ak_gc_rules *r, int side, int from, int to, int n)
{
    if (from == to || !adjacent(from, to) || g->planet[from].owner != side || n <= 0) return AK_GC_MOVE_BAD;
    int room = ak_gc_move_room(g, r, side, from, to); if (n > room) n = room; if (n <= 0) return AK_GC_MOVE_BAD;
    ak_gc_world *d = &g->planet[to];
    if (d->owner == side) { g->planet[from].troops -= n; d->troops += n; return AK_GC_MOVE_MOVED; }
    if (d->owner == AK_GC_NONE) { g->planet[from].troops -= n; d->owner = side; d->troops = n; ak_gc_update_sectors(g); return AK_GC_MOVE_OCCUPIED; }
    g->planet[from].troops -= n;                        /* 08A3A1D0: the attackers leave at the confirm */
    return AK_GC_MOVE_BATTLE;
}

int ak_gc_reinforce(ak_gc *g, const ak_gc_rules *r, int side, int from, int to, int n)
{
    if (from == to || g->planet[from].owner != side || g->planet[from].troops < 11 || g->planet[to].owner != side || !adjacent(from, to)) return 0;
    bool own_nb = false; for (int k = 0; k < ak_gc_planet_defs[from].nnb; k++) own_nb |= g->planet[ak_gc_planet_defs[from].nb[k]].owner == side;
    if (!own_nb) return 0;
    int room = ak_gc_cap(g, r, to) - g->planet[to].troops, avail = g->planet[from].troops - 10;
    if (n > room) n = room;
    if (n > avail) n = avail;
    if (n <= 0) return 0;
    g->planet[from].troops -= n; g->planet[to].troops += n; return n;
}

int ak_gc_sim_bonus(const ak_gc *g, const ak_gc_rules *r, int side, bool space)
{
    const ak_gc_side *sd = &g->side[side]; int sp = space ? 1 : 0, b = 0;
    if (sd->cmdr_avail[0] && sd->cmdr_bought[0]) b += r->sim_cmdr[sp];
    if (sd->tech[AK_GC_TECH_INFANTRY] > 0) b += r->sim_inf[sd->tech[AK_GC_TECH_INFANTRY]][sp];
    if (sd->tech[AK_GC_TECH_SPACE] > 0) b += r->sim_space[sd->tech[AK_GC_TECH_SPACE]][sp];
    return b;
}

int ak_gc_autoresolve(ak_gc *g, const ak_gc_rules *r, int troops[2], bool space)
{
    int b0 = ak_gc_sim_bonus(g, r, 0, space), b1 = ak_gc_sim_bonus(g, r, 1, space);
    for (;;) {
        int r200 = (int)ak_gc_rand(&g->rng_battle, 200), loser = (100 + b0 - b1 < r200) ? 0 : 1;
        if (troops[loser] == 0 || --troops[loser] == 0) return !loser;
    }
}

const char *ak_gc_battle_level(const ak_gc *g, int p, bool second)
{
    const ak_gc_planet_def *d = &ak_gc_planet_defs[p];
    if (!second && (!d->level[1] || g->planet[p].home)) return d->level[0];
    return d->level[1] ? d->level[1] : d->level[0];
}

bool ak_gc_result(ak_gc *g, const ak_gc_rules *r, int side, int to, int winner, const int surv_in[2], bool second)
{
    (void)r;
    int surv[2]; for (int i = 0; i < 2; i++) surv[i] = (surv_in[i] + 9) / 10 * 10;
    if (winner == 2) { winner = g->ai[0] ? 1 : 0; surv[winner] = 10; }   /* a draw: side 0 unless the AI plays it, with 10 (08A3A5CC) */
    else if (surv[winner] < 10) surv[winner] = 10;
    ak_gc_world *d = &g->planet[to];
    if (winner == side) {
        if (d->home && !second) return true;            /* the space battle over a home planet: the ground battle next */
        bool home = d->home; d->owner = side; d->troops = surv[side];
        if (home) { d->home = false; g->winner = side; }
    } else {
        d->troops = surv[!side]; if (d->troops < 10) d->troops = 10;
    }
    ak_gc_update_sectors(g);
    return false;
}

void ak_gc_turn_start(ak_gc *g) { g->second_ok = g->second_used = false; }

static int cmdr3_sector(const ak_gc *g, int side)
{
    int cls = ak_gc_class(g->side[side].faction) & 1;
    for (int s = 0; s < AK_GC_SECTORS; s++) if (g->cmdr[s][cls] == 3) return s;
    return 4;
}

bool ak_gc_move_source(ak_gc *g, int side, int from)
{
    if (from < 0 || from >= AK_GC_PLANETS || g->planet[from].owner != side || g->planet[from].troops < 11) return false;
    if (g->second_used && ak_gc_planet_defs[from].sector != cmdr3_sector(g, side)) return false;
    int sec = ak_gc_planet_defs[from].sector, cls = ak_gc_class(g->side[side].faction) & 1;
    g->second_ok = g->cmdr[sec][cls] == 3 && g->side[side].cmdr_bought[3];
    return true;
}

bool ak_gc_after_move(ak_gc *g)
{
    if (g->second_used || !g->second_ok) return false;
    g->second_used = true; return true;
}

void ak_gc_battle_tickets(const ak_gc *g, int side, int to, int n, int tickets[2])
{
    int def = g->planet[to].troops;
    if (ak_gc_class(g->side[side].faction) == 0) { tickets[0] = n; tickets[1] = def; } else { tickets[0] = def; tickets[1] = n; }
}

int ak_gc_battle_winner(const ak_gc *g, int f)
{
    if (f == g->side[0].faction) return 0;
    if (f == g->side[1].faction) return 1;
    return 2;
}

void ak_gc_battle_survivors(const ak_gc *g, const int left[2], int surv[2])
{
    for (int s = 0; s < 2; s++) surv[s] = left[ak_gc_class(g->side[s].faction) & 1];
}
