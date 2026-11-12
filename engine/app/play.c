/* Aurek - play mode (see play.h) */
#include <math.h>
#include <string.h>
#include "app/play.h"
#include "core/ak_settings.h"

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
        ak_anim_sample(c, sk, t, loop, lq, lt); ak_skeleton_pose_matrices(sk, lq, (const f32 (*)[3])lt, bones);
    } else ak_skeleton_bind_matrices(sk, bones);
}

static void world_of(const f32 *pos, f32 yaw, ak_m4 *w)
{
    f32 s = sinf(yaw), c = cosf(yaw);
    ak_m4 r = { { c, 0, -s, 0,  0, 1, 0, 0,  s, 0, c, 0,  pos[0], pos[1], pos[2], 1 } }; *w = r;
}

static void draw_soldier(ak_scene_models *ms, const ak_model_set *m, const ak_soldier_look *lk, const f32 *pos, f32 yaw, const f32 (*bones)[12],
                         const ak_m4 *vp, ak_scene_stats *st)
{
    /* (a soldier is drawn whole: the first-person view leaves its own soldier out at the caller, so only that viewer misses it) */
    static f32 head[1][12];
    const ak_model *body = &m->models[lk->body];
    if (body->skeleton < 0) return;
    ak_m4 w; world_of(pos, yaw, &w);
    ak_model_colours col = { lk->rgb1, lk->rgb2 };
    ak_scene_models_draw(ms, (u32)lk->body, vp, &w, bones, &col, st);
    if (lk->head >= 0) {
        ak_soldier_head_matrix(body, &m->skels[body->skeleton], lk->head_bone, bones, head[0]);
        ak_scene_models_draw(ms, (u32)lk->head, vp, &w, (const f32 (*)[12])head, &col, st);
    }
}

/* the dummy's target shape from its pose: body capsule from the feet, head sphere at the head (world) */
static void dummy_target(const ak_model_set *m, const ak_play_dummy *d, ak_target *t)
{
    memcpy(t->feet, d->pos, 12); t->height = 1.45f; t->radius = 0.35f; t->head_radius = 0.2f;
    f32 h[12]; const ak_model *body = &m->models[d->look.body];
    ak_soldier_head_matrix(body, &m->skels[body->skeleton], d->look.head_bone, (const f32 (*)[12])d->bones, h);
    f32 s = sinf(d->yaw), c = cosf(d->yaw), lx = h[3], ly = h[7] + 0.1f, lz = h[11];
    t->head[0] = d->pos[0] + c * lx + s * lz; t->head[1] = d->pos[1] + ly; t->head[2] = d->pos[2] - s * lx + c * lz;
}

