/* Aurek - ground vehicles (see ak_vehicle.h) */
#include <math.h>
#include <string.h>
#include "game/ak_vehicle.h"

#define VEH_IGNORE (AK_COL_NOT_BODIES | AK_COL_NOT_SOLDIERS)
#define DEG (3.14159265f / 180.0f)

bool ak_vehicle_def_load(const ak_blueprints *bp, const ak_model_set *m, const char *name, ak_vehicle_def *d)
{
    memset(d, 0, sizeof *d);
    const ak_bp_object *o = ak_bp_find(bp, "Tank", name);
    if (!o) return false;
    d->bp = o; d->name = o->name;
    d->model = ak_models_find(m, name);
    if (d->model < 0) return false;
    const char *tt = ak_bp_string(o, "tank_type", "hover_tank");
    d->kind = !strcmp(tt, "speeder_bike") ? AK_VEH_SPEEDER : !strcmp(tt, "track_tank") ? AK_VEH_TRACK : !strcmp(tt, "creature_tank") ? AK_VEH_CREATURE : AK_VEH_HOVER;
    d->top_speed = ak_bp_float(o, "TopSpeed", 25); d->stall_speed = ak_bp_float(o, "StallSpeed", -10);
    d->max_acc = ak_bp_float(o, "MaxAcc", 15); d->boost_acc = ak_bp_float(o, "BoostAcc", 30); d->strafe_acc = ak_bp_float(o, "MaxStrafeAcc", 0);
    d->vel_damp = ak_bp_float(o, "VelDamp", 1.5f); d->turn_rate = ak_bp_float(o, "MaxTurnYaw", 85) * DEG;
    d->roll_deg = ak_bp_float(o, "CosmeticRoll", 0);
    d->health = ak_bp_float(o, "Health", 800); d->cam_z = ak_bp_float(o, "CameraBestZ", 12); d->cam_y = ak_bp_float(o, "CameraBestY", 4);
    d->target_range = ak_bp_float(o, "TargetRange", 100);
    const ak_model *md = &m->models[d->model];
    f32 wx = md->bmax[0] - md->bmin[0], wz = md->bmax[2] - md->bmin[2];
    d->radius = 0.5f * (wx < wz ? wx : wz); if (d->radius < 0.5f) d->radius = 0.5f;
    d->height = md->bmax[1] - md->bmin[1]; if (d->height < 1) d->height = 1;
    d->hover = d->kind == AK_VEH_HOVER ? 1.0f : d->kind == AK_VEH_SPEEDER ? 0.8f : 0.0f;
    const char *tur = ak_bp_string(o, "Turret0", "");
    d->turret_model = *tur ? ak_models_find(m, tur) : -1; d->turret_marker = ak_bp_string(o, "TurretMarker0", "tur");
    d->armed = ak_weapon_def_bolt(bp, ak_bp_string(o, "HardpointW1", ""), &d->gun);
    static const char *mk[4] = { "HardpointW1Marker1", "HardpointW1Marker2", "HardpointW1Marker3", "HardpointW1Marker4" };
    static const char *tm[4] = { "HardpointW1Time1", "HardpointW1Time2", "HardpointW1Time3", "HardpointW1Time4" };
    f32 last = 0;
    for (int i = 0; i < 4; i++) {
        const char *s = ak_bp_string(o, mk[i], "");
        if (!*s || ak_model_marker(md, s) == NULL) continue;
        d->muzzle[d->nmuzzles] = s; d->muzzle_time[d->nmuzzles] = ak_bp_float(o, tm[i], 0); if (d->muzzle_time[d->nmuzzles] > last) last = d->muzzle_time[d->nmuzzles];
        d->nmuzzles++;
    }
    d->volley = last + 0.5f;                                              /* not traced: half a second after the last barrel */
    return true;
}

void ak_vehicle_spawn(ak_vehicle *v, const ak_vehicle_def *d, const f32 *pos, f32 yaw, int team)
{
    s32 sp = v->spawn;
    memset(v, 0, sizeof *v);
    v->def = d; memcpy(v->pos, pos, 12); v->yaw = yaw; v->team = team; v->spawn = sp;
    v->health = d->health; v->alive = true; v->driver = -1; v->aim_yaw = 0;
}

