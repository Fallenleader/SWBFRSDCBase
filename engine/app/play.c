/* Aurek - play mode (see play.h) */
#include <math.h>
#include <string.h>
#include <stdio.h>
#include "app/play.h"
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
#define NT(p) (NV(p) + (p)->nturret)            /* every target: soldiers, vehicles, then turrets */
#define TT(p, t) (NV(p) + (t))                  /* turret t's target */
static void turrets_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp);
#define VT(p, v) (1 + (p)->nbots + (v))        /* vehicle v's target */

static void heroes_init(ak_play *p, const ak_blueprints *bp, const ak_model_set *m);
static void droids_update(ak_play *p, f32 dt);
/* each soldier near a droid: health (the traced pulse, above) and ammo (the ammo droid, class 0x8010: its pulse - AmmunitionDroid
   PulseLength 1 s, EffectiveRadius 8 m - is not traced: here it gives back one clip a pulse, up to a full load) */
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
        f32 maxh = u == 0 ? p->max_health : ak_bp_float(p->bot[u - 1].look.bp, "Health", 100.0f);
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
                }
            }
            if (d->ammo && ammo && !gave_a && w && w->def && w->def->clip > 0 && d2 <= p->droids.ammo_radius * p->droids.ammo_radius) {
                s32 full = w->def->clip * (w->def->clips > 0 ? w->def->clips - 1 : 0);
                if (w->spare < full) { w->spare += w->def->clip; if (w->spare > full) w->spare = full; gave_a = true; }
            }
        }
    }
}

static void heroes_drain(ak_play *p, f32 dt);
static void vehicles_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a);
static bool vehicle_make(ak_play *p, u32 v);
static f32 rnd(u32 *s) { *s = *s * 1664525u + 1013904223u; return (f32)(*s >> 8) / 16777216.0f; }
static f32 wrap(f32 a) { while (a > 3.14159265f) a -= 6.2831853f; while (a < -3.14159265f) a += 6.2831853f; return a; }

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

static void draw_soldier(ak_scene_models *ms, const ak_model_set *m, const ak_soldier_look *lk, const f32 *pos, f32 yaw, const f32 (*bones)[12],
                         const ak_m4 *vp, ak_scene_stats *st)
{
    static f32 head[1][12];
    const ak_model *body = &m->models[lk->body];
    if (body->skeleton < 0) return;
    ak_m4 w; world_of_scaled(pos, yaw, S, &w);
    ak_model_colours col = { lk->rgb1, lk->rgb2 };
    ak_scene_models_draw(ms, (u32)lk->body, vp, &w, bones, &col, st);
    if (lk->head >= 0) {
        ak_soldier_head_matrix(body, &m->skels[body->skeleton], lk->head_bone, bones, head[0]);
        ak_scene_models_draw(ms, (u32)lk->head, vp, &w, (const f32 (*)[12])head, &col, st);
    }
}

static void draw_weapon(ak_scene_models *ms, const ak_model_set *m, const ak_weapon_def *wd, const f32 G[12], const ak_m4 *vp, ak_scene_stats *st)
{
    if (wd->model < 0) return;
    ak_m4 gw = { { G[0], G[4], G[8], 0,  G[1], G[5], G[9], 0,  G[2], G[6], G[10], 0,  G[3], G[7], G[11], 1 } };
    ak_scene_models_draw(ms, (u32)wd->model, vp, &gw, NULL, NULL, st);
}

/* a standing soldier's target shape from its pose: body capsule from the feet, head sphere at the head */
static void body_target(const ak_model_set *m, const ak_soldier_look *lk, const f32 (*bones)[12], const f32 *pos, f32 yaw, ak_target *t)
{
    memcpy(t->feet, pos, 12); t->height = 1.45f * S; t->radius = 0.35f * S; t->head_radius = 0.2f * S;
    f32 h[12]; const ak_model *body = &m->models[lk->body];
    ak_soldier_head_matrix(body, &m->skels[body->skeleton], lk->head_bone, bones, h);
    f32 s = sinf(yaw), c = cosf(yaw), lx = h[3] * S, ly = (h[7] + 0.1f) * S, lz = h[11] * S;
    t->head[0] = pos[0] + c * lx + s * lz; t->head[1] = pos[1] + ly; t->head[2] = pos[2] - s * lx + c * lz;
}