bool ak_play_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a, const char *body, const f32 *start)
{
    memset(p, 0, sizeof *p);
    if (!ak_collision_load(l, a, &p->col)) return false;
    p->have_nav = ak_nav_load(l, a, &p->nav);
    ak_char_params_load(bp, &p->cp);
    if (!ak_soldier_look_make(bp, m, body, ak_setting_int("AK_HEAD", 0), ak_setting_int("AK_COLOUR1", -1), ak_setting_int("AK_COLOUR2", -1), &p->look)) {
        /* this level has no such body: the first Humanoid blueprint that has one */
        const ak_bp_type *t = ak_bp_find_type(bp, "Humanoid"); bool ok = false;
        for (u32 i = 0; t && i < t->nobjects && !ok; i++)
            if (*ak_bp_string(&t->objects[i], "Head 1", "")) ok = ak_soldier_look_make(bp, m, t->objects[i].name, 0, -1, -1, &p->look);
        if (!ok) return false;
    }
    f32 sp[3] = { start[0], start[1], start[2] }, gy;
    if (p->have_nav) { s32 n = ak_nav_nearest(&p->nav, start, 1e6f); if (n >= 0) memcpy(sp, p->nav.node[n].pos, 12); }
    if (ak_char_ground_below(&p->col, sp, 50.0f, &gy)) sp[1] = gy;
    ak_char_spawn(&p->ch, sp, 0);
    static const char *idle[] = { "Human_Rifle_Stand_Idle_lookaround2", "Human_Rifle_Stand_Idle_checkweap", NULL };
    static const char *run[] = { "Human_Rifle_Stand_RunForward", NULL }, *back[] = { "Human_Rifle_Stand_RunBackward", "Human_Rifle_Stand_WalkBackward", NULL };
    static const char *left[] = { "Human_Rifle_Stand_RunForward_left", NULL }, *right[] = { "Human_Rifle_Stand_RunForward_Right", NULL };
    static const char *jump[] = { "Human_Rifle_jump", NULL }, *fall[] = { "Human_Rifle_JumpFall", NULL }, *land[] = { "Human_Rifle_Jump_Land_Soft", "Human_Rifle_Jump_Land", NULL };
    p->clip[PLAY_IDLE] = find_clip(m, idle); p->clip[PLAY_RUN] = find_clip(m, run); p->clip[PLAY_BACK] = find_clip(m, back);
    p->clip[PLAY_LEFT] = find_clip(m, left); p->clip[PLAY_RIGHT] = find_clip(m, right); p->clip[PLAY_JUMP] = find_clip(m, jump);
    p->clip[PLAY_FALL] = find_clip(m, fall); p->clip[PLAY_LAND] = find_clip(m, land);
    const ak_bp_object *cam = ak_bp_find(bp, "Camera", "humanoid 3rd person");
    p->fov = (f32)ak_bp_int(cam, "fov", 60) * 3.14159265f / 180.0f;
    p->pivot_h = ak_bp_float(cam, "pivot height stand", 1.5f); p->pivot_x = ak_bp_float(cam, "pivot x offset", 0.3f);
    p->cam_back = -ak_bp_float(cam, "desired z offset", -7.0f); p->cam_up = -ak_bp_float(cam, "desired y offset", -0.5f);   /* game y points down */
    p->cam_side = ak_bp_float(cam, "desired x offset", -0.2f);
    p->pull_out_rate = ak_bp_float(cam, "pull out rate", 1.0f); p->pull_in_rate = ak_bp_float(cam, "pull in rate", 15.0f);
    p->cam_dist = p->cam_back;
    {   const char *cm = ak_setting_str("AK_CAMERA_MODE", "third"), *sc = ak_setting_str("AK_CONTROLS", "modern"), *cs = ak_setting_str("AK_CAM_STYLE", "modern");
        p->cam_mode = cm[0] == 'f'; p->scheme = sc[0] == 'c'; p->style = cs[0] == 'c';
        const ak_bp_object *ctl = ak_bp_find(bp, "Controls", "Humanoid");
        p->aim_yaw_speed = ak_setting_float("AK_AIM_SPEED", 3.2f); p->aim_pitch_speed = p->aim_yaw_speed * 0.7f;
        p->aim_curve = ak_setting_float("AK_AIM_CURVE", 2.0f); p->invert_y = ak_setting_int("AK_INVERT_Y", 0) != 0;
        p->fov_third = (p->style ? p->fov * 180.0f / 3.14159265f : ak_setting_float("AK_FOV_THIRD", 55.0f)) * 3.14159265f / 180.0f;
        p->fov_first = ak_setting_float("AK_FOV_FIRST", 62.0f) * 3.14159265f / 180.0f;
        p->near_first = 0.08f;
        p->vm_offset[0] = 0.20f; p->vm_offset[1] = -0.21f; p->vm_offset[2] = 0.40f;          /* right, up, forward of the eye */
        p->lock = -1; p->lock_range = ak_bp_float(ctl, "targeting range", 50.0f); p->lock_turn = ak_bp_float(ctl, "aim yaw speed", 3.5f);
        p->lock_head_time = ak_bp_float(ctl, "lock on to head time", 5.0f);
        if (!p->style) { p->pivot_h = 1.55f; p->pivot_x = 0.0f; p->cam_back = 1.8f; p->cam_up = 0.05f; p->cam_side = 0.6f; p->cam_dist = p->cam_back; }
    }
    p->armed = ak_weapon_def_load(bp, m, ak_setting_str("AK_WEAPON", "BlasterRifle"), p->look.faction, &p->wdef);
    if (p->armed) ak_weapon_give(&p->weapon, &p->wdef);
    p->seed = 12345;
    {   /* target dummies: the other side's first class, on nav nodes 8..40 m ahead */
        static const char *enemy[5] = { "Battle_Droid", "Clonetrooper", "Stormtrooper", "MediumRebel", "Stormtrooper" };
        static const char *idle[] = { "Human_Rifle_Stand_Idle_lookaround2", "Human_Rifle_Stand_Idle_checkweap", NULL };
        static const char *d1[] = { "Human_Rifle_Stand_Death_backwards", NULL }, *d2[] = { "Human_Rifle_Stand_Death_left", NULL }, *d3[] = { "Human_Rifle_Stand_Death_right", NULL };
        p->idle_clip = find_clip(m, idle); p->death_clips[0] = find_clip(m, d1); p->death_clips[1] = find_clip(m, d2); p->death_clips[2] = find_clip(m, d3);
        u32 want = (u32)ak_setting_int("AK_DUMMIES", PLAY_DUMMIES); if (want > PLAY_DUMMIES) want = PLAY_DUMMIES;
        ak_soldier_look el;
        bool have = ak_soldier_look_make(bp, m, enemy[p->look.faction <= 4 ? p->look.faction : 4], 0, -1, -1, &el);
        f32 fwd[2] = { -sinf(p->ch.yaw), -cosf(p->ch.yaw) };
        for (u32 i = 0; have && p->have_nav && i < p->nav.nnode && p->ndummy < want; i++) {
            const f32 *np = p->nav.node[i].pos; f32 dx = np[0] - p->ch.pos[0], dz = np[2] - p->ch.pos[2], d = sqrtf(dx * dx + dz * dz);
            if (d < 8 || d > 40 || (dx * fwd[0] + dz * fwd[1]) < d * 0.8f || fabsf(np[1] - p->ch.pos[1]) > 4) continue;
            bool near = false; for (u32 k = 0; k < p->ndummy; k++) { f32 ex = np[0] - p->dummy[k].pos[0], ez = np[2] - p->dummy[k].pos[2]; if (ex * ex + ez * ez < 9) near = true; }
            f32 gy; if (near || !ak_char_ground_below(&p->col, np, 3, &gy)) continue;
            ak_play_dummy *dm = &p->dummy[p->ndummy]; memset(dm, 0, sizeof *dm);
            dm->look = el; dm->look.head_index = (u8)(p->ndummy % 3);
            ak_soldier_look_make(bp, m, enemy[p->look.faction <= 4 ? p->look.faction : 4], p->ndummy % 3, -1, -1, &dm->look);
            dm->pos[0] = np[0]; dm->pos[1] = gy; dm->pos[2] = np[2]; dm->yaw = atan2f(dx, dz);   /* facing the player */
            dm->t = (f32)p->ndummy * 0.37f; dm->death_clip = p->death_clips[p->ndummy % 3];
            ak_target *t = &p->target[p->ndummy];
            t->health = ak_bp_float(dm->look.bp, "Health", 100.0f); t->headshot_mult = ak_bp_float(dm->look.bp, "Headshot multiplier", 4.0f); t->alive = true;
            pose(m, &dm->look, p->idle_clip, dm->t, true, dm->bones);
            dummy_target(m, dm, t);
            p->ndummy++;
        }
    }
    p->ready = true;
    return true;
}