void ak_vehicle_update(ak_vehicle *v, const ak_collision *col, f32 gravity, bool boost, f32 dt)
{
    const ak_vehicle_def *d = v->def;
    if (!v->alive) return;
    /* turning */
    v->yaw += -v->steer * d->turn_rate * dt;
    f32 sy = sinf(v->yaw), cy = cosf(v->yaw), fx = -sy, fz = -cy, rx = cy, rz = -sy;
    f32 fwd = v->vel[0] * fx + v->vel[2] * fz, side = v->vel[0] * rx + v->vel[2] * rz;
    /* along: toward the speed the throttle asks for (reverse up to the stall speed), at the blueprint's acceleration */
    f32 want = v->throttle >= 0 ? v->throttle * d->top_speed : -v->throttle * d->stall_speed;
    f32 acc = (boost ? d->boost_acc + d->max_acc : d->max_acc) * dt;
    if (boost && v->throttle > 0) want = d->top_speed * 1.25f;
    if (fabsf(v->throttle) < 0.05f) fwd *= expf(-d->vel_damp * dt);                 /* coasting */
    else fwd += want > fwd ? (want - fwd < acc ? want - fwd : acc) : (fwd - want < acc ? -(fwd - want) : -acc);
    /* across: strafing (hover craft), else the skid dies away */
    side += v->strafe * d->strafe_acc * dt;
    side *= expf(-(d->kind == AK_VEH_TRACK ? 8.0f : d->vel_damp * 2.0f) * dt);
    if (side > d->top_speed * 0.5f) side = d->top_speed * 0.5f;
    if (side < -d->top_speed * 0.5f) side = -d->top_speed * 0.5f;
    v->vel[0] = fx * fwd + rx * side; v->vel[2] = fz * fwd + rz * side;
    /* move, then out of the walls (a circle at the body's middle height) */
    f32 step = sqrtf(v->vel[0] * v->vel[0] + v->vel[2] * v->vel[2]) * dt;
    int n = (int)(step / (d->radius * 0.5f)) + 1; if (n > 8) n = 8;
    for (int i = 0; i < n; i++) {
        v->pos[0] += v->vel[0] * dt / n; v->pos[2] += v->vel[2] * dt / n;
        f32 rr = d->radius * 0.6f, c[3] = { v->pos[0], v->pos[1] + d->hover + rr + 1.2f, v->pos[2] };   /* above the slopes it can climb */
        if (ak_col_sphere_resolve(col, c, rr, VEH_IGNORE, true, NULL)) {
            f32 dx = c[0] - v->pos[0], dz = c[2] - v->pos[2], l = sqrtf(dx * dx + dz * dz);
            if (l > rr) { dx *= rr / l; dz *= rr / l; l = rr; }               /* never more than the body's own size in one push */
            v->pos[0] += dx; v->pos[2] += dz;
            if (l > 1e-6f) {                                                  /* lose the speed into the wall */
                f32 nx = dx / l, nz = dz / l, into = v->vel[0] * nx + v->vel[2] * nz;
                if (into < 0) { v->vel[0] -= nx * into; v->vel[2] -= nz * into; }
            }
        }
    }
    /* the ground: hover craft float at their height, the rest sit on it; the body leans with the slope */
    f32 o[3] = { v->pos[0], v->pos[1] + d->hover + 3.0f, v->pos[2] }, dn[3] = { 0, -1, 0 }; ak_col_hit h;
    if (ak_col_raycast(col, o, dn, d->hover + 3.0f + 6.0f, d->kind == AK_VEH_HOVER || d->kind == AK_VEH_SPEEDER ? AK_COL_NOT_BODIES : VEH_IGNORE, &h)) {   /* hover craft ride over water */
        f32 gy = h.pos[1], target = gy;
        if (v->pos[1] > target + 0.05f && v->vel[1] <= 0) { v->vel[1] -= gravity * dt; v->pos[1] += v->vel[1] * dt; if (v->pos[1] < target) { v->pos[1] = target; v->vel[1] = 0; } }
        else { v->pos[1] += (target - v->pos[1]) * (1.0f - expf(-12.0f * dt)); v->vel[1] = 0; }
        f32 nf = h.normal[0] * fx + h.normal[2] * fz, nr = h.normal[0] * rx + h.normal[2] * rz;
        f32 pitch = atan2f(-nf, h.normal[1]), roll = -atan2f(nr, h.normal[1]);
        v->pitch += (pitch - v->pitch) * (1.0f - expf(-6.0f * dt));
        roll -= v->steer * d->roll_deg * DEG * (fwd > 0 ? 1.0f : -1.0f) * (fabsf(fwd) / (d->top_speed > 1 ? d->top_speed : 1));
        v->roll += (roll - v->roll) * (1.0f - expf(-6.0f * dt));
    } else { v->vel[1] -= gravity * dt; v->pos[1] += v->vel[1] * dt; }
}

void ak_vehicle_matrix(const ak_vehicle *v, f32 out[12])
{
    /* yaw, then pitch about the vehicle's right axis, then roll about its forward axis (rows) */
    f32 cp = cosf(v->pitch), sp = sinf(v->pitch), cr = cosf(v->roll), sr = sinf(v->roll);
    f32 cy = cosf(v->yaw + 3.14159265f), sy = sinf(v->yaw + 3.14159265f);   /* the models face +z: a half turn so the nose leads */
    /* local axes: right (x), up (y), back (z, the model's forward is -z) */
    f32 R[3][3] = { { cr, sr, 0 }, { -sr, cr, 0 }, { 0, 0, 1 } };                /* roll about z (mirrored by the half turn) */
    f32 P[3][3] = { { 1, 0, 0 }, { 0, cp, sp }, { 0, -sp, cp } };                 /* pitch about x (likewise) */
    f32 Y[3][3] = { { cy, 0, sy }, { 0, 1, 0 }, { -sy, 0, cy } };                 /* yaw about y */
    f32 A[3][3], B[3][3];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { A[i][j] = 0; for (int k = 0; k < 3; k++) A[i][j] += P[i][k] * R[k][j]; }
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { B[i][j] = 0; for (int k = 0; k < 3; k++) B[i][j] += Y[i][k] * A[k][j]; }
    f32 lift = v->def->hover;
    for (int r = 0; r < 3; r++) { out[r * 4] = B[r][0]; out[r * 4 + 1] = B[r][1]; out[r * 4 + 2] = B[r][2]; }
    out[3] = v->pos[0]; out[7] = v->pos[1] + lift; out[11] = v->pos[2];
}
