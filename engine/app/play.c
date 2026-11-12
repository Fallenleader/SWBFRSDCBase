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

static void pose(const ak_model_set *m, const ak_soldier_look *lk, s32 clip, f32 t, bool loop, f32 (*bones)[12]);
static ak_quat ak_quat_mul(ak_quat a, ak_quat b);
/* aim: radians up (+) / down (-) the spine leans, 0 = the clip as it is */
static f32 g_aim_pitch, g_arm_raise, g_arm_in;   /* arm raise: first person lifts the arms (and the weapon) into view at the shoulders */
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
        static ak_quat rot[64]; for (u32 i = 0; i < 64; i++) { rot[i].x = rot[i].y = rot[i].z = 0; rot[i].w = 1; }
        if (sk->nbones > 14) {
            for (int i = 0; i < AK_AIM_BONES; i++) { f32 h = g_aim_pitch * ak_aim_share[i] * 0.5f; rot[ak_aim_bone[i]] = (ak_quat){ sinf(h), 0, 0, cosf(h) }; }
            /* first person: lift the arms (about the body's right axis) and bring them in toward the middle (about the up axis; the
             * left arm turns the other way) - the shoulders are 7 (left) and 11 (right).  The lift is about the right axis of the
             * leaned chest, so it is applied after the lean (model space: lean x lift). */
            for (int side = 0; side < 2; side++) {
                f32 hr = g_arm_raise * 0.5f, hy = (side ? g_arm_in : -g_arm_in) * 0.5f, hp = g_aim_pitch * 0.5f;
                ak_quat lift = { sinf(hr), 0, 0, cosf(hr) }, in = { 0, sinf(hy), 0, cosf(hy) }, lean = { sinf(hp), 0, 0, cosf(hp) }, leanc = { -sinf(hp), 0, 0, cosf(hp) };
                ak_quat r = ak_quat_mul(lean, ak_quat_mul(ak_quat_mul(lift, in), leanc));
                if (g_arm_raise != 0 || g_arm_in != 0) rot[side ? 11 : 7] = r;
            }
        }
        ak_skeleton_pose_matrices_offset(sk, lq, (const f32 (*)[3])lt, rot, bones);
    } else ak_skeleton_bind_matrices(sk, bones);
}

static ak_quat ak_quat_mul(ak_quat a, ak_quat b)
{
    ak_quat r = { a.w * b.x + a.x * b.w + a.y * b.z - a.z * b.y, a.w * b.y - a.x * b.z + a.y * b.w + a.z * b.x,
                  a.w * b.z + a.x * b.y - a.y * b.x + a.z * b.w, a.w * b.w - a.x * b.x - a.y * b.y - a.z * b.z };
    return r;
}

static void world_of(const f32 *pos, f32 yaw, ak_m4 *w)
{
    f32 s = sinf(yaw), c = cosf(yaw);
    ak_m4 r = { { c, 0, -s, 0,  0, 1, 0, 0,  s, 0, c, 0,  pos[0], pos[1], pos[2], 1 } }; *w = r;
}

