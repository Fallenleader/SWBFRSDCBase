/* Aurek - the Galactic Conquest AI (see ak_gc_ai.h; PARITY 5.4) */
#include "game/ak_gc_ai.h"
#include <string.h>

/* tuning 0x08B1C308.. (debug menu BFF_GC_01-11, 08A3C110) */
static const f32 OPTIMISM = 0.62f, MIN_ATTACK = 0.45f, W_TREASURY = 0.25f, W_PLANET = 0.85f, W_REGION = 0.85f, W_PLANET_STRAT = 0.4f,
    W_UNIT_STRAT = 1.0f, W_NEAR_HOME = 1.0f, W_OWN = 1.0f, W_ENEMY = 0.75f;
static const u32 DEFEND_HOME = 120;
static const u32 PRIO_SURE_ENEMY = 0, PRIO_SURE_NEUTRAL = 1;   /* 0x08AE4C44 / 48 */

#define PD(p) (ak_gc_planet_defs[(p) < 16 ? (p) : 0])
static int nnb(int p) { return p < 16 ? ak_gc_planet_defs[p].nnb : 0; }        /* planet 16: the table runs on into 0 */
static int nb(int p, int k) { return ak_gc_planet_defs[p].nb[k]; }
static int nsec(int s) { int n = 0; for (int i = 0; i < 16; i++) n += ak_gc_planet_defs[i].sector == s; return n; }
static int secp(int s, int k) { for (int i = 0; i < 16; i++) if (ak_gc_planet_defs[i].sector == s && k-- == 0) return i; return 16; }

static u32 f2u(f32 f) { return (u32)f; }

static void dist_relax(ak_gc_ai *ai, int i, int n, u32 d)        /* 08A3D010 */
{
    if (d > ai->dist[i][n]) return;
    ai->dist[i][n] = ai->dist[n][i] = (u8)d;
    for (int k = 0; k < nnb(n); k++) dist_relax(ai, i, nb(n, k), d + 1);
}

void ak_gc_ai_init(ak_gc_ai *ai)
{
    memset(ai, 0, sizeof *ai); ai->last_target = 17;
    for (int i = 0; i < 16; i++) { for (int j = 0; j < 16; j++) ai->dist[i][j] = 16; ai->dist[i][i] = 0; }
    for (int i = 0; i < 16; i++) for (int k = 0; k < nnb(i); k++) dist_relax(ai, i, nb(i, k), 1);
}

static void refresh(ak_gc_ai *ai)                                 /* 08A3D708 */
{
    const ak_gc *g = ai->g;
    for (int i = 0; i < 16; i++) { ai->pl[i].home = g->planet[i].home; ai->pl[i].owner = g->planet[i].owner; ai->pl[i].troops = (u32)g->planet[i].troops; }
    memset(&ai->pl[16], 0, sizeof ai->pl[16]);
    ai->side = g->turn; ai->enemy = g->turn == 0;
    for (int s = 0; s < 2; s++) {
        const ak_gc_side *sd = &g->side[s ? ai->enemy : ai->side]; ak_gc_ai_side *o = s ? &ai->en : &ai->me;
        o->faction = sd->faction; o->credits = sd->credits;
        for (int k = 0; k < 3; k++) o->tech[k] = sd->tech[k];
        for (int k = 0; k < 4; k++) { o->avail[k] = sd->cmdr_avail[k]; o->bought[k] = sd->cmdr_bought[k]; }
    }
}

