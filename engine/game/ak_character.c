/* Aurek - a soldier on foot (see ak_character.h) */
#include <math.h>
#include <string.h>
#include "game/ak_character.h"
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
    p->gravity  = ak_setting_float("AK_GRAVITY", 10.0f);      /* the game's: see ak_character.h */
    p->accel    = ak_setting_float("AK_RUN_ACCEL", 30.0f);
    p->radius   = ak_setting_float("AK_BODY_RADIUS", 0.35f);
    p->height   = ak_setting_float("AK_BODY_HEIGHT", 1.8f);
    p->step     = ak_setting_float("AK_STEP_HEIGHT", 0.45f);
    p->walkable = cosf(ak_setting_float("AK_MAX_SLOPE_DEG", 50.0f) * 3.14159265f / 180.0f);
}

void ak_char_spawn(ak_character *c, const f32 *pos, f32 yaw)
{
    memset(c, 0, sizeof *c);
    memcpy(c->pos, pos, 12); c->yaw = yaw; c->ground_normal[1] = 1;
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
    f32 want[2] = { (fwd[0] * my + right[0] * mx) * p->run_speed, (fwd[1] * my + right[1] * mx) * p->run_speed };
    if (c->on_ground) {
        f32 dvx = want[0] - c->vel[0], dvz = want[1] - c->vel[2], dl = sqrtf(dvx * dvx + dvz * dvz), mxd = p->accel * dt;
        if (dl > mxd) { dvx *= mxd / dl; dvz *= mxd / dl; }
        c->vel[0] += dvx; c->vel[2] += dvz;
        if (in->jump) { c->vel[1] = p->jump_impulse; c->on_ground = false; c->jumped = true; c->air_time = 0; }
    } else {
        /* air control: a fraction of the ground response, capped at the air speed */
        c->vel[0] += (want[0] - c->vel[0]) * p->air_control * p->accel * dt / p->run_speed;
        c->vel[2] += (want[1] - c->vel[2]) * p->air_control * p->accel * dt / p->run_speed;
        f32 hs = sqrtf(c->vel[0] * c->vel[0] + c->vel[2] * c->vel[2]), cap = p->air_speed > p->run_speed ? p->air_speed : p->run_speed;
        if (hs > cap) { c->vel[0] *= cap / hs; c->vel[2] *= cap / hs; }
        c->vel[1] -= p->gravity * dt;
        c->air_time += dt;
    }
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