void ak_play_update(ak_play *p, const ak_model_set *m, const ak_input *in, f32 dt)
{
    if (!p->ready) return;
    if (in->pressed & AK_BTN_UP) p->cam_mode = !p->cam_mode;            /* d-pad up: third / first person */
    ak_char_input ci = { in->lx, in->ly, in->rx, in->ry, (in->pressed & AK_BTN_CROSS) != 0 };
    if (!p->scheme) {
        /* modern: free aim with a response curve (fine near the centre, fast at the edge); the body turns with the aim */
        f32 ax = in->rx, ay = p->invert_y ? -in->ry : in->ry;
        f32 cx = copysignf(powf(fabsf(ax), p->aim_curve), ax), cy = copysignf(powf(fabsf(ay), p->aim_curve), ay);
        p->ch.yaw -= cx * p->aim_yaw_speed * dt; p->ch.pitch += cy * p->aim_pitch_speed * dt;
        if (p->ch.pitch > 1.35f) p->ch.pitch = 1.35f;
        if (p->ch.pitch < -1.35f) p->ch.pitch = -1.35f;
        ci.look_x = ci.look_y = 0;
    } else {
        /* classic: L holds a lock-on; the facing turns toward the target */
        if (in->held & AK_BTN_L) {
            if (p->lock < 0 || !p->target[p->lock].alive) {
                f32 best = 0.5f; p->lock = -1; p->lock_t = 0;
                f32 fx = -sinf(p->ch.yaw), fz = -cosf(p->ch.yaw);
                for (u32 i = 0; i < p->ndummy; i++) {
                    if (!p->target[i].alive) continue;
                    f32 dx = p->target[i].feet[0] - p->ch.pos[0], dz = p->target[i].feet[2] - p->ch.pos[2], d = sqrtf(dx * dx + dz * dz);
                    if (d > p->lock_range || d < 0.5f) continue;
                    f32 c = (dx * fx + dz * fz) / d;                            /* in front, the closest to the facing */
                    if (c > best) { best = c; p->lock = (s32)i; }
                }
            }
            if (p->lock >= 0) {
                p->lock_t += dt;
                const ak_target *t = &p->target[p->lock];
                f32 dx = t->feet[0] - p->ch.pos[0], dz = t->feet[2] - p->ch.pos[2];
                f32 want = atan2f(-dx, -dz), dyaw = want - p->ch.yaw;
                while (dyaw > 3.14159265f) dyaw -= 6.2831853f;
                while (dyaw < -3.14159265f) dyaw += 6.2831853f;
                f32 mx = p->lock_turn * dt; p->ch.yaw += dyaw > mx ? mx : dyaw < -mx ? -mx : dyaw;
                ci.look_x = 0;
            }
        } else p->lock = -1;
    }
    bool was_ground = p->ch.on_ground;
    ak_char_update(&p->ch, &p->cp, &p->col, &ci, dt);
    /* the clip for the state */
    f32 sy = sinf(p->ch.yaw), cy = cosf(p->ch.yaw);
    f32 fwd = -sy * p->ch.vel[0] - cy * p->ch.vel[2], side = cy * p->ch.vel[0] - sy * p->ch.vel[2], hs = sqrtf(fwd * fwd + side * side);
    int st;
    if (!p->ch.on_ground) st = p->ch.vel[1] > 0 && p->ch.jumped ? PLAY_JUMP : PLAY_FALL;
    else if (!was_ground && p->ch.air_time > 0.4f) { st = PLAY_LAND; p->land_t = 0.25f; }
    else if (p->land_t > 0 && hs < 1.0f) st = PLAY_LAND;
    else if (hs < 0.5f) st = PLAY_IDLE;
    else if (fabsf(side) > fabsf(fwd)) st = side > 0 ? PLAY_RIGHT : PLAY_LEFT;
    else st = fwd >= 0 ? PLAY_RUN : PLAY_BACK;
    p->land_t -= dt;
    if (p->clip[st] < 0) st = p->clip[PLAY_RUN] >= 0 && hs >= 0.5f ? PLAY_RUN : PLAY_IDLE;
    if (st != p->state) { p->state = st; p->clip_t = 0; }
    f32 rate = 1.0f;
    if (st == PLAY_RUN || st == PLAY_BACK || st == PLAY_LEFT || st == PLAY_RIGHT) rate = hs / p->cp.run_speed;   /* feet keep pace */
    if (rate < 0.3f) rate = 0.3f;
    p->clip_t += dt * rate;
    /* the pose (the weapon rides it) */
    p->posed = m->models[p->look.body].skeleton >= 0 && m->skels[m->models[p->look.body].skeleton].nbones <= 64;
    if (p->posed) pose(m, &p->look, p->clip[p->state], p->clip_t, p->state != PLAY_JUMP && p->state != PLAY_LAND, p->bones);
    /* the weapon */
    if (p->armed) {
        ak_weapon_update(&p->weapon, dt, !p->scheme && (in->pressed & AK_BTN_L) != 0);   /* classic: reloads when empty */
        f32 gun[12], muz[3];
        if ((in->held & AK_BTN_R) && p->aim_ok && ak_play_weapon_matrix(p, m, gun)) {   /* (the camera has aimed once) */
            const ak_marker *mz = p->wdef.model >= 0 ? ak_model_marker(&m->models[p->wdef.model], "muz") : NULL;
            f32 lp[3] = { 0, 0, 0 }; if (mz) { lp[0] = mz->m[3]; lp[1] = mz->m[7]; lp[2] = mz->m[11]; }
            for (int r = 0; r < 3; r++) muz[r] = gun[r * 4] * lp[0] + gun[r * 4 + 1] * lp[1] + gun[r * 4 + 2] * lp[2] + gun[r * 4 + 3];
            /* aim: where the camera's centre line meets the level (or the weapon's reach) */
            f32 tgt[3]; ak_col_hit h; f32 reach = p->wdef.distance;
            if (ak_col_raycast(&p->col, p->eye, p->aim, reach, 0, &h)) memcpy(tgt, h.pos, 12);
            else for (int k = 0; k < 3; k++) tgt[k] = p->eye[k] + p->aim[k] * reach;
            if (p->scheme && p->lock >= 0 && p->target[p->lock].alive) {      /* classic lock-on: the chest, then the head */
                const ak_target *t = &p->target[p->lock];
                if (p->lock_t >= p->lock_head_time) memcpy(tgt, t->head, 12); else { memcpy(tgt, t->feet, 12); tgt[1] += 1.1f; }
            }
            {   int ta = ak_setting_int("AK_TEST_AIM", 0);                    /* tests: 1 = dummy 0's chest, 2 = its head */
                if (ta && p->ndummy && p->target[0].alive) {
                    if (ta == 2) memcpy(tgt, p->target[0].head, 12);
                    else { memcpy(tgt, p->target[0].feet, 12); tgt[1] += 1.1f; }
                } }
            u32 fired = ak_weapon_fire(&p->weapon, &p->bolts, &p->col, p->target, p->ndummy, muz, tgt, &p->seed);
            if (fired && p->bolts.fired <= 3 && ak_setting_int("AK_DEBUG_SHOTS", 0))
                AK_INFO("play", "shot %u: soldier %.2f %.2f %.2f  muzzle %.2f %.2f %.2f  target %.1f %.1f %.1f  eye %.1f %.1f %.1f", p->bolts.fired,
                        p->ch.pos[0], p->ch.pos[1], p->ch.pos[2], muz[0], muz[1], muz[2], tgt[0], tgt[1], tgt[2], p->eye[0], p->eye[1], p->eye[2]);
        }
    }
    ak_bolts_update(&p->bolts, &p->col, p->target, p->ndummy, dt);
    for (u32 i = 0; i < p->ndummy; i++) {
        ak_play_dummy *d = &p->dummy[i]; ak_target *t = &p->target[i];
        d->t += dt;
        if (!t->alive) {
            if (d->dead_t == 0) { p->kills++; d->t = 0; }
            d->dead_t += dt;
            if (d->dead_t > 4.0f) {                                         /* up again */
                d->dead_t = 0; t->alive = true; t->health = ak_bp_float(d->look.bp, "Health", 100.0f); d->t = 0;
            }
            pose(m, &d->look, d->death_clip, d->t, false, d->bones);
        } else { pose(m, &d->look, p->idle_clip, d->t, true, d->bones); dummy_target(m, d, t); }
    }
}