static u32 cap_lvl(const ak_gc_ai *ai, s32 lvl) { return lvl >= 0 && lvl < 3 ? (u32)ai->r->troop_cap[lvl] : 0x0772DF91u; }  /* [assumed] beyond: the key's hash */
static u32 cap(const ak_gc_ai *ai, int p)                                         /* 08A414A4 */
{ return ai->pl[p].home && ai->pl[p].owner == ai->side ? (u32)ai->r->max_home : cap_lvl(ai, ai->me.tech[0]); }
static u32 cap_for(const ak_gc_ai *ai, int p, int owner)                          /* 08A41504 */
{
    if (ai->pl[p].home && ai->pl[p].owner == owner) return (u32)ai->r->max_home;
    return cap_lvl(ai, owner == ai->enemy ? ai->en.tech[0] : ai->me.tech[0]);
}
static bool untouched(const ak_gc_ai *ai, int p, int side)                        /* 08A412CC: not side's, no neighbour of side's */
{
    if (ai->pl[p].owner == side) return false;
    for (int k = 0; k < nnb(p); k++) if (ai->pl[nb(p, k)].owner == side) return false;
    return true;
}
static int enemy_nb(const ak_gc_ai *ai, int p)                                     /* 08A41390 */
{
    int n = 0;
    for (int k = 0; k < nnb(p); k++) { int o = ai->pl[nb(p, k)].owner; if (o != ai->pl[p].owner) n += o != 2; }
    return n;
}
static u32 home_dist(const ak_gc_ai *ai, int p)                                   /* 08A41228 */
{
    if (ai->pl[p].owner == 2) return 16;
    for (int j = 0; j < 16; j++)
        if (ai->pl[j].home && ai->pl[j].owner != ai->pl[p].owner && ai->pl[j].owner != 2) return ai->dist[p < 16 ? p : 15][j];
    return 16;
}
static void lose(ak_gc_ai *ai, int p, u32 n)                                      /* 08A41570 */
{
    if (p >= 16) return;
    u32 t = ai->pl[p].troops, v = t - n; if (v < 10) v = 10; if (t <= v) v = t; ai->pl[p].troops = v;
}
static void setp(ak_gc_ai *ai, int p, u32 n)                                      /* 08A415B0 */
{
    if (p >= 16) return;
    u32 c = cap(ai, p), v = n > 9 ? n : 10; if (c <= v) v = c; ai->pl[p].troops = v;
}
static int sim(const ak_gc_rules *r, s32 inf, s32 spc, bool cm, bool space)       /* 08A436C0 */
{
    int sp = space ? 1 : 0, b = cm ? r->sim_cmdr[sp] : 0;
    if (inf == 1 || inf == 2) b += r->sim_inf[inf][sp];
    if (spc == 1 || spc == 2) b += r->sim_space[spc][sp];
    return b;
}
static f32 winp(u32 a, u32 d, u32 ba, u32 bd)                                    /* 08A3D560 */
{
    f32 A = (f32)ba * 0.01f * (f32)a + (f32)a, D = (f32)d * ((f32)bd * 0.01f + 1.0f);
    return (A - D) * (1.0f / (A + D)) * 0.5f + 0.5f;
}
static f32 odds(const ak_gc_ai *ai, int t, u32 n)                                 /* the bonuses for attacking t, then 08A3D560 */
{
    bool space = t == 0 || t == 6 || ai->pl[t].home;
    int bm = sim(ai->r, ai->me.tech[1], ai->me.tech[2], ai->me.avail[0] && ai->me.bought[0], space);
    int be = sim(ai->r, ai->en.tech[1], ai->en.tech[2], ai->en.avail[0] && ai->en.bought[0], space);
    return winp(n, ai->pl[t].troops, (u32)bm, (u32)be);
}

static void score(u32 *o)                                                           /* 08A3D200 */
{
    f32 f = ((f32)o[0] * W_TREASURY + (f32)o[2] * W_PLANET + (f32)o[4] * W_REGION + (f32)o[6] * W_PLANET_STRAT + (f32)o[8] * W_UNIT_STRAT
             + (f32)o[10] * W_NEAR_HOME + (f32)o[14]) * W_OWN;
    o[12] = f2u(f);
    f = ((f32)o[1] * W_TREASURY + (f32)o[3] * W_PLANET + (f32)o[5] * W_REGION + (f32)o[7] * W_PLANET_STRAT + (f32)o[9] * W_UNIT_STRAT
         + (f32)o[11] * W_NEAR_HOME) * W_ENEMY;
    o[13] = f2u(f);
}

