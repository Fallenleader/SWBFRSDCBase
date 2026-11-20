/* Aurek - command posts, team spawns and capture regions (see ak_conquest.h) */
#include <math.h>
#include <string.h>
#include "assets/entity.h"
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
static f32 yaw_of(const f32 *gq);
/* the facing of a game-axes rotation matrix (rows) */
static f32 yaw_of_rows(const f32 *m)
{
    f32 tr = m[0] + m[4] + m[8], q[4];
    if (tr > 0) { f32 s = sqrtf(tr + 1) * 2; q[3] = 0.25f * s; q[0] = (m[7] - m[5]) / s; q[1] = (m[2] - m[6]) / s; q[2] = (m[3] - m[1]) / s; }
    else if (m[0] > m[4] && m[0] > m[8]) { f32 s = sqrtf(1 + m[0] - m[4] - m[8]) * 2; q[3] = (m[7] - m[5]) / s; q[0] = 0.25f * s; q[1] = (m[1] + m[3]) / s; q[2] = (m[2] + m[6]) / s; }
    else if (m[4] > m[8]) { f32 s = sqrtf(1 + m[4] - m[0] - m[8]) * 2; q[3] = (m[2] - m[6]) / s; q[0] = (m[1] + m[3]) / s; q[1] = 0.25f * s; q[2] = (m[5] + m[7]) / s; }
    else { f32 s = sqrtf(1 + m[8] - m[0] - m[4]) * 2; q[3] = (m[3] - m[1]) / s; q[0] = (m[2] + m[6]) / s; q[1] = (m[5] + m[7]) / s; q[2] = 0.25f * s; }
    return yaw_of(q);
}
static f32 yaw_of(const f32 *gq)
{
    f32 x = gq[0], y = -gq[1], z = -gq[2], w = gq[3];                       /* to engine axes */
    f32 fx = -(2 * (x * z + w * y)), fz = -(1 - 2 * (x * x + y * y));       /* the rotated -z */
    return atan2f(-fx, -fz);
}

/* The level script's ticket changes (traced 2026-11-19, harness watch on the ticket counts): the ticket entity (ENTI type 9,
 * class 0x8009, handler 089875C8) takes message 0x8002 (extra: u32, u32 team, u32 count; non-zero sets the side's count,
 * 0898810C) and 0x8022 (extra: u32, u32 team, f32 percent: adds round(starting count x percent x 0.01), the starting count being
 * the option BFF.InitialTickets).  Hoth's script adds 25 % for the Empire: 100 / 125.  The match settings block then copies the
 * counts to the conquest manager (089883F8 -> 0898858C -> 089870F8).  Read here from the SMSG chunk (side 0) as messages to that
 * entity, in the groups a timer fires at 0 s (the start); the rest are events of the level's script (Tatooine sets 10 on one). */