bool ak_play_weapon_matrix(const ak_play *p, const ak_model_set *m, f32 out[12])
{
    if (!p->armed || !p->posed) return false;
    if (p->cam_mode) {                                                      /* first person: the viewmodel */
        f32 sy = sinf(p->ch.yaw), cy = cosf(p->ch.yaw), pt = -p->ch.pitch, sp = sinf(pt), cp = cosf(pt);
        f32 f[3] = { -sy * cp, sp, -cy * cp }, r[3] = { cy, 0, -sy }, u[3] = { r[1] * f[2] - r[2] * f[1], r[2] * f[0] - r[0] * f[2], r[0] * f[1] - r[1] * f[0] };
        if (u[1] < 0) for (int k = 0; k < 3; k++) u[k] = -u[k];
        for (int k = 0; k < 3; k++) {
            out[k * 4 + 0] = r[k]; out[k * 4 + 1] = u[k]; out[k * 4 + 2] = -f[k];
            out[k * 4 + 3] = p->eye[k] + r[k] * p->vm_offset[0] + u[k] * p->vm_offset[1] + f[k] * p->vm_offset[2];
        }
        return true;
    }
    const ak_model *body = &m->models[p->look.body];
    const ak_marker *g = ak_model_marker(body, "gun");
    f32 local[12];
    if (g) ak_marker_matrix(p->bones[g->bone], g, local);
    else memcpy(local, p->bones[0], sizeof local);
    /* into the world: the soldier's yaw and position */
    f32 s = sinf(p->ch.yaw), c = cosf(p->ch.yaw);
    f32 W[12] = { c, 0, s, p->ch.pos[0],  0, 1, 0, p->ch.pos[1],  -s, 0, c, p->ch.pos[2] };
    for (int r = 0; r < 3; r++) {
        for (int q = 0; q < 4; q++) out[r * 4 + q] = W[r * 4] * local[q] + W[r * 4 + 1] * local[4 + q] + W[r * 4 + 2] * local[8 + q];
        out[r * 4 + 3] += W[r * 4 + 3];
    }
    return true;
}

