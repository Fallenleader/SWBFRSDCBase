/* Aurek - a soldier on foot (see ak_character.h) */
#include <math.h>
#include <string.h>
#include "game/ak_character.h"
#include "game/ak_loco.h"
#include "core/ak_settings.h"

#define BODY_IGNORE (AK_COL_NOT_BODIES | AK_COL_NOT_SOLDIERS)

void ak_char_params_load(const ak_blueprints *bp, ak_char_params *p)
{
    const ak_bp_object *c = ak_bp_find(bp, "Controls", "Humanoid");
    p->run_speed    = ak_bp_float(c, "max run speed", 6.0f);
    p->jump_impulse = ak_bp_float(c, "jump impulse", 6.0f);
    p->air_control  = ak_bp_float(c, "air control scale", 0.15f);
    p->air_speed    = ak_bp_float(c, "max air speed", 4.0f);
    p->yaw_speed    = ak_bp_float(c, "yaw speed", 4.0f);
    p->pitch_speed  = ak_bp_float(c, "pitch speed", 5.0f);
    /* sprint, traced (func 08993D38, at 0x08995A64..0x08995AD4): the speed limit is "max run speed"; while the sprint flag is set
     * (and stamina lasts) it is "max sprint speed" instead, whose default (no blueprint sets it) is 12.0 (the constant at 0x08AEE7A8) */
    p->sprint_speed = ak_bp_float(c, "max sprint speed", 12.0f);
    p->yaw_sprint   = ak_bp_float(c, "yaw sprint modifier", 0.25f);
    p->gravity  = ak_setting_float("AK_GRAVITY", 10.0f);      /* the game's: see ak_character.h */
    p->accel    = ak_setting_float("AK_RUN_ACCEL", 30.0f);   /* (no longer the player's ground motion - ak_loco.h; still the bots' and air control) PARITY(1.4 1.5) */
    p->radius   = ak_setting_float("AK_BODY_RADIUS", 0.35f);   /* PARITY(1.4) */
    p->height   = ak_setting_float("AK_BODY_HEIGHT", 1.8f);   /* PARITY(1.4) */
    p->step     = ak_setting_float("AK_STEP_HEIGHT", 0.45f);   /* PARITY(1.4) */
    p->walkable = cosf(ak_setting_float("AK_MAX_SLOPE_DEG", 45.0f) * 3.14159265f / 180.0f);
}

void ak_char_spawn(ak_character *c, const f32 *pos, f32 yaw)
{
    bool box = c->body_box; f32 mn[3], mx[3]; memcpy(mn, c->body_min, 12); memcpy(mx, c->body_max, 12);
    memset(c, 0, sizeof *c);
    memcpy(c->pos, pos, 12); c->yaw = yaw; c->ground_normal[1] = 1;
    c->body_box = box; memcpy(c->body_min, mn, 12); memcpy(c->body_max, mx, 12); c->body_yaw = 0; (void)yaw;   /* the body never turns: on the world axes */
}

/* ------------------------------------------------------------------ the game's body: swept box, move and slide */
#define SKIN 0.005f                                                    /* 088C4CF4: the stop short of a contact (0x08AEC804) */
#define WALKABLE 0.70710678f                                           /* 45 degrees (0x08AEC80C) */
static void body_place(const ak_character *c, f32 ctr[3], f32 ax[3][3], f32 h[3])
{
    f32 cy = cosf(c->body_yaw), sy = sinf(c->body_yaw);
    f32 lc[3]; for (int k = 0; k < 3; k++) { lc[k] = (c->body_min[k] + c->body_max[k]) * 0.5f; h[k] = (c->body_max[k] - c->body_min[k]) * 0.5f; }
    /* the soldiers' model matrix rows (play.c): { c, 0, s }, { 0, 1, 0 }, { -s, 0, c } - its columns are the box's axes */
    ax[0][0] = cy; ax[0][1] = 0; ax[0][2] = -sy;  ax[1][0] = 0; ax[1][1] = 1; ax[1][2] = 0;  ax[2][0] = sy; ax[2][1] = 0; ax[2][2] = cy;
    for (int k = 0; k < 3; k++) ctr[k] = c->pos[k] + ax[0][k] * lc[0] + ax[1][k] * lc[1] + ax[2][k] * lc[2];
}

