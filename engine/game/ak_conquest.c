/* Aurek - command posts, team spawns and capture regions (see ak_conquest.h) */
#include <math.h>
#include <string.h>
#include "game/ak_conquest.h"
#include "core/ak_settings.h"

static f32 wf(const u8 *p) { f32 f; memcpy(&f, p, 4); return f; }
static bool finite_small(f32 v) { return v == v && fabsf(v) < 1e5f; }

/* position + unit quaternion followed by 100.0 (posts and spawns) */
static bool find_pos_quat(const ak_chunk *c, f32 *pos, f32 *q)
{
    u32 n = c->size / 4;
    for (u32 j = 3; j + 8 <= n; j++) {
        const u8 *b = c->body + 4 * j; f32 v[8];
        for (int k = 0; k < 8; k++) v[k] = wf(b + 4 * k);
        bool ok = true; for (int k = 0; k < 7; k++) ok &= finite_small(v[k]);
        if (!ok || fabsf(v[3] * v[3] + v[4] * v[4] + v[5] * v[5] + v[6] * v[6] - 1) > 1e-3f || fabsf(v[7] - 100.0f) > 1e-3f) continue;
        memcpy(pos, v, 12); memcpy(q, v + 3, 16); return true;
    }
    return false;
}
/* position + a 3x3 matrix whose first row is a unit vector (regions) */
static bool find_pos_mat(const ak_chunk *c, f32 *pos)
{
    u32 n = c->size / 4;
    for (u32 j = 3; j + 12 <= n; j++) {
        const u8 *b = c->body + 4 * j; f32 v[12];
        for (int k = 0; k < 12; k++) v[k] = wf(b + 4 * k);
        bool ok = finite_small(v[0]) && finite_small(v[1]) && finite_small(v[2]);
        for (int k = 3; k < 12 && ok; k++) ok = v[k] == v[k] && fabsf(v[k]) <= 1.0001f;
        if (!ok || fabsf(v[3] * v[3] + v[4] * v[4] + v[5] * v[5] - 1) > 1e-2f) continue;
        memcpy(pos, v, 12); return true;
    }
    return false;
}
/* the facing (engine yaw, 0 = -z) of a game-axes quaternion */
static f32 yaw_of(const f32 *gq)
{
    f32 x = gq[0], y = -gq[1], z = -gq[2], w = gq[3];                       /* to engine axes */
    f32 fx = -(2 * (x * z + w * y)), fz = -(1 - 2 * (x * x + y * y));       /* the rotated -z */
    return atan2f(-fx, -fz);
}

bool ak_conquest_load(const ak_level *l, ak_conquest_map *out)
{
    memset(out, 0, sizeof *out);
    f32 sp[2][64][4]; u32 nsp[2] = { 0, 0 }; f32 rg[64][3]; u32 nrg = 0;
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 12) continue;
        u32 type = ak_rd32(c.body + 4);
        if (!(type & 0x8000)) continue;
        type &= 0x7FFF;
        f32 gp[3], gq[4];
        if (type == 8 && out->nposts < AK_MAX_POSTS && find_pos_quat(&c, gp, gq)) {
            ak_post *p = &out->post[out->nposts++]; ak_from_game(gp, p->pos); p->yaw = yaw_of(gq);
            /* the record's tail: owner, capture amount, flags, then the links (count, count x { id, kind }) */
            u32 n = c.size / 4; p->start_owner = AK_CQ_NEUTRAL; p->amount = 10.0f;
            for (u32 k = 0; k < 40; k++) {
                if (n < 8 + 2 * k) break;
                u32 at = n - 1 - 2 * k;
                if (ak_rd32(c.body + 4 * at) != k) continue;
                u32 own = ak_rd32(c.body + 4 * (at - 3)); f32 amt = wf(c.body + 4 * (at - 2));
                if (!(amt > 0 && amt < 10000)) break;
                p->start_owner = own < 2 ? (int)own : AK_CQ_NEUTRAL; p->amount = amt;
                p->flags = ak_rd32(c.body + 4 * (at - 1)); p->disabled = (p->flags & 1) != 0;
                break;
            }
        } else if ((type == 15 || type == 16) && find_pos_quat(&c, gp, gq)) {
            int t = type == 16; if (nsp[t] < 64) { ak_from_game(gp, sp[t][nsp[t]]); sp[t][nsp[t]][3] = yaw_of(gq); nsp[t]++; }
        } else if (type == 37 && nrg < 64 && find_pos_mat(&c, gp)) ak_from_game(gp, rg[nrg++]);
    }
    out->nregions = nrg;
    /* each spawn and region belongs to the nearest post */
    for (int t = 0; t < 2; t++)
        for (u32 i = 0; i < nsp[t]; i++) {
            s32 best = -1; f32 bd = 1e30f;
            for (u32 k = 0; k < out->nposts; k++) {
                f32 dx = sp[t][i][0] - out->post[k].pos[0], dz = sp[t][i][2] - out->post[k].pos[2], d = dx * dx + dz * dz;
                if (d < bd && !out->post[k].has_spawn[t]) { bd = d; best = (s32)k; }
            }
            if (best >= 0) { ak_post *p = &out->post[best]; memcpy(p->spawn[t], sp[t][i], 12); p->spawn_yaw[t] = sp[t][i][3]; p->has_spawn[t] = true; }
        }
    for (u32 i = 0; i < nrg; i++)
        for (u32 k = 0; k < out->nposts; k++) {
            f32 dx = rg[i][0] - out->post[k].pos[0], dz = rg[i][2] - out->post[k].pos[2];
            if (dx * dx + dz * dz < 25.0f && !out->post[k].has_region) { memcpy(out->post[k].region, rg[i], 12); out->post[k].has_region = true; }
        }
    return out->nposts > 0;
}