static void evaluate(const ak_gc_ai *ai, u32 *o)                                    /* 08A3D8A0 */
{
    memset(o, 0, 15 * 4);
    int me = ai->side, homes = 0;
    for (int i = 0; i < 16; i++) if (ai->pl[i].home) homes += ai->pl[i].owner == me ? 1 : -1;
    o[0] = ai->me.credits; o[1] = ai->en.credits;
    for (int i = 0; i < 16; i++) {
        if (ai->pl[i].owner == me) o[2] += (u32)ai->r->planet_bonus[i];
        else if (ai->pl[i].owner != 2) o[3] += (u32)ai->r->planet_bonus[i];
    }
    u32 cm1 = 0; int cls = ak_gc_class(ai->me.faction) == 0 ? 0 : 1;
    for (int s = 0; s < 4; s++) {
        int n = nsec(s), mine = 0, theirs = 0; bool clear_me = true, clear_en = true;
        if (ai->g->cmdr[s][cls] == 1) cm1 += (u32)ai->r->sector_planet_bonus * (u32)n;
        for (int k = 0; k < n; k++) {
            int p = secp(s, k);
            if (ai->pl[p].owner == me) mine++; else theirs += ai->pl[p].owner != 2;
            if (ai->pl[p].owner == 2 && !untouched(ai, p, ai->enemy)) clear_me = false;
            if (ai->pl[p].owner == 2 && untouched(ai, p, me) == false) clear_en = false;
        }
        u32 bonus = (u32)ai->r->sector_bonus[s];
        if ((u32)(n - mine) < 2) o[4] += bonus / (u32)((n - mine) + theirs + (clear_me ? 1 : 2));
        if ((u32)(n - theirs) < 2) o[5] += bonus / (u32)((n - theirs) + mine + (clear_en ? 1 : 2));
    }
    if (ai->me.bought[1]) o[4] += cm1;
    int nmine = 0, nint = 0, nneu = 0, nen = 0, nenint = 0;
    for (int i = 0; i < 16; i++) {
        int w = ai->pl[i].owner;
        if (w == me) {
            o[6] += cap(ai, i); nmine++;
            if (enemy_nb(ai, i) == 0) nint++; else o[8] += ai->pl[i].troops;
            u32 d = home_dist(ai, i); if (d < 3) o[10] += ai->pl[i].troops / d;
        } else if (w == 2) nneu++;
        else {
            o[7] += cap(ai, i); nen++;
            if (enemy_nb(ai, i) == 0) nenint++; else o[9] += ai->pl[i].troops;
            u32 d = home_dist(ai, i); if (d < 3) o[11] += ai->pl[i].troops / d;
        }
    }
    int a = nmine - nint, b = nen - nenint;
    o[8] /= (u32)(a > 1 ? a : 1); o[9] /= (u32)(b > 1 ? b : 1);
    if (homes < 0) { o[0] = o[2] = o[4] = o[6] = o[8] = o[10] = 0; }
    else if (homes > 0) { o[1] = o[3] = o[5] = o[7] = o[9] = o[11] = 0; if (nneu + nen == 0) o[14] = 9999; }
    score(o);
}

static bool decode(ak_gc_plan *p, u32 c)                                             /* 08A3E57C */
{
    for (int k = 0; k < 3; k++) { u32 v = (c >> (2 * k)) & 3; if (v > 2) return false; p->tech[k] = (s32)v; }
    for (int k = 0; k < 4; k++) p->cmdr[k] = (u8)((c >> (6 + k)) & 1);
    return true;
}
static void plan_reset(const ak_gc_ai *ai, ak_gc_plan *p)                           /* 08A3DF00 */
{
    for (int i = 0; i < 16; i++) { p->buy[i] = 0; p->snap[i] = ai->g->planet[i].owner == ai->side ? (u32)ai->g->planet[i].troops : 0; }
    p->rf_b = 16; p->prio = 5; p->flag = 0; p->rf_a = 16; p->rf_n = 0; p->eval[13] = 0; p->eval[12] = 0;
}
static void plan_add(ak_gc_ai *ai, int s0, int d0, int s1, int d1)                  /* 08A3DFB0 / 08A3DE80 */
{
    if (ai->nplans == AK_GC_AI_PLANS) return;
    ak_gc_plan *p = &ai->plans[ai->nplans++];
    memset(p->tech, 0, sizeof p->tech); memset(p->cmdr, 0, sizeof p->cmdr); p->n[0] = p->n[1] = 0;
    plan_reset(ai, p);
    p->src[0] = s0; p->dst[0] = d0; p->src[1] = s1; p->dst[1] = d1;
}

