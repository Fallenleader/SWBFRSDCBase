/* Aurek - play mode (see play.h) */
#include "audio/ak_speech.h"
#include "game/ak_box.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
#include "app/play.h"
#include "app/hud.h"
#include "audio/ak_audio.h"
#include "core/ak_settings.h"
#include "assets/entity.h"

static s32 find_clip(const ak_model_set *m, const char *const *names)
{
    for (; *names; names++) for (u32 i = 0; i < m->nclips; i++) if (!strcmp(m->clips[i].name, *names)) return (s32)i;
    return -1;
}

static void pose(const ak_model_set *m, const ak_soldier_look *lk, s32 clip, f32 t, bool loop, f32 (*bones)[12])
{
    static ak_quat lq[64]; static f32 lt[64][3];
    const ak_model *body = &m->models[lk->body];
    if (body->skeleton < 0) return;
    const ak_skeleton *sk = &m->skels[body->skeleton];
    if (sk->nbones > 64) return;
    if (clip >= 0) {
        const ak_anim_clip *c = &m->clips[clip];
        if (!loop && t > c->duration) t = c->duration - 1e-4f;             /* hold the last frame */
        ak_anim_sample(c, sk, t, loop, lq, lt);
        ak_skeleton_pose_matrices(sk, lq, (const f32 (*)[3])lt, bones);
    } else ak_skeleton_bind_matrices(sk, bones);
}

/* the body clip with an upper-body layer over it (the shoot layer: only the bones it has keys for) */
static void pose_layer(const ak_model_set *m, const ak_soldier_look *lk, s32 clip, f32 t, bool loop, s32 over, f32 over_t, f32 (*bones)[12])
{
    static ak_quat lq[64]; static f32 lt[64][3];
    const ak_model *body = &m->models[lk->body];
    if (over < 0) { pose(m, lk, clip, t, loop, bones); return; }
    if (body->skeleton < 0) return;
    const ak_skeleton *sk = &m->skels[body->skeleton];
    if (sk->nbones > 64) return;
    if (clip >= 0) { const ak_anim_clip *c = &m->clips[clip]; if (!loop && t > c->duration) t = c->duration - 1e-4f; ak_anim_sample(c, sk, t, loop, lq, lt); }
    else for (u32 b = 0; b < sk->nbones; b++) { lq[b] = sk->bind_q[b]; memcpy(lt[b], sk->bind_t[b], 12); }
    ak_anim_sample_over(&m->clips[over], sk, over_t, true, lq, lt);
    ak_skeleton_pose_matrices(sk, lq, (const f32 (*)[3])lt, bones);
}

/* the body crossfading from one clip to another (weight w on `clip`; ak_loco.h: 0.2 s), an upper-body layer over it (over >= 0) */
static void pose_mix(const ak_model_set *m, const ak_soldier_look *lk, s32 from, f32 from_t, s32 clip, f32 t, f32 w, bool loop, s32 over, f32 over_t, f32 (*bones)[12])
{
    static ak_quat lq[64], fq[64]; static f32 lt[64][3], ft[64][3];
    if (from < 0 || from == clip || w >= 1) { pose_layer(m, lk, clip, t, loop, over, over_t, bones); return; }
    const ak_model *body = &m->models[lk->body];
    if (body->skeleton < 0) return;
    const ak_skeleton *sk = &m->skels[body->skeleton];
    if (sk->nbones > 64) return;
    for (u32 b = 0; b < sk->nbones; b++) { lq[b] = fq[b] = sk->bind_q[b]; memcpy(lt[b], sk->bind_t[b], 12); memcpy(ft[b], sk->bind_t[b], 12); }
    if (clip >= 0) { const ak_anim_clip *c = &m->clips[clip]; if (!loop && t > c->duration) t = c->duration - 1e-4f; ak_anim_sample(c, sk, t, loop, lq, lt); }
    { const ak_anim_clip *c = &m->clips[from]; ak_anim_sample(c, sk, from_t, true, fq, ft); }
    for (u32 b = 0; b < sk->nbones; b++) {                                    /* nlerp along the shorter arc */
        ak_quat a = fq[b], q = lq[b]; f32 d = a.x * q.x + a.y * q.y + a.z * q.z + a.w * q.w, sg = d < 0 ? -1.0f : 1.0f, u = 1 - w;
        ak_quat r = { a.x * u + q.x * w * sg, a.y * u + q.y * w * sg, a.z * u + q.z * w * sg, a.w * u + q.w * w * sg };
        f32 n = sqrtf(r.x * r.x + r.y * r.y + r.z * r.z + r.w * r.w); if (n > 1e-8f) { r.x /= n; r.y /= n; r.z /= n; r.w /= n; }
        lq[b] = r; for (int k = 0; k < 3; k++) lt[b][k] = ft[b][k] * u + lt[b][k] * w;
    }
    if (over >= 0) ak_anim_sample_over(&m->clips[over], sk, over_t, true, lq, lt);
    ak_skeleton_pose_matrices(sk, lq, (const f32 (*)[3])lt, bones);
}

static bool poseable(const ak_model_set *m, const ak_soldier_look *lk)
{
    const ak_model *body = &m->models[lk->body];
    return body->skeleton >= 0 && m->skels[body->skeleton].nbones <= 64;
}

/* soldiers are drawn (and collide, and are hit) at this size relative to the world: AK_SOLDIER_SCALE */
static f32 S = 1.0f;

static void world_of_scaled(const f32 *pos, f32 yaw, f32 k, ak_m4 *w)
{
    f32 s = sinf(yaw) * k, c = cosf(yaw) * k;
    ak_m4 r = { { c, 0, -s, 0,  0, k, 0, 0,  s, 0, c, 0,  pos[0], pos[1], pos[2], 1 } }; *w = r;
}
static void world_of(const f32 *pos, f32 yaw, ak_m4 *w) { world_of_scaled(pos, yaw, 1.0f, w); }

#define NS(p) (1 + (p)->nbots)                 /* soldiers in the target list */
#define NV(p) (1 + (p)->nbots + (p)->nveh)    /* soldiers and vehicles */
#define NP(p) (NV(p) + (p)->nturret)            /* soldiers, vehicles and turrets: the targets that fight */
#define NT(p) (NP(p) + (p)->nprop)              /* every target: soldiers, vehicles, turrets, then the breakable props */
#define TT(p, t) (NV(p) + (t))                  /* turret t's target */
static void turrets_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp);
static void placed_flyer_crew(ak_play *p, const ak_model_set *m, u32 v);
static void props_init(ak_play *p, const ak_level *l, const ak_model_set *m, ak_arena *a);
static void script_sink(void *user, const ak_script_msg *m);

/* ------------------------------------------------------------------ bodies (ak_box.h) */
static const f32 default_box[2][3] = { { -0.3f, 0, -0.3f }, { 0.3f, 2.0f, 0.3f } };   /* 08A061BC: 0.6 x 2.0 x 0.6 m on the origin */
/* a soldier's body: the physics' built-in shape 0 (08A061BC builds it, 08A05F60 hands it out for shape kinds 0 / 1), a box 0.6 m
 * across and 1.8 m tall from the feet, never turned (read from the running original: the player's body matrix stays the identity
 * and its 8 corners stay on the world axes whatever the soldier faces) */
static const f32 soldier_shape[2][3] = { { -0.3f, 0, -0.3f }, { 0.3f, 1.8f, 0.3f } };
static void model_box(const ak_model_set *m, s32 mi, const f32 **mn, const f32 **mx)
{
    *mn = default_box[0]; *mx = default_box[1];
    if (mi < 0 || (u32)mi >= m->nmodels || m->models[mi].skeleton < 0) return;
    const ak_skeleton *sk = &m->skels[m->models[mi].skeleton];
    *mn = sk->col_min; *mx = sk->col_max;
}
static void soldier_box(const ak_model_set *m, const ak_soldier_look *look, const ak_character *ch, ak_box *b)
{
    (void)m; (void)look;
    f32 W[12] = { S, 0, 0, ch->pos[0],  0, S, 0, ch->pos[1],  0, 0, S, ch->pos[2] };   /* (on the world axes) */
    ak_box_place(b, soldier_shape[0], soldier_shape[1], W);
}
static void vehicle_box(const ak_model_set *m, const ak_vehicle *vh, ak_box *b)
{
    const f32 *mn, *mx; model_box(m, vh->def->model, &mn, &mx);
    {   static int dbg = -1; static const void *seen[16]; static int ns; if (dbg < 0) dbg = ak_setting_int("AK_DEBUG_BODY", 0);
        bool k = false; for (int i = 0; i < ns; i++) if (seen[i] == vh->def) k = true;
        if (dbg && !k && ns < 16) { seen[ns++] = vh->def; AK_INFO("body", "vehicle box %s: %.2f %.2f %.2f .. %.2f %.2f %.2f", vh->def->name ? vh->def->name : "?", mn[0], mn[1], mn[2], mx[0], mx[1], mx[2]); } }
    {   static int dh = -1; static const void *seen2[16]; static int ns2; if (dh < 0) dh = ak_setting_int("AK_DEBUG_HSBB", 0);   /* tests: a vehicle's bone boxes */
        bool k = false; for (int i = 0; i < ns2; i++) if (seen2[i] == vh->def) k = true;
        s32 mi = vh->def->model;
        if (dh && !k && ns2 < 16 && mi >= 0 && m->models[mi].skeleton >= 0) { seen2[ns2++] = vh->def;
            const ak_skeleton *sk = &m->skels[m->models[mi].skeleton];
            AK_INFO("hsbb", "%s: %u bones, collision box %.2f %.2f %.2f .. %.2f %.2f %.2f (from %d)", vh->def->name ? vh->def->name : "?", sk->nbones,
                    sk->col_min[0], sk->col_min[1], sk->col_min[2], sk->col_max[0], sk->col_max[1], sk->col_max[2], sk->col_from);
            for (u32 i = 0; sk->bb && sk->bbf && i < sk->nbones; i++)
                AK_INFO("hsbb", "  bone %u (parent %d) flags %u at %.2f %.2f %.2f, box %.2f %.2f %.2f .. %.2f %.2f %.2f", i, sk->parent[i], sk->bbf[i],
                        sk->world_t[i][0], sk->world_t[i][1], sk->world_t[i][2], sk->bb[i][0], sk->bb[i][1], sk->bb[i][2], sk->bb[i][3], sk->bb[i][4], sk->bb[i][5]); } }
    f32 W[12]; ak_vehicle_matrix(vh, W); ak_box_place(b, mn, mx, W);
}
static void mover_box(const ak_play *p, u32 k, ak_box *b)   /* a moving hull's box at its place (type 19) */
{
    const typeof(p->mover[0]) *mv = &p->mover[k]; f32 x = mv->q.x, y = mv->q.y, z = mv->q.z, w = mv->q.w;
    f32 W[12] = { 1 - 2 * (y * y + z * z), 2 * (x * y - z * w), 2 * (x * z + y * w), mv->pos[0],
                  2 * (x * y + z * w), 1 - 2 * (x * x + z * z), 2 * (y * z - x * w), mv->pos[1],
                  2 * (x * z - y * w), 2 * (y * z + x * w), 1 - 2 * (x * x + y * y), mv->pos[2] };
    ak_box_place(b, mv->mn, mv->mx, W);
}
static void bodies_push(ak_play *p, const ak_model_set *m)
{
    ak_box me, o; f32 push[3];
    if (p->in_veh >= 0) {                                                     /* the player's vehicle */
        ak_vehicle *vh = &p->veh[p->in_veh]; if (!vh->alive) return;
        bool flyer = vh->def->kind == AK_VEH_FLYER && vh->flying;
        for (int pass = 0; pass < 2; pass++) {                               /* (a second pass settles a push into another body) */
            vehicle_box(m, vh, &me);
            for (u32 j = 0; j < NV(p) - 1 + p->nturret + p->nmover; j++) {
                if (j < p->nbots) { if (!p->target[1 + j].alive || p->bot[j].veh >= 0) continue; soldier_box(m, &p->bot[j].look, &p->bot[j].ch, &o); }
                else if (j < p->nbots + p->nveh) { u32 v = j - p->nbots; if ((s32)v == p->in_veh || !p->veh[v].alive) continue; vehicle_box(m, &p->veh[v], &o); }
                else if (j >= p->nbots + p->nveh + p->nturret) mover_box(p, j - p->nbots - p->nveh - p->nturret, &o);
                else { const ak_turret *t = &p->turret[j - p->nbots - p->nveh]; if (!t->alive) continue; const f32 *mn, *mx; model_box(m, t->def->base, &mn, &mx); ak_box_place(&o, mn, mx, t->base); }
                if (!ak_box_push(&me, &o, push)) continue;
                if (!flyer) push[1] = 0;                                      /* ground vehicles keep to their own ground handling */
                for (int k = 0; k < 3; k++) vh->pos[k] += push[k];
                f32 l2 = push[0] * push[0] + push[1] * push[1] + push[2] * push[2];
                if (l2 > 1e-10f) { f32 vn = (vh->vel[0] * push[0] + vh->vel[1] * push[1] + vh->vel[2] * push[2]) / l2;
                    if (vn < 0) for (int k = 0; k < 3; k++) vh->vel[k] -= vn * push[k]; }
                vehicle_box(m, vh, &me);
            }
        }
        return;
    }
    if (!p->target[0].alive || p->in_turret >= 0) return;                    /* (attached to something: its body is off, 08A049C0) */
    ak_character *ch = &p->ch;
    for (int pass = 0; pass < 2; pass++) {
        soldier_box(m, &p->look, ch, &me);
        for (u32 j = 0; j < p->nbots + p->nveh + p->nturret + p->nmover; j++) {
            if (j < p->nbots) { if (!p->target[1 + j].alive || p->bot[j].veh >= 0) continue; soldier_box(m, &p->bot[j].look, &p->bot[j].ch, &o); }
            else if (j < p->nbots + p->nveh) { u32 v = j - p->nbots; if (!p->veh[v].alive) continue;
                /* a placed walker does not push soldiers - measured on the original (Boz Pity, RS_DRIVE_BODYID=30d44): the AT-AT's physics
                   body (a 30.7 x 27.5 x 11.7 m box) stays where the walker was made (game 132.2, 1.0, 114.1) while the walker walks off,
                   and soldiers walked through that box's footprint (33 of 4208 samples, RS_AI_BOTS) and stood under the parked walker;
                   AK_WALKER_PUSH=1: the whole-box push as before [the slowdown the original's player feels by its legs: not traced] */
                static int wp = -1; if (wp < 0) wp = ak_setting_int("AK_WALKER_PUSH", 0);
                if (!wp && p->vspawn[v].fixed && p->veh[v].def && p->veh[v].def->kind == AK_VEH_WALKER) continue;
                vehicle_box(m, &p->veh[v], &o); }
            else if (j >= p->nbots + p->nveh + p->nturret) mover_box(p, j - p->nbots - p->nveh - p->nturret, &o);
            else { const ak_turret *t = &p->turret[j - p->nbots - p->nveh]; if (!t->alive) continue; const f32 *mn, *mx; model_box(m, t->def->base, &mn, &mx); ak_box_place(&o, mn, mx, t->base); }
            if (!ak_box_push(&me, &o, push)) continue;
            if (ak_setting_int("AK_DEBUG_BODY", 0) && j >= p->nbots && j < p->nbots + p->nveh) { const ak_vehicle *vv = &p->veh[j - p->nbots]; f32 g[3]; ak_from_game(vv->pos, g);
                AK_INFO("body", "  (vehicle %u: %s at %.2f %.2f %.2f, yaw %.3f)", j - p->nbots, vv->def && vv->def->name ? vv->def->name : "?", g[0], g[1], g[2], vv->yaw); }
            if (ak_setting_int("AK_DEBUG_BODY", 0)) AK_INFO("body", "player pushed %.3f %.3f %.3f by body %u (%s)", push[0], push[1], push[2], j,
                j < p->nbots ? "soldier" : j < p->nbots + p->nveh ? "vehicle" : j < p->nbots + p->nveh + p->nturret ? "turret" : "mover");
            ak_char_push(ch, &p->col, push);                                 /* (through the level's faces, not into them) */
            f32 l2 = push[0] * push[0] + push[1] * push[1] + push[2] * push[2];
            if (l2 > 1e-10f) { f32 vn = (ch->vel[0] * push[0] + ch->vel[1] * push[1] + ch->vel[2] * push[2]) / l2;
                if (vn < 0) for (int k = 0; k < 3; k++) ch->vel[k] -= vn * push[k]; }
            if (push[1] > 0 && push[1] * push[1] > 0.5f * l2) { ch->on_ground = true; ch->jumped = false; }   /* standing on it */
            soldier_box(m, &p->look, ch, &me);
        }
    }
}
#define VT(p, v) (1 + (p)->nbots + (v))        /* vehicle v's target */

static void heroes_init(ak_play *p, const ak_blueprints *bp, const ak_model_set *m);
static void droids_update(ak_play *p, f32 dt);
/* each soldier near a droid: health (the traced pulse, above) and ammo (the ammo droid, class 0x8010: its pulse - AmmunitionDroid
   PulseLength 1 s, EffectiveRadius 8 m - is not traced: here it gives back one clip a pulse, up to a full load) */   /* PARITY(2.2) */
/* power-up buffs (2.3p).  Each soldier holds one buff at a time (089A816C sets its mask to the kind alone); its timer runs by the frame's
 * time and the buff ends past the kind's <name>_Time (089A64F4 / 089A6BC0 / 089A8188).  Effects: Rage and Rally in the damage (hurt(),
 * 089A7310); Regenerate heals a living soldier below full at 5 a second (089A64F4: vfunc +0xA0, D_08AEEA08 - the Weapon's
 * Regenerate_Rate 10 is not read); Stamina multiplies the stamina's regeneration by Weapon Stamina's Stamina_Multiplier (2.5, read into
 * the unit's +0x94 by 089E13B8; 089E47DC applies it to +0x68 [assumed: the regeneration rate]).  [assumed: a buff ends when its
 * soldier dies] */
static void pu_update(ak_play *p, f32 dt)
{
    {   static int dbg = -1; if (dbg < 0) dbg = ak_setting_int("AK_DEBUG_POWERUP", 0);
        if (dbg > 1 && p->frame_no % 60 == 0) AK_INFO("play", "frame %u: player buff %d %.1f s, health %.1f, stamina %.1f", p->frame_no, p->buff_k[0], p->buff_t[0], p->target[0].health, p->stamina); }
    for (u32 u = 0; u < NS(p); u++) {
        ak_target *t = &p->target[u]; s8 k = p->buff_k[u];
        if (k >= 0 && (!t->alive || (p->buff_t[u] += dt) > p->pu_time[k])) { p->buff_k[u] = -1; p->buff_t[u] = 0; k = -1; }
        t->rage = k == 0; t->rally = k == 1;
        if (k == 2) {
            f32 maxh = u == 0 ? p->max_health : t->max_health;
            for (int t2 = 0; t2 < 2; t2++) if (p->hero[t2].unit == (s32)u) maxh = p->hero[t2].health;
            if (t->health > 0 && t->health < maxh) { t->health += 5.0f * dt; if (t->health > maxh) t->health = maxh; if (u == 0) p->health = t->health; }
        }
    }
}
/* the player uses his power-up (08A1F86C: the FiringAnim, then message 0x8067 + kind to his unit; 089A6D64 -> 089A7988): every living
 * soldier of his side within the kind's radius (3-D, from him; him too) gets the buff, its timer from 0 */
static void pu_use(ak_play *p)
{
    s8 k = p->pu_kind; if (k < 0) return;
    for (u32 u = 0; u < NS(p); u++) {
        const ak_target *t = &p->target[u];
        if (!t->alive || t->team != p->target[0].team) continue;
        if (u > 0 && p->bot[u - 1].veh >= 0) continue;                       /* [assumed: riders' units are counted from their soldier] */
        f32 dx = t->feet[0] - p->ch.pos[0], dy = t->feet[1] - p->ch.pos[1], dz = t->feet[2] - p->ch.pos[2];
        if (dx * dx + dy * dy + dz * dz < p->pu_radius[k] * p->pu_radius[k] * S * S) { p->buff_k[u] = k; p->buff_t[u] = 0; }
    }
    if (ak_setting_int("AK_DEBUG_POWERUP", 0)) AK_INFO("play", "power-up %d used", k);
}

/* kill boxes (08A11124 each frame, with flags bit 1): every living target whose position is inside takes, with bit 0, its whole health,
 * else the box's damage a second x dt (08A11398) */
static bool in_kbox(const ak_play *p, const f32 *q, u32 *k)
{
    for (u32 i = 0; i < p->nkbox; i++) { const f32 *a = p->kbox[i].mn, *b = p->kbox[i].mx;
        if (q[0] >= a[0] && q[0] <= b[0] && q[1] >= a[1] && q[1] <= b[1] && q[2] >= a[2] && q[2] <= b[2]) { if (k) *k = i; return true; } }
    return false;
}
static void kbox_update(ak_play *p, f32 dt)
{
    if (!p->nkbox) return;
    for (u32 u = 0; u < NT(p); u++) {
        ak_target *t = &p->target[u]; u32 k;
        if (!t->alive || t->health <= 0 || !in_kbox(p, t->feet, &k)) continue;
        f32 d = (p->kbox[k].flags & 1) ? t->health : p->kbox[k].rate * dt;
        t->health -= d; t->last_attacker = -1; t->last_quiet = false;
        if (t->health <= 0) t->health = 0;                                    /* (the next frame's fall pass takes it: set dead here, after that pass, the
                                                                                 fall was never counted - Space Kessel's TIEs made under the station) */
    }
}

static void droids_update(ak_play *p, f32 dt)
{
    if (!p->have_cq || !p->cq.ndroid) return;
    bool heal = (p->droids.t -= dt) <= 0, ammo = (p->droids.ammo_t -= dt) <= 0;
    if (heal) p->droids.t += p->droids.pulse;
    if (ammo) p->droids.ammo_t += p->droids.ammo_pulse;
    if (!heal && !ammo) return;
    for (u32 u = 0; u < NS(p); u++) {
        ak_target *t = &p->target[u];
        if (!t->alive || (u == 0 ? p->in_veh >= 0 : p->bot[u - 1].veh >= 0)) continue;
        f32 maxh = u == 0 ? p->max_health : t->max_health;
        for (int t2 = 0; t2 < 2; t2++) if (p->hero[t2].unit == (s32)u) maxh = p->hero[t2].health;
        ak_weapon *w = u == 0 ? (p->armed ? &p->weapon : NULL) : (p->bot[u - 1].weapon.def ? &p->bot[u - 1].weapon : NULL);
        bool gave_h = false, gave_a = false;
        for (u32 k = 0; k < p->cq.ndroid; k++) {
            const ak_droid *d = &p->cq.droid[k];
            f32 dx = t->feet[0] - d->pos[0], dy = t->feet[1] - d->pos[1], dz = t->feet[2] - d->pos[2], d2 = dx * dx + dy * dy + dz * dz;
            if (!d->ammo && heal && !gave_h && t->health < maxh && d2 <= p->droids.radius * p->droids.radius) {
                f32 o[3] = { d->pos[0], d->pos[1] + 0.6f, d->pos[2] }, dir[3] = { t->feet[0] - o[0], t->feet[1] + 1.0f - o[1], t->feet[2] - o[2] }, l = sqrtf(dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2]);
                ak_col_hit hh;
                if (l > 0.01f) { dir[0] /= l; dir[1] /= l; dir[2] /= l; }
                if (l <= 0.01f || !ak_col_raycast(&p->col, o, dir, l, AK_COL_NOT_BODIES, &hh)) {
                    t->health += p->droids.heal; if (t->health > maxh) t->health = maxh; gave_h = true;
                    if (u == 0) p->health = t->health;
                    ak_audio_play("Health_Ammo_Dispense", d->pos, false);
                }
            }
            if (d->ammo && ammo && !gave_a && w && w->def && w->def->clip > 0 && d2 <= p->droids.ammo_radius * p->droids.ammo_radius) {
                s32 full = w->def->clip * (w->def->clips > 0 ? w->def->clips - 1 : 0);
                if (w->spare < full) { w->spare += w->def->clip; if (w->spare > full) w->spare = full; gave_a = true; ak_audio_play("Health_Ammo_Dispense", d->pos, false); }
            }
        }
    }
}

static void heroes_drain(ak_play *p, f32 dt);
static void vehicles_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a);
static bool vehicle_make(ak_play *p, u32 v);
static void bot_board(ak_play *p, ak_play_bot *b, u32 idx, u32 v);
static bool veh_seat_for(const ak_play *p, u32 v, int team);
static f32 rnd(u32 *s) { *s = *s * 1664525u + 1013904223u; return (f32)(*s >> 8) / 16777216.0f; }
static f32 wrap(f32 a) { while (a > 3.14159265f) a -= 6.2831853f; while (a < -3.14159265f) a += 6.2831853f; return a; }
static bool ctf_carrying(const ak_play *p, s32 unit) { for (u32 f = 0; f < p->ctf_map.nflags; f++) if (p->ctf.flag[f].present && p->ctf.flag[f].carrier == unit) return true; return false; }

/* a marker's world matrix (3x4 rows) for a soldier posed with `bones` (false: the body has no such marker) */
static bool marker_world(const ak_model_set *m, const ak_soldier_look *lk, const f32 (*bones)[12], const f32 *pos, f32 yaw, const char *name, f32 out[12])
{
    const ak_marker *g = ak_model_marker(&m->models[lk->body], name); if (!g) return false;
    f32 local[12]; ak_marker_matrix(bones[g->bone], g, local);
    f32 s = sinf(yaw) * S, c = cosf(yaw) * S, W[12] = { c, 0, s, pos[0],  0, S, 0, pos[1],  -s, 0, c, pos[2] };
    for (int r = 0; r < 3; r++) {
        for (int q = 0; q < 4; q++) out[r * 4 + q] = W[r * 4] * local[q] + W[r * 4 + 1] * local[4 + q] + W[r * 4 + 2] * local[8 + q];
        out[r * 4 + 3] += W[r * 4 + 3];
    }
    return true;
}

/* the weapon's world matrix (3x4 rows) for a soldier posed with `bones` */
static bool weapon_world(const ak_model_set *m, const ak_soldier_look *lk, const f32 (*bones)[12], const f32 *pos, f32 yaw, f32 out[12])
{
    const ak_model *body = &m->models[lk->body];
    const ak_marker *g = ak_model_marker(body, "gun");
    f32 local[12];
    if (g) ak_marker_matrix(bones[g->bone], g, local);
    else memcpy(local, bones[0], sizeof local);
    f32 s = sinf(yaw) * S, c = cosf(yaw) * S;
    f32 W[12] = { c, 0, s, pos[0],  0, S, 0, pos[1],  -s, 0, c, pos[2] };
    for (int r = 0; r < 3; r++) {
        for (int q = 0; q < 4; q++) out[r * 4 + q] = W[r * 4] * local[q] + W[r * 4 + 1] * local[4 + q] + W[r * 4 + 2] * local[8 + q];
        out[r * 4 + 3] += W[r * 4 + 3];
    }
    return true;
}

static void muzzle_of(const ak_model_set *m, const ak_weapon_def *wd, const f32 gun[12], f32 muz[3])
{
    const ak_marker *mz = wd->model >= 0 ? ak_model_marker(&m->models[wd->model], "muz") : NULL;
    f32 lp[3] = { 0, 0, 0 }; if (mz) { lp[0] = mz->m[3]; lp[1] = mz->m[7]; lp[2] = mz->m[11]; }
    for (int r = 0; r < 3; r++) muz[r] = gun[r * 4] * lp[0] + gun[r * 4 + 1] * lp[1] + gun[r * 4 + 2] * lp[2] + gun[r * 4 + 3];
}

/* the clips a unit plays: a saber hero's own set (falling back to the rifle set where it has none), else the soldiers' */
static const s32 *unit_clips(const ak_play *p, s32 unit)
{
    for (int t = 0; t < 2; t++) if (p->hero[t].unit == unit && unit >= 0 && (p->hero[t].saber || p->hero[t].tab)) return p->hero[t].clip;
    return p->clip;
}

static f32 g_eye[3];   /* the camera, for the soldiers' detail (set by ak_play_draw) */
static void draw_soldier(ak_scene_models *ms, const ak_model_set *m, const ak_soldier_look *lk, const f32 *pos, f32 yaw, const f32 (*bones)[12],
                         const ak_m4 *vp, ak_scene_stats *st)
{
    static f32 head[1][12];
    const ak_model *body = &m->models[lk->body];
    if (body->skeleton < 0) return;
    ak_m4 w; world_of_scaled(pos, yaw, S, &w);
    ak_model_colours col = { lk->rgb1, lk->rgb2 };
    /* the lower detail beyond 40 m (measured: harness RS_DRAW_LOG, Hoth's soldiers drew 782 strip indices up to 39.2 m from the
     * camera and 442 from 40.2 m on, none lower out to 220 m); the L1 mesh only if it rides the same skeleton */
    f32 dx = pos[0] - g_eye[0], dy = pos[1] - g_eye[1], dz = pos[2] - g_eye[2];
    bool far_ = dx * dx + dy * dy + dz * dz > 40.0f * 40.0f && ak_setting_int("AK_SOLDIER_LOD", 1);
    s32 bi = lk->body, hi = lk->head;
    if (far_ && body->lod_next >= 0 && m->models[body->lod_next].nidx && m->models[body->lod_next].skeleton == body->skeleton) bi = body->lod_next;
    if (far_ && hi >= 0 && m->models[hi].lod_next >= 0 && m->models[m->models[hi].lod_next].nidx) hi = m->models[hi].lod_next;
    ak_scene_models_draw(ms, (u32)bi, vp, &w, bones, &col, st);
    if (hi >= 0) {
        ak_soldier_head_matrix(body, &m->skels[body->skeleton], lk->head_bone, bones, head[0]);
        ak_scene_models_draw(ms, (u32)hi, vp, &w, (const f32 (*)[12])head, &col, st);
    }
}

static void draw_weapon(ak_scene_models *ms, const ak_model_set *m, const ak_weapon_def *wd, const f32 G[12], const ak_m4 *vp, ak_scene_stats *st)
{
    if (wd->model < 0) return;
    ak_m4 gw = { { G[0], G[4], G[8], 0,  G[1], G[5], G[9], 0,  G[2], G[6], G[10], 0,  G[3], G[7], G[11], 1 } };
    ak_scene_models_draw(ms, (u32)wd->model, vp, &gw, NULL, NULL, st);
}

/* one posed HSBB box as a shot target: W is the frame it rides in (3x4 rows, world, scale included), B min xyz / max xyz in it */
static void target_box(ak_target *t, const f32 W[12], const f32 B[6], u8 part)
{
    if (t->nbb >= AK_TGT_BB) return;
    u8 q = t->nbb++;
    f32 lc[3] = { (B[0] + B[3]) * 0.5f, (B[1] + B[4]) * 0.5f, (B[2] + B[5]) * 0.5f };
    for (int r = 0; r < 3; r++) t->bb_c[q][r] = W[r * 4] * lc[0] + W[r * 4 + 1] * lc[1] + W[r * 4 + 2] * lc[2] + W[r * 4 + 3];
    for (int k = 0; k < 3; k++) {
        f32 ax = W[k], ay = W[4 + k], az = W[8 + k], l = sqrtf(ax * ax + ay * ay + az * az); if (l < 1e-9f) l = 1;
        t->bb_ax[q][k][0] = ax / l; t->bb_ax[q][k][1] = ay / l; t->bb_ax[q][k][2] = az / l;
        t->bb_h[q][k] = fabsf(B[3 + k] - B[k]) * 0.5f * l;
    }
    t->bb_bone[q] = part;
}
static void m34_mul(const f32 A[12], const f32 B[12], f32 out[12])
{
    for (int r = 0; r < 3; r++) {
        for (int q = 0; q < 4; q++) out[r * 4 + q] = A[r * 4] * B[q] + A[r * 4 + 1] * B[4 + q] + A[r * 4 + 2] * B[8 + q];
        out[r * 4 + 3] += A[r * 4 + 3];
    }
}
/* a model's flagged HSBB boxes (bit 0 set, bit 1 clear), its bone i in the frame W * pose[i] (pose NULL: one-bone models), as part `part`
   (-1: the bone's own index) */
static void target_model_boxes(ak_target *t, const ak_model_set *m, s32 mi, const f32 W[12], const f32 (*pose)[12], int part)
{
    if (mi < 0 || m->models[mi].skeleton < 0) return;
    const ak_skeleton *sk = &m->skels[m->models[mi].skeleton];
    if (!sk->bb || !sk->bbf) return;
    for (u32 i = 0; i < sk->nbones; i++) {
        if ((sk->bbf[i] & 3) != 1) continue;
        f32 F[12]; if (pose) m34_mul(W, pose[i], F); else memcpy(F, W, sizeof F);
        target_box(t, F, sk->bb[i], (u8)(part < 0 ? (int)i : part));
    }
}

/* a standing soldier's target shape from its pose: body capsule from the feet, head sphere at the head; and the shapes shots really
   test (traced, PARITY 1.12): a bolt's ray (089DD5B4) tests every damageable's model (088D189C -> 08808B24): each part whose HSBB
   flags have bit 0 and not bit 1, as a box in its posed frame, and the models attached to it.  The hit part goes in the hit message
   +20 (the bone; an attached model: the bone it rides, with its name hash at +16 - the weapon 0xD0CDC21C on the hand, bone 14) and
   part 6 or a part named "head" is a headshot (089A7508).  The body flags 13 of its 21 bones, not the head bone 6: the head model
   (its own HSBB box) gives the headshots.  AK_SHOT_BONES=0: the old capsule and head sphere. */
static void body_target(const ak_model_set *m, const ak_soldier_look *lk, const f32 (*bones)[12], const f32 *pos, f32 yaw, ak_target *t, s32 weapon_model)
{
    memcpy(t->feet, pos, 12); t->height = 1.45f * S; t->radius = 0.35f * S; t->head_radius = 0.2f * S;
    f32 h[12]; const ak_model *body = &m->models[lk->body];
    ak_soldier_head_matrix(body, &m->skels[body->skeleton], lk->head_bone, bones, h);
    f32 s = sinf(yaw), c = cosf(yaw), lx = h[3] * S, ly = (h[7] + 0.1f) * S, lz = h[11] * S;
    t->head[0] = pos[0] + c * lx + s * lz; t->head[1] = pos[1] + ly; t->head[2] = pos[2] - s * lx + c * lz;
    t->nbb = 0;
    static int sb = -1; if (sb < 0) sb = ak_setting_int("AK_SHOT_BONES", 1);
    if (!sb) return;
    f32 W[12] = { c * S, 0, s * S, pos[0],  0, S, 0, pos[1],  -s * S, 0, c * S, pos[2] }, F[12];
    target_model_boxes(t, m, lk->body, W, bones, -1);
    if (lk->head >= 0) { m34_mul(W, h, F); target_model_boxes(t, m, lk->head, F, NULL, AK_HEAD_PART); }
    if (weapon_model >= 0 && weapon_world(m, lk, bones, pos, yaw, F)) {
        const ak_marker *g = ak_model_marker(body, "gun"); target_model_boxes(t, m, weapon_model, F, NULL, g ? (int)g->bone : 14); }
    if (ak_setting_int("AK_DEBUG_BB", 0)) { static u32 n; f32 far_ = 0, lo = 1e9f, hi = -1e9f;   /* (tests: the boxes stay on the body) */
        for (u32 q = 0; q < t->nbb; q++) { f32 dx = t->bb_c[q][0] - pos[0], dz = t->bb_c[q][2] - pos[2], d = sqrtf(dx * dx + dz * dz);
            if (d > far_) far_ = d;
            if (t->bb_c[q][1] - pos[1] < lo) lo = t->bb_c[q][1] - pos[1];
            if (t->bb_c[q][1] - pos[1] > hi) hi = t->bb_c[q][1] - pos[1]; }
        if (n++ % 600 == 0 || far_ > 1.5f) AK_INFO("bb", "%u boxes: farthest %.2f m across, heights %.2f..%.2f", t->nbb, far_, lo, hi); }
}

/* the clip state from the body's motion */
static int motion_state(const ak_character *ch, const ak_char_params *cp, bool was_ground, f32 *land_t, f32 dt, f32 *hs_out)
{
    f32 sy = sinf(ch->yaw), cy = cosf(ch->yaw);
    f32 fwd = -sy * ch->vel[0] - cy * ch->vel[2], side = cy * ch->vel[0] - sy * ch->vel[2], hs = sqrtf(fwd * fwd + side * side);
    int st;
    /* off the ground: the jump, or a fall once it lasts (a crest crossed at a sprint lifts the box for a frame; the original's run
       carries on - measured) [PARITY(1.5b): the 0.1 s is the engine's] */
    if (!ch->on_ground && (ch->jumped || ch->air_time > 0.1f)) st = ch->vel[1] > 0 && ch->jumped ? PLAY_JUMP : PLAY_FALL;
    else if (!ch->on_ground) { st = PLAY_RUN; *hs_out = 0; *land_t -= dt; return st; }   /* (play.c keeps the stick's clip) */
    else if (!was_ground && ch->air_time > 0.4f) { st = PLAY_LAND; *land_t = 0.25f; }
    else if (*land_t > 0 && hs < 1.0f) st = PLAY_LAND;
    else if (hs < 0.5f) st = PLAY_IDLE;
    else if (fabsf(side) > fabsf(fwd)) st = side > 0 ? PLAY_LEFT : PLAY_RIGHT;   /* the clips are named from the other side: "_left" is the run to the right */
    else if (ch->sprinting && fwd > 0.5f) st = PLAY_SPRINT;
    else st = fwd >= 0 ? PLAY_RUN : PLAY_BACK;
    *land_t -= dt; *hs_out = hs; (void)cp;
    return st;
}

static f32 clip_rate(int st, f32 hs, const ak_char_params *cp)
{
    f32 rate = 1.0f;
    if (st == PLAY_RUN || st == PLAY_BACK || st == PLAY_LEFT || st == PLAY_RIGHT) rate = hs / cp->run_speed;   /* feet keep pace */
    if (st == PLAY_SPRINT) rate = hs / cp->sprint_speed;
    return rate < 0.3f ? 0.3f : rate;
}

/* ------------------------------------------------------------------ spawning */
/* a spot near the team's spawn at a post it owns (random among them; `near` biases toward the closest), jittered so a wave
 * does not stack its soldiers, on the ground and in sight of the spawn point */
static bool spawn_spot_at(ak_play *p, int team, const f32 *near, bool exact, u32 *seed, f32 *pos, f32 *yaw);
/* exact: the post nearest `near` always (the spawn map's choice), else half the time */
static bool spawn_spot_at(ak_play *p, int team, const f32 *near, bool exact, u32 *seed, f32 *pos, f32 *yaw)
{
    u32 cand[AK_MAX_POSTS], n = 0;
    for (u32 i = 0; i < p->cq.nposts; i++) if (p->match.post[i].owner == team && p->cq.post[i].has_spawn[team] && !p->cq.post[i].absent) cand[n++] = i;
    if (!n) return false;
    u32 pick = cand[(u32)(rnd(seed) * n) % n];
    if (near && (exact || rnd(seed) < 0.5f)) {
        f32 bd = 1e30f;
        for (u32 k = 0; k < n; k++) { const f32 *q = p->cq.post[cand[k]].pos; f32 dx = q[0] - near[0], dz = q[2] - near[2]; if (dx * dx + dz * dz < bd) { bd = dx * dx + dz * dz; pick = cand[k]; } }
    }
    f32 sp[3]; ak_post_spawn(&p->cq.post[pick], team, (u32)(rnd(seed) * 4294967040.0f), sp, yaw);
    for (int tries = 0; tries < 6; tries++) {
        f32 a = rnd(seed) * 6.2831853f, r = tries ? 0.8f + rnd(seed) * 3.0f : 0;
        f32 q[3] = { sp[0] + cosf(a) * r, sp[1] + 0.5f, sp[2] + sinf(a) * r }, gy;
        if (r > 0) {
            f32 o[3] = { sp[0], sp[1] + 0.8f, sp[2] }, d[3] = { q[0] - sp[0], 0, q[2] - sp[2] }; ak_col_hit h;
            d[0] /= r; d[2] /= r;
            if (ak_col_raycast(&p->col, o, d, r + 0.4f, AK_COL_NOT_BODIES, &h)) continue;
        }
        if (!ak_char_ground_below(&p->col, q, 3.0f, &gy)) continue;
        pos[0] = q[0]; pos[1] = gy; pos[2] = q[2];
        return true;
    }
    memcpy(pos, sp, 12);
    { f32 gy; bool g = ak_char_ground_below(&p->col, pos, 50.0f, &gy); if (g) pos[1] = gy;
      if (ak_setting_int("AK_DEBUG_SPAWN", 0)) AK_INFO("spawn", "team %d post %u at %.1f %.1f %.1f: no ground within 3 m%s", team, pick, sp[0], sp[1], sp[2], g ? "" : ", none within 50 m"); }
    return true;
}

/* ---- the AI soldiers' loadouts (PARITY 2.1 / 2.6)
 * The game's weapons for its AI, by faction (0x08ADDB94, 13 words each: Alliance, Empire, Republic, CIS): 0 none, 1 the auto turret
 * droid, 2 the blaster rifle, 3 the pistol, 4 the chaingun (REP_Chaingun), 5 the incinerator, 6 the shotgun, 7 the rocket
 * launcher, 8 the EMP launcher, 9 the grenade, 10 the personal shield, 11 (0x5EF92370), 12 cluster grenades.  The loadouts
 * (0x08ADDC64, 8 x 4 slots): rifle + pistol + grenade; the same + shield; chaingun + pistol + 11; incinerator + pistol + cluster;
 * shotgun + pistol; rocket + pistol + grenade; rifle + EMP + grenade; incinerator + pistol + cluster.  0897FA38 draws one per
 * spawn by weight - 0.5, 0.05, 0.05, 0.15, 0.2, 0, 0, 0 (elite, 08979DF4 = 2: 0.3, 0.2, 0.1, 0, 0.2, 0, 0, 0.15); the rocket
 * and EMP loadouts get 0.25 (EMP) when the count at 0x08C2AC24 + 0x08C2AFC4 is above 0, 0.3 each from 3 [assumed: the enemy's
 * vehicles].  Only the weapons are carried here (grenades, shields and items: 2.3). */
static const char *const ai_weapon_name[4][13] = {
    { NULL, NULL, "ALL_Blaster_Rifle", "ALL_Blaster_Pistol", "REP_Chaingun", "ALL_Incinerator", "ALL_Shotgun", "ALL_Rocket_Launcher", "Emp_Launcher" },
    { NULL, NULL, "EMP_Blaster_Rifle", "EMP_Blaster_Pistol", "REP_Chaingun", "ALL_Incinerator", "EMP_Shotgun", "EMP_Rocket_Launcher", "Emp_Launcher" },
    { NULL, NULL, "REP_Blaster_Rifle", "REP_Blaster_Pistol", "REP_Chaingun", "ALL_Incinerator", "REP_shotgun", "REP_Rocket_launcher", "Emp_Launcher" },
    { NULL, NULL, "FED_Blaster_Rifle", "FED_Blaster_Pistol", "REP_Chaingun", "ALL_Incinerator", "FED_Shotgun", "FED_Rocket_Launcher", "Emp_Launcher" } };
static const s8 ai_loadouts[8][4] = { { 2, 3, 9, 0 }, { 2, 3, 9, 10 }, { 4, 3, 11, 0 }, { 5, 3, 12, 0 }, { 6, 3, 0, 0 }, { 7, 3, 9, 0 }, { 2, 8, 9, 0 }, { 5, 3, 12, 0 } };
static void ai_weapons_load(ak_play *p, const ak_blueprints *bp, const ak_model_set *m, int t)
{
    static const int row_of_faction[4] = { 2, 3, 0, 1 };              /* (factions 0 Republic, 1 CIS, 2 Alliance, 3 Empire -> the table's rows) */
    int f = p->team_faction[t]; const char *const *names = ai_weapon_name[f >= 0 && f < 4 ? row_of_faction[f] : 0];
    for (int k = 0; k < 13; k++) {
        /* the table's name is resolved one level further, as for any weapon: a "Faction Specific" weapon gives its first child of the
           side's faction (traced with gdb on the weapon maker 08A16FD8 under the unit maker 08985D74, Boz Pity: Imperial bots asked
           for EMP_Blaster_rifle got BobaFett_Blaster_Rifle (25 a hit), Rebel bots' ALL_Blaster_Pistol became Ackbar_Blaster_Pistol;
           the player's customisation asks for BlasterRifle and so gets EMP_Blaster_Rifle) */
        p->ai_armed[t][k] = k < 9 && names[k] && ak_weapon_def_load(bp, m, names[k], f, &p->ai_wdef[t][k]);
        if (!p->ai_armed[t][k]) continue;
        ak_weapon_def *d = &p->ai_wdef[t][k];                        /* in a bot's hands: the game's bot modifiers */
        f32 md = ak_bp_float(d->bp, "Modifier_Bot_Damage", 1);
        if (!ak_setting_int("AK_BOT_GAME_MODIFIERS", 1)) md = 1;
        d->bot_dmg = md; d->ai = true;
    }
    {   char line[160] = ""; for (int k = 2; k < 9; k++) if (p->ai_armed[t][k]) { strncat(line, " ", sizeof line - strlen(line) - 1); strncat(line, p->ai_wdef[t][k].name, sizeof line - strlen(line) - 1); }
        AK_INFO("play", "side %d AI weapons:%s", t, line); }
}
static int ai_loadout_pick(ak_play *p, int team, u32 *seed)
{
    f32 w[8] = { 0.5f, 0.05f, 0.05f, 0.15f, 0.2f, 0, 0, 0 };
    if (p->difficulty >= 2) { f32 e[8] = { 0.3f, 0.2f, 0.1f, 0, 0.2f, 0, 0, 0.15f }; memcpy(w, e, sizeof w); }
    u32 nveh = 0; for (u32 i = 0; i < p->nveh; i++) if (p->veh[i].alive && p->veh[i].team == 1 - team) nveh++;
    if (nveh > 0) w[6] = 0.25f;
    if (nveh >= 3) w[5] = w[6] = 0.3f;
    f32 sum = 0; for (int k = 0; k < 8; k++) sum += w[k];
    f32 r = rnd(seed) * sum, acc = 0;
    for (int k = 0; k < 8; k++) { acc += w[k]; if (r < acc && w[k] > 0) return k; }
    return 0;
}
/* the weapon to fire at a target (0893F65C): at a soldier the incinerator within 8.5 m, the shotgun within 12.5 m, then the
 * chaingun, the rifle, the pistol; at a vehicle the rocket launcher, the EMP launcher, then the chaingun, the rifle, the
 * incinerator within 8.5 m, the pistol */
static int ai_weapon_choice(const ak_play *p, const ak_play_bot *b, bool vehicle, f32 d)
{
    const s8 *lo = ai_loadouts[b->loadout & 7]; bool has[13] = { false };
    for (int k = 0; k < 4; k++) if (lo[k] > 0 && lo[k] < 13 && p->ai_armed[b->team][lo[k]]) has[lo[k]] = true;
    static const s8 vs_soldier[] = { 4, 2, 3 }, vs_vehicle[] = { 7, 8, 4, 2 };
    if (!vehicle) {
        if (has[5] && d < 8.5f) return 5;
        if (has[6] && d < 12.5f) return 6;
        for (u32 k = 0; k < sizeof vs_soldier; k++) if (has[vs_soldier[k]]) return vs_soldier[k];
    } else {
        for (u32 k = 0; k < sizeof vs_vehicle; k++) if (has[vs_vehicle[k]]) return vs_vehicle[k];
        if (has[5] && d < 8.5f) return 5;
        if (has[3]) return 3;
    }
    for (int k = 0; k < 4; k++) if (lo[k] > 1 && lo[k] < 9 && has[lo[k]]) return lo[k];
    return -1;
}
static void ai_hold(ak_play *p, ak_play_bot *b, u32 idx, int slot)
{
    if (slot < 0 || slot == b->held || !p->ai_armed[b->team][slot]) return;
    ak_weapon_give(&b->weapon, &p->ai_wdef[b->team][slot]); b->weapon.team = b->team; b->weapon.owner = (s32)(1 + idx); b->held = (s8)slot;
}

static f32 game_roll(ak_play *p);
static void bot_spawn(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 idx)
{
    f32 pos[3], yaw = 0;
    /* the post (0898383C): the soldier's spawner's post (+0x68), else the team spawn manager's draw (0898B9F4).  Read live on Hoth
       (harness RS_DRIVE_SPAWNERS): the player's side's spawners take the player's spawn post (the player spawner 0x3E8's, 187EC)
       when their soldier comes in, the other side's keep 999 and draw [assumed: the draw's weights are not ported - a random
       owned post, or the nearest to the bot half the time]. */
    bool mine = b->team == p->team && p->player_post >= 0 && (u32)p->player_post < p->cq.nposts && p->match.post[p->player_post].owner == p->team &&
                ak_setting_int("AK_BOT_SPAWN_NEAR_PLAYER", 1);
    if (b->pilot && b->pilot_v >= 0) { memcpy(pos, p->veh[b->pilot_v].pos, 12); goto placed; }   /* (a pilot: straight into its craft) */
    if (b->uspawn >= 0 && (u32)b->uspawn < p->nuspawn) {                  /* a scripted spawner's soldier: at the spawner */
        memcpy(pos, p->uspawn[b->uspawn].pos, 12); yaw = p->uspawn[b->uspawn].yaw;
        f32 gy; if (ak_char_ground_below(&p->col, pos, 5.0f, &gy)) pos[1] = gy;
        goto placed;
    }
    const f32 *at = mine ? p->cq.post[p->player_post].pos : b->ch.pos; bool exact = mine;
    if (p->have_cq && !mine && ak_setting_int("AK_BOT_SPAWN_WEIGHTS", 1)) {   /* the manager's draw (0898B9F4: random x total, walking the weights) */
        f32 w[AK_MAX_POSTS], tot = ak_conquest_spawn_weights(&p->cq, &p->match, b->team, p->alive ? p->ch.pos : NULL, w);
        if (tot > 0) { f32 r = rnd(&b->seed) * tot; for (u32 i = 0; i < p->cq.nposts; i++) { if (w[i] <= 0) continue; r -= w[i]; if (r <= 0) { at = p->cq.post[i].pos; exact = true; break; } } }
    }   /* (a total of 0: the spawner gets no post - Aurek takes a random owned one [assumed]) */
    if (!(p->have_cq && spawn_spot_at(p, b->team, at, exact, &b->seed, pos, &yaw))) {
        /* no post to spawn at: a navigation node near the player's start */
        if (!p->have_nav || !p->nav.nnode) return;
        u32 n = (u32)(rnd(&b->seed) * p->nav.nnode) % p->nav.nnode; memcpy(pos, p->nav.node[n].pos, 12);
        f32 gy; if (ak_char_ground_below(&p->col, pos, 5.0f, &gy)) pos[1] = gy;
    }
placed:
    if (b->hero) { b->look = b->base_look; b->hero = false; }               /* a fallen hero comes back as its soldier */
    if (ak_setting_int("AK_DEBUG_SPAWN", 0)) AK_INFO("spawn", "%.1f s: bot %d (team %d) at %.0f %.0f %.0f (game axes %.0f %.0f %.0f)", p->clock, (int)(b - p->bot), b->team, pos[0], pos[1], pos[2], pos[0], -pos[1], -pos[2]);
    ak_char_spawn(&b->ch, pos, yaw);
    AK_VERBOSE("bot", "bot %u (team %d) spawns at %.1f %.1f %.1f", idx, b->team, pos[0], pos[1], pos[2]);
    b->alive = true; b->dead_t = 0; b->state = PLAY_IDLE; b->clip_t = rnd(&b->seed); b->land_t = 0; b->was_ground = true; b->idle_var = -1; b->idle_t = (rnd(&b->seed) + 0.5f) * 2.5f;
    b->rt_i = 0; b->rt_q = 0; b->rt_wait = -1; b->rt_on = b->uspawn >= 0 && (u32)b->uspawn < p->nuspawn && p->uspawn[b->uspawn].route;
    b->goal = -1; b->link_goal = -1; b->raider = false; b->ctf_role = -1; b->npath = b->path_i = 0; b->holding = false; b->enemy = -1; b->fenemy = -1; b->nmem = 0; b->sense_dt = 0; b->think_t = rnd(&b->seed) * 0.3f; b->goal_t = 0;
    b->stuck_t = 0; memcpy(b->stuck_pos, pos, 12); b->veh = b->want_veh = -1; b->rev_t = 0; b->vstucks = 0; b->veh_cool = 0;
    b->wants_veh = p->bot_drive > 0 && rnd(&b->seed) < p->bot_drive;   /* the spawner's chance (089800C8: random % 100 < +0xEC, 100 by default - 0897E594) */
    ak_target *t = &p->target[1 + idx];
    /* an AI soldier's health (089826E8 then 089832B8): its blueprint's "Health" (100 when it has none) x a multiplier from the
       table D_08ADDD84 { 0.6, 1.0, 1.3, 1.6, 2.0 } - entry 0, unless the difficulty (08979DF4) is 2 (elite): then a draw on the
       game's random over the weights D_08ADDDAC { 0, 5, 2, 0.5, 0.15 } (1.0 65 %, 1.3 26 %, 1.6 6.5 %, 2.0 2 %); difficulty 1's
       weights D_08ADDD98 are { 1, 0, 0, 0, 0 } - the 60 measured */
    {   static const f32 mul[5] = { 0.6f, 1.0f, 1.3f, 1.6f, 2.0f }, wel[5] = { 0, 5, 2, 0.5f, 0.15f };
        int k = 0;
        if (p->difficulty >= 2) { f32 r = game_roll(p) * 0.01f * 7.65f, acc = 0; for (k = 0; k < 4; k++) { acc += wel[k]; if (r < acc) break; } }
        /* a scripted spawner's unit keeps its blueprint's Health (measured, om_h5: Chewbacca came in with 600, his blueprint's, while
           the army's soldiers had 60) [assumed: for all scripted units] */
        t->health = t->max_health = ak_bp_float(b->look.bp, "Health", 100.0f) * (b->uspawn >= 0 ? 1.0f : mul[k]); }
    t->headshot_mult = ak_bp_float(b->look.bp, "Headshot multiplier", 4.0f);
    t->alive = true; t->team = b->team; t->last_attacker = -1;
    b->held = -1;
    b->fire_pause = 2.0f; b->fire_fired = false; b->fire_shots = 0; b->fire_hold = 0;   /* a new fire node (08934D24: 2.0 s) */
    if (ak_setting_int("AK_BOT_LOADOUTS", 1) && p->ai_armed[b->team][2]) {   /* the game's AI loadouts: its first weapon in hand */
        b->loadout = (s8)ai_loadout_pick(p, b->team, &b->seed);
        int first = ai_weapon_choice(p, b, false, 50.0f); ai_hold(p, b, idx, first);
    }
    {   /* its explosive this life: the loadout's thermal detonator (slot 9) or cluster grenades (slot 12) [the other explosive
           slots, 10 Personal_Shield and 11, are not thrown] */
        b->gren_kind = -1; b->gren_t = -1; b->gren_cool = 0; b->gren_left = 0;
        if (b->held >= 0) { const s8 *lo = ai_loadouts[b->loadout & 7];
            for (int k = 0; k < 4; k++) { int kind = lo[k] == 9 ? 0 : lo[k] == 12 ? 1 : -1; if (kind >= 0 && p->ai_gren_ok[kind]) { b->gren_kind = (s8)kind; b->gren_left = p->ai_gren_ammo[kind]; } } }
    }
    if (b->held < 0 && p->team_armed[b->team]) { ak_weapon_give(&b->weapon, &p->team_bdef[b->team]); b->weapon.team = b->team; b->weapon.owner = (s32)(1 + idx); }
    if (poseable(m, &b->look)) { pose(m, &b->look, p->idle_clip, b->clip_t, true, b->bones); body_target(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, t, b->weapon.def ? b->weapon.def->model : -1); }
}

/* the classes a side fields: its faction's Humanoid units (no heroes) that this level has a body for */
static void team_classes(ak_play *p, const ak_blueprints *bp, const ak_model_set *m, int team)
{
    const ak_bp_type *t = ak_bp_find_type(bp, "Humanoid"); ak_soldier_look tmp;
    p->nklass[team] = 0;
    for (u32 i = 0; t && i < t->nobjects && p->nklass[team] < PLAY_MAX_CLASSES; i++) {
        const ak_bp_object *o = &t->objects[i];
        if (ak_bp_int(o, "Faction", -1) != p->team_faction[team] || ak_bp_int(o, "Hero", 0) || !*ak_bp_string(o, "Head 1", "")) continue;
        if (ak_soldier_look_make(bp, m, o->name, 0, -1, -1, &tmp)) p->klass[team][p->nklass[team]++] = o->name;
    }
}

static void anim_sets(ak_play *p, const ak_model_set *m);
/* the player's loadout from the settings the customisation menu sets (AK_WEAPON, AK_EXPLOSIVE, AK_HEALTH_LEVEL, AK_SPEED_LEVEL,
   AK_CAPTURE_LEVEL): at the start and again before a respawn (ak_play_loadout) */
static void loadout_levels(ak_play *p)
{
    static const f32 hl[4] = { 100, 133, 166, 200 }, sl[4] = { 0.85f, 1.0f, 1.15f, 1.3f }, cl[4] = { 0.5f, 1.0f, 1.5f, 2.0f };
    int h = ak_setting_int("AK_HEALTH_LEVEL", 1), sp = ak_setting_int("AK_SPEED_LEVEL", 1), cr = ak_setting_int("AK_CAPTURE_LEVEL", 1);
    h = h < 0 ? 0 : h > 3 ? 3 : h; sp = sp < 0 ? 0 : sp > 3 ? 3 : sp; cr = cr < 0 ? 0 : cr > 3 ? 3 : cr;
    p->max_health = p->health = ak_bp_float(p->look.bp, "Health", hl[h]); p->speed_scale = sl[sp]; p->capture_rate = cl[cr];
}
static void loadout_items(ak_play *p, const ak_model_set *m, const ak_blueprints *bp)
{
    {   /* the explosive slot (default: the thermal detonator, Weapon REP_Grenade: AmmoPerClip 4, MaxClips 0, RateOfFire 2) */
        const char *en = ak_setting_str("AK_EXPLOSIVE", "REP_Grenade");
        const ak_bp_object *gw = en[0] ? ak_bp_find(bp, "Weapon", en) : NULL;
        p->gren_ok = gw && ak_proj_def_load(bp, ak_bp_string(gw, "Projectile", "Grenade"), &p->gren_def);
        p->gren_left = p->gren_max = gw ? ak_bp_int(gw, "AmmoPerClip", 4) : 0; p->det_t = -1; p->gren_t = -1; p->gren_cool = 0;
        p->gren_rate = gw ? ak_bp_float(gw, "RateOfFire", 2.0f) : 2.0f;
        {   /* the throw's speeds are the Projectile blueprint's (Grenade 10 / 2.5, Cluster_Grenade 10 / 3.5: the values the harness
               logged; the Weapon's own ProjectileSpeed, Cluster_Grenades' 20, is not used for it); the loader's defaults 10 / 0 */
            const ak_bp_object *pj = gw ? ak_bp_find(bp, "Projectile", ak_bp_string(gw, "Projectile", "Grenade")) : NULL;
            p->gren_ps = pj ? ak_bp_float(pj, "ProjectileSpeed", 10.0f) : 10.0f; p->gren_vts = pj ? ak_bp_float(pj, "VerticalThrowSpeed", 0.0f) : 0.0f; } p->gren_icon = gw ? ak_bp_string(gw, "HUDIcon", NULL) : NULL; p->gren_name = gw ? ak_bp_int(gw, "Weapon_Name", -1) : -1;
        p->gren_limit = gw ? ak_bp_int(gw, "GlobalAmmoLimit", 0) : 0; }
    {   /* the power-up (customisation: AK_POWERUP, a Weapon of class PowerUps) */
        static const char *const kn[4] = { "Rage", "Rally", "Regenerate", "Stamina" };
        const char *pn = ak_setting_str("AK_POWERUP", ""); p->pu_kind = -1; p->pu_icon = NULL; p->pu_name = -1;
        for (int k = 0; k < 4; k++) if (pn[0] && !strcmp(pn, kn[k])) p->pu_kind = (s8)k;
        const ak_bp_object *pw = p->pu_kind >= 0 ? ak_bp_find(bp, "Weapon", pn) : NULL;
        if (!pw) p->pu_kind = -1;
        else { p->pu_icon = ak_bp_string(pw, "HUDIcon", NULL); p->pu_name = ak_bp_int(pw, "Weapon_Name", -1); p->pu_recup = ak_bp_float(pw, "RecuperationTime", 60.0f); }
        p->pu_cool = 0; p->pu_t = -1; p->pu_sel = false; }
    {   /* the special item: the jetpack (AK_SPECIAL = Jetpack).  The loader 089A0FA0 reads the Weapon blueprint Jetpack into globals
           (0x08C2A788 ..): HORIZ_ACCEL (x 8 x 0.8 after: the loader's f20 / 0x08AEE95C), HORIZ_DRAG, HORIZ_SPEED (x 0.8), WOBBLE_AMPLITUDE /
           FREQ, TURNRATE, FUELDRAINRATE, FUELCOSTTOSTART, ENGINEROAR, VERT_UP_DRAG, VERT_DOWN_DRAG, VERT_SPEED, VERT_ACCEL (x 8) */
        const char *sn = ak_setting_str("AK_SPECIAL", ""); const ak_bp_object *jw = sn[0] ? ak_bp_find(bp, "Weapon", sn) : NULL;
        p->jet_ok = jw && ak_bp_is(jw, "Jetpack"); p->jet_on = false;
        if (p->jet_ok) {
            p->jet_hacc = ak_bp_float(jw, "HORIZ_ACCEL", 1.0f) * 8.0f * 0.8f; p->jet_hdrag = ak_bp_float(jw, "HORIZ_DRAG", 16.0f);
            p->jet_hspeed = ak_bp_float(jw, "HORIZ_SPEED", 10.0f) * 0.8f; p->jet_vspeed = ak_bp_float(jw, "VERT_SPEED", 8.0f);
            p->jet_vacc = ak_bp_float(jw, "VERT_ACCEL", 2.0f) * 8.0f; p->jet_updrag = ak_bp_float(jw, "VERT_UP_DRAG", 20.0f);
            p->jet_downdrag = ak_bp_float(jw, "VERT_DOWN_DRAG", 10.0f); p->jet_drain = ak_bp_float(jw, "FUELDRAINRATE", 15.0f);
            p->jet_start = ak_bp_float(jw, "FUELCOSTTOSTART", 15.0f); p->jet_wob_a = ak_bp_float(jw, "WOBBLE_AMPLITUDE", 0.2f);
            p->jet_wob_f = ak_bp_float(jw, "WOBBLE_FREQ", 0.5f); p->jet_fuel = 100.0f;
            p->jet_fx = p->pfx ? ak_pfx_find(&p->pfx_lib, ak_bp_string(jw, "PFXEffect", "BFF_Jetpack_Thrust_E")) : -1;
        } }
    const char *wname = ak_setting_str("AK_WEAPON", "BlasterRifle");
    p->armed = wname[0] && ak_weapon_def_load(bp, m, wname, p->look.faction, &p->wdef);
    if (p->armed) { ak_weapon_give(&p->weapon, &p->wdef); p->weapon.team = p->team; p->weapon.owner = 0; p->weapon.heats = true; }
    const char *w2 = ak_setting_str("AK_WEAPON2", "BlasterPistol");           /* weapon 2 (the menu's second slot; "" none): the Blaster
                                                                                 Pistol (cost 0, the list's first) unless chosen - the
                                                                                 original's campaign soldier had it (harness ct22) */
    p->armed2 = w2[0] && ak_weapon_def_load(bp, m, w2, p->look.faction, &p->wdef2); p->wsel = 0;
    if (p->armed2) { ak_weapon_give(&p->weapon2, &p->wdef2); p->weapon2.team = p->team; p->weapon2.owner = 0; p->weapon2.heats = true; }
    if (w2[0] && !p->armed2) AK_WARN("play", "weapon 2 '%s': no such weapon", w2);
}
/* a repair tool in the hands: its Projectile blueprint when that has RepairVehicle (the Fusion Cutter) */
static const ak_bp_object *repair_tool(const ak_play *p)
{
    if (!p->armed || !p->wdef.bp || !p->bps) return NULL;
    const ak_bp_object *pj = ak_bp_find(p->bps, "Projectile", ak_bp_string(p->wdef.bp, "Projectile", ""));
    return pj && ak_bp_float(pj, "RepairVehicle", 0) > 0 ? pj : NULL;
}
/* weapon 1 <-> weapon 2 (both kept with their ammunition) */
static void weapon_switch(ak_play *p)
{
    if (!p->armed2) return;
    AK_VERBOSE("player", "weapon switch");
    ak_weapon_def d = p->wdef; ak_weapon w = p->weapon; bool a = p->armed;
    p->wdef = p->wdef2; p->weapon = p->weapon2; p->armed = p->armed2;
    p->wdef2 = d; p->weapon2 = w; p->armed2 = a; p->wsel ^= 1;
    p->weapon.def = &p->wdef; p->weapon2.def = &p->wdef2;                   /* (each weapon points at its own def's storage) */
    if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("play", "weapon %d: %s", p->wsel + 1, p->armed ? p->wdef.name : "-");
}
/* the weapon in the player's hands is this blueprint (the script's items: kind 4 0xDA0CAE3B "Fusion Cutter", 5 0x87D168AB
   "Rocket_Launcher", 6 0xDF19A556 "ALL_Sniper_Rifle" - 08A0E228 asks the soldier's inventory (+236) for its current weapon (+128)
   and compares the name's hash, 08985AC8) */
static bool def_is(const ak_weapon_def *d, u32 hash)   /* (its name, or its parent's for a faction's version [assumed: either]) */
{
    const ak_bp_object *o = d->bp; if (!o) return false;
    return ak_hash31(o->name) == hash || (o->parent && ak_hash31(o->parent->name) == hash);
}
static bool holding(const ak_play *p, u32 hash) { return p->alive && p->armed && def_is(&p->wdef, hash); }
/* carried in either slot: kinds 4 / 5 / 6 passed the moment the item was taken in the menu, before it was in the hands (harness:
   Yavin's 18c2b (cutter) fired before d-pad left, 18c2c (rocket launcher) with the cutter still held - ct24 / ct30); 0x11 waits
   for it in the hands (18d18 fired after the switch) */
static bool carrying(const ak_play *p, u32 hash) { return p->alive && ((p->armed && def_is(&p->wdef, hash)) || (p->armed2 && def_is(&p->wdef2, hash))); }
void ak_play_loadout(ak_play *p, const ak_model_set *m, const ak_blueprints *bp)
{
    int held = p->wsel;
    loadout_levels(p); loadout_items(p, m, bp);
    if (held && p->armed2) weapon_switch(p);   /* (the slot in the hands stays: the original's soldier kept the fusion cutter in hand after
                                                  taking the rocket launcher as weapon 1 at the post, ct30) */
    p->base_wdef = p->wdef; p->base_armed = p->armed; p->base_max_health = p->max_health;   /* (what the soldier goes back to after a hero) */
    AK_INFO("play", "loadout: %s (%s), explosive %s, health %.0f, speed x%.2f, capture %.1f", p->armed ? p->wdef.name : "unarmed",
            p->armed && p->wdef.model >= 0 ? "model" : "no model", p->gren_ok ? "yes" : "none", p->max_health, p->speed_scale, p->capture_rate);
    p->target[0].health = p->health; p->target[0].max_health = p->max_health;
    anim_sets(p, m);
}

bool ak_play_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a, const char *body, const f32 *start)
{
    memset(p, 0, sizeof *p); p->bps = bp; p->rep_turret = -1;
    if (!ak_collision_load(l, a, &p->col)) return false;
    p->have_nav = ak_nav_load(l, a, &p->nav);
    ak_char_params_load(bp, &p->cp);
    S = p->scale = ak_setting_float("AK_SOLDIER_SCALE", 1.0f);
    p->cp.radius *= S; p->cp.height *= S; p->cp.step *= S;
    if (!ak_soldier_look_make(bp, m, body, ak_setting_int("AK_HEAD", 0), ak_setting_int("AK_COLOUR1", -1), ak_setting_int("AK_COLOUR2", -1), &p->look)) {
        /* this level has no such body: the first Humanoid blueprint that has one */
        const ak_bp_type *t = ak_bp_find_type(bp, "Humanoid"); bool ok = false;
        for (u32 i = 0; t && i < t->nobjects && !ok; i++)
            if (*ak_bp_string(&t->objects[i], "Head 1", "") && !ak_bp_int(&t->objects[i], "Hero", 0))
                ok = ak_soldier_look_make(bp, m, t->objects[i].name, 0, -1, -1, &p->look);
        if (!ok) return false;
    }
    p->seed = 12345;
    p->grng[0] = 0x2545F491u; p->grng[1] = 0x9E3779B9u;   /* [assumed] the game's seed is not traced */
    {   /* particle effects (R.6): the level's FXET / FXST / FXPT, drawn from its \specialfx\partclfx.tga sheet */
        p->pfx_on = ak_setting_int("AK_PFX", 1) != 0;
        p->pfx_tex_index = ak_level_find_texture(l, "\\specialfx\\partclfx.tga");
        if (p->pfx_tex_index < 0) p->pfx_tex_index = ak_level_find_texture(l, "\\graphics\\specialfx\\partclfx.tga");
        if (p->pfx_on && ak_pfx_lib_load((const ak_blob *)&l->file, a, &p->pfx_lib)) { p->pfx = AK_NEW(a, ak_pfx_world, 1); if (p->pfx) { ak_pfx_world_init(p->pfx, &p->pfx_lib); f32 cs = ak_setting_float("AK_COLOUR_SCALE", 2.0f); p->pfx->colour_k = 255.0f / (cs > 0.1f ? cs : 1.0f); } }
        AK_INFO("play", "pfx: %u effects, %u systems, %u particle types, sheet %d", p->pfx_lib.nfx, p->pfx_lib.nsys, p->pfx_lib.ntype, p->pfx_tex_index);
    }
    if (ak_setting_int("AK_LOG_POSTS", 0)) for (u32 k = 0; k < p->cq.nposts; k++) AK_INFO("play", "post %u at %.2f %.2f %.2f (game %.2f %.2f %.2f)", k, p->cq.post[k].pos[0], p->cq.post[k].pos[1], p->cq.post[k].pos[2], p->cq.post[k].pos[0], -p->cq.post[k].pos[1], -p->cq.post[k].pos[2]);
    {   /* the pickups (Projectile Health / Ammo / Stamina / HealthAmmo <- Pickup; the ids 1000..1003 of 089F8FAC) */
        static const char *pk[4] = { "Health", "Ammo", "Stamina", "HealthAmmo" };
        for (int k = 0; k < 4; k++) {
            __typeof__(p->pickup_def[0]) *d = &p->pickup_def[k];
            d->bp = ak_bp_find(bp, "Projectile", pk[k]); if (!d->bp) continue;
            d->cap = ak_bp_float(d->bp, "Capacity", 50); d->cap2 = ak_bp_float(d->bp, "SecondaryCapacity", 0);
            d->radius = ak_bp_float(d->bp, "EffectiveRadius", 2); d->delay = ak_bp_float(d->bp, "InitialDelay", 0.1f);
            d->timer = ak_bp_float(d->bp, "Timer", 10); d->fade = ak_bp_float(d->bp, "FadeTime", 0.75f);
            d->pfx = ak_bp_string(d->bp, "PFXEffect", NULL); if (d->pfx && !*d->pfx) d->pfx = NULL;
            d->sfx = ak_bp_string(d->bp, "SFXEffect", NULL);
            const char *sk = ak_bp_string(d->bp, "Skin", ""), *sl = strrchr(sk, '\\'); char nm[64]; snprintf(nm, sizeof nm, "%s", sl ? sl + 1 : sk);
            char *dot = strrchr(nm, '.'); if (dot) *dot = 0;
            d->model = nm[0] ? ak_models_find(m, nm) : -1;
        }
    }
    {   /* the mode (PARITY 5.4): AK_MODE = 0..5 or its code (CQST, CTF1, CTF2, HCTF, GTAG, CMPN; table 0x08B1B900) */
        static const char *codes[6] = { "CQST", "CTF1", "CTF2", "HCTF", "GTAG", "CMPN" };
        const char *ms = ak_setting_str("AK_MODE", "CQST"); ak_game_mode = 0;
        for (int k = 0; k < 6; k++) {
            bool eq = true; for (int j = 0; j < 5 && eq; j++) eq = (ms[j] & ~0x20) == (codes[k][j] & ~0x20) || (!ms[j] && !codes[k][j]);
            if (eq || (ms[0] == '0' + k && !ms[1])) ak_game_mode = k;
        }
    }
    p->have_cq = ak_conquest_load(l, &p->cq);
    if (p->have_cq && p->have_nav && ak_setting_int("AK_DEBUG_POSTS", 0))       /* (tests: how far each post is from the navigation graph) */
        for (u32 k = 0; k < p->cq.nposts; k++) { s32 n = ak_nav_nearest(&p->nav, p->cq.post[k].pos, 200.0f);
            if (n >= 0) { const f32 *q = p->nav.node[n].pos, *c = p->cq.post[k].pos; AK_INFO("conquest", "post %u: nearest node %d %.1f m (radius %.1f)", k, n, sqrtf((q[0]-c[0])*(q[0]-c[0]) + (q[2]-c[2])*(q[2]-c[2])), p->nav.node[n].radius); } }
    p->difficulty = ak_setting_int("AK_DIFFICULTY", 1);                          /* 0 easy, 1 normal, 2 elite (the game's 08979DF4) */
    {   const ak_bp_object *wb = ak_bp_find(bp, "Weapon", "Base");               /* elite: an AI's damage to the local player x this too (089E1FDC) */
        p->elite_mul = wb ? ak_bp_float(wb, "Modifier_Bot_Damage_Elite_Global", 1.0f) : 1.0f; }
    p->free_flight = ak_space_load(l, &p->space);                               /* (any space map: flyers may boost) */
    if (ak_setting_int("AK_DEBUG_BOTVEH", 0) && p->space.nobj) { u32 c[2][3] = { { 0 } };   /* (tests: the objectives by team and kind) */
        for (u32 i = 0; i < p->space.nobj; i++) { const ak_space_obj *o = &p->space.obj[i]; if (o->team >= 0 && o->team < 2 && o->kind >= 0 && o->kind < 3) c[o->team][o->kind]++; }
        AK_INFO("botveh", "objectives: team 0 hangar %u run1 %u run2 %u, team 1 hangar %u run1 %u run2 %u", c[0][0], c[0][1], c[0][2], c[1][0], c[1][1], c[1][2]);
        if (ak_setting_int("AK_DEBUG_BOTVEH", 0) > 2) for (u32 i = 0; i < p->space.nobj; i++) { const ak_space_obj *o = &p->space.obj[i];
            AK_INFO("botveh", "objective %x team %d kind %d: game %.0f %.0f %.0f / %.0f %.0f %.0f / %.0f %.0f %.0f", o->id, o->team, o->kind,
                    o->path[0][0], -o->path[0][1], -o->path[0][2], o->path[1][0], -o->path[1][1], -o->path[1][2], o->path[2][0], -o->path[2][1], -o->path[2][2]); } }
    p->is_space = p->free_flight && p->space.nobj > p->space.nhangar;   /* space maps: attack runs on capital ships (Hoth has 2 hangar runs only) */
    for (u32 i = 0; i < AK_MAX_OBJECTIVES; i++) p->obj_unit[i] = -1;
    p->team = ak_setting_int("AK_TEAM", ak_faction_team(p->look.faction) + 1) == 2;
    p->team_faction[p->team] = p->look.faction; p->team_faction[1 - p->team] = p->look.faction ^ 1;
    ak_cq_rules_default(&p->rules);
    if (ak_game_mode == 5) { p->rules.no_bleed = true; p->rules.ticket_mode = false; }   /* the campaign: no ticket bleed or total loss - its end is the script's (the original's
                                                                                             training showed no ticket counts) [assumed: none at all] */
    if (p->have_cq) ak_conquest_start(&p->cq, &p->rules, &p->match);
    p->have_script = ak_script_load(l, ak_game_mode, (u32)ak_setting_int("AK_SEED", 1), a, &p->script);   /* PARITY(5.4) */
    p->nobj = 0;
    {   u32 pos = 8; ak_chunk c;
        while (ak_asura_next(&l->file, &pos, &c) && p->nobj < 48) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 40 || (ak_rd32(c.body + 4) & 0xFFFFu) != 0x8013) continue;
            u32 nw = c.size / 4, cnt = ak_rd32(c.body + 16); if (cnt > 8 || 9 + cnt > nw) continue;
            typeof(p->obj[0]) *o = &p->obj[p->nobj++]; memset(o, 0, sizeof *o); o->id = ak_rd32(c.body);
            o->link = ak_rd32(c.body + 4 * (5 + cnt)); o->text = 9 + cnt < nw ? (ak_rd32(c.body + 4 * (9 + cnt)) >> 5) & 0xFFFu : 0xFFFu;
            /* the text's table: with bit 30 or 31 of the flags word (089F0924: +0x48 / +0x49) a MISSIONOBJECTIVES entry (18c41 0x60
               "Movement training: move into the marker.", 18bbc 0x2 "Secure the temple by capturing the command post."), with neither a
               STDTEXT one (18bc2 0x90 "Equip your soldier with a JETPACK (SPECIAL ITEM) at a command post") [measured: the original's
               objective lines; the reader of those two bytes not traced] */
            o->std = 9 + cnt < nw && !(ak_rd32(c.body + 4 * (9 + cnt)) >> 30);
            for (int k = 0; k < 3; k++) { u32 w = ak_rd32(c.body + 4 * (6 + cnt + k)); memcpy(&o->pos[k], &w, 4); }
            o->nev = ak_script_events(l, o->id, 2, o->ev, 8);
        }
    }
    {   /* the player's moves (traced from the data and checked on the harness, route cmpn): unflagged ENTI type 68 {version, 3, f32
           0.25, f32 0.25, colour 0xFF000000, count 1, the type-69 point's id} and type 69 {version, x, y, z, quaternion x y z w} (game
           axes); the script's 0x53 {0x3E8} to the type 68 puts the player at the point, facing the quaternion's forward - Yavin's
           training starts there (the original's player at -48.29 -7.98 204.25, walking +x / +z).  [assumed: the two floats are a
           fade out / in in black - not drawn] */
        u32 pos = 8; ak_chunk c; p->nwarp = 0;
        while (ak_asura_next(&l->file, &pos, &c) && p->nwarp < 8) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 36 || ak_rd32(c.body + 4) != 68 || ak_rd32(c.body + 28) < 1) continue;
            u32 pt = ak_rd32(c.body + 32), pos2 = 8; ak_chunk d;
            while (ak_asura_next(&l->file, &pos2, &d)) {
                if (ak_chunk_tag(&d) != AK_TAG('E', 'N', 'T', 'I') || d.size < 40 || ak_rd32(d.body) != pt || ak_rd32(d.body + 4) != 69) continue;
                f32 g[7]; memcpy(g, d.body + 12, 28);
                typeof(p->warp[0]) *w = &p->warp[p->nwarp++]; w->id = ak_rd32(c.body); ak_from_game(g, w->pos);
                memcpy(w->fade, c.body + 16, 8);
                f32 fx = 2 * (g[3] * g[5] + g[6] * g[4]), fz = 1 - 2 * (g[3] * g[3] + g[4] * g[4]);   /* the rotation's third column */
                w->yaw = atan2f(-fx, fz); break;
            }
        }
    }
    {   /* cut-scenes (CUTS chunks, version 18): u32, u32, the origin (3 floats, game axes), the name (NUL-ended, padded to 4), 3 words,
           the sound's path (NUL-ended, padded to 4; one zero word in the silent ones), the length (f32 s), the actors and animations, then at the end
           { .., flags, u32 group (0xFFFF none), 0, f32 1.0, 0, 0, 0x20 }.  A named object (ENTI type 3 {version, 0, 0, the name (16+)
           ..}) of the same name plays it on message 3; at its end the group fires (sender 0x3E7).  Checked on the harness (route
           cmpn, RS_FIRE_LOG): Yavin's cs_recondroid (7.0 s, group 30000) started 1 s after the jump step and its group fired 7.0 s
           later.  Measured over all 50 campaign cut-scenes (the path starts 12 bytes after the padded name: 48, 52, 56..). */
        u32 pos = 8; ak_chunk c; p->ncuts = 0; p->nnamed = 0; p->cut = -1;
        while (ak_asura_next(&l->file, &pos, &c)) {
            if (ak_chunk_tag(&c) == AK_TAG('C', 'U', 'T', 'S') && c.size >= 96 && p->ncuts < 16) {
                typeof(p->cuts[0]) *k = &p->cuts[p->ncuts]; memset(k, 0, sizeof *k); k->off = (u32)(c.body - l->file.data); k->size = c.size;
                for (u32 z = 0; z < 47 && 20 + z < c.size && c.body[20 + z]; z++) k->name[z] = (char)c.body[20 + z];   /* (names run to 36 bytes: Tatooine's falcon flying in to the evac point) */ f32 g[3]; memcpy(g, c.body + 8, 12); ak_from_game(g, k->org);
                u32 q = 20;
                while (q < c.size && c.body[q]) q++;
                q = ((q + 4) & ~3u) + 12;                                    /* the name, padded to 4, then 3 words */
                while (q < c.size && c.body[q]) q++;
                q = (q + 4) & ~3u;                                           /* the sound's path, padded to 4 */
                f32 len = 0; if (q + 4 <= c.size) memcpy(&len, c.body + q, 4);
                for (u32 z = 48; z + 4 <= c.size && !k->camera; z++) k->camera = !memcmp(c.body + z, "_cam", 4);   /* [assumed: the view is taken only by those] */
                k->len = len > 0 && len < 600 ? len : 0;
                k->cam_clip = k->cam2_clip = k->act_clip = -1;
                {   /* the scene's animation list, in its order (the events name them by place) */
                    u32 at[6]; k->nanim = 0;
                    for (u32 ci = 0; ci < m->nclips; ci++) {
                        const char *cn = m->clips[ci].name; size_t cl = cn ? strlen(cn) : 0; if (cl < 4) continue;
                        for (u32 z = 96; z + cl < c.size; z++) if (c.body[z - 1] == 0 && !memcmp(c.body + z, cn, cl) && c.body[z + cl] == 0) {
                            if (k->nanim < 6) { u32 j = k->nanim++; while (j > 0 && at[j - 1] > z) { at[j] = at[j - 1]; k->anim[j] = k->anim[j - 1]; j--; } at[j] = z; k->anim[j] = (s32)ci; }
                            break; }
                    }
                }
                for (u32 ci = 0; ci < m->nclips; ci++) {             /* the scene's animations, by name (the level's HCAN clips) */
                    const char *cn = m->clips[ci].name; size_t cl = cn ? strlen(cn) : 0; if (cl < 4) continue;
                    bool in = false; for (u32 z = 96; z + cl < c.size && !in; z++) in = !memcmp(c.body + z, cn, cl) && c.body[z + cl] == 0;
                    if (!in) continue;
                    if (cl > 5 && !strcmp(cn + cl - 5, "_cam2")) k->cam2_clip = (s32)ci;
                    else if (cl > 4 && !strcmp(cn + cl - 4, "_cam")) k->cam_clip = (s32)ci;
                    else if (k->act_clip < 0) k->act_clip = (s32)ci;
                }
                for (u32 z = 96; z + 8 < c.size; z++) if (!memcmp(c.body + z, "Objects\\", 8)) { snprintf(k->model, sizeof k->model, "%s", (const char *)c.body + z); break; }
                if (ak_setting_int("AK_DEBUG_CUT", 0)) {
                    AK_INFO("cut", "%s %.2f s group %d cam %d cam2 %d actor %d model %s org %.2f %.2f %.2f", k->name, len, k->group, k->cam_clip, k->cam2_clip, k->act_clip, k->model, k->org[0], k->org[1], k->org[2]);
                    s32 cc[3] = { k->cam_clip, k->cam2_clip, k->act_clip };
                    for (int w = 0; w < 3; w++) if (cc[w] >= 0) { const ak_anim_clip *ac = &m->clips[cc[w]];
                        AK_INFO("cut", "  clip %s: %u bones %u ch dur %.3f flags %x", ac->name, ac->nbones, ac->nchannels, ac->duration, ac->flags);
                        for (u32 ch = 0; ch < ac->nchannels && ch < 3; ch++) { const ak_anim_channel *an = &ac->chan[ch];
                            for (u32 q = 0; q < an->rot_count; q += (an->rot_count > 6 ? an->rot_count / 6 : 1)) {
                                ak_quat r = ak_clip_rot(ac, an->rot_first + q); const f32 *pp = an->pos_count == an->rot_count ? ac->pos[an->pos_first + q] : an->pos_count ? ac->pos[an->pos_first] : (f32[3]){0,0,0};
                                AK_INFO("cut", "    ch %u key %u t %.3f q %.3f %.3f %.3f %.3f pos %.2f %.2f %.2f", ch, q, ac->rtime[an->rot_first + q] / 65535.0f * ac->duration, r.x, r.y, r.z, r.w, pp[0], pp[1], pp[2]); } } }
                } k->group = (s32)(ak_rd32(c.body + c.size - 24) & 0xFFFFu); if (k->group == 0xFFFF) k->group = -1;
                p->ncuts++;
            }
        }
        /* the scene's frame: the CTTR chunk named like the scene without "cs_" (version 7: u32 1, u32 7, u32 1, the name (12 bytes),
           the place (3 floats, game axes), 4 floats, the turn (quaternion x y z w, game axes)).  Checked against the original's
           view matrices (RS_VIEW_LOG) through cs_recondroid: the camera = this frame applied to the '_cam' clip's single channel
           (place and turn, the camera looking down its -z), within 0.01 m [measured] */
        for (u32 k = 0; k < p->ncuts; k++) { typeof(p->cuts[0]) *cu = &p->cuts[k];
            memcpy(cu->sp, cu->org, 12); cu->sq = (ak_quat){ 0, 0, 0, 1 }; cu->act_model = -1;
            if (cu->model[0]) { char bn[64]; const char *b = strrchr(cu->model, '\\'); snprintf(bn, sizeof bn, "%s", b ? b + 1 : cu->model);
                char *dot = strrchr(bn, '.'); if (dot) *dot = 0; cu->act_model = ak_models_find(m, bn); }
            /* the chunks after the CUTS, up to the next CUTS: CTAC actors (version 16: u32 kind - 0 a camera, 1 its target, 2 an
               object -, u32, the name (12 bytes), the entity id, 0x3E7 / 0x3E8, ..; a camera's width at word 9: 0.8727 rad, the
               original's projection 50 degrees across [measured]), each followed by its CTTR track (one key: the place, the time,
               3 words, the turn), CTEV events (version 12: u32 type, f32 time, the actor's name (12 bytes), .., word 11 / 12 / 13:
               type 0 plays the list's clip word 13 on the actor; type 2 turns the camera's width to word 12 degrees over word 11
               seconds - 50 to 25 over 3.0 s, straight in degrees [measured]; type 4 fires word 9's group at its time (sender 0x3E7,
               like the end's): Space Kessel's ackbar_arrive_in_laat has no end group, its 30000 is a type 4 at 14.3 s of 14.33 - the
               campaign's scenes hold 0-21 of them, besides the end group [measured in the data; the clock assumed the end's];
               type 10 not known) */
            cu->hfov = 0.8727f; cu->nev = 0; cu->ngev = 0;
            u32 pq = cu->off + cu->size;                                       /* (the next chunk) */
            int kind = -1; ak_chunk d;
            while (ak_asura_next(&l->file, &pq, &d)) {
                u32 tg = ak_chunk_tag(&d);
                if (tg == AK_TAG('C', 'U', 'T', 'S')) break;
                if (tg == AK_TAG('C', 'T', 'A', 'C') && d.size >= 36) { kind = (int)ak_rd32(d.body); if (kind == 0 && d.size >= 40) cu->hfov = ak_rdf32(d.body + 36); }
                else if (tg == AK_TAG('C', 'T', 'T', 'R') && d.size >= 32) {
                    /* a track (version 7): u32 n, 7, n, the name (NUL-ended, padded to 4), n places (game axes), n times (the scene's
                       clock: Camera 0 0 / 1.2 / 2.4, then cam_trooper_run_to_cover 2.4, cam_last 6.767 / 10.0 - an actor's tracks follow
                       on in time), n + 2 words (the last a flags word), n quaternions (x y z w, game axes) */
                    u32 n = ak_rd32(d.body), o = 12; while (o < d.size && d.body[o]) o++; o = (o + 4) & ~3u;
                    if (n < 1 || n > 8 || o + 16 * n + 4 * (n + 2) + 16 * n > d.size) continue;
                    u32 qo = o + 16 * n + 4 * (n + 2);
                    if (kind == 0 && cu->nctr < 4) {
                        typeof(cu->ctr[0]) *t = &cu->ctr[cu->nctr++]; t->n = n;
                        for (u32 k = 0; k < n; k++) { f32 g[3], q[4]; memcpy(g, d.body + o + 12 * k, 12); ak_from_game(g, t->pos[k]); t->t[k] = ak_rdf32(d.body + o + 12 * n + 4 * k);
                            memcpy(q, d.body + qo + 16 * k, 16); t->q[k] = (ak_quat){ q[0], -q[1], -q[2], q[3] }; }
                    }
                    if (n == 1 && (kind == 0 || kind == 2)) {                 /* (one key: the scene's frame for its clips [assumed: one frame]) */
                        f32 g[3], q[4]; memcpy(g, d.body + o, 12); memcpy(q, d.body + qo, 16);
                        ak_from_game(g, cu->sp); cu->sq = (ak_quat){ q[0], -q[1], -q[2], q[3] };
                    }
                    if (kind == 0) cu->camera = true;
                }
                else if (tg == AK_TAG('C', 'T', 'E', 'V') && d.size >= 40 && ak_rd32(d.body) == 4) {   /* type 4: fire word 9's group (0xFFFF none) */
                    u32 g = ak_rd32(d.body + 36) & 0xFFFFu; f32 t = ak_rdf32(d.body + 4);
                    if (g != 0xFFFF && cu->ngev < 32) { u32 j = cu->ngev++; while (j > 0 && cu->gev[j - 1].t > t) { cu->gev[j] = cu->gev[j - 1]; j--; } cu->gev[j].t = t; cu->gev[j].g = (s32)g; }
                }
                else if (tg == AK_TAG('C', 'T', 'E', 'V') && d.size >= 52 && cu->nev < 8) {
                    typeof(cu->ev[0]) *e = &cu->ev[cu->nev++]; e->type = (u8)ak_rd32(d.body); e->t = ak_rdf32(d.body + 4);
                    e->cam = !strncmp((const char *)d.body + 8, "Camera", 6); e->a = ak_rdf32(d.body + 44); e->b = d.size >= 52 ? ak_rdf32(d.body + 48) : 0;
                    e->anim = d.size >= 56 ? (u8)ak_rd32(d.body + 52) : 0;
                }
            }
            if (cu->len == 0 && cu->ngev) cu->len = cu->gev[cu->ngev - 1].t;   /* [assumed: a scene of length 0 (Boz Pity's Laat coming in, 8.5 s of groups) runs to its last group] */
            if (ak_setting_int("AK_DEBUG_CUT", 0)) AK_INFO("cut", "%s %u timed groups; frame %.2f %.2f %.2f q %.4f %.4f %.4f %.4f actor model %d (%s %u parts)", cu->name, cu->ngev, cu->sp[0], cu->sp[1], cu->sp[2], cu->sq.x, cu->sq.y, cu->sq.z, cu->sq.w, cu->act_model, cu->act_model >= 0 ? m->models[cu->act_model].name : "-", cu->act_model >= 0 ? m->models[cu->act_model].nparts : 0);
        }
        p->mset = m;
        {   /* effect places (unflagged ENTI type 33, version 9: 0, 0, the place (3 floats, game axes), a packed word, the effect's
               name hash (h31 of e.g. "BFF_Location_marker_E" - the training's yellow ring with the chevron over it), a second place
               1 m above, the direction (0, -1, 0), ..): the script's 3 starts the effect, 2 stops it - Yavin's 18bd1 gets 3 when the
               training starts and 2 when its marker is reached (the original's ring went then).  [assumed: off until told; 4 also
               stops it] */
            u32 q = 8; ak_chunk d; p->nsfx = 0;
            while (p->pfx && ak_asura_next(&l->file, &q, &d) && p->nsfx < 48) {
                if (ak_chunk_tag(&d) != AK_TAG('E', 'N', 'T', 'I') || d.size < 64 || ak_rd32(d.body + 4) != 33) continue;
                u32 h = ak_rd32(d.body + 36); s32 fx = -1;
                for (u32 i = 0; i < p->pfx_lib.nfx; i++) if (p->pfx_lib.fx[i].hash == h) { fx = (s32)i; break; }
                if (fx < 0) continue;
                typeof(p->sfx[0]) *e = &p->sfx[p->nsfx++]; memset(e, 0, sizeof *e); e->id = ak_rd32(d.body); e->fx = fx;
                f32 g[3], v[3]; memcpy(g, d.body + 20, 12); ak_from_game(g, e->pos); memcpy(v, d.body + 52, 12); ak_from_game(v, e->dir);
            }
        }
        {   /* unflagged type 62 (0886D8C4): a speech line - {version 3, u32, count, count x {u16 event, u16 group}, 1, 1, the speech
               event's h31 (GMSND: "M1_Objective_01" ...), 1, 0xEF59A7EF, 0x3E7}.  The script's 5 says it; event 12 fires when it has
               been said [measured: Yavin's 18bbf got 5 0.5 s after group 40 and fired group 65 17.0-18.2 s later over four harness
               runs - the line's length plus the stream's start]  (no line found: at once [assumed]) */
            u32 q = 8; ak_chunk d; p->nt62 = 0;
            while (ak_asura_next(&l->file, &q, &d) && p->nt62 < 32) {
                if (ak_chunk_tag(&d) != AK_TAG('E', 'N', 'T', 'I') || d.size < 24 || ak_rd32(d.body + 4) != 62) continue;
                typeof(p->t62[0]) *e = &p->t62[p->nt62++]; e->id = ak_rd32(d.body); e->nev = ak_script_events(l, e->id, 2, e->ev, 4); e->t = -1;
                u32 cnt = ak_rd32(d.body + 16), w = 5 + cnt + 2; e->speech = 4 * w + 4 <= d.size ? ak_rd32(d.body + 4 * w) : 0;
            }
        }
        pos = 8; p->nlisten = 0;
        while (ak_asura_next(&l->file, &pos, &c) && p->nlisten < 16) {   /* type 38 (0886E220): {3, 0, 0, 1, 2, 0, 2, groups 0xFFFF0040, 1,
                                                                            hash, 0, hash, 0, 0}: the script's 0x14 {hash} - Yavin's 18c5e fired
                                                                            group 0x40 on 0x14 {0x7E4B3609} (RS_FIRE_LOG), after {0xEDA911F9} */
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 56 || ak_rd32(c.body + 4) != 38) continue;
            typeof(p->listen[0]) *k = &p->listen[p->nlisten++]; k->id = ak_rd32(c.body); k->hash[0] = ak_rd32(c.body + 44); k->hash[1] = ak_rd32(c.body + 52);
            k->group = (s32)(ak_rd32(c.body + 36) & 0xFFFFu); if (k->group == 0xFFFF) k->group = -1;
        }
        pos = 8;
        while (ak_asura_next(&l->file, &pos, &c) && p->nnamed < 64) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 24 || ak_rd32(c.body + 4) != 3) continue;
            char nm[48] = { 0 }; memcpy(nm, c.body + 20, c.size - 20 < 47 ? c.size - 20 : 47);
            for (u32 k = 0; k < p->ncuts; k++) if (!strcmp(nm, p->cuts[k].name)) { p->named[p->nnamed].id = ak_rd32(c.body); p->named[p->nnamed++].cut = (s32)k; break; }
        }
    }
    {   /* moving hulls (unflagged ENTI type 19, class 0x13 - 08860F68; version 4: 7, the closed place, the open place (game axes),
           the move's length (f32 s), 0xD2, ten zero words, 8 16 0 0, the closed place again, the turn (quaternion), 0, the hull's hash
           - a SHAP chunk: u32 hash, 3, 9, vertex count, face count, 3 zero words, 0xFFFF000A, 0, the box (x min, x max, y min, y max,
           z min, z max; game axes), the radius, the vertices, the faces).  Yavin's training: 18c2e, a 30 x 12 x 3 m slab
           (objects/yavin/zigarat_door_col) over the temple door 18c27 (the same hull) that stops a jetpack over the wall.
           Measured (harness, RS_DRIVE_ALL): the script's 3 (group 86, the jetpack's tip) - 1.43 s later the slab moves from its first
           place to its second (91 m down) in a straight line at a steady speed, 1.00 s, and stays.  [assumed: the 1.43 s wait is the
           class's (not traced); 4 puts it back in its first place at once (the training sends 4 to both at its start, when they are
           there already)] */
        ak_chunk c; u32 pos = 8; p->nmover = 0;
        while (ak_asura_next(&l->file, &pos, &c) && p->nmover < 16) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 36 * 4 || ak_rd32(c.body + 4) != 19 || ak_rd32(c.body + 8) != 4) continue;
            const u8 *b = c.body; u32 h = ak_rd32(b + 4 * 34); bool got = false;
            typeof(p->mover[0]) *mv = &p->mover[p->nmover]; memset(mv, 0, sizeof *mv);
            ak_chunk d; u32 q = 8;
            while (!got && ak_asura_next(&l->file, &q, &d)) {
                if (ak_chunk_tag(&d) != AK_TAG('S', 'H', 'A', 'P') || d.size < 64 || ak_rd32(d.body) != h) continue;
                f32 g[6]; for (int k = 0; k < 6; k++) g[k] = ak_rdf32(d.body + 40 + 4 * k);
                mv->mn[0] = g[0]; mv->mx[0] = g[1]; mv->mn[1] = -g[3]; mv->mx[1] = -g[2]; mv->mn[2] = -g[5]; mv->mx[2] = -g[4];   /* (engine axes) */
                got = true;
            }
            if (!got) continue;
            f32 a[3], e[3]; memcpy(a, b + 16, 12); memcpy(e, b + 28, 12); ak_from_game(a, mv->p0); ak_from_game(e, mv->p1);
            memcpy(mv->pos, mv->p0, 12); mv->len = ak_rdf32(b + 40); mv->id = ak_rd32(b);
            mv->q.x = ak_rdf32(b + 4 * 29); mv->q.y = -ak_rdf32(b + 4 * 30); mv->q.z = -ak_rdf32(b + 4 * 31); mv->q.w = ak_rdf32(b + 4 * 32);
            if (fabsf(mv->q.x * mv->q.x + mv->q.y * mv->q.y + mv->q.z * mv->q.z + mv->q.w * mv->q.w - 1) > 0.01f) { mv->q.x = mv->q.y = mv->q.z = 0; mv->q.w = 1; }
            if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("script", "mover %x: %.2f %.2f %.2f -> %.2f %.2f %.2f in %.2f s, hull %08x", mv->id, a[0], a[1], a[2], e[0], e[1], e[2], mv->len, h);
            p->nmover++;
        }
    }
    p->have_ctf = ak_ctf_load(l, ak_game_mode, &p->ctf_map);                  /* PARITY(5.4) */
    {   /* kill boxes (traced: the factory 0896F170 makes class 0x16 from ENTI type 0x16 (unflagged): the loader 0886D334 reads, after
           the version (4) and the base words, the box x min, x max, y min, y max, z min, z max (game axes), the damage a second (+0x34)
           and the flags (+0x40); found on Korriban (24), Yavin IV (6), Mustafar (4), Mygeeto (3), Sullust and Hoth Ion Cannon (1) -
           the big ones kill outright (0x4B), the small ones hurt at 15 or 50 a second (0x4A)) */
        ak_chunk c; u32 pos = 8; p->nkbox = 0;
        while (ak_asura_next(&l->file, &pos, &c) && p->nkbox < 32) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 13 * 4 || (ak_rd32(c.body + 4) & 0xFFFF) != 0x16 || ak_rd32(c.body + 8) != 4) continue;
            f32 v[7]; for (int k = 0; k < 7; k++) memcpy(&v[k], c.body + 20 + 4 * k, 4);
            u32 fl = ak_rd32(c.body + 48);
            if (!(fl & 2)) continue;
            f32 a[3] = { v[0], v[2], v[4] }, b[3] = { v[1], v[3], v[5] }, ea[3], eb[3]; ak_from_game(a, ea); ak_from_game(b, eb);
            for (int k = 0; k < 3; k++) { p->kbox[p->nkbox].mn[k] = fminf(ea[k], eb[k]); p->kbox[p->nkbox].mx[k] = fmaxf(ea[k], eb[k]); }
            p->kbox[p->nkbox].rate = v[6]; p->kbox[p->nkbox].flags = fl; p->nkbox++;
        }
        if (p->nkbox) AK_INFO("play", "%u kill boxes", p->nkbox);
    }
    if (p->have_ctf) {
        ak_ctf_start(&p->ctf_map, &p->ctf);
        if (ak_game_mode == 5) {   /* the campaign: the script switches each flag spawner / base on (3) and off (4) and hears their events -
                                      pickup 10012, capture 10004 (Yavin's data 18bf7 {10012 -> group 51}, base 18bf9 {10004 -> group 43}; the
                                      records' event table at word 4) [assumed: both start off, as the
                                      training's do until group 42 starts them; no score or time limit] */
            p->ctf.limit = 0; p->ctf.time_limit = 0;
            for (u32 k = 0; k < 2; k++) for (u32 i = 0; i < (k ? p->ctf_map.nbases : p->ctf_map.nflags); i++) {
                u32 id = k ? p->ctf_map.base[i].id : p->ctf_map.flag[i].id; u32 *ev = k ? p->ctf_bev[i] : p->ctf_fev[i], *nev = k ? &p->ctf_nbev[i] : &p->ctf_nfev[i];
                *nev = ak_script_events(l, id, 4, ev, 4);
                if (k) p->ctf.base_off[i] = true; else { p->ctf.flag[i].off = true; p->ctf.flag[i].present = false; }
            }
        }
        /* each flag's model (089F84D4): its side's faction, blue when it is the player's side, red otherwise; neutral_flag */
        static const u32 own[4] = { 0x3D7C732Au, 0x95314C5Bu, 0x9EA8D745u, 0x5F017962u }, foe[4] = { 0xF177DBC1u, 0x2E1A9870u, 0x4F710846u, 0x349D2E89u };
        {   const char *c0[2] = { "flag_Flapping", NULL }, *c1[2] = { "flag_Flapping_Backattch", NULL };
            p->flag_clip[0] = find_clip(m, c0); p->flag_clip[1] = find_clip(m, c1); }
        for (u32 f = 0; f < p->ctf_map.nflags; f++) {
            int sd = p->ctf_map.flag[f].side, fac = sd <= 1 ? p->team_faction[sd] : -1;
            u32 h = fac >= 0 && fac < 4 ? (sd == p->team ? own[fac] : foe[fac]) : 0xEC5B1EE4u;
            p->flag_model[f] = -1;
            for (u32 k = 0; k < m->nmodels; k++) if (m->models[k].lod == 0 && m->models[k].hash == h) { p->flag_model[f] = (s32)k; break; }
            if (p->flag_model[f] >= 0) { const ak_model *fm = &m->models[p->flag_model[f]]; p->ctf_map.drop_raise = fm->bmax[1] - fm->bmin[1] + 0.1f; }
        }
        AK_INFO("ctf", "mode %d: %u flags, %u bases, captures to win %d", ak_game_mode, p->ctf_map.nflags, p->ctf_map.nbases, p->ctf.limit);
        for (u32 f = 0; f < p->ctf_map.nflags; f++) AK_INFO("ctf", "flag %u side %d at game %.1f %.1f %.1f", f, p->ctf_map.flag[f].side, p->ctf_map.flag[f].home[0], -p->ctf_map.flag[f].home[1], -p->ctf_map.flag[f].home[2]);
    }
    /* the player's customisation (the spawn screen's "Customisation Menu", 200 credits): the default loadout is the blaster rifle
       (25), the thermal detonator (10), Health Level 1 (10) and Speed Level 1 (10) - read from the original's menu.  Health by level:
       100 / 133 / 166 / 200 (08978170, table 0x08AEE3B8); speed by level: 0.85 / 1.0 / 1.15 / 1.3 (08978240).  AK_HEALTH_LEVEL,
       AK_SPEED_LEVEL (0..3) until Aurek has the menu.  The capture rate (PARITY 5.5): a post's capture speed is the sum of the
       soldiers' rates on it (unit +0x138, 089EC970), at most 5 a second; the player's comes from the third attribute's level
       (+0x1D4, 089782A8: 0.5 / 1.0 / 1.5 / 2.0), measured 1.0 with the menu's default (harness, Hoth) - AK_CAPTURE_LEVEL. */
    loadout_levels(p);
    p->alive = true; p->near_post = -1; p->spawn_post = -1; p->menu_hold = false; p->menu_spawn = false;
    /* where the player starts: the team's spawn at its post nearest the start */
    f32 sp[3] = { start[0], start[1], start[2] }, gy, syaw = 0;
    s32 post = -1;
    if (p->have_cq) {
        f32 bd = 1e30f;
        for (u32 i = 0; i < p->cq.nposts; i++) {
            if (!p->cq.post[i].has_spawn[p->team] || p->cq.post[i].start_owner != p->team) continue;
            f32 dx = p->cq.post[i].pos[0] - start[0], dz = p->cq.post[i].pos[2] - start[2];
            if (dx * dx + dz * dz < bd) { bd = dx * dx + dz * dz; post = (s32)i; }
        }
        if (post >= 0) ak_post_spawn(&p->cq.post[post], p->team, p->seed, sp, &syaw);
    }
    {   int td = ak_setting_int("AK_TEST_AT_DROID", 0);                     /* tests: start 3 m from droid N */
        if (p->have_cq && td > 0 && (u32)td <= p->cq.ndroid) { memcpy(sp, p->cq.droid[td - 1].pos, 12); sp[0] += 3.0f; sp[1] += 1.0f; post = 0; } }
    {   int tp = ak_setting_int("AK_TEST_AT_POST", 0);                      /* tests: start on command post N */
        if (p->have_cq && tp > 0 && (u32)tp <= p->cq.nposts) { memcpy(sp, p->cq.post[tp - 1].pos, 12); post = tp - 1; } }
    p->player_post = post;
    if (post < 0 && p->have_nav) { s32 n = ak_nav_nearest(&p->nav, start, 1e6f); if (n >= 0) memcpy(sp, p->nav.node[n].pos, 12); }
    if (ak_char_ground_below(&p->col, sp, 50.0f, &gy)) sp[1] = gy;
    {   /* tests against the original (tools/harness): AK_TEST_SPAWN = gx,gy,gz,fx,fz - the start and facing in game axes, as the
         * harness reports the original's player (forward = its matrix's third column) */
        const char *ts = ak_setting_str("AK_TEST_SPAWN", NULL); f32 g[5];
        if (ts && sscanf(ts, "%f,%f,%f,%f,%f", &g[0], &g[1], &g[2], &g[3], &g[4]) == 5) {
            ak_from_game(g, sp); syaw = atan2f(-g[3], g[4]); } }
    ak_char_spawn(&p->ch, sp, syaw);
    static const char *idle[] = { "Human_Rifle_Stand_Idle_lookaround2", "Human_Rifle_Stand_Idle_checkweap", NULL };
    static const char *run[] = { "Human_Rifle_Stand_RunForward", NULL }, *back[] = { "Human_Rifle_Stand_RunBackward", "Human_Rifle_Stand_WalkBackward", NULL };
    static const char *left[] = { "Human_Rifle_Stand_RunForward_left", NULL }, *right[] = { "Human_Rifle_Stand_RunForward_Right", NULL };
    static const char *sprint[] = { "Human_Rifle_Stand_sprint_full", NULL };
    static const char *walk[] = { "Human_Rifle_Stand_WalkForward", NULL }, *wback[] = { "Human_Rifle_Stand_WalkBackward", NULL };
    static const char *jump[] = { "Human_Rifle_jump", NULL }, *fall[] = { "Human_Rifle_JumpFall", NULL }, *land[] = { "Human_Rifle_Jump_Land_Soft", "Human_Rifle_Jump_Land", NULL };
    static const char *d1[] = { "Human_Rifle_Stand_Death_backwards", NULL }, *d2[] = { "Human_Rifle_Stand_Death_left", NULL }, *d3[] = { "Human_Rifle_Stand_Death_right", NULL };
    p->clip[PLAY_IDLE] = find_clip(m, idle); p->clip[PLAY_RUN] = find_clip(m, run); p->clip[PLAY_BACK] = find_clip(m, back);
    p->clip[PLAY_LEFT] = find_clip(m, left); p->clip[PLAY_RIGHT] = find_clip(m, right); p->clip[PLAY_JUMP] = find_clip(m, jump);
    p->clip[PLAY_FALL] = find_clip(m, fall); p->clip[PLAY_LAND] = find_clip(m, land); p->clip[PLAY_SPRINT] = find_clip(m, sprint);
    p->clip[PLAY_WALK] = find_clip(m, walk); p->clip[PLAY_WALK_BACK] = find_clip(m, wback);
    if (p->clip[PLAY_WALK] < 0) p->clip[PLAY_WALK] = p->clip[PLAY_RUN];
    if (p->clip[PLAY_WALK_BACK] < 0) p->clip[PLAY_WALK_BACK] = p->clip[PLAY_BACK];
    p->roots = ak_root_tracks_make(m, a); ak_loco_reset(&p->loco, p->clip[PLAY_IDLE]);

    {   /* the rolls: each clip's root-motion channel (its last) says how far it carries the body: the dive 3.9 m forward in 0.73 s,
           the side rolls 1.9 / 1.3 m in 0.6 s, the back roll 2.3 m in 0.73 s */
        static const char *rn[4] = { "Human_Rifle_Stand_Diveroll_Forward", "Human_Rifle_Crouch_Roll_Left", "Human_Rifle_Crouch_Roll_Right", "Human_Rifle_Crouch_Roll_Back" };
        for (int k = 0; k < 4; k++) {
            const char *one[2] = { rn[k], NULL }; s32 ci = find_clip(m, one); p->roll_clip[k] = ci; p->roll_len[k] = 0; p->roll_dur[k] = 0.6f;
            if (ci < 0) continue;
            const ak_anim_clip *cl = &m->clips[ci]; p->roll_dur[k] = cl->duration > 0.1f ? cl->duration : 0.6f;
            if (cl->nchannels > 0) { const ak_anim_channel *a = &cl->chan[cl->nchannels - 1];
                if (a->pos_count >= 2) { const f32 *p0 = cl->pos[a->pos_first], *p1 = cl->pos[a->pos_first + a->pos_count - 1];
                    f32 dx = p1[0] - p0[0], dz = p1[2] - p0[2]; p->roll_len[k] = sqrtf(dx * dx + dz * dz); } }
            if (p->roll_len[k] < 0.5f) p->roll_len[k] = 2.0f;
        }
        p->roll_i = -1; p->roll_req = false; p->zoom = 0; p->zoom_req = false;
    }
    p->idle_clip = p->clip[PLAY_IDLE]; p->death_clips[0] = find_clip(m, d1); p->death_clips[1] = find_clip(m, d2); p->death_clips[2] = find_clip(m, d3); p->death_clips[3] = p->death_clips[0]; p->death_pick = 0; p->idle_vars[0] = p->idle_vars[1] = -1; p->pidle_vars[0] = p->pidle_vars[1] = -1; p->idle_var = -1; p->idle_t = 2.5f;
    /* the alert set (the game's generic_male table, set 5: rifle raised - when shooting or locked on) and its shoot layer; the
       relaxed body clips stay the ones above (set 4 is the same family) */
    memcpy(p->aclip, p->clip, sizeof p->aclip); p->shoot_clip = -1; p->reload_clip = -1;
    {   const ak_anim_table *gt = ak_anim_table_find(m, "generic_male");
        static const int row[PLAY_NCLIPS] = { [PLAY_IDLE] = 0, [PLAY_RUN] = 3, [PLAY_BACK] = 4, [PLAY_LEFT] = 5, [PLAY_RIGHT] = 6, [PLAY_JUMP] = 8, [PLAY_FALL] = 12, [PLAY_LAND] = 10, [PLAY_SPRINT] = 7,
                                              [PLAY_WALK] = 1, [PLAY_WALK_BACK] = 2 };
        if (gt && gt->sets > 5 && gt->cols > 1 && gt->rows > 12) {
            for (int k = 0; k < PLAY_NCLIPS; k++) if (AK_ATAB(gt, 5, row[k], 0) >= 0) p->aclip[k] = AK_ATAB(gt, 5, row[k], 0);
            p->shoot_clip = AK_ATAB(gt, 5, 0, 1);
        }
    }
    if (p->roots) for (int k = PLAY_JUMP; k <= PLAY_LAND; k++) {               /* (the air's clips carry nothing) */
        if (p->clip[k] >= 0) p->roots[p->clip[k]].n = 0;
        if (p->aclip[k] >= 0) p->roots[p->aclip[k]].n = 0; }
    /* camera: the game's numbers, or the over-the-shoulder framing */
    const ak_bp_object *cam = ak_bp_find(bp, "Camera", "humanoid 3rd person");
    p->classic_cam = ak_setting_str("AK_CAM_STYLE", "modern")[0] == 'c';
    p->psp_buttons = ak_setting_str("AK_BUTTONS", "psp")[0] != 'l';            /* psp (default) or legacy */
    p->pull_out_rate = ak_bp_float(cam, "pull out rate", 1.0f); p->pull_in_rate = ak_bp_float(cam, "pull in rate", 15.0f); p->pull_close = ak_bp_float(cam, "pull in close dist", 3.0f); p->cl_dist = 0;
    if (p->classic_cam) {
        /* "fov" is across the PSP's 480 x 272 screen (measured: the game's projection in the harness is 1.732 across, 3.057 up -
           60 degrees wide, 36.2 high; near 0.25 m, no far plane) - Aurek keeps that height on any screen */
        p->fov = 2.0f * atanf(tanf((f32)ak_bp_int(cam, "fov", 60) * 3.14159265f / 360.0f) * 272.0f / 480.0f);   /* PARITY(9.1) */
        p->pivot_h = ak_bp_float(cam, "pivot height stand", 1.5f) - ak_bp_float(cam, "pivot y offset", 0.0f); p->pivot_x = ak_bp_float(cam, "pivot x offset", 0.3f);   /* (game y down: -0.1 is 0.1 up) */
        p->cam_back = -ak_bp_float(cam, "desired z offset", -7.0f); p->cam_up = -ak_bp_float(cam, "desired y offset", -0.5f);   /* game y points down */
        p->cam_side = ak_bp_float(cam, "desired x offset", -0.2f);
    } else {
        p->fov = ak_setting_float("AK_FOV", 55.0f) * 3.14159265f / 180.0f;   /* PARITY(9.1) */
        p->pivot_h = 1.55f; p->pivot_x = 0.0f; p->cam_back = 1.8f; p->cam_up = 0.05f; p->cam_side = 0.6f;
    }
    p->pivot_h *= S; p->pivot_x *= S; p->cam_back *= S; p->cam_up *= S; p->cam_side *= S; p->pull_close *= S;
    p->cam_dist = p->cam_back; p->veh_cam_t = 1;
    {   int ts = ak_setting_int("AK_TWIN_STICK", -1);
        p->twin_stick = ak_plat_has_right_stick() && ts != 0;                 /* -1 (the default) and 1: on where the device can */
        {   /* no right stick (the Old 3DS) or AK_SINGLE_STICK=1: the PSP's own one-stick scheme */
            int ss = ak_setting_int("AK_SINGLE_STICK", -1);
            p->single_stick = ss == 1 || (ss < 0 && !ak_plat_has_right_stick());
            if (p->single_stick) p->twin_stick = false;
            p->view_follow = ak_setting_float("AK_VIEW_FOLLOW", 2.0f);       /* PARITY(1.14): how fast the view swings behind (the strafe scheme; not measured) */
            p->stick_turns = ak_setting_int("AK_SINGLE_STICK_TURN", 1) != 0;  /* 1: the original (stick X turns, measured 9.3); 0: stick X strafes, the soldier faces the run (1.14) */
        }
        p->aim_yaw_speed = ak_setting_float("AK_AIM_SPEED", 3.2f); p->aim_pitch_speed = p->aim_yaw_speed * 0.7f;
        p->aim_curve = ak_setting_float("AK_AIM_CURVE", 2.0f); p->invert_y = ak_setting_int("AK_INVERT_Y", 0) != 0;
        /* the three control schemes' Y inversions (the profile's +0x51 / +0x6D / +0x89; a new profile: 0 / 0 / 1): the infantry's 08A5F128,
           the vehicles' 08A60028 (ground vehicles and flyers in the air - 089B20CC / 089B6960 make it), the spacecraft's 08A5EC4C (089A9728
           makes it for a flyer in free flight, vehicle +852 bit 0) - each negates the stick's raw Y when set */
        p->auto_gunners = ak_setting_int("AK_AUTO_GUNNERS", 0) != 0;
        p->invert_y_vehicle = ak_setting_int("AK_INVERT_Y_VEHICLE", 0) != 0; p->invert_y_space = ak_setting_int("AK_INVERT_Y_SPACE", 1) != 0;
    }
    const ak_bp_object *ctl = ak_bp_find(bp, "Controls", "Humanoid");
    p->stamina = p->stamina_max = 100.0f; p->stamina_regen = 10.0f; p->stamina_spent = false;
    {   /* the power-ups' times and radii (the unit's constructor 089A6004: by the name table 0x08ADE4C8 from each Weapon's <name>_Time /
           <name>_Radius, keys 0x08ADE4B8 / 0x08ADE4A8) */
        static const char *const kn[4] = { "Rage", "Rally", "Regenerate", "Stamina" }; char key[32];
        for (int k = 0; k < 4; k++) { const ak_bp_object *pw = ak_bp_find(bp, "Weapon", kn[k]);
            snprintf(key, sizeof key, "%s_Time", kn[k]); p->pu_time[k] = pw ? ak_bp_float(pw, key, 0) : 0;
            snprintf(key, sizeof key, "%s_Radius", kn[k]); p->pu_radius[k] = pw ? ak_bp_float(pw, key, 0) : 0; }
        { const ak_bp_object *sw = ak_bp_find(bp, "Weapon", "Stamina"); p->pu_stamina_mul = sw ? ak_bp_float(sw, "Stamina_Multiplier", 1.0f) : 1.0f; }
        for (u32 i = 0; i <= PLAY_MAX_BOTS; i++) { p->buff_k[i] = -1; p->buff_t[i] = 0; } }
    p->sprint_cost = ak_bp_float(ctl, "sprint cost", 20.0f); p->roll_cost = ak_bp_float(ctl, "roll stamina cost", 0.0f); p->roll_nolock = ak_bp_float(ctl, "roll no lock on time", 2.0f); p->roll_nolock_t = 0;
    p->lock = -1; p->lock_range = ak_bp_float(ctl, "targeting range", 50.0f); p->lock_turn = ak_bp_float(ctl, "aim yaw speed", 3.5f);
    p->lock_head_time = ak_bp_float(ctl, "lock on to head time", 5.0f);
    loadout_items(p, m, bp);
    anim_sets(p, m);
    {   ak_target *t = &p->target[0];
        t->health = p->health; t->max_health = p->max_health; t->headshot_mult = ak_bp_float(p->look.bp, "Headshot multiplier", 4.0f); t->alive = true; t->team = p->team; t->last_attacker = -1;
        memcpy(t->feet, p->ch.pos, 12); t->height = 1.45f * S; t->radius = 0.35f * S; t->head_radius = 0.2f * S; memcpy(t->head, p->ch.pos, 12); t->head[1] += 1.6f * S; }
    /* bots */
    p->sight = p->lock_range;
    p->sense_mult = ak_setting_float("AK_BOT_SIGHT_MULT", 1.0f);                /* (the sensor's +48: 1.0) */
    {   int se = ak_setting_int("AK_BOT_SENSE_EVERY", 0);                        /* 0: every frame up to 16 bots, then spread */
        p->sense_every = se > 0 ? (u32)se : 1; }
    {   /* the aim error: the weapon's AIWeapon_Accuracy_Normal (degrees; Weapon "Base": 5), unless AK_BOT_AIM says otherwise */
        const ak_bp_object *wb = ak_bp_find(bp, "Weapon", "Base");
        p->bot_aim = ak_setting_float("AK_BOT_AIM", wb ? ak_bp_float(wb, "AIWeapon_Accuracy_Normal", 5.0f) : 5.0f) * 3.14159265f / 180.0f;
        p->bot_aim_set = ak_setting_str("AK_BOT_AIM", NULL) != NULL; }   /* (soldier bots: each weapon's own accuracy unless AK_BOT_AIM is set) */
    p->bots_passive = ak_setting_int("AK_BOT_PASSIVE", 0) != 0;
    u32 want = (u32)ak_setting_int("AK_BOTS", 15); if (want > PLAY_MAX_BOTS) want = PLAY_MAX_BOTS;   /* PARITY(4.5) */
    p->campaign_army = ak_game_mode == 5 && !ak_setting_str("AK_BOTS", NULL); p->unit_count = 1;
    /* the campaign: the standing army is as big as the script's unit count allows - 0x8010 {u32, n} to the ticket entity (089875C8 ->
       08979CD4: the match's unit count D_08C294D0, which 089809B8 fills with AI spawners less the player's and the placed units'):
       measured, Yavin's group 44 {8}: 1 soldier, then 7 more 10-15 s later (ct39); Ord Mantell's 23 {12}: the player and 11 AI
       soldiers (om_h2).  Before any 0x8010 none (the training's courtyard had none).  [assumed: the placed units counted while they
       live; fallen soldiers past the count are not replaced] */
    if (!p->have_nav || !p->nav.nnode) want = 0;
    {   /* scripted soldier spawners (class 0x800D, ENTI type 13 flagged, version 10: word 7 the unit blueprint's name hash, the place
           (game axes) and turn rows, then 0x3E7 / 0x8005, word 23 bit 0x200000: waits for the script's 3; the event table at word 2:
           10006 when its soldier falls - Yavin's 18be0-18be3 {10006 -> groups 24 / 23 / 22 / 8} feed the counter 18beb).  A spawner
           whose blueprint is a Humanoid makes one soldier of that blueprint's side, once [assumed: no respawn - the training's four
           each count one kill] */
        ak_chunk c; u32 q = 8; p->nuspawn = 0; const ak_bp_type *ht = ak_bp_find_type(bp, "Humanoid");
        while (ht && p->have_nav && ak_asura_next(&l->file, &q, &c) && p->nuspawn < 16) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 23 * 4 || (ak_rd32(c.body + 4) & 0xFFFF) != 0x800D || ak_rd32(c.body + 8) != 10) continue;
            /* the layout after the version: u32, the event count, the events, a u32, then the blueprint (word 7 with one event -
               Yavin's; word 6 with none - Ord Mantell's squads 18838-b / 18843-5 / 18849-b) */
            u32 bw = 6 + ak_rd32(c.body + 16); if (bw > 12 || 4 * (bw + 17) > c.size) continue;
            u32 h = ak_rd32(c.body + 4 * bw); const ak_bp_object *o = NULL;
            for (u32 k = 0; k < ht->nobjects && !o; k++) if (ak_hash31(ht->objects[k].name) == h) o = &ht->objects[k];
            if (!o) continue;
            typeof(p->uspawn[0]) *u = &p->uspawn[p->nuspawn]; memset(u, 0, sizeof *u); u->id = ak_rd32(c.body); u->bot = -1;
            f32 g[3]; memcpy(g, c.body + 4 * (bw + 1), 12); ak_from_game(g, u->pos);
            f32 r20 = ak_rdf32(c.body + 4 * (bw + 6)), r22 = ak_rdf32(c.body + 4 * (bw + 12)); u->yaw = atan2f(r20, r22) + 3.14159265f;   /* [assumed: the third column's x / z; soldiers face -z] */
            u->waiting = (ak_rd32(c.body + 4 * (bw + 16)) & 0x200000u) != 0;
            u->nev = ak_script_events(l, u->id, 2, u->ev, 4);
            {   ak_route *r = (ak_route *)ak_arena_alloc(a, sizeof *r, 4);   /* its route (the start node after the record's blueprint: Chewbacca's 18806 -> 187fa) */
                if (r && ak_route_for_unit(l, u->id, r) && r->nnodes) u->route = r; }
            p->nuspawn++;
        }
    }
    u32 want_script = p->nuspawn, want_pilot = 0;
    if (ak_game_mode == 5) {   /* the campaign's placed craft that fly (0x800D spawners of a vehicle: Space Alderaan's TIE 1898c, whose craft the
                                  original flew from its spawn - 30d4e moved from -357 -71 309 to -537 -75 392, sa_h12): with no armies, each gets
                                  a pilot of its own [assumed: who flies them in the game is not traced] */
        ak_chunk c; u32 q = 8; const ak_bp_type *ht = ak_bp_find_type(bp, "Humanoid");
        while (ak_asura_next(&l->file, &q, &c) && want_pilot < 16) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 30 * 4 || (ak_rd32(c.body + 4) & 0xFFFF) != 0x800D) continue;
            u32 bw = 6 + ak_rd32(c.body + 16); if (bw > 12) continue; u32 h = ak_rd32(c.body + 4 * bw); bool hum = false;
            for (u32 k = 0; ht && k < ht->nobjects && !hum; k++) hum = ak_hash31(ht->objects[k].name) == h;
            if (!hum) want_pilot++;
        }
    }
    if (want || want_script || want_pilot) {
        for (int k = 0; k < 2; k++) {   /* the bots' explosives (loadout slots 9 REP_Grenade and 12 Cluster_Grenades; Weapon_Name 127 and 130) */
            const ak_bp_object *gw = ak_bp_find(bp, "Weapon", k ? "Cluster_Grenades" : "REP_Grenade");
            p->ai_gren_ok[k] = gw && ak_setting_int("AK_BOT_GRENADES", 1) && ak_proj_def_load(bp, ak_bp_string(gw, "Projectile", k ? "cluster_grenade" : "Grenade"), &p->ai_gren_def[k]);
            p->ai_gren_ammo[k] = gw ? ak_bp_int(gw, "AmmoPerClip", 4) : 0; p->ai_gren_rate[k] = gw ? ak_bp_float(gw, "RateOfFire", 2.0f) : 2.0f;
            { const ak_bp_object *pj = gw ? ak_bp_find(bp, "Projectile", ak_bp_string(gw, "Projectile", k ? "cluster_grenade" : "Grenade")) : NULL;   /* (the Projectile's, as the player's) */
              p->ai_gren_ps[k] = pj ? ak_bp_float(pj, "ProjectileSpeed", 10.0f) : 10.0f; p->ai_gren_vts[k] = pj ? ak_bp_float(pj, "VerticalThrowSpeed", 0.0f) : 0.0f; }
            if (ak_setting_int("AK_LOG_GRENADES", 0)) AK_INFO("play", "bot explosive %d: %s, %d, every %.1f s, speed %.1f, up %.1f", k, p->ai_gren_ok[k] ? "ok" : "none", p->ai_gren_ammo[k], p->ai_gren_rate[k], p->ai_gren_ps[k], p->ai_gren_vts[k]);
        }
        for (int t = 0; t < 2; t++) {
            team_classes(p, bp, m, t);
            p->team_armed[t] = ak_weapon_def_load(bp, m, ak_setting_str("AK_BOT_WEAPON", "BlasterRifle"), p->team_faction[t], &p->team_wdef[t]);   /* PARITY(2.1): the bots' classes' weapons */
            /* in a bot's hands (traced, 089E1FDC): Modifier_Bot_Damage (the rifles inherit Weapon "Base": 0.3) scales an AI's damage to
             * the local player only - bots hit each other for the full damage (harness: 15 a rifle bolt between soldiers) - and
             * Modifier_Bot_RateOfFire does not slow them (harness: an AI rifle's hits 18 frames apart, its RateOfFire 0.3 s) */
            ai_weapons_load(p, bp, m, t);
            p->team_bdef[t] = p->team_wdef[t];
            if (p->team_armed[t] && p->team_wdef[t].bp) {
                f32 md = ak_bp_float(p->team_wdef[t].bp, "Modifier_Bot_Damage", 1);
                if (!ak_setting_int("AK_BOT_GAME_MODIFIERS", 1)) md = 1;
                p->team_bdef[t].bot_dmg = md; p->team_bdef[t].ai = true;
            }
        }
        p->bot = AK_NEW(a, ak_play_bot, want + want_script + want_pilot);
        size_t ss = (size_t)p->nav.nnode * 12 + (size_t)p->nav.nlink * 12 + 4096;
        p->scratch.base = (u8 *)ak_arena_alloc(a, ss, 16); p->scratch.size = ss;
        if (!p->bot || !p->scratch.base) want = want_script = want_pilot = 0;
    }
    p->narmy = 0;
    for (u32 i = 0; i < want; i++) {
        /* sides: alternate, starting with the enemy, so the player's side has one fewer */
        int team = (i % 2 == 0) ? 1 - p->team : p->team;
        if (!p->nklass[team]) continue;
        ak_play_bot *b = &p->bot[p->nbots]; memset(b, 0, sizeof *b); b->uspawn = -1;
        b->seed = 0x9E3779B9u * (i + 7) + 0x85EBCA6Bu * (u32)(ak_setting_int("AK_SEED", 1) - 1);   /* (AK_SEED: tests' other runs) */
        /* the body (08983644 -> 089835EC): one of the faction's three personalisation bodies (089784DC's table 0x08C29190), by the game's
           generator % 3, with the first head (+0x70 = 0); a body this level has no model for: the side's other classes as before
           [assumed: the generator's sequence - Aurek's per-bot one] */
        static const char *const fbody[4][3] = { { "Clonetrooper", "Arc_Trooper", "MECTrooper" }, { "Battle_Droid", "SuperBattleDroid", "SuperMagnaGuard" },
                                                 { "RebelTrooperCommando", "MediumRebel", "WookieWarrior" }, { "Biker_Scout", "Stormtrooper", "Darktrooper" } };
        int fac = p->team_faction[team]; bool made = false;
        if (fac >= 0 && fac < 4) {
            int pick = (int)(rnd(&b->seed) * 3) % 3;
            for (int t = 0; t < 3 && !made; t++) made = ak_soldier_look_make(bp, m, fbody[fac][(pick + t) % 3], 0, -1, -1, &b->look) && poseable(m, &b->look);
        }
        if (!made) {
            const char *k = p->klass[team][(u32)(rnd(&b->seed) * p->nklass[team]) % p->nklass[team]];
            if (!ak_soldier_look_make(bp, m, k, (int)(rnd(&b->seed) * 3) % 3, -1, -1, &b->look) || !poseable(m, &b->look)) continue;
        }
        b->team = team; b->death_clip = p->death_clips[i % 4]; b->base_look = b->look;
        if (ak_setting_int("AK_DEBUG_BOTS", 0)) AK_INFO("bots", "bot %u: team %d, %s", p->nbots, team, b->look.bp ? b->look.bp->name : "?");
        {   /* a name: a random entry of the side's BOTNAMES list not yet taken (the original, read from a running match) */
            u32 nn = ak_hud_bot_names(p->team_faction[team]); b->name = -1;
            if (nn) { u32 at = (u32)(rnd(&p->seed) * nn) % nn;
                for (u32 t = 0; t < nn && b->name < 0; t++) { u32 c = (at + t) % nn; bool used = false;
                    for (u32 j = 0; j < p->nbots && !used; j++) used = p->bot[j].team == team && p->bot[j].name == (s32)c;
                    if (!used) b->name = (s32)c; } } }
        memcpy(b->ch.pos, p->ch.pos, 12);
        bot_spawn(p, m, b, p->nbots);
        if (ak_setting_int("AK_BOT_SPAWN_DELAY", 1) || p->campaign_army) {   /* not in yet: its spawner's first timer (see the respawn below) */
            b->alive = false; b->dead_t = 10.0f; p->target[1 + p->nbots].alive = false;
            b->respawn_t = 5.0f + rnd(&b->seed) * 10.0f; b->respawn_set = !p->campaign_army;
        }
        p->nbots++; p->narmy = p->nbots;
    }
    for (u32 k = 0; k < want_script; k++) {                                  /* the scripted spawners' soldiers */
        typeof(p->uspawn[0]) *u = &p->uspawn[k]; ak_chunk c; u32 q = 8; const char *bn = NULL;
        while (ak_asura_next(&l->file, &q, &c)) if (ak_chunk_tag(&c) == AK_TAG('E', 'N', 'T', 'I') && ak_rd32(c.body) == u->id) {
            const ak_bp_type *ht = ak_bp_find_type(bp, "Humanoid"); u32 h = ak_rd32(c.body + 4 * (6 + ak_rd32(c.body + 16)));
            for (u32 j = 0; ht && j < ht->nobjects && !bn; j++) if (ak_hash31(ht->objects[j].name) == h) bn = ht->objects[j].name;
            break; }
        ak_play_bot *b = &p->bot[p->nbots]; memset(b, 0, sizeof *b); b->uspawn = (s8)k; b->seed = 0x2545F491u * (k + 3);
        if (!bn || !ak_soldier_look_make(bp, m, bn, 0, -1, -1, &b->look) || !poseable(m, &b->look)) { AK_WARN("play", "spawner %x: no body for %s", u->id, bn ? bn : "?"); continue; }
        int fac = ak_bp_int(b->look.bp, "Faction", -1);
        b->team = fac == p->team_faction[p->team] ? p->team : 1 - p->team;   /* [assumed: a faction not on the field is the enemy, as Faction 4 was] */
        b->death_clip = p->death_clips[k % 4]; b->base_look = b->look; b->name = -1;
        memcpy(b->ch.pos, u->pos, 12); u->bot = (s32)p->nbots;
        bot_spawn(p, m, b, p->nbots);
        if (u->waiting) { b->alive = false; b->dead_t = 10.0f; p->target[1 + p->nbots].alive = false; }
        else u->used = true;
        if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("script", "spawner %x: %s (team %d, Health %.0f)%s%s", u->id, bn, b->team, ak_bp_float(b->look.bp, "Health", 100.0f), u->waiting ? ", waits" : "", u->route ? ", a route" : "");
        p->nbots++;
    }
    for (u32 k = 0; k < want_pilot; k++) {                                   /* the campaign craft's pilots (above): idle until a craft needs one */
        ak_play_bot *b = &p->bot[p->nbots]; memset(b, 0, sizeof *b); b->uspawn = -1; b->pilot = true; b->pilot_v = -1; b->seed = 0x7F4A7C15u * (k + 5);
        int team = p->nklass[1 - p->team] ? 1 - p->team : p->team; if (!p->nklass[team]) break;
        if (!ak_soldier_look_make(bp, m, p->klass[team][0], 0, -1, -1, &b->look) || !poseable(m, &b->look)) break;
        b->team = team; b->death_clip = p->death_clips[k % 4]; b->base_look = b->look; b->name = -1;
        b->alive = false; b->dead_t = 100.0f; p->target[1 + p->nbots].alive = false; p->target[1 + p->nbots].team = team;
        p->nbots++;
    }
    {   /* squads (traced, 08926220): each side's soldiers are split into squads by the table 0x08AD9888 - its row for the side's
           count (clamped to 16), up to five sizes; AK_BOT_SQUADS=0 leaves every bot on its own.  [assumed: the player is not counted
           (bots only); past 16 a side's bots start the row again] */
        static const u8 sizes[17][5] = { {0}, {1}, {2}, {2,1}, {2,1,1}, {2,2,1}, {2,2,1,1}, {2,2,2,1}, {2,2,2,1,1}, {3,2,2,1,1},
            {2,2,2,2,2}, {3,2,2,2,2}, {3,3,2,2,2}, {3,3,3,2,2}, {3,3,3,3,2}, {3,3,3,2,1}, {4,3,3,3,3} };
        bool on = ak_setting_int("AK_BOT_SQUADS", 1) != 0;
        for (int t = 0; t < 2; t++) {
            u32 n = 0; for (u32 i = 0; i < p->nbots; i++) n += p->bot[i].team == t;
            const u8 *row = sizes[n > 16 ? 16 : n]; u32 sq = 0, left = row[0], made = 0;
            for (u32 i = 0; i < p->nbots; i++) {
                ak_play_bot *b = &p->bot[i]; if (b->team != t) continue;
                b->squad = -1; b->sq_slot = 0; b->sq_t = 0; b->sq_head = 0;
                if (!on) continue;
                while (!left) { if (++sq >= 5 || !row[sq]) { sq = 0; made += 5; } left = row[sq]; }
                b->squad = (s8)(made + sq); left--;
            }
        }
    }
    if (ak_setting_int("AK_BOT_SENSE_EVERY", 0) <= 0 && p->nbots > 16) p->sense_every = (p->nbots + 15) / 16;   /* (performance) */
    vehicles_init(p, l, m, bp, a);
    for (u32 i = 0; i < p->nbots; i++) p->bot[i].wants_veh = p->bot_drive > 0 && rnd(&p->bot[i].seed) < p->bot_drive;   /* (the first wave: spawned before the chance was read) */
    p->nturret = 0; p->ntdef = 0; turrets_init(p, l, m, bp);
    props_init(p, l, m, a);
    {   /* the battlefront's bounds: ENTI class 0x8021 records {1, 0, 0, x min, x max, y min, y max, z min, z max (game axes), flags};
         * flags byte 1 = 0 is the box soldiers and their vehicles are held to (089D4BDC asks 08A145E4(0)); 1 is the AI pilots' (089477A8) */
        ak_chunk c; u32 pos = 8; p->have_oob = false; p->have_pil = false;
        while ((!p->have_oob || !p->have_pil) && ak_asura_next(&l->file, &pos, &c)) {
            if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 48) continue;
            const u8 *b = c.body; if ((ak_rd32(b + 4) & 0xFFFF) != 0x8021 || b[45] > 1) continue;
            f32 v[6]; for (int k = 0; k < 6; k++) v[k] = ak_rdf32(b + 20 + 4 * k);
            if (!(v[1] > v[0] && v[3] > v[2] && v[5] > v[4])) continue;
            if (b[45] == 1) { if (!p->have_pil) { p->pil_min[0] = v[0]; p->pil_max[0] = v[1]; p->pil_min[1] = -v[3]; p->pil_max[1] = -v[2]; p->pil_min[2] = -v[5]; p->pil_max[2] = -v[4]; p->have_pil = true;
                AK_INFO("play", "pilots' box: game x %.0f..%.0f, y %.0f..%.0f, z %.0f..%.0f", v[0], v[1], v[2], v[3], v[4], v[5]); } continue; }
            if (p->have_oob) continue;
            p->oob_min[0] = v[0]; p->oob_max[0] = v[1]; p->oob_min[1] = -v[3]; p->oob_max[1] = -v[2]; p->oob_min[2] = -v[5]; p->oob_max[2] = -v[4];
            p->have_oob = true;
            AK_INFO("play", "battlefront: game x %.0f..%.0f, y %.0f..%.0f, z %.0f..%.0f", v[0], v[1], v[2], v[3], v[4], v[5]);
        }
        p->oob_out = false; p->oob_msg_t = 0;
    }
    {   const char *tp = ak_setting_str("AK_TEST_START", NULL); f32 g[4];   /* tests: "x,y,z,yaw" in game axes (the harness's) */
        if (tp && sscanf(tp, "%f,%f,%f,%f", &g[0], &g[1], &g[2], &g[3]) == 4) { f32 q[3]; ak_from_game(g, q); ak_char_spawn(&p->ch, q, g[3]); } }
    {   int tt = ak_setting_int("AK_TEST_AT_TURRET", 0);                    /* tests: start beside turret N */
        if (tt > 0 && (u32)tt <= p->nturret) { f32 q[3] = { p->turret[tt - 1].pos[0] + p->turret[tt - 1].rad + 1.0f, p->turret[tt - 1].pos[1] + 2.0f, p->turret[tt - 1].pos[2] }, gy;
            if (ak_char_ground_below(&p->col, q, 10.0f, &gy)) q[1] = gy;
            ak_char_spawn(&p->ch, q, p->ch.yaw); } }
    p->base_look = p->look; p->base_wdef = p->wdef; p->base_armed = p->armed; p->base_max_health = p->max_health;
    heroes_init(p, bp, m);
    {   /* the health and ammo droids (traced: the health droid, class 0x800F, func 089E812C, reads UtilityDroid "MedicalDroid":
           PulseLength, EffectiveRadius, HealingCapacity; every PulseLength it heals each living soldier on foot within the radius, in
           sight and below full health, by HealingCapacity up to full - funcs 089E8428, 089E86E8, 089E868C) */
        const ak_bp_object *md = ak_bp_find(bp, "UtilityDroid", "MedicalDroid"), *ad = ak_bp_find(bp, "UtilityDroid", "AmmunitionDroid");
        p->droids.heal = md ? ak_bp_float(md, "HealingCapacity", 10) : 10; p->droids.radius = md ? ak_bp_float(md, "EffectiveRadius", 8) : 8;
        p->droids.pulse = md ? ak_bp_float(md, "PulseLength", 2) : 2;
        p->droids.ammo_radius = ad ? ak_bp_float(ad, "EffectiveRadius", 8) : 8; p->droids.ammo_pulse = ad ? ak_bp_float(ad, "PulseLength", 1) : 1;
        p->droids.t = p->droids.pulse; p->droids.ammo_t = p->droids.ammo_pulse;
    }
    for (u32 v = 0; v < p->nveh; v++) if (p->vspawn[v].first != (s32)v || p->vspawn[v].waiting || !vehicle_make(p, v)) {   /* (a spawn's further slots wait) */ p->veh[v].alive = false; p->veh[v].def = &p->vdef[p->vspawn[v].def[0] >= 0 ? p->vspawn[v].def[0] : p->vspawn[v].def[1]]; p->veh[v].dead_t = p->vspawn[v].respawn - 5.0f; p->target[VT(p, v)].alive = false; }
    if (ak_setting_int("AK_DEBUG_VEH", 0))
        for (u32 v = 0; v < p->nveh; v++) AK_INFO("veh", "vehicle %u (%x): %s / %s, post %d, respawn %.1f s, %s%s%s", v + 1, p->vspawn[v].eid, p->vspawn[v].def[0] >= 0 ? p->vdef[p->vspawn[v].def[0]].name : "-",
                                                p->vspawn[v].def[1] >= 0 ? p->vdef[p->vspawn[v].def[1]].name : "-", p->vspawn[v].post, p->vspawn[v].respawn, p->veh[v].alive ? "up" : "waiting", p->vspawn[v].fixed ? ", placed" : "", p->veh[v].def && !p->veh[v].def->boardable ? ", not boardable" : "");
        if (ak_setting_int("AK_DEBUG_VEH", 0)) for (u32 v = 0; v < p->nveh; v++) {   /* (tests: where each stands, in game axes) */
            f32 g[3]; ak_from_game(p->vspawn[v].pos, g);   /* (the same flip both ways) */ AK_INFO("veh", "vehicle %u at %.2f %.2f %.2f, yaw %.3f", v + 1, g[0], g[1], g[2], p->vspawn[v].yaw); }
    /* placed craft in flight (space levels' type 13 flyers): in the original they fly from the first frame (harness state.log,
       Space Hoth: 30d44 / 30d46 / 30d48 / 30d4a / 30d4c move at 60-80 m/s from the start) - here a bot of the craft's side starts
       in each, flying at its cruise speed [assumed: who pilots them in the game is not traced] */
    for (u32 v = 0; v < p->nveh; v++) placed_flyer_crew(p, m, v);
    {   int tv = ak_setting_int("AK_TEST_VEHICLE", 0);                      /* tests: start in vehicle N */
        if (tv > 0 && (u32)tv <= p->nveh && p->veh[tv - 1].alive) {
            ak_vehicle *vh = &p->veh[tv - 1]; vh->driver = 0; vh->team = p->team; p->target[VT(p, tv - 1)].team = p->team;
            p->in_veh = tv - 1; p->target[0].alive = false; memcpy(p->ch.pos, vh->pos, 12); p->cam_dist = vh->def->cam_z; p->veh_cam_t = 1; p->veh_cam_yaw = p->veh_cam_pitch = 0;
        } }
    p->ready = true;
    return true;
}

/* The soldiers' clips from the game's animation table (PARITY 6.1).  The set (08998D74): the weapon's AnimPose (soldier +200) -
 * "Pistol" 0, "Bazooka" 8, anything else 4 - plus 2 crouched (+0x208 bit 0) plus 1 alert (bit 1 set and bit 16 clear); alert comes
 * from the controller (08994C30 copies its bit 9): measured in the original, firing or holding the lock-on and 3 s after letting
 * go.  Rows: 0 idle, 1 / 2 walk, 3 / 4 run, 5 / 6 strafe, 7 sprint, 8 jump, 10 soft landing, 12 fall, 20-23 deaths (front, back,
 * left, right), 24 / 25 rolls left / right, 26 dive forward, 27 roll back; columns 1 shoot, 2 reload (layers over the body).  Not
 * ported: crouching (sets +2), the idle variations (rows 18 / 19: when the game plays them is not traced), hit reactions (13-16: no state of the game plays them, PARITY 1.11). */
static void anim_sets(ak_play *p, const ak_model_set *m)
{
    const ak_anim_table *gt = ak_anim_table_find(m, "generic_male");
    if (!gt || gt->sets < 12 || gt->rows < 28 || gt->cols < 3) return;
    const char *pose = p->armed && p->wdef.bp ? ak_bp_string(p->wdef.bp, "AnimPose", "Default") : "Default";
    int base = !strcmp(pose, "Pistol") ? 0 : !strcmp(pose, "Bazooka") ? 8 : 4;
    static const int row[PLAY_NCLIPS] = { [PLAY_IDLE] = 0, [PLAY_RUN] = 3, [PLAY_BACK] = 4, [PLAY_LEFT] = 5, [PLAY_RIGHT] = 6, [PLAY_JUMP] = 8, [PLAY_FALL] = 12,
                                          [PLAY_LAND] = 10, [PLAY_SPRINT] = 7, [PLAY_WALK] = 1, [PLAY_WALK_BACK] = 2 };
    for (int k = 0; k < PLAY_NCLIPS; k++) {
        s32 c0 = AK_ATAB(gt, base, row[k], 0), c1 = AK_ATAB(gt, base + 1, row[k], 0);
        if (c0 >= 0) p->clip[k] = c0;
        if (c1 >= 0) p->aclip[k] = c1;
    }
    p->idle_clip = p->clip[PLAY_IDLE];
    p->shoot_clip = AK_ATAB(gt, base + 1, 0, 1); p->reload_clip = AK_ATAB(gt, base, 0, 2);
    p->idle_vars[0] = AK_ATAB(gt, 4, 18, 0); p->idle_vars[1] = AK_ATAB(gt, 4, 19, 0);
    p->pidle_vars[0] = AK_ATAB(gt, base, 18, 0); p->pidle_vars[1] = AK_ATAB(gt, base, 19, 0); p->idle_var = -1;   /* (the rifle set's: the bots' idle variations) */
    /* the deaths: rows 20-23, one at random each time (traced, 0899FF38: 20 + (the game's random >> 1 & 3), unless the soldier's
       +196 is set - then row 32 for a 089DE500 body, else none; neither seen in play) */
    static const int drow[4] = { 20, 21, 22, 23 }, rrow[4] = { 26, 24, 25, 27 };   /* (rolls: dive, left, right, back) */
    for (int k = 0; k < 4; k++) if (AK_ATAB(gt, base, drow[k], 0) >= 0) p->death_clips[k] = AK_ATAB(gt, base, drow[k], 0);
    for (int k = 0; k < 4; k++) {
        s32 ci = AK_ATAB(gt, base, rrow[k], 0); if (ci < 0) continue;
        const ak_anim_clip *cl = &m->clips[ci]; p->roll_clip[k] = ci; p->roll_dur[k] = cl->duration > 0.1f ? cl->duration : 0.6f;
        if (cl->nchannels > 0) { const ak_anim_channel *a = &cl->chan[cl->nchannels - 1];
            if (a->pos_count >= 2) { const f32 *p0 = cl->pos[a->pos_first], *p1 = cl->pos[a->pos_first + a->pos_count - 1];
                f32 dx = p1[0] - p0[0], dz = p1[2] - p0[2]; p->roll_len[k] = sqrtf(dx * dx + dz * dz); } }
        if (p->roll_len[k] < 0.5f) p->roll_len[k] = 2.0f;
    }
    if (p->roots) for (int k = PLAY_JUMP; k <= PLAY_LAND; k++) {               /* (the air's clips carry nothing) */
        if (p->clip[k] >= 0) p->roots[p->clip[k]].n = 0;
        if (p->aclip[k] >= 0) p->roots[p->aclip[k]].n = 0; }
    ak_loco_reset(&p->loco, p->clip[PLAY_IDLE]);
}

/* ------------------------------------------------------------------ bots */
/* a bot's aim (traced: 08934E38 -> 088F79C0): the line from `from` to `tgt` turned to a direction drawn uniformly over the spherical cap
 * of half-angle `acc` (radians), the distance kept */
static void aim_cap(u32 *seed, const f32 *from, f32 *tgt, f32 acc)
{
    f32 dx = tgt[0] - from[0], dy = tgt[1] - from[1], dz = tgt[2] - from[2], d = sqrtf(dx * dx + dy * dy + dz * dz);
    if (d < 1e-3f || acc <= 0) return;
    f32 u[3] = { dx / d, dy / d, dz / d }, a[3], v1[3], v2[3];
    if (fabsf(u[1]) < 0.9f) { a[0] = 0; a[1] = 1; a[2] = 0; } else { a[0] = 1; a[1] = 0; a[2] = 0; }
    v1[0] = u[1] * a[2] - u[2] * a[1]; v1[1] = u[2] * a[0] - u[0] * a[2]; v1[2] = u[0] * a[1] - u[1] * a[0];
    f32 l = sqrtf(v1[0] * v1[0] + v1[1] * v1[1] + v1[2] * v1[2]); for (int k = 0; k < 3; k++) v1[k] /= l;
    v2[0] = u[1] * v1[2] - u[2] * v1[1]; v2[1] = u[2] * v1[0] - u[0] * v1[2]; v2[2] = u[0] * v1[1] - u[1] * v1[0];
    f32 ct = 1.0f - rnd(seed) * (1.0f - cosf(acc)), st = sqrtf(fmaxf(0, 1 - ct * ct)), ph = rnd(seed) * 6.2831853f;
    for (int k = 0; k < 3; k++) tgt[k] = from[k] + (u[k] * ct + (v1[k] * cosf(ph) + v2[k] * sinf(ph)) * st) * d;
}

static void bot_route(ak_play *p, ak_play_bot *b, const f32 *to)
{
    s32 s = ak_nav_nearest(&p->nav, b->ch.pos, 40.0f), g = ak_nav_nearest(&p->nav, to, 40.0f); f32 cost;
    b->npath = (s >= 0 && g >= 0) ? ak_nav_path(&p->nav, (u32)s, (u32)g, 0, b->path, 128, &cost, &p->scratch) : 0;
    b->path_i = 0;
}

/* the way to `to` through `n` points first (each leg a navigation path between the points' nearest nodes, joined) */
static void bot_route_via(ak_play *p, ak_play_bot *b, const f32 (*via)[3], u32 n, const f32 *to)
{
    s32 cur = ak_nav_nearest(&p->nav, b->ch.pos, 40.0f); u32 np = 0; f32 cost;
    for (u32 k = 0; k <= n && cur >= 0; k++) {
        s32 g = ak_nav_nearest(&p->nav, k < n ? via[k] : to, 40.0f); if (g < 0) continue;
        u32 seg[128]; u32 ns = ak_nav_path(&p->nav, (u32)cur, (u32)g, 0, seg, 128, &cost, &p->scratch);
        for (u32 i = (np && ns && b->path[np - 1] == seg[0]) ? 1 : 0; i < ns && np < 128; i++) b->path[np++] = seg[i];
        cur = g;
    }
    b->npath = np; b->path_i = 0;
}

static bool bot_take_vehicle(ak_play *p, ak_play_bot *b);
static void bot_drive(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 idx, f32 dt);
static bool vehicle_exit_spot(const ak_play *p, const ak_vehicle *vh, f32 out[3]);

/* a post its side does not hold (the nearest, with some randomness); every post held: defend one.  On foot it may take a free vehicle
 * of its side first. */
/* capture the flag: the side's AI (0892A9D0 / 08929EBC) keeps its own and the enemy's base and flag (spawner) positions, the
 * share of its squads sent to attack (the flag's +0x68, 0.7; HCTF +0x6C, 0.4) and which soldiers carry the flags (+0xCC ours,
 * +0xD0 theirs), and gives each squad a state: attack the enemy flag (2: order 0x3F3 to it), guard our own (3), take a carried
 * flag home (8 / 9: 0x3F4 to our base) or go after the carrier of ours (7 / 11).  Aurek has no squads yet, so each bot takes the
 * role for itself in that order of priority [PARITY(5.4 4.x) assumed: per bot, not per squad; the state switches not ported]. */
static bool bot_ctf_goal(ak_play *p, ak_play_bot *b, u32 idx)
{
    const ak_ctf_map *m = &p->ctf_map; const ak_ctf *s = &p->ctf; int me = b->team;
    const f32 *to = NULL; s32 mine = -1, theirs = -1, carried = -1;
    for (u32 f = 0; f < m->nflags; f++) {
        if (s->flag[f].carrier == (s32)(1 + idx)) carried = (s32)f;
        if (m->flag[f].side == me) mine = (s32)f; else theirs = (s32)f;      /* (CTF1: the neutral flag is theirs to take) */
    }
    if (carried >= 0) {                                                       /* take it home: our base (any we may score at) */
        for (u32 k = 0; k < m->nbases && !to; k++) if (m->base[k].side == me) to = m->base[k].pos;
    } else if (mine >= 0 && s->flag[mine].carrier >= 0) {                    /* after the carrier of our flag */
        s32 c = s->flag[mine].carrier; to = c == 0 ? p->ch.pos : p->bot[c - 1].ch.pos;
    } else if (theirs >= 0 && (mine < 0 || (b->ctf_role < 0 ? (b->ctf_role = rnd(&b->seed) < (ak_game_mode == 3 ? 0.4f : 0.7f)) : b->ctf_role))) {
        to = s->flag[theirs].carrier >= 0 ? NULL : s->flag[theirs].pos;      /* (taken by one of ours: escort it home) */
        if (!to) for (u32 k = 0; k < m->nbases && !to; k++) if (m->base[k].side == me) to = m->base[k].pos;
    } else if (mine >= 0) to = s->flag[mine].pos;
    if (!to) return false;
    if (b->ctf_role < 0) b->ctf_role = 0;
    b->goal = -2; b->holding = false; b->goal_t = carried >= 0 ? 2.0f : 4.0f + rnd(&b->seed) * 3.0f;
    f32 a = rnd(&b->seed) * 6.2831853f, r = carried >= 0 ? 0.5f : rnd(&b->seed) * 2.0f;
    b->hold[0] = to[0] + cosf(a) * r; b->hold[1] = to[1]; b->hold[2] = to[2] + sinf(a) * r;
    bot_route(p, b, b->hold);
    return true;
}

/* the leader of a bot's squad: its first member alive, on foot, not bound for a vehicle and not a hero (-1: none, or no squad) */
static s32 squad_leader(const ak_play *p, const ak_play_bot *b)
{
    if (b->squad < 0) return -1;
    for (u32 i = 0; i < p->nbots; i++) { const ak_play_bot *o = &p->bot[i];
        if (o->team == b->team && o->squad == b->squad && o->alive && o->veh < 0 && o->want_veh < 0 && !o->hero) return (s32)i; }
    return -1;
}

/* ---- the AI commander (traced; constants read live on the original, Boz Pity, harness gdb tools/harness/gdb/ai_commander.py and
 * ai_priorities.py).  One per side.  It plans when its held posts change, or every 12 s (D_08AED470).  The posts it weighs come from
 * the links (ENTI type 22): targets = posts linked to ours that are not ours (08928170's +72), the front = our posts linked to theirs
 * (+73); every other post weighs 0.  A target's weight (089284B4) is 0.5 (D_08AED490) x the sum of the two largest weights of its
 * links whose other end is ours, x 0.8 / 1.0 / 2.0 (D_08AED478 / 474 / 47C) as the side holds more / as many as / fewer posts than the
 * other (08928424: own == 0 or the other's share over half -> 2.0; the other's 0 or ours over half -> 0.8); the front's (08928980) the
 * sum over links whose other end is theirs x 0.5 x 0.1 (D_08AED49C), 2.0 (D_08AED4A4) with one of the enemy's squads within 15 m
 * (D_08AED4A0).  Then each squad in turn (089279D4) takes the post with the most weight / (soldiers already sent there + 1), the first
 * squad of a plan x 5 (D_08AED468) on a target; the free squad nearest the post takes it; a target is to be taken (order 0x3F2), the
 * front held (0x3F5).  Read live: Alliance target 100005 3.6, Empire target 100006 9.0, fronts 0.45 - each side's squads go mostly
 * at the one post across Boz Pity's only frontier.  [assumed: a link end held by nobody counts 10 (D_08AED48C - its exact use not
 * followed); not ported: 08928980's soldier pass (25 m, 1.5), the squad given 0x3F0 on the object at +164 (the Alliance's 200035),
 * the busy squads (+44 / +42) and order 1015's early plan] */
static void commander_plan(ak_play *p, int team)
{
    const ak_conquest_map *m = &p->cq; u32 own = 0, foe = 0, n = m->nposts < 32 ? m->nposts : 32;
    for (u32 i = 0; i < n; i++) { if (m->post[i].absent || m->post[i].mobile || m->post[i].disabled) continue;
        int o = p->match.post[i].owner; if (o == team) own |= 1u << i; else if (o == 1 - team) foe |= 1u << i; }
    u32 own_adj = 0, foe_adj = 0;
    for (u32 i = 0; i < n; i++) { if (own >> i & 1) own_adj |= m->post[i].adj; if (foe >> i & 1) foe_adj |= m->post[i].adj; }
    u32 targets = own_adj & ~own, front = foe_adj & own;
    int co = 0, cf = 0, tot = 0; for (u32 i = 0; i < n; i++) { if (m->post[i].mobile || m->post[i].disabled) continue; tot++; co += own >> i & 1; cf += foe >> i & 1; }
    f32 f20 = co == 0 ? 2.0f : cf == 0 ? 0.8f : tot / co < 2 ? 0.8f : tot / cf < 2 ? 2.0f : 1.0f;
    f32 prio[32] = { 0 };
    for (u32 k = 0; k < n; k++) {
        bool tg = targets >> k & 1, fr = front >> k & 1; if (!tg && !fr) continue;
        f32 w1 = 0, w2 = 0;
        for (u32 l = 0; l < m->nlinks; l++) {
            const ak_post_link *L = &m->link[l]; s32 o = L->a == (s32)k ? L->b : L->b == (s32)k ? L->a : -1; if (o < 0) continue;
            int oo = p->match.post[o].owner; f32 w = L->weight;
            if (oo != 0 && oo != 1) w = 10.0f; else if (tg ? oo != team : oo != 1 - team) continue;
            if (w > w1) { w2 = w1; w1 = w; } else if (w > w2) w2 = w;
        }
        if (tg) prio[k] = 0.5f * (w1 + w2) * f20;
        else {
            f32 f21 = 0.1f;
            for (u32 i = 0; i < p->nbots; i++) { const ak_play_bot *o = &p->bot[i];
                if (o->team != 1 - team || o->squad < 0 || !o->alive || squad_leader(p, o) != (s32)i) continue;
                f32 dx = o->ch.pos[0] - m->post[k].pos[0], dy = o->ch.pos[1] - m->post[k].pos[1], dz = o->ch.pos[2] - m->post[k].pos[2];
                if (dx * dx + dy * dy + dz * dz < 15.0f * S * 15.0f * S) { f21 = 2.0f; break; } }
            prio[k] = 0.5f * (w1 + w2) * f21;
        }
    }
    s8 *sp = p->cmdr[team].sq_post; s8 old[64]; memcpy(old, sp, 64); memset(sp, -1, 64);
    s32 sent[32] = { 0 }; bool first = true;
    for (;;) {
        s32 best = -1; f32 bw = -10.0f;                                     /* D_08AED460 */
        for (u32 k = 0; k < n; k++) { if (m->post[k].mobile || m->post[k].disabled || m->post[k].absent) continue;
            f32 w = prio[k] / (f32)(sent[k] + 1); if (first && (targets >> k & 1)) w *= 5.0f; if (w > bw) { bw = w; best = (s32)k; } }
        if (best < 0) break;
        s32 bs = -1; f32 bd = 1e30f; s32 size = 0;                          /* the free squad nearest the post (its leader) */
        for (u32 i = 0; i < p->nbots; i++) { const ak_play_bot *o = &p->bot[i];
            if (o->team != team || o->squad < 0 || o->squad >= 64 || sp[(int)o->squad] >= 0 || squad_leader(p, o) != (s32)i) continue;
            f32 dx = o->ch.pos[0] - m->post[best].pos[0], dz = o->ch.pos[2] - m->post[best].pos[2], d = dx * dx + dz * dz;
            if (d < bd) { bd = d; bs = o->squad; } }
        if (bs < 0) break;
        for (u32 i = 0; i < p->nbots; i++) if (p->bot[i].team == team && p->bot[i].squad == bs && p->bot[i].alive) size++;
        sp[bs] = (s8)best; sent[best] += size; first = false;
    }
    for (u32 i = 0; i < p->nbots; i++) { ak_play_bot *o = &p->bot[i];   /* leaders sent elsewhere re-choose */
        if (o->team == team && o->squad >= 0 && o->squad < 64 && sp[(int)o->squad] != old[(int)o->squad] && squad_leader(p, o) == (s32)i) o->goal = -1; }
    p->cmdr[team].own = own; p->cmdr[team].foe = foe; p->cmdr[team].t = 0; p->cmdr[team].planned = true;
    {   static int dbg = -1; if (dbg < 0) dbg = ak_setting_int("AK_DEBUG_COMMANDER", 0);
        if (dbg) { char b[160] = ""; int l = 0; for (u32 k = 0; k < n && l < 140; k++) l += snprintf(b + l, sizeof b - l, " %u:%.2f%s", k, prio[k], targets >> k & 1 ? "t" : front >> k & 1 ? "f" : "");
                   char q[160] = ""; int ql = 0; for (int s2 = 0; s2 < 64 && ql < 140; s2++) if (sp[s2] >= 0) ql += snprintf(q + ql, sizeof q - ql, " sq%d->%d", s2, sp[s2]);
                   AK_INFO("ai", "commander %d plan at %.1f s (tickets %d / %d):%s |%s", team, p->match.time, p->match.tickets[0], p->match.tickets[1], b, q); } }
}
/* squad membership (traced: the commander's update 0892774C calls 08926220 every frame - the side's units are counted, skipping those
   whose flags +0xC8 bit 5 is set (wanting a vehicle: the spawner's chance, cleared when 089269AC finds none), and the size row for the
   count is taken). Measured on the original (Boz Pity, 3 min): 65 % of the Alliance's living soldiers and 37 % of the Empire's had
   no squad, their flags 0x20 / 0x28. Aurek: the bots that want a vehicle, are bound for one or ride one, the heroes and the pilots
   are out; the rest fill the size row in their list order, rebuilt when that set changes.  [assumed: the members are taken in the
   unit list's order - how 08926220's slots pick their members is not read] */
static void squads_rebuild(ak_play *p)
{
    static const u8 sizes[17][5] = { {0}, {1}, {2}, {2,1}, {2,1,1}, {2,2,1}, {2,2,1,1}, {2,2,2,1}, {2,2,2,1,1}, {3,2,2,1,1},
        {2,2,2,2,2}, {3,2,2,2,2}, {3,3,2,2,2}, {3,3,3,2,2}, {3,3,3,3,2}, {3,3,3,2,1}, {4,3,3,3,3} };
    static u64 last[2] = { ~0ull, ~0ull };
    for (int t = 0; t < 2; t++) {
        u64 set = 0; u32 n = 0;
        for (u32 i = 0; i < p->nbots && i < 64; i++) { const ak_play_bot *b = &p->bot[i];
            if (b->team != t || b->hero || b->pilot || b->wants_veh || b->want_veh >= 0 || b->veh >= 0) continue; set |= 1ull << i; n++; }
        if (set == last[t]) continue;
        last[t] = set;
        /* the squads re-formed: their orders lapse until the commander's next plan - measured on the original (Boz Pity, 2 min,
           RS_AI_BOTS with the squads' +0x2A / +0x2C): Alliance squads under 0x3F2 with no post (999) stood near their front post for
           73 of 2-second samples against 82 bound for the target [assumed: a re-formed squad's order resets - the reset itself not
           read in 08926220] */
        memset(p->cmdr[t].sq_post, -1, sizeof p->cmdr[t].sq_post);
        const u8 *row = sizes[n > 16 ? 16 : n]; u32 sq = 0, left = row[0], made = 0;
        for (u32 i = 0; i < p->nbots && i < 64; i++) { ak_play_bot *b = &p->bot[i]; if (b->team != t) continue;
            s8 was = b->squad;
            if (!(set >> i & 1)) { b->squad = -1; continue; }
            while (!left) { if (++sq >= 5 || !row[sq]) { sq = 0; made += 5; } left = row[sq]; }
            b->squad = (s8)(made + sq); left--;
            if (b->squad != was) { b->sq_slot = 0; b->sq_t = 0; b->goal = -1; }
        }
    }
}
static void commander_update(ak_play *p, f32 dt)
{
    if (!p->have_cq || !p->cmd_on) return;
    if (ak_setting_int("AK_BOT_SQUADS", 1)) squads_rebuild(p);
    for (int t = 0; t < 2; t++) {
        p->cmdr[t].t += dt;
        u32 own = 0, foe = 0; for (u32 i = 0; i < p->cq.nposts && i < 32; i++) { if (p->cq.post[i].absent || p->cq.post[i].mobile || p->cq.post[i].disabled) continue;
            int o = p->match.post[i].owner; if (o == t) own |= 1u << i; else if (o == 1 - t) foe |= 1u << i; }
        if (!p->cmdr[t].planned || p->cmdr[t].t >= 12.0f || own != p->cmdr[t].own || foe != p->cmdr[t].foe) commander_plan(p, t);
    }
}

static void bot_choose_goal(ak_play *p, ak_play_bot *b)
{
    if (p->have_ctf && b->veh < 0 && bot_ctf_goal(p, b, (u32)(b - p->bot))) return;
    if (b->veh < 0 && b->want_veh < 0 && bot_take_vehicle(p, b)) return;
    s32 best = -1; f32 bs = 1e30f; bool raid = false;
    if (p->have_cq && p->cmd_on && !p->have_ctf && b->veh < 0) {
        /* (a driver is in no squad and is not held: it goes to a post as before - measured on the original, Boz Pity 2 min: bot-
           driven Carrion_Spat moved for 12-79 s at a time; Aurek's drivers had stood where they boarded for the whole match, 9 of
           its bots out of play [assumed: the driver's post choice - the vehicle AI's goal not read]) */
        /* the commander's post for the squad; a squad it has not planned for yet (formed since its last plan) and a soldier in no
           squad stand where they are until the next plan - measured on the original (Boz Pity, 3 min, RS_AI_BOTS): within 40 m of
           the Alliance's front post 100006, squads under 0x3F2 with no post (999) stood (median 0 m per 2 s, 126 samples), as did
           soldiers in no squad not wanting a vehicle (60) [assumed: they hold their spot; re-checked each second] */
        s32 k = b->squad >= 0 && b->squad < 64 && p->cmdr[b->team & 1].planned ? p->cmdr[b->team & 1].sq_post[(int)b->squad] : -1;
        /* a squad with a dismounted soldier in it goes for the post nearest that soldier that its side does not hold (read: the
           commander's update 0892745C, for each unit of its side on foot whose +329 is set - set with the vehicle wish when an AI
           gets out (0894B2C4), cleared when it boards or dies - gives the unit's squad 0x3F2 (+76 = 1010) for 08926DF0(pos, 1): the
           nearest post not its side's, no distance limit; seen live: the Imperial 30d9c, squadless by the Alliance's 100007, put in a
           squad under 0x3F2 for 100007 at 92 s, which fell at 113 s with no commander order for it) [assumed: Aurek's raider flag is
           set where its bots get out; the unit's vfunc +168 test not read] */
        if (b->squad >= 0) for (u32 j = 0; j < p->nbots; j++) {
            const ak_play_bot *o = &p->bot[j];
            if (!o->alive || !o->raider || o->veh >= 0 || o->team != b->team || o->squad != b->squad) continue;
            s32 nb = -1; f32 nd = 1e30f;
            for (u32 i = 0; i < p->cq.nposts; i++) { if (p->match.post[i].owner == o->team || p->cq.post[i].disabled || p->cq.post[i].absent) continue;
                f32 dx = p->cq.post[i].pos[0] - o->ch.pos[0], dz = p->cq.post[i].pos[2] - o->ch.pos[2]; if (dx * dx + dz * dz < nd) { nd = dx * dx + dz * dz; nb = (s32)i; } }
            if (nb >= 0) { k = nb; raid = true; }   /* (no link walk: this order carries no link) */
            break;
        }
        if (k >= 0) best = k;
        else { b->goal = -2; b->holding = true; b->goal_t = 1.0f; memcpy(b->hold, b->ch.pos, 12); b->npath = b->path_i = 0; return; }
    }
    for (u32 i = 0; best < 0 && p->have_cq && i < p->cq.nposts; i++) {
        if (p->cq.post[i].disabled) continue;
        const ak_post_state *ps = &p->match.post[i];
        if (ps->owner == b->team && ps->progress >= p->cq.post[i].amount) continue;
        f32 dx = p->cq.post[i].pos[0] - b->ch.pos[0], dz = p->cq.post[i].pos[2] - b->ch.pos[2];
        f32 sc = sqrtf(dx * dx + dz * dz) * (0.6f + 0.8f * rnd(&b->seed));
        if (sc < bs) { bs = sc; best = (s32)i; }
    }
    if (best < 0 && p->have_cq) {
        u32 n = 0, c[AK_MAX_POSTS]; for (u32 i = 0; i < p->cq.nposts; i++) if (!p->cq.post[i].disabled) c[n++] = i;
        if (n) best = (s32)c[(u32)(rnd(&b->seed) * n) % n];
    }
    b->goal = best; b->holding = false; b->goal_t = 4.0f + rnd(&b->seed) * 3.0f;
    if (best >= 0) {
        f32 a = rnd(&b->seed) * 6.2831853f, r = rnd(&b->seed) * 3.0f;         /* a spot inside the capture radius */
        b->hold[0] = p->cq.post[best].pos[0] + cosf(a) * r; b->hold[1] = p->cq.post[best].pos[1]; b->hold[2] = p->cq.post[best].pos[2] + sinf(a) * r;
        /* a squad sent by the commander goes along the post link from its own post (the original: 08926478 stores the chosen link at
           squad +80, and the leader's move message 0x8035 to the post carries the link id - 100167 for 100005-100006 - as its node,
           RS_MOVE_LOG; its soldiers were seen on the link's waypoints (113.5, 118.7) / (48.9, 152.8)).  The own post: the nearest
           post to the soldier (08926DF0 not read) [assumed: the path runs through the waypoints in order, then to the post] */
        static int lw = -1; if (lw < 0) lw = ak_setting_int("AK_SQUAD_LINK_WAYPOINTS", 1);
        if (lw && b->squad >= 0 && p->cmd_on && !raid) {
            /* (read live, gdb on the soldier's node chain: the original's attackers standing at the link's far end run their top node
               0x3E8 (vtable 0x08AF8780, start 08938718) with its default child 1002 / 0x3EA - the stand-and-fight node holding the infantry
               fire node 0893F2F8 - not the move child 1001 that a 0x8035 makes; so the move along the link had ended there, and the
               order 0x3F2 re-sends 0x8035 only when its goal moves (2.5 s / 3 m) - the leader waits at the far waypoint until the squad
               changes) [assumed: a move given a link node walks the link's waypoints and ends at the last; the squad's current post
               (08926DF0) is the nearest post its side holds] */
            if (b->link_goal == best && b->npath) { memcpy(b->hold, b->link_end, 12); return; }   /* the same order: no new move */
            s32 cur = -1; f32 cd = 1e30f;
            for (u32 i = 0; i < p->cq.nposts; i++) { if (p->match.post[i].owner != b->team || p->cq.post[i].mobile || p->cq.post[i].absent || p->cq.post[i].disabled) continue;
                f32 dx = p->cq.post[i].pos[0] - b->ch.pos[0], dz = p->cq.post[i].pos[2] - b->ch.pos[2]; if (dx * dx + dz * dz < cd) { cd = dx * dx + dz * dz; cur = (s32)i; } }
            for (u32 k = 0; cur >= 0 && cur != best && k < p->cq.nlinks; k++) {
                const ak_post_link *L = &p->cq.link[k];
                if (!L->nwp || !((L->a == cur && L->b == best) || (L->b == cur && L->a == best))) continue;
                f32 via[8][3]; for (u32 w = 0; w < L->nwp; w++) memcpy(via[w], L->wp[L->a == cur ? w : L->nwp - 1 - w], 12);
                memcpy(b->hold, via[L->nwp - 1], 12); memcpy(b->link_end, b->hold, 12);
                bot_route_via(p, b, (const f32 (*)[3])via, L->nwp - 1, b->hold); b->link_goal = best;
                if (ak_setting_int("AK_DEBUG_LINKS", 0)) AK_INFO("link", "%.1f s: bot %d (team %d, squad %d) to post %d along link %u, end %.0f %.0f, %u nodes", p->clock, (int)(b - p->bot), b->team, b->squad, best, k, b->hold[0], -b->hold[2], b->npath);
                return;
            }
        }
        if (ak_setting_int("AK_DEBUG_LINKS", 0) && b->link_goal >= 0) AK_INFO("link", "%.1f s: bot %d off its link (goal %d)", p->clock, (int)(b - p->bot), best);
        b->link_goal = -1;
    } else {                                                                 /* no posts (or none to take): roam */
        u32 n = (u32)(rnd(&b->seed) * p->nav.nnode) % p->nav.nnode; memcpy(b->hold, p->nav.node[n].pos, 12);
    }
    bot_route(p, b, b->hold);
}

static bool in_sight(const ak_play *p, const f32 *from, const f32 *to)
{
    f32 d[3] = { to[0] - from[0], to[1] - from[1], to[2] - from[2] }, l = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
    if (l < 1e-3f) return true;
    for (int k = 0; k < 3; k++) d[k] /= l;
    ak_col_hit h; return !ak_col_raycast(&p->col, from, d, l - 0.3f, 0, &h);
}

/* the nearest enemy seen from `pos` (eye `eye_h` above it) within `range`: in front or close (all round: turrets) */
static s32 find_enemy(ak_play *p, int team, const f32 *pos, f32 yaw, f32 eye_h, f32 range, bool all_round)
{
    u32 nt = NT(p); s32 best = -1; f32 bd = range * range;
    f32 eye[3] = { pos[0], pos[1] + eye_h, pos[2] }, fx = -sinf(yaw), fz = -cosf(yaw);
    s32 cand[4]; f32 cd[4]; u32 nc = 0;
    for (u32 i = 0; i < nt; i++) {
        const ak_target *t = &p->target[i];
        if (!t->alive || t->team == team) continue;
        if (i >= NP(p)) continue;                                            /* (the props are no threat) */
        if (i >= NS(p) && i < NV(p) && p->veh[i - NS(p)].driver < 0) continue;   /* empty vehicles are no threat */
        f32 dx = t->feet[0] - pos[0], dy = t->feet[1] - pos[1], dz = t->feet[2] - pos[2], d2 = dx * dx + dy * dy + dz * dz;
        if (d2 > bd) continue;
        f32 d = sqrtf(d2); if (!all_round && d > 12.0f && (dx * fx + dz * fz) < -0.2f * d) continue;   /* behind it and not close: unseen */
        /* keep the 4 nearest */
        u32 k;
        if (nc < 4) k = nc++;
        else if (d2 < cd[3]) k = 3;
        else continue;
        cand[k] = (s32)i; cd[k] = d2;
        while (k > 0 && cd[k] < cd[k - 1]) { s32 ti = cand[k]; f32 tf = cd[k]; cand[k] = cand[k - 1]; cd[k] = cd[k - 1]; cand[k - 1] = ti; cd[k - 1] = tf; k--; }
    }
    for (u32 k = 0; k < nc && best < 0; k++) {
        const ak_target *t = &p->target[cand[k]]; f32 c[3] = { t->feet[0], t->feet[1] + 1.2f * S, t->feet[2] };
        if (in_sight(p, eye, c)) best = cand[k];
    }
    return best;
}
/* A soldier bot's sight (traced: the AI sensor, class vtable 0x08AF96F0, update 08961A50, built by 08961784 / 0892538C):
 * - range 55 m (+32, D_08AEDFAC) x a multiplier (+48, 1.0); a view cone of +-45 degrees across and up / down around the sensor's
 *   facing (+36/+40/+44: tan of D_08AED434 = pi/4; the test 089258F8 in the sensor's own frame: |x| <= z tan, y <= z tan, z >= 0);
 * - the eye: the soldier's position raised by min(0.9 x its height, 2 m) (0896293C); the sight line goes to the enemy's aim point
 *   and must reach it to within 0.01 m (08835014 / 08834E84);
 * - each enemy seen goes on its record list (new: age 0, awareness 1; seen again: its position is updated, the age runs on);
 * - every frame the records age by dt and go when 2 s old (D_08B1B77C) or when the enemy is dead or gone - an enemy still in view
 *   is put back the same frame, so one out of view is remembered for what was left of its record's 2 s;
 * - the target (08962DAC): the record nearest by its last-seen position whose awareness is above 0.99.
 * Not traced: what turns the sensor (Aurek: the soldier's facing), the second object list it scans (08961C58: D_08C2B2A8, records
 * with a distance at +52) and the branch that zeroes a record's awareness (it then grows back at 2/3 per second).  [PARITY(4.2)] */
static bool bot_can_see(ak_play *p, const ak_play_bot *b, const f32 *eye, const ak_target *t, f32 *aim)
{
    aim[0] = t->feet[0]; aim[1] = t->feet[1] + 1.2f * S; aim[2] = t->feet[2];
    f32 dx = aim[0] - eye[0], dy = aim[1] - eye[1], dz = aim[2] - eye[2], d2 = dx * dx + dy * dy + dz * dz;
    if (d2 > 55.0f * S * 55.0f * S * p->sense_mult * p->sense_mult) return false;
    f32 fx = -sinf(b->ch.yaw), fz = -cosf(b->ch.yaw), z = dx * fx + dz * fz, x = dx * -fz + dz * fx;   /* the facing's frame */
    if (z < 0 || fabsf(x) > z || fabsf(dy) > z) return false;                                         /* (tan 45 = 1) */
    return in_sight(p, eye, aim);
}
static void bot_sense(ak_play *p, ak_play_bot *b, f32 dt)
{
    for (u32 k = 0; k < b->nmem;) {                                              /* age; drop the old and the dead */
        b->mem[k].age += dt; const ak_target *t = &p->target[b->mem[k].t];
        bool gone = !t->alive || t->team == b->team || (b->mem[k].t >= (s32)NS(p) && b->mem[k].t < (s32)NV(p) && p->veh[b->mem[k].t - NS(p)].driver < 0);
        if (b->mem[k].age >= 2.0f || gone) b->mem[k] = b->mem[--b->nmem]; else k++;
    }
    f32 eye[3] = { b->ch.pos[0], b->ch.pos[1] + fminf(0.9f * 1.8f * S, 2.0f * S), b->ch.pos[2] };
    u32 nt = NT(p);
    for (u32 i = 0; i < nt; i++) {
        const ak_target *t = &p->target[i];
        if (!t->alive || t->team == b->team || i >= NP(p)) continue;       /* (bots leave the props alone [assumed]) */
        if (i >= NS(p) && i < NV(p) && p->veh[i - NS(p)].driver < 0) continue;   /* empty vehicles are no threat */
        if (i >= NV(p) && p->in_turret != (s32)(i - NV(p)) && p->turret[i - NV(p)].def->boardable) continue;   /* nor an empty turret
            (one a soldier mans) - the original's training turret stood untouched among the stormtroopers (ct26) [assumed: the rule] */
        f32 aim[3]; if (!bot_can_see(p, b, eye, t, aim)) continue;
        u32 k = 0; while (k < b->nmem && b->mem[k].t != (s16)i) k++;
        if (k == b->nmem) { if (b->nmem == sizeof b->mem / sizeof b->mem[0]) continue; b->nmem++; b->mem[k].t = (s16)i; b->mem[k].age = 0; b->mem[k].aware = 1.0f; }
        memcpy(b->mem[k].pos, t->feet, 12);
        /* the soldier's "can be locked" (vfunc +32, 089DCC94: its +0x84 run out, and not riding - riders are not targets here): when
           it cannot, the record's awareness is zeroed (08961A50) - so for "roll no lock on time" after a roll the bots lose the player
           and the awareness grows back at 2/3 a second; the target needs it above 0.99 (1.7b) */
        if (i == 0 && p->roll_nolock_t > 0) b->mem[k].aware = 0;
        else if (b->mem[k].aware < 1.0f) b->mem[k].aware = fminf(1.0f, b->mem[k].aware + dt * (2.0f / 3.0f));
    }
}
static s32 bot_find_enemy(ak_play *p, ak_play_bot *b)
{
    s32 best = -1; f32 bd = 1e30f;
    for (u32 k = 0; k < b->nmem; k++) {
        if (b->mem[k].aware <= 0.99f) continue;                                   /* (08962DAC: awareness above 0.99) */
        f32 dx = b->mem[k].pos[0] - b->ch.pos[0], dy = b->mem[k].pos[1] - b->ch.pos[1], dz = b->mem[k].pos[2] - b->ch.pos[2], d2 = dx * dx + dy * dy + dz * dz;
        if (d2 < bd) { bd = d2; best = b->mem[k].t; }
    }
    return best;
}


/* ------------------------------------------------------------------ heroes */
/* Traced (func 08974318, every frame, per side): a countdown from BFF.HeroUnlockTime (minutes x 60; the game's default 3, func
 * 0897782C; the campaign's missions 240 s, x0.75 on some) runs while there is no hero; at 0 the best-scoring human of the side not
 * marked as having declined is offered the hero and has BFF.HeroDecideTime (30 s, 0x08B1B928) to accept; no answer or a no marks him
 * and the countdown restarts at 5 s (0x08AEE2F0); a side with no human to offer it gives the hero at once to one of its bots
 * (func 089826E8: a new unit of the hero's class where the old one stood).  When the hero dies the countdown restarts from the full
 * time and the marks are cleared.  The hero of a side is its faction's Humanoid with Hero = 1 that the level has a model for (the game
 * reads it from a per-faction table, hash 0x203E217D, not traced: where a level has two, the first in blueprint order is taken). */   /* PARITY(3.5) */
static void heroes_init(ak_play *p, const ak_blueprints *bp, const ak_model_set *m)
{
    static const char *sab_idle[] = { "Human_saber_ready_idle", "Human_Jedi_Stand_Idle_Block", NULL }, *sab_run[] = { "Human_jedi_Stand_run", "Human_Jedi_Stand_RunForward", NULL };
    static const char *sab_back[] = { "Human_Jedi_Stand_WalkBackward", "Human_sabre_Stand_WalkBackward", NULL };
    static const char *sab_left[] = { "Human_Jedi_Stand_RunForward_left", NULL }, *sab_right[] = { "Human_Jedi_Stand_RunForward_Right", NULL };
    static const char *sab_jump[] = { "Human_Lightsaber_jump_attack3", NULL }, *sab_land[] = { "Human_Jedi_LandSoft", NULL };
    p->sclip[PLAY_IDLE] = find_clip(m, sab_idle); p->sclip[PLAY_RUN] = find_clip(m, sab_run); p->sclip[PLAY_BACK] = find_clip(m, sab_back);
    p->sclip[PLAY_LEFT] = find_clip(m, sab_left); p->sclip[PLAY_RIGHT] = find_clip(m, sab_right);
    p->sclip[PLAY_JUMP] = p->clip[PLAY_JUMP]; p->sclip[PLAY_FALL] = p->clip[PLAY_FALL]; p->sclip[PLAY_LAND] = find_clip(m, sab_land);
    p->sclip[PLAY_SPRINT] = p->sclip[PLAY_RUN];                                /* (sabres: the run, faster) */
    (void)sab_jump;
    for (int k = 0; k < PLAY_NCLIPS; k++) if (p->sclip[k] < 0) p->sclip[k] = p->clip[k];
    memset(p->fan, 0, sizeof p->fan); p->fan[0].unit = p->fan[1].unit = -1;
    const ak_bp_type *ty = ak_bp_find_type(bp, "Humanoid");
    f32 unlock = ak_setting_float("AK_HERO_UNLOCK", 3.0f) * 60.0f;   /* PARITY(5.2) */
    for (int t = 0; t < 2; t++) {
        ak_play_hero *h = &p->hero[t]; memset(h, 0, sizeof *h); h->unit = h->offered = -1;
        if (!ak_setting_int("AK_HEROES", 1) || p->is_space) continue;           /* (space: the hero flyers come later) */
        for (u32 i = 0; ty && i < ty->nobjects && !h->enabled; i++) {
            const ak_bp_object *o = &ty->objects[i];
            if (!ak_bp_int(o, "Hero", 0) || ak_bp_int(o, "Faction", -1) != p->team_faction[t]) continue;
            if (!ak_soldier_look_make(bp, m, o->name, 0, -1, -1, &h->look) || !poseable(m, &h->look)) continue;
            h->look.head = -1; h->enabled = true; h->name = o->name;
        }
        if (!h->enabled) continue;
        const ak_bp_object *o = h->look.bp;
        h->health = ak_bp_float(o, "Health", 600.0f); h->drain = ak_bp_float(o, "HeroDeathRate", 0.01f); h->per_kill = ak_bp_float(o, "HeroHealthAddPerKill", 0.07f);
        for (int k = 1; k <= 5 && !h->armed; k++) {                             /* its first lightsaber or gun among Loadout_1..5 */
            char key[16]; snprintf(key, sizeof key, "Loadout_%d", k);
            const char *wn = ak_bp_string(o, key, "");
            if (!*wn) continue;
            if (!strncmp(wn, "Lightsaber", 10)) {
                const ak_bp_object *wb = ak_bp_find(bp, "Weapon", wn); if (!wb) continue;
                ak_weapon_def *d = &h->wdef; memset(d, 0, sizeof *d); d->bp = wb; d->name = wn;
                d->model = ak_models_find(m, "LightSabre");
                d->rate_of_fire = ak_bp_float(wb, "RateOfFire", 0.2f); d->clip = -1; d->clips = -1;
                d->length = ak_bp_float(wb, "Length", 1.0f); d->thickness = ak_bp_float(wb, "Thickness", 0.3f); d->colour = (u32)ak_bp_int(wb, "Colour", -65536);
                const ak_bp_object *pj = ak_bp_find(bp, "Projectile", ak_bp_string(wb, "Projectile", "Lightsaber"));
                d->dmg_infantry = pj ? ak_bp_float(pj, "DamageToInfantry", 30) : 30; d->dmg_vehicle = pj ? ak_bp_float(pj, "DamageToVehicle", 10) : 10;
                h->saber = h->armed = true;
            } else if (ak_weapon_def_load(bp, m, wn, p->team_faction[t], &h->wdef) && h->wdef.model >= 0 && (h->wdef.dmg_infantry > 0 || h->wdef.hitscan)) h->armed = true;
        }
        h->power = NULL;                                                      /* its force power: the first ForcePowers weapon among Loadout_1..5
                                                                                 (Force_Jump has no Weapon blueprint - not one) */
        for (int k = 1; k <= 5 && !h->power; k++) {
            char key[16]; snprintf(key, sizeof key, "Loadout_%d", k); const char *wn = ak_bp_string(o, key, "");
            const ak_bp_object *wb = (!strncmp(wn, "Force_", 6) || !strcmp(wn, "Throw_Lightsaber")) ? ak_bp_find(bp, "Weapon", wn) : NULL; if (!wb) continue;
            h->power = wn; h->power_cost = ak_bp_float(wb, "Stamina", 60); h->power_rate = ak_bp_float(wb, "RateOfFire", 1); h->power_humans = ak_bp_int(wb, "OnlyLockOntoHumanoids", 1) != 0;
            h->power_throw = !strcmp(wn, "Throw_Lightsaber"); h->power_cool = 0;
            if (h->power_throw) { const ak_bp_object *pj = ak_bp_find(bp, "Projectile", ak_bp_string(wb, "Projectile", "Lightsaber_Thrown"));
                h->power_dmg = pj ? ak_bp_float(pj, "DamageToInfantry", 100) : 100; h->power_dmgv = pj ? ak_bp_float(pj, "DamageToVehicle", 25) : 25;
                h->power_range = pj ? ak_bp_float(pj, "ProjectileSpeed", 10) * ak_bp_float(pj, "Timer", 1) : 10; }
            else { h->power_dmg = ak_bp_float(wb, "DamageToInfantry", 20); h->power_dmgv = 0; h->power_range = ak_bp_float(wb, "MaxRange", 50); }
        }
        h->bdef = h->wdef;
        if (h->armed && h->wdef.bp && ak_setting_int("AK_BOT_GAME_MODIFIERS", 1)) {
            f32 md = ak_bp_float(h->wdef.bp, "Modifier_Bot_Damage", 1);
            h->bdef.bot_dmg = md; h->bdef.ai = true;
        }
        /* its animation table (traced data: the level's ATEX for the blueprint's Animtable): rows 0 idle, 3 run, 4 run back, 5 / 6
           strafe, 8 jump, 13 land, 16 fall; 17-19 the attack combo */
        h->tab = ak_anim_table_find(m, ak_bp_string(o, "Animtable", "generic_male"));
        if (h->tab && h->tab->cols < 10) h->tab = NULL;                         /* (the soldiers' generic_male: they keep their own clips) */
        static const int row[PLAY_NCLIPS] = { [PLAY_IDLE] = 0, [PLAY_RUN] = 3, [PLAY_BACK] = 4, [PLAY_LEFT] = 5, [PLAY_RIGHT] = 6, [PLAY_JUMP] = 8, [PLAY_FALL] = 16, [PLAY_LAND] = 13, [PLAY_SPRINT] = 3,
                                              [PLAY_WALK] = 1, [PLAY_WALK_BACK] = 2 };
        for (int k = 0; k < PLAY_NCLIPS; k++) {
            h->clip[k] = h->saber ? p->sclip[k] : p->clip[k];
            if (h->tab && row[k] < (int)h->tab->rows && AK_ATAB(h->tab, 0, row[k], 0) >= 0) h->clip[k] = AK_ATAB(h->tab, 0, row[k], 0);
        }
        if (h->tab && h->clip[PLAY_BACK] == (h->saber ? p->sclip[PLAY_BACK] : p->clip[PLAY_BACK]) && AK_ATAB(h->tab, 0, 2, 0) >= 0) h->clip[PLAY_BACK] = AK_ATAB(h->tab, 0, 2, 0);
        h->natk = 0; h->atk_i = -1;
        for (int r = 17; h->tab && r <= 19 && r < (int)h->tab->rows; r++) if (AK_ATAB(h->tab, 0, r, 0) >= 0) h->atk[h->natk++] = AK_ATAB(h->tab, 0, r, 0);
        h->unlock = h->timer = unlock;
        AK_INFO("hero", "%s: %s (%s, health %.0f, table %s with %u attacks), after %.0f s", ak_faction_name(p->team_faction[t]), h->name, h->armed ? h->wdef.name : "unarmed",
                h->health, ak_bp_string(o, "Animtable", "generic_male"), h->natk, unlock);
    }
}

static void hero_make(ak_play *p, const ak_model_set *m, int t, s32 unit)
{
    AK_VERBOSE("hero", "side %d's hero goes to unit %d", t, (int)unit);
    ak_play_hero *h = &p->hero[t]; ak_target *tg = &p->target[unit];
    h->unit = unit; h->offered = -1; h->atk_i = -1;
    if (unit == 0) {
        p->look = h->look; p->wdef = h->wdef; p->armed = h->armed; p->max_health = h->health;
        if (p->armed) { ak_weapon_give(&p->weapon, &p->wdef); p->weapon.team = p->team; p->weapon.owner = 0; p->weapon.heats = true; }
        p->state = PLAY_IDLE; p->clip_t = 0; p->lock = -1;
        anim_sets(p, m);                                                 /* a blaster hero: the set by its own weapon's AnimPose (PARITY 6.5) */
    } else {
        ak_play_bot *b = &p->bot[unit - 1];
        b->look = h->look; b->hero = true; b->state = PLAY_IDLE; b->clip_t = 0;
        if (h->armed) { ak_weapon_give(&b->weapon, &h->bdef); b->weapon.team = b->team; b->weapon.owner = unit; } else b->weapon.def = NULL;
    }
    tg->health = tg->max_health = h->health; tg->headshot_mult = ak_bp_float(h->look.bp, "Headshot multiplier", 4.0f);
    if (unit == 0) p->health = h->health;
    (void)m;
    if (ak_setting_int("AK_DEBUG_HERO", 0)) AK_INFO("hero", "%.1f s: %s is %s", p->clock, unit ? "a bot" : "the player", h->name);
}

/* a hero wears out: HeroDeathRate, the share of its health lost a second (before the frame's casualties are counted) */
static void heroes_drain(ak_play *p, f32 dt)
{
    if (ak_game_mode == 3) return;                                          /* (08982DA4: not in mode 3 - hero CTF) */
    for (int t = 0; t < 2; t++) {
        ak_play_hero *h = &p->hero[t]; if (h->unit < 0) continue;
        ak_target *tg = &p->target[h->unit]; if (!tg->alive) continue;
        tg->health -= h->drain * h->health * dt;
    }
}

/* a unit back to its soldier (at its next spawn) */
static void hero_unmake_player(ak_play *p, const ak_model_set *m) { p->look = p->base_look; p->wdef = p->base_wdef; p->armed = p->base_armed; p->max_health = p->base_max_health; anim_sets(p, m); }

static void heroes_update(ak_play *p, const ak_model_set *m, f32 dt)
{
    for (int t = 0; t < 2; t++) {
        ak_play_hero *h = &p->hero[t];
        if (!h->enabled || (p->have_cq && p->match.winner >= 0)) continue;
        if (h->unit >= 0) {
            ak_target *tg = &p->target[h->unit];
            if (!tg->alive) {                                                   /* the hero fell: the countdown starts again */
                h->unit = -1; h->timer = h->unlock; if (p->team == t) p->hero_declined = false;
                continue;
            }
            continue;
        }
        if (h->offered >= 0) {                                                  /* the player decides */
            int ans = p->hero_answer; if (ak_setting_int("AK_TEST_HERO", 0)) ans = 1;
            h->decide -= dt;
            if (ans > 0 && p->alive && p->in_veh < 0) hero_make(p, m, t, 0);
            else if (ans < 0 || h->decide <= 0) { h->offered = -1; h->timer = 5.0f; p->hero_declined = true; }
            p->hero_answer = 0;
            continue;
        }
        if (h->timer > 0) { h->timer -= dt; continue; }
        if (p->team == t && !p->hero_declined) { h->offered = 0; h->decide = 30.0f; p->hero_answer = 0; continue; }
        for (u32 i = 0; i < p->nbots; i++) {
            ak_play_bot *b = &p->bot[i];
            if (b->team == t && b->alive && b->veh < 0 && b->want_veh < 0) { hero_make(p, m, t, (s32)(1 + i)); break; }
        }
    }
}

static ak_play_hero *hero_of(ak_play *p, s32 unit) { for (int t = 0; t < 2; t++) if (unit >= 0 && p->hero[t].unit == unit) return &p->hero[t]; return NULL; }
/* a lightsaber stroke (Weapon "Lightsaber": Projectile "Lightsaber" DamageToInfantry 30 / DamageToVehicle 10 every RateOfFire 0.2 s,
   blade Length 1 m): every enemy within reach in front.  The game's saber combat (its clips, blocking, combos) is not traced yet. */   /* PARITY(6.5) */
static void saber_strike(ak_play *p, s32 unit, ak_weapon *w, const f32 *pos, f32 yaw)
{
    if (w->cooldown > 0) return;
    w->cooldown = w->def->rate_of_fire;
    f32 fx = -sinf(yaw), fz = -cosf(yaw), reach = (w->def->length > 0 ? w->def->length : 1.0f) + 1.2f;
    for (u32 i = 0; i < NT(p); i++) {
        ak_target *t = &p->target[i];
        if (!t->alive || (s32)i == unit || t->team == p->target[unit].team) continue;
        f32 dx = t->feet[0] - pos[0], dz = t->feet[2] - pos[2], d = sqrtf(dx * dx + dz * dz), r = reach + (t->vehicle ? t->radius : 0.3f);
        if (d > r || fabsf(t->feet[1] - pos[1]) > 2.0f || (d > 0.3f && (dx * fx + dz * fz) / d < 0.25f)) continue;
        t->health -= t->vehicle ? w->def->dmg_vehicle : w->def->dmg_infantry; t->last_attacker = unit; t->last_quiet = false; t->hits++;   /* (falls in the frame's count) */
    }
}

/* a saber hero's attack: the trigger starts the combo (its table's rows 17-19); pressed again in the second half of a stroke it goes
   on to the next; the blade hurts in the middle of each stroke (the Lightsaber's RateOfFire apart).  The game's own timing (when a
   stroke hurts, how a combo is chained) is not traced. */   /* PARITY(6.5) */
static void hero_attack(ak_play *p, const ak_model_set *m, ak_play_hero *h, bool trigger, ak_weapon *w, const f32 *pos, f32 yaw, f32 dt)
{
    if (!h->natk) { if (trigger) saber_strike(p, h->unit, w, pos, yaw); return; }
    if (h->atk_i < 0) { if (!trigger) return; h->atk_i = 0; h->atk_t = 0; h->atk_next = false; }
    else h->atk_t += dt;
    f32 dur = m->clips[h->atk[h->atk_i]].duration; if (dur < 0.1f) dur = 0.1f;
    if (trigger && h->atk_t > 0.4f * dur) h->atk_next = true;
    if (h->atk_t >= dur) {
        if (h->atk_next && h->atk_i + 1 < (int)h->natk) { h->atk_i++; h->atk_t = 0; h->atk_next = false; }
        else { h->atk_i = -1; return; }
    }
    if (h->atk_t > 0.15f * dur && h->atk_t < 0.85f * dur) saber_strike(p, h->unit, w, pos, yaw);
}

/* a bot's explosive (traced: the AI node 0893F1A8 -> 08940C7C, the target, -> 0893679C, the throw).  The throw is tried with the
 * chance 1 - (1 - k)^dt each frame, k 0.15 at the elite difficulty (08979DF4 == 2) and 0.05 below (about once in 20 s); the
 * target is the first enemy it has seen (not a vehicle) with another unit of its side within 3 m (08940C7C: a count from 0, +1
 * for each unit of the target's side within 3.0, itself included, against 1.5), and the aim is where that enemy will be when the
 * grenade lands (0893679C: its position + its velocity x the time).  The kind: the loadout's (thermal detonator, else cluster;
 * 0893FAE0 orders Weapon_Name 117, 127, 130).  The throw is the player's rule (08A1A77C, logged in the harness: bots' throws
 * carry the full (0, VerticalThrowSpeed, ProjectileSpeed), never scaled) with the bot's aim frame, whose pitch follows its aim -
 * level throws land about 23 m away, as the harness's 21-28 m.  [PARITY(2.3d): the pitch taken as the line to the target's
 * middle; no reach test; the lead's time is the flight's] */
/* a throw's velocity (traced 08A1A77C and logged in the harness, PARITY 2.3b): the aim frame times (0, VerticalThrowSpeed up,
 * ProjectileSpeed forward), moved at twice that, and the first 10 Hz step's 1.0 m/s off the climb; `down` is the frame's pitch
 * below the horizontal (radians) and (fx, fz) the unit facing */
static void throw_vel(f32 ps, f32 vts, f32 down, f32 fx, f32 fz, f32 *v)
{
    f32 cp = cosf(down), sp = sinf(down), fw = 2.0f * (ps * cp + vts * sp), up = 2.0f * (vts * cp - ps * sp) - 1.0f;
    v[0] = fx * fw; v[1] = up; v[2] = fz * fw;
}
/* where a throw from `a` with velocity v (gravity g) comes down to the height of `b`: the horizontal distance and the time */
static f32 throw_time(const f32 *a, const f32 *b, const f32 *v, f32 g)
{
    f32 h = a[1] - b[1], disc = v[1] * v[1] + 2 * g * h;
    return disc > 0 ? (v[1] + sqrtf(disc)) / g : v[1] > 0 ? 2 * v[1] / g : 0.1f;
}
static void target_velocity(const ak_play *p, s32 ti, f32 *vel)
{
    const ak_character *ch = ti == 0 ? &p->ch : ti >= 1 && (u32)ti <= p->nbots ? &p->bot[ti - 1].ch : NULL;
    if (ch) memcpy(vel, ch->vel, 12);
}
static void bot_grenade(ak_play *p, ak_play_bot *b, u32 idx, f32 dt)
{
    b->gren_cool -= dt;
    if (b->gren_t >= 0) {                                       /* a throw under way */
        b->gren_t += dt;
        if (b->gren_t < 37.0f / 60.0f) return;
        b->gren_t = -1;
        if (!b->alive || b->veh >= 0 || b->gren_kind < 0) return;
        f32 dx = b->gren_at[0] - b->ch.pos[0], dz = b->gren_at[2] - b->ch.pos[2], hd = sqrtf(dx * dx + dz * dz);
        if (hd < 0.01f) return;
        dx /= hd; dz /= hd;
        f32 at[3] = { b->ch.pos[0] + dx * 1.0f * S, b->ch.pos[1] + 2.1f * S, b->ch.pos[2] + dz * 1.0f * S };
        f32 ey = b->gren_at[1] + 1.0f * S - at[1], v[3];   /* (the aim's pitch at the target's middle: [assumed]) */
        throw_vel(p->ai_gren_ps[(int)b->gren_kind] * S, p->ai_gren_vts[(int)b->gren_kind] * S, -atan2f(ey, hd), dx, dz, v);
        ak_proj_throw(&p->projs, &p->ai_gren_def[(int)b->gren_kind], at, v, b->team, (s32)(1 + idx), 8.0f / 60.0f);
        ak_play_chatter(p, 1 + idx, "Speech_BC_Grenade");   /* (089395E4: the AI fires a "Grenade" kind) */
        if (ak_setting_int("AK_LOG_GRENADES", 0)) AK_INFO("play", "bot %u throws %s %.1f m (side %d) from %.1f %.1f %.1f at %.1f m/s, %.1f up", idx, b->gren_kind ? "cluster" : "thermal", hd / S, b->team, at[0], at[1], at[2], sqrtf(v[0] * v[0] + v[2] * v[2]), v[1]);
        return;
    }
    if (b->gren_kind < 0 || b->gren_left <= 0 || b->gren_cool > 0 || !b->alive || b->veh >= 0 || b->hero) return;
    f32 k = p->difficulty >= 2 ? 0.15f : 0.05f;
    if (rnd(&b->seed) >= 1.0f - powf(1.0f - k, dt)) return;
    u32 ns = NS(p);
    for (u32 m = 0; m < b->nmem; m++) {                         /* 08940C7C */
        s32 ti = b->mem[m].t; if (ti < 0 || (u32)ti >= ns) continue;    /* (soldiers only) */
        const ak_target *t = &p->target[ti]; if (!t->alive) continue;
        f32 n = 0;
        for (u32 j = 0; j < ns; j++) {
            const ak_target *o = &p->target[j]; if (!o->alive || o->team != t->team) continue;
            f32 ox = o->feet[0] - t->feet[0], oy = o->feet[1] - t->feet[1], oz = o->feet[2] - t->feet[2];
            if (ox * ox + oy * oy + oz * oz < 3.0f * S * 3.0f * S) n += 1.0f;
        }
        if (ak_setting_int("AK_LOG_GRENADES", 0) > 1) { f32 qx = t->feet[0] - b->ch.pos[0], qz = t->feet[2] - b->ch.pos[2]; AK_INFO("play", "bot %u: target %d with %.0f near, %.1f m", idx, ti, n, sqrtf(qx * qx + qz * qz) / S); }
        if (!(n > 1.5f)) continue;
        f32 ex = t->feet[0] - b->ch.pos[0], ez = t->feet[2] - b->ch.pos[2], d = sqrtf(ex * ex + ez * ez);
        if (d < 0.01f) continue;
        f32 rel[3] = { b->ch.pos[0], b->ch.pos[1] + 2.1f * S, b->ch.pos[2] }, tv[3], vel[3] = { 0, 0, 0 };
        int gk = (int)b->gren_kind;
        throw_vel(p->ai_gren_ps[gk] * S, p->ai_gren_vts[gk] * S, -atan2f(t->feet[1] + 1.0f * S - rel[1], d), ex / d, ez / d, tv);
        f32 tf = throw_time(rel, t->feet, tv, 10.0f * S);   /* (the lead's time: the flight's [assumed]) */
        target_velocity(p, ti, vel);
        for (int a = 0; a < 3; a++) b->gren_at[a] = t->feet[a] + vel[a] * tf;
        b->gren_t = 0; b->gren_left--; b->gren_cool = p->ai_gren_rate[(int)b->gren_kind];
        return;
    }
}
static void bot_update(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 idx, f32 dt, const ak_frustum *fr)
{
    ak_target *self = &p->target[1 + idx];
    b->alert_t -= dt; b->shoot_t += dt;
    if (!b->alive) {
        b->dead_t += dt;
        if (b->dead_t < 3.0f && poseable(m, &b->look)) pose(m, &b->look, b->death_clip, b->dead_t, false, b->bones);
        if (b->veh < 0 && b->dead_t < 5.0f) {                                  /* the body: stopped where it fell, gravity still on (PARITY 6.3) */
            ak_char_input ci = { 0, 0, 0, 0, false, false, false, { 0, 0 }, 0 };
            b->ch.vel[0] = b->ch.vel[2] = 0; ak_char_update(&b->ch, &p->cp, &p->col, &ci, dt); }
        return;
    }
    if (b->veh >= 0) { bot_drive(p, m, b, idx, dt); return; }
    b->veh_cool -= dt;
    if (b->want_veh < 0 && b->wants_veh && p->ready) bot_take_vehicle(p, b);   /* (the squad's pass, every frame) */
    if (b->want_veh >= 0) {                                                  /* on its way to a vehicle: still free?  close enough to get in? */
        const ak_vehicle *vh = &p->veh[b->want_veh];
        f32 dx = vh->pos[0] - b->ch.pos[0], dz = vh->pos[2] - b->ch.pos[2], r = vh->def ? vh->def->radius + 2.5f : 0;
        /* the order's node (0x8037, vtable 0x08AF8860; update 0893EA50): it goes on while the vehicle lives and has a free seat
           for the soldier's side, and boards within 0.8 m of the vehicle's hull (a sweep test, 0884AC90) - no time limit (Aurek had
           given up after 25 s) [assumed: Aurek keeps its own reach, the vehicle's radius + 2.5 m] */
        if (!vh->alive || vh->driver >= 0 || !veh_seat_for(p, (u32)b->want_veh, b->team)) { b->want_veh = -1; b->goal = -1; b->goal_t = 0; }
        else if (dx * dx + dz * dz < r * r && fabsf(vh->pos[1] - b->ch.pos[1]) < 4.0f) { bot_board(p, b, idx, (u32)b->want_veh); return; }
    }
    /* sight and the target, every frame as the game does (AK_BOT_SENSE_EVERY > 1 spreads it over frames for large bot counts) */
    b->sense_dt += dt;
    if (p->sense_every <= 1 || (p->frame_no + idx) % p->sense_every == 0) { bot_sense(p, b, b->sense_dt); b->sense_dt = 0; }
    b->enemy = p->bots_passive ? -1 : bot_find_enemy(p, b);
    /* think */
    b->think_t -= dt; b->goal_t -= dt;
    /* the squad (4.4): the first of its squad on foot leads and chooses the goal; the others follow under the move order 0x3F2 - re-given
       every ~0.5 s, its update 08932300 re-slots them every 1 s (D_08AED5F8): member k's point = the squad's point + (r sin t, 0,
       r cos t) in game x / z, t = the slot's angle + the squad's heading (08991E44; the formation read live: slot 0 the point, 1 and
       2 2.5 m at 0.785 / 5.498, 3 2.5 m at 3.142, 4 5.0 m at 3.142); a member at its point stands.  The squad's point read live moves
       with the squad (~5 m a second on Hoth) and its heading is atan2(dz, dx) of that movement (game axes) - so the offsets' sin / cos
       order mirrors the wedge about the 45-degree line, as the game does.  [assumed: the point is the leader's position; the slots
       go to the members in their order; heroes and bots bound for a vehicle act alone] */
    s32 lead = squad_leader(p, b); bool follow = lead >= 0 && lead != (s32)idx && b->want_veh < 0 && !b->hero;
    if (!follow) {
        b->sq_slot = 0; f32 vx = b->ch.vel[0], vz = b->ch.vel[2];
        if (vx * vx + vz * vz > 0.25f * S * S) b->sq_head = atan2f(-vz, vx);
    } else {
        const ak_play_bot *L = &p->bot[lead];
        b->goal = L->goal;
        if ((b->sq_t -= dt) <= 0) {
            static const f32 sr[5] = { 0, 2.5f, 2.5f, 2.5f, 5.0f }, sa[5] = { 0, 0.785398f, 5.497787f, 3.141593f, 3.141593f };
            u32 k = 1;
            for (u32 j = 0; j < idx; j++) { const ak_play_bot *o = &p->bot[j];
                if ((s32)j != lead && o->team == b->team && o->squad == b->squad && o->alive && o->veh < 0 && o->want_veh < 0 && !o->hero) k++; }
            if (k > 4) k = 4;
            b->sq_t = 1.0f; b->sq_slot = (s8)k;
            f32 t = sa[k] + L->sq_head;
            b->hold[0] = L->ch.pos[0] + sr[k] * sinf(t) * S; b->hold[1] = L->ch.pos[1]; b->hold[2] = L->ch.pos[2] - sr[k] * cosf(t) * S;
            b->holding = false;
            f32 dx = b->hold[0] - b->ch.pos[0], dz = b->hold[2] - b->ch.pos[2];
            if (dx * dx + dz * dz > 12.0f * S * 12.0f * S) bot_route(p, b, b->hold); else b->npath = b->path_i = 0;
        }
    }
    if (b->think_t <= 0) {
        b->think_t = 0.25f + rnd(&b->seed) * 0.1f;
        bool done = b->goal >= 0 && p->match.post[b->goal].owner == b->team && p->match.post[b->goal].progress >= p->cq.post[b->goal].amount;
        if (!follow && b->want_veh < 0 && (b->goal == -1 || (b->goal == -2 && b->goal_t <= 0) || (done && b->goal_t <= 0) || (b->holding && b->goal_t <= -20.0f))) bot_choose_goal(p, b);
    }
    if (b->enemy >= 0 && (!p->target[b->enemy].alive)) b->enemy = -1;
    /* where to go: along the route, then onto the post */
    f32 want[3]; bool moving = true;
    if (b->rt_on) {
        /* a scripted unit's route (measured, harness om_h5: Chewbacca spawned at his start node 187fa (its arrival group 32 fired
           in that frame), stood there 19.8 s - the node's 20 / 20 - then ran the spline to 187fc at ~5.4 m/s and stood again).
           [assumed: a node's high group as it leaves; the wait drawn between the two times; it does not stop to fight] */
        const ak_route *r = p->uspawn[b->uspawn].route;
        if (b->rt_wait < 0) {                                                 /* arrived at node rt_q */
            u32 ev = r->node_ev[b->rt_q]; b->rt_wait = r->node_wait[b->rt_q][0] + rnd(&b->seed) * (r->node_wait[b->rt_q][1] - r->node_wait[b->rt_q][0]);
            if ((ev & 0xFFFF) != 0xFFFF && p->have_script) ak_script_fire(&p->script, (s32)(ev & 0xFFFF), r->node_id[b->rt_q], script_sink, p);
            b->rt_i = (u16)(r->node_pt[b->rt_q] + 1);
        }
        if (b->rt_wait > 0) { b->rt_wait -= dt; if (b->rt_wait <= 0) { b->rt_wait = 0;
            u32 ev = r->node_ev[b->rt_q] >> 16; if (ev != 0xFFFF && p->have_script) ak_script_fire(&p->script, (s32)ev, r->node_id[b->rt_q], script_sink, p); } }
        if (b->rt_wait > 0 || b->rt_q + 1u >= r->nnodes || b->rt_i >= r->n) { memcpy(want, b->ch.pos, 12); moving = false; if (b->rt_q + 1u >= r->nnodes && b->rt_wait <= 0) b->rt_on = false; }
        else {
            memcpy(want, r->pt[b->rt_i], 12);
            f32 dx = want[0] - b->ch.pos[0], dz = want[2] - b->ch.pos[2];
            if (dx * dx + dz * dz < 1.0f * S * 1.0f * S) {
                if (b->rt_i == r->node_pt[b->rt_q + 1] || b->rt_i + 1u >= r->n) { b->rt_q++; b->rt_wait = -1; }
                else b->rt_i++;
            }
        }
    } else
    if (b->path_i < b->npath) {
        const ak_nav_node *nd = &p->nav.node[b->path[b->path_i]]; const f32 *np = nd->pos; memcpy(want, np, 12);
        {   /* its own line through the node (inside the node's radius), so a squad does not walk in single file */
            f32 r = nd->radius < 2.0f ? nd->radius : 2.0f, a = (f32)(b->seed >> 3 & 1023) * (6.2831853f / 1024.0f) + (f32)idx;
            want[0] += cosf(a) * r * 0.7f; want[2] += sinf(a) * r * 0.7f; }
        f32 dx = want[0] - b->ch.pos[0], dz = want[2] - b->ch.pos[2];
        if (dx * dx + dz * dz < 1.0f * 1.0f) b->path_i++;   /* (the game's path node 0893D4E8: the next point within 1 m, D_08AED884) */
    } else {
        memcpy(want, b->hold, 12);
        f32 dx = b->hold[0] - b->ch.pos[0], dz = b->hold[2] - b->ch.pos[2];
        if (dx * dx + dz * dz < 0.8f * 0.8f) { moving = false; if (!b->holding) { b->holding = true; b->goal_t = 3.0f + rnd(&b->seed) * 4.0f; } }
    }
    f32 mdx = want[0] - b->ch.pos[0], mdz = want[2] - b->ch.pos[2], ml = sqrtf(mdx * mdx + mdz * mdz);
    if (ml > 1e-3f) { mdx /= ml; mdz /= ml; } else moving = false;
    if (moving) {
        /* avoidance (traced, 0893E014, after the path node): each soldier within 2 m (d^2 against 4.0, D_08AED89C) that the two are
           closing on - c = (own wanted velocity - its velocity) along the line to it, above 0 - with (d / c)^2 under 0.2 (D_08AED8A4)
           turns the wanted direction by 0.9425 rad (D_08AED8A8, 0.3 pi) x (1 - 25 (d / c)^4) (D_08AED8AC).  [assumed: which way -
           away from the side the other is on (the side test against 1.0, D_08AED8A0, is not read); one turn per unit found] */
        f32 sp0 = 8.5f;
        for (u32 u = 0; u < NS(p); u++) {
            if (u == 1 + idx) continue;
            const ak_target *o = &p->target[u]; if (!o->alive) continue;
            f32 ox = o->feet[0] - b->ch.pos[0], oz = o->feet[2] - b->ch.pos[2], d2 = ox * ox + oz * oz;
            if (d2 > 4.0f * S * S || d2 < 1e-6f) continue;
            f32 dl = sqrtf(d2), nx = ox / dl, nz = oz / dl;
            const f32 *ov = u == 0 ? p->ch.vel : p->bot[u - 1].ch.vel;
            f32 cl = (mdx * sp0 * S - ov[0]) * nx + (mdz * sp0 * S - ov[2]) * nz;
            if (cl <= 0) continue;
            f32 t2 = d2 / (cl * cl); if (t2 >= 0.2f) continue;
            f32 ang = 0.9424778f * (1.0f - 25.0f * t2 * t2);
            if (nx * mdz - nz * mdx < 0) ang = -ang;                                  /* (turn away from its side) */
            f32 cs = cosf(ang), sn = sinf(ang), tx = mdx * cs - mdz * sn; mdz = mdx * sn + mdz * cs; mdx = tx;
        }
    }
    /* facing: the enemy, else the way it goes */
    f32 face = b->ch.yaw;
    const ak_target *en = b->enemy >= 0 ? &p->target[b->enemy] : NULL;
    bool saber = b->hero && hero_of(p, (s32)(1 + idx)) && hero_of(p, (s32)(1 + idx))->saber;
    if (en && saber) {                                                        /* a saber hero closes in */
        f32 ex = en->feet[0] - b->ch.pos[0], ez = en->feet[2] - b->ch.pos[2], el = sqrtf(ex * ex + ez * ez);
        if (el > 1.2f) { mdx = ex / el; mdz = ez / el; moving = true; } else moving = false;
    }
    /* the attack (traced, PARITY 4.4: order 0x47E, update 08942BBC, states 08943378, the points 08943020): the target point is the
       target's position; state 0 - farther than 20 m (400 < d^2) approach (1), else hold (2); 1 - a move order 0x480 to the point,
       ending 20 m from it (+0x70, D_08AED988), the point renewed each 1 s (D_08AED970) when the target has moved more than 2 m;
       when the move ends, 3 - stand 5 s (D_08AED97C), then 2 - stand while within 25 m (625 < d^2, D_08AED978) of the firing
       point (+0x34: a navigation point near the target on our side, 0895E3A4 - [assumed] the target point here), else approach.
       AK_BOT_ATTACK_NODE=1 turns it on for every bot with a target - off by default: when the original gives a soldier this order
       instead of letting it fire on its way (its trigger runs under any order) is not traced, and on for all it doubles the hits */
    static int an = -1; if (an < 0) an = ak_setting_int("AK_BOT_ATTACK_NODE", 0);
    bool attack = an && en && !saber && b->veh < 0;
    if (attack) {
        if (b->fenemy != b->enemy) { b->fenemy = b->enemy; b->fstate = 0; b->fstate_t = 0; b->faim_t = 0; memcpy(b->fpoint, en->feet, 12); }
        f32 dx = b->fpoint[0] - b->ch.pos[0], dy = b->fpoint[1] - b->ch.pos[1], dz = b->fpoint[2] - b->ch.pos[2], d2 = dx * dx + dy * dy + dz * dz;
        b->fstate_t += dt;
        switch (b->fstate) {
        case 0: b->fstate = d2 > 400.0f * S * S ? 1 : 2; b->fstate_t = 0; break;
        case 1: if ((b->faim_t += dt) > 1.0f) { f32 mx = en->feet[0] - b->fpoint[0], my = en->feet[1] - b->fpoint[1], mz = en->feet[2] - b->fpoint[2];
                    if (mx * mx + my * my + mz * mz > 4.0f * S * S) memcpy(b->fpoint, en->feet, 12);
                    b->faim_t = 0; }
                if (d2 <= 400.0f * S * S) { b->fstate = 3; b->fstate_t = 0; } break;
        case 3: if (b->fstate_t > 5.0f) { b->fstate = 2; b->fstate_t = 0; } break;
        default: { f32 hx = en->feet[0] - b->ch.pos[0], hy = en->feet[1] - b->ch.pos[1], hz = en->feet[2] - b->ch.pos[2];
                   if (hx * hx + hy * hy + hz * hz > 625.0f * S * S) { memcpy(b->fpoint, en->feet, 12); b->fstate = 1; b->fstate_t = 0; b->faim_t = 0; } } break;
        }
        if (b->fstate == 1) { f32 hl = sqrtf(dx * dx + dz * dz); if (hl > 1e-3f) { mdx = dx / hl; mdz = dz / hl; moving = true; } }
        else moving = false;
    } else b->fenemy = -1;
    if (en) face = atan2f(-(en->feet[0] - b->ch.pos[0]), -(en->feet[2] - b->ch.pos[2]));
    else if (moving) face = atan2f(-mdx, -mdz);
    f32 dyaw = wrap(face - b->ch.yaw), mx = p->cp.yaw_speed * dt;
    b->ch.yaw += dyaw > mx ? mx : dyaw < -mx ? -mx : dyaw;
    /* the stick: toward `want`, relative to the facing; slower and strafing in a fight */
    ak_char_input ci = { 0, 0, 0, 0, false, false, false, { 0, 0 }, 0 };
    /* AK_BOT_FIGHT_DRIFT: Aurek's own slow strafe in a fight [PARITY(4.4)].  The original's conquest soldiers never start an attack
       node (RS_ORDER_LOG) - they fire on their way under their movement orders and stand where those hold them; with the drift off
       Aurek's shooters never stand (4.1 / 4.5 / 4.8 / 5.0 / 6.4 m/s against the original's 0 / 0.08 / 2.2 / 5.0 / 8.2), so it stays
       on until the movement orders' holding (0x3F2) is ported */
    static int drift = -1; if (drift < 0) drift = ak_setting_int("AK_BOT_FIGHT_DRIFT", 1);
    f32 speed = en && !saber && !attack && drift && !b->rt_on ? 0.55f : 1.0f;   /* (a unit on its route keeps to it: Chewbacca stood still at his nodes, om_h5) */
    /* the path node's wanted speed (0893D4E8): 8.5 m/s (D_08AED88C); 5.0 (D_08AED894) within 40 m (D_08AED890, 3-D) of a soldier of
       the soldier list 0x08C2A880 (harness RS_DRIVE_LIST: every soldier) that is a player (089E3BD4: a player record, +84 != 999;
       either side) or a living enemy (team +12 differs, health +40 > 0, flags +5 and +64 set) - unless the node's byte +41 is set
       [not read]; 4.5 (D_08AED898) when the byte at 0x08C2932D is set [not read].  The measured AI ground speeds on Hoth: 0, 5.0,
       8.5 m/s (11.4-11.7 is a bot riding a vehicle). */
    {   bool near = false;
        for (u32 u = 0; u < NS(p) && !near; u++) {
            const ak_target *o = &p->target[u]; if (!o->alive || u == 1 + idx) continue;
            if (u != 0 && (o->team == b->team || o->health <= 0)) continue;
            f32 ox = o->feet[0] - b->ch.pos[0], oy = o->feet[1] - b->ch.pos[1], oz = o->feet[2] - b->ch.pos[2];
            near = ox * ox + oy * oy + oz * oz < 40.0f * S * 40.0f * S;
        }
        ci.speed = near ? 5.0f : 8.5f; }
    f32 rx = cosf(b->ch.yaw), rz = -sinf(b->ch.yaw), fx = -sinf(b->ch.yaw), fz = -cosf(b->ch.yaw);
    if (moving) { ci.move_x = (mdx * rx + mdz * rz) * speed; ci.move_y = (mdx * fx + mdz * fz) * speed; }
    if (en && !saber && !attack && drift && !b->rt_on) {
        b->strafe_t -= dt;
        if (b->strafe_t <= 0) { b->strafe_t = 0.8f + rnd(&b->seed) * 1.2f; b->strafe = rnd(&b->seed) < 0.5f ? -0.6f : 0.6f; if (rnd(&b->seed) < 0.3f) b->strafe = 0; }
        ci.move_x += b->strafe;
    }
    /* stuck: jump, then take the next node */
    b->stuck_t += dt;
    if (b->stuck_t > 1.5f) {
        f32 dx = b->ch.pos[0] - b->stuck_pos[0], dz = b->ch.pos[2] - b->stuck_pos[2];
        if (moving && dx * dx + dz * dz < 0.6f * 0.6f) {
            ci.jump = true;
            if (b->path_i < b->npath) b->path_i++;
            else if (!follow && rnd(&b->seed) < 0.3f) bot_choose_goal(p, b);
        }
        b->stuck_t = 0; memcpy(b->stuck_pos, b->ch.pos, 12);
    }
    {   /* the body: the same box as the player's, swept against the level (measured in the original: an AI soldier's height over the
           ground is its box resting on the highest ground under its corners, to 1 cm - so the level sweep moves AI bodies too, though
           no other body pushes them); AK_BOT_BODY=0 gives the engine's spheres */
        static int body = -1; if (body < 0) body = ak_setting_int("AK_BOT_BODY", 1);
        b->ch.body_box = body != 0;
        for (int k = 0; k < 3; k++) { b->ch.body_min[k] = soldier_shape[0][k] * S; b->ch.body_max[k] = soldier_shape[1][k] * S; } }
    ak_char_update(&b->ch, &p->cp, &p->col, &ci, dt);
    /* the clip */
    f32 hs; int st = motion_state(&b->ch, &p->cp, b->was_ground, &b->land_t, dt, &hs);
    b->was_ground = b->ch.on_ground;
    const s32 *bcl = unit_clips(p, (s32)(1 + idx));
    /* idle variations (traced, 08998828): standing idle and not alert, a wait of (random + 0.5) x 2.5 s (1.25-3.75), then row 18
       or 19 at random once, then a new wait [assumed: the rifle set's rows for every bot] */
    if (b->state == PLAY_IDLE && b->alert_t <= 0 && !b->hero && b->veh < 0 && p->idle_vars[0] >= 0) {
        if (b->idle_var < 0) { if ((b->idle_t -= dt) <= 0) { b->idle_var = p->idle_vars[rnd(&b->seed) < 0.5f ? 0 : (p->idle_vars[1] >= 0 ? 1 : 0)]; b->idle_vt = 0; } }
        else if ((b->idle_vt += dt) >= m->clips[b->idle_var].duration) { b->idle_var = -1; b->idle_t = (rnd(&b->seed) + 0.5f) * 2.5f; }
    } else { b->idle_var = -1; if (b->idle_t <= 0) b->idle_t = (rnd(&b->seed) + 0.5f) * 2.5f; }
    if (bcl[st] < 0) st = bcl[PLAY_RUN] >= 0 && hs >= 0.5f ? PLAY_RUN : PLAY_IDLE;
    if (st != b->state) { b->state = st; b->clip_t = 0; }
    b->clip_t += dt * clip_rate(st, hs, &p->cp);
    /* pose: every frame near the camera or in view, every 4th frame-time otherwise */
    b->pose_dt += dt;
    f32 ex = b->ch.pos[0] - p->eye[0], ez = b->ch.pos[2] - p->eye[2];
    f32 mn[3] = { b->ch.pos[0] - 1, b->ch.pos[1], b->ch.pos[2] - 1 }, mxx[3] = { b->ch.pos[0] + 1, b->ch.pos[1] + 2, b->ch.pos[2] + 1 };
    bool near = ex * ex + ez * ez < 40.0f * 40.0f && (!fr || ak_frustum_aabb(fr, mn, mxx));
    if (near || b->pose_dt > 0.12f || en) {
        b->pose_dt = 0;
        const ak_play_hero *bh = b->hero ? hero_of(p, (s32)(1 + idx)) : NULL;
        if (bh && bh->atk_i >= 0) pose(m, &b->look, bh->atk[bh->atk_i], bh->atk_t, false, b->bones);   /* a stroke: the whole body */
        else if (!bh && b->alert_t > 0)
            pose_layer(m, &b->look, p->aclip[b->state], b->clip_t, b->state != PLAY_JUMP && b->state != PLAY_LAND, b->shoot_t < 0.3f ? p->shoot_clip : -1, b->shoot_t, b->bones);
        else if (b->idle_var >= 0) pose(m, &b->look, b->idle_var, b->idle_vt, false, b->bones);
        else pose(m, &b->look, bcl[b->state], b->clip_t, b->state != PLAY_JUMP && b->state != PLAY_LAND, b->bones);
    }
    body_target(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, self, b->weapon.def ? b->weapon.def->model : -1);
    /* fight: after the reaction time, in bursts, when facing the enemy (a saber hero strikes in reach) */
    if (b->hero && b->weapon.def && hero_of(p, (s32)(1 + idx)) && hero_of(p, (s32)(1 + idx))->saber) {
        ak_weapon_update(&b->weapon, dt, false);
        bool reach = false;
        if (en) { f32 ex = en->feet[0] - b->ch.pos[0], ez = en->feet[2] - b->ch.pos[2]; reach = ex * ex + ez * ez < 3.0f * 3.0f && fabsf(dyaw) < 0.6f; }
        hero_attack(p, m, hero_of(p, (s32)(1 + idx)), reach, &b->weapon, b->ch.pos, b->ch.yaw, dt);
    } else if (b->weapon.def) {
        if (en && b->held >= 0) {                                        /* the weapon for this target (0893F65C) */
            f32 ex = en->feet[0] - b->ch.pos[0], ez = en->feet[2] - b->ch.pos[2];
            ai_hold(p, b, idx, ai_weapon_choice(p, b, b->enemy >= (s32)VT(p, 0), sqrtf(ex * ex + ez * ez)));
        }
        ak_weapon_update(&b->weapon, dt, b->weapon.ammo == 0);
        /* (a clip weapon run dry is handed back full; a weapon without a clip (AmmoPerClip -1: the pistols, Boba Fett's rifle) is
           never empty - re-giving it every frame reset its cooldown and let a bot fire as fast as frames allowed) */
        if (b->weapon.def->clip > 0 && b->weapon.ammo <= 0 && b->weapon.spare <= 0 && b->weapon.reload_t <= 0) { int tm = b->weapon.team; s32 ow = b->weapon.owner; ak_weapon_give(&b->weapon, b->weapon.def); b->weapon.team = tm; b->weapon.owner = ow; }
        /* the reaction (traced: the AI fire node 0893F2F8 - 0893EF7C / 0893F364): a countdown from 2.5 s (1.75 s at the elite
           difficulty) that runs while there is a target, at 1 / (0.03 d + 0.1) under 30 m and 1 beyond (d: the distance), and
           starts again whenever there is none; when it has run out the bot shoots */
        {
            f32 start = p->difficulty >= 2 ? 1.75f : 2.5f;
            if (!en) b->react_t = start;
            else { f32 ex = en->feet[0] - b->ch.pos[0], ey = en->feet[1] - b->ch.pos[1], ez = en->feet[2] - b->ch.pos[2], d = sqrtf(ex * ex + ey * ey + ez * ez);
                   b->react_t -= dt / (d < 30.0f ? 0.03f * d + 0.1f : 1.0f); }
        }
        /* the trigger: the fire node's bursts (below; 2026-11-23 - before, ak_ai_fire's heat bursts, the vehicles' machine) */
        bool held = false;
        {   f32 fwd[3] = { -sinf(b->ch.yaw), 0, -cosf(b->ch.yaw) }, to[3] = { 0, 0, 0 };
            if (en) { to[0] = en->feet[0] - b->ch.pos[0]; to[1] = en->feet[1] - b->ch.pos[1]; to[2] = en->feet[2] - b->ch.pos[2]; }
            /* the want flag (traced, 08943020 -> the fire record +36, read by 08942AA4 as 08965A70's "want"): set each frame from the
               target's vfunc +104 (soldiers: 08A05718), which solves a lead-aim point from the target's velocity (its vfunc +20) and
               the shot (f12 = 1000, D_08B1B740) and fails only without an intercept - so near enough always true against soldiers
               [assumed: always true here; the lead point itself is not used by Aurek's aim yet] */
            (void)fwd; (void)to;
            /* the shooting (traced; measured per bot on the original, harness gdb tools/harness/gdb/ai_shots_by_bot.py): the AI on foot
               does not use the burst / pause machine (08965A70 - the AT-AT's guns only). Each frame the fire node's sub-object
               (08934D40) runs its pause while a burst has been asked: pause -= dt x U(0.85, 1.15) (D_08AED688 / 68C, a new draw each
               frame); below 0 the flag clears and the next pause is 2 x 3.0 (the bot weapon record's +32, 3.0 read live for every
               weapon seen) - 2.0 at the elite difficulty (D_08AED694). With the flag clear, once the reaction (react_t, +104) has run
               out, the node asks for a burst by the weapon's Weapon_Name (08934E38's table D_08AD9C90, by Weapon_Name - 110):
               rifles (110) 2 shots (75 %, D_08AED6B0) or 3 - elite 3 or 4 (D_08AD9CE0 / E4); pistols (111), shotguns (118),
               Emp_Launcher (119), rocket launchers (126) 1 shot; flamethrowers (116) and chainguns (122) hold the trigger 8 s
               (D_08AED6C8 / 6B4); bowcasters (124) hold it min(max(d - 6.5, 0) x 0.074, 1) x 3 s (the charge); every other weapon
               (ArcCaster, fusion cutter, carbonite gun, tri-shot, wrist rocket, snipers, particle pistol, grenade launcher, guided
               missile) is never fired by this node. The weapon then fires the shots asked as its own rate allows (08A17C64 counts
               weapon +296 down), facing or not. [not ported: 08935D94's 0x74 / 0x7A test (flamethrowers / chainguns: heat and
               range); the node's own activity - the original runs the pause only while
               the bot's AI runs its fire node, Aurek every frame] */
            const bool elite = p->difficulty >= 2;
            if (b->fire_fired) { b->fire_pause -= dt * (0.85f + 0.3f * rnd(&b->seed));
                if (b->fire_pause < 0) { b->fire_fired = false; b->fire_pause = elite ? 2.0f : 6.0f; } }
            /* 08935D94's friendly test (traced; constants read live): for each living soldier of the shooter's side (other than
               itself), with T the line to the target (length dT) and F the line to the friend (dF): the angle between them
               (acos, by 1 - asin(cos) x 2/pi times pi/2) under pi/2 (D_08AED6F4), the friend short of the target along the line
               ((friend - target) . -T > 0), and dF x sin(angle) - its distance off the line - under 0.5 (D_08AED6E0): no burst.
               [assumed: soldiers' origins (vfunc +44) for all three points - the shooter's point is its vfunc +148, not read;
               the candidate list 08834FC0 / 08834E84 builds along the line taken as every friendly soldier] */
            bool clear = true;
            if (en && b->react_t <= 0 && !b->fire_fired) {
                f32 T[3] = { en->feet[0] - b->ch.pos[0], en->feet[1] - b->ch.pos[1], en->feet[2] - b->ch.pos[2] };
                f32 dT = sqrtf(T[0] * T[0] + T[1] * T[1] + T[2] * T[2]);
                for (u32 k = 0; k < NS(p) && clear && dT > 0; k++) {
                    const ak_target *f = &p->target[k];
                    if (k == idx + 1 || !f->alive || f->team != b->team) continue;
                    f32 F[3] = { f->feet[0] - b->ch.pos[0], f->feet[1] - b->ch.pos[1], f->feet[2] - b->ch.pos[2] };
                    f32 dF = sqrtf(F[0] * F[0] + F[1] * F[1] + F[2] * F[2]); if (dF <= 0) continue;
                    f32 c = (T[0] * F[0] + T[1] * F[1] + T[2] * F[2]) / (dT * dF); if (c > 1) c = 1; if (c < -1) c = -1;
                    f32 ang = (1.0f - asinf(c) * 0.63661977236f) * 1.57079632679f;
                    if (ang >= 1.5707963f) continue;
                    f32 ft = (f->feet[0] - en->feet[0]) * -T[0] + (f->feet[1] - en->feet[1]) * -T[1] + (f->feet[2] - en->feet[2]) * -T[2];
                    if (!(ft > 0)) continue;
                    if (dF * sinf(ang) < 0.5f * S) clear = false;
                }
            }
            if (en && b->react_t <= 0 && !b->fire_fired && clear && b->weapon.def && b->weapon.def->bp && p->target[b->enemy].alive) {
                int wn = ak_bp_int(b->weapon.def->bp, "Weapon_Name", 0) - 110;
                f32 d = sqrtf(to[0] * to[0] + to[1] * to[1] + to[2] * to[2]) / S;
                switch (wn) {
                case 0: { s32 n = rnd(&b->seed) < 0.75f ? (elite ? 3 : 2) : (elite ? 4 : 3); b->fire_shots += n; b->weapon.owed += n; b->fire_fired = true; } break;
                case 1: case 8: case 9: case 16: b->fire_shots += 1; b->weapon.owed += 1; b->fire_fired = true; break;
                case 6: case 12: b->fire_hold += 8.0f; b->fire_fired = true; break;
                case 14: { f32 k = (d - 6.5f) * 0.074f; if (k < 0) k = 0; if (k > 1) k = 1; b->fire_hold += k * 3.0f; b->fire_fired = true; } break;
                default: break;
                }
                if (b->fire_fired) b->fire_ai.began = true;
            } else b->fire_ai.began = false;
            if (b->fire_hold > 0) b->fire_hold -= dt;
            if (!en) { b->fire_shots = 0; b->fire_hold = 0; b->weapon.owed = 0; }   /* [assumed: a lost target drops what is owed] */
            held = en && (b->fire_shots > 0 || b->fire_hold > 0);
            /* Speech_BC_Rocket (089395E4): an AI that starts firing a weapon of the "Rocket" kind (the rocket launchers' Projectile
               "rocket") says it once, until it lets go */
            if (b->fire_ai.began && b->weapon.def && b->weapon.def->bp) { const char *pj = ak_bp_string(b->weapon.def->bp, "Projectile", "");
                if (pj && !strcasecmp(pj, "rocket")) ak_play_chatter(p, 1 + idx, "Speech_BC_Rocket"); }
        }
        if (en && held) {
            f32 gun[12], muz[3];
            weapon_world(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, gun);
            muzzle_of(m, b->weapon.def, gun, muz);
            f32 tgt[3] = { en->feet[0], en->feet[1] + 1.1f * S, en->feet[2] };
            /* the aim (traced: 08934E38 -> 088F79C0): the shot leaves along a direction drawn uniformly over the spherical cap of
               half-angle = the weapon's AI accuracy (degrees; elite at difficulty 2) around the line to the target */
            f32 acc = p->bot_aim_set ? p->bot_aim : b->weapon.def->ai_acc[p->difficulty >= 2 ? 1 : 0] * 0.017453293f;
            aim_cap(&b->seed, muz, tgt, acc);
            u32 bshot = ak_weapon_fire(&b->weapon, &p->bolts, &p->col, p->target, NT(p), muz, tgt, &b->seed);
            if (bshot && b->fire_shots > 0) b->fire_shots--;
            {   static int ds = -1; if (ds < 0) ds = ak_setting_int("AK_DEBUG_SHOTS", 0);   /* tests (2): the bots' shots too */
                if (ds >= 2 && bshot && b->weapon.def) { const ak_target *et = b->enemy >= 0 && (u32)b->enemy < NT(p) ? &p->target[b->enemy] : NULL; f32 ed = et ? sqrtf((et->feet[0] - b->ch.pos[0]) * (et->feet[0] - b->ch.pos[0]) + (et->feet[2] - b->ch.pos[2]) * (et->feet[2] - b->ch.pos[2])) : -1;
                    AK_INFO("shot", "frame %u bot %u %s at %d (%s, %.0f m, health %.0f)", p->frame_no, idx, b->weapon.def->name ? b->weapon.def->name : "?", b->enemy, et ? (et->vehicle ? "vehicle" : "soldier") : "-", ed, et ? et->health : 0); } }
            b->shoot_t = 0;
        }
        bot_grenade(p, b, idx, dt);
    }
    if (en) b->alert_t = 3.0f;
}


/* ------------------------------------------------------------------ vehicles */
static f32 quat_yaw(ak_quat q) { return atan2f(-2 * (q.x * q.z + q.w * q.y), -(1 - 2 * (q.x * q.x + q.y * q.y))); }   /* vehicle models face +z */

/* which side's vehicle a spawn makes: the side holding the nearest command post (none while it is neutral) */
static int spawn_team(const ak_play *p, const ak_play_vspawn *sp)
{
    if (sp->fixed || sp->lone) return sp->def[0] >= 0 ? 0 : 1;
    if (p->have_cq && sp->post >= 0) { int o = p->match.post[sp->post].owner; return o < 2 ? o : -1; }   /* the post the spawn belongs to */
    if (!p->have_cq) return sp->def[0] >= 0 ? 0 : 1;
    s32 best = -1; f32 bd = 1e30f;
    for (u32 i = 0; i < p->cq.nposts; i++) {
        f32 dx = p->cq.post[i].pos[0] - sp->pos[0], dz = p->cq.post[i].pos[2] - sp->pos[2];
        if (dx * dx + dz * dz < bd) { bd = dx * dx + dz * dz; best = (s32)i; }
    }
    int o = best >= 0 ? p->match.post[best].owner : AK_CQ_NEUTRAL;
    return o < 2 ? o : -1;
}

static void vehicle_target(ak_play *p, u32 v)
{
    const ak_vehicle *vh = &p->veh[v]; ak_target *t = &p->target[VT(p, v)];
    memcpy(t->feet, vh->pos, 12); t->height = vh->def->hover + vh->def->height; t->radius = vh->def->radius;
    if (vh->def->hover > 1.5f) { t->feet[1] += vh->def->hover - vh->def->radius; t->height = 2.0f * vh->def->radius; }   /* a floating unit (the recon droid): the
                                                                                     body only - aim and hits at its height, not over the ground under it */
    memcpy(t->head, vh->pos, 12); t->head[1] -= 100; t->head_radius = 0;   /* no head */
    t->team = vh->team; t->vehicle = true;
}

static bool vehicle_make(ak_play *p, u32 v)
{
    ak_play_vspawn *sp = &p->vspawn[v]; int team = spawn_team(p, sp);
    if (team < 0 || sp->def[team] < 0) return false;
    ak_vehicle *vh = &p->veh[v]; vh->spawn = (s32)v;
    {   f32 at[3], dir[3]; const ak_vehicle_def *dd = &p->vdef[sp->def[team]];   /* a hover unit with a patrol path is made on its first point */
        if (sp->route && dd->kind != AK_VEH_WALKER && ak_route_at(sp->route, 0, at, dir)) { at[1] -= dd->hover; ak_vehicle_spawn(vh, dd, at, sp->yaw, team); sp->route_d = 0; sp->rt_q = 0; sp->rt_wait = -1; }
        else ak_vehicle_spawn(vh, dd, sp->pos, sp->yaw, team); }
    vh->free_flight = p->free_flight;          /* (flyers: +852 bit 0 - Aurek: every space map) */
    ak_target *t = &p->target[VT(p, v)]; memset(t, 0, sizeof *t);
    t->health = t->max_health = vh->def->health; t->alive = true; t->last_attacker = -1;
    vehicle_target(p, v);
    if (sp->lone) vh->open = true;   /* a placed empty craft (0x8004) anyone may take: Space Hoth's Tie_Defender 18882 in the Empire's hangar, the
                                        player's to steal (10013 -> 43 -> 101) [assumed: neutral until boarded, as one left empty - the game's team 4] */
    if (ak_setting_int("AK_DEBUG_VEH", 0) && p->ready) AK_INFO("veh", "vehicle %u (spawn %d) made: %s (model %s r %.2f) at %.2f %.2f %.2f team %d kind %d", v + 1, sp->first + 1, vh->def->name, p->mset ? p->mset->models[vh->def->model].name : "?", p->mset ? p->mset->models[vh->def->model].radius : 0.0f, vh->pos[0], vh->pos[1], vh->pos[2], team, (int)vh->def->kind);
    return true;
}

/* a fallen soldier's pickups (the Humanoid death 089A70FC): SpawnPickupA, then B, each made by 089F96C4 when a random 0..1 is
   at most SpawnPickupProbability - 75 in every Humanoid, so always; "Random" (1004) is Health, Ammo or Stamina at 1/3 each
   (089F97D4), "None" (1005) nothing; placed 0.1 m up and 1 m along the world z, the other way each time (DAT_08C2C008) */
static void drop_pickups(ak_play *p, const ak_bp_object *body, const f32 *at, s32 from)
{
    if (!body) return;
    f32 prob = ak_bp_float(body, "SpawnPickupProbability", 75);
    for (int k = 0; k < 2; k++) {
        s32 id = ak_bp_int(body, k ? "SpawnPickupB" : "SpawnPickupA", 1005);
        if (rnd(&p->seed) > prob) continue;
        if (id == 1004) { id = 1000 + (s32)(rnd(&p->seed) * 3.0f); if (id > 1002) id = 1002; }
        if (id < 1000 || id > 1003 || !p->pickup_def[id - 1000].bp) continue;
        s32 slot = -1; for (int j = 0; j < 32; j++) if (!p->pickup[j].alive) { slot = j; break; }
        if (slot < 0) continue;
        __typeof__(p->pickup[0]) *q = &p->pickup[slot]; memset(q, 0, sizeof *q);
        q->alive = true; q->kind = (u8)(id - 1000); q->t = 0; q->from = from;
        q->pos[0] = at[0]; q->pos[1] = at[1] + 0.1f; q->pos[2] = at[2] + (p->pickup_alt ? 1.0f : -1.0f);   /* (game z +1 / -1 = engine -1 / +1) */
        p->pickup_alt = !p->pickup_alt; p->pickups_made++;
    }
}

/* an effect by name at pos along fwd (NULL: the effect's own frame) - R.6 */
static s32 play_fx_within(ak_play *p, const char *name, const f32 *pos, const f32 *fwd, f32 max_d)
{
    if (!p->pfx || !name) return 0;
    f32 dx = pos[0] - p->eye[0], dy = pos[1] - p->eye[1], dz = pos[2] - p->eye[2];
    if (max_d > 0 && dx * dx + dy * dy + dz * dz > max_d * max_d) return 0;
    s32 fx = ak_pfx_find(&p->pfx_lib, name);
    s32 h = fx >= 0 ? ak_pfx_play(p->pfx, fx, pos, fwd) : -1;
    return h < 0 ? 0 : h;
}
static s32 play_fx(ak_play *p, const char *name, const f32 *pos, const f32 *fwd) { return play_fx_within(p, name, pos, fwd, 0); }

/* an effect riding an object: started when wanted and missing, moved, let go when no longer wanted */
static void ride_fx(ak_play *p, s32 *h, bool want, const char *name, const f32 *pos, const f32 *fwd, const f32 *vel)
{
    if (!p->pfx) return;
    if (!want || !name) { if (*h) ak_pfx_follow(p->pfx, *h, NULL, NULL, NULL, false); *h = 0; return; }
    if (*h && ak_pfx_follow(p->pfx, *h, pos, fwd, vel, true)) return;
    *h = play_fx(p, name, pos, fwd);
    if (*h) ak_pfx_follow(p->pfx, *h, pos, fwd, vel, true);
}

static void boom_fx(ak_play *p, const f32 *pos, const char *pfx)
{
    if (p->pfx && pfx) { play_fx(p, pfx, pos, NULL); return; }
    ak_play_boom *b = &p->boom[p->nboom < PLAY_MAX_BOOMS ? p->nboom++ : 0];   /* Aurek's own fireball (no effect to play) */
    memcpy(b->pos, pos, 12); b->pos[1] += 1.5f; b->t = 0;
}
/* a wreck: its blueprint's "PFX On Destruction" (Aurek's fireball when it has none) */
static void boom(ak_play *p, const f32 *pos, const ak_bp_object *bp)
{
    const char *fx = bp ? ak_bp_string(bp, "PFX On Destruction", NULL) : NULL; if (fx && !*fx) fx = NULL;
    f32 q[3] = { pos[0], pos[1] + 1.5f, pos[2] }; boom_fx(p, q, fx);
}

static void player_down(ak_play *p);
static void script_sink(void *user, const ak_script_msg *m);
static bool look_clear(void *user, const f32 *a, const f32 *b)              /* a look trigger's line (game axes) through the level */
{
    const ak_play *p = user; f32 ea[3], eb[3]; ak_from_game(a, ea); ak_from_game(b, eb);
    f32 d[3] = { eb[0] - ea[0], eb[1] - ea[1], eb[2] - ea[2] }, l = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]); if (l < 0.05f) return true;
    for (int k = 0; k < 3; k++) d[k] /= l;
    ak_col_hit h; return !ak_col_raycast(&p->col, ea, d, l - 0.05f, AK_COL_NOT_BODIES, &h);
}
static bool script_test(void *user, u32 kind, u32 param);
static void vehicle_destroyed(ak_play *p, const ak_model_set *m, u32 v)
{
    ak_vehicle *vh = &p->veh[v]; (void)m;
    /* a placed walker's spawner: 0897F230 (its walker gone: a new respawn time, the link cleared, its own respawn off - 08982530)
       raises 10006 [assumed: 0897F230 is the destroyed callback, from what it does]; Hoth's and Boz Pity's tables send it 0x8007
       120 s later, which makes a new walker when the old one is dead (0897F950 -> +0x74 = 0897FDE0) */
    if (p->vspawn[v].fixed && p->have_script) ak_script_raise(&p->script, p->vspawn[v].ev, p->vspawn[v].nev, 10006, p->vspawn[v].eid, script_sink, p);
    if (p->vspawn[v].lone && p->have_script) ak_script_raise(&p->script, p->vspawn[v].ev, p->vspawn[v].nev, 3, p->vspawn[v].eid, script_sink, p);   /* (a placed craft broken) */
    if (p->target[VT(p, v)].last_attacker == 0 && vh->driver != 0) p->kills++;
    if (p->target[VT(p, v)].last_attacker == 0 && vh->driver > 0 && p->target[vh->driver].team != p->target[0].team)   /* (08A62C70: flag bit 1, 40 / 41) */
        p->stat_add[p->in_veh >= 0 && p->veh[p->in_veh].def && p->veh[p->in_veh].def->kind == AK_VEH_FLYER ? 41 : 40]++;   /* [assumed: bit 1 = the victim in a vehicle; 41 = the killer flying] */
    vh->alive = false; vh->dead_t = 0; boom(p, vh->pos, vh->def->bp);
    AK_VERBOSE("veh", "vehicle %u (%s) destroyed%s, driver %d, attacker %d", v, vh->def->name, vh->crashed ? " (crash)" : "", vh->driver, (int)p->target[VT(p, v)].last_attacker);
    if (vh->driver == 0) { p->in_veh = -1; vh->driver = -1; if (p->alive) { p->target[0].alive = true; p->target[0].health = 0; player_down(p); } }
    else if (vh->driver > 0) {                                                /* a bot's: it dies with it (no body left) */
        u32 i = (u32)vh->driver - 1; ak_play_bot *b = &p->bot[i]; vh->driver = -1;
        if (ak_setting_int("AK_DEBUG_BOTVEH", 0)) AK_INFO("botveh", "%.1f s: bot %u dies in %s (%s)", p->clock, i, vh->def->name, vh->crashed ? "crash" : "destroyed");
        b->veh = -1; b->alive = false; b->dead_t = 8.5f; b->state = PLAY_IDLE;
        p->target[1 + i].alive = false; p->target[1 + i].health = 0;
        if (p->have_cq) ak_conquest_killed(&p->rules, &p->match, b->team);
    }
}

static void vehicles_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a)
{
    p->in_veh = -1; p->in_turret = -1; p->fly_target = -1; p->fly_auto = false; p->cam_lock = false; p->veh_respawn = ak_setting_float("AK_VEHICLE_RESPAWN", 10.0f);   /* (the spawn records say 10 s) */   /* PARITY(3.5) */
    p->bot_drive = ak_setting_float("AK_BOT_VEHICLES", 1.0f);
    p->cmd_on = ak_setting_int("AK_BOT_COMMANDER", 1) != 0; memset(p->cmdr, 0, sizeof p->cmdr);   /* the chance a spawned bot wants a vehicle (the spawner default 100 %, 0897E594) */
    if (!ak_setting_int("AK_VEHICLES", 1)) return;
    ak_entity_set es; size_t mark = a->used;
    if (!ak_entities_load(l, m, a, &es)) { a->used = mark; return; }
    for (u32 i = 0; i < es.n && p->nveh < PLAY_MAX_VEH; i++) {
        const ak_entity *e = &es.e[i];
        if (e->flagged && e->type == 27 && ak_setting_int("AK_DEBUG_VEH", 0) > 1) AK_INFO("veh", "spawn %x: placed %d, modes %x, models %d %d", e->id, e->placed, e->modes, e->model[0], e->model[1]);
        if (!e->flagged || (e->type != 27 && e->type != 13 && e->type != 4 && e->type != 20) || !e->placed || !((e->modes >> ak_game_mode) & 1)) continue;
        ak_play_vspawn *sp = &p->vspawn[p->nveh]; bool any = false;
        memcpy(sp->pos, e->pos, 12); sp->yaw = quat_yaw(e->rot); sp->post = -1; sp->respawn = p->veh_respawn; sp->fixed = e->type == 13;
        sp->eid = e->id; sp->nev = sp->fixed ? ak_script_events(l, e->id, 2, sp->ev, 4) : 0;   /* (a walker spawner's events: 10006 its walker destroyed) */
        sp->lone = e->type == 4 || e->type == 20;   /* (type 20, class 0x8014 (089C1E70): a placed ground vehicle in the same layout - Endor's AT_ST 18b05,
                                                  Chewbacca's walker {10013 -> 7}, out at the start (30: 4) and back on 30004's 3 [assumed: as the craft]) */   /* a placed craft (class 0x8004, 089B0B60 -> 089B04F4: the vehicle base 089D00D0; record: version, 2, 1, the event
                                      table (8 16 0 count ...), place, turn, 250, 0, the model hash - Space Alderaan's X_Wing 189ac {10013 -> 124, 3 -> 72}).
                                      Harness (sa_h1): the player's rifle broke it and group 72 fired in that frame - event 3 is "destroyed" */
        if (sp->lone) { sp->nev = ak_script_events(l, e->id, 6, sp->ev, 4); sp->respawn = 1e30f; }
        sp->waiting = false;
        if (sp->fixed) {   /* a unit spawner the script starts: word 23 of the record has 0x200000 (Yavin's campaign Recon_Droid 18bd8 and
                              IFTT_Tank_Campaign 18bf1; Hoth's AT-AT has 0x10000 and is there from the start) - the original's recon
                              droid appeared only after the script's 3 to its spawner (harness route cmpn) [assumed: that bit is the
                              rule; the reader 089812C0's field not traced] */
            u32 q = 8; ak_chunk c;
            while (ak_asura_next(&l->file, &q, &c)) if (ak_chunk_tag(&c) == AK_TAG('E', 'N', 'T', 'I') && c.size >= 96 && ak_rd32(c.body) == e->id) {
                sp->waiting = (ak_rd32(c.body + 92) & 0x200000u) != 0; break; }
        }
        for (u32 k = 0; p->have_cq && k < p->cq.nvlink; k++)
            if (p->cq.vlink[k].id == e->id) { sp->post = p->cq.vlink[k].post; if (!ak_setting_int("AK_VEHICLE_RESPAWN", 0)) sp->respawn = p->cq.vlink[k].respawn; }
        for (int t = 0; t < 2; t++) {
            sp->def[t] = -1;
            if (e->model[t] < 0) continue;
            const char *nm = m->models[e->model[t]].name;
            for (u32 k = 0; k < p->nvdef; k++) if (!strcmp(p->vdef[k].name, nm)) sp->def[t] = (s32)k;
            if (sp->def[t] < 0 && p->nvdef < PLAY_MAX_DEFS && ak_vehicle_def_load(bp, m, nm, &p->vdef[p->nvdef])) sp->def[t] = (s32)p->nvdef++;
            if (sp->def[t] >= 0) any = true;
        }
        {   s32 dd = sp->def[0] >= 0 ? sp->def[0] : sp->def[1];
            if (dd >= 0 && (p->vdef[dd].kind == AK_VEH_WALKER || p->vdef[dd].kind == AK_VEH_FLYER)) sp->yaw += 3.14159265f; }   /* walkers and flyers face -z */
        if (sp->fixed && sp->def[0] >= 0) {                                  /* a placed walker (Hoth's AT-AT): its own faction's side */
            ak_vehicle_def *d = &p->vdef[sp->def[0]];   /* (not boardable: the spawn's fixed flag, not the def - the def is shared with
                                                            the hangars' craft of the same kind, which bots and the player take) */
            int fac = ak_bp_int(d->bp, "Faction", 3), team = ak_faction_team(fac);
            if (fac >= 4) team = 1 - p->team;   /* Faction 4 (Recon_Droid - the training's target, which the original shows with the enemy's red
                                                   lock mark and "Recon Droid (Shielded)"): the player's enemy [assumed: 4 = hostile to all] */
            if (team == 1) { sp->def[1] = sp->def[0]; sp->def[0] = -1; }
        }
        sp->mpost = -1; sp->route = NULL; sp->route_d = 0;
        if (sp->fixed && ak_setting_int("AK_WALKER_PATHS", 1)) {             /* a placed walker walks its path (the record's start node) */
            ak_route *r = (ak_route *)ak_arena_alloc(a, sizeof *r, 4);
            if (r && ak_route_for_unit(l, e->id, r)) { sp->route = r; if (ak_setting_int("AK_DEBUG_VEH", 0)) { AK_INFO("veh", "walker %u: a path of %u points, %.0f m", p->nveh + 1, r->n, r->length); for (u32 q = 0; q < r->n && ak_setting_int("AK_DEBUG_VEH", 0) > 1; q++) AK_INFO("veh", "  pt %u %.2f %.2f %.2f", q, r->pt[q][0], -r->pt[q][1], -r->pt[q][2]); } }
        }
        {   s32 dd = sp->def[0] >= 0 ? sp->def[0] : sp->def[1];               /* CarriesCommandPost: a post of its own (func 089D66C4) */
            if (any && dd >= 0 && p->vdef[dd].carries_cp && p->have_cq && p->cq.nposts < AK_MAX_POSTS) {
                u32 k = p->cq.nposts++; ak_post *po = &p->cq.post[k]; memset(po, 0, sizeof *po);
                memcpy(po->pos, sp->pos, 12); po->amount = 10; po->flags = 5; po->disabled = true; po->mobile = true; po->absent = true;
                po->start_owner = AK_CQ_NEUTRAL; p->cq.post_id[k] = 0;
                p->match.post[k].owner = AK_CQ_NEUTRAL; p->match.post[k].capturing = AK_CQ_NEUTRAL; p->match.post[k].progress = po->amount;
                sp->mpost = (s32)k;
            }
        }
        sp->first = (s32)p->nveh; sp->clear_t = 0;
        if (any) {
            p->nveh++;
        }
    }
    /* the spawner (class 0x801B, 08A15B8C / update 08A166A0) keeps up to 4 vehicles (+32, ids at +96): a new one is made when none of
       its own living ones stands within 25 m of the spawn point (08A15E64: d^2 against 625, D_08AEF7F0) - so one taken away is
       replaced while it still lives (seen in the harness) - and a slot is free (08A16034).  Each spawn gets its 3 further slots,
       round by round while there is room (PLAY_MAX_VEH) */
    {   u32 base = p->nveh;
        for (int x = 0; x < 3 && ak_setting_int("AK_VEHICLE_SLOTS", 1); x++)
            for (u32 v = 0; v < base && p->nveh < PLAY_VEH_SLOTS; v++) {
                const ak_play_vspawn *sp = &p->vspawn[v]; if (sp->fixed || sp->lone || sp->route || sp->mpost >= 0) continue;
                p->vspawn[p->nveh] = *sp; p->vspawn[p->nveh].first = (s32)v; p->nveh++;
            }
    }
    a->used = mark;                                                           /* the entity list was only needed here */
}

/* vehicle-carried posts (the game: func 089D66C4 makes a command post for a vehicle with CarriesCommandPost - the AT-AT, the
 * transports - of the vehicle's Faction, flags | 5 (not capturable), CommandPostSkin an invisible skin, and fixes it to the
 * CommandPostMarker "cp"; func 089D6840 takes it away with the vehicle).  It is a spawn point of the vehicle's side while the vehicle
 * stands (flyers: while landed; spawning in flight is not done here), and counts as a post of that side. */
static void mobile_posts(ak_play *p, const ak_model_set *m)
{
    for (u32 v = 0; v < p->nveh; v++) {
        s32 k = p->vspawn[v].mpost; if (k < 0) continue;
        const ak_vehicle *vh = &p->veh[v]; ak_post *po = &p->cq.post[k];
        bool present = vh->alive && vh->def && !(vh->def->kind == AK_VEH_FLYER && vh->flying) && vh->team >= 0 && vh->team < 2;
        if (present) {
            f32 T[12];
            if (ak_vehicle_marker(vh, m, vh->def->cp_marker, T)) { po->pos[0] = T[3]; po->pos[1] = T[7]; po->pos[2] = T[11]; }
            else memcpy(po->pos, vh->pos, 12);
            f32 o[3] = { po->pos[0] + cosf(vh->yaw) * (vh->def->radius * 0.3f), po->pos[1] + 1.0f, po->pos[2] - sinf(vh->yaw) * (vh->def->radius * 0.3f) }, gy;
            int t = vh->team;
            if (ak_char_ground_below(&p->col, o, 60.0f, &gy)) { po->spawn[t][0] = o[0]; po->spawn[t][1] = gy; po->spawn[t][2] = o[2]; }
            else memcpy(po->spawn[t], vh->pos, 12);
            po->spawn_yaw[t] = vh->yaw; po->has_spawn[t] = true; po->has_spawn[1 - t] = false;
        }
        ak_conquest_mobile(&p->cq, &p->match, (u32)k, present ? vh->team : AK_CQ_NEUTRAL, present);
    }
}

/* a placed walker along its path at its walking pace (it stands at the end) - with or without a gunner aboard */
static void walker_route_step(ak_play *p, u32 v, f32 dt)
{
    ak_vehicle *vh = &p->veh[v];
    ak_play_vspawn *sp = &p->vspawn[v]; f32 at[3], dir[3], ahead[3], d2[3];
    /* the first waiting node ahead that is not open (2.3: Hoth's script opens / shuts the nodes as the sides take posts) */
    f32 limit = sp->route->length;
    for (u32 k = 0; k < sp->route->nnodes; k++) {
        if (!sp->route->node_stop[k]) continue;
        f32 nd = ak_route_dist(sp->route, sp->route->node_pt[k]); if (nd < sp->route_d - 0.5f) continue;
        bool open = false; for (u32 q = 0; q < p->nnode_open; q++) if (p->node_open_id[q] == sp->route->node_id[k]) open = p->node_open[q];
        if (!open) { limit = nd; break; }
    }
    bool going = ak_route_at(sp->route, sp->route_d, at, dir) && sp->route_d < limit - 0.05f;
    if (!going) ak_route_at(sp->route, limit, at, dir);
    ak_route_at(sp->route, fminf(sp->route_d + 6.0f, limit), ahead, d2);        /* steer for a point a little ahead */
    f32 dx = ahead[0] - vh->pos[0], dz = ahead[2] - vh->pos[2];
    f32 want = atan2f(-dx, -dz);
    f32 dy = wrap(want - vh->yaw);
    vh->steer = dy > 0.05f ? -1.0f : dy < -0.05f ? 1.0f : -dy * 20.0f; if (vh->steer > 1) vh->steer = 1; if (vh->steer < -1) vh->steer = -1;
    vh->throttle = going && fabsf(dy) < 0.8f ? (f32)ak_setting_float("AK_WALKER_THROTTLE", 1.0f) : 0.0f; vh->strafe = 0; vh->brake = false;   /* PARITY(3.4) */
    if (!going) { vh->throttle = 0; vh->steer = 0; vh->vel[0] = vh->vel[2] = 0; vh->pos[0] = at[0]; vh->pos[2] = at[2]; }   /* (measured: Hoth's AT-AT stands exactly on its last node, to 0.01 m) */
    ak_vehicle_update(vh, &p->col, p->cp.gravity, false, dt);
    if (ak_setting_int("AK_DEBUG_WALKER", 0) && p->frame_no % 60 == 0) AK_INFO("walker", "%.1f s: %s at game %.1f %.1f %.1f, path %.1f m, %s, yaw %.2f want %.2f", p->clock, vh->def->name, vh->pos[0], -vh->pos[1], -vh->pos[2], sp->route_d, going ? "going" : "at the end", vh->yaw, want);
    {   /* progress: the projection of the walker onto the path near where it was */
        f32 best = sp->route_d, bd = 1e30f;
        for (f32 s = sp->route_d - 2.0f; s <= sp->route_d + 4.0f; s += 0.25f) { f32 q[3], qd[3]; ak_route_at(sp->route, s, q, qd);
            f32 ex = q[0] - vh->pos[0], ez = q[2] - vh->pos[2]; if (ex * ex + ez * ez < bd) { bd = ex * ex + ez * ez; best = s; } }
        if (best > sp->route_d) sp->route_d = fminf(best, limit); }
}

static void vehicle_fire(ak_play *p, const ak_model_set *m, u32 v, const f32 *target, f32 dt, bool all)
{
    ak_vehicle *vh = &p->veh[v]; const ak_vehicle_def *d = vh->def; bool bot = vh->driver > 0;
    if (!d->armed || !d->nmuzzles) return;
    f32 prev = vh->volley_t; vh->volley_t += dt;
    if (all) prev = -1, vh->volley_t = 1e9f;   /* (every barrel once: a press the AI lets go of at once - each hardpoint's weapon gets its one shot, 089C7A00) */
    ak_weapon w; ak_weapon_give(&w, bot ? &d->gun_bot : &d->gun); w.team = vh->team; w.owner = (s32)(vh->driver >= 0 ? vh->driver : -1); w.src = (s32)VT(p, v);
    for (u32 i = 0; i < d->nmuzzles; i++) {
        if (!(prev <= d->muzzle_time[i] && vh->volley_t > d->muzzle_time[i]) && !(prev == 0 && d->muzzle_time[i] == 0)) continue;
        if (vh->driver == 0 && !ak_heat_ready(&vh->heat[i])) continue;       /* the player's: that barrel's weapon overheated */
        f32 W[12]; if (!ak_vehicle_marker(vh, m, d->muzzle[i], W)) continue;
        f32 muz[3] = { W[3], W[7], W[11] };
        w.cooldown = 0;
        if (ak_weapon_fire(&w, &p->bolts, &p->col, p->target, NT(p), muz, target, &p->seed) && vh->driver == 0) ak_heat_shot(&vh->heat[i], &d->gun);
    }
    if (vh->volley_t >= (bot ? d->volley_bot : d->volley)) vh->volley_t = 0;
}

/* the secondary (HardpointW2): one projectile from the next muzzle toward `aim`, guided at `target` when it tracks (-1: straight);
 * the clip empties at RateOfFire and reloads in ReloadTime */
static bool vehicle_fire2(ak_play *p, const ak_model_set *m, u32 v, const f32 *aim, s32 target)
{
    ak_vehicle *vh = &p->veh[v]; const ak_vehicle_def *d = vh->def; const ak_secondary *s = &d->sec;
    if (!s->armed || vh->sec_t > 0 || vh->sec_reload > 0) return false;
    f32 mz[3] = { vh->pos[0], vh->pos[1] + d->hover + d->height * 0.5f, vh->pos[2] }, T[12];
    if (d->nsec_muzzles && ak_vehicle_marker(vh, m, d->sec_muzzle[vh->sec_next % d->nsec_muzzles], T)) { mz[0] = T[3]; mz[1] = T[7]; mz[2] = T[11]; }
    vh->sec_next++;
    f32 dir[3] = { aim[0] - mz[0], aim[1] - mz[1], aim[2] - mz[2] }, l = sqrtf(dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2]);
    if (l < 0.01f) return false;
    for (int k = 0; k < 3; k++) dir[k] /= l;
    bool bot = vh->driver > 0;
    ak_proj_launch(&p->projs, &s->proj, mz, dir, vh->vel, vh->team, vh->driver, s->tracks ? target : -1, bot ? s->bot_dmg : 1.0f);
    vh->sec_t = s->rate;
    if (s->clip > 0 && --vh->sec_ammo <= 0) { vh->sec_reload = s->reload; vh->sec_ammo = s->clip; }
    return true;
}

/* the lock-on of a vehicle's secondary (traced: 089CC77C per frame, 089CC878 / 089CC92C the check): it runs for a tracking weapon,
 * and for proton bombs (they lock though they do not track); else no lock.  A new target clears the timer and the lock; the check
 * then needs the target alive, no farther from the vehicle than InitialLockOnRange and within InitialLockOnAngle of the aim - once
 * locked, LoseLockOnRange / LoseLockOnAngle instead (bombs keep the Initial pair).  Each frame the check passes, the timer grows by
 * dt (held to LockOnTime); when it reaches LockOnTime the lock is the check's answer; a failed check starts it all again.  The
 * ranges default to 0, so ground vehicles (none set them) never lock.  The candidate: the enemy nearest the line of `fwd` within
 * LockAngle (089CA734) [assumed: within InitialLockOnRange - a farther one could never pass the check] */
static bool vehicle_lock_check(ak_play *p, const ak_vehicle *vh, s32 ti, const f32 *eye, const f32 *fwd)
{
    const ak_vehicle_def *d = vh->def; const ak_target *t = &p->target[ti];
    if (!t->alive) return false;
    bool lose = vh->locked && !d->sec.bomb_lock;
    f32 lim_r = lose ? d->lose_lock_range : d->init_lock_range, lim_a = lose ? d->lose_lock_angle : d->init_lock_angle;
    f32 tc[3] = { t->feet[0], t->feet[1] + t->height * 0.5f, t->feet[2] };
    f32 r[3] = { tc[0] - vh->pos[0], tc[1] - vh->pos[1], tc[2] - vh->pos[2] };
    if (sqrtf(r[0] * r[0] + r[1] * r[1] + r[2] * r[2]) > lim_r) return false;   /* (from the vehicle: its +244) */
    f32 c[3] = { tc[0] - eye[0], tc[1] - eye[1], tc[2] - eye[2] }, dl = sqrtf(c[0] * c[0] + c[1] * c[1] + c[2] * c[2]);
    f32 ang = dl > 0.01f ? acosf(fmaxf(-1, fminf(1, (c[0] * fwd[0] + c[1] * fwd[1] + c[2] * fwd[2]) / dl))) : 0;
    return ang <= lim_a;
}
static void vehicle_lock(ak_play *p, ak_vehicle *vh, const f32 *eye, const f32 *fwd, f32 dt)
{
    const ak_vehicle_def *d = vh->def;
    if (!d->sec.armed || !(d->sec.tracks || d->sec.bomb_lock)) { vh->lock = -1; vh->locked = false; vh->lock_t = 0; return; }
    if (vh->lock >= 0) {
        if (!vehicle_lock_check(p, vh, vh->lock, eye, fwd)) { vh->lock = -1; vh->locked = false; vh->lock_t = 0; }
        else { vh->lock_t = fminf(vh->lock_t + dt, d->lock_time); if (d->lock_time <= vh->lock_t) vh->locked = true; return; }
    }
    s32 best = -1; f32 bc = cosf(d->lock_angle);
    for (u32 i = 0; i < NT(p); i++) {
        const ak_target *t = &p->target[i];
        if (!t->alive || t->team == vh->team || t->team == AK_CQ_NEUTRAL || i >= NP(p)) continue;
        if (i >= NS(p) && i < NV(p) && p->veh[i - NS(p)].driver < 0) continue;
        f32 c[3] = { t->feet[0] - eye[0], t->feet[1] + t->height * 0.5f - eye[1], t->feet[2] - eye[2] }, dl = sqrtf(c[0] * c[0] + c[1] * c[1] + c[2] * c[2]);
        if (dl > d->init_lock_range || dl < 1) continue;
        f32 cs = (c[0] * fwd[0] + c[1] * fwd[1] + c[2] * fwd[2]) / dl;
        if (cs > bc) { bc = cs; best = (s32)i; }
    }
    vh->lock = best; vh->lock_t = 0; vh->locked = false;
    if (best >= 0 && d->lock_time <= 0) vh->locked = vehicle_lock_check(p, vh, best, eye, fwd);
}

/* a vehicle's boost and energy: held, it boosts only while the energy is above a frame's EnergyBoost, paying it (089CABFC /
 * 089CAC4C, through 089DCE7C); each frame (089DA874) below EnergyMax the energy grows by EnergyRecharge x dt unless some was spent
 * that frame (the mark then cleared) - none while the boost is held (089CAC74: +0x34C bit 0x100, set by the boost button, 089A99CC) */
static bool vehicle_boost(ak_vehicle *vh, bool held, f32 dt)
{
    const ak_vehicle_def *d = vh->def; bool boost = false;
    /* a walker sprints only when its SprintingSpeedScale is above 1.0 and the boost control is past 0.5 (089BF9E0, also needing
     * its control 9: [assumed] held while it walks); then it pays EnergyBoost x dt as the others do */
    if (d->kind == AK_VEH_WALKER && d->sprint_scale <= 1.0f) held = false;
    if (held && vh->energy > dt * d->energy_boost) {
        f32 cost = dt * d->energy_boost;
        if (cost > 0) vh->energy_spent = true;
        vh->energy -= cost; boost = true;
    }
    vh->boost_held = held;
    return boost;
}

/* func 089DCE7C: pay `cost` of stamina if there is that much (a positive cost marks it spent this frame either way) */
static bool stamina_pay(ak_play *p, f32 cost)
{
    if (cost > 0) p->stamina_spent = true;
    if (cost > p->stamina) return false;
    p->stamina -= cost; return true;
}

static void proj_boom(void *ctx, const f32 *pos, f32 radius, const ak_proj_def *d)
{
    (void)radius; boom_fx((ak_play *)ctx, pos, d ? d->explosion_pfx : NULL);
    if (ak_setting_int("AK_LOG_GRENADES", 0)) AK_INFO("play", "explosion at %.1f %.1f %.1f", pos[0], pos[1], pos[2]);
}

/* ------------------------------------------------------------------ bots in vehicles */
#define FLY_RAYS AK_COL_FLYER_MASK
static f32 clampf(f32 x, f32 lo, f32 hi) { return x < lo ? lo : x > hi ? hi : x; }

/* The squad AI's vehicle pass (08925E98, every frame): a soldier that wants a vehicle (+0xC8 bit 5: set when it spawns with the
 * spawner's chance, 089800C8 - 100 % by default, 0897E594; measured on Hoth: the first eight bots all had it), is on foot, alive and
 * has none reserved gets the nearest vehicle (squared distance, no limit in single player - 089269AC) that has a free seat for its
 * side and that no other soldier has reserved (+0xE4 bit 5), turrets left out; the order 0x8037 sends it there.  When there is none
 * the soldier stops wanting one.  [assumed: Aurek leaves out the placed walkers, as before; AK_BOT_VEHICLES scales the chance] */
static bool bot_take_vehicle(ak_play *p, ak_play_bot *b)
{
    if (!b->wants_veh || b->veh_cool > 0) return false;
    if (p->have_ctf && ctf_carrying(p, (s32)(1 + (b - p->bot)))) return false;   /* (a flag carrier cannot board: 08A0AF14) */
    s32 best = -1; f32 bd = 1e30f;
    for (u32 v = 0; v < p->nveh; v++) {
        const ak_vehicle *vh = &p->veh[v];
        if (!vh->def || !vh->alive || vh->driver >= 0 || !vh->def->drivable || p->vspawn[v].fixed || !veh_seat_for(p, v, b->team)) continue;
        f32 dx = vh->pos[0] - b->ch.pos[0], dy = vh->pos[1] - b->ch.pos[1], dz = vh->pos[2] - b->ch.pos[2], d2 = dx * dx + dy * dy + dz * dz;
        if (d2 >= bd) continue;
        bool taken = false;
        for (u32 i = 0; i < p->nbots && !taken; i++) taken = &p->bot[i] != b && p->bot[i].alive && p->bot[i].want_veh == (s32)v;
        if (!taken) { bd = d2; best = (s32)v; }
    }
    if (best < 0) { b->wants_veh = false; return false; }
    b->want_veh = best; b->goal = -1; b->holding = false; b->goal_t = 0;
    memcpy(b->hold, p->veh[best].pos, 12);
    bot_route(p, b, b->hold);
    if (ak_setting_int("AK_DEBUG_BOTVEH", 0)) AK_INFO("botveh", "%.1f s: bot %d (team %d) heads for vehicle %d, %.0f m", p->clock, (int)(b - p->bot), b->team, best, sqrtf(bd));
    return true;
}

/* whether a vehicle has a free seat for `team`'s soldiers: its own side's, one left empty (open), or an unboarded one the other side's
   spawn made that is the same kind this side's would be (Boz Pity's Carrion_Spat, both sides' creature).  Measured on the original
   (Boz Pity, 2 min, RS_AI_BOTS): Alliance soldiers reserved 30d49 and 30dd9, Carrion_Spat made at the Empire's 100005 (135 of
   2-second samples), the Empire 30d52 / 30d4d / 30d9e made at Alliance posts (212) [assumed: the seat test is by the side's
   vehicle kind - the seat table 089269AC reads was not followed] */
static bool veh_seat_for(const ak_play *p, u32 v, int team)
{
    const ak_vehicle *vh = &p->veh[v];
    if (vh->team == team || vh->open) return true;
    const ak_play_vspawn *sp = &p->vspawn[v];
    return team >= 0 && team < 2 && sp->def[team] >= 0 && vh->def == &p->vdef[sp->def[team]];
}

static void bot_board(ak_play *p, ak_play_bot *b, u32 idx, u32 v)
{
    AK_VERBOSE("bot", "bot %u boards vehicle %u (%s)", idx, v, p->veh[v].def ? p->veh[v].def->name : "-");
    ak_vehicle *vh = &p->veh[v];
    vh->driver = (s32)(1 + idx); vh->aim_yaw = vh->aim_pitch = 0; vh->volley_t = 0;
    vh->team = b->team; vh->open = false; p->target[VT(p, v)].team = b->team;   /* (the vehicle takes its occupant's side, 089D29D8) */
    b->veh = (s32)v; b->want_veh = -1; b->raider = false; b->enemy = -1; b->rev_t = 0; b->vstuck_t = 0; b->vstucks = 0; b->run_t = 0;
    memcpy(b->ch.pos, vh->pos, 12); memcpy(b->vstuck_pos, vh->pos, 12);
    b->fly_alt = vh->pos[1]; b->role = 0; b->role_obj = -1; b->role_leg = 0; b->fly_phase = 0; b->fly_t = rnd(&b->seed) * 2.0f;
    p->target[1 + idx].alive = false;                                         /* the soldier is inside: the vehicle is the target now */
    b->goal = -1; bot_choose_goal(p, b);
    if (ak_setting_int("AK_DEBUG_BOTVEH", 0)) AK_INFO("botveh", "%.1f s: bot %u (team %d) gets in %u %s", p->clock, idx, b->team, v, vh->def->name);
}

static void bot_exit(ak_play *p, ak_play_bot *b, u32 idx)
{
    ak_vehicle *vh = &p->veh[b->veh]; f32 out[3], gy;
    if (!vehicle_exit_spot(p, vh, out)) {                                    /* (the game's exit spot, 089D2DBC; none free: the left) */
        f32 rx = cosf(vh->yaw), rz = -sinf(vh->yaw), dd = vh->def->radius + p->cp.radius + 0.5f;
        out[0] = vh->pos[0] - rx * dd; out[1] = vh->pos[1] + 1.0f; out[2] = vh->pos[2] - rz * dd;
        if (ak_char_ground_below(&p->col, out, 6.0f, &gy)) out[1] = gy; else memcpy(out, vh->pos, 12);
    }
    ak_char_spawn(&b->ch, out, vh->yaw);
    vh->driver = -1; vh->open = true; vh->throttle = vh->steer = vh->strafe = 0; vh->brake = false;
    b->veh = -1; b->veh_cool = 20.0f; b->wants_veh = true; b->raider = true; b->state = PLAY_IDLE;   /* (out: wanting one again, 0894B2C4 case 4 - which also sets the unit's +329, b->raider; the 20 s wait is Aurek's [assumed]) */ b->clip_t = 0; b->stuck_t = 0; memcpy(b->stuck_pos, out, 12);
    ak_target *t = &p->target[1 + idx]; t->alive = true; t->team = b->team;
    b->goal_t = 0; bot_choose_goal(p, b);                                      /* (keeps its goal post if still not held) */
    if (ak_setting_int("AK_DEBUG_BOTVEH", 0)) AK_INFO("botveh", "%.1f s: bot %u gets out of %s at %.0f %.0f %.0f (stucks %u)", p->clock, idx, vh->def->name, vh->pos[0], vh->pos[1], vh->pos[2], b->vstucks);
}

/* the turret on the enemy (within the hardpoint's reach of the hull's facing), firing with the bot's aim error */
static void bot_vehicle_gun(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 v, f32 dt, bool nose_only)
{
    ak_vehicle *vh = &p->veh[v]; const ak_vehicle_def *d = vh->def;
    const ak_target *en = b->enemy >= 0 ? &p->target[b->enemy] : NULL;
    if (en && !en->alive) { b->enemy = -1; en = NULL; }
    f32 want_yaw = 0;
    if (en) {
        f32 ex = en->feet[0] - vh->pos[0], ez = en->feet[2] - vh->pos[2];
        want_yaw = nose_only ? 0 : wrap(atan2f(-ex, -ez) - vh->yaw);
    }
    f32 lim = 1.2f, step = 2.0f * dt;                                         /* the player's turret reach and turn speed */
    f32 wy = clampf(want_yaw, -lim, lim), dy = wy - vh->aim_yaw;
    vh->aim_yaw += clampf(dy, -step, step);
    b->react_t -= dt;
    if (!en || b->react_t > 0 || !d->armed) { vh->volley_t = 0; return; }
    f32 tgt[3] = { en->feet[0], en->feet[1] + en->height * 0.5f, en->feet[2] };
    f32 eye[3] = { vh->pos[0], vh->pos[1] + d->hover + d->height * 0.8f, vh->pos[2] };
    f32 dx = tgt[0] - eye[0], dy2 = tgt[1] - eye[1], dz = tgt[2] - eye[2], dist = sqrtf(dx * dx + dy2 * dy2 + dz * dz);
    if (d->kind == AK_VEH_FLYER && b->enemy >= (s32)NS(p) && b->enemy < (s32)NV(p) && ak_setting_int("AK_FLY_LEAD", 1)) {
        /* the attack node's aim point (089496E8): the target's intercept for the shot speed D_08B1B740 (1000) - as the turrets'
           (0895076C); the trigger's cone and the shot both take it (08948998 -> 08965A70) */
        const ak_vehicle *ev = &p->veh[b->enemy - NS(p)]; f32 lt = dist / (1000.0f * S);
        for (int k = 0; k < 3; k++) tgt[k] += ev->vel[k] * lt;
        dx = tgt[0] - eye[0]; dy2 = tgt[1] - eye[1]; dz = tgt[2] - eye[2];
    }
    bool held;
    /* the trigger (traced, 08946910 / 08948998 / 08949D5C -> 08965A70, ak_ai_fire): flyers 600 m and 5 degrees around the nose
       (0894878C, 08949B28), ground vehicles 250 m and 10 degrees across the ground (0894677C), in bursts by the gun's heat values */
    {   bool fly = d->kind == AK_VEH_FLYER; f32 cp = cosf(vh->pitch), to[3] = { dx, dy2, dz };
        f32 fw[3] = { nose_only ? -sinf(vh->yaw) * cp : -sinf(vh->yaw + vh->aim_yaw), nose_only ? sinf(vh->pitch) : 0, nose_only ? -cosf(vh->yaw) * cp : -cosf(vh->yaw + vh->aim_yaw) };
        bool ok = ak_ai_fire_ok(fw, to, (fly ? 600.0f : 250.0f) * S, (fly ? 5.0f : 10.0f) * 0.017453293f, !fly);
        held = ak_ai_fire_update(&vh->fire_ai, &d->gun_bot, true, ok, rnd(&b->seed), dt);
    }
    /* the secondary: the game's AI fires it at most every 15 s, with the target within 5 degrees (func 08948A9C: 0x08B1B754, 0x08AEDAE8) */
    if (d->sec.armed && vh->bot_sec_t <= 0 && dist < (d->lose_lock_range > 0 ? d->lose_lock_range : 300.0f)) {
        f32 cp = cosf(vh->pitch), fx = nose_only ? -sinf(vh->yaw) * cp : -sinf(vh->yaw + vh->aim_yaw), fy = nose_only ? sinf(vh->pitch) : 0, fz = nose_only ? -cosf(vh->yaw) * cp : -cosf(vh->yaw + vh->aim_yaw);
        f32 hd = nose_only ? dist : sqrtf(dx * dx + dz * dz);
        if ((fx * dx + fy * dy2 * (nose_only ? 1.0f : 0.0f) + fz * dz) > cosf(5.0f * 0.017453293f) * hd) {
            f32 c[3] = { en->feet[0], en->feet[1] + en->height * 0.5f, en->feet[2] };
            if (vehicle_fire2(p, m, v, c, b->enemy)) vh->bot_sec_t = 15.0f;
        }
    }
    {   static int dg = -1; if (dg < 0) dg = ak_setting_int("AK_DEBUG_FLYGUN", 0);
        if (dg && d->kind == AK_VEH_FLYER && held) AK_INFO("flygun", "%.2f bot %d fires at %d, %.0f m", p->clock, (int)(b - p->bot), b->enemy, dist); }
    if (!held) { vh->volley_t = 0; return; }
    aim_cap(&b->seed, eye, tgt, p->bot_aim_set ? p->bot_aim : d->gun_bot.ai_acc[p->difficulty >= 2 ? 1 : 0] * 0.017453293f);   /* (as the soldiers) */
    vehicle_fire(p, m, v, tgt, dt, vh->fire_ai.began && ak_ai_burst(&d->gun_bot) <= 0);
}

/* ---- space: the team AI commander (traced: funcs 0898EDBC..089919F4, the pilots' goals 089424AC / 08950BE8)
 * Each team's commander gives a flyer that has just become free a role by its Flyer_Type (func 0899129C, the capture-the-flag branch
 * left out): a fighter takes an attack run on the enemy capital ship 40 % of the time (kind 2), else 20 % (kind 1), else general
 * combat; a bomber always takes one (kind 2 first); a transport flies into the enemy hangar and lands ("land in hangar", 100 %);
 * interceptors, heroes and the rest fight.  Runs and hangars are the level's AI objectives (game/ak_space.h); the commander's percent
 * rolls are its own (50 / 100 / 20 / 40 / 100 at 08B1BBB0..C0).  Which free objective it hands out is not traced (here: the nearest); [PARITY(4.4)]
 * a finished run is rolled again for the same flyer (the game re-offers it to the nearest fighter, func 08991768). */
enum { SPACE_COMBAT, SPACE_RUN, SPACE_LAND };
static int obj_team(const ak_play *p, const ak_space_obj *o)
{   /* a hangar run belongs to whoever holds the hangar's post (the post nearest its inner end); attack runs to their ship */
    if (o->kind != AK_OBJ_HANGAR || !p->have_cq) return o->team;
    s32 best = -1; f32 bd = 200.0f * 200.0f;
    for (u32 i = 0; i < p->cq.nposts; i++) {
        f32 dx = p->cq.post[i].pos[0] - o->path[2][0], dy = p->cq.post[i].pos[1] - o->path[2][1], dz = p->cq.post[i].pos[2] - o->path[2][2];
        f32 d2 = dx * dx + dy * dy + dz * dz; if (d2 < bd) { bd = d2; best = (s32)i; }
    }
    return best < 0 ? o->team : p->match.post[best].owner;
}
static bool obj_free(const ak_play *p, u32 i)
{
    s32 u = p->obj_unit[i]; if (u < 0) return true;
    const ak_play_bot *b = &p->bot[u];
    return !b->alive || b->veh < 0 || b->role_obj != (s32)i;
}
static s32 pick_obj(const ak_play *p, const ak_play_bot *b, int kind, const f32 *from)
{
    s32 best = -1; f32 bd = 1e30f;
    for (u32 i = 0; i < p->space.nobj; i++) {
        const ak_space_obj *o = &p->space.obj[i];
        if (o->kind != kind || obj_team(p, o) == b->team || !obj_free(p, i)) continue;
        f32 dx = o->path[0][0] - from[0], dy = o->path[0][1] - from[1], dz = o->path[0][2] - from[2], d2 = dx * dx + dy * dy + dz * dz;
        if (d2 < bd) { bd = d2; best = (s32)i; }
    }
    return best;
}
/* the game's shared random as the commander draws it (0899129C: (r >> 1) x 2^-31 x 100, a roll in 0..100) */
static f32 game_roll(ak_play *p)
{
    p->grng[0] = p->grng[0] * 0x10000u + (u32)((s32)p->grng[0] >> 16) + p->grng[1]; p->grng[1] += p->grng[0];
    return (f32)(p->grng[0] >> 1) * 4.656612873e-10f * 100.0f;
}
static void space_assign(ak_play *p, ak_play_bot *b, u32 idx)
{
    const ak_vehicle *vh = &p->veh[b->veh];
    if (b->role_obj >= 0 && p->obj_unit[b->role_obj] == (s32)idx) p->obj_unit[b->role_obj] = -1;
    b->role = SPACE_COMBAT; b->role_obj = -1; b->role_leg = 0; b->role_t = 0;
    s32 o = -1; int role = SPACE_COMBAT;
    switch (vh->def->flyer_type) {
    case AK_FLY_FIGHTER:
        o = pick_obj(p, b, AK_OBJ_RUN2, vh->pos);
        /* (the rolls on the game's shared random, as the commander's: each bot's own stream gave runs to 2 of 9 fighters) */
        if (o >= 0 && game_roll(p) < 40.0f) { role = SPACE_RUN; break; }
        o = pick_obj(p, b, AK_OBJ_RUN1, vh->pos);
        if (o >= 0 && game_roll(p) < 20.0f) role = SPACE_RUN;
        break;
    case AK_FLY_BOMBER:
        o = pick_obj(p, b, AK_OBJ_RUN2, vh->pos); if (o < 0) o = pick_obj(p, b, AK_OBJ_RUN1, vh->pos);
        if (o >= 0) role = SPACE_RUN;
        break;
    case AK_FLY_TRANSPORT:
        o = pick_obj(p, b, AK_OBJ_HANGAR, vh->pos); if (o >= 0) role = SPACE_LAND;
        break;
    default: break;
    }
    if (role != SPACE_COMBAT && o >= 0) { b->role = role; b->role_obj = o; p->obj_unit[o] = (s32)idx; }
    if (ak_setting_int("AK_DEBUG_BOTVEH", 0))
        AK_INFO("botveh", "%.1f s: bot %u (%s) role %s%s", p->clock, idx, vh->def->name, role == SPACE_RUN ? "attack run" : role == SPACE_LAND ? "land in the enemy hangar" : "general combat",
                b->role_obj >= 0 ? (p->space.obj[b->role_obj].kind == 2 ? " (kind 2)" : p->space.obj[b->role_obj].kind == 1 ? " (kind 1)" : "") : "");
}

/* placed craft in flight (space levels' type 13 flyers): in the original they fly from the first frame (harness state.log,
   Space Hoth: 30d44 / 30d46 / 30d48 / 30d4a / 30d4c move at 60-80 m/s from the start) - here a bot of the craft's side starts
   in each, flying at its cruise speed; in the campaign (no armies) one of the craft pilots (above) [assumed: who pilots them in the
   game is not traced].  Also when the script starts the craft later (3) or makes a new one (0x8007). */
static void placed_flyer_crew(ak_play *p, const ak_model_set *m, u32 v)
{
    ak_vehicle *vh = &p->veh[v];
    if (!p->vspawn[v].fixed || !vh->alive || !vh->def || vh->def->kind != AK_VEH_FLYER || vh->driver >= 0) return;
    f32 dn[3] = { 0, -1, 0 }; ak_col_hit hh; if (ak_col_raycast(&p->col, vh->pos, dn, 20.0f, AK_COL_FLYER_MASK, &hh)) return;   /* (standing on something: parked) */
    s32 pick = -1;
    for (u32 i = 0; i < p->nbots && pick < 0; i++) { const ak_play_bot *b = &p->bot[i]; if (!b->pilot && b->veh < 0 && b->team == vh->team && !b->hero) pick = (s32)i; }
    for (u32 i = 0; i < p->nbots && pick < 0; i++) { const ak_play_bot *b = &p->bot[i]; if (b->pilot && !b->alive) pick = (s32)i; }
    if (pick < 0) return;
    ak_play_bot *b = &p->bot[pick];
    if (b->pilot) { b->team = vh->team; b->pilot_v = (s16)v; }
    if (!b->alive) bot_spawn(p, m, b, (u32)pick);   /* (a bot still waiting for its spawner, or a pilot: in now, as the craft's pilot) */
    bot_board(p, b, (u32)pick, v);
    vh->flying = true; vh->takeoff = 0; vh->speed = vh->def->cruise > 0 ? vh->def->cruise : vh->def->stall_speed;
    vh->lvel[0] = vh->lvel[1] = 0; vh->lvel[2] = vh->speed; vh->r_tap_t = 99.0f;
    b->fly_phase = 1;
}

/* the player's starfighter target and auto-pilot.  Measured (harness sa_h11, Space Alderaan): d-pad down gave the craft a target
 * (its +0x1C0, read by vfunc +0x10C = 08AC4BD0; 999 none), "press it again to change to another one" (tip 0x1A7) - in sa_h12 it
 * took the flown TIE 30d4e, 480 m off the nose, over the empty craft in the enemy hangar 1290 m ahead (so: craft with a pilot); triangle set
 * +0x34C bit 0x20, the auto-pilot, which counts only with a target (089CE1C0) - "move towards your target ... press again to return
 * to manual control" (0x178).  [assumed: the first target is the piloted enemy craft nearest the nose within 2500 m, a press moves to the
 * next by that order; the auto-pilot turns the nose to the target at the bots' steering gains (bot_fly) and stops when it goes]
 * The game's own choice and steering are not traced. */
static void fly_target_update(ak_play *p, u32 v, f32 dt)
{
    ak_vehicle *vh = &p->veh[v]; (void)dt;
    if (p->fly_target >= 0 && ((u32)p->fly_target >= NV(p) || !p->target[p->fly_target].alive)) { p->fly_target = -1; p->fly_auto = false; }
    if (p->fly_pick) {
        p->fly_pick = false;
        f32 cp = cosf(vh->pitch), fw[3] = { -sinf(vh->yaw) * cp, sinf(vh->pitch), -cosf(vh->yaw) * cp };
        s32 order[PLAY_MAX_VEH]; f32 key[PLAY_MAX_VEH]; u32 n = 0;
        for (u32 i = NS(p); i < NV(p) && n < PLAY_MAX_VEH; i++) {
            const ak_target *t = &p->target[i]; if (!t->alive || t->team == p->team || (s32)(i - NS(p)) == (s32)v || p->veh[i - NS(p)].driver < 0) continue;
            f32 dx = t->feet[0] - vh->pos[0], dy = t->feet[1] - vh->pos[1], dz = t->feet[2] - vh->pos[2], d = sqrtf(dx * dx + dy * dy + dz * dz);
            if (d > 2500.0f || d < 1.0f) continue;
            f32 c = (fw[0] * dx + fw[1] * dy + fw[2] * dz) / d, k = -c; u32 j = n++;
            while (j > 0 && key[j - 1] > k) { key[j] = key[j - 1]; order[j] = order[j - 1]; j--; }
            key[j] = k; order[j] = (s32)i;
        }
        if (n) { u32 j = 0; if (p->fly_target >= 0) { for (u32 q = 0; q < n; q++) if (order[q] == p->fly_target) j = (q + 1) % n; } p->fly_target = order[j]; }
        if (ak_setting_int("AK_DEBUG_VEH", 0) && p->fly_target >= 0) { const ak_vehicle *tv = &p->veh[p->fly_target - NS(p)];
            AK_INFO("veh", "target %d: %s (%x) at %.0f %.0f %.0f, %u candidates", p->fly_target, tv->def ? tv->def->name : "-", p->vspawn[p->fly_target - NS(p)].eid, tv->pos[0], tv->pos[1], tv->pos[2], n); }
    }
    /* triangle (089A9728, action 0xF): below the elite difficulty (08979DF4 != 2) the auto-pilot - +0x34C bit 0x20, kept only with a
       target and in free flight (+0x354 bit 0, or the craft's vfunc +0xCC) - which clears the camera lock; at the elite difficulty
       the camera lock instead (+0x1DC toggled: STDTEXT 0x1AE "Press .. to look towards your target. This is camera lock, it only
       moves your camera not your starfighter") */
    if (p->fly_auto_req) { p->fly_auto_req = false; if (p->difficulty >= 2) p->cam_lock = !p->cam_lock; else p->fly_auto = !p->fly_auto; }
    if (p->fly_auto) p->cam_lock = false;
    if (p->fly_target < 0) p->cam_lock = false;
    /* the lock's blend (089AB82C: +728 += dt x the vehicle's +376 - a blueprint value, 0x20144D79, none on the game's flyers: its
       default 1.0 - up to 1.0) [assumed: back to 0 at once when the lock ends] */
    if (p->cam_lock) { p->cam_lock_t += dt; if (p->cam_lock_t > 1.0f) p->cam_lock_t = 1.0f; } else p->cam_lock_t = 0;
    if (p->fly_auto && p->fly_target >= 0 && vh->flying && vh->takeoff <= 0) {
        const ak_target *t = &p->target[p->fly_target];
        f32 tx = t->feet[0] - vh->pos[0], ty = t->feet[1] + t->height * 0.5f - vh->pos[1], tz = t->feet[2] - vh->pos[2], h = sqrtf(tx * tx + tz * tz);
        f32 dyaw = wrap(atan2f(-tx, -tz) - vh->yaw), dp = atan2f(ty, fmaxf(h, 1.0f)) - vh->pitch;
        vh->steer = clampf(-dyaw * 2.0f, -1, 1); vh->throttle = clampf(-dp * 3.0f, -1, 1);
    }
}

/* a flyer: take off (from a capital ship's hangar: out along its hangar run, traced from the take-off behaviour 0894C438 - up
 * 2 s at 10 m/s, then toward the run's outer point for up to 10 s), then its role: attack runs along an objective, landing in the
 * enemy hangar (then out to capture its post), or general combat - runs on the nearest enemy vehicle (else soldiers near an enemy
 * post), keeping clear of the level */
static void bot_fly(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 idx, f32 dt)
{
    u32 v = (u32)b->veh; ak_vehicle *vh = &p->veh[v]; const ak_vehicle_def *d = vh->def;
    vh->strafe = 0; vh->brake = false; b->boost = false;
    if (!vh->flying) {
        if (b->role == SPACE_LAND && b->role_leg >= 2) {                       /* landed in the enemy hangar: out, to take its post */
            if (b->role_obj >= 0 && p->obj_unit[b->role_obj] == (s32)idx) p->obj_unit[b->role_obj] = -1;
            bot_exit(p, b, idx); return;
        }
        b->fly_t -= dt;                                                        /* waits a moment before it lifts off (up to 2 s) */
        vh->throttle = vh->steer = 0;
        if (b->fly_t <= 0) { vh->throttle = -0.6f; b->fly_phase = 1; }         /* stick back: lift off */
        return;
    }
    if (vh->takeoff > 0) { vh->throttle = 0; vh->steer = 0; return; }
    if (b->fly_phase == 1) {                                                   /* off the deck: a hangar run of our own close by? */
        b->fly_phase = 3; b->fly_t = 0;
        for (u32 i = 0; i < p->space.nobj; i++) {
            const ak_space_obj *o = &p->space.obj[i]; if (o->kind != AK_OBJ_HANGAR) continue;
            f32 dx = o->path[2][0] - vh->pos[0], dy = o->path[2][1] - vh->pos[1], dz = o->path[2][2] - vh->pos[2];
            if (dx * dx + dy * dy + dz * dz < 2500.0f) { memcpy(b->fly_pt, o->path[0], 12); b->fly_phase = 2; b->fly_t = 10.0f; break; }
        }
        if (b->fly_phase == 3) space_assign(p, b, idx);
    }
    if (b->fly_phase == 2) {                                                   /* leaving the hangar: straight for the run's outer point */
        b->fly_t -= dt;
        f32 tx = b->fly_pt[0] - vh->pos[0], ty = b->fly_pt[1] - vh->pos[1], tz = b->fly_pt[2] - vh->pos[2], h = sqrtf(tx * tx + tz * tz);
        if (b->fly_t <= 0 || h < 25.0f) { b->fly_phase = 3; space_assign(p, b, idx); }
        else {
            f32 dyaw = wrap(atan2f(-tx, -tz) - vh->yaw), dp = atan2f(ty, fmaxf(h, 1.0f)) - vh->pitch;
            vh->steer = clampf(-dyaw * 2.0f, -1, 1); vh->throttle = clampf(-dp * 3.0f, -1, 1); vh->brake = true;
            return;
        }
    }
    /* pick a target now and then */
    b->think_t -= dt; b->run_t -= dt; b->att_t += dt; b->tcool -= dt;
    if (b->think_t <= 0) {
        b->think_t = 0.5f + rnd(&b->seed) * 0.2f;
        s32 best = -1; f32 bd = 1500.0f * 1500.0f;                           /* (space battles are wide) */
        static int gc = -1; if (gc < 0) gc = ak_setting_int("AK_FLY_TARGETS", 1);
        if (gc && d->kind == AK_VEH_FLYER) {
            /* GENERAL_COMBAT (08945DD8, the node 0x41D's update): the target is the vehicle sensor's best record (0895FF18: the
               highest score, 08960750) - 0.5 x a distance score (0 to 40 m, rising to 1 at 200 m, falling to 0 at the sensor's
               range: the craft's TargetRange, 2500) + 0.25 x (1 + the cosine between the nose and the way to it) + 1 for a record
               whose +8 is 0 [assumed: no one else on it].  It keeps a target until it is gone or 45 s have passed (then 10 s
               without one, 089601D4), and after each attack it patrols 15 s (D_08AEDA20) before the next */
            const ak_target *cur = b->enemy >= (s32)NS(p) && b->enemy < (s32)NV(p) ? &p->target[b->enemy] : NULL;
            bool ok = cur && cur->alive && cur->team != b->team && p->veh[b->enemy - NS(p)].driver >= 0;
            if (ok && b->att_t > 45.0f) { ok = false; b->tcool = 15.0f; }
            if (!ok && cur) b->tcool = fmaxf(b->tcool, 15.0f);
            if (ok) best = b->enemy;
            else if (b->tcool <= 0) {
                f32 bs = -1e30f, cp = cosf(vh->pitch), fw[3] = { -sinf(vh->yaw) * cp, sinf(vh->pitch), -cosf(vh->yaw) * cp }, rg = fmaxf(d->target_range, 201.0f);
                for (u32 i = NS(p); i < NV(p); i++) {
                    const ak_target *t = &p->target[i]; if (!t->alive || t->team == b->team || p->veh[i - NS(p)].driver < 0) continue;
                    f32 dx = t->feet[0] - vh->pos[0], dy = t->feet[1] - vh->pos[1], dz = t->feet[2] - vh->pos[2], dd = sqrtf(dx * dx + dy * dy + dz * dz);
                    if (dd > rg) continue;
                    f32 ds = dd > 200.0f ? 1.0f - (dd - 200.0f) / (rg - 200.0f) : dd > 40.0f ? (dd - 40.0f) * 0.00625f : 0;
                    f32 cs = dd > 1e-3f ? (fw[0] * dx + fw[1] * dy + fw[2] * dz) / dd : 1;
                    bool other = false; for (u32 j = 0; j < p->nbots && !other; j++) other = &p->bot[j] != b && p->bot[j].veh >= 0 && p->bot[j].enemy == (s32)i;
                    f32 sc = ds * 0.5f + (cs + 1.0f) * 0.25f + (other ? 0 : 1.0f);
                    if (sc > bs) { bs = sc; best = (s32)i; }
                }
                if (best >= 0) b->att_t = 0;
            }
        } else
        for (u32 i = NS(p); i < NV(p); i++) {                                 /* enemy vehicles with someone in them */
            const ak_target *t = &p->target[i]; if (!t->alive || t->team == b->team || p->veh[i - NS(p)].driver < 0) continue;
            f32 dx = t->feet[0] - vh->pos[0], dy = t->feet[1] - vh->pos[1], dz = t->feet[2] - vh->pos[2], d2 = dx * dx + dy * dy + dz * dz;
            if (d2 < bd) { bd = d2; best = (s32)i; }
        }
        /* else soldiers: near the goal post, or near the flyer - Aurek's own fallback, not in space: a flyer chasing a soldier into the
           enemy hangar landed and lifted off every 1.1 s (GENERAL_COMBAT's target is the vehicle sensor's record; [assumed] it holds no
           soldiers in space) */
        if (best < 0 && !(p->is_space && gc && d->kind == AK_VEH_FLYER)) {
            bd = 250.0f * 250.0f;
            const f32 *c = b->goal >= 0 ? p->cq.post[b->goal].pos : vh->pos;
            for (u32 i = 0; i < NS(p); i++) {
                const ak_target *t = &p->target[i]; if (!t->alive || t->team == b->team) continue;
                f32 dx = t->feet[0] - c[0], dz = t->feet[2] - c[2], d2 = dx * dx + dz * dz;
                if (d2 < bd) { bd = d2; best = (s32)i; }
            }
        }
        if (best != b->enemy) { b->enemy = best; b->react_t = 0.5f + rnd(&b->seed) * 0.5f; b->circle = false; }
        if (b->goal < 0 || (p->have_cq && p->match.post[b->goal].owner == b->team)) bot_choose_goal(p, b);
    }
    if (b->enemy >= 0 && !p->target[b->enemy].alive) b->enemy = -1;
    /* where to: the role's path, else the target (an attack run), else over the goal post */
    f32 dest[3];
    const ak_target *en = b->enemy >= 0 ? &p->target[b->enemy] : NULL;
    const ak_space_obj *ob = b->role != SPACE_COMBAT && b->role_obj >= 0 ? &p->space.obj[b->role_obj] : NULL;
    if (ob && (obj_team(p, ob) == b->team || (b->role == SPACE_LAND && b->role_leg < 3 && !obj_free(p, (u32)b->role_obj) && p->obj_unit[b->role_obj] != (s32)idx)))
        { space_assign(p, b, idx); ob = b->role != SPACE_COMBAT && b->role_obj >= 0 ? &p->space.obj[b->role_obj] : NULL; }   /* taken meanwhile */
    const ak_target *chase = ob ? NULL : en;
    if (ob) memcpy(dest, ob->path[b->role_leg < 3 ? b->role_leg : 2], 12);
    else if (en) {
        dest[0] = en->feet[0]; dest[1] = en->feet[1] + en->height * 0.5f; dest[2] = en->feet[2];
        if (b->enemy >= (s32)NS(p) && b->enemy < (s32)NV(p)) {              /* a moving vehicle: steer for where it will be (lead pursuit) */
            const ak_vehicle *ev = &p->veh[b->enemy - NS(p)];
            f32 ex = dest[0] - vh->pos[0], ey = dest[1] - vh->pos[1], ez = dest[2] - vh->pos[2];
            /* FOLLOWING steers for the attack node's aim point (08948A9C -> node +0x30, 089496E8): the intercept for the shot speed
               1000 (D_08B1B740), as the gun's */
            f32 lt = ak_setting_int("AK_FLY_LEAD", 1) ? sqrtf(ex * ex + ey * ey + ez * ez) / (1000.0f * S) : fminf(sqrtf(ex * ex + ey * ey + ez * ez) / fmaxf(vh->speed, 20.0f) * 0.6f, 1.5f);
            for (int k = 0; k < 3; k++) dest[k] += ev->vel[k] * lt;
        }
    }
    else if (p->is_space && d->kind == AK_VEH_FLYER && b->role == SPACE_COMBAT && ak_setting_int("AK_FLY_PATROL", 1)) {
        /* GENERAL_COMBAT's patrol (node 0x485, update 0894B7D8): every 5 s, e = (the largest of |pos - centre| / half the extent per
           axis of the pilots' box, 08A145E4(1); without one 1500 x 500 x 1500 m about the origin)^4, 0 under 0.125 (0894BD4C); a
           roll r on the game's random: r >= e - a random direction (2r - 1 on each axis), else back toward the centre; flown at the
           pilot's most - (most - least) x 0.5 */
        f32 c[3], ext[3];
        for (int k = 0; k < 3; k++) { c[k] = p->have_pil ? (p->pil_min[k] + p->pil_max[k]) * 0.5f : 0; ext[k] = p->have_pil ? p->pil_max[k] - p->pil_min[k] : (k == 1 ? 500.0f : 1500.0f); }
        if (!b->patrol) { b->patrol = true; b->pat_t = 0; }
        if ((b->pat_t -= dt) <= 0) {
            f32 e = 0; for (int k = 0; k < 3; k++) { f32 q = fabsf(vh->pos[k] - c[k]) / (ext[k] * 0.5f); if (q > e) e = q; }
            e = e * e * e * e; if (e < 0.125f) e = 0;
            b->pat_t += 5.0f;
            if (e <= game_roll(p) * 0.01f) for (int k = 0; k < 3; k++) b->pat_dir[k] = game_roll(p) * 0.02f - 1.0f;
            else for (int k = 0; k < 3; k++) b->pat_dir[k] = c[k] - vh->pos[k];
        }
        f32 l = sqrtf(b->pat_dir[0] * b->pat_dir[0] + b->pat_dir[1] * b->pat_dir[1] + b->pat_dir[2] * b->pat_dir[2]); if (l < 1e-3f) { b->pat_dir[2] = -1; l = 1; }
        for (int k = 0; k < 3; k++) dest[k] = vh->pos[k] + b->pat_dir[k] / l * 1000.0f;
    }
    else if (b->goal >= 0) memcpy(dest, p->cq.post[b->goal].pos, 12);
    else { dest[0] = b->hold[0]; dest[1] = b->hold[1]; dest[2] = b->hold[2]; }
    if (en || ob) b->patrol = false;
    f32 tx = dest[0] - vh->pos[0], ty = dest[1] - vh->pos[1], tz = dest[2] - vh->pos[2], h = sqrtf(tx * tx + tz * tz), dist = sqrtf(h * h + ty * ty);
    if (ob) {                                                                  /* along the objective's three points */
        /* (a run's first legs end within 20 m: the fly-to node 0x487 over the objective's points, 0894D570 state 1, |d|^2 <= 400;
           its later states are VFPU code not read - the last leg's 70 m stays Aurek's) */
        f32 reach = b->role == SPACE_LAND ? (b->role_leg >= 2 ? 6.0f : 25.0f) : (b->role_leg >= 2 ? 70.0f : 20.0f);
        b->role_t += dt;
        if (dist < reach || (b->role == SPACE_RUN && b->role_leg >= 2 && b->feel && dist < 160.0f) || b->role_t > 40.0f) {
            b->role_leg++; b->role_t = 0;
            if (b->role == SPACE_RUN && b->role_leg >= 3) { space_assign(p, b, idx); ob = NULL; }
        }
    }
    /* the ground below */
    f32 down[3] = { 0, -1, 0 }, gy = -1e9f; ak_col_hit hit; bool ground = false;
    if (ak_col_raycast(&p->col, vh->pos, down, 400.0f, FLY_RAYS, &hit)) { gy = hit.pos[1]; ground = true; }   /* (none: space, or high up) */
    f32 want_yaw = atan2f(-tx, -tz), want_pitch;
    /* against a craft or a turret: the game's attack behaviour (traced: func 08948A9C, states FOLLOWING / CIRCLING_ROUND from the
     * debug names at 0x08B1B618).  FOLLOWING: nose on it.  Closer than 100 m on its tail (its heading and ours agree), 300 m head-on,
     * or 500 m for anything that is not a craft: CIRCLING_ROUND - fly level along cross(its heading, down), a direction square to its
     * course (func 08949450), until it is 500 m away, then FOLLOWING again.  (The third state, DOING_STUNT, is never entered by it.) */
    bool craft = chase && b->enemy >= (s32)NS(p) && b->enemy < (s32)NV(p), tur = chase && b->enemy >= (s32)NV(p), run = false;
    if (craft || tur) {
        f32 tf[3];
        if (craft) { const ak_vehicle *ev = &p->veh[b->enemy - NS(p)]; f32 c = cosf(ev->pitch); tf[0] = -sinf(ev->yaw) * c; tf[1] = sinf(ev->pitch); tf[2] = -cosf(ev->yaw) * c; }
        else { const ak_turret *tu = &p->turret[b->enemy - NV(p)]; tf[0] = tu->base[2]; tf[1] = tu->base[6]; tf[2] = tu->base[10]; }
        if (!b->circle) {
            f32 c = cosf(vh->pitch), mf[3] = { -sinf(vh->yaw) * c, sinf(vh->pitch), -cosf(vh->yaw) * c };
            f32 th = tur ? 500.0f : (tf[0] * mf[0] + tf[1] * mf[1] + tf[2] * mf[2] < 0 ? 300.0f : 100.0f);
            if (dist < th) {
                f32 cx = tf[2], cz = -tf[0], cl = sqrtf(cx * cx + cz * cz);
                if (cl < 1e-3f) { cx = -sinf(vh->yaw + 1.57f); cz = -cosf(vh->yaw + 1.57f); cl = 1; }
                b->circle = true; b->circle_dir[0] = cx / cl; b->circle_dir[1] = 0; b->circle_dir[2] = cz / cl;
            }
        } else if (dist > 500.0f) b->circle = false;
        {   static int ds = -1; if (ds < 0) ds = ak_setting_int("AK_DEBUG_FLYSTATE", 0);
            if (ds && fmodf(p->clock + idx * 0.037f, 0.5f) < dt) { f32 cp = cosf(vh->pitch), mf[3] = { -sinf(vh->yaw) * cp, sinf(vh->pitch), -cosf(vh->yaw) * cp };
                f32 an = acosf(clampf((mf[0] * tx + mf[1] * ty + mf[2] * tz) / fmaxf(dist, 1e-3f), -1, 1)) * 57.29578f;
                AK_INFO("flystate", "%.1f bot %u %s dist %.0f ang %.0f speed %.0f", p->clock, idx, b->circle ? "circle" : "follow", dist, an, vh->speed); } }
        if (b->circle) { want_yaw = atan2f(-b->circle_dir[0], -b->circle_dir[2]); want_pitch = 0; }
        else want_pitch = atan2f(ty, h);
        if (ground && !b->circle) want_pitch = fmaxf(want_pitch, atan2f(gy + 15.0f - vh->pos[1], fmaxf(h, 40.0f)));   /* (not into the ground) */
    } else {
    run = chase && dist < 160.0f && b->run_t <= -1.0f && in_sight(p, vh->pos, dest);
    if (chase && dist < 25.0f && b->run_t <= -1.0f) {                            /* soldiers: too close: break off and climb away, then turn back */
        b->run_t = 2.5f;
    }
    if (b->run_t > 0) { want_yaw = vh->yaw; want_pitch = 0.45f; }
    else if (run) want_pitch = atan2f(ty, h);                                 /* the run: nose on it */
    else {
        f32 alt = ob ? dest[1] : ground ? fmaxf(dest[1] + 25.0f, gy + 30.0f) : dest[1] + (en ? 0.0f : 25.0f);
        want_pitch = atan2f(alt - vh->pos[1], fmaxf(h, ob ? 1.0f : 80.0f));
    }
    }
    want_pitch = clampf(want_pitch, -0.7f, 0.7f);
    if (ground && vh->pos[1] - gy > 160.0f && !run) want_pitch = fminf(want_pitch, -0.15f);   /* not too high over the ground */
    /* feelers (every 0.1 s): rays along the way it wants to go and around it, ~2 s of flight long; if the wanted way is blocked, the
     * free one nearest to it (hangars, ceilings, cliffs, capital ships) */
    b->feel_t -= dt;
    if (b->feel_t <= 0) {
        b->feel_t = 0.1f;
        static const f32 oy[7] = { 0, 0.45f, -0.45f, 0.9f, -0.9f, 1.5f, -1.5f }, op[4] = { 0, 0.35f, -0.3f, 0.7f };
        f32 o[3] = { vh->pos[0], vh->pos[1] + d->height * 0.5f, vh->pos[2] }, len = vh->speed * 2.0f + 15.0f;
        f32 best = -1e9f; bool blocked = false; b->feel = false;
        /* the way it is heading now first: blocked close ahead (it cannot turn in time), look around that instead, and slow down */
        f32 near_l = vh->speed * 1.2f + 10.0f, base_y = want_yaw, base_p = want_pitch; b->near_wall = false;
        {   f32 cpn = cosf(vh->pitch), fwn[3] = { -sinf(vh->yaw) * cpn, sinf(vh->pitch), -cosf(vh->yaw) * cpn };
            if (ak_col_raycast(&p->col, o, fwn, near_l, FLY_RAYS, &hit)) { b->near_wall = true; base_y = vh->yaw; base_p = vh->pitch; } }
        for (int j = 0; j < 4; j++) for (int i = 0; i < 7; i++) {
            if (b->near_wall && i == 0 && j == 0) { blocked = true; continue; }
            f32 cy = base_y + oy[i], cpp = clampf(base_p + op[j], -0.8f, 0.9f), cc = cosf(cpp);
            f32 dir[3] = { -sinf(cy) * cc, sinf(cpp), -cosf(cy) * cc };
            f32 free_t = ak_col_raycast(&p->col, o, dir, len, FLY_RAYS, &hit) ? hit.t : len;
            if (i == 0 && j == 0) { if (free_t >= len) break; blocked = true; }   /* the wanted way is clear */
            f32 sc = free_t / len * 4.0f - fabsf(oy[i]) - fabsf(op[j]) * 0.7f + (free_t >= len ? 3.0f : 0);
            if (b->near_wall) sc += cosf(wrap(cy - want_yaw)) * 0.8f;     /* (of the ways out, the one toward where it wants to go) */
            if (sc > best) { best = sc; b->feel_yaw = cy; b->feel_pitch = cpp; }
        }
        b->feel = blocked;
    }
    bool landing = ob && b->role == SPACE_LAND && b->role_leg >= 1;
    if (landing) {                                                             /* into the hangar slowly; past its inner point, down */
        vh->brake = true;
        if (b->role_leg >= 3) { want_yaw = vh->yaw; want_pitch = -0.25f; }
        if (b->role_leg == 1 && b->feel) { want_yaw = b->feel_yaw; want_pitch = b->feel_pitch; }
    } else if (b->feel) { want_yaw = b->feel_yaw; want_pitch = b->feel_pitch; vh->brake = b->near_wall; }
    else if (ground && vh->pos[1] - gy < 10.0f) want_pitch = fmaxf(want_pitch, 0.3f);   /* low over open ground: up a little */
    f32 dyaw = wrap(want_yaw - vh->yaw), dp = want_pitch - vh->pitch;
    /* the stick from the angle to the wanted way: the AI pilot's own rule is not traced (08959780 -> 089B2DC8); the gains are set to
       the original's measured pursuit (harness, Space Hoth: the chaser's nose 1 / 3 degrees off its target at 25 / 50 %): x4 of the
       old 2 / 3 gives 3 / 4 degrees [measured fit, PARITY(4.6)] (AK_FLY_GAIN scales it; 0.25: the old) */
    {   static f32 g = -1; if (g < 0) g = ak_setting_float("AK_FLY_GAIN", 4.0f);
        vh->steer = clampf(-dyaw * 2.0f * g, -1, 1);
        vh->throttle = clampf(-dp * 3.0f * g, -1, 1); }
    b->boost = !landing && ((!chase && dist > 250.0f && !b->feel) || (chase && dist > 300.0f));
    if (craft && !b->circle && ak_setting_int("AK_FLY_LEAD", 1)) {
        /* FOLLOWING's speed (08949834): the target's speed + (distance - 250) x 0.004 x the top speed, between the pilot's least and
           most (+0x78 / +0x7C) - here the stall and cruising speeds [assumed] - reached by the throttle buttons */
        const ak_vehicle *ev = &p->veh[b->enemy - NS(p)];
        static int tsp = -1; if (tsp < 0) tsp = ak_setting_int("AK_FLY_PURSUIT_TOP", 0);
        f32 top = tsp && d->top_speed > d->cruise ? d->top_speed : d->cruise > 0 ? d->cruise : 60.0f, ws = clampf(ev->speed + (dist - 250.0f) * 0.004f * top, d->stall_speed, top);
        b->boost = false; vh->fast = false; vh->brake = false;   /* (AK_FLY_PURSUIT_TOP=1: TopSpeed as the most, past the cruise by the boost - 437 m median instead of 562, no more hits: 51 / 56) */
        if (vh->speed < ws - 2.0f) b->boost = ws > d->cruise + 1.0f; else if (vh->speed > ws + 2.0f) vh->brake = true;
    } else if (!chase && !landing && !b->feel && d->kind == AK_VEH_FLYER && ak_setting_int("AK_FLY_GOTO_SPEED", 1)) {
        /* flying to a point (the node 0x487's update 0894D570, measured in the original as the flyers' commonest call of the pilot's
           08959780): the speed asked is the pilot's most (+0x7C: the craft's CruisingSpeed) x (0.25 + 0.25 c^4), c the cosine between
           the nose and the way to the point (0 behind), between the pilot's least and most (0894E358); the node ends within 20 m
           (400 = 20^2, D_08AEDBF0).  Harness, Space Hoth: asks of 50 / 37.5 / 25 for cruise 100 */
        f32 cp = cosf(vh->pitch), mf[3] = { -sinf(vh->yaw) * cp, sinf(vh->pitch), -cosf(vh->yaw) * cp };
        f32 c = dist > 1e-3f ? fmaxf(0.0f, (mf[0] * tx + mf[1] * ty + mf[2] * tz) / dist) : 1.0f, c4 = c * c * c * c;
        f32 top = d->cruise > 0 ? d->cruise : 60.0f, ws = clampf(top * (0.25f + 0.25f * c4), fminf(d->stall_speed, top), top);
        if (b->patrol) ws = top - (top - fminf(d->stall_speed, top)) * 0.5f;   /* (the patrol's: 0894B7D8) */
        b->boost = false; vh->fast = false;
        if (vh->speed > ws + 2.0f) vh->brake = true;
    } else if (craft && !b->circle && dist < 90.0f) {                        /* on its tail: no faster than it */
        const ak_vehicle *ev = &p->veh[b->enemy - NS(p)];
        if (ev->speed < vh->speed - 5.0f) vh->brake = true;
    }
    if (ak_setting_int("AK_DEBUG_BOTVEH", 0) > 1 && fmodf(p->clock, 1.0f) < dt)
        AK_INFO("botveh", "%.1f s: %s bot %u at %.0f %.0f %.0f clear %.0f pitch %.2f->%.2f yaw %.2f speed %.0f enemy %d dist %.0f run %.1f", p->clock, d->name, idx,
                vh->pos[0], vh->pos[1], vh->pos[2], vh->pos[1] - gy, vh->pitch, want_pitch, vh->yaw, vh->speed, b->enemy, dist, b->run_t);
    if (ob && b->role == SPACE_RUN && b->role_leg == 2 && dist < 500.0f) {   /* the run's last leg: the enemy turret by its end, else the hull */
        f32 aimp[3]; memcpy(aimp, dest, 12); f32 bt = 200.0f * 200.0f;
        for (u32 k = 0; k < p->nturret; k++) {
            const ak_turret *tu = &p->turret[k]; if (!tu->alive || tu->team == b->team) continue;   /* (within 200 m of the run's end) */
            f32 ex = tu->pos[0] - dest[0], ey = tu->pos[1] - dest[1], ez = tu->pos[2] - dest[2], e2 = ex * ex + ey * ey + ez * ez;
            if (e2 < bt) { bt = e2; aimp[0] = tu->pos[0]; aimp[1] = tu->pos[1] + tu->rad * 0.6f; aimp[2] = tu->pos[2]; }
        }
        f32 ax = aimp[0] - vh->pos[0], ay = aimp[1] - vh->pos[1], az = aimp[2] - vh->pos[2], ad = sqrtf(ax * ax + ay * ay + az * az);
        f32 cp2 = cosf(vh->pitch), fw2[3] = { -sinf(vh->yaw) * cp2, sinf(vh->pitch), -cosf(vh->yaw) * cp2 };
        bool on = (fw2[0] * ax + fw2[1] * ay + fw2[2] * az) > cosf(0.3f) * ad;
        if (ak_setting_int("AK_DEBUG_BOTVEH", 0) > 2 && fmodf(p->clock, 0.5f) < dt)
            AK_INFO("botveh", "%.1f s: bot %u run end: dist %.0f, aim %.0f m, nose on %d, turret %s", p->clock, idx, dist, ad, on, bt < 200.0f * 200.0f ? "yes" : "no");
        {   f32 to[3] = { ax, ay, az };   /* the trigger as any flyer's (ak_ai_fire: 600 m, 5 degrees around the nose) */
            bool held = ak_ai_fire_update(&vh->fire_ai, &d->gun_bot, true, ak_ai_fire_ok(fw2, to, 600.0f * S, 5.0f * 0.017453293f, false), rnd(&b->seed), dt);
            if (held) vehicle_fire(p, m, v, aimp, dt, vh->fire_ai.began && ak_ai_burst(&d->gun_bot) <= 0); else vh->volley_t = 0; }
        if (on && d->sec.armed && vh->bot_sec_t <= 0 && ad < 400.0f) {          /* (the same 15 s rule for the secondary: bombs, torpedoes) */
            s32 tt = -1; for (u32 k = 0; k < p->nturret; k++) if (p->turret[k].alive && p->turret[k].pos[0] == aimp[0] && p->turret[k].pos[2] == aimp[2]) tt = (s32)TT(p, k);
            if (vehicle_fire2(p, m, v, aimp, tt)) vh->bot_sec_t = 15.0f;
        }
    } else if (en && !landing) bot_vehicle_gun(p, m, b, v, dt, true);
    else vh->volley_t = 0;
}

/* a ground vehicle or a walker: along the navigation graph to the goal post; at a post its side does not hold, out to capture it */
static void bot_drive(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 idx, f32 dt)
{
    u32 v = (u32)b->veh; ak_vehicle *vh = &p->veh[v]; const ak_vehicle_def *d = vh->def;
    memcpy(b->ch.pos, vh->pos, 12); b->ch.yaw = vh->yaw;
    if (d->kind == AK_VEH_FLYER) { bot_fly(p, m, b, idx, dt); return; }
    b->think_t -= dt; b->goal_t -= dt; b->boost = false;
    if (b->think_t <= 0) {
        b->think_t = 0.3f + rnd(&b->seed) * 0.1f;
        s32 e = p->bots_passive ? -1 : find_enemy(p, b->team, vh->pos, vh->yaw + vh->aim_yaw, d->hover + d->height * 0.8f,
                                                  d->target_range > 0 ? d->target_range : 100.0f, true);
        if (e != b->enemy) { if (e >= 0 && b->enemy < 0) b->react_t = 0.4f + rnd(&b->seed) * 0.4f; b->enemy = e; }
        bool held = b->goal >= 0 && p->match.post[b->goal].owner == b->team && p->match.post[b->goal].progress >= p->cq.post[b->goal].amount;
        if (b->goal < 0 || (held && b->goal_t <= 0)) bot_choose_goal(p, b);
    }
    /* the way: route nodes (passed within the vehicle's size), then the post */
    f32 want[3]; bool last = b->path_i >= b->npath;
    if (!last) {
        memcpy(want, p->nav.node[b->path[b->path_i]].pos, 12);
        f32 dx = want[0] - vh->pos[0], dz = want[2] - vh->pos[2], r = fmaxf(4.0f, d->radius + 2.0f);
        if (dx * dx + dz * dz < r * r) b->path_i++;
    } else memcpy(want, b->hold, 12);
    f32 dx = want[0] - vh->pos[0], dz = want[2] - vh->pos[2], dl = sqrtf(dx * dx + dz * dz);
    if (b->goal >= 0) {                                                       /* there */
        const f32 *pp = p->cq.post[b->goal].pos; f32 gx = pp[0] - vh->pos[0], gz = pp[2] - vh->pos[2];
        if (gx * gx + gz * gz < 12.0f * 12.0f) {
            const ak_post_state *ps = &p->match.post[b->goal];
            if (ps->owner != b->team || ps->progress < p->cq.post[b->goal].amount) { bot_exit(p, b, idx); return; }
            if (b->goal_t <= 0) bot_choose_goal(p, b);
        }
    }
    f32 dyaw = dl > 0.5f ? wrap(atan2f(-dx, -dz) - vh->yaw) : 0;
    f32 thr = fabsf(dyaw) > 1.3f ? 0.25f : fabsf(dyaw) > 0.6f ? 0.6f : 1.0f;
    if (last && dl < 20.0f) thr *= 0.5f;
    if (dl < 1.5f) thr = 0;
    vh->steer = clampf(-dyaw * 2.5f, -1, 1); vh->throttle = thr; vh->strafe = 0; vh->brake = false;
    /* stuck: back up turning the other way; again: skip a node; five times: get out */
    if (b->rev_t > 0) { b->rev_t -= dt; vh->throttle = -1.0f; vh->steer = -vh->steer; }
    b->vstuck_t += dt;
    if (b->vstuck_t > 2.0f) {
        f32 mx = vh->pos[0] - b->vstuck_pos[0], mz = vh->pos[2] - b->vstuck_pos[2], moved = mx * mx + mz * mz;
        if (thr > 0 && b->rev_t <= 0 && moved < 1.0f) {
            b->vstucks++; b->rev_t = 1.2f;
            if (b->vstucks % 3 == 0 && b->path_i < b->npath) b->path_i++;
            if (b->vstucks >= 6) { bot_exit(p, b, idx); return; }
        } else if (moved > 9.0f) b->vstucks = 0;
        b->vstuck_t = 0; memcpy(b->vstuck_pos, vh->pos, 12);
    }
    bot_vehicle_gun(p, m, b, v, dt, d->turret_model < 0 && d->kind != AK_VEH_HOVER && d->kind != AK_VEH_TRACK && d->kind != AK_VEH_WALKER);
}

/* ------------------------------------------------------------------ turrets (ENTI type 30: see game/ak_turret.h)
 * A turret belongs to the side holding its command post (the record's link; none: the nearest post).  On the space levels and
 * when not Boardable (the automatic ones), it aims and fires on its own (the game's turret AI states: NEUTRAL,
 * SEARCHING_FOR_THREAT, ORIENTATING_TO_THREAT at 0x08B1B6AC): the nearest enemy in its reach (the record's range: 500 m in space,
 * 100 m on the ground) that it can point at and see, leading moving vehicles, with the bot modifiers and aim error; it fires through
 * the AI's trigger (ak_ai_fire: the record's range, 7.5 degrees around the barrel, bursts by the gun's heat values).  It repairs itself at the blueprint's Auto_Repair_Rate (5 a second); a destroyed one leaves its [PARITY(4.3)]
 * DestroyedTurret model (no rebuilding: not traced). */
static void turret_target(ak_play *p, u32 i)
{
    const ak_turret *t = &p->turret[i]; ak_target *g = &p->target[TT(p, i)];
    memset(g, 0, sizeof *g);
    f32 rad = t->rad > 0 ? t->rad : 2.0f;
    memcpy(g->feet, t->pos, 12); g->radius = rad * 0.7f; g->height = rad * 1.4f;
    g->head[0] = t->pos[0]; g->head[1] = t->pos[1] + rad; g->head[2] = t->pos[2]; g->head_radius = 0;
    g->health = t->health; g->headshot_mult = 1; g->alive = t->alive; g->vehicle = true; g->team = t->team < 0 ? AK_CQ_NEUTRAL : t->team; g->last_attacker = -1;
}

static int turret_side(const ak_play *p, const ak_turret *t)
{
    if (!p->have_cq) return -1;
    s32 k = -1;
    for (u32 i = 0; i < p->cq.nposts; i++) if (p->cq.post_id[i] == t->post_id) k = (s32)i;
    if (k < 0) {                                                               /* no link: the nearest post */
        f32 bd = 1e30f;
        for (u32 i = 0; i < p->cq.nposts; i++) {
            f32 dx = p->cq.post[i].pos[0] - t->pos[0], dy = p->cq.post[i].pos[1] - t->pos[1], dz = p->cq.post[i].pos[2] - t->pos[2], d2 = dx * dx + dy * dy + dz * dz;
            if (d2 < bd) { bd = d2; k = (s32)i; }
        }
    }
    if (k < 0) return -1;
    int o = p->match.post[k].owner;
    return o < 2 ? o : -1;
}

static void turrets_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp)
{
    static ak_turret_rec rec[PLAY_MAX_TURRETS];
    u32 n = ak_turrets_read(l, rec, PLAY_MAX_TURRETS);
    for (u32 i = 0; i < n && p->nturret < PLAY_MAX_TURRETS; i++) {
        s32 mi = -1;
        for (u32 k = 0; k < m->nmodels && mi < 0; k++) if (m->models[k].lod == 0 && m->models[k].hash == rec[i].model_hash) mi = (s32)k;
        if (mi < 0) continue;
        s32 di = -1;
        for (u32 k = 0; k < p->ntdef; k++) if (!strcmp(p->tdef[k].name, m->models[mi].name) || p->tdef[k].base == mi) di = (s32)k;
        if (di < 0 && p->ntdef < 8 && ak_turret_def_load(bp, m, m->models[mi].name, &p->tdef[p->ntdef])) di = (s32)p->ntdef++;
        bool wrecked = false;
        if (di < 0 && rec[i].bp_hash) {                                     /* a record placing the wreck model (Yavin's training turret 18bdc:
                                                                               small_turret_destroyed, blueprint Small_Turret): it starts destroyed -
                                                                               the original drew the wreck until the fusion cutter repaired it (ct25) */
            const ak_bp_type *tt = ak_bp_find_type(bp, "Turret");
            for (u32 k = 0; tt && k < tt->nobjects; k++) if (ak_hash31(tt->objects[k].name) == rec[i].bp_hash) {
                for (u32 q = 0; q < p->ntdef && di < 0; q++) if (!strcmp(p->tdef[q].name, tt->objects[k].name)) di = (s32)q;
                if (di < 0 && p->ntdef < 8 && ak_turret_def_load(bp, m, tt->objects[k].name, &p->tdef[p->ntdef])) di = (s32)p->ntdef++;
                break; }
            wrecked = di >= 0 && p->tdef[di].wreck == mi;
            if (di >= 0 && p->tdef[di].base >= 0) mi = p->tdef[di].base;
        }
        if (di < 0) continue;
        ak_turret *t = &p->turret[p->nturret]; ak_turret_place(t, &p->tdef[di], &rec[i]); t->rad = m->models[mi].radius;
        if (wrecked) { t->alive = false; t->health = 0; }
        t->team = turret_side(p, t);
        p->nturret++;
    }
    for (u32 i = 0; i < p->nturret; i++) turret_target(p, i);
    if (ak_setting_int("AK_DEBUG_TURRET", 0))
        for (u32 i = 0; i < p->nturret; i++) AK_INFO("turret", "turret %u: %s at %.0f %.0f %.0f, health %.0f, range %.0f, team %d, %s, %u muzzles%s", i, p->turret[i].def->name,
                                                  p->turret[i].pos[0], p->turret[i].pos[1], p->turret[i].pos[2], p->turret[i].health, p->turret[i].range, p->turret[i].team,
                                                  p->turret[i].def->armed ? "armed" : "unarmed", p->turret[i].def->nmuzzles, p->turret[i].def->boardable ? "" : ", automatic");
    if (ak_setting_int("AK_DEBUG_TURRET", 0) > 1)
        for (u32 i = 0; i < p->nturret; i++) { const ak_turret *t = &p->turret[i]; f32 P[12], B[12], mz[3] = { 0, 0, 0 };
            ak_turret_pivot(t, m, P); ak_turret_barrel(t, m, B); ak_turret_muzzle(t, m, 0, mz);
            AK_INFO("turret", "  %u parts: base %d pivot %d (%s) barrel %d (%s); up %.2f %.2f %.2f; pivot at %.1f %.1f %.1f, barrel at %.1f %.1f %.1f, muzzle %.1f %.1f %.1f", i,
                    t->def->base, t->def->pivot, t->def->pivot >= 0 ? m->models[t->def->pivot].name : "-", t->def->barrel, t->def->barrel >= 0 ? m->models[t->def->barrel].name : "-",
                    t->base[1], t->base[5], t->base[9], P[3], P[7], P[11], B[3], B[7], B[11], mz[0], mz[1], mz[2]); }
}

static void turret_destroyed(ak_play *p, u32 i)
{
    ak_turret *t = &p->turret[i]; if (!t->alive) return;
    t->alive = false; t->health = 0; boom(p, t->pos, t->def->bp);
    AK_VERBOSE("turret", "turret %s destroyed", t->def->name);
    if (p->have_script) ak_script_raise(&p->script, t->ev, t->nev, 3, t->id, script_sink, p);   /* (destroyed: event 3 - Space Kessel's turrets 188c9-cc {3 -> 102 / 103 / 25 / 26}, as the craft's and props') */
    if (p->target[TT(p, i)].last_attacker == 0) p->kills++;
    if (p->in_turret == (s32)i) { p->in_turret = -1; if (p->alive) { p->target[0].alive = true; p->target[0].health = 0; player_down(p); } }   /* the gunner goes with it */
}

/* a breakable prop broken: its event 3 to the script (18c2f {3 -> group 52}: the counter, its objective done) [assumed: event 3 is
   "destroyed"; the class 089F317C (vtable 0x08B0F6E4) not traced - its wreck look and effect are open, the model stays] */
static void prop_destroyed(ak_play *p, u32 i)
{
    if (p->prop[i].down) return;
    p->prop[i].down = true; boom_fx(p, p->target[NP(p) + i].box_c, NULL);
    AK_INFO("play", "%.1f s: prop %x broken", p->clock, p->prop[i].id);
    if (p->have_script) ak_script_raise(&p->script, p->prop[i].ev, p->prop[i].nev, 3, p->prop[i].id, script_sink, p);
}

/* the campaign's breakable props: unflagged type-7 records with an event table (version at word 13, count at 15, then the entries),
   the place (game axes) and turn (quaternion) after it, the health, and a hull's hash - a SHAP chunk (no mesh: the thing seen is the
   level's own geometry).  Yavin's control room 18c2f-18c31: {3 -> group 52}, health 50, hull 2a25f45e over each console bank.
   Targets with the hull's box that anyone's shots hurt, live once the script sends 0x26 or 0x8019 {1} [assumed: what those two say;
   the class 089F317C (vtable 0x08B0F6E4) is not traced] */
static void props_init(ak_play *p, const ak_level *l, const ak_model_set *m, ak_arena *a)
{
    (void)m; (void)a; p->nprop = 0; if (ak_game_mode != 5) return;
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c) && p->nprop < PLAY_MAX_PROPS) {
        /* (also class 0x800E, flagged type 14 - Ord Mantell's 186ef / 1882f: the same layout one word later, its version first) */
        u32 ty = ak_rd32(c.body + 4), sh = ty == 0x800E ? 1 : 0;
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 30 * 4 || (ty != 7 && ty != 0x800E)) continue;
        const u8 *b = c.body; u32 nw = c.size / 4, id = ak_rd32(b), ev[4], nev = ak_script_events(l, id, 13 + sh, ev, 4);
        if (!nev) continue;
        u32 at = 16 + sh + ak_rd32(b + 60 + 4 * sh); if (at + 15 > nw) continue;
        f32 g[3] = { ak_rdf32(b + 4 * at), ak_rdf32(b + 4 * (at + 1)), ak_rdf32(b + 4 * (at + 2)) }, hp = ak_rdf32(b + 4 * (at + 7));
        ak_quat r = { ak_rdf32(b + 4 * (at + 3)), -ak_rdf32(b + 4 * (at + 4)), -ak_rdf32(b + 4 * (at + 5)), ak_rdf32(b + 4 * (at + 6)) };   /* (engine axes, as the movers') */
        u32 h = ak_rd32(b + 4 * (at + 8)), side = at + 14 < nw ? ak_rd32(b + 4 * (at + 14)) : 2;
        if (!(hp > 0 && hp < 100000) || fabsf(r.x * r.x + r.y * r.y + r.z * r.z + r.w * r.w - 1) > 0.01f) continue;
        f32 mn[3], mx[3]; bool got = false; ak_chunk d; u32 q = 8; const u8 *hb = NULL; u32 hsize = 0;
        while (!got && ak_asura_next(&l->file, &q, &d)) {
            if (ak_chunk_tag(&d) != AK_TAG('S', 'H', 'A', 'P') || d.size < 64 || ak_rd32(d.body) != h) continue;
            f32 v[6]; for (int k = 0; k < 6; k++) v[k] = ak_rdf32(d.body + 40 + 4 * k);
            mn[0] = v[0]; mx[0] = v[1]; mn[1] = -v[3]; mx[1] = -v[2]; mn[2] = -v[5]; mx[2] = -v[4]; got = true; hb = d.body; hsize = d.size;
        }
        if (!got && m) {                                                     /* no hull: the model named after it (Ord Mantell's 186ed: Round_turret) */
            u32 mh = ak_rd32(b + 4 * (at + 9));
            for (u32 i = 0; i < m->nmodels && !got; i++) if (m->models[i].lod == 0 && m->models[i].hash == mh) {
                memcpy(mn, m->models[i].bmin, 12); memcpy(mx, m->models[i].bmax, 12); got = true; }
        }
        if (!got) continue;
        u32 k = p->nprop++; ak_target *t = &p->target[NP(p) + k];
        p->prop[k].id = id; p->prop[k].health = hp; memcpy(p->prop[k].ev, ev, sizeof ev); p->prop[k].nev = nev; p->prop[k].armed = false; p->prop[k].down = false;
        memset(t, 0, sizeof *t);
        f32 R[3][3] = { { 1 - 2 * (r.y * r.y + r.z * r.z), 2 * (r.x * r.y + r.w * r.z), 2 * (r.x * r.z - r.w * r.y) },
                        { 2 * (r.x * r.y - r.w * r.z), 1 - 2 * (r.x * r.x + r.z * r.z), 2 * (r.y * r.z + r.w * r.x) },
                        { 2 * (r.x * r.z + r.w * r.y), 2 * (r.y * r.z - r.w * r.x), 1 - 2 * (r.x * r.x + r.y * r.y) } };   /* rows: the hull's axes */
        f32 ep[3], mc[3]; ak_from_game(g, ep);
        for (int j = 0; j < 3; j++) { mc[j] = 0.5f * (mn[j] + mx[j]); t->box_h[j] = fmaxf(0.1f, 0.5f * (mx[j] - mn[j])); }
        for (int j = 0; j < 3; j++) { t->box_c[j] = ep[j] + mc[0] * R[0][j] + mc[1] * R[1][j] + mc[2] * R[2][j]; for (int k2 = 0; k2 < 3; k2++) t->box_ax[j][k2] = R[j][k2]; }
        t->boxed = true; memcpy(t->feet, ep, 12); t->height = 2 * t->box_h[1]; t->radius = fmaxf(t->box_h[0], t->box_h[2]);
        {   /* the hull itself (convex: Space Alderaan's critical systems a9cdd4e9 are a six-sided bipyramid, 18 faces; its box would stop
               shots far from it): the vertices (game axes) after the radius, then faces of 4 u16 (0xFFFF: a triangle) - each face's
               plane, outward from the centre, in the world */
            u32 nv = hb ? ak_rd32(hb + 12) : 0, nf = hb ? ak_rd32(hb + 16) : 0, vo = 68, fo = vo + 12 * nv; u32 np = 0;
            if (hb && nv >= 4 && nv <= 256 && nf >= 4 && nf <= 48 && fo + 8 * nf <= hsize) {   /* (more faces than kept: the box) */
                f32 cen[3] = { 0, 0, 0 }, wv[256][3];
                for (u32 a = 0; a < nv; a++) {
                    f32 lv[3] = { ak_rdf32(hb + vo + 12 * a), -ak_rdf32(hb + vo + 12 * a + 4), -ak_rdf32(hb + vo + 12 * a + 8) };
                    for (int j = 0; j < 3; j++) wv[a][j] = ep[j] + lv[0] * R[0][j] + lv[1] * R[1][j] + lv[2] * R[2][j];
                    for (int j = 0; j < 3; j++) cen[j] += wv[a][j] / (f32)nv;
                }
                for (u32 fi = 0; fi < nf && np < 48; fi++) {
                    u32 i0 = ak_rd16(hb + fo + 8 * fi), i1 = ak_rd16(hb + fo + 8 * fi + 2), i2 = ak_rd16(hb + fo + 8 * fi + 4);
                    if (i0 >= nv || i1 >= nv || i2 >= nv) continue;
                    f32 e1[3], e2[3], n[3]; for (int j = 0; j < 3; j++) { e1[j] = wv[i1][j] - wv[i0][j]; e2[j] = wv[i2][j] - wv[i0][j]; }
                    n[0] = e1[1] * e2[2] - e1[2] * e2[1]; n[1] = e1[2] * e2[0] - e1[0] * e2[2]; n[2] = e1[0] * e2[1] - e1[1] * e2[0];
                    f32 ln = sqrtf(n[0] * n[0] + n[1] * n[1] + n[2] * n[2]); if (ln < 1e-6f) continue;
                    for (int j = 0; j < 3; j++) n[j] /= ln;
                    f32 dd = n[0] * wv[i0][0] + n[1] * wv[i0][1] + n[2] * wv[i0][2];
                    if (n[0] * cen[0] + n[1] * cen[1] + n[2] * cen[2] > dd) { for (int j = 0; j < 3; j++) n[j] = -n[j]; dd = -dd; }   /* (outward) */
                    memcpy(p->prop[k].plane[np], n, 12); p->prop[k].plane[np][3] = dd; np++;
                }
            }
            if (np >= 4) { t->planes = &p->prop[k].plane[0][0]; t->nplanes = (u8)np; }
        }
        /* the side after the hull hash (+0 0 0, a flag, -1, side): Yavin's consoles 2 - live after the script's 0x26 / 0x8019 {1};
           Space Alderaan's critical systems 1883c-f / 188fc-f / 18709-a 1 (the Empire's; the script sends them no 0x26) - live from
           the start [assumed: that the side decides it] */
        bool own = side <= 1;
        t->health = t->max_health = hp; t->alive = own; p->prop[k].armed = own; t->team = own ? (int)side : AK_CQ_NEUTRAL; t->last_attacker = -1; t->elite = 1.0f; t->headshot_mult = 1.0f;
        AK_INFO("play", "prop %x: health %.0f, %u events, hull %08x %.2f x %.2f x %.2f at %.2f %.2f %.2f", id, hp, nev, h, 2 * t->box_h[0], 2 * t->box_h[1], 2 * t->box_h[2], t->box_c[0], t->box_c[1], t->box_c[2]);
    }
}

static void turrets_update(ak_play *p, const ak_model_set *m, f32 dt)
{
    for (u32 i = 0; i < p->nturret; i++) {
        ak_turret *t = &p->turret[i]; ak_target *g = &p->target[TT(p, i)]; const ak_turret_def *d = t->def;
        if (!t->alive) continue;
        t->health = g->health; g->max_health = d->health;
        if (d->armed) for (u32 k = 0; k < 4; k++) ak_heat_update(&t->heat[k], &d->gun, dt);
        f32 rep = ak_bp_float(d->bp, "Auto_Repair_Rate", 5);                  /* self repair */
        if (t->health < d->health) { t->health = fminf(d->health, t->health + rep * dt); g->health = t->health; }
        int side = turret_side(p, t); if (side != t->team) { t->team = side; g->team = side < 0 ? AK_CQ_NEUTRAL : side; t->enemy = -1; }
        if ((s32)i == p->in_turret) {                                       /* the player's: turn toward where the view aims, R fires */
            f32 wy, wp;
            if (p->aim_ok) { ak_turret_aim_at(t, m, p->aim_point, &wy, &wp);    /* (held at its limits when the view goes past them) */
                f32 step = d->turn_rate * dt, dy = wrap(wy - t->yaw), dp = wp - t->pitch;
                t->yaw = wrap(t->yaw + clampf(dy, -step, step)); t->pitch += clampf(dp, -step, step);
            }
            if (p->turret_fire && d->armed && d->nmuzzles) {
                f32 prev = t->volley_t; t->volley_t += dt;
                ak_weapon w; ak_weapon_give(&w, &d->gun); w.team = t->team; w.owner = 0; w.src = (s32)TT(p, (u32)(t - p->turret));
                for (u32 k = 0; k < d->nmuzzles; k++) {
                    if (!(prev <= d->muzzle_time[k] && t->volley_t > d->muzzle_time[k]) && !(prev == 0 && d->muzzle_time[k] == 0)) continue;
                    if (!ak_heat_ready(&t->heat[k])) continue;
                    f32 muz[3]; w.cooldown = 0;
                    if (ak_turret_muzzle(t, m, k, muz) && ak_weapon_fire(&w, &p->bolts, &p->col, p->target, NT(p), muz, p->aim_point, &p->seed)) ak_heat_shot(&t->heat[k], &d->gun);
                }
                if (t->volley_t >= d->volley) t->volley_t = 0;
            } else t->volley_t = 0;
            continue;
        }
        /* (the game's AI fires the turrets nobody can board, and every turret in space; AK_AUTO_GUNNERS (4.3b, not the original's - off
           by default) also the boardable ones while nobody mans them) */
        if (t->team < 0 || p->bots_passive || !(p->is_space || !d->boardable || p->auto_gunners) || !d->armed || !d->nmuzzles) continue;
        /* think: the nearest enemy it can point at and see */
        t->think_t -= dt;
        f32 piv[12]; ak_turret_pivot(t, m, piv); f32 eye[3] = { piv[3], piv[7] + 1.0f, piv[11] };
        if (t->think_t <= 0) {
            t->think_t = 0.3f + rnd(&p->seed) * 0.1f;
            s32 best = -1; f32 bd = t->range * t->range, bs = -1e30f;
            /* the pick: a turret is a vehicle (class 0x801E) whose AI pilot (08957080) makes the vehicle sensor (0895FD14), so it
               takes the sensor's best record like a flyer's GENERAL_COMBAT (0895FF18 / 08960750, 4.6): 0.5 x a distance score (0 to
               40 m, 1 at 200 m, 0 at the range) + 0.25 x (1 + the cosine between the gun's line and the way to it) + 1 when no
               other shooter has it [assumed, as the flyers'].  AK_TURRET_SCORE=0: the nearest, as before */
            static int ts = -1; if (ts < 0) ts = ak_setting_int("AK_TURRET_SCORE", 1);
            f32 gf[3] = { -sinf(t->yaw), 0, -cosf(t->yaw) };
            { f32 B[12]; if (ak_turret_barrel(t, m, B)) { f32 F = t->def->face; gf[0] = F * B[2]; gf[1] = F * B[6]; gf[2] = F * B[10]; } }
            for (u32 k = 0; k < NV(p); k++) {
                const ak_target *e = &p->target[k];
                if (!e->alive || e->team == t->team || e->team == AK_CQ_NEUTRAL) continue;
                if (k >= NS(p) && p->veh[k - NS(p)].driver < 0) continue;
                f32 c[3] = { e->feet[0], e->feet[1] + e->height * 0.5f, e->feet[2] };
                f32 dx = c[0] - eye[0], dy = c[1] - eye[1], dz = c[2] - eye[2], d2 = dx * dx + dy * dy + dz * dz;
                if (d2 >= t->range * t->range || (!ts && d2 >= bd)) continue;
                f32 y, pt; if (!ak_turret_aim_at(t, m, c, &y, &pt)) continue;
                if (!in_sight(p, eye, c)) continue;
                if (!ts) { bd = d2; best = (s32)k; continue; }
                f32 dd = sqrtf(d2), rg = fmaxf(t->range, 201.0f);
                f32 dsc = dd > 200.0f ? 1.0f - (dd - 200.0f) / (rg - 200.0f) : dd > 40.0f ? (dd - 40.0f) * 0.00625f : 0;
                f32 cs = dd > 1e-3f ? (gf[0] * dx + gf[1] * dy + gf[2] * dz) / dd : 1;
                bool other = false;
                for (u32 j = 0; j < p->nbots && !other; j++) other = p->bot[j].enemy == (s32)k;
                for (u32 j = 0; j < p->nturret && !other; j++) other = j != i && p->turret[j].enemy == (s32)k;
                f32 sc = dsc * 0.5f + (cs + 1.0f) * 0.25f + (other ? 0 : 1.0f);
                if (sc > bs) { bs = sc; best = (s32)k; }
            }
            if (best != t->enemy) { t->enemy = best; t->aim_t = 0.6f + rnd(&p->seed) * 0.4f; }
        }
        if (t->enemy >= 0 && !p->target[t->enemy].alive) t->enemy = -1;
        if (ak_setting_int("AK_DEBUG_TURRET", 0) > 2 && fmodf(p->clock, 2.0f) < dt) {
            f32 nd = 1e9f; for (u32 k = NS(p); k < NV(p); k++) { const ak_target *e2 = &p->target[k]; if (!e2->alive || e2->team == t->team || p->veh[k - NS(p)].driver < 0) continue;
                f32 dx = e2->feet[0] - eye[0], dy = e2->feet[1] - eye[1], dz = e2->feet[2] - eye[2]; nd = fminf(nd, sqrtf(dx * dx + dy * dy + dz * dz)); }
            AK_INFO("turret", "%.0f s turret %u team %d enemy %d nearest enemy craft %.0f m yaw %.2f pitch %.2f", p->clock, i, t->team, t->enemy, nd, t->yaw, t->pitch);
        }
        if (t->enemy < 0) { t->volley_t = 0; continue; }
        /* aim: lead a moving vehicle (traced, 0895076C: flyers, walkers and tanks by their vfunc +104 with the shot speed D_08B1B740,
           1000.0 - the same constant the soldiers' AI fire nodes pass - not the bolt's own speed; anything else at its position) */
        const ak_target *e = &p->target[t->enemy];
        f32 c[3] = { e->feet[0], e->feet[1] + e->height * 0.5f, e->feet[2] };
        if (t->enemy >= (s32)NS(p) && t->enemy < (s32)NV(p)) {
            const ak_vehicle *ev = &p->veh[t->enemy - NS(p)];
            f32 dx = c[0] - eye[0], dy = c[1] - eye[1], dz = c[2] - eye[2], dist = sqrtf(dx * dx + dy * dy + dz * dz);
            f32 lt = dist / (1000.0f * S);
            for (int k = 0; k < 3; k++) c[k] += ev->vel[k] * lt;
        }
        f32 wy, wp; ak_turret_aim_at(t, m, c, &wy, &wp);
        f32 step = d->turn_rate * dt, dy = wrap(wy - t->yaw), dp = wp - t->pitch;
        t->yaw = wrap(t->yaw + clampf(dy, -step, step)); t->pitch += clampf(dp, -step, step);
        t->aim_t -= dt;
        /* the trigger (traced, 0894FFF8 -> 08965A70, ak_ai_fire): the record's range and 7.5 degrees around the gun's line, wanting
           to fire whenever the aim has a solution - 0895076C sets +0x22 at once for anything but a flyer / walker / tank, and for those
           when the lead (vfunc +0x68 with the shot speed) has one; the gun's turn into the 7.5-degree cone is the only wait (Aurek's
           0.6-1.0 s aim time is gone) */
        {   f32 B[12], fwd[3] = { -sinf(t->yaw), 0, -cosf(t->yaw) }, to[3] = { c[0] - eye[0], c[1] - eye[1], c[2] - eye[2] };
            if (ak_turret_barrel(t, m, B)) { f32 F = t->def->face; fwd[0] = F * B[2]; fwd[1] = F * B[6]; fwd[2] = F * B[10]; }
            if (!ak_ai_fire_update(&t->fire_ai, &d->gun_bot, true, ak_ai_fire_ok(fwd, to, t->range, 7.5f * 0.017453293f, false), rnd(&p->seed), dt)) { t->volley_t = 0; continue; } }
        /* fire: the volley over its muzzles, with the bot aim error */
        f32 tgt[3] = { c[0], c[1], c[2] };
        aim_cap(&p->seed, eye, tgt, p->bot_aim_set ? p->bot_aim : d->gun_bot.ai_acc[p->difficulty >= 2 ? 1 : 0] * 0.017453293f);   /* (as the soldiers) */
        f32 prev = t->volley_t; t->volley_t += dt;
        ak_weapon w; ak_weapon_give(&w, &d->gun_bot); w.team = t->team; w.owner = -1; w.src = (s32)TT(p, (u32)(t - p->turret));
        for (u32 k = 0; k < d->nmuzzles; k++) {
            if (!(prev <= d->muzzle_time[k] && t->volley_t > d->muzzle_time[k]) && !(prev == 0 && d->muzzle_time[k] == 0)) continue;
            f32 muz[3]; if (!ak_turret_muzzle(t, m, k, muz)) continue;
            ak_weapon_fire(&w, &p->bolts, &p->col, p->target, NT(p), muz, tgt, &p->seed);
        }
        if (t->volley_t >= d->volley_bot) t->volley_t = 0;
    }
}

static void draw_part(ak_scene_models *ms, s32 model, const f32 *M, const ak_m4 *vp, ak_scene_stats *st)
{
    if (model < 0) return;
    ak_m4 w = { { M[0], M[4], M[8], 0,  M[1], M[5], M[9], 0,  M[2], M[6], M[10], 0,  M[3], M[7], M[11], 1 } };
    ak_scene_models_draw(ms, (u32)model, vp, &w, NULL, NULL, st);
}

/* ------------------------------------------------------------------ the frame */
static void player_down(ak_play *p)
{
    if (ak_setting_int("AK_TEST_GOD", 0)) { p->target[0].alive = true; p->target[0].health = p->target[0].max_health; p->health = p->max_health; return; }   /* tests: the player does not fall */
    p->alive = false; p->dead_t = 0; p->deaths++; p->lock = -1; p->health = 0; p->death_pick = (s32)(rnd(&p->seed) * 4.0f) & 3;
    p->target[0].alive = false; p->target[0].health = 0;
    AK_VERBOSE("player", "down (deaths %d, kills %d)", p->deaths, p->kills);
    if (p->have_cq) ak_conquest_killed(&p->rules, &p->match, p->team);
}

void ak_play_damage(ak_play *p, f32 amount)
{
    if (!p->ready || !p->alive || amount <= 0) return;
    p->target[0].health -= amount; p->health = p->target[0].health;
    if (p->target[0].health <= 0) { p->tally_deaths[0]++; player_down(p); }
}

/* The PSP game's button layout (its default "Infantry / Vehicle / Starfighter controls"), with the sticks kept as they are (left
 * moves, right aims): cross fires, square the secondary, R locks on, L tapped jumps and held sprints, d-pad up gets in and out of a
 * vehicle or turret (up / down answer a hero offer while one stands); in ground vehicles L held boosts; in starfighters R
 * accelerates and L slows.  Circle rolls (the way the left stick points); triangle steps through the weapon's zoom levels.  This turns them into the actions the rest of the
 * code reads (R fire, L lock / slow, cross jump / boost, triangle get in / out, circle secondary). */
static ak_input psp_layout(ak_play *p, const ak_input *raw, f32 dt)
{
    if (!p->psp_buttons) return *raw;
    ak_input g = *raw; g.held = g.pressed = 0;
    u32 H = raw->held, P = raw->pressed;
    bool driving = p->in_veh >= 0, flyer = driving && p->veh[p->in_veh].def->kind == AK_VEH_FLYER;
    if (H & AK_BTN_CROSS) g.held |= AK_BTN_R;
    if (P & AK_BTN_CROSS) g.pressed |= AK_BTN_R;
    if (H & AK_BTN_SQUARE) g.held |= AK_BTN_CIRCLE;
    if (P & AK_BTN_SQUARE) g.pressed |= AK_BTN_CIRCLE;
    if (p->hero[p->team].offered == 0) g.pressed |= P & (AK_BTN_UP | AK_BTN_DOWN);
    else if (P & AK_BTN_UP) g.pressed |= AK_BTN_TRIANGLE;
    g.pressed |= P & (AK_BTN_LEFT | AK_BTN_RIGHT);
    p->sprint = false;
    if (driving) {
        if (flyer) { if (H & AK_BTN_L) g.held |= AK_BTN_L; if (H & AK_BTN_R) g.held |= AK_BTN_CROSS; if (P & AK_BTN_R) g.pressed |= AK_BTN_CROSS;
            /* measured (harness sa_h11, Space Alderaan's tips 0x1A7 / 0x1A8 / 0x146): d-pad down acquires a target (the 0x801C kind 0xD
               passed on it), triangle turns the auto-pilot on (kind 0xE: +0x34C bit 0x20 with a target, 089CE1C0), L and R together level
               a rolled craft (kind 0xC: +0x34C bit 7, set in 089A9728 by two input actions) [assumed: which two] */
            if (P & AK_BTN_DOWN) p->fly_pick = true;
            if (P & AK_BTN_TRIANGLE) p->fly_auto_req = true;
            p->fly_level = (H & AK_BTN_L) && (H & AK_BTN_R); }
        else if (H & AK_BTN_L) g.held |= AK_BTN_CROSS;
        p->l_was = false; p->l_t = 0;
    } else {
        if (H & AK_BTN_R) g.held |= AK_BTN_L;
        if (P & AK_BTN_R) g.pressed |= AK_BTN_L;
        if (P & AK_BTN_L) p->l_t = 0;
        if (H & AK_BTN_L) p->l_t += dt;
        else if (p->l_was && p->l_t < 0.1f) {                               /* a tap: jump - or, with the jetpack, a tap in the air starts it
                                                                                  (the menu's text: "Tap Jump while already in the air"; tip
                                                                                  0x8B: "Double-tap L") [assumed: a tap while it runs stops it] */
            if (p->jet_ok && (p->jet_on || !p->ch.on_ground)) { if (p->jet_on) p->jet_on = false; else if (p->jet_fuel >= p->jet_start) { p->jet_fuel -= p->jet_start; p->jet_on = true; p->jet_top = p->ch.pos[1] + 10.4f; } }
            else g.pressed |= AK_BTN_CROSS; }
        p->l_was = (H & AK_BTN_L) != 0;
        /* held: sprint (not while firing or locked on).  Measured: the sprint starts 0.1 s after L goes down (4 frames is still a
           tap), lasts while the stamina does (100 / "sprint cost" 15 a second: 6.7 s), and once it runs out L must be let go
           before another - holding on, the soldier runs */
        if (!p->l_was) p->sprint_spent = false;
        p->sprint = p->l_was && p->l_t >= 0.1f && !(H & (AK_BTN_CROSS | AK_BTN_R)) && !p->sprint_spent;
        if (p->jet_on) {                                                       /* tip 0x94: "With the jetpack engaged, press triangle to
                                                                                  rise and circle to descend" */
            p->jet_rise = ((H & AK_BTN_TRIANGLE) ? 1.0f : 0.0f) - ((H & AK_BTN_CIRCLE) ? 1.0f : 0.0f);
        } else {
        if (P & AK_BTN_CIRCLE) p->roll_req = true;                             /* circle: roll */
        if (P & AK_BTN_TRIANGLE) p->zoom_req = true;                           /* triangle: zoom */
        }
    }
    return g;
}

/* where a soldier leaving a vehicle is put (traced, 089D2DBC): from the vehicle's position, out 0, 1, 2 .. 9 m (step 1.0, D_08AEF00C;
 * limit 10, D_08AEF004), at each distance trying behind (model -z in the game's axes), in front, left and right (D_08AEF008 / 0C:
 * -1 / +1), turned by the vehicle's frame; the first spot 089D5A60 finds free is taken.  Measured (harness board_try): the AT-ST
 * 3.06 m behind, the snowspeeder 4.09 m behind.  [assumed: the free test - here clear of the vehicle's box grown by 0.75 m (the
 * measured spots fit 0.64..0.9), the level between the vehicle and the spot (a ray 1 m up) and ground within 6 m below] */
static bool vehicle_exit_spot(const ak_play *p, const ak_vehicle *vh, f32 out[3])
{
    static const f32 dir[4][3] = { { 0, 0, 1 }, { 0, 0, -1 }, { -1, 0, 0 }, { 1, 0, 0 } };   /* (engine model axes: behind is +z) */
    const ak_vehicle_def *d = vh->def; f32 M[12]; ak_vehicle_matrix(vh, M);
    const f32 g = 0.75f * S;
    for (int k = 1; k < 10; k++)
        for (int j = 0; j < 4; j++) {
            f32 l[3] = { dir[j][0] * k * S, 0, dir[j][2] * k * S };
            if (l[0] > d->box_min[0] - g && l[0] < d->box_max[0] + g && l[2] > d->box_min[2] - g && l[2] < d->box_max[2] + g) continue;
            f32 w[3]; for (int r = 0; r < 3; r++) w[r] = M[r * 4] * l[0] + M[r * 4 + 2] * l[2] + (r == 1 ? vh->pos[1] : M[r * 4 + 3]);
            f32 from[3] = { vh->pos[0], vh->pos[1] + 1.0f * S, vh->pos[2] }, to[3] = { w[0] - from[0], 0, w[2] - from[2] }, len = sqrtf(to[0] * to[0] + to[2] * to[2]);
            ak_col_hit h; if (len > 0 && ak_col_raycast(&p->col, from, (f32[3]){ to[0] / len, 0, to[2] / len }, len, 0xFFFF, &h)) continue;
            f32 up[3] = { w[0], vh->pos[1] + 1.0f * S, w[2] }, gy;
            if (!ak_char_ground_below(&p->col, up, 6.0f * S, &gy)) continue;
            out[0] = w[0]; out[1] = gy; out[2] = w[2]; return true;
        }
    return false;
}

/* what the level script sends to the game's objects: the ticket entity and the command posts; the music the level starts with is
 * the viewer's (ak_audio_level_music_start); the rest is logged (AK_DEBUG_SCRIPT) - not ported yet */
/* the condition nodes' tests on the player (08A0E228 on foot; 08A0E3DC in a vehicle): ported kinds 7 (the player exists - alive),
   1 (not on the ground - the training's "Tap L to jump" step, harness route cmpn), 0 (+0x208 bit 15, set by 08998828 when the
   movement row is the sprint: the training's "Move forward and hold L to sprint" step), 2 (vfunc +0xC4 [assumed: the lock-on
   held]), 9 (+0xC4 byte [assumed: in a vehicle]); the others (+0x208 bit 11, items, the view mode, the clip, difficulty 2) are
   not yet - false */
static bool script_test(void *user, u32 kind, u32 param)
{
    ak_play *p = user; (void)param;
    switch (kind) {
    case 7: return p->alive;
    case 0: return p->alive && p->in_veh < 0 && p->ch.sprinting;
    case 3: return p->alive && p->jet_on;      /* +0x208 bit 11 (08993FE4: the held pack's hash 0x9A450832): passed when the jetpack started
                                                   (Yavin's 18bc3, tip 0x8B, harness /tmp/ct14) */
    case 8: return p->alive && p->jet_ok;      /* the held item's +0x7C: Yavin's 18cbc passed the moment the Jet Pack was chosen in the
                                                   customisation menu (harness, /tmp/ct13) [assumed: any pack item] */
    case 1: return p->alive && p->in_veh < 0 && !p->ch.on_ground;
    case 2: return p->alive && p->lock >= 0;
    case 9: return p->alive && p->in_veh >= 0;
    case 4: return carrying(p, 0xDA0CAE3Bu);
    case 5: return carrying(p, 0x87D168ABu);
    case 6: return carrying(p, 0xDF19A556u);
    case 0x11: return holding(p, 0xDA0CAE3Bu);   /* (08A0E228's 0x11: the weapon 0xDA0CAE3B - Yavin's 18d18 after the cutter's tip) */
    /* in a vehicle (08A0E3DC, decompiled): 10 the view mode (0x08C29B58 == 1, shared with the soldier's), 0xB the craft's +0x1F8
       outside +-0.001, 0xC its +0x34C bit 7, 0xD its vfunc +0x10C (a target id) not 999, 0xE its vfunc +200, 0xF a craft at all.
       Space Alderaan's tips name them: 0xD "Press .. to acquire a target", 0xE the auto-pilot, 0xB / 0xC the roll and levelling
       (tip 0x146 between groups 60 / 61).  Harness sa_h11 (RS_VCOND_LOG): the object asked is the craft (vtable 0x08AFCBD0);
       0xD passed on a d-pad down, 0xE on triangle (+0x34C 0x14011 -> 0x14071) */
    case 0xB: return p->alive && p->in_veh >= 0 && fabsf(p->veh[p->in_veh].roll) >= 0.001f;   /* (rolled: tip 0x146 "You have rolled your spacecraft")
                                                                         [assumed: +0x1F8 is the roll - it stayed 0 with R held, sa_h11] */
    case 0xC: return p->alive && p->in_veh >= 0 && p->fly_level;     /* (levelling: L and R, tip 0x146) */
    case 0xD: return p->alive && p->in_veh >= 0 && p->fly_target >= 0;
    case 0xE: return p->alive && p->in_veh >= 0 && p->fly_auto && p->fly_target >= 0;
    case 0xF: return p->alive && p->in_veh >= 0;
    default: return false;
    }
}
/* a region's "who" (the record's word after the two u32s): 999 / 1000 the player (on foot or in a craft) [assumed: 1000 the same],
   else an object - Space Kessel's 18855 / 18966 name the craft 1888f, 1886b / 18967 the craft 18891 (the landing zones) */
static bool region_who(void *user, u32 who, f32 out[3])
{
    ak_play *p = user;
    if (who == 999 || who == 1000) { if (!p->alive) return false; ak_from_game(p->in_veh >= 0 ? p->veh[p->in_veh].pos : p->ch.pos, out); return true; }
    for (u32 v = 0; v < p->nveh; v++) if (p->vspawn[v].eid == who && p->veh[v].alive) { ak_from_game(p->veh[v].pos, out); return true; }
    return false;
}

static void script_sink(void *user, const ak_script_msg *m)
{
    ak_play *p = user; bool done = false;
    if (m->node) done = m->node->type == AK_SN_MUSIC;   /* (the start music is the viewer's; a later change is not played [not ported]) */
    else if (m->type == 0x8010 && m->nextra >= 8 && p->have_cq && m->target == p->cq.ticket_id) {   /* the match's unit count (above) */
        p->unit_count = (s32)ak_rd32(m->extra + 4); done = true;
        if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("script", "unit count %d", p->unit_count); }
    else if (p->have_cq && (ak_conquest_ticket_msg(&p->cq, &p->rules, &p->match, m->target, m->type, m->extra, m->nextra) ||
                            ak_conquest_post_msg(&p->cq, &p->match, m->target, m->type, m->extra, m->nextra))) done = true;
    else if (m->target == 0x3E8 && (m->type == 0x801D || m->type == 0x8023) && m->nextra >= (m->type == 0x801D ? 8u : 16u)) {
        /* the campaign's tips to the game: 0x801D {u32 0, STDTEXT id} (e.g. 0x8F "Use \ue817 to move and turn"), 0x8023 {u32, f32
           seconds (3.0), u32 1, STDTEXT id} [assumed: both shown in the tip box; the original's frame shows the first at the top
           of the screen - its handler not traced yet] */
        u32 id = ak_rd32(m->extra + (m->type == 0x801D ? 4 : 12)); f32 secs = 0; if (m->type == 0x8023) memcpy(&secs, m->extra + 4, 4);
        if (m->type == 0x8023 && ak_rd32(m->extra + 8)) {
            /* with its flag set: a page that stops the game until X (seen: the training's lock-on page with "Press X to continue"
               (STDTEXT 0x1A5) under it, the world still while the stick was held) [assumed: the float = the seconds before X is
               taken (08A5D450: the X line shows once that long has passed); the flag's other values (08A5D404: on difficulty 2 a
               page with the flag set does not hold the game)] */
            ak_hud_tip(id, 0.0f); p->modal = true; p->modal_x = false; p->modal_t = 0; p->modal_min = secs;
        } else ak_hud_tip(id, m->type == 0x801D ? 0.0f : secs);
        done = true;
    }
    else if ((m->type == 2 || m->type == 3 || m->type == 4) && p->nsfx) {
        for (u32 k = 0; k < p->nsfx; k++) if (p->sfx[k].id == m->target) { p->sfx[k].on = m->type == 3; done = true; break; }
    }
    if (!done && (m->type == 3 || m->type == 4) && p->nmover) {   /* a moving hull: 3 opens it (after 1.43 s), 4 back [assumed] (above) */
        for (u32 k = 0; k < p->nmover; k++) if (p->mover[k].id == m->target) {
            typeof(p->mover[0]) *mv = &p->mover[k]; done = true;
            if (m->type == 3 && !mv->open) { mv->open = true; mv->moving = true; mv->t = 0; mv->wait = 1.43f; }
            else if (m->type == 4) { mv->open = mv->moving = false; mv->t = 0; memcpy(mv->pos, mv->p0, 12); }
            break; }
    }
    if (done) {}
    else if (m->type == 0x14 && m->nextra >= 4 && p->nlisten) {
        u32 h = ak_rd32(m->extra);
        /* both hashes are needed [measured, RS_FIRE_LOG: Yavin's 18c5e got 0x14 {0xEDA911F9} from 18bbf's group 65 at 3255 and fired
           nothing; it fired its group 64 only at 4115 when {0x7E4B3609} came after the jump] - then it starts again [assumed] */
        for (u32 k = 0; k < p->nlisten; k++) if (p->listen[k].id == m->target && h && (h == p->listen[k].hash[0] || h == p->listen[k].hash[1])) {
            typeof(p->listen[0]) *L = &p->listen[k]; done = true;
            L->got[h == L->hash[0] ? 0 : 1] = true;
            if ((L->got[0] || !L->hash[0]) && (L->got[1] || !L->hash[1])) { L->got[0] = L->got[1] = false;
                if (L->group >= 0 && p->have_script) ak_script_fire(&p->script, L->group, m->target, script_sink, p); }
            break; }
    }
    else if (m->type == 3 && p->nnamed) {
        for (u32 k = 0; k < p->nnamed; k++) if (p->named[k].id == m->target) {
            done = true;
            {   const typeof(p->cuts[0]) *nc = &p->cuts[p->named[k].cut];   /* a scene with no length, no timed group and no end group does not take
                                                                         over one that plays: Endor's 28 starts chewie's walker turns up and
                                                                         cs_ewoks_01 (0 s) together, and the first one's end (30004) brings the walker
                                                                         [assumed: Aurek plays one scene at a time; the game's scene list not traced] */
                if (p->cut >= 0 && nc->len <= 0 && !nc->ngev && nc->group < 0) break; }
            p->cut = p->named[k].cut; p->cut_t = 0; p->cut_gev = 0;
            if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("script", "cut-scene %s (%.1f s)", p->cuts[p->cut].name, p->cuts[p->cut].len);
            break;
        }
    }
    else if (m->type == 0x53 && m->nextra >= 4 && ak_rd32(m->extra) == 0x3E8) {
        for (u32 k = 0; k < p->nwarp; k++) if (p->warp[k].id == m->target) {
            f32 sp[3]; memcpy(sp, p->warp[k].pos, 12); f32 gy; if (ak_char_ground_below(&p->col, sp, 5.0f, &gy)) sp[1] = gy;
            ak_char_spawn(&p->ch, sp, p->warp[k].yaw); done = true; }
    }
    else if (m->target == 0x3E8 && m->type == 0x801E) { ak_hud_tip_clear(); done = true; }
    else if (m->target == 0x3E8 && m->type == 0x8015 && m->nextra >= 8) {   /* a countdown under the radar: {u32, f32 seconds} - measured (harness om_h3:
                                                                         Ord Mantell's 18 {1, 60} showed 0:58 counting down; om_h4: 30000 {0, 85}
                                                                         showed 1:23, so the first word is not "shown"; 13's 0x8016 took it away) */
        f32 t; memcpy(&t, m->extra + 4, 4); p->hud_timer = t; p->hud_timer_on = true; done = true; }
    else if (m->target == 0x3E8 && m->type == 0x8016) { p->hud_timer_on = false; done = true; }   /* (clears the tip [assumed]) */
    else if (m->target == 0x3E8 && m->type == 0x8017 && m->nextra >= 12) {
        /* the counter under the radar: {u32, u32 total, u32 n} - n added.  Yavin's training: group 21 {1, 4, 0} as the stormtroopers
           come ("0/4", ct25), each fall {1, 4, 1}, group 44 {0, 3, 0} ("0/3", ct37), each control room bank {0, 3, 1} ("1/3", "2/3",
           ct38); Space Alderaan: 115 {1, 5, 0} ("0/5"), 54 / 55 / 56 {1, 5, 1} each ("1/5", "2/5", "3/5", sa_h14) - so added whatever
           the first word.  [assumed: a new total starts it again (the troopers' count would otherwise run into the 0/3); the first
           word's meaning is open; ct27's four {1, 4, 1} in one frame showed "1/4" - not explained] */
        u32 tot = ak_rd32(m->extra + 4), n = ak_rd32(m->extra + 8);
        p->counter_val = (s32)tot != p->counter_total ? (s32)n : p->counter_val + (s32)n;
        p->counter_total = (s32)tot;
        done = true; }
    else if ((m->type == 0x3B || m->type == 0x51) && p->nnode_open < 32) {   /* a path node opened (0x3B) or shut (0x51): 08855908's flag 0x40 */
        u32 q = 0; while (q < p->nnode_open && p->node_open_id[q] != m->target) q++;
        if (q == p->nnode_open) { p->node_open_id[q] = m->target; p->nnode_open++; }
        p->node_open[q] = m->type == 0x3B; done = true;
    }
    else if (m->type == 0x8007) for (u32 v = 0; v < p->nveh; v++) {          /* a walker spawner: a new walker if its own is dead (0897F950) */
        if (!p->vspawn[v].fixed || p->vspawn[v].eid != m->target) continue;
        done = true;
        if (!p->veh[v].alive && vehicle_make(p, v)) { p->vspawn[v].route_d = 0; if (p->have_script) ak_script_raise(&p->script, p->vspawn[v].ev, p->vspawn[v].nev, 10007, p->vspawn[v].eid, script_sink, p); }
    }
    if (!done && m->type == 5 && p->nt62) {
        for (u32 k = 0; k < p->nt62; k++) if (p->t62[k].id == m->target) {
            typeof(p->t62[0]) *e = &p->t62[k]; f32 secs = 0; const char *sub = NULL; done = true;
            ak_speech_play_hash(e->speech, NULL, 1.0f, &sub, &secs);
            if (secs <= 0) secs = ak_speech_seconds(e->speech);
            if (sub) { p->snd.sub = sub; p->snd.sub_t = secs > 0 ? secs + 0.5f : 3.0f; }
            e->t = secs > 0 ? secs : 0;
            if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("script", "speech %08x (%.1f s)", e->speech, secs);
            break; }
    }
    if (!done && (m->type == 0x26 || m->type == 0x8019))                     /* a breakable prop made live (0x26 / 0x8019 {1}) [assumed] */
        for (u32 i = 0; i < p->nprop; i++) if (p->prop[i].id == m->target) { done = true;
            u32 x = m->nextra >= 4 ? ak_rd32(m->extra) : 0, on = m->type == 0x26 ? x : (x & 0xFF);   /* (0x8019's first byte: Yavin {1}, Ord Mantell {0x101}; Space Alderaan's {0x100} to props already live) */
            if (m->type == 0x8019 && on != 1) { }
            else if (on == 1 && !p->prop[i].down) { p->prop[i].armed = true; p->target[NP(p) + i].alive = true; }
            else if (on == 0 && m->type == 0x26) { p->prop[i].armed = false; p->target[NP(p) + i].alive = false; } }   /* (0x26 {0}: Ord Mantell's 9 to 186ef) [assumed: off] */
    if (!done && m->type == 4)                                               /* 4: a prop off (Space Alderaan's 27 / 47 / 70 / 82 send it 2 s after
                                                                         one of a pair of critical systems breaks, to the other) [assumed: no
                                                                         longer hurt, no event] */
        for (u32 i = 0; i < p->nprop; i++) if (p->prop[i].id == m->target) { done = true; p->prop[i].armed = false; p->target[NP(p) + i].alive = false; }
    if (!done && (m->type == 3 || m->type == 4) && p->have_ctf && ak_game_mode == 5) {   /* the campaign's carried object / its base on (3), off (4) */
        for (u32 i = 0; i < p->ctf_map.nflags && !done; i++) if (p->ctf_map.flag[i].id == m->target) { done = true;
            ak_ctf_flag *fl = &p->ctf.flag[i]; fl->off = m->type == 4;
            if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("script", "carried object %x %s", m->target, fl->off ? "off" : "on");
            if (!fl->off) { fl->present = true; fl->carrier = -1; fl->return_t = 0; memcpy(fl->pos, p->ctf_map.flag[i].home, 12); } }
        for (u32 i = 0; i < p->ctf_map.nbases && !done; i++) if (p->ctf_map.base[i].id == m->target) { done = true; p->ctf.base_off[i] = m->type == 4; }
    }
    if (!done && m->type == 3 && p->nuspawn) {                                /* a scripted soldier spawner started by the script */
        for (u32 k = 0; k < p->nuspawn; k++) if (p->uspawn[k].id == m->target) { done = true;
            typeof(p->uspawn[0]) *u = &p->uspawn[k];
            if (!u->used && u->bot >= 0) { u->used = true; u->waiting = false; bot_spawn(p, p->mset, &p->bot[u->bot], (u32)u->bot); } break; }
    }
    if (!done && m->type == 4 && p->nuspawn) {                                /* 4: the spawner's soldier dies - Yavin's group 9 (after cs_tank_entry)
                                                                                 sends 4 to 18be0-18be3 and in the original all four raised 10006 in that
                                                                                 frame (groups 8 / 22 / 23 / 24, the counter's 25-28; ct27) */
        for (u32 k = 0; k < p->nuspawn; k++) if (p->uspawn[k].id == m->target) { done = true;
            const typeof(p->uspawn[0]) *u = &p->uspawn[k];
            if (u->bot >= 0 && p->bot[u->bot].alive) {
                ak_play_bot *b = &p->bot[u->bot]; ak_target *t = &p->target[1 + u->bot];
                t->health = 0; t->alive = false; t->last_attacker = -1;
                b->alive = false; b->dead_t = 0; b->state = PLAY_IDLE; b->death_clip = p->death_clips[(s32)(rnd(&b->seed) * 4.0f) & 3];
                if (p->have_script) ak_script_raise(&p->script, u->ev, u->nev, 10006, u->id, script_sink, p);
            }
            break; }
    }
    if (!done && m->type == 3 && p->nveh) {                                   /* a waiting unit spawner started by the script */
        for (u32 v = 0; v < p->nveh; v++) if (p->vspawn[v].fixed && p->vspawn[v].eid == m->target) {
            done = true;
            if (p->vspawn[v].waiting) { p->vspawn[v].waiting = false; if (!p->veh[v].alive && vehicle_make(p, v)) { p->vspawn[v].route_d = 0; if (p->mset) placed_flyer_crew(p, p->mset, v);
                if (p->have_script) ak_script_raise(&p->script, p->vspawn[v].ev, p->vspawn[v].nev, 10007, p->vspawn[v].eid, script_sink, p); } }
            break; }
    }
    if (!done && (m->type == 3 || m->type == 4))                             /* a hangar's vehicle spawn on (3) / off (4) - Space Alderaan's 1874f-18752,
                                                                         4 at the start (group 35), 3 once the player is in the X-Wing (126): the
                                                                         original's radar showed no craft there before and three friendly ones after
                                                                         (sa_h8) [assumed: 4 takes away an empty craft standing there and stops the
                                                                         spawn; 3 makes one at once and lets it respawn] */
        for (u32 v = 0; v < p->nveh; v++) if (p->vspawn[v].lone && p->vspawn[v].eid == m->target) {   /* a placed craft (0x8004) out / back: Space Kessel's
                                                                         28 sends 4 to 1888f / 18891 at the start, 63 3 to 1888f [assumed: 4 takes an
                                                                         empty one away without a wreck or event, 3 puts it back] */
            done = true; ak_vehicle *vh = &p->veh[v];
            if (m->type == 4) { if (vh->alive && vh->driver < 0) { vh->alive = false; vh->dead_t = 100.0f; p->target[VT(p, v)].alive = false; } }
            else if (!vh->alive) vehicle_make(p, v);
        }
        for (u32 v = 0; v < p->nveh; v++) if (!p->vspawn[v].fixed && !p->vspawn[v].lone && p->vspawn[v].eid == m->target) {
            done = true; ak_play_vspawn *sp = &p->vspawn[v]; ak_vehicle *vh = &p->veh[v];
            if (m->type == 4) { sp->waiting = true; if (vh->alive && vh->driver < 0) { vh->alive = false; vh->dead_t = 100.0f; p->target[VT(p, v)].alive = false; }   /* (gone, no wreck) */ }
            else if (sp->waiting) { sp->waiting = false; if (sp->first == (s32)v && !vh->alive) vehicle_make(p, v); }
        }
    if (!done) for (u32 k = 0; k < p->nobj; k++) if (p->obj[k].id == m->target) {   /* an objective marker (089F05BC) */
        if (m->type == 3 || m->type == 4 || m->type == 0x8008 || m->type == 0x8009) {
            /* 3 / 4 start / stop it; 0x8008 / 0x8009 end it [measured: the original's objective line stops after the training's
               marker is reached] and raise its events 10009 / 10010 */
            p->obj[k].active = m->type == 3; if (m->type == 3) p->obj[k].order = ++p->obj_order;
            if ((m->type == 0x8008 || m->type == 0x8009) && p->have_script) ak_script_raise(&p->script, p->obj[k].ev, p->obj[k].nev, m->type == 0x8008 ? 10009 : 10010, m->target, script_sink, p);
            /* the objective line: the latest active objective with a text [assumed: the HUD's pick - its reader not traced] */
            s32 best = -1; for (u32 q = 0; q < p->nobj; q++) if (p->obj[q].active && p->obj[q].text != 0xFFFu && (best < 0 || p->obj[q].order > p->obj[best].order)) best = (s32)q;
            u32 n = 0; const u16 *t = best < 0 ? NULL : p->obj[best].std ? ak_hud_stdtext(p->obj[best].text, &n) : ak_hud_mission_text(p->obj[best].text, &n); ak_hud_objective(t, n);
        }
        else break;
        done = true; break; }
    static int dbg = -1; if (dbg < 0) dbg = ak_setting_int("AK_DEBUG_SCRIPT", 0);
    if (dbg) AK_INFO("script", "%.2f s: %x -> %x from %x%s%s", p->clock, m->type, m->target, m->sender, m->node ? " (a node's play)" : "", done ? "" : " - not handled");
}

void ak_play_update(ak_play *p, const ak_model_set *m, const ak_input *in, f32 dt)
{
    if (AK_UNLIKELY(ak_log_level_now() >= 2)) {                              /* AK_LOG=2: a snapshot every second */
        static u64 next; static f32 next_clock; static int fixed = -1; u64 now_us = ak_plat_time_us();
        if (fixed < 0) fixed = ak_setting_float("AK_FIXED_DT", 0) > 0;          /* (fixed-step test runs: every game second, so runs compare) */
        if (fixed ? p->clock >= next_clock : now_us >= next) { next = now_us + 1000000; next_clock = p->clock + 1.0f;
            AK_VERBOSE("state", "t %.1f: player %s at %.1f %.1f %.1f health %.0f/%.0f, veh %d turret %d, kills %d deaths %d, ammo %d", p->clock, p->alive ? "up" : "down",
                       p->ch.pos[0], p->ch.pos[1], p->ch.pos[2], p->health, p->max_health, p->in_veh, p->in_turret, p->kills, p->deaths, p->weapon.ammo);
            if (p->have_cq) AK_VERBOSE("state", "tickets %d / %d", p->match.tickets[0], p->match.tickets[1]);
            for (u32 i = 0; i < p->nbots; i++) { const ak_play_bot *b = &p->bot[i];
                AK_VERBOSE("state", "bot %u team %d %s at %.1f %.1f %.1f health %.0f, enemy %d, veh %d", i, b->team, b->alive ? "up" : "down", b->ch.pos[0], b->ch.pos[1], b->ch.pos[2], p->target[1 + i].health, (int)b->enemy, (int)b->veh); }
            for (u32 v = 0; v < p->nveh; v++) { const ak_vehicle *vh = &p->veh[v]; if (!vh->alive || !vh->def) continue;
                AK_VERBOSE("state", "vehicle %u %s at %.1f %.1f %.1f health %.0f driver %d", v, vh->def->name, vh->pos[0], vh->pos[1], vh->pos[2], vh->health, vh->driver); }
        }
        {   static u32 held; if (in && in->held != held) { AK_VERBOSE("input", "buttons %08x -> %08x, sticks %.2f %.2f %.2f %.2f", held, in->held, in->lx, in->ly, in->rx, in->ry); held = in->held; } }
    }
    if (!p->ready) return;
    p->clock += dt; p->frame_no++;
    if (p->modal) {                                                        /* a page up: the world waits for X */
        /* (traced: 08A5D390 sets the page {text, flag, wait, start} and stops the game's clock; 08A5D220 draws it and, once the
           wait has passed (08A5D450), "Press X to continue" (421) under it; the player's update (08A08D00) then reads its control 6
           and clears the page (08A5D3BC), the clock back) [assumed: control 6 = X on the PSP layout] */
        bool ready = p->modal_x; p->modal_t += dt;
        if (!p->modal_x && p->modal_t >= p->modal_min) { p->modal_x = true; ak_hud_tip_more(0x1A5); }
        if (ready && ((in->pressed & AK_BTN_CROSS) || ak_setting_int("AK_TEST_AUTOX", 0))) { p->modal = false; ak_hud_tip_clear(); }   /* (AK_TEST_AUTOX: tests take each page) */
        return;
    }
    static const ak_input still; if (ak_play_cut_view(p)) in = &still;            /* a cut-scene: no control (seen: the player stands) */
    if (p->roll_nolock_t > 0) p->roll_nolock_t -= dt;                      /* (089DA874: +0x84 runs down by the frame's time) */
    {   static int lb = -1; static f32 next = 0; if (lb < 0) lb = ak_setting_int("AK_DEBUG_BOTS", 0);   /* tests: every bot every 2 s of match time, game axes */
        if (lb && p->have_cq && p->match.time >= next) { next = p->match.time + 2.0f;
            for (u32 i = 0; i < p->nbots; i++) { const ak_play_bot *b = &p->bot[i];
                AK_INFO("bots", "t %.1f bot %u team %d alive %d pos %.1f %.1f %.1f squad %d goal %d veh %d wantveh %d/%d enemy %d", p->match.time, i, b->team, b->alive,
                        b->ch.pos[0], -b->ch.pos[1], -b->ch.pos[2], b->squad, b->goal, b->veh, b->wants_veh, b->want_veh, b->enemy); } } }
    if (ak_setting_int("AK_LOG_HITS", 0) && p->frame_no % 6 == 0)        /* (tests: each bot's position every 0.1 s, against the hits' shooters) */
        for (u32 i = 0; i < p->nbots; i++) if (p->bot[i].alive && p->bot[i].veh < 0) {
            f32 pd = 1e9f; for (u32 k = 0; p->have_cq && k < p->cq.nposts; k++) { f32 dx = p->cq.post[k].pos[0] - p->bot[i].ch.pos[0], dz = p->cq.post[k].pos[2] - p->bot[i].ch.pos[2]; pd = fminf(pd, dx * dx + dz * dz); }
            AK_INFO("bpos", "%u %u %.2f %.2f %d %d %d %.1f", p->frame_no, 1 + i, p->bot[i].ch.pos[0], p->bot[i].ch.pos[2], p->bot[i].squad, p->bot[i].sq_slot, p->bot[i].enemy >= 0, sqrtf(pd)); }
    if (ak_setting_int("AK_LOG_HITS", 0)) { static u32 lf; if (lf != p->frame_no) { lf = p->frame_no; AK_INFO("fr", "%u", p->frame_no); } }
    {   /* tests: AK_TEST_TP = "frame:x,y,z;frame:x,y,z..." - put the player there (game axes) on those frames */
        static const char *tp = (const char *)1; if (tp == (const char *)1) tp = ak_setting_str("AK_TEST_TP", NULL);
        for (const char *s = tp; s && *s; ) {
            u32 fr; f32 g[3], yd = 1e9f; int n = sscanf(s, "%u:%f,%f,%f,%f", &fr, &g[0], &g[1], &g[2], &yd); if (n < 4) break;   /* (a fifth number: the yaw, degrees) */
            if (fr == p->frame_no && p->in_veh >= 0) { ak_vehicle *tv = &p->veh[p->in_veh]; ak_from_game(g, tv->pos); tv->vel[0] = tv->vel[1] = tv->vel[2] = 0; }   /* (driving: the vehicle) */
            else if (fr == p->frame_no && p->alive) { f32 q[3]; ak_from_game(g, q); ak_char_spawn(&p->ch, q, n == 5 ? yd * 0.0174533f : p->ch.yaw); if (n == 5) p->view_yaw = p->ch.yaw; }
            s = strchr(s, ';'); if (s) s++;
        }
    }
    p->respawn_req = (in->pressed & (AK_BTN_CROSS | AK_BTN_R)) != 0;           /* (the raw press: the respawn screen's confirm) */
    static ak_input mapped; mapped = psp_layout(p, in, dt); in = &mapped;
    if (ak_setting_int("AK_TEST_TAKEOVER", 0) && p->in_veh < 0 && p->alive)   /* tests: stand beside a vehicle a teammate bot drives */
        for (u32 v = 0; v < p->nveh; v++) { const ak_vehicle *vh = &p->veh[v];
            if (vh->alive && vh->driver > 0 && p->bot[vh->driver - 1].team == p->team) {
                f32 at[3] = { vh->pos[0] + vh->def->radius + 1.0f, vh->pos[1], vh->pos[2] }; ak_char_spawn(&p->ch, at, p->ch.yaw);
                if (ak_setting_int("AK_DEBUG_VEH", 0)) AK_INFO("veh", "beside %s (bot %d drives)", vh->def->name, vh->driver - 1);
                break; } }
    static const ak_input none;
    if (!p->alive) in = &none;                                               /* down: no control until the spawn wave */
    const ak_input *vin = in;                                                 /* the controls, for the vehicle when driving */
    bool tri = p->alive && (vin->pressed & AK_BTN_TRIANGLE);
    p->use_prompt = 0;                                                        /* a use zone (0x801F) the player stands in: its prompt; the use
                                                                                 button (the boarding one: the PSP's d-pad up) uses it first */
    if (p->have_script && p->alive && p->in_veh < 0 && p->in_turret < 0) {
        f32 gp[3]; ak_from_game(p->ch.pos, gp);
        p->use_prompt = ak_script_use(&p->script, gp, tri, script_sink, p);
        if (p->use_prompt && tri) tri = false;
    }
    if (tri && p->in_veh < 0 && p->in_turret < 0 && p->have_ctf && ctf_carrying(p, 0)) {
        /* a flag carrier cannot board (08A0AF14: the boarding refusal's reason 2 - "You cannot use this while carrying a flag", STDTEXT
           0x11D; 0x167 in the campaign) [assumed: refused on the press, the text in the tip box as the other refusals] */
        ak_hud_message(3, ak_game_mode == 5 ? 0x167 : 0x11D, NULL, 0); tri = false;
    }
    if (tri && p->in_turret >= 0) {                                           /* triangle: out of the turret, beside it */
        const ak_turret *t = &p->turret[p->in_turret]; f32 out[3] = { t->pos[0] + t->rad + 1.0f, t->pos[1] + 1.0f, t->pos[2] }, gy;
        if (ak_char_ground_below(&p->col, out, 8.0f, &gy)) out[1] = gy; else memcpy(out, p->ch.pos, 12);
        ak_char_spawn(&p->ch, out, p->ch.yaw); p->in_turret = -1; p->target[0].alive = true; tri = false;
    } else if (tri && p->in_veh < 0) {                                        /* a boardable turret of our side within reach */
        s32 best = -1; f32 bd = 1e30f;
        for (u32 i = 0; i < p->nturret; i++) {
            const ak_turret *t = &p->turret[i]; if (!t->alive || !t->def->boardable || t->team != p->team) continue;
            f32 dx = t->pos[0] - p->ch.pos[0], dz = t->pos[2] - p->ch.pos[2], d2 = dx * dx + dz * dz, r = t->rad + 2.5f;
            if (d2 < r * r && d2 < bd && fabsf(t->pos[1] - p->ch.pos[1]) < 5.0f) { bd = d2; best = (s32)i; }
        }
        if (best >= 0) {
            AK_VERBOSE("player", "mans turret %d", best); p->in_turret = best; p->gun_yaw_rate = p->gun_pitch_rate = 0; p->target[0].alive = false; p->lock = -1; tri = false;
            f32 B[12]; if (ak_turret_barrel(&p->turret[best], m, B)) { f32 F = p->turret[best].def->face; p->ch.yaw = atan2f(-F * B[2], -F * B[10]); p->ch.pitch = 0; }   /* the view starts along the barrel */
        }
    }
    if (p->alive && p->in_veh < 0 && p->in_turret < 0 && (vin->pressed & AK_BTN_LEFT)) weapon_switch(p);   /* d-pad left: weapon 1 <-> 2
        (measured, harness ct22: the original's left took the soldier from the Blaster Rifle to the Blaster Pistol, its name under the
        icon; STDTEXT 0xF9 "Cycle through primary weapons with \ue815") */
    if (tri) {                                                                /* triangle: get in / out of a vehicle */
        if (p->in_veh >= 0) {
            ak_vehicle *vh = &p->veh[p->in_veh]; f32 out[3], gy;
            if (!vehicle_exit_spot(p, vh, out)) {                              /* (none free: out on the left, as before) */
                f32 rx = cosf(vh->yaw), rz = -sinf(vh->yaw), dd = vh->def->radius + p->cp.radius + 0.5f;
                out[0] = vh->pos[0] - rx * dd; out[1] = vh->pos[1] + 1.0f; out[2] = vh->pos[2] - rz * dd;
                if (ak_char_ground_below(&p->col, out, 6.0f, &gy)) out[1] = gy; else memcpy(out, vh->pos, 12);
            }
            ak_char_spawn(&p->ch, out, vh->yaw); vh->driver = -1; vh->open = true; vh->throttle = vh->steer = vh->strafe = 0;
            if (ak_setting_int("AK_DEBUG_VEH", 0)) AK_INFO("veh", "get out at %.2f %.2f %.2f (vehicle at %.2f %.2f %.2f, yaw %.2f)", out[0], out[1], out[2], vh->pos[0], vh->pos[1], vh->pos[2], vh->yaw);
            {   u32 lv = (u32)p->in_veh;                                         /* a placed craft left: 10015 [assumed - Space Kessel's 1888f {10013 (in) -> 90:
                                                                         0x15 to the scene 18996, 10015 -> 27: 0x14 to it} pair "in" with "out"] */
                if (p->vspawn[lv].lone && p->have_script) ak_script_raise(&p->script, p->vspawn[lv].ev, p->vspawn[lv].nev, 10015, p->vspawn[lv].eid, script_sink, p); }
            p->in_veh = -1; p->target[0].alive = true; p->cam_dist = p->cam_back;
        } else {
            s32 best = -1; f32 bd = 1e30f;
            for (u32 v = 0; v < p->nveh; v++) {
                const ak_vehicle *vh = &p->veh[v];
                /* who may board, traced (the vehicle's "enter" message 0x8040, funcs 089D1EA8 / 089D1A3C / 089D35C8): a free seat
                   when the vehicle is the soldier's side's or neutral (the game sets team 4 when the last one aboard leaves,
                   089D2B60), or a seat an AI of the soldier's side holds when the soldier is a human player - the AI is put out
                   (089D1D24); never one an enemy or another player holds */
                bool mate = vh->driver > 0 && p->bot[vh->driver - 1].team == p->team;
                bool free_ok = vh->driver < 0 && (vh->team == p->team || vh->open);
                if (p->vspawn[v].lone && ak_setting_int("AK_DEBUG_VEH", 0)) AK_INFO("veh", "placed craft %u: alive %d driver %d team %d open %d drivable %d fixed %d", v, vh->alive, vh->driver, vh->team, vh->open, vh->def->drivable, p->vspawn[v].fixed);
                if (!vh->alive || !(free_ok || mate) || ((!vh->def->drivable || p->vspawn[v].fixed) && !p->vspawn[v].route) || (p->vspawn[v].route && vh->team != p->team)) continue;   /* (a placed walker: its gunner's seat) */
                /* in reach (measured, harness board_try): within 2 m of the spot where leaving puts a soldier (Hoth's AT-ST: from 5.0 m
                   behind - 1.96 m from it - yes, 5.5 m - 2.42 m - no, 3.5 m to its side no; the snowspeeder from 2.6 m behind yes, in
                   front no) [assumed: the spot is the exit spot of 089D2DBC, 2.2 m]; creatures keep Aurek's radius + 3 m (a Taun-Taun did
                   not board from 1.9 m behind: their rule is not found) */
                f32 at[3]; bool spot = vh->def->kind != AK_VEH_CREATURE && vehicle_exit_spot(p, vh, at);
                if (!spot) memcpy(at, vh->pos, 12);
                if (p->vspawn[v].lone && ak_setting_int("AK_DEBUG_VEH", 0)) { f32 g[3]; ak_from_game(at, g); AK_INFO("veh", "placed craft %u: its get-in spot %.2f %.2f %.2f (game)", v, g[0], g[1], g[2]); }
                f32 dx = at[0] - p->ch.pos[0], dz = at[2] - p->ch.pos[2], d2 = dx * dx + dz * dz, r = spot ? 2.2f * S : vh->def->radius + 3.0f;
                if (d2 < r * r && d2 < bd && fabsf(at[1] - p->ch.pos[1]) < 4) { bd = d2; best = (s32)v; }
                /* also: standing against it - within 1 m of its footprint (its box, turned with it).  [assumed: the measured rule above
                   (from behind, 2.2 m of the exit spot) left a soldier pressed against an AT-ST's side unable to board; the harness found
                   "3.5 m to its side: no", which is 1.8 m from that box - outside this 1 m] */
                else if (vh->def->kind != AK_VEH_CREATURE && fabsf(vh->pos[1] - p->ch.pos[1]) < 4 * S) {
                    f32 M[12]; ak_vehicle_matrix(vh, M);
                    f32 wx = p->ch.pos[0] - M[3], wy = p->ch.pos[1] - M[7], wz = p->ch.pos[2] - M[11];
                    f32 lx = M[0] * wx + M[4] * wy + M[8] * wz, lz = M[2] * wx + M[6] * wy + M[10] * wz, m = 1.0f * S;
                    f32 ex = lx < vh->def->box_min[0] ? vh->def->box_min[0] - lx : lx > vh->def->box_max[0] ? lx - vh->def->box_max[0] : 0;
                    f32 ez = lz < vh->def->box_min[2] ? vh->def->box_min[2] - lz : lz > vh->def->box_max[2] ? lz - vh->def->box_max[2] : 0;
                    f32 e2 = ex * ex + ez * ez;
                    if (e2 < m * m && e2 < bd) { bd = e2; best = (s32)v; }
                }
            }
            if (ak_setting_int("AK_DEBUG_VEH", 0)) AK_INFO("veh", "get in: nearest %d (soldier at %.1f %.1f %.1f)", best, p->ch.pos[0], p->ch.pos[1], p->ch.pos[2]);
            if (best >= 0) {
                if (p->veh[best].driver > 0) { u32 bi = (u32)(p->veh[best].driver - 1); bot_exit(p, &p->bot[bi], bi); }
                ak_vehicle *vh = &p->veh[best]; vh->driver = 0; vh->team = p->team; vh->open = false; vh->aim_yaw = vh->aim_pitch = 0;
                AK_VERBOSE("player", "gets in vehicle %d (%s)", best, vh->def ? vh->def->name : "-");
                p->target[VT(p, best)].team = p->team; p->in_veh = best; p->target[0].alive = false; p->lock = -1; p->cam_dist = vh->def->cam_z; p->veh_cam_t = 1; p->veh_cam_yaw = p->veh_cam_pitch = 0; p->fly_target = -1; p->fly_auto = false;
                if (p->vspawn[best].lone && p->have_script) ak_script_raise(&p->script, p->vspawn[best].ev, p->vspawn[best].nev, 10013, p->vspawn[best].eid, script_sink, p);   /* [assumed: 10013 is "boarded" - the harness could not board it] */
            } else if (p->have_cq && p->near_post >= 0 && p->match.post[p->near_post].owner == p->team)
                p->want_equipment = true;                                     /* at an own post: the customisation menu (the viewer opens it) */
        }
    }
    /* the PSP's one-stick scheme (measured, 1.14): the soldier turns to face the stick's direction relative to the view, closing
       the angle by 8/s (each frame the rest shrinks by 1 - 8 dt), and runs its forward clip; with the stick in the back half it
       faces the mirrored direction and runs its backward clip (stick down-left: faces 45 degrees right, runs back).  While locked
       on, the stick moves relative to the facing (the lock turns the soldier).  [PARITY(1.14): how the view follows is Aurek's] */
    static ak_input classic;
    if (p->single_stick && p->in_veh < 0 && p->alive) {
        classic = *in;
        if (p->in_turret >= 0) { classic.rx = in->lx; classic.ry = in->ly; }   /* (a gunner aims with the one stick) */
        else if (p->stick_turns && p->lock < 0) {
            /* the original's own controls (measured 2026-11-20, harness RS_TWIN_STICK=0 RS_VIEW_LOG=1): stick X turns the soldier
             * and the view together, stick Y moves; the turn binding eases toward the stick over 1.5 s as it moves out
             * (value += (stick - value) dt / 1.5, func_08896A3C; back at once) and turns at the soldier's "yaw speed" (4 rad/s):
             * full right reached 111 degrees/s after 1 s, 168 after 2 s.  (Locked on - R in the PSP layout - X strafes.) */
            f32 sx = in->lx;
            if (fabsf(sx) > fabsf(p->turn_val) && sx * p->turn_val >= 0) p->turn_val += (sx - p->turn_val) * fminf(1.0f, dt / 1.5f); else p->turn_val = sx;
            p->ch.yaw -= p->turn_val * p->cp.yaw_speed * dt;
            classic.lx = 0; classic.rx = 0;
        }
        else if (p->lock < 0 && p->roll_i < 0) {
            f32 sx = in->lx, sy = in->ly, sm = sqrtf(sx * sx + sy * sy);
            if (sm > 1) sm = 1;
            if (sm > 0) {
                bool back = sy < -0.05f; f32 dx = back ? -sx : sx, dy = back ? -sy : sy;
                f32 want = p->view_yaw - atan2f(dx, dy), d = wrap(want - p->ch.yaw), k = 8.0f * dt;
                p->ch.yaw += d * (k < 1 ? k : 1);
                classic.lx = 0; classic.ly = back ? -sm : sm;
            }
        }
        in = &classic;
    }
    if (p->single_stick) {
        f32 k = p->stick_turns ? 1.0f : p->view_follow * dt;                 /* (the original's turn: the view turns with the soldier) */
        if (p->in_veh >= 0 || p->in_turret >= 0 || p->lock >= 0 || p->zoom > 0 || !p->alive) k = 1;
        p->view_yaw += wrap(p->ch.yaw - p->view_yaw) * (k < 1 ? k : 1);
    }
    if (p->in_veh >= 0) in = &none;                                           /* the soldier stands still inside */
    static ak_input manned; if (p->in_turret >= 0) { manned = *in; manned.lx = manned.ly = 0; manned.pressed &= ~AK_BTN_CROSS; in = &manned; }   /* a gunner aims only */
    /* the soldier's pitch is positive looking down (the camera uses -pitch): stick up looks up unless AK_INVERT_Y */
    ak_char_input ci = { in->lx, in->ly, in->rx, p->invert_y ? in->ry : -in->ry, (in->pressed & AK_BTN_CROSS) != 0, p->sprint && p->in_turret < 0, false, { 0, 0 }, 0 };
    if (p->in_turret >= 0) {
        /* a gunner turns the turret the game's way (089B7F50 pitch / 089B829C yaw): each rate first falls toward 0 by Damp x dt, then
         * gains stick x InputDamp x dt, held within +-MaxTurn; the angle moves by rate x dt (the view rides the turret) */
        const ak_turret_def *td = p->turret[p->in_turret].def;
        f32 in2[2] = { in->rx, p->invert_y ? in->ry : -in->ry }, *r2[2] = { &p->gun_yaw_rate, &p->gun_pitch_rate };
        f32 dmp[2] = { td->yaw_damp, td->pitch_damp }, acc[2] = { td->yaw_in, td->pitch_in }, mx[2] = { td->turn_rate, td->pitch_rate };
        for (int k = 0; k < 2; k++) {
            f32 r = *r2[k], dd = dmp[k] * dt;
            r = r > 0 ? r - fminf(r, dd) : r + fminf(-r, dd);
            r += in2[k] * acc[k] * dt; if (r > mx[k]) r = mx[k]; if (r < -mx[k]) r = -mx[k]; *r2[k] = r;
        }
        p->ch.yaw -= p->gun_yaw_rate * dt; p->ch.pitch += p->gun_pitch_rate * dt;
        f32 plo = -1.35f, phi = 1.35f;   /* (the view's pitch is positive down; the turret's MinPivotX / MaxPivotX, up) [assumed: a level base] */
        if (td->pitch_min != td->pitch_max) { plo = -td->pitch_max; phi = -td->pitch_min; }
        if (p->ch.pitch > phi) { p->ch.pitch = phi; if (p->gun_pitch_rate > 0) p->gun_pitch_rate = 0; }
        if (p->ch.pitch < plo) { p->ch.pitch = plo; if (p->gun_pitch_rate < 0) p->gun_pitch_rate = 0; }
        ci.look_x = ci.look_y = 0;
    } else if (p->twin_stick) {
        /* free aim with a response curve (fine near the centre, fast at the edge); the body turns with the aim */
        f32 ax = in->rx, ay = p->invert_y ? in->ry : -in->ry;
        f32 cx = copysignf(powf(fabsf(ax), p->aim_curve), ax), cy = copysignf(powf(fabsf(ay), p->aim_curve), ay);
        p->ch.yaw -= cx * p->aim_yaw_speed * (p->ch.sprinting ? p->cp.yaw_sprint : 1.0f) * dt; p->ch.pitch += cy * p->aim_pitch_speed * dt;   /* (sprinting: the game's yaw sprint modifier) */
        if (p->ch.pitch > 1.35f) p->ch.pitch = 1.35f;
        if (p->ch.pitch < -1.35f) p->ch.pitch = -1.35f;
        ci.look_x = ci.look_y = 0;
    }
    u32 nt = NT(p);
    /* lock-on: L held; the facing turns toward the target (the nearest enemy in front within the targeting range) */
    if (in->held & AK_BTN_L) {
        if (p->lock < 0 || !p->target[p->lock].alive) {
            /* the choice (traced, 089DD9CC): every candidate within the soldier's targeting range (+180: Controls' "targeting range",
               50, measured from the eye to the target) and within 60 degrees of the facing across the ground (+176: 1.0472 rad),
               whose line from the eye reaches it (a ray that must end in the target's own box), scores 100 x (1 - distance / range)
               + 100 x (1 - angle / 60 degrees); the highest wins (a candidate on the soldier's list at +228 takes -200 - not traced
               what fills it). [assumed: the eye and target points - Aurek's eye point and the target's chest] */
            f32 best = -1e30f; p->lock = -1; p->lock_t = 0;
            f32 fx = -sinf(p->ch.yaw), fz = -cosf(p->ch.yaw), max_ang = 1.0471976f;
            bool veh_only = p->armed && p->wdef.bp && ak_bp_int(p->wdef.bp, "OnlyLockOnToVehicles", 0);   /* the rocket launcher (STDTEXT 0x1A1 "the
                                                                                 rocket launcher can only auto lock onto vehicles, not infantry") */
            for (u32 i = 1; i < NP(p); i++) {                                 /* (the props are not locked [assumed]) */
                if (!p->target[i].alive || p->target[i].team == p->team) continue;
                if (veh_only && !p->target[i].vehicle) continue;
                f32 chest[3] = { p->target[i].feet[0], p->target[i].feet[1] + 1.1f * S, p->target[i].feet[2] };
                f32 ex = chest[0] - p->eye[0], ey = chest[1] - p->eye[1], ez = chest[2] - p->eye[2], d = sqrtf(ex * ex + ey * ey + ez * ez);
                if (d > p->lock_range || d < 0.5f) continue;
                f32 dx = p->target[i].feet[0] - p->ch.pos[0], dz = p->target[i].feet[2] - p->ch.pos[2], hd = sqrtf(dx * dx + dz * dz);
                if (hd < 1e-3f) continue;
                f32 c = (dx * fx + dz * fz) / hd; if (c > 1) c = 1; if (c < -1) c = -1;
                f32 ang = acosf(c); if (ang > max_ang) continue;
                if (!in_sight(p, p->eye, chest)) continue;
                f32 score = 100.0f * (1.0f - d / p->lock_range) + 100.0f * (1.0f - ang / max_ang);
                if (score > best) { best = score; p->lock = (s32)i; }
            }
        }
        if (p->lock >= 0) {
            p->lock_t += dt;
            const ak_target *t = &p->target[p->lock];
            f32 want = atan2f(-(t->feet[0] - p->ch.pos[0]), -(t->feet[2] - p->ch.pos[2])), dyaw = wrap(want - p->ch.yaw);
            f32 mx = p->lock_turn * dt; p->ch.yaw += dyaw > mx ? mx : dyaw < -mx ? -mx : dyaw;
            ci.look_x = 0;
        }
    } else p->lock = -1;
    bool was_ground = p->ch.on_ground;
    /* the roll: the stick's way (forward dive, left, right, back), carried as far as the clip's own root motion over its length */
    if (p->roll_req && p->roll_i < 0 && p->alive && p->ch.on_ground && p->in_veh < 0 && p->in_turret < 0 && !hero_of(p, 0) && stamina_pay(p, p->roll_cost)) {
        int k = 0; f32 sx = in->lx, sy = in->ly;
        if (fabsf(sx) > fabsf(sy) && fabsf(sx) > 0.3f) k = sx < 0 ? 1 : 2; else if (sy < -0.3f) k = 3;
        if (p->roll_clip[k] < 0) k = 0;
        if (p->roll_clip[k] >= 0) {
            f32 s = sinf(p->ch.yaw), c = cosf(p->ch.yaw), fx = -s, fz = -c, rx = c, rz = -s, v = p->roll_len[k] / p->roll_dur[k];
            f32 lx = k == 1 ? -1.0f : k == 2 ? 1.0f : 0.0f, ly = k == 0 ? 1.0f : k == 3 ? -1.0f : 0.0f;
            p->roll_v[0] = (fx * ly + rx * lx) * v; p->roll_v[1] = (fz * ly + rz * lx) * v; p->roll_i = k; p->roll_t = 0;
            const char *rs = ak_play_surface_sound(p, ak_play_ground_material(p, p->ch.pos), "roll_soldier"); if (rs) ak_audio_play(rs, p->ch.pos, false);
        }
    }
    p->roll_req = false;
    /* the explosive (measured, thermal detonator, standing): square starts the throw; the grenade appears in the hand 29 frames
       later and leaves it 8 frames after that (0.62 s from the press), 1.0 m ahead of the feet along the facing and 2.1 m up, at
       20.4 m/s along the facing and 1.2 up, then falls at 10 m/s^2 with a little drag, stops where it lands and
       explodes 3 s (its Timer) after it appeared.  The velocity (traced, 08A1A77C, logged in the harness): the thrower's aim frame
       (pitched 8.2 degrees down from the facing when standing) times (0, VerticalThrowSpeed up, ProjectileSpeed forward); the
       object then moves at twice the velocity it was given (measured on the cluster grenade: 20.7 m/s for a given 10.4; gravity
       unchanged), and its first 10 Hz step takes 1.0 m/s off the climb.  That gives 20.5 / 1.1 for REP_Grenade (measured 20.4 /
       1.2) and 20.8 / 3.1 for the cluster grenade (measured 20.7 / 3.0).  [PARITY(2.3b): where the factor 2 comes from in the
       code, and whether the frame follows the camera's pitch, are open; the timings are measured] */
    p->gren_cool -= dt;
    bool gren_press = (in->pressed & AK_BTN_CIRCLE) && p->alive && p->in_veh < 0 && p->in_turret < 0 && p->roll_i < 0 && !hero_of(p, 0);
    {   /* the hero's force power on the same button (the second item: the push / throw icon the harness showed).  Traced: the power
           fires only with the hero's stamina at least the weapon's Stamina (08A22630), its targets are units of the other side within
           MaxRange (08A220E0), its numbers the blueprint's (DamageToInfantry 20 push / pull, 50 lightning / choke; the thrown saber:
           Lightsaber_Thrown's 100 / 25, flying ProjectileSpeed x Timer).  [assumed: one target - the nearest within a 45 degree cone
           in front (the thrown saber: every one along its 10 m) - the stamina paid at once, RateOfFire between uses; the victims'
           reactions (VictimAnim: Human_force_Push_Reaction ..), the pull / push motion and the flying saber not done] */   /* PARITY(6.5) */
        ak_play_hero *ph = hero_of(p, 0);
        if (ph) ph->power_cool -= dt;
        if (ph && ph->power && (in->pressed & AK_BTN_CIRCLE) && p->alive && p->in_veh < 0 && p->in_turret < 0 && ph->power_cool <= 0 && p->stamina >= ph->power_cost) {
            stamina_pay(p, ph->power_cost); ph->power_cool = ph->power_rate;
            f32 fx = -sinf(p->ch.yaw), fz = -cosf(p->ch.yaw); s32 best = -1; f32 bd = 1e30f; int hits = 0;
            for (u32 i = 1; i < NT(p); i++) {
                ak_target *t = &p->target[i];
                if (!t->alive || t->team == p->team || (ph->power_humans && i >= NS(p))) continue;
                f32 dx = t->feet[0] - p->ch.pos[0], dz = t->feet[2] - p->ch.pos[2], d = sqrtf(dx * dx + dz * dz);
                if (d > ph->power_range + (t->vehicle ? t->radius : 0) || (d > 0.5f && (dx * fx + dz * fz) / d < 0.7071f)) continue;
                if (ph->power_throw) { t->health -= t->vehicle ? ph->power_dmgv : ph->power_dmg; t->last_attacker = 0; t->last_quiet = false; t->hits++; hits++; }
                else if (d < bd) { bd = d; best = (s32)i; }
            }
            if (best >= 0) { ak_target *t = &p->target[best]; t->health -= ph->power_dmg; t->last_attacker = 0; t->last_quiet = false; t->hits++; hits++; }
            if (ak_setting_int("AK_DEBUG_HERO", 0)) AK_INFO("hero", "%s: %d hit, stamina %.0f", ph->power, hits, p->stamina);
        }
    }
    /* the lower slot (measured, harness program 'powerup': d-pad right turned it from the explosive to the power-up, "Ready!"; square
       then used it - its message 0.6 s after the press (36-40 frames, the FiringAnim) - and again 15 s later did nothing: the
       RecuperationTime, 60 s) */
    if ((in->pressed & AK_BTN_RIGHT) && p->pu_kind >= 0 && p->alive) p->pu_sel = !p->pu_sel;
    p->pu_cool -= dt;
    if (p->pu_sel && p->pu_kind >= 0) {
        if (gren_press && p->pu_cool <= 0 && p->pu_t < 0) { p->pu_t = 0; p->pu_cool = p->pu_recup; }
        gren_press = false;
    }
    if (p->pu_t >= 0 && (p->pu_t += dt) >= 0.6f) { p->pu_t = -1; if (p->alive) pu_use(p); }
    if (gren_press && p->gren_ok && p->gren_def.remote && ak_projs_count(&p->projs, &p->gren_def, 0) > 0) {
        /* det packs out: the button sets them off, 29 frames after the press, and throws no new one (measured, harness program
           'detpack': the pack thrown at the first press went 29 frames after the second; 08A106E0 checks for a Det_Pack out) */
        if (p->det_t < 0) p->det_t = 0;
        gren_press = false;
    }
    if (p->det_t >= 0 && (p->det_t += dt) >= 29.0f / 60.0f) { p->det_t = -1; ak_projs_detonate(&p->projs, 0, p->target, NT(p), proj_boom, p); }
    if (gren_press && p->gren_limit > 0 && p->gren_ok && ak_projs_count(&p->projs, &p->gren_def, 0) >= (u32)p->gren_limit) gren_press = false;   /* GlobalAmmoLimit (mines: 4 out) */
    if (p->gren_t < 0 && p->gren_ok && p->gren_left > 0 && p->gren_cool <= 0 && gren_press) { p->gren_t = 0; p->gren_left--; p->gren_cool = p->gren_rate; }
    if (p->gren_t >= 0) {
        p->gren_t += dt;
        if (p->gren_t >= 37.0f / 60.0f) {
            f32 fx = -sinf(p->ch.yaw), fz = -cosf(p->ch.yaw);
            f32 at[3] = { p->ch.pos[0] + fx * 1.0f * S, p->ch.pos[1] + 2.1f * S, p->ch.pos[2] + fz * 1.0f * S };
            f32 v[3]; throw_vel(p->gren_ps, p->gren_vts, 0.1432f, fx, fz, v);   /* (the aim frame's 8.2 degrees down, from the harness log) */
            ak_proj_throw(&p->projs, &p->gren_def, at, v, p->team, 0, 8.0f / 60.0f);
            if (ak_setting_int("AK_LOG_GRENADES", 0)) AK_INFO("play", "player throws at %.1f %.1f %.1f, aim pitch %.4f, camera pitch %.4f, to the aim point from the throw %.4f from the eye %.4f, v %.2f %.2f %.2f", at[0], at[1], at[2], p->ch.pitch, asinf(p->aim[1]), atan2f(p->aim_point[1] - at[1], hypotf(p->aim_point[0] - at[0], p->aim_point[2] - at[2])), atan2f(p->aim_point[1] - p->eye[1], hypotf(p->aim_point[0] - p->eye[0], p->aim_point[2] - p->eye[2])), v[0], v[1], v[2]);
            p->gren_t = -1;
        }
    }
    /* zoom, traced (0x08997000): triangle enters the zoom view at the first level's magnification, each press steps to the next level,
       and a press on the last level leaves it; NumberOfZoomLevels and ZoomMagnification1..4 are the weapon's (blasters: 1 level at
       1.0 - the zoom view itself; the sniper rifle: 2 and 4) */
    if (p->zoom_req && p->armed && p->wdef.bp) {
        int nz = ak_bp_int(p->wdef.bp, "NumberOfZoomLevels", 0); if (nz > 4) nz = 4;
        p->zoom = nz > 0 ? (p->zoom + 1) % (nz + 1) : 0;
    }
    p->zoom_req = false;
    if (p->ch.sprinting || p->roll_i >= 0 || p->in_veh >= 0 || p->in_turret >= 0 || !p->alive) p->zoom = 0;
    const ak_char_params *use = &p->cp;
    if (p->roll_i >= 0) {
        /* rolling: the roll clip's own root motion carries the body, at playback rate 1, with no crossfade in or out (measured: the
           dive's speed steps through its key slopes 7.1, 8.0, 7.2, 5.8, 4.3, 4.6, 3.4, 2.9 m/s; the run comes back at full speed from
           its first key); the roll gives way 0.05 s before its clip ends, its last key segment unplayed [PARITY(1.7b): measured] */
        f32 v[2] = { 0, 0 };
        if (p->roots) ak_root_track_vel(&p->roots[p->roll_clip[p->roll_i]], p->roll_t, v);
        ci.root = true; ci.root_vel[0] = v[0] * S; ci.root_vel[1] = v[1] * S; ci.jump = ci.sprint = false;
        p->roll_t += dt;
        if (p->roll_t >= p->roll_dur[p->roll_i] - 0.05f) {
            p->roll_i = -1; p->roll_end = true;
            p->roll_nolock_t = p->roll_nolock;   /* (089A3C44: the roll's end writes "roll no lock on time" to the soldier's +0x84) */
        }
    }
    {   /* the player's body: the game's swept box (ak_character.h), the soldier's shape at the soldier's scale; AK_SOLDIER_BODY=0
         * selects the engine's spheres */
        const f32 *mn = soldier_shape[0], *mx = soldier_shape[1];
        static int body = -1; if (body < 0) body = ak_setting_int("AK_SOLDIER_BODY", 1);
        p->ch.body_box = body != 0;
        for (int k = 0; k < 3; k++) { p->ch.body_min[k] = mn[k] * S; p->ch.body_max[k] = mx[k] * S; } }
    /* the body clip the stick asks for, and the velocity the clips give (ak_loco.h): the stick's magnitude chooses standing, walking
       or running (the game reads each axis past a 0.25 dead zone), its direction against the facing the forward / back / strafe clip */
    int intent = PLAY_IDLE;
    {   f32 sx = ak_loco_stick_axis(ci.move_x), sy = ak_loco_stick_axis(ci.move_y);
        int gait = ak_loco_gait(sqrtf(sx * sx + sy * sy));
        if (gait == 0) intent = PLAY_IDLE;
        else if (fabsf(sx) > fabsf(sy)) intent = sx > 0 ? PLAY_LEFT : PLAY_RIGHT;   /* (strafing: the modern twin-stick scheme) */
        else if (sy >= 0) intent = gait == 1 ? PLAY_WALK : p->ch.sprinting || (ci.sprint && p->ch.on_ground) ? PLAY_SPRINT : PLAY_RUN;
        else intent = gait == 1 ? PLAY_WALK_BACK : PLAY_BACK;
        const s32 *ucl = unit_clips(p, 0);
        if (ucl[intent] < 0) intent = gait ? PLAY_RUN : PLAY_IDLE;
        bool on_feet = p->alive && p->roll_i < 0 && p->in_veh < 0 && p->in_turret < 0 && p->ch.on_ground && !(hero_of(p, 0) && hero_of(p, 0)->atk_i >= 0);
        if (on_feet && p->zoom > 0) intent = PLAY_IDLE;                      /* zoomed in, the soldier stands (measured: it slows to a stop) */
        if (on_feet && p->roots) {
            const s32 *cl = (!hero_of(p, 0) && p->alert_t > 0) ? p->aclip : ucl;
            if (p->roll_end) { ak_loco_reset(&p->loco, cl[intent]); p->roll_end = false; }   /* out of a roll: no crossfade */
            ak_loco_play(&p->loco, cl[intent]);
            f32 v[2]; ak_loco_vel(&p->loco, p->roots, v);
            if (intent == PLAY_LEFT || intent == PLAY_RIGHT) {                 /* the strafe clips carry the root forward: take it sideways */
                f32 sp = sqrtf(v[0] * v[0] + v[1] * v[1]); v[0] = 0; v[1] = intent == PLAY_LEFT ? sp : -sp; }
            ci.root = true; ci.root_vel[0] = v[0] * S * p->speed_scale; ci.root_vel[1] = v[1] * S * p->speed_scale;   /* [PARITY(1.15): how Speed scales - rate or distance - is not traced] */
        } }
    if (!p->alive) { p->ch.vel[0] = p->ch.vel[2] = 0; ci.root = false; }    /* PARITY(6.3): a body stops where it falls (measured: no slide), gravity stays on (08993D38) */
    if (p->jet_on) { p->jet_fuel -= p->jet_drain * dt; if (p->jet_fuel <= 0 || !p->alive || p->in_veh >= 0 || p->in_turret >= 0) { p->jet_fuel = p->jet_fuel > 0 ? p->jet_fuel : 0; p->jet_on = false; } }
    else if (p->jet_fuel < 100.0f) { p->jet_fuel += 9.0f * dt; if (p->jet_fuel > 100.0f) p->jet_fuel = 100.0f; }
    /* (the special items' power bar, 0899EA24: 100, FUELDRAINRATE a second while it runs, out it stops - measured 6.1 s; it had not
       come back 8 s later [assumed: 5 a second back]) */
    /* (re-measured, /tmp/ct15 - the HUD bar's length frame by frame: it fills about 9 a second while not in use, and a start takes 15
       from what is there - the tries after the first flight did start, they only hovered at the jump's top with no rise held) */
    if (p->jet_on) {
        /* the flight.  Measured (harness route cmpn, /tmp/ct14: jump, L tapped in the air, stick forward and triangle held): the
           horizontal speed the soldier had at the start stays (7.26 m/s running) and the thrust adds to it at 6.1 m/s^2 - HORIZ_ACCEL x 8
           x 0.8 = 6.4 (the loader 089A0FA0) - toward the stick's way at up to HORIZ_SPEED x 0.8 = 8 m/s; rising it climbs at 13.3 m/s
           within 0.3 s; it ran 6.1 s (FUELDRAINRATE 15 a second of a 100 bar, FUELCOSTTOSTART 15 at the start) and then fell
           (gravity).  The update 089A19CC (thrust per axis toward the wanted one by the accelerations, held within the speeds; the
           drags on a second velocity) is not fully read.  [assumed: descending at the same 13.3 m/s, no rise input holds the height,
           the drags not applied] */
        f32 sy = sinf(p->ch.yaw), cy = cosf(p->ch.yaw), mx = in->lx, my = in->ly, ml = sqrtf(mx * mx + my * my); if (ml > 1) { mx /= ml; my /= ml; }
        f32 want[2] = { (-sy * my + cy * mx) * p->jet_hspeed, (-cy * my - sy * mx) * p->jet_hspeed };
        for (int k = 0; k < 2; k++) { f32 a = p->jet_hacc * dt, d = want[k] - p->jet_thrust[k * 2];
            p->jet_thrust[k * 2] += d > a ? a : d < -a ? -a : d; ci.fly_vel[k * 2] = p->jet_ext[k * 2] + p->jet_thrust[k * 2]; }
        {   /* rising 13.3 m/s, descending 15.3 m/s (measured, circle held: /tmp/ct15), nothing held: the height kept (measured: 1 s at
               the top); no higher than 10.4 m over where it started (both harness flights stopped at y -17.10 from -6.71) [assumed: the
               limit is from the start - the original's rule not found] */
            f32 vw = p->jet_rise > 0 ? p->jet_rise * 13.3f : p->jet_rise * 15.3f, a = 40.0f * dt, d = vw - p->jet_thrust[1];
            if (vw > 0 && p->ch.pos[1] >= p->jet_top) vw = 0, d = -p->jet_thrust[1];
            p->jet_thrust[1] += d > a ? a : d < -a ? -a : d; ci.fly_vel[1] = p->jet_thrust[1];
            if (p->ch.pos[1] + ci.fly_vel[1] * dt > p->jet_top) { ci.fly_vel[1] = (p->jet_top - p->ch.pos[1]) / dt; p->jet_thrust[1] = 0; } }
        ci.fly = true; ci.root = false; ci.jump = false; p->jet_t += dt;
        if (ak_setting_int("AK_DEBUG_JET", 0) && p->frame_no % 10 == 0) AK_INFO("jet", "%.2f s: at %.2f %.2f %.2f vel %.2f %.2f %.2f fuel %.1f", p->clock, p->ch.pos[0], p->ch.pos[1], p->ch.pos[2], ci.fly_vel[0], ci.fly_vel[1], ci.fly_vel[2], p->jet_fuel);
        if (p->pfx && p->jet_fx >= 0) {                                    /* the thrust (PFXEffect BFF_Jetpack_Thrust_E) at the back, down
                                                                              [assumed: the place - the pack's marker not read] */
            f32 at[3] = { p->ch.pos[0] + sy * 0.25f, p->ch.pos[1] + 1.2f * S, p->ch.pos[2] + cy * 0.25f }, dn[3] = { 0, -1, 0 };
            if (!(p->jet_h && ak_pfx_follow(p->pfx, p->jet_h, at, dn, p->ch.vel, true))) { s32 h = ak_pfx_play(p->pfx, p->jet_fx, at, dn); p->jet_h = h > 0 ? h : 0; } }
    } else { if (p->jet_h && p->pfx) ak_pfx_follow(p->pfx, p->jet_h, NULL, NULL, NULL, false); p->jet_h = 0;
             if (!p->ch.flying) { memset(p->jet_thrust, 0, sizeof p->jet_thrust); memcpy(p->jet_ext, p->ch.vel, 12); p->jet_thrust[1] = p->ch.vel[1]; } }
    ak_char_update(&p->ch, use, &p->col, &ci, dt);
    if (p->in_veh < 0 || !p->alive) p->oob_out = false;
    if (p->have_oob && p->alive && p->in_veh >= 0) {
        /* (only in a vehicle: 089D4BDC is called from the vehicles' update (089B08F8) alone - the box's other caller is the AI
           pilots' - and a soldier on foot at Hoth's Empire base, x 267 beyond the box's 249, gets no warning in the original) */
        /* leaving the battlefront (089D4BDC, every frame): inside the box - nothing; outside it but within it grown by 500 m across
         * and 340 m up and down (and within +-3940 / +-940 of the origin) - the local player gets message 0x804A: STDTEXT 72 "You
         * are leaving the battlefront!" in the centre box (style 3) while it lasts, and the narrator's Speech_BN_Return once a
         * spell (08A09928); beyond that - a damage message of 1.0 every frame. */
        const f32 *q = p->veh[p->in_veh].pos;
        bool in = true, near = true;
        for (int k = 0; k < 3; k++) {
            f32 grow = k == 1 ? 340.0f : 500.0f, lim = k == 1 ? 940.0f : 3940.0f;
            if (q[k] < p->oob_min[k] || q[k] > p->oob_max[k]) in = false;
            if (q[k] < p->oob_min[k] - grow || q[k] > p->oob_max[k] + grow || q[k] < -lim || q[k] > lim) near = false;
        }
        p->oob_out = !in;
        if (!in && near) { if ((p->oob_msg_t -= dt) <= 0) { ak_hud_message(3, 72, NULL, 0); p->oob_msg_t = 3.0f; } }
        else p->oob_msg_t = 0;
        if (!in && !near) p->target[VT(p, p->in_veh)].health -= 60.0f * dt;   /* [PARITY(1.x): 1.0 a frame at 60 Hz] */
    }
    {   /* tests against the original: AK_TEST_TRACE = a file - the player's position in game axes every 10 frames */
        static FILE *tf; static int tinit; static u32 tfr;
        if (!tinit) { tinit = 1; const char *tp = ak_setting_str("AK_TEST_TRACE", NULL); if (tp) tf = fopen(tp, "w"); }
        static int every = 0; if (!every) { every = ak_setting_int("AK_TEST_TRACE_EVERY", 10); if (every < 1) every = 1; }
        if (tf && !p->warming && (tfr++ % (u32)every) == 0) { f32 g[3]; ak_from_game(p->ch.pos, g);   /* (the flip is its own inverse) */
            fprintf(tf, "%u %.4f %.4f %.4f %d %.3f\n", tfr - 1, g[0], g[1], g[2], p->ch.on_ground, (p->in_veh >= 0 ? p->veh[p->in_veh].yaw : p->ch.yaw) * 57.29578f); fflush(tf); } }
    {   static u32 fr; static int dbg = -1; if (dbg < 0) dbg = ak_setting_int("AK_DEBUG_BODY", 0);
        if (dbg >= 3 && (fr++ % 30) == 0)
            AK_INFO("body", "player at %.2f %.2f %.2f vel %.2f %.2f %.2f %s", p->ch.pos[0], p->ch.pos[1], p->ch.pos[2], p->ch.vel[0], p->ch.vel[1], p->ch.vel[2], p->ch.on_ground ? "ground" : "air"); }
    if (p->ch.sprinting && !stamina_pay(p, p->sprint_cost * dt)) { p->stamina = 0; p->sprint_spent = true; p->ch.sprinting = false; }   /* the sprint's cost (08993D38) */
    if (p->stamina < p->stamina_max) {                                         /* regeneration (089DA874, 08AC3D40) */
        if (!p->stamina_spent) { if (!p->ch.sprinting) p->stamina += dt * p->stamina_regen * (p->buff_k[0] == 3 ? p->pu_stamina_mul : 1.0f); }
        else p->stamina_spent = false;
        if (p->stamina > p->stamina_max) p->stamina = p->stamina_max;
    } else p->stamina_spent = false;
    if (p->in_turret >= 0) {                                                  /* manning a turret: seated at it, it follows the aim */
        ak_turret *t = &p->turret[p->in_turret];
        if (!t->alive || t->team != p->team) { p->in_turret = -1; p->target[0].alive = true; }
        else {                                                                /* the view rides above the turret's pivot */
            f32 P[12]; if (ak_turret_pivot(t, m, P)) { p->ch.pos[0] = P[3]; p->ch.pos[1] = P[7] + 0.5f; p->ch.pos[2] = P[11]; } else { memcpy(p->ch.pos, t->pos, 12); p->ch.pos[1] += 2.0f; }
            p->ch.vel[0] = p->ch.vel[1] = p->ch.vel[2] = 0;
            const ak_turret_def *d = t->def;                                  /* the view keeps to the turret's arc (the limits are symmetric) */
            if (d->yaw_min != d->yaw_max) {
                f32 F = d->face, c = atan2f(-F * t->base[2], -F * t->base[10]), w = fmaxf(-d->yaw_min, d->yaw_max);
                f32 dy = remainderf(p->ch.yaw - c, 6.2831853f);
                dy = fminf(fmaxf(dy, -w), w);
                p->ch.yaw = c + dy;
            }
        }
    }
    /* the clip for the state */
    f32 hs; int st = motion_state(&p->ch, &p->cp, was_ground, &p->land_t, dt, &hs);
    const s32 *pcl = unit_clips(p, 0);
    /* on the ground: the clip the stick asked for - straight from the landing too (measured: the original lands and starts its run
       crossfade the next frame, as from standing); the landing clip only when the stick is idle */
    if (st != PLAY_JUMP && st != PLAY_FALL && (st != PLAY_LAND || intent != PLAY_IDLE)) st = intent;
    if (pcl[st] < 0) st = pcl[PLAY_RUN] >= 0 && hs >= 0.5f ? PLAY_RUN : PLAY_IDLE;
    {   const s32 *cl = (!hero_of(p, 0) && p->alert_t > 0) ? p->aclip : pcl;
        ak_loco_play(&p->loco, cl[st]); ak_loco_advance(&p->loco, dt, p->speed_scale); }     /* (playback rate 1: the clips are not sped up) */
    if (st != p->state) p->state = st;
    p->clip_t = p->loco.t;
    p->posed = poseable(m, &p->look);
    /* idle variations (08998828, as the bots'): idle, not alert, on foot - after 1.25-3.75 s, row 18 or 19 once */
    if (p->alive && p->state == PLAY_IDLE && p->alert_t <= 0 && p->in_veh < 0 && p->in_turret < 0 && p->roll_i < 0 && !hero_of(p, 0) && p->pidle_vars[0] >= 0) {
        if (p->idle_var < 0) { if ((p->idle_t -= dt) <= 0) { p->idle_var = p->pidle_vars[rnd(&p->seed) < 0.5f || p->pidle_vars[1] < 0 ? 0 : 1]; p->idle_vt = 0; } }
        else if ((p->idle_vt += dt) >= m->clips[p->idle_var].duration) { p->idle_var = -1; p->idle_t = (rnd(&p->seed) + 0.5f) * 2.5f; }
    } else { p->idle_var = -1; if (p->idle_t <= 0) p->idle_t = (rnd(&p->seed) + 0.5f) * 2.5f; }
    if (!p->alive) { p->dead_t += dt; if (p->posed) pose(m, &p->look, p->death_clips[p->death_pick & 3], p->dead_t, false, p->bones); }
    else if (p->posed) {
        const ak_play_hero *ph = hero_of(p, 0);
        if (ph && ph->atk_i >= 0) pose(m, &p->look, ph->atk[ph->atk_i], ph->atk_t, false, p->bones);
        else if (p->roll_i >= 0) pose(m, &p->look, p->roll_clip[p->roll_i], p->roll_t, false, p->bones);
        else if (p->idle_var >= 0) pose(m, &p->look, p->idle_var, p->idle_vt, false, p->bones);
        else                                                                   /* the body clips crossfading; alert: the shoot layer while firing */
        {   bool rl = !ph && p->armed && p->weapon.reload_t > 0 && p->reload_clip >= 0;   /* reloading: the set's reload layer (column 2) */
            {   f32 rt = rl ? p->wdef.reload_time - p->weapon.reload_t : -1;     /* its sounds (HSND: Reload_Med_01 / _02 for a rifle...) */
                if (rl && (u32)p->reload_clip < m->nclips) ak_play_clip_events(&m->clips[p->reload_clip], p->snd.reload_t < 0 || rt < p->snd.reload_t ? -1e-6f : p->snd.reload_t, rt, p->ch.pos);
                p->snd.reload_t = rt; }
            pose_mix(m, &p->look, p->loco.prev, p->loco.prev_t, p->loco.cur, p->loco.t, p->loco.w, p->state != PLAY_JUMP && p->state != PLAY_LAND,
                     rl ? p->reload_clip : !ph && p->alert_t > 0 && p->shoot_t < 0.3f ? p->shoot_clip : -1,
                     rl ? p->wdef.reload_time - p->weapon.reload_t : p->shoot_t, p->bones); }
        if (p->in_veh < 0) body_target(m, &p->look, (const f32 (*)[12])p->bones, p->ch.pos, p->ch.yaw, &p->target[0], p->armed ? p->wdef.model : -1);
    }
    /* where the centre of the view meets the level: shots go there unless locked on */
    if (p->aim_ok) {
        ak_col_hit h; f32 reach = p->armed ? p->wdef.distance : 750.0f;
        if (ak_col_raycast(&p->col, p->eye, p->aim, reach, 0, &h)) memcpy(p->aim_point, h.pos, 12);
        else for (int k = 0; k < 3; k++) p->aim_point[k] = p->eye[k] + p->aim[k] * reach;
    }
    /* the weapon (reloads when empty, as in the game) */
    p->turret_fire = p->in_turret >= 0 && p->alive && (in->held & AK_BTN_R);
    p->alert_t -= dt; p->shoot_t += dt;                                       /* the alert pose: firing or locked on, and 3 s after */
    /* the raise: fire held with the stance lapsed (soldier +520 bit 1 clear) waits 0.1 s before the first shot (0899851C sets +356
       to 0.1 (0x08AEE7B4) and the stance's 3 s (+352, 0x08AEE7B0); 08993D38 counts +356 down each frame, the same frame included).
       Measured: cross held from frame 30 fires at 35, then every 18 frames; pressed again within 3 s of letting go it fires at once;
       a 4-frame tap from a lapsed stance fires nothing. [assumed: L (lock on) keeps the stance as Aurek's alert pose does] */
    if (p->alive && p->in_veh < 0 && (in->held & AK_BTN_R) && p->alert_t <= 0) p->raise_t = 0.1f;
    p->raise_t -= dt;
    if (p->alive && p->in_veh < 0 && (in->held & (AK_BTN_R | AK_BTN_L))) { p->alert_t = 3.0f; if (in->held & AK_BTN_R) p->shoot_t = 0; }
    {   int ht = p->hero[p->team].offered == 0 ? 1 : 0;                       /* an offer of the hero: up takes it, down declines */
        if (ht && (in->pressed & AK_BTN_UP)) p->hero_answer = 1; else if (ht && (in->pressed & AK_BTN_DOWN)) p->hero_answer = -1; }
    if (p->armed && hero_of(p, 0) && hero_of(p, 0)->saber) {
        ak_weapon_update(&p->weapon, dt, false);
        hero_attack(p, m, hero_of(p, 0), (in->held & AK_BTN_R) && p->alive && p->in_veh < 0 && p->in_turret < 0, &p->weapon, p->ch.pos, p->ch.yaw, dt);
    } else if (p->armed && repair_tool(p)) {
        /* the fusion cutter (Projectile "Fusion Cutter": RepairVehicle 10, MaxRange 3; RateOfFire 0.25): held fire repairs.  Measured
           (harness ct25, Yavin's training turret 18bdc, Small_Turret Health 300, starting destroyed): cross held beside it filled the
           target panel ("Auto-Turret", STDTEXT 0xB1) and the reticle's green arc in about 7.4 s, then the turret stood whole again
           and raised its event 10014 (group 3) - 10 a shot every 0.25 s is 7.5 s.  [assumed: the nearest turret within MaxRange of
           the soldier (the turret's size added), any side; a turret only - vehicles' RepairVehicle not done; DamageToInfantry 5 not done] */
        p->rep_show -= dt; p->rep_t -= dt;
        if ((in->held & AK_BTN_R) && p->alive && p->in_turret < 0 && p->in_veh < 0) {
            const ak_bp_object *pj = repair_tool(p); f32 rng = ak_bp_float(pj, "MaxRange", 3), amt = ak_bp_float(pj, "RepairVehicle", 10);
            s32 best = -1; f32 bd = 1e30f;
            for (u32 i = 0; i < p->nturret; i++) { const ak_turret *t = &p->turret[i]; if (t->alive && t->health >= t->def->health) continue;
                f32 dx = t->pos[0] - p->ch.pos[0], dz = t->pos[2] - p->ch.pos[2], d2 = dx * dx + dz * dz, r = rng + t->rad;
                if (d2 < r * r && d2 < bd && fabsf(t->pos[1] - p->ch.pos[1]) < 4.0f) { bd = d2; best = (s32)i; } }
            if (best >= 0) { p->rep_turret = best; p->rep_show = 1.0f;
                if (p->rep_t <= 0) { p->rep_t += p->wdef.rate_of_fire > 0 ? p->wdef.rate_of_fire : 0.25f; if (p->rep_t < 0) p->rep_t = 0;
                    ak_turret *t = &p->turret[best]; ak_target *g = &p->target[TT(p, (u32)best)];
                    t->health = fminf(t->def->health, t->health + amt); g->health = t->health; g->max_health = t->def->health;
                    if (!t->alive && t->health >= t->def->health) {
                        t->alive = true; g->alive = true; t->enemy = -1;
                        if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("play", "turret %x repaired", t->id);
                        if (p->have_script && t->nev) ak_script_raise(&p->script, t->ev, t->nev, 10014, t->id, script_sink, p);
                    } } }
        } else if (p->rep_t < 0) p->rep_t = 0;
    } else if (p->armed) {
        ak_weapon_update(&p->weapon, dt, false);
        f32 gun[12], muz[3];
        if (((in->held & AK_BTN_R) || p->weapon.owed > 0) && p->alive && p->in_turret < 0 && p->aim_ok && p->raise_t <= 0.001f && ak_play_weapon_matrix(p, m, gun)) {   /* (the camera has aimed once;
                                                                                     a burst weapon's press finishes its shots, the trigger let go or not: w+296) */
            muzzle_of(m, &p->wdef, gun, muz);
            f32 tgt[3]; memcpy(tgt, p->aim_point, 12);
            if (p->lock >= 0 && p->target[p->lock].alive) {                    /* locked on: the chest, then the head */
                const ak_target *t = &p->target[p->lock];
                if (t->vehicle) { if (t->boxed) memcpy(tgt, t->box_c, 12); else { memcpy(tgt, t->feet, 12); tgt[1] += t->height * 0.5f; } }   /* a vehicle has no head
                                                                                     (its head point is 100 m under it): its middle [assumed] */
                else if (p->lock_t >= p->lock_head_time) memcpy(tgt, t->head, 12); else { memcpy(tgt, t->feet, 12); tgt[1] += 1.1f * S; }
            }
            {   int ta = ak_setting_int("AK_TEST_AIM", 0);                    /* tests: 1 = the nearest enemy's chest, 2 = its head */
                if (ta) {
                    s32 bi = -1; f32 bd = 1e30f;
                    for (u32 i = 1; i < nt; i++) { const ak_target *t = &p->target[i]; if (!t->alive || t->team == p->team) continue;
                        f32 dx = t->feet[0] - p->ch.pos[0], dz = t->feet[2] - p->ch.pos[2]; if (dx * dx + dz * dz < bd) { bd = dx * dx + dz * dz; bi = (s32)i; } }
                    if (bi >= 0) { const ak_target *t = &p->target[bi]; if (ta == 2) memcpy(tgt, t->head, 12); else { memcpy(tgt, t->feet, 12); tgt[1] += 1.1f * S; } }
                } }
            u32 shot = ak_weapon_fire(&p->weapon, &p->bolts, &p->col, p->target, nt, muz, tgt, &p->seed);
            {   static int ds = -1; if (ds < 0) ds = ak_setting_int("AK_DEBUG_SHOTS", 0);   /* tests: the player's shots, by frame */
                if (ds && shot) AK_INFO("shot", "frame %u %s ammo %d spare %d heat %.1f dmg %.1f/%.1f speed %.1f spread %.2f rof %.3f heat/shot %.2f decay %.2f windup %.2f ai burst %.3f pause %.3f", p->frame_no, p->wdef.name ? p->wdef.name : "?", p->weapon.ammo, p->weapon.spare, p->weapon.heat.heat, p->wdef.dmg_infantry, p->wdef.dmg_vehicle, p->wdef.speed, p->wdef.spread_deg, p->wdef.rate_of_fire, p->wdef.heat_shot, p->wdef.heat_decay, p->wdef.windup, ak_ai_burst(&p->wdef), ak_ai_pause(&p->wdef)); }
        }
    }
    {   static int dv = -1; if (dv < 0) dv = ak_setting_int("AK_DEBUG_VEH", 0);   /* tests: every vehicle's place each 5 s (game axes) */
        if (dv && p->frame_no % 300 == 0) for (u32 v = 0; v < p->nveh; v++) { const ak_vehicle *vv = &p->veh[v]; if (!vv->def) continue; f32 g[3]; ak_from_game(vv->pos, g);
            AK_INFO("veh", "frame %u vehicle %u %s at %.1f %.1f %.1f%s", p->frame_no, v, vv->def->name ? vv->def->name : "?", g[0], g[1], g[2], vv->alive ? "" : " (dead)"); } }
    /* the bots */
    for (u32 i = 0; i < p->nbots; i++) bot_update(p, m, &p->bot[i], i, dt, NULL);
    {   const char *tw = ak_setting_str("AK_TEST_WEAPON_AT", NULL);         /* tests: "frame:Weapon" puts that weapon in the player's hands */
        unsigned f_; char nm[64];
        if (tw && sscanf(tw, "%u:%63[^\n]", &f_, nm) == 2 && f_ == p->frame_no && p->bps && ak_weapon_def_load(p->bps, m, nm, p->look.faction, &p->wdef)) {
            p->armed = true; ak_weapon_give(&p->weapon, &p->wdef); p->weapon.team = p->team; p->weapon.owner = 0; p->weapon.heats = true; anim_sets(p, m);
            AK_INFO("play", "test: weapon %s", p->wdef.name); } }
    {   const char *tf = ak_setting_str("AK_TEST_FIRE", NULL);              /* tests: "frame:group[;...]" fires script groups (as the harness's RS_FIRE_AT) */
        if (tf && p->have_script) { char buf[256]; snprintf(buf, sizeof buf, "%s", tf);
            for (char *t = strtok(buf, ";"); t; t = strtok(NULL, ";")) { unsigned f_, g; if (sscanf(t, "%u:%u", &f_, &g) == 2 && f_ == p->frame_no) {
                AK_INFO("script", "test: group %u", g); ak_script_fire(&p->script, (s32)g, 0x3E7, script_sink, p); } } } }
    {   const char *tb = ak_setting_str("AK_TEST_BREAK", NULL);             /* tests: "frame:prop id hex[;...]" - a prop's health to 0 (it breaks as if shot) */
        if (tb) { char buf[256]; snprintf(buf, sizeof buf, "%s", tb);
            for (char *t = strtok(buf, ";"); t; t = strtok(NULL, ";")) { unsigned f_, id; if (sscanf(t, "%u:%x", &f_, &id) == 2 && f_ == p->frame_no)
                { for (u32 i = 0; i < p->nprop; i++) if (p->prop[i].id == id && p->target[NP(p) + i].alive) { p->target[NP(p) + i].health = 0; p->target[NP(p) + i].last_attacker = 0; }
                  for (u32 i = 0; i < p->nturret; i++) if (p->turret[i].id == id && p->target[TT(p, i)].alive) { p->target[TT(p, i)].health = -1e6f; p->target[TT(p, i)].last_attacker = 0; }
                  for (u32 v = 0; v < p->nveh; v++) if (p->vspawn[v].eid == id && p->target[VT(p, v)].alive) { p->target[VT(p, v)].health = -1e6f; p->target[VT(p, v)].last_attacker = 0; }
                  for (u32 k = 0; k < p->nuspawn; k++) if (p->uspawn[k].id == id && p->uspawn[k].bot >= 0 && p->target[1 + p->uspawn[k].bot].alive) { p->target[1 + p->uspawn[k].bot].health = -1e6f; p->target[1 + p->uspawn[k].bot].last_attacker = 0; } } } } }   /* (and turrets, a spawner's vehicle or soldier) */
    {   static int dbb = -1; if (dbb < 0) dbb = ak_setting_int("AK_DEBUG_BOTS", 0);   /* tests: each live bot once a second */
        if (dbb && p->frame_no % 30 == 0) { for (u32 i = 0; i < p->nbots; i++) { const ak_play_bot *b = &p->bot[i]; if (!b->alive) continue;
            f32 dx = b->ch.pos[0] - p->ch.pos[0], dz = b->ch.pos[2] - p->ch.pos[2];
            AK_INFO("bots", "%.1f s: bot %u at %.1f %.1f %.1f, %.1f m from the player, enemy %d, goal %d, state %d, health %.0f, team %d", p->clock, i, b->ch.pos[0], -b->ch.pos[1], -b->ch.pos[2], sqrtf(dx * dx + dz * dz), b->enemy, b->goal, b->fstate, p->target[1 + i].health, b->team); }
            AK_INFO("bots", "%.1f s: player health %.1f", p->clock, p->target[0].health); } }
    /* the vehicles */
    for (u32 v = 0; v < p->nveh; v++) {                                      /* each spawn's clock: reset while one of its vehicles stands near */
        ak_play_vspawn *sv = &p->vspawn[v]; if (sv->first != (s32)v) continue;
        bool near = false;
        for (u32 u = v; u < p->nveh && !near; u++) if (p->vspawn[u].first == (s32)v && p->veh[u].alive) {
            f32 dx = p->veh[u].pos[0] - sv->pos[0], dy = p->veh[u].pos[1] - sv->pos[1], dz = p->veh[u].pos[2] - sv->pos[2];
            near = dx * dx + dy * dy + dz * dz < 25.0f * S * 25.0f * S; }
        sv->clear_t = near ? 0 : sv->clear_t + dt;
    }
    for (u32 v = 0; v < p->nveh; v++) {
        ak_vehicle *vh = &p->veh[v];
        if (!vh->def) continue;
        vh->sec_t -= dt; if (vh->sec_reload > 0) vh->sec_reload -= dt; vh->bot_sec_t -= dt;
        if (vh->def->armed) for (u32 k = 0; k < 4; k++) ak_heat_update(&vh->heat[k], &vh->def->gun, dt);
        if (vh->energy < vh->def->energy_max) {                               /* the recharge (089DA874), driven or not */
            if (!vh->energy_spent) { if (!vh->boost_held) vh->energy += dt * vh->def->energy_recharge; }
            else vh->energy_spent = false;
            if (vh->energy > vh->def->energy_max) vh->energy = vh->def->energy_max;
        } else vh->energy_spent = false;
        vh->boost_held = false;
        {   static f32 kt = -2; if (kt == -2) kt = ak_setting_float("AK_TEST_KILL_WALKER", -1);   /* tests: placed walkers destroyed at this time */
            if (kt >= 0 && p->vspawn[v].fixed && vh->alive && p->clock >= kt && p->clock - dt < kt) { p->target[VT(p, v)].alive = false; vehicle_destroyed(p, m, v); } }
        if (!vh->alive) {                                                     /* wrecked: back after the respawn delay */
            vh->dead_t += dt;
            if (vh->def->kind == AK_VEH_WALKER && vh->dead_t < 8.0f) ak_vehicle_pose(vh, m, dt);   /* the death clip */
            /* the spawner's clock (08A166A0: + the frame's time each update, reset while one of its vehicles lives within 25 m) makes a new
               one once it passes the respawn time (+0x24; +0x1D, set at the start, spawns the first at once).  Read live (harness RS_VSPAWN_LOG:
               Hoth's Taun-Taun and snowspeeder spawners, "Kills all tanks / flyers"): the slot frees on the kill and the clock passes 10.0 s of
               game time 592 and 652 frames later - the 11-13 s measured before were frames, the harness's game clock running at 0.0153-0.0169 s
               a frame; so no extra time.  [assumed: Aurek waits for the wreck (5 s) before reusing its slot - the game frees it at once] */
            const f32 extra = 0;
            const ak_play_vspawn *sv = &p->vspawn[v]; const ak_play_vspawn *fs = &p->vspawn[sv->first];
            /* (the spawn's clock: how long its area has been clear - see the spawner above; a slot comes back once its wreck has gone) */
            if (!sv->fixed && !sv->lone && !sv->waiting && vh->dead_t > 5.0f && fs->clear_t > sv->respawn + extra) {
                bool other = false; for (u32 u = 0; u < v; u++) if (p->vspawn[u].first == sv->first && !p->veh[u].alive && p->veh[u].dead_t > 5.0f) other = true;
                if (!other) { if (vehicle_make(p, v)) p->vspawn[sv->first].clear_t = 0; else vh->dead_t = 5.0f; }   /* (one slot at a time) */
            }
            continue;
        }
        if (vh->driver == 0) {                                                /* the player drives: left stick, cross boosts, right stick aims, R fires */
            bool rails = p->vspawn[v].route && vh->def->kind == AK_VEH_WALKER;   /* a placed walker keeps to its path: the gunner aims and fires */
            vh->throttle = vin->ly; vh->steer = vin->lx; vh->strafe = 0; vh->brake = false;
            bool fly_fast = false, fly_boost = false;
            if (vh->def->kind == AK_VEH_FLYER) {
                /* measured (Hoth's snowspeeder): parked, R takes off; flying, R speeds up to the cruising speed and L slows to the
                   stall speed, and the speed stays when let go (the speed after lift-off: the stall's) */
                /* the throttle (089B20CC): R held +1, L held -1, neither 0 - with no drag the speed then stays */
                vh->fast = false; vh->brake = false;
                if (!vh->flying) { if (vin->pressed & AK_BTN_CROSS) vh->takeoff_req = true; }
                else if (vh->takeoff <= 0) { vh->fast = (vin->held & AK_BTN_CROSS) != 0; vh->brake = (vin->held & AK_BTN_L) != 0 && !vh->fast; }
                fly_fast = true;
                /* the boost (traced, 089A9728, and seen on Space Hoth's X-wing): R tapped, then R held again within 0.5 s of the tap's
                   release; it lasts while R stays held and the energy pays (089CABFC); only in free flight (vehicle +852 bit 0 - set
                   in space once out of the hangar, never on the Hoth snowspeeder) [PARITY(3.3): Aurek takes "free flight" as any
                   space map; the hangar volumes are not known].  Each boosting frame renews the window. */
                {
                    bool r = (vin->held & AK_BTN_CROSS) != 0;
                    if (vh->r_was && !r) vh->r_tap_t = 0;                    /* a release: the tap's moment */
                    vh->r_tap_t += dt; vh->r_was = r;
                    fly_boost = r && vh->flying && vh->takeoff <= 0 && p->free_flight && (vh->r_tap_t < 0.5f || vh->boosting);
                }
                if (p->free_flight ? p->invert_y_space : p->invert_y_vehicle) vh->throttle = -vh->throttle;   /* (the snowspeeder's pull-up measured with 0) */
                fly_target_update(p, v, dt);
            }
            else if (vin->held & AK_BTN_L) { vh->strafe = vin->lx; vh->steer = 0; }   /* L held: strafe (hover craft) */
            vh->aim_yaw -= vin->rx * 2.0f * dt; vh->aim_pitch += (p->invert_y_vehicle ? -vin->ry : vin->ry) * 1.5f * dt;   /* [assumed: which of the vehicle's inputs 08A60028's axis 1 is] */
            if (vh->aim_yaw > 1.2f) vh->aim_yaw = 1.2f;
            if (vh->aim_yaw < -1.2f) vh->aim_yaw = -1.2f;
            if (vh->aim_pitch > 0.6f) vh->aim_pitch = 0.6f;
            if (vh->aim_pitch < -0.4f) vh->aim_pitch = -0.4f;
            if (rails) walker_route_step(p, v, dt); else ak_vehicle_update(vh, &p->col, p->cp.gravity, vehicle_boost(vh, fly_fast ? fly_boost : (vin->held & AK_BTN_CROSS) != 0, dt), dt);
            if ((vin->held & AK_BTN_R) && p->aim_ok) vehicle_fire(p, m, v, p->aim_point, dt, false); else vh->volley_t = 0;
            if (p->aim_ok) vehicle_lock(p, vh, p->eye, p->aim, dt);                /* circle: the secondary (locked: guided) */
            if ((vin->held & AK_BTN_CIRCLE) && p->aim_ok) vehicle_fire2(p, m, v, p->aim_point, vh->locked ? vh->lock : -1);
            memcpy(p->ch.pos, vh->pos, 12); p->ch.yaw = vh->yaw + vh->aim_yaw; p->ch.vel[0] = p->ch.vel[1] = p->ch.vel[2] = 0;
        } else if (vh->driver > 0 && !(p->vspawn[v].route && vh->def->kind == AK_VEH_FLYER)) {   /* a bot drives (its controls are set in bot_drive); a placed craft with a path flies the path, its pilot aboard [assumed] */
            ak_vehicle_update(vh, &p->col, p->cp.gravity, vehicle_boost(vh, p->bot[vh->driver - 1].boost, dt), dt);
            memcpy(p->bot[vh->driver - 1].ch.pos, vh->pos, 12);
        } else if (p->vspawn[v].route && vh->def->kind != AK_VEH_WALKER && vh->alive) {
            /* a placed hover unit on a patrol path (Yavin's training Recon_Droid: spawner 18bd8 -> path node 18bd9 -> AI points 18c3c /
               18c3e / 18c3f, a loop): it starts on the path's first point and goes round at the original's pace - harness object 30d48,
               -24.40 -8.68 199.35 at its making, then about 0.5 m/s toward -26.6 203 and -22.0 204.7 [measured; the unit AI's own
               speed, turning and stops not traced] */
            ak_play_vspawn *sp = &p->vspawn[v]; f32 at[3], dir[3]; const ak_route *r = sp->route;
            /* its nodes as the scripted soldiers' (above): the low group on arrival, the stand, the high group as it leaves - Space
               Hoth's transport 18860 leaves 18837 (69) and its arrival at 18839 is the escort's end (45) [assumed: as the soldiers'] */
            if (sp->rt_wait < 0 && sp->rt_q < r->nnodes) {
                u32 ev = r->node_ev[sp->rt_q]; sp->rt_wait = r->node_wait[sp->rt_q][0];
                if ((ev & 0xFFFF) != 0xFFFF && p->have_script) ak_script_fire(&p->script, (s32)(ev & 0xFFFF), r->node_id[sp->rt_q], script_sink, p);
                if (sp->rt_wait <= 0) sp->rt_wait = 1e-6f; }
            if (sp->rt_wait > 0) { sp->rt_wait -= dt; if (sp->rt_wait <= 0) { sp->rt_wait = 0;
                u32 ev = r->node_ev[sp->rt_q] >> 16; if (ev != 0xFFFF && p->have_script) ak_script_fire(&p->script, (s32)ev, r->node_id[sp->rt_q], script_sink, p); } }
            /* a flyer at its cruising speed (Space Hoth's Rebel_Transport: CruisingSpeed 85), the rest at the recon droid's 0.5 m/s
               [assumed: the unit AI's own pace is not traced] */
            f32 spd = vh->def->kind == AK_VEH_FLYER && vh->def->cruise > 0 ? vh->def->cruise : 0.5f;
            if (sp->rt_wait <= 0) { sp->route_d += spd * dt;
                if (sp->rt_q + 1u < r->nnodes) { f32 nd = ak_route_dist(r, r->node_pt[sp->rt_q + 1]);
                    if (sp->route_d >= nd) { sp->route_d = nd; sp->rt_q++; sp->rt_wait = -1; } } }
            if (sp->route_d > sp->route->length) sp->route_d = sp->route->length;
            if (ak_route_at(sp->route, sp->route_d, at, dir)) {
                vh->pos[0] = at[0]; vh->pos[1] = at[1] - vh->def->hover; vh->pos[2] = at[2];
                if (dir[0] * dir[0] + dir[2] * dir[2] > 1e-6f) vh->yaw = atan2f(-dir[0], -dir[2]);
                vh->vel[0] = dir[0] * spd; vh->vel[1] = 0; vh->vel[2] = dir[2] * spd;
                if (vh->driver > 0) memcpy(p->bot[vh->driver - 1].ch.pos, vh->pos, 12);
            }
        } else if (p->vspawn[v].route && vh->def->kind == AK_VEH_WALKER) {      /* a placed walker: along its path at its walking pace, then it stands */
            walker_route_step(p, v, dt);
            static int wg = -1; if (wg < 0) wg = ak_setting_int("AK_WALKER_AI_GUNS", 1);
            if ((p->auto_gunners || wg) && vh->driver < 0) {   /* its guns with no gunner aboard - measured on the original (Boz Pity, pure AI, gdb on
                                       the hit 089A7310 with the attacker id in the hit record's word 1): the AT-AT's gun object 30d46 (class 0x801E)
                                       hit soldiers 23 times in 54 s at 50-100 m with no soldier aboard (none of the [BOT] list rode it), so a
                                       placed walker fires by itself (AK_WALKER_AI_GUNS=0: only with AK_AUTO_GUNNERS, as before) [assumed: Aurek's
                                       own aim - the nearest enemy in range within the head's reach, 1 rad/s - the gun object's AI not read;
                                       Hoth's walkers not measured] */
                static s32 cached[PLAY_MAX_VEH]; static f32 next[PLAY_MAX_VEH];   /* (looked for every half second) */
                if ((next[v] -= dt) <= 0) { next[v] = 0.5f; { /* the head's AI is the soldiers' fight node 0x457 (gdb: its triggers are built by 089514C8 under 08955410 <- 089528F8 / 089526EC,
                       node 0x457's switch / update), whose target is the soldier sensor's record - 55 m x 1.0, +-45 degrees about the
                       facing (see bot_find_enemy) [assumed: the head's sensor faces the head's aim; Aurek's nearest within it] */
                    static int hs = -1; if (hs < 0) hs = ak_setting_int("AK_WALKER_HEAD_SENSOR", 1);
                    cached[v] = hs ? find_enemy(p, vh->team, vh->pos, vh->yaw + vh->aim_yaw, vh->def->hover + vh->def->height * 0.8f, 55.0f * p->sense_mult, false)
                                   : find_enemy(p, vh->team, vh->pos, vh->yaw, vh->def->hover + vh->def->height * 0.8f, vh->def->target_range > 0 ? vh->def->target_range : 100.0f, true); } }
                s32 e = cached[v]; if (e >= 0 && !p->target[e].alive) e = cached[v] = -1;
                if (ak_setting_int("AK_DEBUG_WALKER_GUNS", 0) && (int)(p->clock * 2) != (int)((p->clock - dt) * 2)) AK_INFO("veh", "%.1f s: walker %u team %d driver %d armed %d range %.0f enemy %d", p->clock, v, vh->team, vh->driver, vh->def->armed, vh->def->target_range, e);
                if (e >= 0 && vh->def->armed) {
                    const ak_target *en = &p->target[e];
                    f32 ex = en->feet[0] - vh->pos[0], ez = en->feet[2] - vh->pos[2], want = wrap(atan2f(-ex, -ez) - vh->yaw);
                    vh->aim_yaw += clampf(clampf(want, -1.2f, 1.2f) - vh->aim_yaw, -1.0f * dt, 1.0f * dt);
                    /* the head's trigger (read live, gdb on the AI trigger 08965A70, class 0x08AF97A8, Boz Pity): the trigger objects whose
                       held state (+8 = 2) lines up with the head's shots (089BD8A8 -> 089C71EC) carry range^2 3600 (+16: 60 m), the cone's
                       cosine 0.9763 (+20: 12.5 degrees), a burst of 2.34375 s (+28) and a pause of 4.6875 s (+32) times 0.9-1.1 (seen 4.32 -
                       5.10); the bursts ended early - after 28-76 frames - when the target left the cone or range, so 2-6 shots.  A new
                       trigger object starts with no pause [assumed: the cone is taken around the head's aim, as the turrets'] */
                    {   ak_ai_fire *c = &vh->fire_ai; f32 hy = vh->yaw + vh->aim_yaw;
                        f32 fx = -sinf(hy), fz = -cosf(hy), dl = sqrtf(ex * ex + ez * ez), dy = en->feet[1] - vh->pos[1];
                        bool ok = ex * ex + dy * dy + ez * ez < 3600.0f && dl > 0 && (fx * ex + fz * ez) / dl > 0.97630f;
                        c->t -= dt; bool fire = false;
                        if (c->state != 2) { if (c->t <= 0 && ok) { c->state = 2; c->t = 2.34375f; fire = true; } }
                        else if (c->t <= 0 || !ok) { c->state = 1; c->t = 4.6875f * (0.9f + 0.2f * rnd(&p->seed)); }
                        else fire = true;
                        if (fire) { f32 tg[3] = { en->feet[0], en->feet[1] + en->height * 0.5f, en->feet[2] }; vehicle_fire(p, m, v, tg, dt, false); }
                        else vh->volley_t = 0; }
                } else vh->volley_t = 0;
            }
            if (ak_setting_int("AK_DEBUG_VEH", 0) > 1 && (int)(p->clock / 2.0f) != (int)((p->clock - dt) / 2.0f))
                AK_INFO("veh", "%.0f s: %s at %.1f %.1f %.1f, %.1f of %.0f m along its path", p->clock, vh->def->name, vh->pos[0], vh->pos[1], vh->pos[2], p->vspawn[v].route_d, p->vspawn[v].route->length);
        } else {                                                              /* empty: it brakes to a stop */
            vh->throttle = vh->steer = vh->strafe = 0; f32 k = expf(-4.0f * dt); vh->vel[0] *= k; vh->vel[2] *= k;
            ak_vehicle_update(vh, &p->col, p->cp.gravity, false, dt);
        }
        if (vh->driver == 0 && ak_setting_int("AK_DEBUG_VEH", 0)) AK_INFO("veh", "%s acc %.0f top %.0f pos %.1f %.1f %.1f vel %.1f %.1f %.1f yaw %.2f", vh->def->name, vh->def->max_acc, vh->def->top_speed, vh->pos[0], vh->pos[1], vh->pos[2], vh->vel[0], vh->vel[1], vh->vel[2], vh->yaw);
        /* collision damage (089CE510, from the physics with the impact speed): at or above the class's threshold (vfunc +0x1F0: 30 m/s,
           flyers 5) the vehicle sends itself damage +0x34 x speed x dt x the class's factor (vfunc +500: 0.025; flyers 089B02E0:
           0.05 in free flight (+852 bit 0) unless bit 1, else 0.025) and plays its blueprint's "Collision sound" (089CD7C4)
           [assumed: +0x34 is the maximum health; only flyers' touches measure an impact here] */
        if (vh->def && vh->impact > 0) {
            f32 thr = vh->def->kind == AK_VEH_FLYER ? 5.0f : 30.0f, k = vh->def->kind == AK_VEH_FLYER && vh->free_flight ? 0.05f : 0.025f;
            if (vh->impact >= thr) {
                ak_target *vt = &p->target[VT(p, v)]; vt->health -= vt->max_health * vh->impact * dt * k;
                if (!vh->coll_snd) { const char *cs = ak_bp_string(vh->def->bp, "Collision sound", NULL); if (!cs) cs = ak_bp_string(vh->def->bp, "Collision Sound", NULL);
                                     if (cs && *cs) ak_audio_play(cs, vh->pos, false); }
                vh->coll_snd = true;
            } else vh->coll_snd = false;
        } else if (vh->def) vh->coll_snd = false;
        if (vh->crashed) {                                                    /* flown into the level */
            p->target[VT(p, v)].alive = false; p->target[VT(p, v)].last_attacker = -1; vehicle_destroyed(p, m, v); vh->crashed = false; continue;
        }
        ak_vehicle_pose(vh, m, dt);
        ak_play_vehicle_clip_sounds(p, m, v);                                 /* its clip's sound events (HSND) */
        if (ak_setting_int("AK_DEBUG_VEH", 0) > 1 && vh->def->turret_model >= 0) {
            f32 T[12]; if (ak_vehicle_marker(vh, m, vh->def->turret_marker, T)) AK_INFO("veh", "%s at %.1f %.1f %.1f: turret %s at %.1f %.1f %.1f", vh->def->name, vh->pos[0], vh->pos[1], vh->pos[2], m->models[vh->def->turret_model].name, T[3], T[7], T[11]); }
        vehicle_target(p, v);
        {   /* shots hit its body: the model's box by its matrix (as the physics body, ak_box.h) [assumed: the bolts' test is that
               body] (AK_SHOT_BOXES=0: the capsule) */
            static int sb = -1; if (sb < 0) sb = ak_setting_int("AK_SHOT_BOXES", 1);
            ak_target *t = &p->target[VT(p, v)]; t->boxed = false;
            if (sb && vh->def->model >= 0) { ak_box bx; vehicle_box(m, vh, &bx); t->boxed = true; memcpy(t->box_c, bx.c, 12); memcpy(t->box_ax, bx.ax, 36); memcpy(t->box_h, bx.h, 12); }
            if (t->boxed && vh->def->hover > 1.5f) {   /* a floating unit (the recon droid): its model's box is a 0.18 x 1.4 x 0.2 m stick off its
                                                          drawn place - the model's sphere where it is drawn instead [assumed: the game's shape for it not traced] */
                f32 r = m->models[vh->def->model].radius; t->box_c[0] = vh->pos[0]; t->box_c[1] = vh->pos[1] + vh->def->hover; t->box_c[2] = vh->pos[2];
                t->box_h[0] = t->box_h[1] = t->box_h[2] = r; }
        }
        if (vh->pos[1] < -400.0f && !p->is_space) { p->target[VT(p, v)].alive = false; }   /* (fallen out of a ground level; space levels go below -400 - Space Kessel's TIEs 18848-4b start at -420..-500) */
    }
    for (u32 i = 0; i < p->nboom; i++) p->boom[i].t += dt;
    /* bodies (ak_box.h, traced): the one the local player controls is pushed out of every other soldier's, vehicle's and turret's
     * box; the rest are kinematic - never pushed, and they pass through each other */
    for (u32 k = 0; k < p->nmover; k++) {                                    /* moving hulls (type 19): the wait, then the straight move */
        typeof(p->mover[0]) *mv = &p->mover[k]; if (!mv->moving) continue;
        if (mv->wait > 0) { mv->wait -= dt; continue; }
        mv->t += dt; f32 u = mv->len > 0 ? mv->t / mv->len : 1; if (u >= 1) { u = 1; mv->moving = false; }
        for (int c = 0; c < 3; c++) mv->pos[c] = mv->p0[c] + (mv->p1[c] - mv->p0[c]) * u;
    }
    bodies_push(p, m);
    turrets_update(p, m, dt);
    if (p->have_cq) mobile_posts(p, m);
    ak_projs_update(&p->projs, &p->col, p->target, NT(p), p->cp.gravity, dt, proj_boom, p);
    /* the shots in flight */
    bool alive_before[PLAY_MAX_TARGETS];
    for (u32 i = 0; i < nt; i++) alive_before[i] = p->target[i].alive;
    heroes_drain(p, dt);
    for (u32 i = 0; i < nt; i++) if (p->target[i].alive && p->target[i].health <= 0 && alive_before[i]) { p->target[i].health = 0; p->target[i].alive = false; }   /* saber strokes */
    for (u32 k = 0; k < NT(p); k++) {                                         /* the local player's targets (089E3BD4) */
        p->target[k].local = k == 0 || (k >= NS(p) && k < NV(p) && p->veh[k - NS(p)].driver == 0) || (k >= NV(p) && p->in_turret == (s32)(k - NV(p)));
        p->target[k].elite = p->difficulty >= 2 ? p->elite_mul : 1.0f; }
    ak_bolts_update(&p->bolts, &p->col, p->target, nt, dt);
    if (p->pfx) {                                                             /* the shots' muzzle flashes and the impacts' effects (R.6) */
        u32 ns = p->bolts.shots - p->pfx_shots; if (ns > AK_MAX_SHOT_FX) ns = AK_MAX_SHOT_FX;
        for (u32 j = 0; j < ns; j++) { const ak_shot_fx *f = &p->bolts.shot[(p->bolts.shots - ns + j) % AK_MAX_SHOT_FX]; s32 h = play_fx_within(p, f->pfx, f->pos, f->dir, 100.0f);   /* [assumed] muzzle flashes as far as impacts */
            /* in the bolt's colour (measured: the original's E-11 flash, curve grey 0.54 -> drawn 0x77 0x20 0x07 under the bolt's dd3d0c) */
            if (h) { f32 c[3] = { (f32)((f->colour >> 16) & 255) / 255.0f, (f32)((f->colour >> 8) & 255) / 255.0f, (f32)(f->colour & 255) / 255.0f }; ak_pfx_tint(p->pfx, h, c); } }
        u32 ni = p->bolts.impacts - p->pfx_impacts; if (ni > AK_MAX_IMPACTS) ni = AK_MAX_IMPACTS;
        for (u32 j = 0; j < ni; j++) {
            const ak_impact *im = &p->bolts.imp[(p->bolts.next_imp + AK_MAX_IMPACTS - ni + j) % AK_MAX_IMPACTS];
            play_fx_within(p, im->pfx, im->pos, im->normal, 100.0f);         /* the weapon's "impact pfx max dist" (100 on every weapon) */
        }
        {   static const char *test; static bool tset; static f32 tt; if (!tset) { tset = true; test = ak_setting_str("AK_PFX_TEST", NULL); tt = ak_setting_float("AK_PFX_TEST_AT", 1.0f); }
            if (test && (tt -= dt) <= 0) {                                    /* tests: an effect 8 m ahead of the eye every 2 s */
                tt = ak_setting_float("AK_PFX_TEST_EVERY", 2.0f);
                f32 f[3] = { p->aim[0], 0, p->aim[2] }, fl = sqrtf(f[0] * f[0] + f[2] * f[2]) + 1e-6f; f[0] /= fl; f[2] /= fl;
                f32 td = ak_setting_float("AK_PFX_TEST_DIST", 8.0f), q[3] = { p->eye[0] + f[0] * td, p->eye[1] - ak_setting_float("AK_PFX_TEST_DOWN", 1.0f), p->eye[2] + f[2] * td };
                play_fx(p, test, q, ak_setting_int("AK_PFX_TEST_FWD", 0) ? f : NULL);
                AK_INFO("pfx", "test %s at play frame %u", test, p->frame_no);
            } }
        for (u32 i = 0; i < AK_MAX_PROJ; i++) {                                /* projectile trails ("PFXEffect") */
            const ak_proj *q = &p->projs.p[i];
            ride_fx(p, &p->proj_fx[i], q->alive && q->d && q->d->trail_pfx, q->alive && q->d ? q->d->trail_pfx : NULL, q->pos, q->dir, q->vel);
        }
        for (u32 v = 0; v < p->nveh; v++) {                                   /* damaged vehicles: SmokePFX under 66% health, FirePFX under 33%, at SmokeMarker / FireMarker */
            ak_vehicle *vh = &p->veh[v]; const ak_target *t = &p->target[VT(p, v)];
            f32 hf = t->max_health > 0 ? t->health / t->max_health : 1; bool ok = vh->alive && vh->def && vh->def->bp;
            for (int k = 0; k < 2; k++) {
                const char *fx = ok ? ak_bp_string(vh->def->bp, k ? "FirePFX" : "SmokePFX", NULL) : NULL;
                const char *mk = ok ? ak_bp_string(vh->def->bp, k ? "FireMarker" : "SmokeMarker", NULL) : NULL;
                bool want = ok && fx && *fx && hf < (k ? 0.33f : 0.66f);   /* [assumed] the thresholds are the effects' names */
                f32 T[12], at[3] = { vh->pos[0], vh->pos[1], vh->pos[2] };
                if (want && mk && *mk && ak_vehicle_marker(vh, m, mk, T)) { at[0] = T[3]; at[1] = T[7]; at[2] = T[11]; }
                ride_fx(p, &p->veh_fx[v][k], want, fx, at, NULL, vh->vel);
            }
            /* engines: EnginePFX at EngineCount markers "eng", "eng01", ... (the muzzles' naming [assumed]) along each marker's +Z,
               while someone drives [assumed] */
            const char *ef = ok ? ak_bp_string(vh->def->bp, "EnginePFX", NULL) : NULL;
            s32 ne = ok ? ak_bp_int(vh->def->bp, "EngineCount", 1) : 0; if (ne > 4) ne = 4;
            for (s32 k = 0; k < 4; k++) {
                char nm[8]; if (k) snprintf(nm, sizeof nm, "eng%02d", (int)k); else memcpy(nm, "eng", 4);
                f32 T[12] = { 0 }; bool want = ok && ef && *ef && k < ne && vh->driver >= 0 && ak_vehicle_marker(vh, m, nm, T);
                f32 at[3] = { T[3], T[7], T[11] }, fw[3] = { -T[2], -T[6], -T[10] };   /* (the marker's own +Z in the game's axes) */
                ride_fx(p, &p->eng_fx[v][k], want, ef, at, fw, vh->vel);
            }
            /* boost trails (traced, 089AF4B0 when a flyer is made): BoostPFX at BoostMarkers (at most 6) markers "trail01".."trail06"
               (hashes 0xC0638E87 + i), each held on the model [assumed: shown while it boosts - what switches them is not found] */
            const char *bf = ok ? ak_bp_string(vh->def->bp, "BoostPFX", NULL) : NULL;
            s32 nb = ok ? ak_bp_int(vh->def->bp, "BoostMarkers", 0) : 0; if (nb > 6) nb = 6;
            for (s32 k = 0; k < 6; k++) {
                char nm[8]; snprintf(nm, sizeof nm, "trail%02d", (int)k + 1);
                f32 T[12] = { 0 }; bool want = ok && bf && *bf && k < nb && vh->driver >= 0 && vh->boosting && ak_vehicle_marker(vh, m, nm, T);
                f32 at[3] = { T[3], T[7], T[11] }, fw[3] = { -T[2], -T[6], -T[10] };
                ride_fx(p, &p->boost_fx[v][k], want, bf, at, fw, vh->vel);
            }
        }
        {   static int pt = -1; if (pt < 0) pt = ak_setting_int("AK_PICKUP_TEST", 0);   /* tests: a soldier's drop 4 m ahead at 1 s */
            if (pt && p->frame_no == 60) { f32 f[3] = { p->aim[0], 0, p->aim[2] }, fl = sqrtf(f[0] * f[0] + f[2] * f[2]) + 1e-6f;
                f32 q[3] = { p->ch.pos[0] + f[0] / fl * 4, p->ch.pos[1], p->ch.pos[2] + f[2] / fl * 4 }; drop_pickups(p, p->look.bp, q, -1); drop_pickups(p, p->look.bp, q, -1); } }
        ak_pfx_update(p->pfx, dt);
        {   static ak_pfx_light pl[64]; static f32 l7[64 * 7]; u32 n = ak_pfx_lights(p->pfx, pl, 64);   /* the effects' lights on the models (R.1) */
            for (u32 i = 0; i < n; i++) { memcpy(&l7[i * 7], pl[i].pos, 12); memcpy(&l7[i * 7 + 3], pl[i].rgb, 12); l7[i * 7 + 6] = pl[i].radius; }
            ak_scene_set_dyn_lights(l7, n);
            if (ak_setting_int("AK_DEBUG_DYN_LIGHTS", 0) && n && p->frame_no % 10 == 0) AK_INFO("light", "%u effect lights; first at %.1f %.1f %.1f rgb %.2f %.2f %.2f r %.1f", n, pl[0].pos[0], pl[0].pos[1], pl[0].pos[2], pl[0].rgb[0], pl[0].rgb[1], pl[0].rgb[2], pl[0].radius); }
        {   static int dump = -2; if (dump == -2) dump = ak_setting_int("AK_PFX_DUMP", -1);   /* tests: the live particles by type, every 6 frames from that frame */
            if (dump >= 0 && (s32)p->frame_no >= dump && (s32)p->frame_no < dump + 60 && (p->frame_no - (u32)dump) % 6 == 0)
                for (u32 t = 0; t < p->pfx_lib.ntype; t++) {
                    u32 n = 0; f32 a0 = 9, a1 = 0, c[3] = { 0, 0, 0 }, sp = 0;
                    for (u32 i = 0; i < p->pfx->np; i++) { const ak_pfx_particle *q = &p->pfx->p[i]; if (p->pfx->em[q->em].def->sys->type != &p->pfx_lib.type[t]) continue; n++; if (q->age < a0) a0 = q->age; if (q->age > a1) a1 = q->age;
                        for (int k = 0; k < 3; k++) c[k] += q->pos[k]; }
                    if (!n) continue;
                    for (int k = 0; k < 3; k++) c[k] /= (f32)n;
                    for (u32 i = 0; i < p->pfx->np; i++) { const ak_pfx_particle *q = &p->pfx->p[i]; if (p->pfx->em[q->em].def->sys->type != &p->pfx_lib.type[t]) continue;
                        f32 d = sqrtf((q->pos[0] - c[0]) * (q->pos[0] - c[0]) + (q->pos[1] - c[1]) * (q->pos[1] - c[1]) + (q->pos[2] - c[2]) * (q->pos[2] - c[2])); if (d > sp) sp = d; }
                    AK_INFO("pfx", "%u %s: %u, age %.2f..%.2f, spread %.2f m, centre %.2f %.2f %.2f (game)", p->frame_no, p->pfx_lib.type[t].name, n, a0, a1, sp, c[0], c[1], c[2]);
                } }
    }
    p->pfx_shots = p->bolts.shots; p->pfx_impacts = p->bolts.impacts; p->bolts.pfx_impacts = p->pfx != NULL;
    {   int td = ak_setting_int("AK_TEST_HURT", 0);                         /* tests: damage per second to the soldier */
        if (td && p->alive) { p->target[0].health -= (f32)td * dt; if (p->target[0].health <= 0) { p->target[0].health = 0; p->target[0].alive = false; } } }
    /* who fell this frame: a ticket each, the kill to whoever shot last */
    for (u32 i = 0; i < nt; i++) {
        if (!(alive_before[i] && !p->target[i].alive)) continue;
        if (i >= NP(p)) { prop_destroyed(p, i - NP(p)); continue; }
        if (i >= NV(p)) { turret_destroyed(p, i - NV(p)); continue; }
        if (i >= NS(p)) { vehicle_destroyed(p, m, i - NS(p)); continue; }
        if (p->target[i].last_attacker == 0 && i != 0) p->kills++;
        if (i < 64) p->tally_deaths[i]++;
        {   s32 a = p->target[i].last_attacker; if (a >= 0 && a < 64 && (u32)a < NS(p) && p->target[a].team != p->target[i].team) p->tally_kills[a]++; }
        if (p->target[i].last_attacker == 0 && i != 0 && p->target[i].team != p->target[0].team) {   /* the profile's counters (08A62C70) */
            if (hero_of(p, (s32)i)) p->stat_add[46]++;                    /* [assumed: the kill message's flag bit 0 = the victim a hero] */
            if (hero_of(p, 0)) p->stat_add[47]++;                         /* [assumed: the table 0x08C2B3A4 = the heroes] - "kills as a hero" */
        }
        {   s32 a = p->target[i].last_attacker; ak_play_hero *h = hero_of(p, a);      /* a hero's kill heals it (HeroHealthAddPerKill) */
            if (h && ak_game_mode != 3 && p->target[a].alive && p->target[a].team != p->target[i].team) {   /* (08982634: not in hero CTF) */
                ak_target *ht = &p->target[a]; ht->health += h->per_kill * h->health; if (ht->health > h->health) ht->health = h->health; } }
        drop_pickups(p, i == 0 ? p->look.bp : p->bot[i - 1].look.bp, p->target[i].feet, (s32)i);
        AK_VERBOSE("death", "unit %u (team %d) down at %.1f %.1f %.1f, by unit %d", i, p->target[i].team, p->target[i].feet[0], p->target[i].feet[1], p->target[i].feet[2], (int)p->target[i].last_attacker);
        if (i == 0) player_down(p);
        else {
            ak_play_bot *b = &p->bot[i - 1]; b->alive = false; b->dead_t = 0; b->state = PLAY_IDLE; b->death_clip = p->death_clips[(s32)(rnd(&b->seed) * 4.0f) & 3];
            if (p->have_cq) ak_conquest_killed(&p->rules, &p->match, b->team);
            if (b->uspawn >= 0 && p->have_script) { const typeof(p->uspawn[0]) *u = &p->uspawn[b->uspawn];   /* its spawner's 10006 */
                ak_script_raise(&p->script, u->ev, u->nev, 10006, u->id, script_sink, p); }
        }
    }
    p->health = p->target[0].health;
    for (int j = 0; j < 32; j++) {                                            /* pickups: collected, or gone after their Timer */
        __typeof__(p->pickup[0]) *q = &p->pickup[j]; if (!q->alive) continue;
        const __typeof__(p->pickup_def[0]) *d = &p->pickup_def[q->kind];
        q->t += dt; q->spin += dt * 3.0f;                                     /* [assumed] a slow turn */
        if (q->t >= d->timer + d->fade) { q->alive = false;   /* (measured: an untouched one lasts 10.7 s - Timer 10 + FadeTime 0.75) */ ride_fx(p, &q->fx, false, NULL, NULL, NULL, NULL); continue; }
        ride_fx(p, &q->fx, true, d->pfx, q->pos, NULL, NULL);
        if (q->t < d->delay) continue;
        /* who takes it (traced, the pickup class 0x8015):
           - Health and HealthAmmo look every 0.25 s (089F90A0, 0x08AEF488; 089F91A0 / 089F9408) for the first unit of any side
             alive, on foot, below its maximum health and within EffectiveRadius; health + Capacity points up to the maximum
             (089F8F60);
           - Ammo, HealthAmmo and Stamina, every frame once InitialDelay has run (089F51CC -> 089F5400 / 089F544C), the first unit
             alive with health above 0, on foot, within EffectiveRadius (089F5794: the squared distance against +140), not the one
             that dropped it (+0x118), that needs it: Ammo / HealthAmmo a weapon whose spare clips (spare / clip) are fewer than
             its MaxClips, or an explosive below its count (089F5A24 -> 0898582C / 08A19C3C / 08A19BF0); Stamina below its maximum
             (089F5944, vfuncs +344 / +348); the claim is the message 0x8072, the reply 0x8073 (HealthAmmo: the health too).
           [the ammunition: below, traced; 089F5858's test (a
           vfunc +112 and +195 / a table lookup) is taken as "a soldier"; only the player has stamina in Aurek] */
        bool used = false, look = (q->look_t -= dt) <= 0;
        if (look) q->look_t = 0.25f;
        for (u32 u = 0; u < NS(p) && !used; u++) {
            ak_target *t = &p->target[u];
            if (!t->alive || t->health <= 0 || (u == 0 ? (p->in_veh >= 0 || p->in_turret >= 0) : p->bot[u - 1].veh >= 0)) continue;
            f32 dx = t->feet[0] - q->pos[0], dy = t->feet[1] - q->pos[1], dz = t->feet[2] - q->pos[2];
            if (dx * dx + dy * dy + dz * dz > d->radius * d->radius) continue;
            f32 maxh = u == 0 ? p->max_health : t->max_health;
            for (int t2 = 0; t2 < 2; t2++) if (p->hero[t2].unit == (s32)u) maxh = p->hero[t2].health;
            bool heal = (q->kind == 0 || q->kind == 3) && look && t->health < maxh;
            ak_weapon *w = u == 0 ? (p->armed ? &p->weapon : NULL) : (p->bot[u - 1].weapon.def ? &p->bot[u - 1].weapon : NULL);
            s32 *gl = u == 0 ? (p->gren_ok ? &p->gren_left : NULL) : (p->bot[u - 1].gren_kind >= 0 ? &p->bot[u - 1].gren_left : NULL);
            s32 gmax = !gl ? 0 : u == 0 ? p->gren_max : p->ai_gren_ammo[(int)p->bot[u - 1].gren_kind];
            bool short_w = w && w->def && w->def->clip > 0 && w->def->clips > 0 && w->spare / w->def->clip < w->def->clips;
            bool short_g = gl && *gl < gmax;
            bool claim = (s32)u != q->from && (((q->kind == 1 || q->kind == 3) && (short_w || short_g)) || (q->kind == 2 && u == 0 && p->stamina < p->stamina_max));
            if (!heal && !claim) continue;
            f32 cap = q->kind == 3 ? d->cap2 : d->cap;
            if ((q->kind == 0 || q->kind == 3) && t->health < maxh) { t->health += d->cap; if (t->health > maxh) t->health = maxh; if (u == 0) p->health = t->health; }
            /* the ammunition (089F5BA8 -> 08985954): N = Capacity + 0.5 (Ammo's +0x94, HealthAmmo's +0x98) whole clips to each weapon,
               one at a time while its spare clips are fewer than MaxClips (08A19C3C / 08A19BB4); items (explosives) +N, at most their
               count (+0x54 = min(+0x50, +0x54 + N)) [assumed: only the weapons that take clips - the flag 0x20 at +0x16C not read] */
            s32 nclips = (s32)(cap + 0.5f);
            if ((q->kind == 1 || q->kind == 3) && short_w)
                for (s32 k = 0; k < nclips && w->spare / w->def->clip < w->def->clips; k++) w->spare += w->def->clip;
            if ((q->kind == 1 || q->kind == 3) && short_g) { *gl += nclips; if (*gl > gmax) *gl = gmax; }
            if (q->kind == 2 && u == 0) { p->stamina += d->cap; if (p->stamina > p->stamina_max) p->stamina = p->stamina_max; }
            used = true;
        }
        if (used) { p->pickups_taken++; q->alive = false; ride_fx(p, &q->fx, false, NULL, NULL, NULL, NULL); if (d->sfx) ak_audio_play(d->sfx, q->pos, false); }
    }
    /* falling out of the world */
    if (p->alive && p->ch.pos[1] < -400.0f) ak_play_damage(p, 1e6f);
    for (u32 i = 0; i < p->nbots; i++) if (p->bot[i].alive && p->bot[i].veh < 0 && p->bot[i].ch.pos[1] < -400.0f) {
        p->target[1 + i].alive = false; p->bot[i].alive = false; p->bot[i].dead_t = 0; if (p->have_cq) ak_conquest_killed(&p->rules, &p->match, p->bot[i].team); }
    /* the level script (game/ak_script.h): its timers, its queue, what it sends to the game's objects */
    if (ak_setting_int("AK_LOG_VEH", 0) && p->frame_no % 30 == 0)          /* (tests: each live vehicle's place once a second) */
        for (u32 v = 0; v < p->nveh; v++) if (p->veh[v].alive) { const ak_target *tg = &p->target[VT(p, v)]; AK_INFO("vpos", "%u %u %s %.2f %.2f %.2f box %d %.2f %.2f %.2f h %.2f %.2f %.2f alive %d lock %d", p->frame_no, v + 1, p->veh[v].def->name, p->veh[v].pos[0], p->veh[v].pos[1], p->veh[v].pos[2], tg->boxed, tg->box_c[0], tg->box_c[1], tg->box_c[2], tg->box_h[0], tg->box_h[1], tg->box_h[2], tg->alive, p->lock); }
    for (u32 k = 0; k < p->nt62; k++) if (p->t62[k].t >= 0 && (p->t62[k].t -= dt) < 0 && p->have_script)   /* a speech line said: its event 12 */
        ak_script_raise(&p->script, p->t62[k].ev, p->t62[k].nev, 12, p->t62[k].id, script_sink, p);
    for (u32 k = 0; k < p->nsfx; k++) {                                   /* the script's effect places */
        typeof(p->sfx[0]) *e = &p->sfx[k];
        if (!e->on) { if (e->h) { ak_pfx_follow(p->pfx, e->h, NULL, NULL, NULL, false); e->h = 0; } continue; }
        static const f32 zero[3] = { 0, 0, 0 };
        if (e->h && ak_pfx_follow(p->pfx, e->h, e->pos, NULL, zero, true)) continue;
        e->h = ak_pfx_play(p->pfx, e->fx, e->pos, NULL); if (e->h < 0) e->h = 0; else ak_pfx_follow(p->pfx, e->h, e->pos, NULL, zero, true);
    }
    if (p->have_script && p->cut >= 0) {                                   /* the cut-scene's timed groups (CTEV type 4) */
        const typeof(p->cuts[0]) *cu = &p->cuts[p->cut]; f32 nt = p->cut_t + dt;
        while (p->cut_gev < cu->ngev && (cu->gev[p->cut_gev].t <= nt || nt >= cu->len)) {
            s32 g = cu->gev[p->cut_gev++].g; if (ak_setting_int("AK_DEBUG_SCRIPT", 0)) AK_INFO("script", "cut-scene %s: group %d", cu->name, g);
            ak_script_fire(&p->script, g, 0x3E7, script_sink, p);
            if (p->cut < 0 || &p->cuts[p->cut] != cu) break; }             /* (a group that stopped or changed the scene) */
    }
    if (p->have_script && p->cut >= 0 && (p->cut_t += dt) >= p->cuts[p->cut].len) {   /* the cut-scene's end: its group */
        s32 g = p->cuts[p->cut].group; p->cut = -1; if (g >= 0) ak_script_fire(&p->script, g, 0x3E7, script_sink, p); }
    if (p->hud_timer_on && p->hud_timer > 0) p->hud_timer -= dt;            /* [assumed: it stops at 0 and stays until 0x8016] */
    if (p->have_script) { ak_script_update(&p->script, dt, false, script_sink, p); ak_script_cond(&p->script, script_test, script_sink, p);
        ak_script_regions_who(&p->script, region_who, script_sink, p);   /* (the player's craft counts: Space Alderaan's 18963 at the hangar's
                                                                         mouth fired as the original's player flew the X-Wing out, sa_h9) */
        f32 gp[3]; ak_from_game(p->in_veh >= 0 ? p->veh[p->in_veh].pos : p->ch.pos, gp);
        f32 eye[3] = { gp[0], gp[1] - 1.6f, gp[2] }, fw[3] = { -sinf(p->ch.yaw), 0, cosf(p->ch.yaw) };   /* (game axes: the body's facing) */
        ak_script_look(&p->script, dt, p->alive && p->in_veh < 0 ? eye : NULL, fw, look_clear, script_sink, p); }
    /* conquest: the posts, the tickets, the spawn wave */
    bool wave = false;
    if (p->have_cq) {
        ak_cq_soldier sol[1 + PLAY_MAX_BOTS];
        for (u32 i = 0; i < NS(p); i++) {
            const ak_character *c = i ? &p->bot[i - 1].ch : &p->ch;
            sol[i].team = p->target[i].team; sol[i].alive = p->target[i].alive; sol[i].weight = 1.0f; memcpy(sol[i].pos, c->pos, 12);
            if (i && p->bot[i - 1].veh >= 0) { sol[i].alive = p->bot[i - 1].alive; sol[i].weight = 0; }   /* drivers do not capture */
        }
        sol[0].alive = p->alive; sol[0].weight = p->capture_rate; if (p->in_veh >= 0) { memcpy(sol[0].pos, p->veh[p->in_veh].pos, 12); sol[0].weight = 0; }   /* drivers do not capture */
        wave = ak_conquest_update(&p->cq, &p->rules, &p->match, sol, NS(p), dt);
        commander_update(p, dt);
        for (u32 k = 0; k < p->match.nev; k++) {                              /* the posts' script events (captures) */
            const ak_post *po = &p->cq.post[p->match.ev[k].post];
            if (p->have_script) ak_script_raise(&p->script, po->ev, po->nev, p->match.ev[k].event, p->cq.post_id[p->match.ev[k].post], script_sink, p);
            if (p->match.ev[k].event == 10000 && p->alive && p->in_veh < 0 && p->match.post[p->match.ev[k].post].owner == p->team) {   /* (089EA3D0: taken with the player in it) */
                f32 dx = p->ch.pos[0] - po->pos[0], dy = p->ch.pos[1] - po->pos[1], dz = p->ch.pos[2] - po->pos[2];
                if (dx * dx + dy * dy + dz * dz <= p->rules.capture_radius * p->rules.capture_radius) p->stat_add[44]++;
            }
        }
        p->match.nev = 0;
        p->near_post = -1;
        for (u32 i = 0; i < p->cq.nposts && p->alive; i++) {
            f32 dx = p->ch.pos[0] - p->cq.post[i].pos[0], dy = p->ch.pos[1] - p->cq.post[i].pos[1], dz = p->ch.pos[2] - p->cq.post[i].pos[2];
            if (dx * dx + dy * dy + dz * dz <= p->rules.capture_radius * p->rules.capture_radius && !p->cq.post[i].disabled) p->near_post = (s32)i;
        }
    } else {                                                                  /* no posts: a wave every respawn delay */
        static f32 w; w += dt; if (w >= p->rules.respawn_delay) { w = 0; wave = true; }
    }
    if (p->have_ctf && (!p->have_cq || p->match.winner < 0)) {                /* capture the flag (game/ak_ctf.h) */
        ak_ctf_soldier cs[1 + PLAY_MAX_BOTS];
        for (u32 i = 0; i < NS(p); i++) {
            const ak_character *c = i ? &p->bot[i - 1].ch : &p->ch;
            memcpy(cs[i].pos, c->pos, 12); cs[i].side = p->target[i].team; cs[i].bot = i != 0;
            cs[i].alive = i ? p->bot[i - 1].alive : p->alive; cs[i].on_foot = i ? p->bot[i - 1].veh < 0 : p->in_veh < 0 && p->in_turret < 0;
        }
        ak_ctf_update(&p->ctf_map, &p->ctf, ak_game_mode, p->is_space, cs, NS(p), dt);
        if ((p->ctf.events & AK_CTF_EV_CAPTURE) && p->ctf.last_capturer == 0 && ak_game_mode != 5) p->stat_add[43]++;   /* (089EADD4, message 0x8082) */
        if (ak_game_mode == 5 && p->have_script) {                           /* the campaign's carried objects tell the script */
            if ((p->ctf.events & AK_CTF_EV_PICKUP) && p->ctf.last_flag >= 0) { u32 f = (u32)p->ctf.last_flag;
                ak_script_raise(&p->script, p->ctf_fev[f], p->ctf_nfev[f], 10012, p->ctf_map.flag[f].id, script_sink, p); }
            if ((p->ctf.events & AK_CTF_EV_CAPTURE) && p->ctf.last_base >= 0) { u32 b = (u32)p->ctf.last_base;
                ak_script_raise(&p->script, p->ctf_bev[b], p->ctf_nbev[b], 10004, p->ctf_map.base[b].id, script_sink, p); }
        }
        /* a dropped flag at rest in a kill box goes home 5 s after it settled (089F6658: on a planet, min(its timer, now + 5),
           D_08ADEAA8) [assumed: Aurek's dropped flag is at rest as dropped] */
        for (u32 f = 0; f < p->ctf_map.nflags; f++) { ak_ctf_flag *fl = &p->ctf.flag[f];
            if (fl->present && fl->carrier < 0 && fl->return_t > 0 && !p->is_space && in_kbox(p, fl->pos, NULL) && fl->return_t > p->ctf.time + 5.0f) fl->return_t = p->ctf.time + 5.0f; }
        if (p->ctf.events & AK_CTF_EV_CAPTURE) AK_INFO("ctf", "side %d captures (%d / %d)", p->ctf.last_side, p->ctf.score[0], p->ctf.score[1]);
        if (ak_setting_int("AK_DEBUG_CTF", 0) && p->frame_no % 600 == 0) {
            u32 g2 = 0, alive = 0, inv = 0; f32 best = 1e9f;
            for (u32 i = 0; i < p->nbots; i++) { const ak_play_bot *b = &p->bot[i]; if (!b->alive) continue; alive++; if (b->veh >= 0) inv++; if (b->goal == -2) g2++;
                for (u32 f = 0; f < p->ctf_map.nflags; f++) if (p->ctf_map.flag[f].side != b->team) { f32 dx = p->ctf.flag[f].pos[0] - b->ch.pos[0], dz = p->ctf.flag[f].pos[2] - b->ch.pos[2]; best = fminf(best, sqrtf(dx * dx + dz * dz)); } }
            AK_INFO("ctf", "%.0f s: %u bots alive, %u in vehicles, %u with a CTF goal, nearest to an enemy flag %.0f m", p->clock, alive, inv, g2, best); }
        if (ak_setting_int("AK_DEBUG_CTF", 0) && (p->ctf.events & (AK_CTF_EV_PICKUP | AK_CTF_EV_DROP | AK_CTF_EV_RETURN))) AK_INFO("ctf", "%.1f s: events %x (side %d)", p->clock, p->ctf.events, p->ctf.last_side);
        if (p->ctf.winner >= 0 && p->have_cq && p->match.winner < 0) p->match.winner = p->ctf.winner <= 1 ? p->ctf.winner : AK_CQ_NEUTRAL;
    }
    heroes_update(p, m, dt);
    droids_update(p, dt);
    pu_update(p, dt);
    kbox_update(p, dt);
    { f32 te = ak_setting_float("AK_TEST_END_AT", 0);                  /* tests: the match ends at this time, the player's team winning with 7 tickets left */
      if (te > 0 && p->have_cq && p->match.winner < 0 && p->clock >= te) { p->match.tickets[p->team] = 7; p->match.tickets[1 - p->team] = 0; p->match.winner = p->team; } }
    bool playing = !p->have_cq || p->match.winner < 0;
    if (p->have_cq && p->rules.gc && !playing && !p->gc_result.done) {   /* 08972658: the winner's faction and the tickets left, for 08A3A5CC */
        p->gc_result.done = true; int w = p->match.winner;
        p->gc_result.winner_faction = w == 0 || w == 1 ? p->team_faction[w] : -1;
        for (int t = 0; t < 2; t++) { s32 v = p->match.tickets[t]; p->gc_result.left[p->team_faction[t] & 1] = v > 0 ? v : 0; }   /* by faction class */
        AK_INFO("gc", "battle over: winning faction %d, tickets left %d / %d", p->gc_result.winner_faction, p->gc_result.left[0], p->gc_result.left[1]);
    }
    /* the player's respawn (measured in the original): no wave - three seconds of the death camera, then the score board and
       the spawn map, and the soldier is back as soon as the player confirms [PARITY(1.10b): Aurek has no spawn screen yet - the
       confirm (cross) respawns at the spawn point chosen as before; AK_RESPAWN_AUTO=1 respawns without it] */
    static int autorsp = -1; if (autorsp < 0) autorsp = ak_setting_int("AK_RESPAWN_AUTO", 0);
    bool player_back = !p->alive && (p->menu_hold ? p->menu_spawn : p->dead_t >= 3.0f && (p->respawn_req || autorsp));
    p->menu_spawn = false;
    if (playing && (wave || player_back)) {
        if (player_back) {
            f32 sp[3], syaw = p->ch.yaw;
            const f32 *near = p->ch.pos;                                  /* (the spawn map's post: spawn there) */
            if (p->spawn_post >= 0 && p->have_cq && (u32)p->spawn_post < p->cq.nposts) near = p->cq.post[p->spawn_post].pos;
            bool ok = p->have_cq ? (p->match.tickets[p->team] != 0 && spawn_spot_at(p, p->team, near, near != p->ch.pos, &p->seed, sp, &syaw)) : false;
            if (!p->have_cq) { memcpy(sp, p->ch.pos, 12); ok = true; }
            if (ok) {
                hero_unmake_player(p, m);
                {   const char *ts = ak_setting_str("AK_TEST_SPAWN", NULL); f32 g[5];   /* (tests: the first spawn where the harness's original stood) */
                    if (ts && !p->deaths && sscanf(ts, "%f,%f,%f,%f,%f", &g[0], &g[1], &g[2], &g[3], &g[4]) == 5) { ak_from_game(g, sp); syaw = atan2f(-g[3], g[4]); } }
                ak_char_spawn(&p->ch, sp, syaw); p->alive = true; p->health = p->max_health; p->dead_t = 0; p->state = PLAY_IDLE; p->clip_t = 0;
                AK_VERBOSE("player", "spawn at %.1f %.1f %.1f (post %d)", sp[0], sp[1], sp[2], p->spawn_post);
                if (p->have_cq) { f32 bd = 1e30f; p->player_post = -1;       /* (the post it came in at: the nearest owned one) */
                    for (u32 i = 0; i < p->cq.nposts; i++) { if (p->match.post[i].owner != p->team) continue; const f32 *q = p->cq.post[i].pos; f32 dx = q[0] - sp[0], dz = q[2] - sp[2];
                        if (dx * dx + dz * dz < bd) { bd = dx * dx + dz * dz; p->player_post = (s32)i; } } }
                p->target[0].alive = true; p->target[0].health = p->max_health; p->target[0].last_attacker = -1;
                if (p->wsel) weapon_switch(p);                                /* a new soldier holds weapon 1, both full [assumed] */
                if (p->armed) { ak_weapon_give(&p->weapon, &p->wdef); p->weapon.team = p->team; p->weapon.owner = 0; p->weapon.heats = true; }
                if (p->armed2) { ak_weapon_give(&p->weapon2, &p->wdef2); p->weapon2.team = p->team; p->weapon2.owner = 0; p->weapon2.heats = true; }
                p->stamina = p->stamina_max; p->stamina_spent = false;   /* a new soldier */
            }
        }
    }
    if (playing) {
        /* the bots: with the wave, once their body has left (5 s).  The game's respawn delay - the time between spawn waves - is
           10 s (the option at 0x08B1BB48, read live in the harness; "Respawn delay is time between spawn waves"); fallen AI soldiers
           came back 5-15 s after dying in the original: the body's 5 s, then the next wave [PARITY(1.10c)] */
        /* Each AI soldier has a unit spawner (class 0x800D family, 0897E594): its timer starts at a random 5-15 s (0897F158, single
           player: 5 + random x 10) and is set again when its soldier falls (0897F230); at 0 the spawner makes a new one (0897E7B4).
           Measured on Hoth (harness): the first bots appear one by one 4.3-14 s after the match starts.  [assumed: the timer runs
           from the fall; the body's 5 s still has to pass] (AK_BOT_SPAWN_DELAY=0: the old way, with the spawn wave) */
        static int pace = -1; if (pace < 0) pace = ak_setting_int("AK_BOT_SPAWN_DELAY", 1) != 0;
        s32 army_cap = 0;
        if (p->campaign_army) {                                               /* the unit count less the player and the placed units in play */
            s32 live = 0; for (u32 i = p->narmy; i < p->nbots; i++) live += p->bot[i].alive;
            for (u32 v = 0; v < p->nveh; v++) live += p->vspawn[v].fixed && p->veh[v].alive && p->veh[v].driver < 0;
            army_cap = p->unit_count - 1 - live; if (army_cap < 0) army_cap = 0;
        }
        for (u32 i = 0; i < p->nbots; i++) {
            ak_play_bot *b = &p->bot[i];
            if (b->alive) { b->respawn_set = false; continue; }
            if (b->uspawn >= 0 || b->pilot) continue;                         /* (a scripted spawner's: once; a pilot only with its craft) */
            if (p->campaign_army && i < p->narmy && (s32)i >= army_cap) { b->respawn_set = false; continue; }   /* (the campaign: past the unit count) */
            if (p->have_cq && p->match.tickets[b->team] == 0) continue;
            if (!pace) { if (wave && b->dead_t >= 5.0f) bot_spawn(p, m, b, i); continue; }
            if (!b->respawn_set) { b->respawn_t = 5.0f + rnd(&b->seed) * 10.0f; b->respawn_set = true; }
            b->respawn_t -= dt;
            if (b->respawn_t <= 0 && b->dead_t >= 5.0f) bot_spawn(p, m, b, i);
        }
    }
}

void ak_play_counts(const ak_play *p, u32 alive[2], u32 total[2])
{
    alive[0] = alive[1] = total[0] = total[1] = 0;
    for (u32 i = 0; i < NS(p); i++) {
        int t = p->target[i].team & 1; total[t]++;
        if (i ? p->bot[i - 1].alive : p->alive) alive[t]++;                  /* (drivers count: their soldier is inside) */
    }
}

/* the soldier as the customisation menu shows him (its E_Anim_AppDisplay): his look in the idle clip at t, his weapon in his hands,
   placed by `world` (feet at its origin) */
/* a soldier's look standing (the menus' previews): its body posed in the idle clip, its head; head_only: the head mesh alone, unposed */
void ak_play_draw_look(ak_play *p, const ak_soldier_look *lk, const ak_model_set *m, ak_scene_models *ms, const ak_m4 *vp, const ak_m4 *world, f32 t, bool head_only)
{
    static f32 fb[64][12], head[1][12];
    ak_model_colours col = { lk->rgb1, lk->rgb2 };
    if (head_only) { if (lk->head >= 0) ak_scene_models_draw(ms, (u32)lk->head, vp, world, NULL, &col, NULL); return; }
    const ak_model *body = &m->models[lk->body];
    if (body->skeleton < 0 || m->skels[body->skeleton].nbones > 64) return;
    pose(m, lk, p->idle_clip, t, true, fb);
    ak_scene_models_draw(ms, (u32)lk->body, vp, world, (const f32 (*)[12])fb, &col, NULL);
    if (lk->head >= 0) { ak_soldier_head_matrix(body, &m->skels[body->skeleton], lk->head_bone, (const f32 (*)[12])fb, head[0]);
                         ak_scene_models_draw(ms, (u32)lk->head, vp, world, (const f32 (*)[12])head, &col, NULL); }
}
void ak_play_draw_figure(ak_play *p, const ak_model_set *m, ak_scene_models *ms, const ak_m4 *vp, const ak_m4 *world, f32 t)
{
    static f32 fb[64][12], head[1][12];
    const ak_soldier_look *lk = &p->look; const ak_model *body = &m->models[lk->body];
    if (body->skeleton < 0 || m->skels[body->skeleton].nbones > 64) return;
    pose(m, lk, p->idle_clip, t, true, fb);
    ak_model_colours col = { lk->rgb1, lk->rgb2 };
    ak_scene_models_draw(ms, (u32)lk->body, vp, world, (const f32 (*)[12])fb, &col, NULL);
    if (lk->head >= 0) { ak_soldier_head_matrix(body, &m->skels[body->skeleton], lk->head_bone, (const f32 (*)[12])fb, head[0]);
                         ak_scene_models_draw(ms, (u32)lk->head, vp, world, (const f32 (*)[12])head, &col, NULL); }
    f32 G[12], o[3] = { 0, 0, 0 };
    if (p->armed && p->wdef.model >= 0 && weapon_world(m, lk, (const f32 (*)[12])fb, o, 0, G)) {
        ak_m4 gw = { { G[0], G[4], G[8], 0,  G[1], G[5], G[9], 0,  G[2], G[6], G[10], 0,  G[3], G[7], G[11], 1 } };
        ak_m4 w2 = ak_m4_mul(world, &gw);
        ak_scene_models_draw(ms, (u32)p->wdef.model, vp, &w2, NULL, NULL, NULL);
    }
}
bool ak_play_weapon_matrix(const ak_play *p, const ak_model_set *m, f32 out[12])
{
    if (!p->armed || !p->posed) return false;
    return weapon_world(m, &p->look, (const f32 (*)[12])p->bones, p->ch.pos, p->ch.yaw, out);
}

static void camera_for(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch, f32 *fovy);

/* ------------------------------------------------------------------ cut-scenes */
bool ak_play_cut_view(const ak_play *p) { return p->ready && p->cut >= 0 && p->cuts[p->cut].camera && p->cut_t >= 1.53f; }
static ak_quat cq_mul(ak_quat a, ak_quat b) { return (ak_quat){ a.w * b.x + a.x * b.w + a.y * b.z - a.z * b.y, a.w * b.y - a.x * b.z + a.y * b.w + a.z * b.x,
                                                                a.w * b.z + a.x * b.y - a.y * b.x + a.z * b.w, a.w * b.w - a.x * b.x - a.y * b.y - a.z * b.z }; }
static void cq_rot(ak_quat q, const f32 *v, f32 *o)
{
    f32 tx = 2 * (q.y * v[2] - q.z * v[1]), ty = 2 * (q.z * v[0] - q.x * v[2]), tz = 2 * (q.x * v[1] - q.y * v[0]);
    o[0] = v[0] + q.w * tx + q.y * tz - q.z * ty; o[1] = v[1] + q.w * ty + q.z * tx - q.x * tz; o[2] = v[2] + q.w * tz + q.x * ty - q.y * tx;
}
/* the time on the scene's clips: the camera took the view 1.53 s after the scene began in the original (the 7.0 s to its group
   counted from the begin) [measured on cs_recondroid; the cause of the wait not traced] */
#define CUT_WAIT 1.53f
/* a scene clip's channel 0 at the scene's time, placed in the scene's frame: world place and turn (engine axes); false before the wait */
static bool cut_track(const ak_play *p, s32 clip, f32 t0, f32 out_pos[3], ak_quat *out_q)
{
    if (p->cut < 0 || clip < 0 || !p->mset || p->cut_t < CUT_WAIT) return false;
    const ak_anim_clip *c = &p->mset->clips[clip]; if (!c->nbones) return false;
    s16 par = -1; f32 bt[1][3] = { { 0, 0, 0 } }; ak_quat bq = { 0, 0, 0, 1 }; ak_skeleton sk; memset(&sk, 0, sizeof sk);
    sk.nbones = 1; sk.parent = &par; sk.bind_t = bt; sk.bind_q = &bq;
    ak_quat lq; f32 lt[1][3]; ak_anim_sample(c, &sk, p->cut_t - CUT_WAIT - t0, false, &lq, lt);
    const typeof(p->cuts[0]) *cu = &p->cuts[p->cut]; f32 r[3]; cq_rot(cu->sq, lt[0], r);
    for (int k = 0; k < 3; k++) out_pos[k] = cu->sp[k] + r[k];
    *out_q = cq_mul(cu->sq, lq); return true;
}
void ak_play_camera(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch, f32 *fovy)
{
    if (p->cut >= 0 && p->cuts[p->cut].camera) {                          /* a cut-scene's camera (its '_cam' clip) */
        const typeof(p->cuts[0]) *cu = &p->cuts[p->cut]; f32 st = p->cut_t - CUT_WAIT;
        s32 clip = cu->cam_clip; f32 hf = cu->hfov * 57.29578f, t0 = 0;   /* the events so far: the camera's clip and its width */
        for (u32 e = 0; e < cu->nev; e++) { const typeof(cu->ev[0]) *v = &cu->ev[e]; if (!v->cam || v->t > st) continue;
            if (v->type == 0 && v->anim < cu->nanim && v->t >= t0) { clip = cu->anim[v->anim]; t0 = v->t; }
            if (v->type == 2) { f32 u = v->a > 0 ? (st - v->t) / v->a : 1; if (u > 1) u = 1; hf = hf + (v->b - hf) * u; } }
        f32 cp[3]; ak_quat cq; bool have = false;
        if (clip < 0 && cu->nctr && st >= 0) {                              /* no camera clip: its tracks - the latest begun, its keys
                                                                                  between (straight / nlerp [assumed: the curve]) */
            u32 ti = 0; for (u32 k = 0; k < cu->nctr; k++) if (cu->ctr[k].t[0] <= st) ti = k;
            const typeof(cu->ctr[0]) *t = &cu->ctr[ti]; u32 a = 0; while (a + 1 < t->n && t->t[a + 1] <= st) a++;
            u32 b = a + 1 < t->n ? a + 1 : a; f32 u = b != a && t->t[b] > t->t[a] ? (st - t->t[a]) / (t->t[b] - t->t[a]) : 0; if (u > 1) u = 1;
            for (int k = 0; k < 3; k++) cp[k] = t->pos[a][k] + (t->pos[b][k] - t->pos[a][k]) * u;
            ak_quat qa = t->q[a], qb = t->q[b]; f32 dt2 = qa.x * qb.x + qa.y * qb.y + qa.z * qb.z + qa.w * qb.w, sg = dt2 < 0 ? -1.0f : 1.0f;
            cq = (ak_quat){ qa.x + (sg * qb.x - qa.x) * u, qa.y + (sg * qb.y - qa.y) * u, qa.z + (sg * qb.z - qa.z) * u, qa.w + (sg * qb.w - qa.w) * u };
            f32 ln = sqrtf(cq.x * cq.x + cq.y * cq.y + cq.z * cq.z + cq.w * cq.w); if (ln > 0) { cq.x /= ln; cq.y /= ln; cq.z /= ln; cq.w /= ln; }
            have = true;
        }
        if (have || cut_track(p, clip, t0, cp, &cq)) {
            f32 f[3]; cq_rot(cq, (f32[3]){ 0, 0, -1 }, f);
            eye->x = cp[0]; eye->y = cp[1]; eye->z = cp[2]; *yaw = atan2f(-f[0], -f[2]); *pitch = atan2f(f[1], sqrtf(f[0] * f[0] + f[2] * f[2]));
            *fovy = 2.0f * atanf(tanf(hf * 0.5f / 57.29578f) * (272.0f / 480.0f)); p->aim_ok = false; return;   /* (the width across the PSP's 480 x 272) */
        }
    }
    {   const char *fc = ak_setting_str("AK_DEBUG_CAM_AT", NULL);              /* tests: a fixed camera "x,y,z,yaw,pitch" over the match */
        if (fc && sscanf(fc, "%f,%f,%f,%f,%f", &eye->x, &eye->y, &eye->z, yaw, pitch) == 5) { *fovy = p->fov; p->aim_ok = false; return; } }
    {   int fv = ak_setting_int("AK_DEBUG_FOLLOW_VEH", 0);                  /* tests: ride behind vehicle N (whoever drives) */
        if (fv > 0 && (u32)fv <= p->nveh && p->in_veh < 0 && p->veh[fv - 1].alive) {
            p->in_veh = fv - 1; ak_play_camera(p, dt, eye, yaw, pitch, fovy); p->in_veh = -1; return; } }
    {   int lt = ak_setting_int("AK_DEBUG_LOOK_TURRET", 0);                 /* tests: look at turret N from beside it */
        if (lt > 0 && (u32)lt <= p->nturret) {
            const ak_turret *t = &p->turret[lt - 1]; f32 k = t->rad * 3.0f + 4.0f;
            f32 e[3] = { t->pos[0] + k * 0.8f, t->pos[1] + k * 0.6f, t->pos[2] + k * 0.8f }, c[3] = { t->pos[0], t->pos[1] + t->rad * 0.6f, t->pos[2] };
            f32 dx = c[0] - e[0], dy = c[1] - e[1], dz = c[2] - e[2];
            eye->x = e[0]; eye->y = e[1]; eye->z = e[2]; *yaw = atan2f(-dx, -dz); *pitch = atan2f(dy, sqrtf(dx * dx + dz * dz)); *fovy = 1.0f;
            memcpy(p->eye, e, 12); return; } }
    if (p->in_veh >= 0) {                                                     /* driving: the blueprint's chase camera (CameraBestZ back, CameraBestY up) */
        const ak_vehicle *vh = &p->veh[p->in_veh];
        f32 y = vh->yaw + vh->aim_yaw + ak_setting_float("AK_DEBUG_CAM_ORBIT", 0), pt = -vh->aim_pitch * 0.5f - 0.12f;
        f32 dsc = ak_setting_float("AK_DEBUG_CAM_SCALE", 1.0f), back = vh->def->cam_z * dsc, up = vh->def->cam_y * dsc;   /* (tests: pull the camera back) */
        if (vh->def->kind == AK_VEH_FLYER && vh->flying) {                     /* flying: behind along the flight path, looking past the nose */
            f32 cp = cosf(vh->pitch), fw[3] = { -sinf(y) * cp, sinf(vh->pitch), -cosf(y) * cp };
            f32 c[3] = { vh->pos[0] - fw[0] * back, vh->pos[1] + vh->def->height * 0.5f - fw[1] * back + up, vh->pos[2] - fw[2] * back };
            f32 la[3] = { vh->pos[0] + fw[0] * 40, vh->pos[1] + vh->def->height * 0.5f + fw[1] * 40, vh->pos[2] + fw[2] * 40 };
            if (p->cam_lock && p->fly_target >= 0 && (u32)p->fly_target < NV(p)) {   /* the camera lock: the view turns toward the target, the craft
                                                                                   flies on [assumed: the look point blended from the nose's by the lock's
                                                                                   blend - 089AB82C's angle work is not followed in full] */
                const ak_target *t = &p->target[p->fly_target]; f32 tp[3] = { t->feet[0], t->feet[1] + t->height * 0.5f, t->feet[2] };
                for (int k = 0; k < 3; k++) la[k] += (tp[k] - la[k]) * p->cam_lock_t;
            }
            *eye = ak_v3_make(c[0], c[1], c[2]);
            f32 lx = la[0] - c[0], ly = la[1] - c[1], lz = la[2] - c[2];
            *yaw = atan2f(-lx, -lz); *pitch = atan2f(ly, sqrtf(lx * lx + lz * lz)); *fovy = p->fov;
            p->aim_ok = true; p->eye[0] = c[0]; p->eye[1] = c[1]; p->eye[2] = c[2];
            p->aim[0] = -sinf(*yaw) * cosf(*pitch); p->aim[1] = sinf(*pitch); p->aim[2] = -cosf(*yaw) * cosf(*pitch);
            if (p->cam_lock_t > 0) memcpy(p->aim, fw, 12);                       /* (the guns stay on the nose) */
            return;
        }
        /* the game's ground vehicle camera (measured: harness RS_VIEW_LOG on Hoth's AT-ST and Boz Pity's T4B): the eye sits at
         * (0, CameraBestY, CameraBestZ) in the vehicle's own frame - its slope pitch and roll included - less CameraVelocityWeight x
         * the velocity (the T4B: 0.2 s of travel back at speed); walkers look at the ground CameraDistanceZ ahead (the AT-ST: 23.4
         * degrees down), tanks look along the hull */
        f32 cy = cosf(y), sy = sinf(y), cp = cosf(vh->pitch), sp = sinf(vh->pitch), cr = cosf(vh->roll), sr = sinf(vh->roll);
        f32 fw[3] = { -sy * cp, sp, -cy * cp }, r0[3] = { cy, 0, -sy }, u0[3] = { r0[1] * fw[2] - r0[2] * fw[1], r0[2] * fw[0] - r0[0] * fw[2], r0[0] * fw[1] - r0[1] * fw[0] };
        f32 up3[3]; for (int k = 0; k < 3; k++) up3[k] = u0[k] * cr - r0[k] * sr;
        /* the view's swing (the tank class's camera, func 089B2DC8; walkers' camera 089BFA98 has none): with its control at rest
         * each angle decays by angle x Damp x dt (not past 0), then moves by control x Rate x dt and is held within +-Max - yaw
         * on the turn control (CameraYawRate / YawDamp / MaxYaw: the speeder bikes swing up to 2 rad), pitch on the other
         * (PitchRate / PitchDamp / MaxPitch) [assumed: the game's channels 0 / 1 are the steer and the throttle, and the side] */
        if (vh->def->kind != AK_VEH_WALKER && dt > 0) {
            const ak_vehicle_def *d = vh->def; f32 *a2[2] = { &p->veh_cam_yaw, &p->veh_cam_pitch };
            f32 in[2] = { -vh->steer, -vh->throttle }, rate[2] = { d->cam_yaw_rate, d->cam_pitch_rate }, damp[2] = { d->cam_yaw_damp, d->cam_pitch_damp }, mx[2] = { d->cam_max_yaw, d->cam_max_pitch };
            for (int k = 0; k < 2; k++) {
                f32 v = *a2[k];
                if (in[k] == 0) { f32 n = v - v * dt * damp[k]; v = (v > 0) == (n > 0) ? n : 0; }
                v += in[k] * rate[k] * dt; if (v > mx[k]) v = mx[k]; if (v < -mx[k]) v = -mx[k]; *a2[k] = v;
            }
        }
        if (vh->def->kind == AK_VEH_WALKER) p->veh_cam_yaw = p->veh_cam_pitch = 0;
        {   f32 cs = cosf(p->veh_cam_yaw), sn = sinf(p->veh_cam_yaw), ct = cosf(p->veh_cam_pitch), st = sinf(p->veh_cam_pitch), f1[3], r1[3], u1[3];
            for (int k = 0; k < 3; k++) { f1[k] = fw[k] * cs - r0[k] * sn; r1[k] = r0[k] * cs + fw[k] * sn; }
            for (int k = 0; k < 3; k++) { u1[k] = up3[k] * ct - f1[k] * st; fw[k] = f1[k] * ct + up3[k] * st; r0[k] = r1[k]; up3[k] = u1[k]; } }
        /* blocked (089B2DC8 / 089BFA98, traced): a ray from the pivot (0, CameraMinY, CameraMinZ) out to the eye; the eye sits the
         * share t of the way out, t = (the hit's distance - 0.5) / the length (0x08AEEE30), held to 0..1; a nearer t is taken at
         * once, a farther one comes back at 1.0 a second (0x08AEEE34) */
        f32 best[3], mn[3], vw = vh->def->cam_vel_w;
        for (int k = 0; k < 3; k++) { best[k] = up3[k] * up - fw[k] * back - vh->vel[k] * vw; mn[k] = up3[k] * vh->def->cam_min_y * dsc - fw[k] * vh->def->cam_min_z * dsc; }
        f32 piv[3] = { vh->pos[0] + mn[0], vh->pos[1] + mn[1], vh->pos[2] + mn[2] }, want[3] = { best[0] - mn[0], best[1] - mn[1], best[2] - mn[2] };
        f32 wl2 = want[0] * want[0] + want[1] * want[1] + want[2] * want[2];
        if (wl2 > 0) {
            f32 wl = sqrtf(wl2), dir[3] = { want[0] / wl, want[1] / wl, want[2] / wl }, th = 1.0f; ak_col_hit h;
            if (ak_col_raycast(&p->col, piv, dir, wl, AK_COL_NOT_BODIES, &h)) { th = (h.t - 0.5f) / wl; if (th < 0) th = 0; if (th > 1) th = 1; }
            if (th < p->veh_cam_t) p->veh_cam_t = th;
            else if (th > p->veh_cam_t) { p->veh_cam_t += 1.0f * dt; if (p->veh_cam_t > th) p->veh_cam_t = th; if (p->veh_cam_t > 1) p->veh_cam_t = 1; }
        }
        f32 sc = p->veh_cam_t;
        *eye = ak_v3_make(piv[0] + want[0] * sc, piv[1] + want[1] * sc, piv[2] + want[2] * sc);
        if (vh->def->kind == AK_VEH_WALKER) {
            f32 look[3] = { vh->pos[0] + fw[0] * vh->def->cam_dz, vh->pos[1] + fw[1] * vh->def->cam_dz, vh->pos[2] + fw[2] * vh->def->cam_dz };
            f32 lx = look[0] - eye->x, ly = look[1] - eye->y, lz = look[2] - eye->z;
            *yaw = atan2f(-lx, -lz); pt = atan2f(ly, sqrtf(lx * lx + lz * lz));
        } else { *yaw = y + p->veh_cam_yaw; pt = vh->pitch + p->veh_cam_pitch; }   /* (along the hull, swung) */
        *pitch = pt + vh->aim_pitch; *fovy = p->fov;
        p->aim_ok = true; p->eye[0] = eye->x; p->eye[1] = eye->y; p->eye[2] = eye->z;
        p->aim[0] = -sinf(*yaw) * cosf(*pitch); p->aim[1] = sinf(*pitch); p->aim[2] = -cosf(*yaw) * cosf(*pitch);
        {   static u32 fr; if (ak_setting_int("AK_DEBUG_VEH_CAM", 0) && (fr++ % 30) == 0) {   /* tests: the eye against the vehicle */
                f32 d[3] = { eye->x - vh->pos[0], eye->y - vh->pos[1], eye->z - vh->pos[2] };
                AK_INFO("vcam", "%s: back %.2f up %.2f side %.2f, pitch %.2f deg, speed %.2f", vh->def->name, -(d[0] * fw[0] + d[1] * fw[1] + d[2] * fw[2]),
                        d[0] * up3[0] + d[1] * up3[1] + d[2] * up3[2], d[0] * r0[0] + d[2] * r0[2], *pitch * 57.29578f, sqrtf(vh->vel[0] * vh->vel[0] + vh->vel[2] * vh->vel[2])); } }
        return;
    }
    int fb = ak_setting_int("AK_DEBUG_FOLLOW_BOT", 0);                       /* tests: watch bot N over its shoulder */
    if (fb > 0 && (u32)fb <= p->nbots) {
        ak_character keep = p->ch; p->ch = p->bot[fb - 1].ch; p->ch.pitch = 0.1f;
        camera_for(p, dt, eye, yaw, pitch, fovy); p->ch = keep; return;
    }
    camera_for(p, dt, eye, yaw, pitch, fovy);
    if (p->zoom > 0 && p->wdef.bp) {                                          /* zoomed: the view narrows by the level's magnification */
        char k[24]; snprintf(k, sizeof k, "ZoomMagnification%d", p->zoom);
        f32 mag = ak_bp_float(p->wdef.bp, k, 1.0f);                         /* the game's camera: field of view / magnification (0x0896EC88) */
        if (mag > 1.0f) {   /* the game divides its "fov" (the angle across 480 x 272) and builds the projection from that:
                               the height follows through the tangent (func_0896EC88: camera +144 / +104) */
            f32 h = 2.0f * atanf(tanf(*fovy * 0.5f) * 480.0f / 272.0f) / mag;
            *fovy = 2.0f * atanf(tanf(h * 0.5f) * 272.0f / 480.0f);
        }
    }
}

static void camera_for(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch, f32 *fovy)
{
    if (p->in_turret >= 0 && !p->classic_cam) {                               /* manning a turret: behind and above its pivot, along the aim */
        f32 y = p->ch.yaw, pt = -p->ch.pitch, fwd[3] = { -sinf(y) * cosf(pt), sinf(pt), -cosf(y) * cosf(pt) };
        const ak_turret_def *td = p->turret[p->in_turret].def;               /* the blueprint's gunner camera: CameraBestZ back, CameraBestY up */
        f32 back = td->cam_z, up = td->cam_y, fl = sqrtf(fwd[0] * fwd[0] + fwd[2] * fwd[2]) + 1e-6f;
        f32 want[3] = { -fwd[0] / fl * back, up, -fwd[2] / fl * back }, wl = sqrtf(want[0] * want[0] + want[1] * want[1] + want[2] * want[2]);
        f32 dir[3] = { want[0] / wl, want[1] / wl, want[2] / wl }, lim = wl; ak_col_hit h;
        if (ak_col_raycast(&p->col, p->ch.pos, dir, wl, AK_COL_NOT_BODIES, &h)) lim = h.t - 0.3f;
        if (lim < 0.5f) lim = 0.5f;
        *eye = ak_v3_make(p->ch.pos[0] + dir[0] * lim, p->ch.pos[1] + dir[1] * lim, p->ch.pos[2] + dir[2] * lim);
        *yaw = y; *pitch = pt; *fovy = p->fov; p->aim_ok = true;
        p->eye[0] = eye->x; p->eye[1] = eye->y; p->eye[2] = eye->z;
        p->aim[0] = fwd[0]; p->aim[1] = fwd[1]; p->aim[2] = fwd[2];
        return;
    }
    f32 y = (p->single_stick ? p->view_yaw : p->ch.yaw) + ak_setting_float("AK_DEBUG_CAM_ORBIT", 0);    /* (orbit: tests look from the side) */
    f32 pt = p->classic_cam ? -p->ch.pitch * 0.6f : -p->ch.pitch;
    f32 sy = sinf(y), cy = cosf(y);
    f32 right[3] = { cy, 0, -sy };
    f32 fwd[3] = { -sy * cosf(pt), sinf(pt), -cy * cosf(pt) };
    f32 piv[3] = { p->ch.pos[0] + right[0] * p->pivot_x, p->ch.pos[1] + p->pivot_h, p->ch.pos[2] + right[2] * p->pivot_x };
    if (p->zoom > 0) {                                                       /* zoomed: the soldier's own view, from the head (see ak_play_camera) */
        f32 pt0 = -p->ch.pitch, fw[3] = { -sinf(y) * cosf(pt0), sinf(pt0), -cosf(y) * cosf(pt0) };
        f32 h[3]; memcpy(h, p->target[0].head, 12);
        if (h[0] == 0 && h[1] == 0 && h[2] == 0) { memcpy(h, p->ch.pos, 12); h[1] += 1.6f; }
        *eye = ak_v3_make(h[0] + fw[0] * 0.25f, h[1] + 0.05f + fw[1] * 0.25f, h[2] + fw[2] * 0.25f);
        *yaw = y; *pitch = pt0; *fovy = p->fov; p->aim_ok = true;
        p->eye[0] = eye->x; p->eye[1] = eye->y; p->eye[2] = eye->z; memcpy(p->aim, fw, 12);
        return;
    }
    f32 back = p->cam_back;
    f32 want[3] = { -fwd[0] * back + right[0] * p->cam_side, -fwd[1] * back + p->cam_up, -fwd[2] * back + right[2] * p->cam_side };
    f32 wl = sqrtf(want[0] * want[0] + want[1] * want[1] + want[2] * want[2]), dir[3] = { want[0] / wl, want[1] / wl, want[2] / wl };
    f32 limit = wl; ak_col_hit h;
    if (p->classic_cam) {
        /* the game's distance (measured, harness RS_VIEW_LOG, original controls): standing, 3 m from the pivot ("pull in close
         * dist"); running, it draws out at about "pull out rate" (1 m/s: +0.7 m in a 1 s run) toward the desired offset, and
         * once stopped it comes back in with a 0.75 s time constant (3.42 -> 3.25 m over 0.3 s, ending at 2.94) */
        f32 sp = sqrtf(p->ch.vel[0] * p->ch.vel[0] + p->ch.vel[2] * p->ch.vel[2]);
        if (p->cl_dist <= 0) p->cl_dist = p->pull_close;
        if (sp > 0.5f) p->cl_dist += p->pull_out_rate * dt; else p->cl_dist += (p->pull_close - p->cl_dist) * (1.0f - expf(-dt / 0.75f));
        if (p->cl_dist > wl) p->cl_dist = wl;
        if (p->cl_dist < p->pull_close) p->cl_dist = p->pull_close;
        limit = p->cl_dist;
    }
    if (ak_col_raycast(&p->col, piv, dir, limit, AK_COL_NOT_BODIES, &h)) limit = h.t - 0.3f;
    if (limit < 0.3f) limit = 0.3f;
    /* in at once (pull in rate), out slowly (pull out rate) */
    if (limit < p->cam_dist) p->cam_dist += (limit - p->cam_dist) * fminf(1.0f, p->pull_in_rate * dt);
    else p->cam_dist += (limit - p->cam_dist) * fminf(1.0f, p->pull_out_rate * dt * 4.0f);
    if (p->cam_dist > limit) p->cam_dist = limit;
    f32 sc = p->cam_dist / wl;
    *eye = ak_v3_make(piv[0] + want[0] * sc, piv[1] + want[1] * sc, piv[2] + want[2] * sc);
    if (p->classic_cam) {                                                    /* the game's camera: looks at a point ahead of the pivot */
        f32 lx = piv[0] + fwd[0] * 20.0f - eye->x, ly = piv[1] + fwd[1] * 20.0f - eye->y, lz = piv[2] + fwd[2] * 20.0f - eye->z;
        *yaw = atan2f(-lx, -lz); *pitch = atan2f(ly, sqrtf(lx * lx + lz * lz));
    } else { *yaw = y; *pitch = pt; }                                        /* over the shoulder: along the facing */
    *fovy = p->fov;
    p->aim_ok = true;
    p->eye[0] = eye->x; p->eye[1] = eye->y; p->eye[2] = eye->z;
    p->aim[0] = -sinf(*yaw) * cosf(*pitch); p->aim[1] = sinf(*pitch); p->aim[2] = -cosf(*yaw) * cosf(*pitch);
    if (p->single_stick) {                                                   /* the one-stick scheme fires along the soldier's facing */
        f32 by = p->ch.yaw, bp = -p->ch.pitch;
        p->aim[0] = -sinf(by) * cosf(bp); p->aim[1] = sinf(bp); p->aim[2] = -cosf(by) * cosf(bp);
    }
}

void ak_play_draw(ak_play *p, ak_scene_models *ms, const ak_model_set *m, const ak_m4 *vp, ak_scene_stats *st)
{
    if (!p->ready || !p->posed) return;
    memcpy(g_eye, p->eye, sizeof g_eye);
    if (p->cut >= 0 && p->cuts[p->cut].act_model >= 0) {                  /* the cut-scene's actor on its clip */
        f32 ap[3]; ak_quat aq;
        if (cut_track(p, p->cuts[p->cut].act_clip, 0, ap, &aq)) {
            f32 M[12], x = aq.x, y = aq.y, z = aq.z, w = aq.w;
            M[0] = 1 - 2 * (y * y + z * z); M[1] = 2 * (x * y - z * w); M[2] = 2 * (x * z + y * w); M[3] = ap[0];
            M[4] = 2 * (x * y + z * w); M[5] = 1 - 2 * (x * x + z * z); M[6] = 2 * (y * z - x * w); M[7] = ap[1];
            M[8] = 2 * (x * z - y * w); M[9] = 2 * (y * z + x * w); M[10] = 1 - 2 * (x * x + y * y); M[11] = ap[2];
            draw_part(ms, p->cuts[p->cut].act_model, M, vp, st);
        }
    }
    static f32 gun[12];
    ak_frustum fr = ak_frustum_from(vp);
    if (p->in_veh < 0 && p->in_turret < 0 && p->zoom == 0) {                  /* (zoomed: the view is the soldier's own) */
        draw_soldier(ms, m, &p->look, p->ch.pos, p->ch.yaw, (const f32 (*)[12])p->bones, vp, st);
        if (p->armed && p->alive && ak_play_weapon_matrix(p, m, gun)) draw_weapon(ms, m, &p->wdef, gun, vp, st);
    }
    for (u32 v = 0; v < p->nveh; v++) {                                       /* the vehicles (and their turrets) */
        const ak_vehicle *vh = &p->veh[v];
        if (!vh->def || !(vh->alive || (vh->def->kind == AK_VEH_WALKER ? vh->dead_t < 8.0f : vh->dead_t < (vh->def->kind == AK_VEH_FLYER ? 4.98f : 4.75f)))) continue;   /* (wrecks: 4.75 s, flyers 4.98 s, measured) */
        f32 M[12]; ak_vehicle_matrix(vh, M);
        f32 r = m->models[vh->def->model].radius, mn[3] = { M[3] - r, M[7] - r, M[11] - r }, mx[3] = { M[3] + r, M[7] + r, M[11] + r };
        if (ak_setting_int("AK_LOG_VEH", 0) > 1 && p->frame_no % 30 == 0) AK_INFO("vdraw", "%u %s model %d (%s, %u parts, skin %d, box %.2f %.2f %.2f / %.2f %.2f %.2f, skel %d) at %.2f %.2f %.2f in view %d posed %d", v + 1, vh->def->name, vh->def->model, m->models[vh->def->model].name, m->models[vh->def->model].nparts, m->models[vh->def->model].skin != NULL, m->models[vh->def->model].bmin[0], m->models[vh->def->model].bmin[1], m->models[vh->def->model].bmin[2], m->models[vh->def->model].bmax[0], m->models[vh->def->model].bmax[1], m->models[vh->def->model].bmax[2], m->models[vh->def->model].skeleton, M[3], M[7], M[11], ak_frustum_aabb(&fr, mn, mx), vh->posed);
        if (!ak_frustum_aabb(&fr, mn, mx)) continue;
        if (ak_setting_int("AK_TEST_VDRAW", 0)) draw_part(ms, vh->def->model, M, vp, st); else
        {   ak_m4 gw = { { M[0], M[4], M[8], 0,  M[1], M[5], M[9], 0,  M[2], M[6], M[10], 0,  M[3], M[7], M[11], 1 } };
            ak_scene_models_draw(ms, (u32)vh->def->model, vp, &gw, vh->posed ? (const f32 (*)[12])vh->bones : NULL, NULL, st); }
        f32 T[12];
        if (!vh->def->enclosed && vh->def->sit_clip >= 0 && *vh->def->seat && vh->driver >= 0) {   /* the rider of an open vehicle */
            const ak_soldier_look *lk = vh->driver == 0 ? &p->look : (u32)(vh->driver - 1) < p->nbots ? &p->bot[vh->driver - 1].look : NULL;
            f32 SM[12]; static f32 rb[64][12];
            if (lk && lk->body >= 0 && ak_vehicle_marker(vh, m, vh->def->seat, SM)) {
                pose(m, lk, vh->def->sit_clip, 0, true, rb);
                const ak_model *body = &m->models[lk->body];
                if (body->skeleton >= 0) {
                    ak_m4 w = { { SM[0] * S, SM[4] * S, SM[8] * S, 0,  SM[1] * S, SM[5] * S, SM[9] * S, 0,  SM[2] * S, SM[6] * S, SM[10] * S, 0,  SM[3], SM[7], SM[11], 1 } };
                    ak_model_colours col = { lk->rgb1, lk->rgb2 };
                    ak_scene_models_draw(ms, (u32)lk->body, vp, &w, (const f32 (*)[12])rb, &col, st);
                    if (lk->head >= 0) { static f32 hm[1][12]; ak_soldier_head_matrix(body, &m->skels[body->skeleton], lk->head_bone, (const f32 (*)[12])rb, hm[0]);
                        ak_scene_models_draw(ms, (u32)lk->head, vp, &w, (const f32 (*)[12])hm, &col, st); }
                }
            }
        }
        if (vh->def->turret_model >= 0 && ak_vehicle_marker(vh, m, vh->def->turret_marker, T))   /* the turret (the AT-AT's head) */
            draw_weapon(ms, m, &(ak_weapon_def){ .model = vh->def->turret_model }, T, vp, st);
    }
    for (u32 i = 0; i < p->nturret; i++) {                                    /* the turrets: base, pivot, barrel (or the wreck) */
        const ak_turret *t = &p->turret[i]; f32 r = t->rad + 4.0f;
        f32 mn[3] = { t->pos[0] - r, t->pos[1] - r, t->pos[2] - r }, mx[3] = { t->pos[0] + r, t->pos[1] + r, t->pos[2] + r };
        if (!ak_frustum_aabb(&fr, mn, mx)) continue;
        if (!t->alive) { draw_part(ms, t->def->wreck >= 0 ? t->def->wreck : t->def->base, t->base, vp, st); continue; }
        f32 P[12], B[12]; ak_turret_pivot(t, m, P); ak_turret_barrel(t, m, B);
        draw_part(ms, t->def->base, t->base, vp, st); draw_part(ms, t->def->pivot, P, vp, st); draw_part(ms, t->def->barrel, B, vp, st);
    }
    for (u32 i = 0; i < p->nbots; i++) {
        const ak_play_bot *b = &p->bot[i];
        if ((!b->alive && b->dead_t > 5.0f) || b->veh >= 0) continue;            /* the fallen leave the field 5 s after dying (measured: 4.8-5.0 s); drivers are inside */
        f32 mn[3] = { b->ch.pos[0] - 1, b->ch.pos[1] - 0.2f, b->ch.pos[2] - 1 }, mx[3] = { b->ch.pos[0] + 1, b->ch.pos[1] + 2.2f, b->ch.pos[2] + 1 };
        if (!ak_frustum_aabb(&fr, mn, mx)) continue;
        draw_soldier(ms, m, &b->look, b->ch.pos, b->ch.yaw, (const f32 (*)[12])b->bones, vp, st);
        if (b->alive && b->weapon.def && weapon_world(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, gun)) draw_weapon(ms, m, b->weapon.def, gun, vp, st);
    }
    for (u32 f = 0; p->have_ctf && f < p->ctf_map.nflags; f++) {           /* the flags */
        const ak_ctf_flag *fl = &p->ctf.flag[f]; if (!fl->present || p->flag_model[f] < 0) continue;
        f32 M[12] = { 1, 0, 0, fl->pos[0],  0, 1, 0, fl->pos[1],  0, 0, 1, fl->pos[2] };
        if (fl->carrier >= 0) {   /* carried: on the carrier's marker hashing 0x7E779B80 - "BackPack" (h31 of the lower-cased name; the
                                     flag's back-attached clip then hangs it); 1 m above the feet when the body has none */
            s32 c = fl->carrier; bool ok = false;
            if (c == 0) ok = marker_world(m, &p->look, (const f32 (*)[12])p->bones, p->ch.pos, p->ch.yaw, "BackPack", M);
            else if ((u32)(c - 1) < p->nbots) { const ak_play_bot *cb = &p->bot[c - 1]; ok = marker_world(m, &cb->look, (const f32 (*)[12])cb->bones, cb->ch.pos, cb->ch.yaw, "BackPack", M); }
            if (!ok) M[7] += 1.0f;
        }
        /* skinned (v2, 4 bones), flapping: its own clip, the back-attached one while carried (PARITY 6.2) */
        const ak_model *fm = &m->models[p->flag_model[f]]; static f32 fb[8][12]; static ak_quat lq[8]; static f32 lt[8][3];
        s32 fc = p->flag_clip[fl->carrier >= 0 ? 1 : 0]; if (fc < 0) fc = p->flag_clip[0];
        if (fm->skeleton >= 0 && m->skels[fm->skeleton].nbones <= 8 && fc >= 0) {
            const ak_skeleton *sk = &m->skels[fm->skeleton];
            ak_anim_sample(&m->clips[fc], sk, p->clock, true, lq, lt); ak_skeleton_pose_matrices(sk, lq, (const f32 (*)[3])lt, fb);
            ak_m4 w = { { M[0], M[4], M[8], 0,  M[1], M[5], M[9], 0,  M[2], M[6], M[10], 0,  M[3], M[7], M[11], 1 } };
            ak_scene_models_draw(ms, (u32)p->flag_model[f], vp, &w, (const f32 (*)[12])fb, NULL, st);
        } else draw_part(ms, p->flag_model[f], M, vp, st);
    }
    static ak_vtx bv[(AK_MAX_BOLTS + AK_MAX_IMPACTS + AK_MAX_POSTS + PLAY_MAX_BOOMS + 4) * AK_BEAM_VERTS];
    ak_gfx_set_transform(NULL);
    u32 n = 0;
    if (p->have_cq) {                                                         /* the command posts: the game's cone of light and the owner's logo */
        static const char *logo[4] = { "republic_logo_blue", "cis_logo_blue", "alliance_logo_blue", "empire_logo_blue" };
        s32 cone = ak_models_find(m, "cone_of_light");
        /* the logo turns by its clip "logo_spin_move" (one bone, a turn in 3.133 s that eases: 24 degrees at 0.26 s, 88 at 0.78 s) */
        f32 spin = p->clock * 6.2831853f / 3.133f;
        static const ak_anim_clip *spin_clip; static const ak_model_set *spin_of;
        if (spin_of != m) { spin_of = m; spin_clip = NULL; for (u32 k = 0; k < m->nclips; k++) if (m->clips[k].name && !strcmp(m->clips[k].name, "logo_spin_move")) spin_clip = &m->clips[k]; }
        if (spin_clip && spin_clip->duration > 0 && spin_clip->nbones == 1) {
            s16 par = -1; f32 bt[1][3] = { { 0, 0, 0 } }; ak_quat bq = { 0, 0, 0, 1 }, q[1]; f32 t[1][3];
            ak_skeleton one; memset(&one, 0, sizeof one); one.nbones = 1; one.parent = &par; one.bind_t = bt; one.bind_q = &bq; one.world_t = bt; one.world_q = &bq;
            ak_anim_sample(spin_clip, &one, fmodf(p->clock, spin_clip->duration), true, q, t);
            spin = 2.0f * atan2f(q[0].y, q[0].w);
        }
        for (u32 i = 0; i < p->cq.nposts; i++) {
            if (p->cq.post[i].disabled) continue;
            const ak_post_state *ps = &p->match.post[i];
            /* the colour (089E9A24, PARITY 6.4): the owner's - ours 0.314 0.424 0.702, theirs 0.702 0.184 0.184, nobody's white
               (DAT_08C2B860 / 870 / 880, read in the running original) - on the cone and the logo alike */
            static const f32 tc[3][4] = { { 0.314f, 0.424f, 0.702f, 1 }, { 0.702f, 0.184f, 0.184f, 1 }, { 1.0f, 1.0f, 1.0f, 1 } };   /* ours, theirs, neutral */
            int side = ps->owner < 2 ? (ps->owner == p->team ? 0 : 1) : 2;
            static f32 glow = -1; if (glow < 0) glow = ak_setting_float("AK_POST_GLOW", ak_setting_int("AK_CLASSIC", 0) ? 0.0f : 0.75f);   /* the light's strength: 0 unlit .. 1 full */   /* PARITY(R.6) */
            f32 col[4]; for (int c = 0; c < 4; c++) col[c] = tc[side][c] * (c < 3 ? glow : 1.0f);
            const f32 *pp = p->cq.post[i].pos;
            ak_gfx_set_tint(col);
            ak_scene_force_pipe(AK_PIPE_ADD);                                  /* the hologram is light: additive, unlit */
            f32 logo_a = 1.0f;
            if (cone >= 0) {
                /* the cone's clip (089E9A24): cone_of_light_animCap (2.4 s) plays forward while the post's amount (seconds of capture,
                   the full being its capture time) is under the clip's length (the clip record's +0x14, read live: 2.400), else
                   backwards, then cone_of_light_rest once it has run out [assumed: a switch keeps the clip's time] */
                static f32 cap_t[AK_MAX_POSTS], last_clock = -1; static s8 cap_dir[AK_MAX_POSTS];
                static s32 capc = -2, restc = -2; static const ak_model_set *cm;
                if (cm != m) { cm = m; capc = restc = -1; for (u32 k = 0; k < m->nclips; k++) if (m->clips[k].name) {
                    if (!strcmp(m->clips[k].name, "cone_of_light_animCap")) capc = (s32)k;
                    if (!strcmp(m->clips[k].name, "cone_of_light_rest")) restc = (s32)k; } last_clock = -1; memset(cap_t, 0, sizeof cap_t); memset(cap_dir, 0, sizeof cap_dir); }
                static f32 cdt_frame;                                  /* (the frame's step, taken at the first post drawn) */
                if (p->clock != last_clock) { f32 cdt = last_clock >= 0 ? p->clock - last_clock : 0; cdt_frame = cdt > 0 && cdt < 0.5f ? cdt : 0; last_clock = p->clock; }
                f32 step_here = cdt_frame;
                const ak_model *cmod = &m->models[cone]; bool posed = false; static f32 cb[16][12]; static ak_quat cq[16]; static f32 ct[16][3];
                static int ca = -1; if (ca < 0) ca = ak_setting_int("AK_CONE_ANIM", 1);
                if (ca && capc >= 0 && cmod->skeleton >= 0 && m->skels[cmod->skeleton].nbones <= 16) {
                    f32 dur = m->clips[capc].duration;
                    /* [assumed] a change of direction starts the clip over from its end (089E9930 plays it anew with the new flags) */
                    if (ps->progress < dur) { if (cap_dir[i] != 1) { cap_dir[i] = 1; cap_t[i] = 0; } cap_t[i] = fminf(cap_t[i] + step_here, dur); }
                    else if (cap_dir[i] != 0) { if (cap_dir[i] != -1) { cap_dir[i] = -1; cap_t[i] = dur; } cap_t[i] -= step_here; if (cap_t[i] <= 0) { cap_t[i] = 0; cap_dir[i] = 0; } }
                    /* the logo's alpha (08809AB8 -> the instance's +0xF8, beside its colour at +0xEC..F4, 08809B24): the capture clip's
                       progress when it runs backwards, 1 - it when forwards, 1 without the clip - it fades out as the cone opens, back in
                       as it folds */
                    logo_a = cap_dir[i] > 0 ? 1.0f - cap_t[i] / dur : cap_dir[i] < 0 ? 1.0f - cap_t[i] / dur : 1.0f;
                    {   static s8 seen[AK_MAX_POSTS]; if (ak_setting_int("AK_DEBUG_CONE", 0) && seen[i] != cap_dir[i] + 2) { seen[i] = (s8)(cap_dir[i] + 2);
                            AK_INFO("cone", "%.1f s: post %u amount %.2f -> %s at %.2f", p->clock, i, ps->progress, cap_dir[i] > 0 ? "capture clip forward" : cap_dir[i] < 0 ? "capture clip backwards" : "rest", cap_t[i]); } }
                    const ak_skeleton *sk = &m->skels[cmod->skeleton];
                    if (cap_dir[i] != 0) { ak_anim_sample(&m->clips[capc], sk, cap_t[i], false, cq, ct); posed = true; }
                    else if (restc >= 0) { ak_anim_sample(&m->clips[restc], sk, 0, false, cq, ct); posed = true; }
                    if (posed) ak_skeleton_pose_matrices(sk, cq, (const f32 (*)[3])ct, cb);
                }
                ak_m4 w; world_of(pp, p->cq.post[i].yaw, &w); ak_scene_models_draw(ms, (u32)cone, vp, &w, posed ? (const f32 (*)[12])cb : NULL, NULL, st); }
            if (ps->owner < 2) {
                s32 lg = ak_models_find(m, logo[p->team_faction[ps->owner] & 3]);
                if (lg >= 0 && logo_a < 1.0f) { f32 lc[4] = { col[0] * logo_a, col[1] * logo_a, col[2] * logo_a, col[3] * logo_a }; ak_gfx_set_tint(lc); }   /* (additive: the alpha scales the light) */
                if (lg >= 0) { f32 lp[3] = { pp[0], pp[1] + 1.6f, pp[2] };   /* 1.60 m over the post (the original's draws, harness RS_DRAW_ALL) */ ak_m4 w; world_of(lp, spin + (f32)i, &w); ak_scene_models_draw(ms, (u32)lg, vp, &w, NULL, NULL, st); }
            }
            ak_scene_force_pipe(-1);
        }
        ak_gfx_set_tint(NULL);
    }
    for (int j = 0; j < 32; j++) {                                            /* dropped pickups: their Skin, turning [assumed] */
        const __typeof__(p->pickup[0]) *q = &p->pickup[j]; if (!q->alive || p->pickup_def[q->kind].model < 0) continue;
        ak_m4 w; world_of(q->pos, q->spin, &w); ak_scene_models_draw(ms, (u32)p->pickup_def[q->kind].model, vp, &w, NULL, NULL, st);
    }
    for (u32 u = 0; u < NS(p); u++) {                                          /* saber heroes: the blade, up the hilt's axis */
        const ak_play_hero *h = NULL; for (int t = 0; t < 2; t++) if (p->hero[t].unit == (s32)u && p->hero[t].saber) h = &p->hero[t];
        if (!h || !p->target[u].alive || h->wdef.model < 0) continue;
        f32 G[12];
        if (u == 0) { if (p->in_veh >= 0 || !ak_play_weapon_matrix(p, m, G)) continue; }
        else { const ak_play_bot *b = &p->bot[u - 1]; if (b->veh >= 0 || !weapon_world(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, G)) continue; }
        /* the hilt's top end, along the hilt (it lies slanted in its own model space; the "blade" marker sits off it) */
        f32 lp[3], ld[3]; ak_model_long_axis(&m->models[h->wdef.model], lp, ld);
        f32 a[3], c[3], ax[3], al;
        for (int r = 0; r < 3; r++) ax[r] = G[r * 4] * ld[0] + G[r * 4 + 1] * ld[1] + G[r * 4 + 2] * ld[2];
        al = sqrtf(ax[0] * ax[0] + ax[1] * ax[1] + ax[2] * ax[2]);
        if (al < 1e-6f) continue;
        for (int r = 0; r < 3; r++) { a[r] = G[r * 4] * lp[0] + G[r * 4 + 1] * lp[1] + G[r * 4 + 2] * lp[2] + G[r * 4 + 3]; c[r] = a[r] + ax[r] / al * h->wdef.length * S; }
        if (n + AK_BEAM_VERTS <= sizeof bv / sizeof bv[0]) n += ak_beam(bv + n, a, c, h->wdef.thickness * 0.25f * S, p->eye, h->wdef.colour | 0xFF000000u, 255, 255);
        {   /* the motion fan: the blade's last 8 positions (newest first), drawn from them */
            int t = (int)(h - p->hero); __typeof__(p->fan[0]) *f = &p->fan[t];
            if (f->unit != (s32)u) { f->unit = (s32)u; f->n = 0; f->last = p->clock; }
            f32 el = p->clock - f->last; f->last = p->clock;
            for (u32 k = 0; k < f->n; k++) f->age[k] += el;
            if (el > 0 || !f->n) {
                for (u32 k = (f->n < 8 ? f->n : 7); k > 0; k--) { memcpy(f->base[k], f->base[k - 1], 12); memcpy(f->tip[k], f->tip[k - 1], 12); f->age[k] = f->age[k - 1]; }
                memcpy(f->base[0], a, 12); memcpy(f->tip[0], c, 12); f->age[0] = 0; if (f->n < 8) f->n++;
            }
            static ak_vtx fv[8 * 6 * 6];
            f32 dx = a[0] - p->eye[0], dz = a[2] - p->eye[2];
            u32 nf = dx * dx + dz * dz < 60.0f * 60.0f ? ak_saber_fan(fv, sizeof fv / sizeof fv[0], (const f32 (*)[3])f->base, (const f32 (*)[3])f->tip, f->age, f->n, 0.12f, h->wdef.colour) : 0;
            if (nf) ak_gfx_draw_immediate(AK_PIPE_BEAM, NULL, fv, nf);
        }
    }
    n += ak_bolts_vertices(&p->bolts, p->eye, bv + n, sizeof bv / sizeof bv[0] - n);
    for (u32 i = 0; i < AK_MAX_PROJ; i++) {                                    /* torpedoes, missiles, bombs: a bright streak and a glow (their PFX come later) */
        const ak_proj *q = &p->projs.p[i]; if (!q->alive) continue;
        if (n + AK_BEAM_VERTS + 6 > sizeof bv / sizeof bv[0]) break;
        f32 sp = sqrtf(q->vel[0] * q->vel[0] + q->vel[1] * q->vel[1] + q->vel[2] * q->vel[2]), k = sp > 1 ? fminf(6.0f, sp * 0.05f) / sp : 0;
        f32 a[3] = { q->pos[0] - q->vel[0] * k, q->pos[1] - q->vel[1] * k, q->pos[2] - q->vel[2] * k };
        n += ak_beam(bv + n, a, q->pos, 0.35f, p->eye, q->d->colour, 0, 255);
        n += ak_flash(bv + n, q->pos, 0.9f, p->eye, q->d->colour, 220);
    }
    for (u32 i = 0; i < p->nboom; i++) {                                      /* wrecks: a fireball (the game's PFX comes with the particles) */
        const ak_play_boom *b = &p->boom[i]; if (b->t > 1.2f) continue;
        f32 k = b->t / 1.2f;
        n += ak_flash(bv + n, b->pos, 2.5f + 6.0f * k, p->eye, 0xFFFF9030u, (u8)(255 * (1.0f - k)));
    }
    if (ak_setting_int("AK_DEBUG_BEAMS", 0) && p->armed) {                   /* tests: the weapon's bolt across, slanting and end-on, in front of the eye */
        f32 f[3] = { p->aim[0], p->aim[1], p->aim[2] }, r[3] = { -f[2], 0, f[0] }, rl = sqrtf(r[0] * r[0] + r[2] * r[2]);
        r[0] /= rl; r[2] /= rl;
        f32 u[3] = { r[1] * f[2] - r[2] * f[1], r[2] * f[0] - r[0] * f[2], r[0] * f[1] - r[1] * f[0] }, w = p->wdef.thickness * 0.5f / 0.75f;
        for (int b = 0; b < 3; b++) {
            f32 c0[3], a[3], c[3];
            for (int k = 0; k < 3; k++) c0[k] = p->eye[k] + f[k] * 2.5f + (b < 2 ? r[k] * (b - 1) * 0.9f + u[k] * 0.2f : 0);
            for (int k = 0; k < 3; k++) {
                f32 d = b == 0 ? u[k] : b == 1 ? (u[k] + r[k]) * 0.7071f + f[k] * 0.3f : f[k];
                a[k] = c0[k] - d * p->wdef.length * 0.3f; c[k] = c0[k] + d * p->wdef.length * 0.3f;
            }
            n += ak_beam(bv + n, a, c, w, p->eye, p->wdef.colour, 160, 255);
        }
    }
    if (n) ak_gfx_draw_immediate(AK_PIPE_BEAM, NULL, bv, n);
    if (p->pfx && p->pfx_tex && ak_pfx_live(p->pfx)) {                        /* particle effects (R.6): camera-facing quads */
        static ak_vtx pv[AK_PFX_MAX_PARTICLES * 6];
        f32 r[3] = { vp->m[0], vp->m[4], vp->m[8] }, u[3] = { vp->m[1], vp->m[5], vp->m[9] };   /* the view's right / up (rows of the view-projection) */
        f32 rl = sqrtf(r[0] * r[0] + r[1] * r[1] + r[2] * r[2]), ul = sqrtf(u[0] * u[0] + u[1] * u[1] + u[2] * u[2]);
        if (rl > 1e-6f && ul > 1e-6f) {
            for (int k = 0; k < 3; k++) { r[k] /= rl; u[k] /= ul; }
            ak_pfx_run run[64]; u32 nrun = 0;
            ak_pfx_vertices(p->pfx, r, u, pv, sizeof pv / sizeof pv[0], run, 64, &nrun);
            static const f32 nofog[2] = { 0, 0 }; ak_gfx_set_fog_range(nofog);   /* (the original draws them unfogged, alpha-tested, depth-tested without writes) */
            for (u32 k = 0; k < nrun; k++) ak_gfx_draw_immediate(run[k].additive ? AK_PIPE_ADD : AK_PIPE_BLEND, p->pfx_tex, pv + run[k].first, run[k].count);
            ak_gfx_set_fog_range(NULL);
        }
    }
}

/* the point the lock-on holds (the chest, then the head once held "lock on to head time"); false = no lock */
bool ak_play_lock_point(const ak_play *p, f32 out[3])
{
    if (p->lock < 0 || !p->target[p->lock].alive) return false;
    const ak_target *t = &p->target[p->lock];
    if (p->lock_t >= p->lock_head_time) memcpy(out, t->head, 12); else { memcpy(out, t->feet, 12); out[1] += 1.1f * S; }
    return true;
}

bool ak_play_entity_hidden(const ak_play *p, u32 id)
{
    if (!p->ready) return false;
    for (u32 k = 0; k < p->nobj; k++) if (p->obj[k].link == id) return !p->obj[k].active;
    return false;
}

void ak_play_warmup(ak_play *p, const ak_model_set *m, int frames)
{
    if (frames <= 0) return;
    ak_character keep = p->ch; ak_input none; memset(&none, 0, sizeof none);
    p->warming = true;
    for (int i = 0; i < frames; i++) { ak_play_update(p, m, &none, 1.0f / 60.0f); p->ch = keep; }
    p->warming = false;
    AK_INFO("play", "test warm-up: the world ran %d frames before the player", frames);
}