/* ------------------------------------------------------------------ the match */
void ak_cq_rules_default(ak_cq_rules *r)
{
    s32 t = ak_setting_int("AK_TICKETS", 100);                              /* the option's range is 25..200 */
    r->tickets = t < 25 ? 25 : t > 200 ? 200 : t;
    r->capture_radius = 5.0f; r->max_rate = 5.0f; r->contest_time = 30.0f;
    r->bleed_time = 4.0f; r->drain_time = 0.1f;
    r->loss_time = ak_setting_float("AK_TOTAL_LOSS_TIME", 60.0f); r->respawn_delay = ak_setting_float("AK_RESPAWN_DELAY", 10.0f);
}

int ak_faction_team(int faction) { return faction & 1; }

static void recount(const ak_conquest_map *m, ak_conquest *s)
{
    s->held[0] = s->held[1] = 0;
    for (u32 i = 0; i < m->nposts; i++) if (s->post[i].owner < 2) s->held[s->post[i].owner]++;
}

void ak_conquest_start(const ak_conquest_map *m, const ak_cq_rules *r, ak_conquest *s)
{
    memset(s, 0, sizeof *s);
    for (u32 i = 0; i < m->nposts; i++) {
        ak_post_state *p = &s->post[i];
        p->owner = m->post[i].start_owner; p->capturing = AK_CQ_NEUTRAL; p->progress = m->post[i].amount;
    }
    s->tickets[0] = s->tickets[1] = r->tickets;
    s->all_team = AK_CQ_NEUTRAL; s->winner = -1; s->respawn_t = r->respawn_delay;
    recount(m, s);
}

static void set_owner(const ak_conquest_map *m, ak_conquest *s, u32 i, int team)
{
    ak_post_state *p = &s->post[i];
    p->owner = team; p->progress = m->post[i].amount; p->capturing = AK_CQ_NEUTRAL; s->captures++;
    recount(m, s);
}

static void lose_ticket(ak_conquest *s, int team)
{
    if (s->winner >= 0 || s->tickets[team] <= 0) return;
    if (--s->tickets[team] <= 0) s->winner = 1 - team;
}

void ak_conquest_killed(const ak_cq_rules *r, ak_conquest *s, int team) { (void)r; if (team == 0 || team == 1) lose_ticket(s, team); }