static u32 discount(u32 c, f32 f) { return c - (u32)(s32)((f32)(s32)c * f); }

static bool price(ak_gc_ai *ai, ak_gc_plan *P)                                      /* 08A3E5E4 */
{
    const ak_gc_rules *r = ai->r; ak_gc_ai_side *me = &ai->me; int side = ai->side;
    u32 cost = 0;
    if (P->cmdr[2]) { if (!me->avail[2] || me->bought[2]) return false; cost = (u32)r->cmdr_cost[2]; me->bought[2] = 1; }
    for (int k = 0; k < 3; k++) {
        s32 v = P->tech[k];
        if (me->tech[k] < v) {
            u32 c;
            if (v == 1) c = (u32)r->tech_cost[k][1];
            else if (v == 2) { c = (u32)r->tech_cost[k][2]; if (me->tech[k] == 0) c += (u32)r->tech_cost[k][1]; }
            else return false;
            if (me->bought[2]) c = discount(c, r->tech_cost_bonus);
            cost += c; me->tech[k] = v;
        } else if (v > 0) return false;
    }
    if (me->credits < cost) return false;
    for (int k = 0; k < 4; k++) {
        if (k == 2 || !P->cmdr[k]) continue;
        if (!me->avail[k] || me->bought[k]) return false;
        u32 c = (u32)r->cmdr_cost[k]; me->bought[k] = 1;
        if (me->bought[2]) c = discount(c, r->cmdr_cost_bonus);
        cost += c;
    }
    if (me->credits < cost) return false;
    bool two = P->src[1] != 16;
    if (two && !me->bought[3]) return false;
    me->credits -= cost;
    ak_gc_ai_planet *pl = ai->pl; u32 credits = me->credits;
    if (pl[P->dst[0]].owner == side && !(pl[P->dst[0]].troops < cap(ai, P->dst[0]))) return false;
    u8 *e0 = ai->stale;                                  /* [0..15] interior after the moves, [16..31] before, [32..33] attacks */
    for (int k = 0; k < 2; k++) {
        int o = pl[P->dst[k]].owner;
        e0[32 + k] = P->src[k] == 16 ? 0 : o == 2 ? 0 : o != side;
    }
    int home = 16; for (int i = 0; i < 16; i++) if (pl[i].owner == side && pl[i].home) home = i;
    if (e0[32] || e0[33]) {
        if (!e0[32] && P->src[0] != 16) pl[P->dst[0]].owner = side;
        for (int i = 0; i < 16; i++) e0[16 + i] = pl[i].owner == side && enemy_nb(ai, i) == 0;
    } else memset(e0 + 16, 0, 16);                     /* [assumed] the game reads stack left-overs here */
    int o0 = 2, o1 = 2;
    if (P->dst[0] < 16) { o0 = pl[P->dst[0]].owner; pl[P->dst[0]].owner = side; }
    if (P->dst[1] < 16) { o1 = pl[P->dst[1]].owner; pl[P->dst[1]].owner = side; }
    for (int i = 0; i < 16; i++) e0[i] = pl[i].owner == side && enemy_nb(ai, i) == 0;
    if (P->dst[0] < 16) pl[P->dst[0]].owner = o0;
    if (P->dst[1] < 16) pl[P->dst[1]].owner = o1;
    bool flag = !e0[32] && !e0[33] && e0[P->src[0]] && e0[P->dst[0]] && (!two || (e0[P->src[1]] && e0[P->dst[1]]));
    P->flag = flag;
    int l70 = 0, l6c = 16, l68 = 16; u8 a0[2] = { 0, 0 }, b0[2] = { 0, 0 };
    if (flag) a0[0] = a0[1] = b0[0] = b0[1] = 1;
    else for (int k = 0; k < (two ? 2 : 1); k++) {
        u8 c = !e0[32 + k] && e0[P->src[k]];
        b0[k] = c; a0[k] = e0[P->dst[k]];
        if (l70) continue;
        if (!c) {
            int s = P->src[k];
            for (int j = 0; j < nnb(s); j++) {
                int n = nb(s, j);
                if (n == P->src[0] || n == P->src[1] || n == P->dst[0] || n == P->dst[1] || pl[n].owner != side || !e0[n]) continue;
                if (e0[16 + n]) { l6c = n; l68 = s; l70 = 1; b0[k] = 1; break; }
            }
        }
        if (!l70 && !a0[k]) {
            int d = P->dst[k];
            for (int j = 0; j < nnb(d); j++) {
                int n = nb(d, j);
                if (n == P->src[0] || n == P->src[1] || n == P->dst[0] || n == P->dst[1] || pl[n].owner != side) continue;
                if (e0[n]) { l68 = d; l6c = n; l70 = 1; a0[k] = 1; break; }
            }
        }
    }
    bool same = P->src[0] < 16 && P->src[0] == P->src[1];
    u32 spent = 0;
    for (int k = 0; k < 2; k++) {
        int s = P->src[k];
        if (s < 16) {
            s32 need = (same ? 30 : 20) - (s32)pl[s].troops; if (need < 0) need = 0;
            P->buy[s] = (u32)need; spent += (u32)need;
            if (credits < spent) return false;
            P->n[k] = 10;
            if (same) { P->n[1] = 10; break; }
        } else P->n[k] = 0;
    }
    if (!(spent < credits)) return spent <= credits;
    if (home < 16 && (!e0[home] || !e0[16 + home]) && pl[home].troops < DEFEND_HOME) {
        u32 x = DEFEND_HOME - pl[home].troops, left = credits - spent; if (left < x) x = left;
        P->buy[home] = x; spent += x;
    }
    if (!(spent < credits)) return spent <= credits;
    u32 M[2] = { 0, 0 }; u8 l80[2] = { 0, 0 };
    for (int k = 0; k < 2; k++) {
        int s = P->src[k];
        if (s >= 16) { P->dst[k] = 16; l80[k] = 0; M[k] = 0; continue; }
        int d = P->dst[k];
        if (!e0[32 + k]) { u32 x = cap(ai, d) - pl[d].troops; M[k] = x > 9 ? 10 : x; }
        else { u32 a = cap(ai, s) - 10, b = cap(ai, d); M[k] = a <= b ? a : b; }
        if (same) { u32 y = cap(ai, s) - M[0] - 10; if (M[k] > y) M[k] = y; }
        s32 m = (s32)M[k], left = (s32)(credits - spent); if (left < m) m = left; if (m < 0) m = 0; M[k] = (u32)m;
        if (M[k] == 0) return false;
        l80[k] = e0[32 + k];
        if (!e0[32 + k]) {
            if (b0[k] && !e0[d]) {
                u32 av = cap(ai, s) - 10;
                if (same && k > 0) { av -= M[0]; if ((s32)av < 1) return false; }
                a0[k] = 1; u32 x = cap(ai, d) - pl[d].troops; M[k] = av <= x ? av : x;
                if (l70 && l68 == d) { l6c = l68 = 16; l70 = 0; }
            } else if (a0[k]) {
                b0[k] = 1;
                if (l70 && l68 == s) { l6c = l68 = 16; l70 = 0; }
            }
        } else if (!(b0[k] && !a0[k])) {
            for (;;) {
                if (odds(ai, d, M[k]) <= OPTIMISM) break;
                u32 v = M[k] - 10; l80[k] = 0; M[k] = v;
                if (!(10 < v)) { M[k] = 10; break; }
            }
            if (!l80[k]) M[k] = M[k] + 10 > 10 ? M[k] + 10 : 10;
        }
        u32 tot = same ? M[0] + M[1] : M[k], old = P->buy[s];
        s32 nv = (s32)(tot - pl[s].troops + 10); if (nv < (s32)old) nv = (s32)old;
        P->buy[s] = (u32)nv; spent = spent - old + (u32)nv;
        if (M[k] == 0) return false;
        P->n[k] = M[k];
        if (!(spent < credits)) return spent <= credits;
    }
    if (!(spent < credits)) return spent <= credits;
    if (l70 && l6c < 16 && l68 < 16) {
        s32 x = (s32)(cap(ai, l68) - pl[l68].troops - P->buy[l68]);
        if (l68 == P->src[0]) x += (s32)P->n[0];
        else if (l68 == P->src[1]) x += (s32)P->n[1];
        else if (l68 == P->dst[0] || l68 == P->dst[1]) x += (s32)pl[l68].troops;
        u32 base = spent - P->buy[l6c];
        s32 y = (s32)(credits - base); if (x < y) y = x; if (y < 0) y = 0;
        u32 room = cap(ai, l6c) - pl[l6c].troops; P->buy[l6c] = room < (u32)y ? room : (u32)y;
        spent = base + P->buy[l6c];
    }
    for (int pass = 0; pass < 2; pass++) {               /* the rest in tens: own planets not interior (after, then before) */
        if (pass == 1 && !l80[0]) break;
        if (!(spent < credits)) return spent <= credits;
        for (;;) {
            s32 best = 0; int u = 16;
            for (int i = 0; i < 16; i++) {
                if (i == P->dst[0] || i == P->dst[1] || pl[i].owner != side || e0[(pass ? 16 : 0) + i]) continue;
                s32 x = (s32)(cap(ai, i) - pl[i].troops - P->buy[i]);
                if (best <= x) { best = x; u = i; }
            }
            if (best == 0) break;
            spent += 10; P->buy[u] += 10;
            if (!(spent < credits)) return spent <= credits;
        }
    }
    if (!P->flag) {
        u8 v = 0;
        if (b0[0]) { if (!b0[1] || !a0[0]) { P->flag = 0; return spent <= credits; } if (a0[1]) v = 1; }
        P->flag = v;
    }
    return spent <= credits;
}

