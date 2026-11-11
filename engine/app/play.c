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
    p->ready = true;
    return true;
}

void ak_play_update(ak_play *p, const ak_model_set *m, const ak_input *in, f32 dt)
{
    if (!p->ready) return;
    ak_char_input ci = { in->lx, in->ly, in->rx, in->ry, (in->pressed & AK_BTN_CROSS) != 0 };
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
    (void)m;
}

void ak_play_camera(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch)
{
    f32 y = p->ch.yaw, pt = -p->ch.pitch * 0.6f;
    f32 sy = sinf(y), cy = cosf(y);
    f32 right[3] = { cy, 0, -sy };
    f32 fwd[3] = { -sy * cosf(pt), sinf(pt), -cy * cosf(pt) };
    f32 piv[3] = { p->ch.pos[0] + right[0] * p->pivot_x, p->ch.pos[1] + p->pivot_h, p->ch.pos[2] + right[2] * p->pivot_x };
    f32 want[3] = { -fwd[0] * p->cam_back + right[0] * p->cam_side, -fwd[1] * p->cam_back + p->cam_up, -fwd[2] * p->cam_back + right[2] * p->cam_side };
    f32 wl = sqrtf(want[0] * want[0] + want[1] * want[1] + want[2] * want[2]), dir[3] = { want[0] / wl, want[1] / wl, want[2] / wl };
    f32 limit = wl; ak_col_hit h;
    if (ak_col_raycast(&p->col, piv, dir, wl, AK_COL_NOT_BODIES, &h)) limit = h.t - 0.3f;
    if (limit < 0.5f) limit = 0.5f;
    /* in at once (pull in rate), out slowly (pull out rate) */
    if (limit < p->cam_dist) p->cam_dist += (limit - p->cam_dist) * fminf(1.0f, p->pull_in_rate * dt);
    else p->cam_dist += (limit - p->cam_dist) * fminf(1.0f, p->pull_out_rate * dt * 4.0f);
    if (p->cam_dist > limit) p->cam_dist = limit;
    *eye = ak_v3_make(piv[0] + dir[0] * p->cam_dist, piv[1] + dir[1] * p->cam_dist, piv[2] + dir[2] * p->cam_dist);
    /* look at the pivot along the facing */
    f32 lx = piv[0] + fwd[0] * 20.0f - eye->x, ly = piv[1] + fwd[1] * 20.0f - eye->y, lz = piv[2] + fwd[2] * 20.0f - eye->z;
    *yaw = atan2f(-lx, -lz); *pitch = atan2f(ly, sqrtf(lx * lx + lz * lz));
}

void ak_play_draw(ak_play *p, ak_scene_models *ms, const ak_model_set *m, const ak_m4 *vp, ak_scene_stats *st)
{
    if (!p->ready) return;
    static ak_quat lq[64]; static f32 lt[64][3], bones[64][12], head[1][12];
    const ak_model *body = &m->models[p->look.body];
    if (body->skeleton < 0) return;
    const ak_skeleton *sk = &m->skels[body->skeleton];
    if (sk->nbones > 64) return;
    s32 ci = p->clip[p->state];
    if (ci >= 0) { bool loop = p->state != PLAY_JUMP && p->state != PLAY_LAND; ak_anim_sample(&m->clips[ci], sk, p->clip_t, loop, lq, lt); ak_skeleton_pose_matrices(sk, lq, (const f32 (*)[3])lt, bones); }
    else ak_skeleton_bind_matrices(sk, bones);
    f32 s = sinf(p->ch.yaw), c = cosf(p->ch.yaw);
    ak_m4 w = { { c, 0, -s, 0,  0, 1, 0, 0,  s, 0, c, 0,  p->ch.pos[0], p->ch.pos[1], p->ch.pos[2], 1 } };
    ak_model_colours col = { p->look.rgb1, p->look.rgb2 };
    ak_scene_models_draw(ms, (u32)p->look.body, vp, &w, (const f32 (*)[12])bones, &col, st);
    if (p->look.head >= 0) {
        ak_soldier_head_matrix(body, sk, p->look.head_bone, (const f32 (*)[12])bones, head[0]);
        ak_scene_models_draw(ms, (u32)p->look.head, vp, &w, (const f32 (*)[12])head, &col, st);
    }
}