static void draw_soldier(ak_scene_models *ms, const ak_model_set *m, const ak_soldier_look *lk, const f32 *pos, f32 yaw, const f32 (*bones)[12],
                         const ak_m4 *vp, ak_scene_stats *st, bool hide_head)
{
    /* (a soldier is drawn whole: the first-person view leaves its own soldier out at the caller, so only that viewer misses it) */
    static f32 head[1][12];
    const ak_model *body = &m->models[lk->body];
    if (body->skeleton < 0) return;
    ak_m4 w; world_of(pos, yaw, &w);
    ak_model_colours col = { lk->rgb1, lk->rgb2 };
    ak_scene_models_draw(ms, (u32)lk->body, vp, &w, bones, &col, st);
    if (lk->head >= 0 && !hide_head) {
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
        p->cam_mode = cm[0] == 'f'; p->scheme = sc[0] == 'c'; p->style = cs[0] == 'c'; p->fp_body = ak_setting_int("AK_FP_BODY", 1) != 0;
        p->fp_eye_fwd = ak_setting_float("AK_FP_EYE_FWD", 0.12f); p->fp_eye_up = ak_setting_float("AK_FP_EYE_UP", 0.06f);
        p->fp_arm_raise = ak_setting_float("AK_FP_ARM_RAISE", 0.0f); p->fp_arm_in = ak_setting_float("AK_FP_ARM_IN", 0.0f);
        p->vm_offset[0] = ak_setting_float("AK_FP_GUN_RIGHT", 0.14f); p->vm_offset[1] = ak_setting_float("AK_FP_GUN_UP", -0.17f); p->vm_offset[2] = ak_setting_float("AK_FP_GUN_FWD", 0.30f);
        p->fp_blend = p->cam_mode ? 1 : 0;
        const ak_bp_object *ctl = ak_bp_find(bp, "Controls", "Humanoid");
        p->aim_yaw_speed = ak_setting_float("AK_AIM_SPEED", 3.2f); p->aim_pitch_speed = p->aim_yaw_speed * 0.7f;
        p->aim_curve = ak_setting_float("AK_AIM_CURVE", 2.0f); p->invert_y = ak_setting_int("AK_INVERT_Y", 0) != 0;
        p->fov_third = (p->style ? p->fov * 180.0f / 3.14159265f : ak_setting_float("AK_FOV_THIRD", 55.0f)) * 3.14159265f / 180.0f;
        p->fov_first = ak_setting_float("AK_FOV_FIRST", 62.0f) * 3.14159265f / 180.0f;
        p->near_first = 0.08f;
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

static void head_world(const ak_play *p, const ak_model_set *m, f32 *out);
/* 3x4 helpers (rows; rigid) */
static void m34_mul(const f32 *a, const f32 *b, f32 *o)
{
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) o[r * 4 + c] = a[r * 4] * b[c] + a[r * 4 + 1] * b[4 + c] + a[r * 4 + 2] * b[8 + c];
        o[r * 4 + 3] += a[r * 4 + 3];
    }
}
static void m34_inv(const f32 *a, f32 *o)
{
    for (int r = 0; r < 3; r++) for (int c = 0; c < 3; c++) o[r * 4 + c] = a[c * 4 + r];
    for (int r = 0; r < 3; r++) o[r * 4 + 3] = -(o[r * 4] * a[3] + o[r * 4 + 1] * a[7] + o[r * 4 + 2] * a[11]);
}

/* First person on the third-person body: the arms (left 7..10, right 11..14) and the weapon they hold are moved together, rigidly,
 * so the weapon sits where a first-person view holds it (p->vm_offset from the eye, pointing at the crosshair's point).  The
 * hands keep their grip and the clip still plays through the arms; only the shoulders part from the chest, behind the camera. */