f32 ak_play_near(const ak_play *p) { return p->cam_mode ? p->near_first : 0.25f; }

/* the head's world position from the pose (first-person eye) */
static void head_world(const ak_play *p, const ak_model_set *m, f32 *out)
{
    f32 h[12]; const ak_model *body = &m->models[p->look.body];
    ak_soldier_head_matrix(body, &m->skels[body->skeleton], p->look.head_bone, (const f32 (*)[12])p->bones, h);
    f32 s = sinf(p->ch.yaw), c = cosf(p->ch.yaw);
    out[0] = p->ch.pos[0] + c * h[3] + s * h[11]; out[1] = p->ch.pos[1] + h[7]; out[2] = p->ch.pos[2] - s * h[3] + c * h[11];
}

void ak_play_camera(ak_play *p, const ak_model_set *m, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch, f32 *fovy)
{
    f32 y = p->ch.yaw + ak_setting_float("AK_DEBUG_CAM_ORBIT", 0);    /* (orbit: tests look from the side) */
    f32 pt = p->style && !p->cam_mode ? -p->ch.pitch * 0.6f : -p->ch.pitch;
    f32 sy = sinf(y), cy = cosf(y);
    f32 right[3] = { cy, 0, -sy };
    f32 fwd[3] = { -sy * cosf(pt), sinf(pt), -cy * cosf(pt) };
    if (p->cam_mode && p->posed) {
        /* first person: at the eyes, looking along the aim */
        f32 hp[3]; head_world(p, m, hp);
        *eye = ak_v3_make(hp[0] + fwd[0] * 0.12f, hp[1] + 0.06f, hp[2] + fwd[2] * 0.12f);
        *yaw = y; *pitch = pt; *fovy = p->fov_first;
        p->cam_dist = p->cam_back;                                           /* the third-person camera starts out again */
    } else {
        f32 piv[3] = { p->ch.pos[0] + right[0] * p->pivot_x, p->ch.pos[1] + p->pivot_h, p->ch.pos[2] + right[2] * p->pivot_x };
        f32 want[3] = { -fwd[0] * p->cam_back + right[0] * p->cam_side, -fwd[1] * p->cam_back + p->cam_up, -fwd[2] * p->cam_back + right[2] * p->cam_side };
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
        if (p->style) {                                                      /* the game's camera: looks at a point ahead of the pivot */
            f32 lx = piv[0] + fwd[0] * 20.0f - eye->x, ly = piv[1] + fwd[1] * 20.0f - eye->y, lz = piv[2] + fwd[2] * 20.0f - eye->z;
            *yaw = atan2f(-lx, -lz); *pitch = atan2f(ly, sqrtf(lx * lx + lz * lz));
        } else { *yaw = y; *pitch = pt; }                                    /* modern: along the aim, parallel to it */
        *fovy = p->fov_third;
    }
    p->aim_ok = true;
    p->eye[0] = eye->x; p->eye[1] = eye->y; p->eye[2] = eye->z;
    p->aim[0] = -sinf(*yaw) * cosf(*pitch); p->aim[1] = sinf(*pitch); p->aim[2] = -cosf(*yaw) * cosf(*pitch);
}