static void ticket_mods(const ak_level *l, ak_conquest_map *out)
{
    u32 pos = 8, tid = 0; ak_chunk c; bool have = false;
    while (ak_asura_next(&l->file, &pos, &c))
        if (ak_chunk_tag(&c) == AK_TAG('E', 'N', 'T', 'I') && c.size >= 8 && (ak_rd32(c.body + 4) & 0x7FFF) == 9) { tid = ak_rd32(c.body); have = true; break; }
    if (!have) return;
    /* the groups fired at the start: a timer (ENTI type 1, version >= 4) with time 0 fires its group [2] (as the music, ak_audio.c) */
    s32 start[32]; u32 nstart = 0; pos = 8;
    while (ak_asura_next(&l->file, &pos, &c))
        if (ak_chunk_tag(&c) == AK_TAG('E', 'N', 'T', 'I') && c.size >= 0x34 && ak_rd32(c.body + 4) == 1 && ak_rd32(c.body + 0x1C) >= 4 &&
            ak_rdf32(c.body + 0x30) == 0.0f && nstart < 32) start[nstart++] = (s16)ak_rd16(c.body + 0x24);
    pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('S', 'M', 'S', 'G') || c.size < 8) continue;
        u32 ver = c.version & 0xFFFF, ng = ak_rd32(c.body), p = 4, side = 0;
        if (ver >= 2) { side = ak_rd32(c.body + 4); p = 8; }
        if (side != 0 || ng > 4096 || p + ng > c.size) continue;
        u32 msz = 8 + (ver >= 3 ? 4 : 0) + (ver > 4 ? 4 : 0) + (ver > 5 ? 4 : 0); const u8 *cnt = c.body + p; p += ng;
        for (u32 g = 0; g < ng; g++) for (u32 m = 0; m < cnt[g]; m++) {
            if (p + msz > c.size) return;
            u16 ty = ak_rd16(c.body + p), ex = ak_rd16(c.body + p + 2); u32 tg = ak_rd32(c.body + p + 4);
            u32 eb = !(c.flags & 1) ? ((ex + 3u) & ~3u) : 0; const u8 *x = c.body + p + msz;
            bool at_start = false; for (u32 k = 0; k < nstart; k++) at_start |= start[k] == (s32)g;
            if (at_start && tg == tid && ex >= 12 && p + msz + 12 <= c.size && (ty == 0x8002 || ty == 0x8022) && out->ntmod < 8) {
                ak_ticket_mod *t = &out->tmod[out->ntmod++]; t->team = (int)ak_rd32(x + 4); t->set = ty == 0x8002;
                t->value = t->set ? (f32)ak_rd32(x + 8) : ak_rdf32(x + 8);
            }
            p += msz + eb;
        }
    }
}