static void fp_arms(ak_play *p, const ak_model_set *m)
{
    const ak_model *body = &m->models[p->look.body];
    const ak_marker *g = ak_model_marker(body, "gun");
    if (!g || g->bone >= 64 || p->fp_blend <= 0 || !p->aim_ok) return;
    f32 G[12]; ak_marker_matrix(p->bones[g->bone], g, G);                   /* the weapon as animated (model space) */
    /* where it should be (world): below and right of the eye, pointing at the aim point */
    f32 sy = sinf(p->ch.yaw), cy = cosf(p->ch.yaw), pt = -p->ch.pitch;
    /* this frame's eye and aim (the camera is placed after the update; last frame's would lag a running soldier by 0.2 m) */
    f32 r[3] = { cy, 0, -sy }, f0[3] = { -sy * cosf(pt), sinf(pt), -cy * cosf(pt) }, hp[3], eye[3];
    head_world(p, m, hp);
    eye[0] = hp[0] + f0[0] * p->fp_eye_fwd; eye[1] = hp[1] + p->fp_eye_up; eye[2] = hp[2] + f0[2] * p->fp_eye_fwd;
    f32 u0[3] = { r[1] * f0[2] - r[2] * f0[1], r[2] * f0[0] - r[0] * f0[2], r[0] * f0[1] - r[1] * f0[0] };
    if (u0[1] < 0) for (int k = 0; k < 3; k++) u0[k] = -u0[k];
    f32 P[3]; for (int k = 0; k < 3; k++) P[k] = eye[k] + r[k] * p->vm_offset[0] + u0[k] * p->vm_offset[1] + f0[k] * p->vm_offset[2];
    f32 f[3] = { p->aim_point[0] - P[0], p->aim_point[1] - P[1], p->aim_point[2] - P[2] }, fl = sqrtf(f[0] * f[0] + f[1] * f[1] + f[2] * f[2]);
    if (fl < 1.0f) memcpy(f, f0, 12); else for (int k = 0; k < 3; k++) f[k] /= fl;
    f32 x[3] = { f[1] * 0 - f[2] * 1, f[2] * 0 - f[0] * 0, f[0] * 1 - f[1] * 0 }, xl = sqrtf(x[0] * x[0] + x[1] * x[1] + x[2] * x[2]);   /* f x up = right */
    if (xl < 1e-4f) memcpy(x, r, 12); else for (int k = 0; k < 3; k++) x[k] /= xl;
    f32 y[3] = { x[1] * f[2] - x[2] * f[1], x[2] * f[0] - x[0] * f[2], x[0] * f[1] - x[1] * f[0] };   /* right x forward = up */
    f32 Vw[12] = { x[0], y[0], -f[0], P[0],  x[1], y[1], -f[1], P[1],  x[2], y[2], -f[2], P[2] };
    if (ak_setting_int("AK_DEBUG_FP", 0)) {
        static int n; if ((n++ % 10) == 0)
            AK_INFO("fp", "eye %.2f %.2f %.2f aim %.2f %.2f %.2f  P %.2f %.2f %.2f  aimpt %.1f %.1f %.1f  f.aim %.3f  yaw %.2f", p->eye[0], p->eye[1], p->eye[2],
                    p->aim[0], p->aim[1], p->aim[2], P[0], P[1], P[2], p->aim_point[0], p->aim_point[1], p->aim_point[2], f[0] * f0[0] + f[1] * f0[1] + f[2] * f0[2], p->ch.yaw);
    }
    /* into model space */
    f32 Wm[12] = { cy, 0, sy, p->ch.pos[0],  0, 1, 0, p->ch.pos[1],  -sy, 0, cy, p->ch.pos[2] }, Wi[12], V[12], Gi[12], D[12];
    m34_inv(Wm, Wi); m34_mul(Wi, Vw, V);
    m34_inv(G, Gi); m34_mul(V, Gi, D);                                      /* D takes the animated weapon to its place */
    if (p->fp_blend < 1) {                                                  /* easing in and out: part of the way (re-orthonormalised) */
        f32 b = p->fp_blend, I[12] = { 1, 0, 0, 0,  0, 1, 0, 0,  0, 0, 1, 0 };
        for (int i = 0; i < 12; i++) D[i] = I[i] + (D[i] - I[i]) * b;
        f32 *c0 = D, l;                                                     /* Gram-Schmidt on the columns */
        f32 a0[3] = { c0[0], c0[4], c0[8] }, a1[3] = { c0[1], c0[5], c0[9] };
        l = sqrtf(a0[0] * a0[0] + a0[1] * a0[1] + a0[2] * a0[2]); for (int k = 0; k < 3; k++) a0[k] /= l;
        f32 dp = a0[0] * a1[0] + a0[1] * a1[1] + a0[2] * a1[2]; for (int k = 0; k < 3; k++) a1[k] -= a0[k] * dp;
        l = sqrtf(a1[0] * a1[0] + a1[1] * a1[1] + a1[2] * a1[2]); for (int k = 0; k < 3; k++) a1[k] /= l;
        f32 a2[3] = { a0[1] * a1[2] - a0[2] * a1[1], a0[2] * a1[0] - a0[0] * a1[2], a0[0] * a1[1] - a0[1] * a1[0] };
        for (int k = 0; k < 3; k++) { D[k * 4] = a0[k]; D[k * 4 + 1] = a1[k]; D[k * 4 + 2] = a2[k]; }
    }
    for (int i = 7; i <= 14; i++) { f32 t[12]; m34_mul(D, p->bones[i], t); memcpy(p->bones[i], t, sizeof t); }
    {   /* clips that take the left hand off the weapon (jumps, falls, landings): in this view it stays where it last held it */
        f32 Gm[12], Gi2[12]; ak_marker_matrix(p->bones[g->bone], g, Gm); m34_inv(Gm, Gi2);
        f32 dx = p->bones[10][3] - Gm[3], dy = p->bones[10][7] - Gm[7], dz = p->bones[10][11] - Gm[11];
        bool holding = dx * dx + dy * dy + dz * dz < 0.45f * 0.45f && p->state != PLAY_JUMP && p->state != PLAY_FALL && p->state != PLAY_LAND;
        if (holding) { m34_mul(Gi2, p->bones[9], p->lh_rel[0]); m34_mul(Gi2, p->bones[10], p->lh_rel[1]); p->lh_ok = true; }
        else if (p->lh_ok) { m34_mul(Gm, p->lh_rel[0], p->bones[9]); m34_mul(Gm, p->lh_rel[1], p->bones[10]); }
    }
    /* the upper arms (8 left, 12 right) would reach back to shoulders that stayed with the chest: in this view only the forearms and
     * hands show, as in the DICE first person; their parts are collapsed to the elbow (nothing to draw) */
    if (p->fp_blend > 0.5f) for (int i = 8; i <= 12; i += 4) for (int r = 0; r < 3; r++) for (int c = 0; c < 3; c++) p->bones[i][r * 4 + c] = 0;
    /* each forearm turned about its wrist so the elbow hangs below, behind and outside the hand (in the weapon's axes): the arms then
     * come up from the bottom of the view to the grips, as in the DICE first person */
    if (p->fp_blend > 0.5f) {
        f32 Vx[3] = { V[0], V[4], V[8] }, Vy[3] = { V[1], V[5], V[9] }, Vf[3] = { -V[2], -V[6], -V[10] };
        for (int side = 0; side < 2; side++) {
            int fa = side ? 13 : 9, hd = side ? 14 : 10;
            f32 *B = p->bones[fa], Wr[3] = { p->bones[hd][3], p->bones[hd][7], p->bones[hd][11] }, E[3] = { B[3], B[7], B[11] };
            f32 a[3] = { Wr[0] - E[0], Wr[1] - E[1], Wr[2] - E[2] }, al = sqrtf(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
            if (al < 1e-4f) continue;
            f32 out = side ? -1.0f : 1.0f, d[3];
            for (int k = 0; k < 3; k++) d[k] = Vy[k] * 0.70f + Vf[k] * 0.55f + Vx[k] * 0.35f * out;
            f32 dl = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
            for (int k = 0; k < 3; k++) { a[k] /= al; d[k] /= dl; }
            f32 ax[3] = { a[1] * d[2] - a[2] * d[1], a[2] * d[0] - a[0] * d[2], a[0] * d[1] - a[1] * d[0] };
            f32 sn = sqrtf(ax[0] * ax[0] + ax[1] * ax[1] + ax[2] * ax[2]), cs = a[0] * d[0] + a[1] * d[1] + a[2] * d[2];
            if (sn < 1e-6f) continue;
            for (int k = 0; k < 3; k++) ax[k] /= sn;
            f32 ang = atan2f(sn, cs), c = cosf(ang), s1 = sinf(ang), t = 1 - c, x = ax[0], y = ax[1], z = ax[2];
            f32 R[12] = { t * x * x + c, t * x * y - s1 * z, t * x * z + s1 * y, 0,  t * x * y + s1 * z, t * y * y + c, t * y * z - s1 * x, 0,
                          t * x * z - s1 * y, t * y * z + s1 * x, t * z * z + c, 0 };
            for (int r = 0; r < 3; r++) R[r * 4 + 3] = Wr[r] - (R[r * 4] * Wr[0] + R[r * 4 + 1] * Wr[1] + R[r * 4 + 2] * Wr[2]);   /* about the wrist */
            f32 o[12]; m34_mul(R, B, o); memcpy(B, o, sizeof o);
        }
    }
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
    /* soldiers are solid to each other: push out of any standing dummy (two body radii apart) */
    for (u32 i = 0; i < p->ndummy; i++) {
        if (!p->target[i].alive) continue;
        f32 dx = p->ch.pos[0] - p->dummy[i].pos[0], dz = p->ch.pos[2] - p->dummy[i].pos[2], d2 = dx * dx + dz * dz, rr = p->cp.radius * 2;
        if (d2 < rr * rr && d2 > 1e-8f && fabsf(p->ch.pos[1] - p->dummy[i].pos[1]) < 1.6f) {
            f32 d = sqrtf(d2), push = rr - d; p->ch.pos[0] += dx / d * push; p->ch.pos[2] += dz / d * push;
        }
    }
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
    g_aim_pitch = ak_setting_int("AK_AIM_OFFSET", 1) ? -p->ch.pitch : 0;      /* the local soldier leans toward its aim */
    {   f32 want = p->cam_mode && p->fp_body ? 1.0f : 0.0f, k = fminf(1.0f, dt * 8.0f);   /* the lift eases in and out (~0.25 s) */
        p->fp_blend += (want - p->fp_blend) * k; if (fabsf(want - p->fp_blend) < 1e-3f) p->fp_blend = want; }
    g_arm_raise = p->fp_arm_raise * p->fp_blend; g_arm_in = p->fp_arm_in * p->fp_blend;
    if (p->posed) pose(m, &p->look, p->clip[p->state], p->clip_t, p->state != PLAY_JUMP && p->state != PLAY_LAND, p->bones);
    g_aim_pitch = g_arm_raise = g_arm_in = 0;
    if (p->posed && p->fp_body && m->skels[m->models[p->look.body].skeleton].nbones > 14) fp_arms(p, m);
    /* where the crosshair meets the level: shots go there, and the held weapon is turned to point at it */
    if (p->aim_ok) {
        ak_col_hit h; f32 reach = p->armed ? p->wdef.distance : 750.0f;
        if (ak_col_raycast(&p->col, p->eye, p->aim, reach, 0, &h)) memcpy(p->aim_point, h.pos, 12);
        else for (int k = 0; k < 3; k++) p->aim_point[k] = p->eye[k] + p->aim[k] * reach;
    }
    /* the weapon */
    if (p->armed) {
        ak_weapon_update(&p->weapon, dt, !p->scheme && (in->pressed & AK_BTN_L) != 0);   /* classic: reloads when empty */
        f32 gun[12], muz[3];
        if ((in->held & AK_BTN_R) && p->aim_ok && ak_play_weapon_matrix(p, m, gun)) {   /* (the camera has aimed once) */
            const ak_marker *mz = p->wdef.model >= 0 ? ak_model_marker(&m->models[p->wdef.model], "muz") : NULL;
            f32 lp[3] = { 0, 0, 0 }; if (mz) { lp[0] = mz->m[3]; lp[1] = mz->m[7]; lp[2] = mz->m[11]; }
            for (int r = 0; r < 3; r++) muz[r] = gun[r * 4] * lp[0] + gun[r * 4 + 1] * lp[1] + gun[r * 4 + 2] * lp[2] + gun[r * 4 + 3];
            /* aim: where the camera's centre line meets the level (or the weapon's reach) */
            f32 tgt[3]; memcpy(tgt, p->aim_point, 12);
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
    if (p->cam_mode && !p->fp_body) {                                       /* first person: the viewmodel */
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
    /* Turn the weapon about its grip so the barrel points at the crosshair's point (up to 20 degrees): the clip holds it toward the
     * body's facing, the aim offset only roughly.  The weapon's forward is its -z (the muzzle marker lies down -z). */
    if (p->aim_ok && ak_setting_int("AK_GUN_ALIGN", 1)) {
        f32 f[3] = { -out[2], -out[6], -out[10] }, g[3] = { out[3], out[7], out[11] };
        f32 d[3] = { p->aim_point[0] - g[0], p->aim_point[1] - g[1], p->aim_point[2] - g[2] };
        f32 fl = sqrtf(f[0] * f[0] + f[1] * f[1] + f[2] * f[2]), dl = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
        if (fl > 1e-6f && dl > 0.5f) {
            for (int k = 0; k < 3; k++) { f[k] /= fl; d[k] /= dl; }
            f32 ax[3] = { f[1] * d[2] - f[2] * d[1], f[2] * d[0] - f[0] * d[2], f[0] * d[1] - f[1] * d[0] };
            f32 sn = sqrtf(ax[0] * ax[0] + ax[1] * ax[1] + ax[2] * ax[2]), cs = f[0] * d[0] + f[1] * d[1] + f[2] * d[2];
            f32 ang = atan2f(sn, cs);
            if (sn > 1e-6f && ang < 0.35f) {
                for (int k = 0; k < 3; k++) ax[k] /= sn;
                f32 c = cosf(ang), s1 = sinf(ang), t = 1 - c, x = ax[0], y = ax[1], z = ax[2];
                f32 R[9] = { t * x * x + c, t * x * y - s1 * z, t * x * z + s1 * y,  t * x * y + s1 * z, t * y * y + c, t * y * z - s1 * x,
                             t * x * z - s1 * y, t * y * z + s1 * x, t * z * z + c };
                f32 o[12]; memcpy(o, out, sizeof o);
                for (int r = 0; r < 3; r++) for (int q = 0; q < 3; q++) out[r * 4 + q] = R[r * 3] * o[q] + R[r * 3 + 1] * o[4 + q] + R[r * 3 + 2] * o[8 + q];
            }
        }
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
        *eye = ak_v3_make(hp[0] + fwd[0] * p->fp_eye_fwd, hp[1] + p->fp_eye_up, hp[2] + fwd[2] * p->fp_eye_fwd);
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
    ak_m4 w; world_of(p->ch.pos, p->ch.yaw, &w);
    /* the local soldier: whole in third person; in its own first-person view either body-without-head (fp_body) or nothing (viewmodel) */
    bool vm = p->cam_mode && !p->fp_body;
    if (!vm) draw_soldier(ms, m, &p->look, p->ch.pos, p->ch.yaw, (const f32 (*)[12])p->bones, vp, st, p->cam_mode);
    for (u32 i = 0; i < p->ndummy; i++) draw_soldier(ms, m, &p->dummy[i].look, p->dummy[i].pos, p->dummy[i].yaw, (const f32 (*)[12])p->dummy[i].bones, vp, st, false);
    if (p->armed && p->wdef.model >= 0 && vm) {
        /* the viewmodel: the weapon in the lower right of the view, pointing along the aim (weapon models point down -z) */
        f32 sy = sinf(p->ch.yaw), cy = cosf(p->ch.yaw), pt = -p->ch.pitch, sp = sinf(pt), cp = cosf(pt);
        f32 f[3] = { -sy * cp, sp, -cy * cp }, r[3] = { cy, 0, -sy }, u[3] = { r[1] * f[2] - r[2] * f[1], r[2] * f[0] - r[0] * f[2], r[0] * f[1] - r[1] * f[0] };
        if (u[1] < 0) for (int k = 0; k < 3; k++) u[k] = -u[k];
        f32 o[3]; for (int k = 0; k < 3; k++) o[k] = p->eye[k] + r[k] * p->vm_offset[0] + u[k] * p->vm_offset[1] + f[k] * p->vm_offset[2];
        ak_m4 vw = { { r[0], r[1], r[2], 0,  u[0], u[1], u[2], 0,  -f[0], -f[1], -f[2], 0,  o[0], o[1], o[2], 1 } };
        ak_scene_models_draw(ms, (u32)p->wdef.model, vp, &vw, NULL, NULL, st);
    }
    if (p->armed && p->wdef.model >= 0 && !vm && ak_play_weapon_matrix(p, m, gun[0])) {
        const f32 *G = gun[0];
        ak_m4 gw = { { G[0], G[4], G[8], 0,  G[1], G[5], G[9], 0,  G[2], G[6], G[10], 0,  G[3], G[7], G[11], 1 } };
        ak_scene_models_draw(ms, (u32)p->wdef.model, vp, &gw, NULL, NULL, st);
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