static void apply_buys(ak_gc_ai *ai, const ak_gc_plan *P)                          /* the start of 08A3FB1C */
{
    for (int k = 0; k < 3; k++) if (ai->me.tech[k] < P->tech[k]) ai->me.tech[k] = P->tech[k];
    for (int k = 0; k < 4; k++) ai->me.bought[k] = ai->me.bought[k] || (ai->me.avail[k] && P->cmdr[k]);
    for (int i = 0; i < 16; i++) { u32 c = cap_for(ai, i, ai->pl[i].owner), v = ai->pl[i].troops + P->buy[i]; ai->pl[i].troops = v < c ? v : c; }
}

static void second_move(ak_gc_ai *ai, ak_gc_plan *P, f32 *pw, u32 *lose_board, u32 *win_board)   /* one side of 08A3FB1C */
{
    int t = P->dst[1]; ak_gc_ai_planet keep = ai->pl[t]; u32 src_t = ai->pl[P->src[1]].troops;
    f32 p = 1.0f;
    if (keep.owner != ai->side && keep.owner != 2) p = odds(ai, t, P->n[1]);
    lose(ai, P->src[1], P->n[1]);
    if (OPTIMISM <= p) p = 1.0f; else evaluate(ai, lose_board);
    ai->pl[t].owner = ai->side; ai->pl[t].home = 0;
    setp(ai, t, P->n[1] - keep.troops);
    evaluate(ai, win_board);
    ai->pl[t].home = keep.home; ai->pl[t].owner = keep.owner;
    setp(ai, P->src[1], src_t); setp(ai, t, keep.troops);
    *pw = p;
}