void ak_play_draw(ak_play *p, ak_scene_models *ms, const ak_model_set *m, const ak_m4 *vp, ak_scene_stats *st)
{
    if (!p->ready || !p->posed) return;
    static f32 gun[1][12];
    const ak_model *body = &m->models[p->look.body];
    ak_m4 w; world_of(p->ch.pos, p->ch.yaw, &w);
    if (!p->cam_mode) draw_soldier(ms, m, &p->look, p->ch.pos, p->ch.yaw, (const f32 (*)[12])p->bones, vp, st);
    for (u32 i = 0; i < p->ndummy; i++) draw_soldier(ms, m, &p->dummy[i].look, p->dummy[i].pos, p->dummy[i].yaw, (const f32 (*)[12])p->dummy[i].bones, vp, st);
    if (p->armed && p->wdef.model >= 0 && p->cam_mode) {
        /* the viewmodel: the weapon in the lower right of the view, pointing along the aim (weapon models point down -z) */
        f32 sy = sinf(p->ch.yaw), cy = cosf(p->ch.yaw), pt = -p->ch.pitch, sp = sinf(pt), cp = cosf(pt);
        f32 f[3] = { -sy * cp, sp, -cy * cp }, r[3] = { cy, 0, -sy }, u[3] = { r[1] * f[2] - r[2] * f[1], r[2] * f[0] - r[0] * f[2], r[0] * f[1] - r[1] * f[0] };
        if (u[1] < 0) for (int k = 0; k < 3; k++) u[k] = -u[k];
        f32 o[3]; for (int k = 0; k < 3; k++) o[k] = p->eye[k] + r[k] * p->vm_offset[0] + u[k] * p->vm_offset[1] + f[k] * p->vm_offset[2];
        ak_m4 vw = { { r[0], r[1], r[2], 0,  u[0], u[1], u[2], 0,  -f[0], -f[1], -f[2], 0,  o[0], o[1], o[2], 1 } };
        ak_scene_models_draw(ms, (u32)p->wdef.model, vp, &vw, NULL, NULL, st);
    }
    if (p->armed && p->wdef.model >= 0 && !p->cam_mode) {
        const ak_marker *g = ak_model_marker(body, "gun");
        if (g) { ak_marker_matrix(p->bones[g->bone], g, gun[0]); ak_scene_models_draw(ms, (u32)p->wdef.model, vp, &w, (const f32 (*)[12])gun, NULL, st); }
    }
    static ak_vtx bv[AK_MAX_BOLTS * 6 + AK_MAX_IMPACTS * 6 + 12];
    ak_gfx_set_transform(NULL);
    u32 nv = ak_bolts_vertices(&p->bolts, p->eye, 0, bv, sizeof bv / sizeof bv[0]);
    if (nv) ak_gfx_draw_immediate(AK_PIPE_BLEND, NULL, bv, nv);
    nv = ak_bolts_vertices(&p->bolts, p->eye, 1, bv, sizeof bv / sizeof bv[0]);
    if (ak_setting_int("AK_DEBUG_QUAD", 0)) {      /* a test bolt across the view, 5 m ahead */
        ak_bolts t; memset(&t, 0, sizeof t); t.n = 1;
        f32 side[3] = { p->aim[2], 0, -p->aim[0] };
        for (int k = 0; k < 3; k++) { t.b[0].pos[k] = p->eye[k] + p->aim[k] * 5 + side[k] * 1.0f; t.b[0].dir[k] = side[k]; }
        t.b[0].travelled = 10; t.b[0].length = 2; t.b[0].thick = 0.3f; t.b[0].colour = 0xFFDD3D0Cu;
        nv += ak_bolts_vertices(&t, p->eye, 1, bv + nv, sizeof bv / sizeof bv[0] - nv);
    }
    if (nv) ak_gfx_draw_immediate(AK_PIPE_ADD, NULL, bv, nv);
}