/* move the box by `move` (sliding); returns whether it touched walkable ground (normal into *gn) */
static bool body_slide(ak_character *c, const ak_collision *col, f32 move[3], f32 *gn, bool *resting)
{
    bool ground = false; *resting = false;
    for (int pass = 0; pass < 10; pass++) {
        f32 L = sqrtf(move[0] * move[0] + move[1] * move[1] + move[2] * move[2]);
        if (L < 1e-4f) break;
        f32 ctr[3], ax[3][3], h[3], t, n[3]; u16 fl; bool edge = false;
        body_place(c, ctr, ax, h);
        if (!ak_col_box_sweep(col, ctr, (const f32 (*)[3])ax, h, move, BODY_IGNORE, &t, n, &fl, &edge)) {
            static int dbm = -1; if (dbm < 0) dbm = ak_setting_int("AK_DEBUG_BODY", 0);
            if (dbm >= 6) AK_INFO("body", "pass %d no hit: move %.4f %.4f %.4f from %.3f %.3f %.3f", pass, move[0], move[1], move[2], c->pos[0], c->pos[1], c->pos[2]);
            for (int k = 0; k < 3; k++) c->pos[k] += move[k]; break; }
        f32 adv = t * L - SKIN; if (adv < 0) adv = 0;
        if (t <= 0) for (int k = 0; k < 3; k++) c->pos[k] += n[k] * SKIN;   /* touching already (a corner just under it): back out to the skin */
        static int dbg = -1; if (dbg < 0) dbg = ak_setting_int("AK_DEBUG_BODY", 0);
        if ((dbg >= 4 && n[1] < WALKABLE) || dbg >= 5) AK_INFO("body", "pass %d t %.3f n %.2f %.2f %.2f flags %04x at %.2f %.2f %.2f", pass, t, n[0], n[1], n[2], fl, c->pos[0], c->pos[1], c->pos[2]);
        for (int k = 0; k < 3; k++) { c->pos[k] += move[k] / L * adv; move[k] *= 1.0f - adv / L; }
        /* resting on it (088C5508..088C5554): a face up to 45 degrees from level, an edge up to 10 degrees (cos 0.9848), or a surface
           flagged 0x0010 */
        if ((edge ? n[1] >= 0.9848f : n[1] >= WALKABLE) || (fl & 0x0010)) *resting = true;
        if (n[1] >= WALKABLE) { ground = true; memcpy(gn, n, 12); }      /* the soldier's own footing: walkable ground, any contact */
        f32 dm = move[0] * n[0] + move[1] * n[1] + move[2] * n[2], dv = c->vel[0] * n[0] + c->vel[1] * n[1] + c->vel[2] * n[2];
        if (dm < 0) for (int k = 0; k < 3; k++) move[k] -= n[k] * dm;                      /* slide on along the surface */
        if (dv < 0) for (int k = 0; k < 3; k++) c->vel[k] -= n[k] * dv;
        if (n[1] > 0 && n[1] < WALKABLE) { if (move[1] > 0) move[1] = 0; if (c->vel[1] > 0) c->vel[1] = 0; }   /* too steep: no climbing */
    }
    return ground;
}