/* the clip state from the body's motion */
static int motion_state(const ak_character *ch, const ak_char_params *cp, bool was_ground, f32 *land_t, f32 dt, f32 *hs_out)
{
    f32 sy = sinf(ch->yaw), cy = cosf(ch->yaw);
    f32 fwd = -sy * ch->vel[0] - cy * ch->vel[2], side = cy * ch->vel[0] - sy * ch->vel[2], hs = sqrtf(fwd * fwd + side * side);
    int st;
    if (!ch->on_ground) st = ch->vel[1] > 0 && ch->jumped ? PLAY_JUMP : PLAY_FALL;
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
static bool spawn_spot(ak_play *p, int team, const f32 *near, u32 *seed, f32 *pos, f32 *yaw)
{
    u32 cand[AK_MAX_POSTS], n = 0;
    for (u32 i = 0; i < p->cq.nposts; i++) if (p->match.post[i].owner == team && p->cq.post[i].has_spawn[team] && !p->cq.post[i].absent) cand[n++] = i;
    if (!n) return false;
    u32 pick = cand[(u32)(rnd(seed) * n) % n];
    if (near && rnd(seed) < 0.5f) {
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

static void bot_spawn(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 idx)
{
    f32 pos[3], yaw = 0;
    if (!(p->have_cq && spawn_spot(p, b->team, b->ch.pos, &b->seed, pos, &yaw))) {
        /* no post to spawn at: a navigation node near the player's start */
        if (!p->have_nav || !p->nav.nnode) return;
        u32 n = (u32)(rnd(&b->seed) * p->nav.nnode) % p->nav.nnode; memcpy(pos, p->nav.node[n].pos, 12);
        f32 gy; if (ak_char_ground_below(&p->col, pos, 5.0f, &gy)) pos[1] = gy;
    }
    if (b->hero) { b->look = b->base_look; b->hero = false; }               /* a fallen hero comes back as its soldier */
    ak_char_spawn(&b->ch, pos, yaw);
    b->alive = true; b->dead_t = 0; b->state = PLAY_IDLE; b->clip_t = rnd(&b->seed); b->land_t = 0; b->was_ground = true;
    b->goal = -1; b->npath = b->path_i = 0; b->holding = false; b->enemy = -1; b->think_t = rnd(&b->seed) * 0.3f; b->goal_t = 0;
    b->stuck_t = 0; memcpy(b->stuck_pos, pos, 12); b->veh = b->want_veh = -1; b->rev_t = 0; b->vstucks = 0; b->veh_cool = 0;
    ak_target *t = &p->target[1 + idx];
    t->health = ak_bp_float(b->look.bp, "Health", 100.0f); t->headshot_mult = ak_bp_float(b->look.bp, "Headshot multiplier", 4.0f);
    t->alive = true; t->team = b->team; t->last_attacker = -1;
    if (p->team_armed[b->team]) { ak_weapon_give(&b->weapon, &p->team_bdef[b->team]); b->weapon.team = b->team; b->weapon.owner = (s32)(1 + idx); }
    if (poseable(m, &b->look)) { pose(m, &b->look, p->idle_clip, b->clip_t, true, b->bones); body_target(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, t); }
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

bool ak_play_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a, const char *body, const f32 *start)
{
    memset(p, 0, sizeof *p);
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
    p->have_cq = ak_conquest_load(l, &p->cq);
    p->is_space = ak_space_load(l, &p->space) && p->space.nobj > p->space.nhangar;   /* space maps: attack runs on capital ships (Hoth has 2 hangar runs only) */
    for (u32 i = 0; i < AK_MAX_OBJECTIVES; i++) p->obj_unit[i] = -1;
    p->team = ak_setting_int("AK_TEAM", ak_faction_team(p->look.faction) + 1) == 2;
    p->team_faction[p->team] = p->look.faction; p->team_faction[1 - p->team] = p->look.faction ^ 1;
    ak_cq_rules_default(&p->rules);
    if (p->have_cq) ak_conquest_start(&p->cq, &p->rules, &p->match);
    p->max_health = p->health = ak_bp_float(p->look.bp, "Health", 100.0f); p->alive = true; p->near_post = -1;
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
    if (post < 0 && p->have_nav) { s32 n = ak_nav_nearest(&p->nav, start, 1e6f); if (n >= 0) memcpy(sp, p->nav.node[n].pos, 12); }
    if (ak_char_ground_below(&p->col, sp, 50.0f, &gy)) sp[1] = gy;
    ak_char_spawn(&p->ch, sp, syaw);
    static const char *idle[] = { "Human_Rifle_Stand_Idle_lookaround2", "Human_Rifle_Stand_Idle_checkweap", NULL };
    static const char *run[] = { "Human_Rifle_Stand_RunForward", NULL }, *back[] = { "Human_Rifle_Stand_RunBackward", "Human_Rifle_Stand_WalkBackward", NULL };
    static const char *left[] = { "Human_Rifle_Stand_RunForward_left", NULL }, *right[] = { "Human_Rifle_Stand_RunForward_Right", NULL };
    static const char *sprint[] = { "Human_Rifle_Stand_sprint_full", NULL };
    static const char *jump[] = { "Human_Rifle_jump", NULL }, *fall[] = { "Human_Rifle_JumpFall", NULL }, *land[] = { "Human_Rifle_Jump_Land_Soft", "Human_Rifle_Jump_Land", NULL };
    static const char *d1[] = { "Human_Rifle_Stand_Death_backwards", NULL }, *d2[] = { "Human_Rifle_Stand_Death_left", NULL }, *d3[] = { "Human_Rifle_Stand_Death_right", NULL };
    p->clip[PLAY_IDLE] = find_clip(m, idle); p->clip[PLAY_RUN] = find_clip(m, run); p->clip[PLAY_BACK] = find_clip(m, back);
    p->clip[PLAY_LEFT] = find_clip(m, left); p->clip[PLAY_RIGHT] = find_clip(m, right); p->clip[PLAY_JUMP] = find_clip(m, jump);
    p->clip[PLAY_FALL] = find_clip(m, fall); p->clip[PLAY_LAND] = find_clip(m, land); p->clip[PLAY_SPRINT] = find_clip(m, sprint);
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
    p->idle_clip = p->clip[PLAY_IDLE]; p->death_clips[0] = find_clip(m, d1); p->death_clips[1] = find_clip(m, d2); p->death_clips[2] = find_clip(m, d3);
    /* the alert set (the game's generic_male table, set 5: rifle raised - when shooting or locked on) and its shoot layer; the
       relaxed body clips stay the ones above (set 4 is the same family) */
    memcpy(p->aclip, p->clip, sizeof p->aclip); p->shoot_clip = -1;
    {   const ak_anim_table *gt = ak_anim_table_find(m, "generic_male");
        static const int row[PLAY_NCLIPS] = { [PLAY_IDLE] = 0, [PLAY_RUN] = 3, [PLAY_BACK] = 4, [PLAY_LEFT] = 5, [PLAY_RIGHT] = 6, [PLAY_JUMP] = 8, [PLAY_FALL] = 12, [PLAY_LAND] = 10, [PLAY_SPRINT] = 7 };
        if (gt && gt->sets > 5 && gt->cols > 1 && gt->rows > 12) {
            for (int k = 0; k < PLAY_NCLIPS; k++) if (AK_ATAB(gt, 5, row[k], 0) >= 0) p->aclip[k] = AK_ATAB(gt, 5, row[k], 0);
            p->shoot_clip = AK_ATAB(gt, 5, 0, 1);
        }
    }
    /* camera: the game's numbers, or the over-the-shoulder framing */
    const ak_bp_object *cam = ak_bp_find(bp, "Camera", "humanoid 3rd person");
    p->classic_cam = ak_setting_str("AK_CAM_STYLE", "modern")[0] == 'c';
    p->psp_buttons = ak_setting_str("AK_BUTTONS", "psp")[0] != 'l';            /* psp (default) or legacy */
    p->pull_out_rate = ak_bp_float(cam, "pull out rate", 1.0f); p->pull_in_rate = ak_bp_float(cam, "pull in rate", 15.0f);
    if (p->classic_cam) {
        p->fov = (f32)ak_bp_int(cam, "fov", 60) * 3.14159265f / 180.0f;
        p->pivot_h = ak_bp_float(cam, "pivot height stand", 1.5f); p->pivot_x = ak_bp_float(cam, "pivot x offset", 0.3f);
        p->cam_back = -ak_bp_float(cam, "desired z offset", -7.0f); p->cam_up = -ak_bp_float(cam, "desired y offset", -0.5f);   /* game y points down */
        p->cam_side = ak_bp_float(cam, "desired x offset", -0.2f);
    } else {
        p->fov = ak_setting_float("AK_FOV", 55.0f) * 3.14159265f / 180.0f;
        p->pivot_h = 1.55f; p->pivot_x = 0.0f; p->cam_back = 1.8f; p->cam_up = 0.05f; p->cam_side = 0.6f;
    }
    p->pivot_h *= S; p->pivot_x *= S; p->cam_back *= S; p->cam_up *= S; p->cam_side *= S;
    p->cam_dist = p->cam_back;
    {   int ts = ak_setting_int("AK_TWIN_STICK", -1);
        p->twin_stick = ak_plat_has_right_stick() && ts != 0;                 /* -1 (the default) and 1: on where the device can */
        p->aim_yaw_speed = ak_setting_float("AK_AIM_SPEED", 3.2f); p->aim_pitch_speed = p->aim_yaw_speed * 0.7f;
        p->aim_curve = ak_setting_float("AK_AIM_CURVE", 2.0f); p->invert_y = ak_setting_int("AK_INVERT_Y", 0) != 0;
    }
    const ak_bp_object *ctl = ak_bp_find(bp, "Controls", "Humanoid");
    p->lock = -1; p->lock_range = ak_bp_float(ctl, "targeting range", 50.0f); p->lock_turn = ak_bp_float(ctl, "aim yaw speed", 3.5f);
    p->lock_head_time = ak_bp_float(ctl, "lock on to head time", 5.0f);
    const char *wname = ak_setting_str("AK_WEAPON", "BlasterRifle");
    p->armed = ak_weapon_def_load(bp, m, wname, p->look.faction, &p->wdef);
    if (p->armed) { ak_weapon_give(&p->weapon, &p->wdef); p->weapon.team = p->team; p->weapon.owner = 0; }
    {   ak_target *t = &p->target[0];
        t->health = p->health; t->headshot_mult = ak_bp_float(p->look.bp, "Headshot multiplier", 4.0f); t->alive = true; t->team = p->team; t->last_attacker = -1;
        memcpy(t->feet, p->ch.pos, 12); t->height = 1.45f * S; t->radius = 0.35f * S; t->head_radius = 0.2f * S; memcpy(t->head, p->ch.pos, 12); t->head[1] += 1.6f * S; }
    /* bots */
    p->sight = p->lock_range;
    {   /* the aim error: the weapon's AIWeapon_Accuracy_Normal (degrees; Weapon "Base": 5), unless AK_BOT_AIM says otherwise */
        const ak_bp_object *wb = ak_bp_find(bp, "Weapon", "Base");
        p->bot_aim = ak_setting_float("AK_BOT_AIM", wb ? ak_bp_float(wb, "AIWeapon_Accuracy_Normal", 5.0f) : 5.0f) * 3.14159265f / 180.0f; }
    p->bots_passive = ak_setting_int("AK_BOT_PASSIVE", 0) != 0;
    u32 want = (u32)ak_setting_int("AK_BOTS", 15); if (want > PLAY_MAX_BOTS) want = PLAY_MAX_BOTS;
    if (!p->have_nav || !p->nav.nnode) want = 0;
    if (want) {
        for (int t = 0; t < 2; t++) {
            team_classes(p, bp, m, t);
            p->team_armed[t] = ak_weapon_def_load(bp, m, wname, p->team_faction[t], &p->team_wdef[t]);
            /* in a bot's hands (the game's Weapon blueprint): Modifier_Bot_Damage scales the damage, Modifier_Bot_RateOfFire the time
             * between shots (RateOfFire is a time) - the rifles inherit Weapon "Base": 0.3 and 3 */
            p->team_bdef[t] = p->team_wdef[t];
            if (p->team_armed[t] && p->team_wdef[t].bp) {
                f32 md = ak_bp_float(p->team_wdef[t].bp, "Modifier_Bot_Damage", 1), mr = ak_bp_float(p->team_wdef[t].bp, "Modifier_Bot_RateOfFire", 1);
                if (!ak_setting_int("AK_BOT_GAME_MODIFIERS", 1)) md = mr = 1;
                p->team_bdef[t].dmg_infantry *= md; p->team_bdef[t].dmg_vehicle *= md; p->team_bdef[t].rate_of_fire *= mr;
            }
        }
        p->bot = AK_NEW(a, ak_play_bot, want);
        size_t ss = (size_t)p->nav.nnode * 12 + (size_t)p->nav.nlink * 12 + 4096;
        p->scratch.base = (u8 *)ak_arena_alloc(a, ss, 16); p->scratch.size = ss;
        if (!p->bot || !p->scratch.base) want = 0;
    }
    for (u32 i = 0; i < want; i++) {
        /* sides: alternate, starting with the enemy, so the player's side has one fewer */
        int team = (i % 2 == 0) ? 1 - p->team : p->team;
        if (!p->nklass[team]) continue;
        ak_play_bot *b = &p->bot[p->nbots]; memset(b, 0, sizeof *b);
        b->seed = 0x9E3779B9u * (i + 7);
        const char *k = p->klass[team][(u32)(rnd(&b->seed) * p->nklass[team]) % p->nklass[team]];
        if (!ak_soldier_look_make(bp, m, k, (int)(rnd(&b->seed) * 3) % 3, -1, -1, &b->look) || !poseable(m, &b->look)) continue;
        b->team = team; b->death_clip = p->death_clips[i % 3]; b->base_look = b->look;
        memcpy(b->ch.pos, p->ch.pos, 12);
        bot_spawn(p, m, b, p->nbots);
        p->nbots++;
    }
    vehicles_init(p, l, m, bp, a);
    p->nturret = 0; p->ntdef = 0; turrets_init(p, l, m, bp);
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
    for (u32 v = 0; v < p->nveh; v++) if (!vehicle_make(p, v)) { p->veh[v].alive = false; p->veh[v].def = &p->vdef[p->vspawn[v].def[0] >= 0 ? p->vspawn[v].def[0] : p->vspawn[v].def[1]]; p->veh[v].dead_t = p->vspawn[v].respawn - 5.0f; p->target[VT(p, v)].alive = false; }
    if (ak_setting_int("AK_DEBUG_VEH", 0))
        for (u32 v = 0; v < p->nveh; v++) AK_INFO("veh", "vehicle %u: %s / %s, post %d, %s%s", v + 1, p->vspawn[v].def[0] >= 0 ? p->vdef[p->vspawn[v].def[0]].name : "-",
                                                p->vspawn[v].def[1] >= 0 ? p->vdef[p->vspawn[v].def[1]].name : "-", p->vspawn[v].post, p->veh[v].alive ? "up" : "waiting", p->vspawn[v].fixed ? ", placed" : "");
    {   int tv = ak_setting_int("AK_TEST_VEHICLE", 0);                      /* tests: start in vehicle N */
        if (tv > 0 && (u32)tv <= p->nveh && p->veh[tv - 1].alive) {
            ak_vehicle *vh = &p->veh[tv - 1]; vh->driver = 0; vh->team = p->team; p->target[VT(p, tv - 1)].team = p->team;
            p->in_veh = tv - 1; p->target[0].alive = false; memcpy(p->ch.pos, vh->pos, 12); p->cam_dist = vh->def->cam_z;
        } }
    p->ready = true;
    return true;
}

/* ------------------------------------------------------------------ bots */
static void bot_route(ak_play *p, ak_play_bot *b, const f32 *to)
{
    s32 s = ak_nav_nearest(&p->nav, b->ch.pos, 40.0f), g = ak_nav_nearest(&p->nav, to, 40.0f); f32 cost;
    b->npath = (s >= 0 && g >= 0) ? ak_nav_path(&p->nav, (u32)s, (u32)g, 0, b->path, 128, &cost, &p->scratch) : 0;
    b->path_i = 0;
}

static bool bot_take_vehicle(ak_play *p, ak_play_bot *b);
static void bot_drive(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 idx, f32 dt);
static void bot_board(ak_play *p, ak_play_bot *b, u32 idx, u32 v);

/* a post its side does not hold (the nearest, with some randomness); every post held: defend one.  On foot it may take a free vehicle
 * of its side first. */
static void bot_choose_goal(ak_play *p, ak_play_bot *b)
{
    if (b->veh < 0 && b->want_veh < 0 && bot_take_vehicle(p, b)) return;
    s32 best = -1; f32 bs = 1e30f;
    for (u32 i = 0; p->have_cq && i < p->cq.nposts; i++) {
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
static s32 bot_find_enemy(ak_play *p, ak_play_bot *b) { return find_enemy(p, b->team, b->ch.pos, b->ch.yaw, 1.5f * S, p->sight, false); }


/* ------------------------------------------------------------------ heroes */
/* Traced (func 08974318, every frame, per side): a countdown from BFF.HeroUnlockTime (minutes x 60; the game's default 3, func
 * 0897782C; the campaign's missions 240 s, x0.75 on some) runs while there is no hero; at 0 the best-scoring human of the side not
 * marked as having declined is offered the hero and has BFF.HeroDecideTime (30 s, 0x08B1B928) to accept; no answer or a no marks him
 * and the countdown restarts at 5 s (0x08AEE2F0); a side with no human to offer it gives the hero at once to one of its bots
 * (func 089826E8: a new unit of the hero's class where the old one stood).  When the hero dies the countdown restarts from the full
 * time and the marks are cleared.  The hero of a side is its faction's Humanoid with Hero = 1 that the level has a model for (the game
 * reads it from a per-faction table, hash 0x203E217D, not traced: where a level has two, the first in blueprint order is taken). */
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
    f32 unlock = ak_setting_float("AK_HERO_UNLOCK", 3.0f) * 60.0f;
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
        h->bdef = h->wdef;
        if (h->armed && h->wdef.bp && ak_setting_int("AK_BOT_GAME_MODIFIERS", 1)) {
            f32 md = ak_bp_float(h->wdef.bp, "Modifier_Bot_Damage", 1), mr = ak_bp_float(h->wdef.bp, "Modifier_Bot_RateOfFire", 1);
            h->bdef.dmg_infantry *= md; h->bdef.dmg_vehicle *= md; if (!h->saber) h->bdef.rate_of_fire *= mr;
        }
        /* its animation table (traced data: the level's ATEX for the blueprint's Animtable): rows 0 idle, 3 run, 4 run back, 5 / 6
           strafe, 8 jump, 13 land, 16 fall; 17-19 the attack combo */
        h->tab = ak_anim_table_find(m, ak_bp_string(o, "Animtable", "generic_male"));
        if (h->tab && h->tab->cols < 10) h->tab = NULL;                         /* (the soldiers' generic_male: they keep their own clips) */
        static const int row[PLAY_NCLIPS] = { [PLAY_IDLE] = 0, [PLAY_RUN] = 3, [PLAY_BACK] = 4, [PLAY_LEFT] = 5, [PLAY_RIGHT] = 6, [PLAY_JUMP] = 8, [PLAY_FALL] = 16, [PLAY_LAND] = 13, [PLAY_SPRINT] = 3 };
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
    ak_play_hero *h = &p->hero[t]; ak_target *tg = &p->target[unit];
    h->unit = unit; h->offered = -1; h->atk_i = -1;
    if (unit == 0) {
        p->look = h->look; p->wdef = h->wdef; p->armed = h->armed; p->max_health = h->health;
        if (p->armed) { ak_weapon_give(&p->weapon, &p->wdef); p->weapon.team = p->team; p->weapon.owner = 0; }
        p->state = PLAY_IDLE; p->clip_t = 0; p->lock = -1;
    } else {
        ak_play_bot *b = &p->bot[unit - 1];
        b->look = h->look; b->hero = true; b->state = PLAY_IDLE; b->clip_t = 0;
        if (h->armed) { ak_weapon_give(&b->weapon, &h->bdef); b->weapon.team = b->team; b->weapon.owner = unit; } else b->weapon.def = NULL;
    }
    tg->health = h->health; tg->headshot_mult = ak_bp_float(h->look.bp, "Headshot multiplier", 4.0f);
    if (unit == 0) p->health = h->health;
    (void)m;
    if (ak_setting_int("AK_DEBUG_HERO", 0)) AK_INFO("hero", "%.1f s: %s is %s", p->clock, unit ? "a bot" : "the player", h->name);
}

/* a hero wears out: HeroDeathRate, the share of its health lost a second (before the frame's casualties are counted) */
static void heroes_drain(ak_play *p, f32 dt)
{
    for (int t = 0; t < 2; t++) {
        ak_play_hero *h = &p->hero[t]; if (h->unit < 0) continue;
        ak_target *tg = &p->target[h->unit]; if (!tg->alive) continue;
        tg->health -= h->drain * h->health * dt;
    }
}

/* a unit back to its soldier (at its next spawn) */
static void hero_unmake_player(ak_play *p) { p->look = p->base_look; p->wdef = p->base_wdef; p->armed = p->base_armed; p->max_health = p->base_max_health; }

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
   blade Length 1 m): every enemy within reach in front.  The game's saber combat (its clips, blocking, combos) is not traced yet. */
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
        t->health -= t->vehicle ? w->def->dmg_vehicle : w->def->dmg_infantry; t->last_attacker = unit; t->hits++;   /* (falls in the frame's count) */
    }
}

/* a saber hero's attack: the trigger starts the combo (its table's rows 17-19); pressed again in the second half of a stroke it goes
   on to the next; the blade hurts in the middle of each stroke (the Lightsaber's RateOfFire apart).  The game's own timing (when a
   stroke hurts, how a combo is chained) is not traced. */
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

static void bot_update(ak_play *p, const ak_model_set *m, ak_play_bot *b, u32 idx, f32 dt, const ak_frustum *fr)
{
    ak_target *self = &p->target[1 + idx];
    b->alert_t -= dt; b->shoot_t += dt;
    if (!b->alive) {
        b->dead_t += dt;
        if (b->dead_t < 3.0f && poseable(m, &b->look)) pose(m, &b->look, b->death_clip, b->dead_t, false, b->bones);
        return;
    }
    if (b->veh >= 0) { bot_drive(p, m, b, idx, dt); return; }
    b->veh_cool -= dt;
    if (b->want_veh >= 0) {                                                  /* on its way to a vehicle: still free?  close enough to get in? */
        const ak_vehicle *vh = &p->veh[b->want_veh];
        f32 dx = vh->pos[0] - b->ch.pos[0], dz = vh->pos[2] - b->ch.pos[2], r = vh->def ? vh->def->radius + 2.5f : 0;
        if (!vh->alive || vh->driver >= 0 || (vh->team != b->team && !vh->open) || b->goal_t < -25.0f) { b->want_veh = -1; b->goal = -1; b->goal_t = 0; }
        else if (dx * dx + dz * dz < r * r && fabsf(vh->pos[1] - b->ch.pos[1]) < 4.0f) { bot_board(p, b, idx, (u32)b->want_veh); return; }
    }
    /* think */
    b->think_t -= dt; b->goal_t -= dt;
    if (b->think_t <= 0) {
        b->think_t = 0.25f + rnd(&b->seed) * 0.1f;
        s32 e = p->bots_passive ? -1 : bot_find_enemy(p, b);
        if (e != b->enemy) { if (e >= 0 && b->enemy < 0) b->react_t = 0.35f + rnd(&b->seed) * 0.3f; b->enemy = e; }
        bool done = b->goal >= 0 && p->match.post[b->goal].owner == b->team && p->match.post[b->goal].progress >= p->cq.post[b->goal].amount;
        if (b->want_veh < 0 && (b->goal < 0 || (done && b->goal_t <= 0) || (b->holding && b->goal_t <= -20.0f))) bot_choose_goal(p, b);
    }
    if (b->enemy >= 0 && (!p->target[b->enemy].alive)) b->enemy = -1;
    /* where to go: along the route, then onto the post */
    f32 want[3]; bool moving = true;
    if (b->path_i < b->npath) {
        const ak_nav_node *nd = &p->nav.node[b->path[b->path_i]]; const f32 *np = nd->pos; memcpy(want, np, 12);
        {   /* its own line through the node (inside the node's radius), so a squad does not walk in single file */
            f32 r = nd->radius < 2.0f ? nd->radius : 2.0f, a = (f32)(b->seed >> 3 & 1023) * (6.2831853f / 1024.0f) + (f32)idx;
            want[0] += cosf(a) * r * 0.7f; want[2] += sinf(a) * r * 0.7f; }
        f32 dx = want[0] - b->ch.pos[0], dz = want[2] - b->ch.pos[2];
        if (dx * dx + dz * dz < 2.0f * 2.0f) b->path_i++;
    } else {
        memcpy(want, b->hold, 12);
        f32 dx = b->hold[0] - b->ch.pos[0], dz = b->hold[2] - b->ch.pos[2];
        if (dx * dx + dz * dz < 0.8f * 0.8f) { moving = false; if (!b->holding) { b->holding = true; b->goal_t = 3.0f + rnd(&b->seed) * 4.0f; } }
    }
    f32 mdx = want[0] - b->ch.pos[0], mdz = want[2] - b->ch.pos[2], ml = sqrtf(mdx * mdx + mdz * mdz);
    if (ml > 1e-3f) { mdx /= ml; mdz /= ml; } else moving = false;
    /* facing: the enemy, else the way it goes */
    f32 face = b->ch.yaw;
    const ak_target *en = b->enemy >= 0 ? &p->target[b->enemy] : NULL;
    bool saber = b->hero && hero_of(p, (s32)(1 + idx)) && hero_of(p, (s32)(1 + idx))->saber;
    if (en && saber) {                                                        /* a saber hero closes in */
        f32 ex = en->feet[0] - b->ch.pos[0], ez = en->feet[2] - b->ch.pos[2], el = sqrtf(ex * ex + ez * ez);
        if (el > 1.2f) { mdx = ex / el; mdz = ez / el; moving = true; } else moving = false;
    }
    if (en) face = atan2f(-(en->feet[0] - b->ch.pos[0]), -(en->feet[2] - b->ch.pos[2]));
    else if (moving) face = atan2f(-mdx, -mdz);
    f32 dyaw = wrap(face - b->ch.yaw), mx = p->cp.yaw_speed * dt;
    b->ch.yaw += dyaw > mx ? mx : dyaw < -mx ? -mx : dyaw;
    /* the stick: toward `want`, relative to the facing; slower and strafing in a fight */
    ak_char_input ci = { 0, 0, 0, 0, false, false };
    f32 speed = en && !saber ? 0.55f : 1.0f;
    f32 rx = cosf(b->ch.yaw), rz = -sinf(b->ch.yaw), fx = -sinf(b->ch.yaw), fz = -cosf(b->ch.yaw);
    if (moving) { ci.move_x = (mdx * rx + mdz * rz) * speed; ci.move_y = (mdx * fx + mdz * fz) * speed; }
    if (en && !saber) {
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
            else if (rnd(&b->seed) < 0.3f) bot_choose_goal(p, b);
        }
        b->stuck_t = 0; memcpy(b->stuck_pos, b->ch.pos, 12);
    }
    ak_char_update(&b->ch, &p->cp, &p->col, &ci, dt);
    /* the clip */
    f32 hs; int st = motion_state(&b->ch, &p->cp, b->was_ground, &b->land_t, dt, &hs);
    b->was_ground = b->ch.on_ground;
    const s32 *bcl = unit_clips(p, (s32)(1 + idx));
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
        else pose(m, &b->look, bcl[b->state], b->clip_t, b->state != PLAY_JUMP && b->state != PLAY_LAND, b->bones);
    }
    body_target(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, self);
    /* fight: after the reaction time, in bursts, when facing the enemy (a saber hero strikes in reach) */
    if (b->hero && b->weapon.def && hero_of(p, (s32)(1 + idx)) && hero_of(p, (s32)(1 + idx))->saber) {
        ak_weapon_update(&b->weapon, dt, false);
        bool reach = false;
        if (en) { f32 ex = en->feet[0] - b->ch.pos[0], ez = en->feet[2] - b->ch.pos[2]; reach = ex * ex + ez * ez < 3.0f * 3.0f && fabsf(dyaw) < 0.6f; }
        hero_attack(p, m, hero_of(p, (s32)(1 + idx)), reach, &b->weapon, b->ch.pos, b->ch.yaw, dt);
    } else if (b->weapon.def) {
        ak_weapon_update(&b->weapon, dt, b->weapon.ammo == 0);
        if (b->weapon.ammo <= 0 && b->weapon.spare <= 0 && b->weapon.reload_t <= 0) { int tm = b->weapon.team; s32 ow = b->weapon.owner; ak_weapon_give(&b->weapon, b->weapon.def); b->weapon.team = tm; b->weapon.owner = ow; }
        b->react_t -= dt; b->burst_t -= dt;
        if (b->burst_t < -(0.5f + rnd(&b->seed) * 0.6f)) b->burst_t = 0.8f + rnd(&b->seed) * 1.2f;
        if (en && b->react_t <= 0 && b->burst_t > 0 && fabsf(dyaw) < 0.3f) {
            f32 gun[12], muz[3];
            weapon_world(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, gun);
            muzzle_of(m, b->weapon.def, gun, muz);
            f32 tgt[3] = { en->feet[0], en->feet[1] + 1.1f * S, en->feet[2] };
            f32 dx = tgt[0] - muz[0], dy = tgt[1] - muz[1], dz = tgt[2] - muz[2], d = sqrtf(dx * dx + dy * dy + dz * dz);
            f32 err = p->bot_aim * d;                                    /* the aim error: an angle, so it grows with distance */
            tgt[0] += (rnd(&b->seed) * 2 - 1) * err; tgt[1] += (rnd(&b->seed) * 2 - 1) * err * 0.6f; tgt[2] += (rnd(&b->seed) * 2 - 1) * err;
            ak_weapon_fire(&b->weapon, &p->bolts, &p->col, p->target, NT(p), muz, tgt, &b->seed);
            b->shoot_t = 0;
        }
    }
    if (en) b->alert_t = 3.0f;
}