bool ak_conquest_load(const ak_level *l, ak_conquest_map *out)
{
    memset(out, 0, sizeof *out);
    f32 sp[2][64][4]; u32 nsp[2] = { 0, 0 }; f32 rg[64][3]; u32 nrg = 0;
    /* spawn points (class 0x8027 "locator", func 089EE83C): version, position, flags (bit 0: has a place of its own), rows */
    enum { MAXLOC = 512 }; static u32 lid[MAXLOC]; static f32 lpos[MAXLOC][4]; static bool lown[MAXLOC]; u32 nl = 0;
    static u32 link_id[AK_MAX_POSTS][AK_POST_LOCS]; static s32 link_w[AK_MAX_POSTS][AK_POST_LOCS]; u32 nlink[AK_MAX_POSTS];
    memset(nlink, 0, sizeof nlink);
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 12) continue;
        u32 type = ak_rd32(c.body + 4);
        if (!(type & 0x8000) || !ak_enti_active(c.body, c.size)) continue;   /* PARITY(5.4): the mode mask */
        type &= 0x7FFF;
        f32 gp[3], gq[4];
        if (type == 8 && out->nposts < AK_MAX_POSTS && find_pos_quat(&c, gp, gq)) {
            out->post_id[out->nposts] = ak_rd32(c.body);
            ak_post *p = &out->post[out->nposts++]; ak_from_game(gp, p->pos); p->yaw = yaw_of(gq);
            p->name = -1;                                                  /* the name (func 08A050C0: text index, table hash) */
            for (u32 q = 8; q + 4 <= c.size; q += 4) if (ak_rd32(c.body + q) == 0x3A6386FBu) { p->name = (s32)ak_rd32(c.body + q - 4); break; }
            if (ak_setting_int("AK_DEBUG_POSTS", 0)) AK_INFO("conquest", "post %u at game %.1f %.1f %.1f", out->nposts - 1, gp[0], gp[1], gp[2]);
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
                u32 pi = out->nposts - 1;                                     /* the links: { spawn point id, weight } */
                for (u32 j = 0; j < k && nlink[pi] < AK_POST_LOCS; j++) {
                    link_id[pi][nlink[pi]] = ak_rd32(c.body + 4 * (at + 1 + 2 * j)); link_w[pi][nlink[pi]] = (s32)ak_rd32(c.body + 4 * (at + 2 + 2 * j)); nlink[pi]++;
                }
                break;
            }
        } else if (type == 39 && c.size >= 24 && nl < MAXLOC) {
            u32 ver = ak_rd32(c.body + 8); f32 g[3] = { wf(c.body + 12), wf(c.body + 16), wf(c.body + 20) };
            lid[nl] = ak_rd32(c.body); ak_from_game(g, lpos[nl]); lpos[nl][3] = 0;
            lown[nl] = ver == 1 ? c.size >= 28 && (c.body[24] & 1) : ver > 1 && c.size >= 28 && (ak_rd32(c.body + 24) & 1);
            if (ver > 2 && c.size >= 64) { f32 m[9]; for (int k = 0; k < 9; k++) m[k] = wf(c.body + 28 + 4 * k); lpos[nl][3] = yaw_of_rows(m); }
            nl++;
        } else if ((type == 15 || type == 16) && find_pos_quat(&c, gp, gq)) {
            int t = type == 16; if (nsp[t] < 64) { ak_from_game(gp, sp[t][nsp[t]]); sp[t][nsp[t]][3] = yaw_of(gq); nsp[t]++; }
            if (out->ndroid < AK_MAX_DROIDS) { ak_droid *dr = &out->droid[out->ndroid++]; ak_from_game(gp, dr->pos); dr->ammo = t == 1; }
        } else if (type == 37 && nrg < 64 && find_pos_mat(&c, gp)) ak_from_game(gp, rg[nrg++]);
        else if (type == 27 && c.size >= 48 && out->nvlink < AK_MAX_VSPAWN_LINKS) {
            ak_vspawn_link *v = &out->vlink[out->nvlink++]; v->id = ak_rd32(c.body); v->respawn = wf(c.body + 24);
            v->post = (s32)ak_rd32(c.body + 44);                               /* (an id for now: matched to a post below) */
        }
    }
    for (u32 i = 0; i < out->nvlink; i++) {
        s32 at = -1; for (u32 k = 0; k < out->nposts; k++) if (out->post_id[k] == (u32)out->vlink[i].post) at = (s32)k;
        out->vlink[i].post = at;
        if (!(out->vlink[i].respawn > 0 && out->vlink[i].respawn < 1000)) out->vlink[i].respawn = 10.0f;
    }
    out->nregions = nrg;
    /* each post's linked spawn points; with none (or a roll the weights miss) a soldier spawns at the post itself */
    for (u32 k = 0; k < out->nposts; k++) {
        ak_post *p = &out->post[k];
        for (int t = 0; t < 2; t++) { memcpy(p->spawn[t], p->pos, 12); p->spawn_yaw[t] = p->yaw; p->has_spawn[t] = true; }
        for (u32 j = 0; j < nlink[k]; j++) {
            if (link_id[k][j] == 999) continue;
            u32 q = p->nloc++; p->loc[q].weight = link_w[k][j]; p->loc[q].own = false;   /* (an id with no point: the post) */
            for (u32 i = 0; i < nl; i++) if (lid[i] == link_id[k][j]) { memcpy(p->loc[q].pos, lpos[i], 12); p->loc[q].yaw = lpos[i][3]; p->loc[q].own = lown[i]; break; }
        }
    }
    (void)nsp; (void)sp;                                                      /* (types 15 / 16: the droids, not the posts' spawns) */
    for (u32 i = 0; i < nrg; i++)
        for (u32 k = 0; k < out->nposts; k++) {
            f32 dx = rg[i][0] - out->post[k].pos[0], dz = rg[i][2] - out->post[k].pos[2];
            if (dx * dx + dz * dz < 25.0f && !out->post[k].has_region) { memcpy(out->post[k].region, rg[i], 12); out->post[k].has_region = true; }
        }
    ticket_mods(l, out);
    return out->nposts > 0;
}

/* ------------------------------------------------------------------ the match */
void ak_cq_rules_default(ak_cq_rules *r)
{
    s32 t = ak_setting_int("AK_TICKETS", 100);                              /* the option's range is 25..200 */   /* PARITY(5.1) */
    r->tickets = t < 25 ? 25 : t > 200 ? 200 : t;
    r->capture_radius = 5.0f; r->max_rate = 5.0f; r->contest_time = 30.0f;
    r->bleed_time = 4.0f; r->drain_time = 0.1f;
    r->loss_time = ak_setting_float("AK_TOTAL_LOSS_TIME", 60.0f); r->respawn_delay = ak_setting_float("AK_RESPAWN_DELAY", 10.0f);   /* PARITY(1.10 5.1) */
}