static void body_update(ak_character *c, const ak_char_params *p, const ak_collision *col, f32 dt)
{
    if (!c->body_settled) {                                              /* a new body: set down on the ground below its feet, */
        c->body_settled = true;                                          /* resting on its lowest corner (a box placed by its   */
        f32 ctr[3], ax[3][3], h[3], t, n[3], drop[3] = { 0, -1.0f, 0 }; u16 fl;   /* centre on a slope would start inside it) */
        c->pos[1] += 0.5f; body_place(c, ctr, ax, h);
        if (ak_col_box_sweep(col, ctr, (const f32 (*)[3])ax, h, drop, BODY_IGNORE, &t, n, &fl, NULL) && t >= 0) c->pos[1] += -1.0f * t + SKIN;
        else c->pos[1] -= 0.5f;
    }
    bool was = c->on_ground;
    f32 lay = 0;
    if (c->on_ground && !c->jumped) {                                    /* on the ground the move is laid along it, keeping its */
        const f32 *n = c->ground_normal; c->vel[1] = 0;                  /* horizontal speed and heading (measured on Hoth's     */
        f32 d = c->vel[0] * n[0] + c->vel[2] * n[2];                     /* slopes: a projection onto the plane would turn and   */
        if (n[1] > 0.1f) lay = -d / n[1];                                /* slow it; the original's heading matches this to      */
    }                                                                    /* 0.05 degrees) [PARITY(1.1d): 0.5 % on slopes]       */
    /* the lay moves the body but is not kept in its velocity, so no climb is carried over a crest: the original's sprinting soldier (gdb on
       088C4CF4, Boz Pity) climbs at -0.0121 m/frame and on the first frame past the crest moves by gravity alone (+0.0028 =
       10 * dt^2); on Hoth's steady downhill it stays laid along the slope (+0.0122..0.016 m/frame, no hops) */
    /* at rest: a resting body (above) whose velocity across gravity is under 3.2e-7 stops (088C5564..088C55B8) - a soldier standing
       on a slope it could walk does not slide down it */
    if (c->on_ground && c->resting && c->vel[0] * c->vel[0] + c->vel[2] * c->vel[2] < 3.2e-7f && c->vel[1] <= 0) {
        c->vel[1] = 0; return; }
    if (!c->flying) c->vel[1] -= p->gravity * dt;                        /* physics gravity, always on (not under a jetpack's thrust) */
    f32 move[3] = { c->vel[0] * dt, (c->vel[1] + lay) * dt, c->vel[2] * dt }, gn[3];
    bool rest = false, ground = body_slide(c, col, move, gn, &rest); int gsrc = ground ? 1 : 0;
    if (!ground && c->vel[1] <= 0.01f) {                                 /* resting on the ground below the skin: a short probe keeps the state steady */
        f32 ctr[3], ax[3][3], h[3], t, n[3], probe[3] = { 0, -(SKIN * 4 + 0.02f), 0 }; u16 fl; bool pe = false;
        body_place(c, ctr, ax, h);
        if (ak_col_box_sweep(col, ctr, (const f32 (*)[3])ax, h, probe, BODY_IGNORE, &t, n, &fl, &pe) && n[1] >= WALKABLE) { ground = true; memcpy(gn, n, 12); gsrc = 2;
            if ((pe ? n[1] >= 0.9848f : n[1] >= WALKABLE) || (fl & 0x0010)) rest = true; }
    }
    {   static int dbg = -1; if (dbg < 0) dbg = ak_setting_int("AK_DEBUG_BODY", 0);
        if (dbg >= 6) AK_INFO("body", "frame: ground %s, normal %.3f %.3f %.3f (was %.3f %.3f %.3f), vel %.3f %.3f %.3f", gsrc == 1 ? "from the move" : gsrc == 2 ? "from the probe" : "none",
                              ground ? gn[0] : 0, ground ? gn[1] : 0, ground ? gn[2] : 0, c->ground_normal[0], c->ground_normal[1], c->ground_normal[2], c->vel[0], c->vel[1], c->vel[2]); }
    c->on_ground = ground; c->resting = rest;
    if (ground) { memcpy(c->ground_normal, gn, 12); if (c->vel[1] < 0) c->vel[1] = 0; c->jumped = false; }
    if (!ground && was) c->air_time = 0;
}

bool ak_char_ground_below(const ak_collision *col, const f32 *pos, f32 range, f32 *ground)
{
    f32 o[3] = { pos[0], pos[1] + 1.0f, pos[2] }, d[3] = { 0, -1, 0 }; ak_col_hit h;
    if (!ak_col_raycast(col, o, d, range + 1.0f, BODY_IGNORE, &h)) return false;
    *ground = h.pos[1];
    return true;
}