/* ------------------------------------------------------------------ vehicles */
static f32 quat_yaw(ak_quat q) { return atan2f(-2 * (q.x * q.z + q.w * q.y), -(1 - 2 * (q.x * q.x + q.y * q.y))); }   /* vehicle models face +z */

/* which side's vehicle a spawn makes: the side holding the nearest command post (none while it is neutral) */
static int spawn_team(const ak_play *p, const ak_play_vspawn *sp)
{
    if (sp->fixed) return sp->def[0] >= 0 ? 0 : 1;
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
    memcpy(t->head, vh->pos, 12); t->head[1] -= 100; t->head_radius = 0;   /* no head */
    t->team = vh->team; t->vehicle = true;
}

static bool vehicle_make(ak_play *p, u32 v)
{
    ak_play_vspawn *sp = &p->vspawn[v]; int team = spawn_team(p, sp);
    if (team < 0 || sp->def[team] < 0) return false;
    ak_vehicle *vh = &p->veh[v]; vh->spawn = (s32)v;
    ak_vehicle_spawn(vh, &p->vdef[sp->def[team]], sp->pos, sp->yaw, team);
    ak_target *t = &p->target[VT(p, v)]; memset(t, 0, sizeof *t);
    t->health = vh->def->health; t->alive = true; t->last_attacker = -1;
    vehicle_target(p, v);
    return true;
}

static void boom(ak_play *p, const f32 *pos)
{
    ak_play_boom *b = &p->boom[p->nboom < PLAY_MAX_BOOMS ? p->nboom++ : 0];
    memcpy(b->pos, pos, 12); b->pos[1] += 1.5f; b->t = 0;
}