bool ak_conquest_update(const ak_conquest_map *m, const ak_cq_rules *r, ak_conquest *s, const ak_cq_soldier *sol, u32 n, f32 dt)
{
    if (s->winner >= 0) return false;
    s->living[0] = s->living[1] = 0;
    for (u32 k = 0; k < n; k++) if (sol[k].alive && sol[k].team >= 0 && sol[k].team < 2) s->living[sol[k].team]++;
    /* the posts */
    f32 rr = r->capture_radius * r->capture_radius;
    for (u32 i = 0; i < m->nposts; i++) {
        ak_post_state *p = &s->post[i];
        if (m->post[i].disabled) continue;
        int team = AK_CQ_NEUTRAL; f32 rate = 0; bool contested = false;
        for (u32 k = 0; k < n; k++) {
            if (!sol[k].alive) continue;
            f32 dx = sol[k].pos[0] - m->post[i].pos[0], dy = sol[k].pos[1] - m->post[i].pos[1], dz = sol[k].pos[2] - m->post[i].pos[2];
            if (dx * dx + dy * dy + dz * dz > rr) continue;
            if (team != AK_CQ_NEUTRAL && team != sol[k].team) { contested = true; break; }
            team = sol[k].team; rate += sol[k].weight;
        }
        if (contested) {                                                     /* both sides: the contest timer, then neutral */
            if (p->contest <= 0) p->contest = r->contest_time;
            p->contest -= dt;
            if (p->contest <= 0) set_owner(m, s, i, AK_CQ_NEUTRAL);
            continue;
        }
        p->contest = 0;
        if (team == AK_CQ_NEUTRAL) continue;
        if (rate > r->max_rate) rate = r->max_rate;
        f32 full = m->post[i].amount;
        if (team == p->owner) { p->progress += rate * dt; if (p->progress > full) p->progress = full; }
        else if (p->owner != AK_CQ_NEUTRAL || p->capturing == AK_CQ_NEUTRAL || p->capturing == team) {
            p->progress -= rate * dt;                                        /* drain: an owned post to neutral, a neutral one to the capturer */
            if (p->progress <= 0) set_owner(m, s, i, p->owner != AK_CQ_NEUTRAL ? AK_CQ_NEUTRAL : team);
            else p->capturing = team;
        } else {                                                             /* another team's partial capture of a neutral post: pushed back */
            p->progress += rate * dt;
            if (p->progress >= full) { p->progress = full; p->capturing = team; }
        }
    }
    /* bleed */
    for (int t = 0; t < 2; t++) {
        int o = 1 - t;
        if (s->held[t] == 0 && s->living[t] == 0) {                          /* nothing left: the fast drain */
            s->drain_t[t] += dt;
            while (s->drain_t[t] >= r->drain_time) { s->drain_t[t] -= r->drain_time; lose_ticket(s, t); }
        } else s->drain_t[t] = 0;
        if (s->held[o] * 2 > m->nposts && s->tickets[t] > (s32)s->living[t]) {   /* the other side holds the majority */
            s->bleed_t[t] += dt;
            while (s->bleed_t[t] >= r->bleed_time) { s->bleed_t[t] -= r->bleed_time; lose_ticket(s, t); }
        } else s->bleed_t[t] = 0;
    }
    /* total loss: every post held by one team */
    int all = AK_CQ_NEUTRAL;
    for (int t = 0; t < 2; t++) if (m->nposts && s->held[t] == m->nposts) all = t;
    if (all != s->all_team) { s->all_team = all; s->loss_t = r->loss_time; }
    if (all != AK_CQ_NEUTRAL && s->winner < 0) {
        s->loss_t -= dt * (s->living[1 - all] ? 1.0f : 11.0f);
        if (s->loss_t <= 0) { s->loss_t = 0; s->winner = all; }
    }
    /* spawn waves */
    s->respawn_t -= dt;
    if (s->respawn_t <= 0) { s->respawn_t += r->respawn_delay; return true; }
    return false;
}

bool ak_conquest_spawn(const ak_conquest_map *m, const ak_conquest *s, int team, const f32 *near, f32 *pos, f32 *yaw)
{
    s32 best = -1; f32 bd = 1e30f;
    for (u32 i = 0; i < m->nposts; i++) {
        if (s->post[i].owner != team || !m->post[i].has_spawn[team]) continue;
        f32 d = 0;
        if (near) { f32 dx = m->post[i].pos[0] - near[0], dz = m->post[i].pos[2] - near[2]; d = dx * dx + dz * dz; }
        if (d < bd) { bd = d; best = (s32)i; }
    }
    if (best < 0) return false;
    memcpy(pos, m->post[best].spawn[team], 12); *yaw = m->post[best].spawn_yaw[team];
    return true;
}