static void collide_walls(ak_character *c, const ak_char_params *p, const ak_collision *col)
{
    f32 r = p->radius;
    f32 lo = p->step + r, hi = p->height - r;                 /* the spheres stay above the step height: kerbs are the ray's */
    for (int k = 0; k < 2; k++) {
        f32 ctr[3] = { c->pos[0], c->pos[1] + (k ? hi : lo), c->pos[2] };
        if (ak_col_sphere_resolve(col, ctr, r, BODY_IGNORE, true, NULL)) {
            f32 dx = ctr[0] - c->pos[0], dz = ctr[2] - c->pos[2];
            c->pos[0] += dx; c->pos[2] += dz;
            /* the push removes velocity into the wall */
            f32 l = sqrtf(dx * dx + dz * dz);
            if (l > 1e-6f) { f32 nx = dx / l, nz = dz / l, vn = c->vel[0] * nx + c->vel[2] * nz; if (vn < 0) { c->vel[0] -= vn * nx; c->vel[2] -= vn * nz; } }
            ctr[0] = c->pos[0]; ctr[2] = c->pos[2];
        }
        (void)ctr;
    }
}

static void ground(ak_character *c, const ak_char_params *p, const ak_collision *col, f32 dt)
{
    f32 snap = c->on_ground ? p->step : 0.0f, fall = c->vel[1] < 0 ? -c->vel[1] * dt : 0.0f;
    f32 o[3] = { c->pos[0], c->pos[1] + p->step, c->pos[2] }, d[3] = { 0, -1, 0 }; ak_col_hit h;
    bool was = c->on_ground;
    c->on_ground = false;
    if (c->vel[1] <= 0.01f && ak_col_raycast(col, o, d, p->step + snap + fall + 0.02f, BODY_IGNORE, &h) && h.normal[1] >= p->walkable) {
        c->pos[1] = h.pos[1]; c->vel[1] = 0; c->on_ground = true; c->jumped = false;
        memcpy(c->ground_normal, h.normal, 12);
    }
    if (!c->on_ground && was) c->air_time = 0;
    /* ceiling */
    if (c->vel[1] > 0) {
        f32 u[3] = { 0, 1, 0 }, top[3] = { c->pos[0], c->pos[1] + p->height - 0.1f, c->pos[2] };
        if (ak_col_raycast(col, top, u, 0.1f + c->vel[1] * dt, BODY_IGNORE, &h)) c->vel[1] = 0;
    }
}