int ak_faction_team(int faction) { return faction & 1; }

static void recount(const ak_conquest_map *m, ak_conquest *s)
{
    s->held[0] = s->held[1] = 0;
    s->present = 0;
    for (u32 i = 0; i < m->nposts; i++) { if (m->post[i].absent) continue; s->present++; if (s->post[i].owner < 2) s->held[s->post[i].owner]++; }
}

void ak_conquest_mobile(const ak_conquest_map *m, ak_conquest *s, u32 i, int owner, bool present)
{
    ak_post_state *p = &s->post[i];
    if (p->owner == owner && !m->post[i].absent == present) return;
    p->owner = owner; p->progress = m->post[i].amount; p->capturing = AK_CQ_NEUTRAL;
    ((ak_conquest_map *)m)->post[i].absent = !present;
    recount(m, s);
}

void ak_conquest_start(const ak_conquest_map *m, const ak_cq_rules *r, ak_conquest *s)
{
    memset(s, 0, sizeof *s);
    for (u32 i = 0; i < m->nposts; i++) {
        ak_post_state *p = &s->post[i];
        p->owner = m->post[i].start_owner; p->capturing = AK_CQ_NEUTRAL; p->progress = m->post[i].amount;
    }
    s->tickets[0] = s->tickets[1] = r->tickets;
    for (u32 i = 0; i < m->ntmod; i++) {                                     /* the level script's changes (Hoth: the Empire +25 %) */
        const ak_ticket_mod *t = &m->tmod[i]; if (t->team < 0 || t->team > 1) continue;
        if (t->set) { if (t->value > 0) s->tickets[t->team] = (s32)t->value; }
        else s->tickets[t->team] += (s32)lroundf((f32)r->tickets * t->value * 0.01f);
    }
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
        if (s->held[o] * 2 > s->present && s->tickets[t] > (s32)s->living[t]) {   /* the other side holds the majority (of the posts that exist) */
            s->bleed_t[t] += dt;
            while (s->bleed_t[t] >= r->bleed_time) { s->bleed_t[t] -= r->bleed_time; lose_ticket(s, t); }
        } else s->bleed_t[t] = 0;
    }
    /* total loss: every post held by one team */
    int all = AK_CQ_NEUTRAL;
    for (int t = 0; t < 2; t++) if (s->present && s->held[t] == s->present) all = t;
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

void ak_post_spawn(const ak_post *po, int team, u32 roll, f32 pos[3], f32 *yaw)
{
    s32 r = (s32)((roll >> 1) % 100u) + 1;
    for (u32 i = 0; i < po->nloc; i++) {
        if ((r -= po->loc[i].weight) >= 1) continue;
        if (!po->loc[i].own) break;
        memcpy(pos, po->loc[i].pos, 12); *yaw = po->loc[i].yaw; return;
    }
    memcpy(pos, po->spawn[team], 12); *yaw = po->spawn_yaw[team];
}

bool ak_conquest_spawn(const ak_conquest_map *m, const ak_conquest *s, int team, const f32 *near, f32 *pos, f32 *yaw)
{
    s32 best = -1; f32 bd = 1e30f;
    for (u32 i = 0; i < m->nposts; i++) {
        if (s->post[i].owner != team || !m->post[i].has_spawn[team] || m->post[i].absent) continue;
        f32 d = 0;
        if (near) { f32 dx = m->post[i].pos[0] - near[0], dz = m->post[i].pos[2] - near[2]; d = dx * dx + dz * dz; }
        if (d < bd) { bd = d; best = (s32)i; }
    }
    if (best < 0) return false;
    ak_post_spawn(&m->post[best], team, 0x7FFFFFFFu, pos, yaw);
    return true;
}