static void judge(ak_gc_ai *ai, ak_gc_plan *P)                                       /* 08A3FB1C */
{
    apply_buys(ai, P);
    if (P->src[0] >= 16) { evaluate(ai, P->eval); return; }
    u32 ww[15] = { 0 }, wl[15] = { 0 }, lw[15] = { 0 }, ll[15] = { 0 };
    f32 p1 = 1.0f, q_w = 1.0f, q_l = 1.0f;
    int t = P->dst[0];
    if (ai->pl[t].owner != ai->side && ai->pl[t].owner != 2) p1 = odds(ai, t, P->n[0]);
    lose(ai, P->src[0], P->n[0]);
    f32 pf = 1.0f;
    if (p1 < OPTIMISM) {
        lose(ai, t, P->n[0]); pf = p1;
        if (P->src[1] < 16) second_move(ai, P, &q_l, ll, lw);
        else evaluate(ai, lw);
    }
    ai->pl[t].owner = ai->side; ai->pl[t].home = 0;
    setp(ai, t, P->n[0] - ai->pl[t].troops);
    if (P->src[1] < 16) second_move(ai, P, &q_w, wl, ww);
    else evaluate(ai, ww);
    u32 bonus = 0;
    if (P->cmdr[2]) for (int k = 0; k < 3; k++) {
        if (ai->me.tech[k] < 2) bonus += (u32)ai->r->tech_cost[k][2] / 10;
        if (ai->me.tech[k] < 1) bonus += (u32)ai->r->tech_cost[k][1] / 10;
    }
    refresh(ai);
    if (OPTIMISM <= pf) { P->prio = ai->pl[t].owner == 2 ? PRIO_SURE_NEUTRAL : PRIO_SURE_ENEMY; pf = 1.0f; }
    else { P->prio = 2; if (!(MIN_ATTACK <= pf) && ww[14] == 0) { P->prio = 3; pf = 0.0f; } }
    f32 a = 1.0f, b = 1.0f;
    if (q_w < OPTIMISM) { a = q_w; if (q_w < MIN_ATTACK && wl[14] == 0) a = 0.0f; }
    if (q_l < OPTIMISM) { b = q_l; if (q_l < MIN_ATTACK && lw[14] == 0) b = 0.0f; }
    f32 w1 = pf * a, w4 = (1.0f - pf) * (1.0f - b), w3 = (1.0f - pf) * b, w2 = pf * (1.0f - a);
    for (int k = 0; k < 15; k++) {
        if (k == 12 || k == 13) continue;
        f32 f = (f32)ww[k] * w1 + (f32)wl[k] * w2 + (f32)lw[k] * w3 + (f32)ll[k] * w4;
        P->eval[k] = k == 14 ? (u32)(s32)f : f2u(f);
    }
    P->eval[0] += bonus;
    score(P->eval);
}