void ak_char_update(ak_character *c, const ak_char_params *p, const ak_collision *col, const ak_char_input *in, f32 dt)
{
    if (dt <= 0) return;
    c->yaw -= in->look_x * p->yaw_speed * dt;
    c->pitch += in->look_y * p->pitch_speed * dt * 0.5f;
    if (c->pitch > 1.3f) c->pitch = 1.3f;
    if (c->pitch < -1.3f) c->pitch = -1.3f;
    /* wanted velocity on the ground plane, relative to the facing (yaw 0 looks down -z) */
    f32 sy = sinf(c->yaw), cy = cosf(c->yaw);
    f32 fwd[2] = { -sy, -cy }, right[2] = { cy, -sy };
    f32 mx = in->move_x, my = in->move_y, ml = sqrtf(mx * mx + my * my);
    if (ml > 1) { mx /= ml; my /= ml; }
    if (c->on_ground) c->sprinting = in->sprint && my > 0.3f;                  /* (forward only; kept through a jump) */
    f32 vmax = c->sprinting ? p->sprint_speed : in->speed > 0 ? in->speed : p->run_speed;
    f32 want[2] = { (fwd[0] * my + right[0] * mx) * vmax, (fwd[1] * my + right[1] * mx) * vmax };
    c->flying = in->fly;
    if (in->fly) { memcpy(c->vel, in->fly_vel, 12); c->on_ground = false; c->air_time += dt; }
    else if (c->on_ground && in->root) {                                          /* the clips carry the body (ak_loco.h) */
        c->vel[0] = fwd[0] * in->root_vel[0] + right[0] * in->root_vel[1];
        c->vel[2] = fwd[1] * in->root_vel[0] + right[1] * in->root_vel[1];
        /* the jump adds its impulse to the velocity along the ground (measured: running 0.8 m/s downhill, the original leaves the
           ground at 6 - 0.8 m/s, then gravity) */
        if (in->jump) {
            const f32 *n = c->ground_normal; f32 along = n[1] > 0.1f ? -(c->vel[0] * n[0] + c->vel[2] * n[2]) / n[1] : 0;
            c->vel[1] = along + p->jump_impulse; c->on_ground = false; c->jumped = true; c->air_time = 0; }
    } else if (c->on_ground) {
        f32 dvx = want[0] - c->vel[0], dvz = want[1] - c->vel[2], dl = sqrtf(dvx * dvx + dvz * dvz), mxd = p->accel * dt;
        if (dl > mxd) { dvx *= mxd / dl; dvz *= mxd / dl; }
        c->vel[0] += dvx; c->vel[2] += dvz;
        if (in->jump) { c->vel[1] = p->jump_impulse; c->on_ground = false; c->jumped = true; c->air_time = 0; }
    } else if (c->body_box) {
        /* in the air (measured with the harness, Hoth): the horizontal velocity of the take-off is kept; from 0.5 s after leaving the
           ground the stick pushes it at "air control scale" per frame (0.15 m/s each 1/60 s: 9 m/s^2) - but never past "max air
           speed" (4 m/s) by pushing, so a faster take-off speed is kept while the stick holds it [PARITY(1.5): the 0.5 s and the
           per-frame rate are measured, not yet found in the code] */
        if (c->air_time >= 0.5f) {
            f32 sx = ak_loco_stick_axis(in->move_x), sz = ak_loco_stick_axis(in->move_y), sl = sqrtf(sx * sx + sz * sz);
            if (sl > 1) { sx /= sl; sz /= sl; }
            f32 a = p->air_control * 60.0f * dt, h0 = sqrtf(c->vel[0] * c->vel[0] + c->vel[2] * c->vel[2]);
            c->vel[0] += (fwd[0] * sz + right[0] * sx) * a; c->vel[2] += (fwd[1] * sz + right[1] * sx) * a;
            f32 h1 = sqrtf(c->vel[0] * c->vel[0] + c->vel[2] * c->vel[2]), cap = h0 > p->air_speed ? h0 : p->air_speed;
            if (h1 > cap) { c->vel[0] *= cap / h1; c->vel[2] *= cap / h1; }
        }
        c->air_time += dt;
    } else {
        /* air control: a fraction of the ground response, capped at the air speed */
        c->vel[0] += (want[0] - c->vel[0]) * p->air_control * p->accel * dt / vmax;
        c->vel[2] += (want[1] - c->vel[2]) * p->air_control * p->accel * dt / vmax;
        f32 hs = sqrtf(c->vel[0] * c->vel[0] + c->vel[2] * c->vel[2]), cap = p->air_speed > vmax ? p->air_speed : vmax;
        if (hs > cap) { c->vel[0] *= cap / hs; c->vel[2] *= cap / hs; }
        if (!c->body_box && !c->flying) c->vel[1] -= p->gravity * dt;                 /* (the game's body adds it in body_update) */
        c->air_time += dt;
    }
    if (c->body_box) { body_update(c, p, col, dt); return; }
    /* move in steps no longer than half the radius, so nothing thin is passed through */
    f32 dist = sqrtf(c->vel[0] * c->vel[0] + c->vel[1] * c->vel[1] + c->vel[2] * c->vel[2]) * dt;
    int n = (int)(dist / (p->radius * 0.5f)) + 1; if (n > 16) n = 16;
    f32 h = dt / (f32)n;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 3; k++) c->pos[k] += c->vel[k] * h;
        collide_walls(c, p, col);
        ground(c, p, col, h);
    }
}

/* a push from another body (play.c bodies_push) moved through the level like any move: the box slides along the faces it meets
   rather than being set inside them [assumed: the original's soldier never sinks into the level when a vehicle's box pushes it -
   Boz Pity's AT-AT against a slope; its own response is not read] */
void ak_char_push(ak_character *c, const ak_collision *col, const f32 push[3])
{
    f32 mv[3] = { push[0], push[1], push[2] }, gn[3]; bool rest;
    if (!col) { for (int k = 0; k < 3; k++) c->pos[k] += push[k]; return; }
    body_slide(c, col, mv, gn, &rest);
}