static void player_down(ak_play *p);
static void vehicle_destroyed(ak_play *p, const ak_model_set *m, u32 v)
{
    ak_vehicle *vh = &p->veh[v]; (void)m;
    if (p->target[VT(p, v)].last_attacker == 0 && vh->driver != 0) p->kills++;
    vh->alive = false; vh->dead_t = 0; boom(p, vh->pos);
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
    p->in_veh = -1; p->in_turret = -1; p->veh_respawn = ak_setting_float("AK_VEHICLE_RESPAWN", 10.0f);   /* (the spawn records say 10 s) */
    p->bot_drive = ak_setting_float("AK_BOT_VEHICLES", p->is_space ? 1.0f : 0.6f);   /* space: every bot that can flies */
    if (!ak_setting_int("AK_VEHICLES", 1)) return;
    ak_entity_set es; size_t mark = a->used;
    if (!ak_entities_load(l, m, a, &es)) { a->used = mark; return; }
    for (u32 i = 0; i < es.n && p->nveh < PLAY_MAX_VEH; i++) {
        const ak_entity *e = &es.e[i];
        if (!e->flagged || (e->type != 27 && e->type != 13) || !e->placed) continue;
        ak_play_vspawn *sp = &p->vspawn[p->nveh]; bool any = false;
        memcpy(sp->pos, e->pos, 12); sp->yaw = quat_yaw(e->rot); sp->post = -1; sp->respawn = p->veh_respawn; sp->fixed = e->type == 13;
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
            ak_vehicle_def *d = &p->vdef[sp->def[0]]; d->drivable = false;
            int team = ak_faction_team(ak_bp_int(d->bp, "Faction", 3));
            if (team == 1) { sp->def[1] = sp->def[0]; sp->def[0] = -1; }
        }
        sp->mpost = -1; sp->route = NULL; sp->route_d = 0;
        if (sp->fixed && ak_setting_int("AK_WALKER_PATHS", 1)) {             /* a placed walker walks its path (the record's start node) */
            ak_route *r = (ak_route *)ak_arena_alloc(a, sizeof *r, 4);
            if (r && ak_route_for_unit(l, e->id, r)) { sp->route = r; if (ak_setting_int("AK_DEBUG_VEH", 0)) AK_INFO("veh", "walker %u: a path of %u points, %.0f m", p->nveh + 1, r->n, r->length); }
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
        if (any) p->nveh++;
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
    bool going = ak_route_at(sp->route, sp->route_d, at, dir);
    ak_route_at(sp->route, sp->route_d + 6.0f, ahead, d2);        /* steer for a point a little ahead */
    f32 dx = ahead[0] - vh->pos[0], dz = ahead[2] - vh->pos[2];
    f32 want = atan2f(-dx, -dz);
    f32 dy = wrap(want - vh->yaw);
    vh->steer = dy > 0.05f ? -1.0f : dy < -0.05f ? 1.0f : -dy * 20.0f; if (vh->steer > 1) vh->steer = 1; if (vh->steer < -1) vh->steer = -1;
    vh->throttle = going && fabsf(dy) < 0.8f ? (f32)ak_setting_float("AK_WALKER_THROTTLE", 1.0f) : 0.0f; vh->strafe = 0; vh->brake = false;
    ak_vehicle_update(vh, &p->col, p->cp.gravity, false, dt);
    {   /* progress: the projection of the walker onto the path near where it was */
        f32 best = sp->route_d, bd = 1e30f;
        for (f32 s = sp->route_d - 2.0f; s <= sp->route_d + 4.0f; s += 0.25f) { f32 q[3], qd[3]; ak_route_at(sp->route, s, q, qd);
            f32 ex = q[0] - vh->pos[0], ez = q[2] - vh->pos[2]; if (ex * ex + ez * ez < bd) { bd = ex * ex + ez * ez; best = s; } }
        if (best > sp->route_d) sp->route_d = best; }
}

static void vehicle_fire(ak_play *p, const ak_model_set *m, u32 v, const f32 *target, f32 dt)
{
    ak_vehicle *vh = &p->veh[v]; const ak_vehicle_def *d = vh->def; bool bot = vh->driver > 0;
    if (!d->armed || !d->nmuzzles) return;
    f32 prev = vh->volley_t; vh->volley_t += dt;
    ak_weapon w; ak_weapon_give(&w, bot ? &d->gun_bot : &d->gun); w.team = vh->team; w.owner = (s32)(vh->driver >= 0 ? vh->driver : -1);
    for (u32 i = 0; i < d->nmuzzles; i++) {
        if (!(prev <= d->muzzle_time[i] && vh->volley_t > d->muzzle_time[i]) && !(prev == 0 && d->muzzle_time[i] == 0)) continue;
        f32 W[12]; if (!ak_vehicle_marker(vh, m, d->muzzle[i], W)) continue;
        f32 muz[3] = { W[3], W[7], W[11] };
        ak_weapon_fire(&w, &p->bolts, &p->col, p->target, NT(p), muz, target, &p->seed);
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

/* the lock-on of a vehicle's tracking secondary: the enemy nearest the line of `fwd` within LockAngle and reach, held for LockOnTime;
 * lost past LoseLockOnAngle or LoseLockOnRange (ground vehicles: 300 m) */
static void vehicle_lock(ak_play *p, ak_vehicle *vh, const f32 *eye, const f32 *fwd, f32 dt)
{
    const ak_vehicle_def *d = vh->def;
    if (!d->sec.armed || !d->sec.tracks) { vh->lock = -1; vh->locked = false; return; }
    f32 reach = d->lose_lock_range > 0 ? d->lose_lock_range : 300.0f;
    if (vh->lock >= 0) {
        const ak_target *t = &p->target[vh->lock];
        f32 c[3] = { t->feet[0] - eye[0], t->feet[1] + t->height * 0.5f - eye[1], t->feet[2] - eye[2] }, dl = sqrtf(c[0] * c[0] + c[1] * c[1] + c[2] * c[2]);
        f32 ang = dl > 0.01f ? acosf(fmaxf(-1, fminf(1, (c[0] * fwd[0] + c[1] * fwd[1] + c[2] * fwd[2]) / dl))) : 0;
        if (!t->alive || dl > reach || ang > (vh->locked ? d->lose_lock_angle : d->lock_angle)) { vh->lock = -1; vh->locked = false; vh->lock_t = 0; }
        else { vh->lock_t += dt; if (vh->lock_t >= d->lock_time) vh->locked = true; return; }
    }
    s32 best = -1; f32 bc = cosf(d->lock_angle);
    for (u32 i = 0; i < NT(p); i++) {
        const ak_target *t = &p->target[i];
        if (!t->alive || t->team == vh->team || t->team == AK_CQ_NEUTRAL) continue;
        if (i >= NS(p) && i < NV(p) && p->veh[i - NS(p)].driver < 0) continue;
        f32 c[3] = { t->feet[0] - eye[0], t->feet[1] + t->height * 0.5f - eye[1], t->feet[2] - eye[2] }, dl = sqrtf(c[0] * c[0] + c[1] * c[1] + c[2] * c[2]);
        if (dl > reach || dl < 1) continue;
        f32 cs = (c[0] * fwd[0] + c[1] * fwd[1] + c[2] * fwd[2]) / dl;
        if (cs > bc) { bc = cs; best = (s32)i; }
    }
    vh->lock = best; vh->lock_t = 0; vh->locked = false;
}

static void proj_boom(void *ctx, const f32 *pos, f32 radius) { (void)radius; boom((ak_play *)ctx, pos); }

/* ------------------------------------------------------------------ bots in vehicles */
#define FLY_RAYS (AK_COL_NOT_BODIES | AK_COL_NOT_FLYERS)
static f32 clampf(f32 x, f32 lo, f32 hi) { return x < lo ? lo : x > hi ? hi : x; }

/* a free vehicle of its side within 40 m that no other bot is walking to: walk there (by chance: AK_BOT_VEHICLES) */
static bool bot_take_vehicle(ak_play *p, ak_play_bot *b)
{
    if (p->bot_drive <= 0 || b->veh_cool > 0 || rnd(&b->seed) >= p->bot_drive) return false;
    for (u32 i = 0; p->have_cq && i < p->cq.nposts; i++) {                   /* a post to take right here: on foot (drivers cannot capture) */
        const f32 *pp = p->cq.post[i].pos; f32 dx = pp[0] - b->ch.pos[0], dz = pp[2] - b->ch.pos[2];
        if (!p->cq.post[i].disabled && p->match.post[i].owner != b->team && dx * dx + dz * dz < 30.0f * 30.0f) return false;
    }
    s32 best = -1; f32 bd = p->is_space ? 90.0f * 90.0f : 40.0f * 40.0f;   /* (a capital ship's hangar is wide) */
    for (u32 v = 0; v < p->nveh; v++) {
        const ak_vehicle *vh = &p->veh[v];
        if (!vh->def || !vh->alive || vh->driver >= 0 || !vh->def->drivable || (vh->team != b->team && !vh->open)) continue;
        f32 dx = vh->pos[0] - b->ch.pos[0], dz = vh->pos[2] - b->ch.pos[2], d2 = dx * dx + dz * dz;
        if (d2 >= bd || fabsf(vh->pos[1] - b->ch.pos[1]) > 8.0f) continue;
        bool taken = false;
        for (u32 i = 0; i < p->nbots && !taken; i++) taken = &p->bot[i] != b && p->bot[i].alive && p->bot[i].want_veh == (s32)v;
        if (!taken) { bd = d2; best = (s32)v; }
    }
    if (best < 0) return false;
    b->want_veh = best; b->goal = -1; b->holding = false; b->goal_t = 0;
    memcpy(b->hold, p->veh[best].pos, 12);
    bot_route(p, b, b->hold);
    return true;
}

static void bot_board(ak_play *p, ak_play_bot *b, u32 idx, u32 v)
{
    ak_vehicle *vh = &p->veh[v];
    vh->driver = (s32)(1 + idx); vh->aim_yaw = vh->aim_pitch = 0; vh->volley_t = 0;
    vh->team = b->team; vh->open = false; p->target[VT(p, v)].team = b->team;   /* (the vehicle takes its occupant's side, 089D29D8) */
    b->veh = (s32)v; b->want_veh = -1; b->enemy = -1; b->rev_t = 0; b->vstuck_t = 0; b->vstucks = 0; b->run_t = 0;
    memcpy(b->ch.pos, vh->pos, 12); memcpy(b->vstuck_pos, vh->pos, 12);
    b->fly_alt = vh->pos[1]; b->role = 0; b->role_obj = -1; b->role_leg = 0; b->fly_phase = 0; b->fly_t = rnd(&b->seed) * 2.0f;
    p->target[1 + idx].alive = false;                                         /* the soldier is inside: the vehicle is the target now */
    b->goal = -1; bot_choose_goal(p, b);
    if (ak_setting_int("AK_DEBUG_BOTVEH", 0)) AK_INFO("botveh", "%.1f s: bot %u (team %d) gets in %u %s", p->clock, idx, b->team, v, vh->def->name);
}

static void bot_exit(ak_play *p, ak_play_bot *b, u32 idx)
{
    ak_vehicle *vh = &p->veh[b->veh]; f32 out[3], gy;
    f32 rx = cosf(vh->yaw), rz = -sinf(vh->yaw), dd = vh->def->radius + p->cp.radius + 0.5f;
    out[0] = vh->pos[0] - rx * dd; out[1] = vh->pos[1] + 1.0f; out[2] = vh->pos[2] - rz * dd;   /* out on the left */
    if (ak_char_ground_below(&p->col, out, 6.0f, &gy)) out[1] = gy; else memcpy(out, vh->pos, 12);
    ak_char_spawn(&b->ch, out, vh->yaw);
    vh->driver = -1; vh->open = true; vh->throttle = vh->steer = vh->strafe = 0; vh->brake = false;
    b->veh = -1; b->veh_cool = 20.0f; b->state = PLAY_IDLE; b->clip_t = 0; b->stuck_t = 0; memcpy(b->stuck_pos, out, 12);
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
    f32 reach = fminf(d->target_range > 0 ? d->target_range : 100.0f, d->gun.range > 0 ? d->gun.range : 100.0f);
    if (dist > reach) { vh->volley_t = 0; return; }
    if (nose_only) {                                                          /* fixed guns: only with the nose on it */
        f32 cp = cosf(vh->pitch), fw[3] = { -sinf(vh->yaw) * cp, sinf(vh->pitch), -cosf(vh->yaw) * cp };
        if ((fw[0] * dx + fw[1] * dy2 + fw[2] * dz) < cosf(0.3f) * dist) { vh->volley_t = 0; return; }   /* (the guns converge on it within ~17 degrees) */
    } else if (fabsf(want_yaw - vh->aim_yaw) > 0.25f) { vh->volley_t = 0; return; }
    f32 err = p->bot_aim * dist;
    /* the secondary: the game's AI fires it at most every 15 s, with the target within 5 degrees (func 08948A9C: 0x08B1B754, 0x08AEDAE8) */
    if (d->sec.armed && vh->bot_sec_t <= 0 && dist < (d->lose_lock_range > 0 ? d->lose_lock_range : 300.0f)) {
        f32 cp = cosf(vh->pitch), fx = nose_only ? -sinf(vh->yaw) * cp : -sinf(vh->yaw + vh->aim_yaw), fy = nose_only ? sinf(vh->pitch) : 0, fz = nose_only ? -cosf(vh->yaw) * cp : -cosf(vh->yaw + vh->aim_yaw);
        f32 hd = nose_only ? dist : sqrtf(dx * dx + dz * dz);
        if ((fx * dx + fy * dy2 * (nose_only ? 1.0f : 0.0f) + fz * dz) > cosf(5.0f * 0.017453293f) * hd) {
            f32 c[3] = { en->feet[0], en->feet[1] + en->height * 0.5f, en->feet[2] };
            if (vehicle_fire2(p, m, v, c, b->enemy)) vh->bot_sec_t = 15.0f;
        }
    }
    tgt[0] += (rnd(&b->seed) * 2 - 1) * err; tgt[1] += (rnd(&b->seed) * 2 - 1) * err * 0.6f; tgt[2] += (rnd(&b->seed) * 2 - 1) * err;
    vehicle_fire(p, m, v, tgt, dt);
}

/* ---- space: the team AI commander (traced: funcs 0898EDBC..089919F4, the pilots' goals 089424AC / 08950BE8)
 * Each team's commander gives a flyer that has just become free a role by its Flyer_Type (func 0899129C, the capture-the-flag branch
 * left out): a fighter takes an attack run on the enemy capital ship 40 % of the time (kind 2), else 20 % (kind 1), else general
 * combat; a bomber always takes one (kind 2 first); a transport flies into the enemy hangar and lands ("land in hangar", 100 %);
 * interceptors, heroes and the rest fight.  Runs and hangars are the level's AI objectives (game/ak_space.h); the commander's percent
 * rolls are its own (50 / 100 / 20 / 40 / 100 at 08B1BBB0..C0).  Which free objective it hands out is not traced (here: the nearest);
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
static void space_assign(ak_play *p, ak_play_bot *b, u32 idx)
{
    const ak_vehicle *vh = &p->veh[b->veh];
    if (b->role_obj >= 0 && p->obj_unit[b->role_obj] == (s32)idx) p->obj_unit[b->role_obj] = -1;
    b->role = SPACE_COMBAT; b->role_obj = -1; b->role_leg = 0; b->role_t = 0;
    s32 o = -1; int role = SPACE_COMBAT;
    switch (vh->def->flyer_type) {
    case AK_FLY_FIGHTER:
        o = pick_obj(p, b, AK_OBJ_RUN2, vh->pos);
        if (o >= 0 && rnd(&b->seed) * 100.0f < 40.0f) { role = SPACE_RUN; break; }
        o = pick_obj(p, b, AK_OBJ_RUN1, vh->pos);
        if (o >= 0 && rnd(&b->seed) * 100.0f < 20.0f) role = SPACE_RUN;
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
    b->think_t -= dt; b->run_t -= dt;
    if (b->think_t <= 0) {
        b->think_t = 0.5f + rnd(&b->seed) * 0.2f;
        s32 best = -1; f32 bd = 1500.0f * 1500.0f;                           /* (space battles are wide) */
        for (u32 i = NS(p); i < NV(p); i++) {                                 /* enemy vehicles with someone in them */
            const ak_target *t = &p->target[i]; if (!t->alive || t->team == b->team || p->veh[i - NS(p)].driver < 0) continue;
            f32 dx = t->feet[0] - vh->pos[0], dy = t->feet[1] - vh->pos[1], dz = t->feet[2] - vh->pos[2], d2 = dx * dx + dy * dy + dz * dz;
            if (d2 < bd) { bd = d2; best = (s32)i; }
        }
        if (best < 0) {                                                       /* else soldiers: near the goal post, or near the flyer */
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
            f32 lt = fminf(sqrtf(ex * ex + ey * ey + ez * ez) / fmaxf(vh->speed, 20.0f) * 0.6f, 1.5f);
            for (int k = 0; k < 3; k++) dest[k] += ev->vel[k] * lt;
        }
    }
    else if (b->goal >= 0) memcpy(dest, p->cq.post[b->goal].pos, 12);
    else { dest[0] = b->hold[0]; dest[1] = b->hold[1]; dest[2] = b->hold[2]; }
    f32 tx = dest[0] - vh->pos[0], ty = dest[1] - vh->pos[1], tz = dest[2] - vh->pos[2], h = sqrtf(tx * tx + tz * tz), dist = sqrtf(h * h + ty * ty);
    if (ob) {                                                                  /* along the objective's three points */
        f32 reach = b->role == SPACE_LAND ? (b->role_leg >= 2 ? 6.0f : 25.0f) : (b->role_leg >= 2 ? 70.0f : 35.0f);
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
    vh->steer = clampf(-dyaw * 2.0f, -1, 1);
    vh->throttle = clampf(-dp * 3.0f, -1, 1);
    b->boost = !landing && ((!chase && dist > 250.0f && !b->feel) || (chase && dist > 300.0f));
    if (craft && !b->circle && dist < 90.0f) {                               /* on its tail: no faster than it */
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
        if (on) vehicle_fire(p, m, v, aimp, dt); else vh->volley_t = 0;
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
 * 100 m on the ground) that it can point at and see, leading moving vehicles, with the bot modifiers and aim error (who aims for the
 * game's turret AI is not traced yet).  It repairs itself at the blueprint's Auto_Repair_Rate (5 a second); a destroyed one leaves its
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
        if (di < 0) continue;
        ak_turret *t = &p->turret[p->nturret]; ak_turret_place(t, &p->tdef[di], &rec[i]); t->rad = m->models[mi].radius;
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
    t->alive = false; t->health = 0; boom(p, t->pos);
    if (p->target[TT(p, i)].last_attacker == 0) p->kills++;
    if (p->in_turret == (s32)i) { p->in_turret = -1; if (p->alive) { p->target[0].alive = true; p->target[0].health = 0; player_down(p); } }   /* the gunner goes with it */
}

static void turrets_update(ak_play *p, const ak_model_set *m, f32 dt)
{
    for (u32 i = 0; i < p->nturret; i++) {
        ak_turret *t = &p->turret[i]; ak_target *g = &p->target[TT(p, i)]; const ak_turret_def *d = t->def;
        if (!t->alive) continue;
        t->health = g->health;
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
                ak_weapon w; ak_weapon_give(&w, &d->gun); w.team = t->team; w.owner = 0;
                for (u32 k = 0; k < d->nmuzzles; k++) {
                    if (!(prev <= d->muzzle_time[k] && t->volley_t > d->muzzle_time[k]) && !(prev == 0 && d->muzzle_time[k] == 0)) continue;
                    f32 muz[3]; if (ak_turret_muzzle(t, m, k, muz)) ak_weapon_fire(&w, &p->bolts, &p->col, p->target, NT(p), muz, p->aim_point, &p->seed);
                }
                if (t->volley_t >= d->volley) t->volley_t = 0;
            } else t->volley_t = 0;
            continue;
        }
        if (t->team < 0 || p->bots_passive || !(p->is_space || !d->boardable) || !d->armed || !d->nmuzzles) continue;
        /* think: the nearest enemy it can point at and see */
        t->think_t -= dt;
        f32 piv[12]; ak_turret_pivot(t, m, piv); f32 eye[3] = { piv[3], piv[7] + 1.0f, piv[11] };
        if (t->think_t <= 0) {
            t->think_t = 0.3f + rnd(&p->seed) * 0.1f;
            s32 best = -1; f32 bd = t->range * t->range;
            for (u32 k = 0; k < NV(p); k++) {
                const ak_target *e = &p->target[k];
                if (!e->alive || e->team == t->team || e->team == AK_CQ_NEUTRAL) continue;
                if (k >= NS(p) && p->veh[k - NS(p)].driver < 0) continue;
                f32 c[3] = { e->feet[0], e->feet[1] + e->height * 0.5f, e->feet[2] };
                f32 dx = c[0] - eye[0], dy = c[1] - eye[1], dz = c[2] - eye[2], d2 = dx * dx + dy * dy + dz * dz;
                if (d2 >= bd) continue;
                f32 y, pt; if (!ak_turret_aim_at(t, m, c, &y, &pt)) continue;
                if (!in_sight(p, eye, c)) continue;
                bd = d2; best = (s32)k;
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
        /* aim: lead a moving vehicle by the bolt's flight time */
        const ak_target *e = &p->target[t->enemy];
        f32 c[3] = { e->feet[0], e->feet[1] + e->height * 0.5f, e->feet[2] };
        if (t->enemy >= (s32)NS(p) && t->enemy < (s32)NV(p)) {
            const ak_vehicle *ev = &p->veh[t->enemy - NS(p)];
            f32 dx = c[0] - eye[0], dy = c[1] - eye[1], dz = c[2] - eye[2], dist = sqrtf(dx * dx + dy * dy + dz * dz);
            f32 lt = d->gun.speed > 1 ? dist / d->gun.speed : 0;
            for (int k = 0; k < 3; k++) c[k] += ev->vel[k] * lt;
        }
        f32 wy, wp; ak_turret_aim_at(t, m, c, &wy, &wp);
        f32 step = d->turn_rate * dt, dy = wrap(wy - t->yaw), dp = wp - t->pitch;
        t->yaw = wrap(t->yaw + clampf(dy, -step, step)); t->pitch += clampf(dp, -step, step);
        t->aim_t -= dt;
        if (fabsf(dy) > 0.06f || fabsf(dp) > 0.06f || t->aim_t > 0) { t->volley_t = 0; continue; }
        /* fire: the volley over its muzzles, with the bot aim error */
        f32 dist; { f32 dx = c[0] - eye[0], dy2 = c[1] - eye[1], dz = c[2] - eye[2]; dist = sqrtf(dx * dx + dy2 * dy2 + dz * dz); }
        f32 err = p->bot_aim * dist, tgt[3] = { c[0] + (rnd(&p->seed) * 2 - 1) * err, c[1] + (rnd(&p->seed) * 2 - 1) * err * 0.6f, c[2] + (rnd(&p->seed) * 2 - 1) * err };
        f32 prev = t->volley_t; t->volley_t += dt;
        ak_weapon w; ak_weapon_give(&w, &d->gun_bot); w.team = t->team; w.owner = -1;
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
    p->alive = false; p->dead_t = 0; p->deaths++; p->lock = -1; p->health = 0;
    p->target[0].alive = false; p->target[0].health = 0;
    if (p->have_cq) ak_conquest_killed(&p->rules, &p->match, p->team);
}

void ak_play_damage(ak_play *p, f32 amount)
{
    if (!p->ready || !p->alive || amount <= 0) return;
    p->target[0].health -= amount; p->health = p->target[0].health;
    if (p->target[0].health <= 0) player_down(p);
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
        if (flyer) { if (H & AK_BTN_L) g.held |= AK_BTN_L; if (H & AK_BTN_R) g.held |= AK_BTN_CROSS; }
        else if (H & AK_BTN_L) g.held |= AK_BTN_CROSS;
        p->l_was = false; p->l_t = 0;
    } else {
        if (H & AK_BTN_R) g.held |= AK_BTN_L;
        if (P & AK_BTN_R) g.pressed |= AK_BTN_L;
        if (P & AK_BTN_L) p->l_t = 0;
        if (H & AK_BTN_L) p->l_t += dt;
        else if (p->l_was && p->l_t < 0.2f) g.pressed |= AK_BTN_CROSS;       /* a tap: jump */
        p->l_was = (H & AK_BTN_L) != 0;
        p->sprint = p->l_was && p->l_t >= 0.2f && !(H & (AK_BTN_CROSS | AK_BTN_R));   /* held: sprint (not while firing or locked on) */
        if (P & AK_BTN_CIRCLE) p->roll_req = true;                             /* circle: roll */
        if (P & AK_BTN_TRIANGLE) p->zoom_req = true;                           /* triangle: zoom */
    }
    return g;
}

void ak_play_update(ak_play *p, const ak_model_set *m, const ak_input *in, f32 dt)
{
    if (!p->ready) return;
    p->clock += dt;
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
            p->in_turret = best; p->target[0].alive = false; p->lock = -1; tri = false;
            f32 B[12]; if (ak_turret_barrel(&p->turret[best], m, B)) { f32 F = p->turret[best].def->face; p->ch.yaw = atan2f(-F * B[2], -F * B[10]); p->ch.pitch = 0; }   /* the view starts along the barrel */
        }
    }
    if (tri) {                                                                /* triangle: get in / out of a vehicle */
        if (p->in_veh >= 0) {
            ak_vehicle *vh = &p->veh[p->in_veh]; f32 out[3], gy;
            f32 rx = cosf(vh->yaw), rz = -sinf(vh->yaw), dd = vh->def->radius + p->cp.radius + 0.5f;
            out[0] = vh->pos[0] - rx * dd; out[1] = vh->pos[1] + 1.0f; out[2] = vh->pos[2] - rz * dd;   /* out on the left */
            if (ak_char_ground_below(&p->col, out, 6.0f, &gy)) out[1] = gy; else memcpy(out, vh->pos, 12);
            ak_char_spawn(&p->ch, out, vh->yaw); vh->driver = -1; vh->open = true; vh->throttle = vh->steer = vh->strafe = 0;
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
                if (!vh->alive || !(free_ok || mate) || (!vh->def->drivable && !p->vspawn[v].route) || (p->vspawn[v].route && vh->team != p->team)) continue;   /* (a placed walker: its gunner's seat) */
                f32 dx = vh->pos[0] - p->ch.pos[0], dz = vh->pos[2] - p->ch.pos[2], d2 = dx * dx + dz * dz, r = vh->def->radius + 3.0f;
                if (d2 < r * r && d2 < bd && fabsf(vh->pos[1] - p->ch.pos[1]) < 4) { bd = d2; best = (s32)v; }
            }
            if (ak_setting_int("AK_DEBUG_VEH", 0)) AK_INFO("veh", "get in: nearest %d (soldier at %.1f %.1f %.1f)", best, p->ch.pos[0], p->ch.pos[1], p->ch.pos[2]);
            if (best >= 0) {
                if (p->veh[best].driver > 0) { u32 bi = (u32)(p->veh[best].driver - 1); bot_exit(p, &p->bot[bi], bi); }
                ak_vehicle *vh = &p->veh[best]; vh->driver = 0; vh->team = p->team; vh->open = false; vh->aim_yaw = vh->aim_pitch = 0;
                p->target[VT(p, best)].team = p->team; p->in_veh = best; p->target[0].alive = false; p->lock = -1; p->cam_dist = vh->def->cam_z;
            }
        }
    }
    if (p->in_veh >= 0) in = &none;                                           /* the soldier stands still inside */
    static ak_input manned; if (p->in_turret >= 0) { manned = *in; manned.lx = manned.ly = 0; manned.pressed &= ~AK_BTN_CROSS; in = &manned; }   /* a gunner aims only */
    /* the soldier's pitch is positive looking down (the camera uses -pitch): stick up looks up unless AK_INVERT_Y */
    ak_char_input ci = { in->lx, in->ly, in->rx, p->invert_y ? in->ry : -in->ry, (in->pressed & AK_BTN_CROSS) != 0, p->sprint && p->in_turret < 0 };
    if (p->twin_stick) {
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
            f32 best = 0.5f; p->lock = -1; p->lock_t = 0;
            f32 fx = -sinf(p->ch.yaw), fz = -cosf(p->ch.yaw);
            for (u32 i = 1; i < nt; i++) {
                if (!p->target[i].alive || p->target[i].team == p->team) continue;
                f32 dx = p->target[i].feet[0] - p->ch.pos[0], dz = p->target[i].feet[2] - p->ch.pos[2], d = sqrtf(dx * dx + dz * dz);
                if (d > p->lock_range || d < 0.5f) continue;
                f32 c = (dx * fx + dz * fz) / d;
                if (c > best) { best = c; p->lock = (s32)i; }
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
    if (p->roll_req && p->roll_i < 0 && p->alive && p->ch.on_ground && p->in_veh < 0 && p->in_turret < 0 && !hero_of(p, 0)) {
        int k = 0; f32 sx = in->lx, sy = in->ly;
        if (fabsf(sx) > fabsf(sy) && fabsf(sx) > 0.3f) k = sx < 0 ? 1 : 2; else if (sy < -0.3f) k = 3;
        if (p->roll_clip[k] < 0) k = 0;
        if (p->roll_clip[k] >= 0) {
            f32 s = sinf(p->ch.yaw), c = cosf(p->ch.yaw), fx = -s, fz = -c, rx = c, rz = -s, v = p->roll_len[k] / p->roll_dur[k];
            f32 lx = k == 1 ? -1.0f : k == 2 ? 1.0f : 0.0f, ly = k == 0 ? 1.0f : k == 3 ? -1.0f : 0.0f;
            p->roll_v[0] = (fx * ly + rx * lx) * v; p->roll_v[1] = (fz * ly + rz * lx) * v; p->roll_i = k; p->roll_t = 0;
        }
    }
    p->roll_req = false;
    /* zoom, traced (0x08997000): triangle enters the zoom view at the first level's magnification, each press steps to the next level,
       and a press on the last level leaves it; NumberOfZoomLevels and WZoomMagnification1..4 are the weapon's (blasters: 1 level at
       1.0 - the zoom view itself; the sniper rifle: 2 and 4) */
    if (p->zoom_req && p->armed && p->wdef.bp) {
        int nz = ak_bp_int(p->wdef.bp, "NumberOfZoomLevels", 0); if (nz > 4) nz = 4;
        p->zoom = nz > 0 ? (p->zoom + 1) % (nz + 1) : 0;
    }
    p->zoom_req = false;
    if (p->ch.sprinting || p->roll_i >= 0 || p->in_veh >= 0 || p->in_turret >= 0 || !p->alive) p->zoom = 0;
    ak_char_params rp = p->cp; const ak_char_params *use = &p->cp;
    if (p->roll_i >= 0) {                                                     /* rolling: the body goes the roll's way at its pace */
        f32 s = sinf(p->ch.yaw), c = cosf(p->ch.yaw), v = sqrtf(p->roll_v[0] * p->roll_v[0] + p->roll_v[1] * p->roll_v[1]) + 1e-6f;
        ci.move_y = (-s * p->roll_v[0] - c * p->roll_v[1]) / v; ci.move_x = (c * p->roll_v[0] - s * p->roll_v[1]) / v;
        ci.jump = ci.sprint = false; rp.run_speed = v; rp.accel = 400.0f; use = &rp;
        p->roll_t += dt; if (p->roll_t >= p->roll_dur[p->roll_i]) p->roll_i = -1;
    }
    ak_char_update(&p->ch, use, &p->col, &ci, dt);
    if (p->in_turret >= 0) {                                                  /* manning a turret: seated at it, it follows the aim */
        ak_turret *t = &p->turret[p->in_turret];
        if (!t->alive || t->team != p->team) { p->in_turret = -1; p->target[0].alive = true; }
        else {                                                                /* the view rides above the turret's pivot */
            f32 P[12]; if (ak_turret_pivot(t, m, P)) { p->ch.pos[0] = P[3]; p->ch.pos[1] = P[7] + 0.5f; p->ch.pos[2] = P[11]; } else { memcpy(p->ch.pos, t->pos, 12); p->ch.pos[1] += 2.0f; }
            p->ch.vel[0] = p->ch.vel[1] = p->ch.vel[2] = 0;
            const ak_turret_def *d = t->def;                                  /* the view keeps to the turret's arc (the limits are symmetric) */
            if (d->yaw_min != 0 || d->yaw_max != 0) {
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
    if (pcl[st] < 0) st = pcl[PLAY_RUN] >= 0 && hs >= 0.5f ? PLAY_RUN : PLAY_IDLE;
    if (st != p->state) { p->state = st; p->clip_t = 0; }
    p->clip_t += dt * clip_rate(st, hs, &p->cp);
    p->posed = poseable(m, &p->look);
    if (!p->alive) { p->dead_t += dt; if (p->posed) pose(m, &p->look, p->death_clips[0], p->dead_t, false, p->bones); }
    else if (p->posed) {
        const ak_play_hero *ph = hero_of(p, 0);
        if (ph && ph->atk_i >= 0) pose(m, &p->look, ph->atk[ph->atk_i], ph->atk_t, false, p->bones);
        else if (p->roll_i >= 0) pose(m, &p->look, p->roll_clip[p->roll_i], p->roll_t, false, p->bones);
        else if (!ph && p->alert_t > 0)                                          /* alert: rifle raised, the shoot layer while firing */
            pose_layer(m, &p->look, p->aclip[p->state], p->clip_t, p->state != PLAY_JUMP && p->state != PLAY_LAND, p->shoot_t < 0.3f ? p->shoot_clip : -1, p->shoot_t, p->bones);
        else pose(m, &p->look, pcl[p->state], p->clip_t, p->state != PLAY_JUMP && p->state != PLAY_LAND, p->bones);
        if (p->in_veh < 0) body_target(m, &p->look, (const f32 (*)[12])p->bones, p->ch.pos, p->ch.yaw, &p->target[0]);
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
    if (p->alive && p->in_veh < 0 && (in->held & (AK_BTN_R | AK_BTN_L))) { p->alert_t = 3.0f; if (in->held & AK_BTN_R) p->shoot_t = 0; }
    {   int ht = p->hero[p->team].offered == 0 ? 1 : 0;                       /* an offer of the hero: up takes it, down declines */
        if (ht && (in->pressed & AK_BTN_UP)) p->hero_answer = 1; else if (ht && (in->pressed & AK_BTN_DOWN)) p->hero_answer = -1; }
    if (p->armed && hero_of(p, 0) && hero_of(p, 0)->saber) {
        ak_weapon_update(&p->weapon, dt, false);
        hero_attack(p, m, hero_of(p, 0), (in->held & AK_BTN_R) && p->alive && p->in_veh < 0 && p->in_turret < 0, &p->weapon, p->ch.pos, p->ch.yaw, dt);
    } else if (p->armed) {
        ak_weapon_update(&p->weapon, dt, false);
        f32 gun[12], muz[3];
        if ((in->held & AK_BTN_R) && p->alive && p->in_turret < 0 && p->aim_ok && ak_play_weapon_matrix(p, m, gun)) {   /* (the camera has aimed once) */
            muzzle_of(m, &p->wdef, gun, muz);
            f32 tgt[3]; memcpy(tgt, p->aim_point, 12);
            if (p->lock >= 0 && p->target[p->lock].alive) {                    /* locked on: the chest, then the head */
                const ak_target *t = &p->target[p->lock];
                if (p->lock_t >= p->lock_head_time) memcpy(tgt, t->head, 12); else { memcpy(tgt, t->feet, 12); tgt[1] += 1.1f * S; }
            }
            {   int ta = ak_setting_int("AK_TEST_AIM", 0);                    /* tests: 1 = the nearest enemy's chest, 2 = its head */
                if (ta) {
                    s32 bi = -1; f32 bd = 1e30f;
                    for (u32 i = 1; i < nt; i++) { const ak_target *t = &p->target[i]; if (!t->alive || t->team == p->team) continue;
                        f32 dx = t->feet[0] - p->ch.pos[0], dz = t->feet[2] - p->ch.pos[2]; if (dx * dx + dz * dz < bd) { bd = dx * dx + dz * dz; bi = (s32)i; } }
                    if (bi >= 0) { const ak_target *t = &p->target[bi]; if (ta == 2) memcpy(tgt, t->head, 12); else { memcpy(tgt, t->feet, 12); tgt[1] += 1.1f * S; } }
                } }
            ak_weapon_fire(&p->weapon, &p->bolts, &p->col, p->target, nt, muz, tgt, &p->seed);
        }
    }
    /* the bots */
    for (u32 i = 0; i < p->nbots; i++) bot_update(p, m, &p->bot[i], i, dt, NULL);
    /* the vehicles */
    for (u32 v = 0; v < p->nveh; v++) {
        ak_vehicle *vh = &p->veh[v];
        if (!vh->def) continue;
        vh->sec_t -= dt; if (vh->sec_reload > 0) vh->sec_reload -= dt; vh->bot_sec_t -= dt;
        if (!vh->alive) {                                                     /* wrecked: back after the respawn delay */
            vh->dead_t += dt;
            if (vh->def->kind == AK_VEH_WALKER && vh->dead_t < 8.0f) ak_vehicle_pose(vh, m, dt);   /* the death clip */
            if (!p->vspawn[v].fixed && vh->dead_t > p->vspawn[v].respawn) { if (!vehicle_make(p, v)) vh->dead_t = p->vspawn[v].respawn - 5.0f; }
            continue;
        }
        if (vh->driver == 0) {                                                /* the player drives: left stick, cross boosts, right stick aims, R fires */
            bool rails = p->vspawn[v].route && vh->def->kind == AK_VEH_WALKER;   /* a placed walker keeps to its path: the gunner aims and fires */
            vh->throttle = vin->ly; vh->steer = vin->lx; vh->strafe = 0; vh->brake = false;
            if (vh->def->kind == AK_VEH_FLYER) { vh->brake = (vin->held & AK_BTN_L) != 0; if (p->invert_y) vh->throttle = -vh->throttle; }   /* L held: slow down */
            else if (vin->held & AK_BTN_L) { vh->strafe = vin->lx; vh->steer = 0; }   /* L held: strafe (hover craft) */
            vh->aim_yaw -= vin->rx * 2.0f * dt; vh->aim_pitch += (p->invert_y ? -vin->ry : vin->ry) * 1.5f * dt;
            if (vh->aim_yaw > 1.2f) vh->aim_yaw = 1.2f;
            if (vh->aim_yaw < -1.2f) vh->aim_yaw = -1.2f;
            if (vh->aim_pitch > 0.6f) vh->aim_pitch = 0.6f;
            if (vh->aim_pitch < -0.4f) vh->aim_pitch = -0.4f;
            if (rails) walker_route_step(p, v, dt); else ak_vehicle_update(vh, &p->col, p->cp.gravity, (vin->held & AK_BTN_CROSS) != 0, dt);
            if ((vin->held & AK_BTN_R) && p->aim_ok) vehicle_fire(p, m, v, p->aim_point, dt); else vh->volley_t = 0;
            if (p->aim_ok) vehicle_lock(p, vh, p->eye, p->aim, dt);                /* circle: the secondary (locked: guided) */
            if ((vin->held & AK_BTN_CIRCLE) && p->aim_ok) vehicle_fire2(p, m, v, p->aim_point, vh->locked ? vh->lock : -1);
            memcpy(p->ch.pos, vh->pos, 12); p->ch.yaw = vh->yaw + vh->aim_yaw; p->ch.vel[0] = p->ch.vel[1] = p->ch.vel[2] = 0;
        } else if (vh->driver > 0) {                                          /* a bot drives (its controls are set in bot_drive) */
            ak_vehicle_update(vh, &p->col, p->cp.gravity, p->bot[vh->driver - 1].boost, dt);
            memcpy(p->bot[vh->driver - 1].ch.pos, vh->pos, 12);
        } else if (p->vspawn[v].route && vh->def->kind == AK_VEH_WALKER) {      /* a placed walker: along its path at its walking pace, then it stands */
            walker_route_step(p, v, dt);
            {   /* its guns: the nearest enemy in its range within the head's reach (the game's walker gunnery is not traced) */
                static s32 cached[PLAY_MAX_VEH]; static f32 next[PLAY_MAX_VEH];   /* (looked for every half second) */
                if ((next[v] -= dt) <= 0) { next[v] = 0.5f; cached[v] = find_enemy(p, vh->team, vh->pos, vh->yaw, vh->def->hover + vh->def->height * 0.8f, vh->def->target_range > 0 ? vh->def->target_range : 100.0f, true); }
                s32 e = cached[v]; if (e >= 0 && !p->target[e].alive) e = cached[v] = -1;
                if (e >= 0 && vh->def->armed) {
                    const ak_target *en = &p->target[e];
                    f32 ex = en->feet[0] - vh->pos[0], ez = en->feet[2] - vh->pos[2], want = wrap(atan2f(-ex, -ez) - vh->yaw);
                    vh->aim_yaw += clampf(clampf(want, -1.2f, 1.2f) - vh->aim_yaw, -1.0f * dt, 1.0f * dt);
                    if (fabsf(want - vh->aim_yaw) < 0.25f) { f32 tg[3] = { en->feet[0], en->feet[1] + en->height * 0.5f, en->feet[2] }; vehicle_fire(p, m, v, tg, dt); }
                    else vh->volley_t = 0;
                } else vh->volley_t = 0;
            }
            if (ak_setting_int("AK_DEBUG_VEH", 0) > 1 && (int)(p->clock / 2.0f) != (int)((p->clock - dt) / 2.0f))
                AK_INFO("veh", "%.0f s: %s at %.1f %.1f %.1f, %.1f of %.0f m along its path", p->clock, vh->def->name, vh->pos[0], vh->pos[1], vh->pos[2], p->vspawn[v].route_d, p->vspawn[v].route->length);
        } else {                                                              /* empty: it brakes to a stop */
            vh->throttle = vh->steer = vh->strafe = 0; f32 k = expf(-4.0f * dt); vh->vel[0] *= k; vh->vel[2] *= k;
            ak_vehicle_update(vh, &p->col, p->cp.gravity, false, dt);
        }
        if (vh->driver == 0 && ak_setting_int("AK_DEBUG_VEH", 0)) AK_INFO("veh", "%s acc %.0f top %.0f pos %.1f %.1f %.1f vel %.1f %.1f %.1f yaw %.2f", vh->def->name, vh->def->max_acc, vh->def->top_speed, vh->pos[0], vh->pos[1], vh->pos[2], vh->vel[0], vh->vel[1], vh->vel[2], vh->yaw);
        if (vh->crashed) {                                                    /* flown into the level */
            p->target[VT(p, v)].alive = false; p->target[VT(p, v)].last_attacker = -1; vehicle_destroyed(p, m, v); vh->crashed = false; continue;
        }
        ak_vehicle_pose(vh, m, dt);
        if (ak_setting_int("AK_DEBUG_VEH", 0) > 1 && vh->def->turret_model >= 0) {
            f32 T[12]; if (ak_vehicle_marker(vh, m, vh->def->turret_marker, T)) AK_INFO("veh", "%s at %.1f %.1f %.1f: turret %s at %.1f %.1f %.1f", vh->def->name, vh->pos[0], vh->pos[1], vh->pos[2], m->models[vh->def->turret_model].name, T[3], T[7], T[11]); }
        vehicle_target(p, v);
        if (vh->pos[1] < -400.0f) { p->target[VT(p, v)].alive = false; }
    }
    for (u32 i = 0; i < p->nboom; i++) p->boom[i].t += dt;
    /* soldiers are solid to each other: push apart (two body radii) */
    {   f32 rr = p->cp.radius * 2;
        for (u32 i = 0; i < NS(p); i++) {
            if (!p->target[i].alive) continue;
            ak_character *a = i ? &p->bot[i - 1].ch : &p->ch;
            for (u32 v = 0; v < p->nveh; v++) {                                /* and out of the vehicles */
                const ak_vehicle *vh = &p->veh[v]; if (!vh->alive) continue;
                f32 vr = vh->def->radius + p->cp.radius, dx = a->pos[0] - vh->pos[0], dz = a->pos[2] - vh->pos[2], d2 = dx * dx + dz * dz;
                if (d2 >= vr * vr || d2 < 1e-8f || a->pos[1] > vh->pos[1] + vh->def->hover + vh->def->height || a->pos[1] + 2 < vh->pos[1]) continue;
                f32 d = sqrtf(d2); a->pos[0] += dx / d * (vr - d); a->pos[2] += dz / d * (vr - d);
            }
            for (u32 j = i + 1; j < NS(p); j++) {
                if (!p->target[j].alive) continue;
                ak_character *b = &p->bot[j - 1].ch;
                f32 dx = a->pos[0] - b->pos[0], dz = a->pos[2] - b->pos[2], d2 = dx * dx + dz * dz;
                if (d2 >= rr * rr || d2 < 1e-8f || fabsf(a->pos[1] - b->pos[1]) > 1.6f * S) continue;
                f32 d = sqrtf(d2), push = (rr - d) * 0.5f; dx /= d; dz /= d;
                a->pos[0] += dx * push; a->pos[2] += dz * push; b->pos[0] -= dx * push; b->pos[2] -= dz * push;
            }
        } }
    turrets_update(p, m, dt);
    if (p->have_cq) mobile_posts(p, m);
    ak_projs_update(&p->projs, &p->col, p->target, NT(p), p->cp.gravity, dt, proj_boom, p);
    /* the shots in flight */
    bool alive_before[PLAY_MAX_TARGETS];
    for (u32 i = 0; i < nt; i++) alive_before[i] = p->target[i].alive;
    heroes_drain(p, dt);
    for (u32 i = 0; i < nt; i++) if (p->target[i].alive && p->target[i].health <= 0 && alive_before[i]) { p->target[i].health = 0; p->target[i].alive = false; }   /* saber strokes */
    ak_bolts_update(&p->bolts, &p->col, p->target, nt, dt);
    {   int td = ak_setting_int("AK_TEST_HURT", 0);                         /* tests: damage per second to the soldier */
        if (td && p->alive) { p->target[0].health -= (f32)td * dt; if (p->target[0].health <= 0) { p->target[0].health = 0; p->target[0].alive = false; } } }
    /* who fell this frame: a ticket each, the kill to whoever shot last */
    for (u32 i = 0; i < nt; i++) {
        if (!(alive_before[i] && !p->target[i].alive)) continue;
        if (i >= NV(p)) { turret_destroyed(p, i - NV(p)); continue; }
        if (i >= NS(p)) { vehicle_destroyed(p, m, i - NS(p)); continue; }
        if (p->target[i].last_attacker == 0 && i != 0) p->kills++;
        {   s32 a = p->target[i].last_attacker; ak_play_hero *h = hero_of(p, a);      /* a hero's kill heals it (HeroHealthAddPerKill) */
            if (h && p->target[a].alive && p->target[a].team != p->target[i].team) {
                ak_target *ht = &p->target[a]; ht->health += h->per_kill * h->health; if (ht->health > h->health) ht->health = h->health; } }
        if (i == 0) player_down(p);
        else {
            ak_play_bot *b = &p->bot[i - 1]; b->alive = false; b->dead_t = 0; b->state = PLAY_IDLE;
            if (p->have_cq) ak_conquest_killed(&p->rules, &p->match, b->team);
        }
    }
    p->health = p->target[0].health;
    /* falling out of the world */
    if (p->alive && p->ch.pos[1] < -400.0f) ak_play_damage(p, 1e6f);
    for (u32 i = 0; i < p->nbots; i++) if (p->bot[i].alive && p->bot[i].veh < 0 && p->bot[i].ch.pos[1] < -400.0f) {
        p->target[1 + i].alive = false; p->bot[i].alive = false; p->bot[i].dead_t = 0; if (p->have_cq) ak_conquest_killed(&p->rules, &p->match, p->bot[i].team); }
    /* conquest: the posts, the tickets, the spawn wave */
    bool wave = false;
    if (p->have_cq) {
        ak_cq_soldier sol[1 + PLAY_MAX_BOTS];
        for (u32 i = 0; i < NS(p); i++) {
            const ak_character *c = i ? &p->bot[i - 1].ch : &p->ch;
            sol[i].team = p->target[i].team; sol[i].alive = p->target[i].alive; sol[i].weight = 1.0f; memcpy(sol[i].pos, c->pos, 12);
            if (i && p->bot[i - 1].veh >= 0) { sol[i].alive = p->bot[i - 1].alive; sol[i].weight = 0; }   /* drivers do not capture */
        }
        sol[0].alive = p->alive; if (p->in_veh >= 0) { memcpy(sol[0].pos, p->veh[p->in_veh].pos, 12); sol[0].weight = 0; }   /* drivers do not capture */
        wave = ak_conquest_update(&p->cq, &p->rules, &p->match, sol, NS(p), dt);
        p->near_post = -1;
        for (u32 i = 0; i < p->cq.nposts && p->alive; i++) {
            f32 dx = p->ch.pos[0] - p->cq.post[i].pos[0], dy = p->ch.pos[1] - p->cq.post[i].pos[1], dz = p->ch.pos[2] - p->cq.post[i].pos[2];
            if (dx * dx + dy * dy + dz * dz <= p->rules.capture_radius * p->rules.capture_radius && !p->cq.post[i].disabled) p->near_post = (s32)i;
        }
    } else {                                                                  /* no posts: a wave every respawn delay */
        static f32 w; w += dt; if (w >= p->rules.respawn_delay) { w = 0; wave = true; }
    }
    heroes_update(p, m, dt);
    droids_update(p, dt);
    bool playing = !p->have_cq || p->match.winner < 0;
    if (wave && playing) {
        if (!p->alive && p->dead_t > 1.0f) {                                  /* back with the wave */
            f32 sp[3], syaw = p->ch.yaw;
            bool ok = p->have_cq ? (p->match.tickets[p->team] > 0 && spawn_spot(p, p->team, p->ch.pos, &p->seed, sp, &syaw)) : false;
            if (!p->have_cq) { memcpy(sp, p->ch.pos, 12); ok = true; }
            if (ok) {
                hero_unmake_player(p);
                ak_char_spawn(&p->ch, sp, syaw); p->alive = true; p->health = p->max_health; p->dead_t = 0; p->state = PLAY_IDLE; p->clip_t = 0;
                p->target[0].alive = true; p->target[0].health = p->max_health; p->target[0].last_attacker = -1;
                if (p->armed) { ak_weapon_give(&p->weapon, &p->wdef); p->weapon.team = p->team; p->weapon.owner = 0; }
            }
        }
        for (u32 i = 0; i < p->nbots; i++) {
            ak_play_bot *b = &p->bot[i];
            if (b->alive || b->dead_t < 1.0f || (p->have_cq && p->match.tickets[b->team] <= 0)) continue;
            bot_spawn(p, m, b, i);
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

bool ak_play_weapon_matrix(const ak_play *p, const ak_model_set *m, f32 out[12])
{
    if (!p->armed || !p->posed) return false;
    return weapon_world(m, &p->look, (const f32 (*)[12])p->bones, p->ch.pos, p->ch.yaw, out);
}

static void camera_for(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch, f32 *fovy);
void ak_play_camera(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch, f32 *fovy)
{
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
            *eye = ak_v3_make(c[0], c[1], c[2]);
            f32 lx = la[0] - c[0], ly = la[1] - c[1], lz = la[2] - c[2];
            *yaw = atan2f(-lx, -lz); *pitch = atan2f(ly, sqrtf(lx * lx + lz * lz)); *fovy = p->fov;
            p->aim_ok = true; p->eye[0] = c[0]; p->eye[1] = c[1]; p->eye[2] = c[2];
            p->aim[0] = -sinf(*yaw) * cosf(*pitch); p->aim[1] = sinf(*pitch); p->aim[2] = -cosf(*yaw) * cosf(*pitch);
            return;
        }
        f32 piv[3] = { vh->pos[0], vh->pos[1] + vh->def->hover + vh->def->height * 0.7f, vh->pos[2] };
        f32 want[3] = { sinf(y) * back, up - vh->def->height * 0.7f, cosf(y) * back }, wl = sqrtf(want[0] * want[0] + want[1] * want[1] + want[2] * want[2]);
        f32 dir[3] = { want[0] / wl, want[1] / wl, want[2] / wl }, lim = wl; ak_col_hit h;
        if (ak_col_raycast(&p->col, piv, dir, wl, AK_COL_NOT_BODIES, &h)) lim = h.t - 0.4f;
        if (lim < 1.0f) lim = 1.0f;
        if (lim < p->cam_dist) p->cam_dist += (lim - p->cam_dist) * fminf(1.0f, p->pull_in_rate * dt); else p->cam_dist += (lim - p->cam_dist) * fminf(1.0f, 2.0f * dt);
        if (p->cam_dist > lim) p->cam_dist = lim;
        f32 sc = p->cam_dist / wl;
        *eye = ak_v3_make(piv[0] + want[0] * sc, piv[1] + want[1] * sc, piv[2] + want[2] * sc);
        /* look over the vehicle at a point ahead of it, so tall walkers (camera 13 m up on an AT-ST) still frame their body */
        f32 fwd[3] = { -sinf(y), 0, -cosf(y) }, look[3] = { piv[0] + fwd[0] * 3.0f, piv[1] + 1.0f, piv[2] + fwd[2] * 3.0f };
        f32 lx = look[0] - eye->x, ly = look[1] - eye->y, lz = look[2] - eye->z;
        pt = atan2f(ly, sqrtf(lx * lx + lz * lz));
        *yaw = y; *pitch = pt + vh->aim_pitch; *fovy = p->fov;
        p->aim_ok = true; p->eye[0] = eye->x; p->eye[1] = eye->y; p->eye[2] = eye->z;
        p->aim[0] = -sinf(*yaw) * cosf(*pitch); p->aim[1] = sinf(*pitch); p->aim[2] = -cosf(*yaw) * cosf(*pitch);
        return;
    }
    int fb = ak_setting_int("AK_DEBUG_FOLLOW_BOT", 0);                       /* tests: watch bot N over its shoulder */
    if (fb > 0 && (u32)fb <= p->nbots) {
        ak_character keep = p->ch; p->ch = p->bot[fb - 1].ch; p->ch.pitch = 0.1f;
        camera_for(p, dt, eye, yaw, pitch, fovy); p->ch = keep; return;
    }
    camera_for(p, dt, eye, yaw, pitch, fovy);
    if (p->zoom > 0 && p->wdef.bp) {                                          /* zoomed: the view narrows by the level's magnification */
        char k[24]; snprintf(k, sizeof k, "WZoomMagnification%d", p->zoom);
        f32 mag = ak_bp_float(p->wdef.bp, k, 1.0f);                         /* the game's camera: field of view / magnification (0x0896EC88) */
        if (mag > 1.0f) *fovy /= mag;
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
    f32 y = p->ch.yaw + ak_setting_float("AK_DEBUG_CAM_ORBIT", 0);    /* (orbit: tests look from the side) */
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
    if (ak_col_raycast(&p->col, piv, dir, wl, AK_COL_NOT_BODIES, &h)) limit = h.t - 0.3f;
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
}

void ak_play_draw(ak_play *p, ak_scene_models *ms, const ak_model_set *m, const ak_m4 *vp, ak_scene_stats *st)
{
    if (!p->ready || !p->posed) return;
    static f32 gun[12];
    ak_frustum fr = ak_frustum_from(vp);
    if (p->in_veh < 0 && p->in_turret < 0 && p->zoom == 0) {                  /* (zoomed: the view is the soldier's own) */
        draw_soldier(ms, m, &p->look, p->ch.pos, p->ch.yaw, (const f32 (*)[12])p->bones, vp, st);
        if (p->armed && p->alive && ak_play_weapon_matrix(p, m, gun)) draw_weapon(ms, m, &p->wdef, gun, vp, st);
    }
    for (u32 v = 0; v < p->nveh; v++) {                                       /* the vehicles (and their turrets) */
        const ak_vehicle *vh = &p->veh[v];
        if (!vh->def || !(vh->alive || (vh->def->kind == AK_VEH_WALKER && vh->dead_t < 8.0f))) continue;
        f32 M[12]; ak_vehicle_matrix(vh, M);
        f32 r = m->models[vh->def->model].radius, mn[3] = { M[3] - r, M[7] - r, M[11] - r }, mx[3] = { M[3] + r, M[7] + r, M[11] + r };
        if (!ak_frustum_aabb(&fr, mn, mx)) continue;
        {   ak_m4 gw = { { M[0], M[4], M[8], 0,  M[1], M[5], M[9], 0,  M[2], M[6], M[10], 0,  M[3], M[7], M[11], 1 } };
            ak_scene_models_draw(ms, (u32)vh->def->model, vp, &gw, vh->posed ? (const f32 (*)[12])vh->bones : NULL, NULL, st); }
        f32 T[12];
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
        if ((!b->alive && b->dead_t > 8.0f) || b->veh >= 0) continue;            /* the fallen fade from the field; drivers are inside */
        f32 mn[3] = { b->ch.pos[0] - 1, b->ch.pos[1] - 0.2f, b->ch.pos[2] - 1 }, mx[3] = { b->ch.pos[0] + 1, b->ch.pos[1] + 2.2f, b->ch.pos[2] + 1 };
        if (!ak_frustum_aabb(&fr, mn, mx)) continue;
        draw_soldier(ms, m, &b->look, b->ch.pos, b->ch.yaw, (const f32 (*)[12])b->bones, vp, st);
        if (b->alive && b->weapon.def && weapon_world(m, &b->look, (const f32 (*)[12])b->bones, b->ch.pos, b->ch.yaw, gun)) draw_weapon(ms, m, b->weapon.def, gun, vp, st);
    }
    static ak_vtx bv[(AK_MAX_BOLTS + AK_MAX_IMPACTS + AK_MAX_POSTS + PLAY_MAX_BOOMS + 4) * AK_BEAM_VERTS];
    ak_gfx_set_transform(NULL);
    u32 n = 0;
    if (p->have_cq) {                                                         /* the command posts: the game's cone of light and the owner's logo */
        static const char *logo[4] = { "republic_logo_blue", "cis_logo_blue", "alliance_logo_blue", "empire_logo_blue" };
        s32 cone = ak_models_find(m, "cone_of_light");
        f32 spin = p->clock * 6.2831853f / 3.13f;                             /* "logo_spin_move": a turn every 3.13 s */
        for (u32 i = 0; i < p->cq.nposts; i++) {
            if (p->cq.post[i].disabled) continue;
            const ak_post_state *ps = &p->match.post[i];
            static const f32 tc[3][4] = { { 0.45f, 0.75f, 1.5f, 1 }, { 1.5f, 0.4f, 0.3f, 1 }, { 1.0f, 1.0f, 1.0f, 1 } };   /* ours, theirs, neutral */
            /* the colour follows the capture: an owned post fades to white as it is drained, a neutral one from white to its
               capturer's colour as the capture fills */
            f32 full = p->cq.post[i].amount > 0 ? p->cq.post[i].amount : 1, k = 0; int side = 2;
            if (ps->owner < 2) { side = ps->owner == p->team ? 0 : 1; k = ps->progress / full; }
            else if (ps->capturing < 2) { side = ps->capturing == p->team ? 0 : 1; k = 1 - ps->progress / full; }
            k = k < 0 ? 0 : k > 1 ? 1 : k;
            static f32 glow = -1; if (glow < 0) glow = ak_setting_float("AK_POST_GLOW", 0.75f);   /* the light's strength: 0 unlit .. 1 full */
            f32 col[4]; for (int c = 0; c < 4; c++) col[c] = (tc[2][c] + (tc[side][c] - tc[2][c]) * k) * (c < 3 ? glow : 1.0f);
            const f32 *pp = p->cq.post[i].pos;
            ak_gfx_set_tint(col);
            ak_scene_force_pipe(AK_PIPE_ADD);                                  /* the hologram is light: additive, unlit */
            if (cone >= 0) { ak_m4 w; world_of(pp, p->cq.post[i].yaw, &w); ak_scene_models_draw(ms, (u32)cone, vp, &w, NULL, NULL, st); }
            if (ps->owner < 2) {
                s32 lg = ak_models_find(m, logo[p->team_faction[ps->owner] & 3]);
                if (lg >= 0) { f32 lp[3] = { pp[0], pp[1] + 1.25f, pp[2] }; ak_m4 w; world_of(lp, spin + (f32)i, &w); ak_scene_models_draw(ms, (u32)lg, vp, &w, NULL, NULL, st); }
            }
            ak_scene_force_pipe(-1);
        }
        ak_gfx_set_tint(NULL);
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
}