void ak_gc_ai_plan(ak_gc_ai *ai, const ak_gc *g, const ak_gc_rules *r)
{
    ai->g = g; ai->r = r; ai->nplans = 0;
    refresh(ai);
    int cls = ak_gc_class(ai->me.faction) == 0 ? 0 : 1, sec3 = 4;
    for (int s = 0; s < 4; s++) if (g->cmdr[s][cls] == 3) { sec3 = s; break; }
    for (int p = 0; p < 17; p++) {
        if (p == 16) { plan_add(ai, 16, 16, 16, 16); break; }
        if (ai->pl[p].owner != ai->side) continue;
        for (int k = 0; k < nnb(p); k++) {
            int n = nb(p, k); if (ai->pl[n].owner == ai->side) continue;
            plan_add(ai, p, n, 16, 16);
            if (PD(p).sector != sec3 || !ai->me.avail[3]) continue;
            for (int j = 0; j < nsec(sec3); j++) {
                int q = secp(sec3, j); if (ai->pl[q].owner != ai->side) continue;
                for (int m = 0; m < nnb(q); m++) {
                    int t = nb(q, m);
                    if ((p == q && n == t) || ai->pl[t].owner == ai->side) continue;
                    plan_add(ai, p, n, q, t);
                }
            }
        }
    }
    s32 best_score = 0; u32 best_combo = 0, best_prio = 5; u8 best_flag = 0; ai->best = ai->nplans;
    for (u32 j = 0; j < ai->nplans; j++) for (u32 c = 0; c < 0x400; c++) {
        ak_gc_plan *P = &ai->plans[j];
        if (!decode(P, c)) continue;
        plan_reset(ai, P); bool ok = price(ai, P); refresh(ai);
        if (!ok) continue;
        judge(ai, P); refresh(ai);
        s32 sc = (s32)(P->eval[12] - P->eval[13]);
        if (ai->best < ai->nplans) {
            if (!P->flag && best_flag) continue;
            if (best_prio < P->prio) continue;
        }
        if ((P->dst[0] == ai->last_target || P->dst[1] == ai->last_target) && ai->last_troops <= ai->pl[P->dst[0]].troops) {
            P->prio = 3; sc = -9999; P->flag = 0;
        }
        if (ai->best < ai->nplans && (!P->flag || best_flag) && best_prio <= P->prio && sc <= best_score) continue;
        ai->best = j; best_flag = P->flag; best_prio = P->prio; best_score = sc; best_combo = c;
    }
    if (ai->best >= ai->nplans) ai->best = ai->nplans;   /* none: 08A3E044 then prices plan [nplans] [assumed: unreachable - "no move" always prices] */
    ak_gc_plan *B = &ai->plans[ai->best < ai->nplans ? ai->best : 0];
    decode(B, best_combo); price(ai, B); refresh(ai);
    ai->last_target = B->dst[0]; ai->last_troops = ai->pl[B->dst[0]].troops;
}

void ak_gc_ai_reinforce_plan(ak_gc_ai *ai, const ak_gc *g, const ak_gc_rules *r)
{
    ai->g = g; ai->r = r; refresh(ai);
    ak_gc_ai_planet *pl = ai->pl; int me = ai->side, en = ai->enemy, l50 = 16, l4c = 16; u32 l48 = 0; u32 mh = (u32)r->max_home;
    for (int p = 0; p < 16; p++) {
        if (!pl[p].home || pl[p].owner != me) continue;
        if (mh - 10 <= pl[p].troops) break;
        l4c = p; if (untouched(ai, p, en)) break;
        bool far = false;
        for (int k = 0; k < nnb(p); k++) {
            int n = nb(p, k); if (pl[n].owner != me) continue;
            u32 x = pl[n].troops - 10;
            if (l48 < x || (x == l48 && !far)) { l48 = mh - pl[p].troops; if (x <= l48) l48 = x; far = untouched(ai, n, en); l50 = n; }
        }
    }
    bool ok = l4c < 16 && l50 < 16;
    if (!ok || l48 < 10) {
        for (int p = 0; p < 16; p++) {
            if (pl[p].home || pl[p].owner != me || !(pl[p].troops < cap(ai, p) - 10) || untouched(ai, p, en)) continue;
            for (int k = 0; k < nnb(p); k++) {
                int n = nb(p, k);
                if (pl[n].owner != me) continue;
                u32 x = pl[n].troops - 10; if (!(l48 < x)) continue;
                u32 room = cap(ai, p) - pl[p].troops; if (room < x) x = room;
                if (!untouched(ai, n, en)) {
                    if (pl[n].home) continue;
                    if (ak_gc_sector_owner(g, ak_gc_planet_defs[n].sector) == me) continue;
                    u32 h = ((pl[n].troops + pl[p].troops) >> 1) - pl[p].troops; if (h < x) x = h;
                }
                if (x <= l48) continue;
                l50 = n; l4c = p; l48 = x;
            }
        }
        ok = l4c < 16 && l50 < 16;
    }
    if (ok && l48 > 9) {
        if (ai->best >= ai->nplans) ai->best = 0;
        ak_gc_plan *B = &ai->plans[ai->best];
        B->rf_a = l50; B->rf_n = l48; B->rf_b = l4c;
    }
}

const ak_gc_plan *ak_gc_ai_best(const ak_gc_ai *ai)
{
    u32 i = ai->nplans - 1; if (ai->best <= i) i = ai->best;
    return i < AK_GC_AI_PLANS ? &ai->plans[i] : NULL;
}
