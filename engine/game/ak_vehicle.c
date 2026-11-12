/* Aurek - ground vehicles (see ak_vehicle.h) */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game/ak_vehicle.h"

#define VEH_IGNORE (AK_COL_NOT_BODIES | AK_COL_NOT_SOLDIERS)
#define DEG (3.14159265f / 180.0f)
#define FLY_IGNORE (AK_COL_NOT_BODIES | AK_COL_NOT_FLYERS)

static s32 find_clip(const ak_model_set *m, const char *name)
{
    for (u32 i = 0; i < m->nclips; i++) if (!strcmp(m->clips[i].name, name)) return (s32)i;
    return -1;
}

/* how fast a planted foot slides back through a walk loop: the walker's speed (the clips carry no root motion) */
static f32 walk_speed_of(const ak_model_set *m, s32 model, s32 clip)
{
    const ak_model *md = &m->models[model];
    if (clip < 0 || md->skeleton < 0) return 0;
    const ak_skeleton *sk = &m->skels[md->skeleton]; const ak_anim_clip *c = &m->clips[clip];
    if (sk->nbones > 64) return 0;
    static ak_quat q[64]; static f32 t[64][3], M[64][12];
    const int N = 48; f32 dist = 0, time = 0; s32 last = -1; f32 lz = 0;
    for (int f = 0; f <= N; f++) {
        f32 tt = c->duration * (f32)f / N;
        ak_anim_sample(c, sk, tt, true, q, t); ak_skeleton_pose_matrices(sk, q, (const f32 (*)[3])t, M);
        s32 lo = 0; for (u32 b = 1; b < sk->nbones; b++) if (M[b][7] < M[lo][7]) lo = (s32)b;
        if (lo == last) { dist += fabsf(M[lo][11] - lz); time += c->duration / N; }
        last = lo; lz = M[lo][11];
    }
    return time > 0 ? dist / time : 0;
}

bool ak_vehicle_def_load(const ak_blueprints *bp, const ak_model_set *m, const char *name, ak_vehicle_def *d)
{
    memset(d, 0, sizeof *d);
    const ak_bp_object *o = ak_bp_find(bp, "Tank", name);
    bool walker = false, flyer = false;
    if (!o) { o = ak_bp_find(bp, "Walker", name); walker = o != NULL; }
    if (!o) { o = ak_bp_find(bp, "Flyer", name); flyer = o != NULL; }
    if (!o) return false;
    d->bp = o; d->name = o->name; d->drivable = true;
    d->model = ak_models_find(m, name);
    if (d->model < 0) return false;
    const char *tt = ak_bp_string(o, "tank_type", "hover_tank");
    d->kind = flyer ? AK_VEH_FLYER : walker ? AK_VEH_WALKER : !strcmp(tt, "speeder_bike") ? AK_VEH_SPEEDER : !strcmp(tt, "track_tank") ? AK_VEH_TRACK : !strcmp(tt, "creature_tank") ? AK_VEH_CREATURE : AK_VEH_HOVER;
    d->clip_walk = d->clip_idle = d->clip_death = d->clip_flight = d->clip_landed = -1;
    if (flyer) {
        d->cruise = ak_bp_float(o, "CruisingSpeed", 85); d->pitch_rate = ak_bp_float(o, "MaxTurnPitch", 80) * DEG;
        d->roll_rate = ak_bp_float(o, "MaxTurnRoll", 115) * DEG; d->roll_removal = ak_bp_float(o, "RollRemoval", 50) * DEG;
        d->bank = (d->roll_rate > 0 ? 60.0f : ak_bp_float(o, "CosmeticRoll", 10)) * DEG;   /* the snowspeeder (no roll) only leans */
        /* clip names, or asset paths: "vehicles\...\Awing_rest.ASR" -> "Awing_rest" */
        const char *keys[2] = { "AnimFlight", "AnimLanded" }; s32 *out[2] = { &d->clip_flight, &d->clip_landed };
        for (int k = 0; k < 2; k++) {
            const char *v = ak_bp_string(o, keys[k], ""), *b = strrchr(v, '\\'); char nm[96]; b = b ? b + 1 : v;
            snprintf(nm, sizeof nm, "%s", b); char *dot = strrchr(nm, '.'); if (dot) *dot = 0;
            *out[k] = *nm ? find_clip(m, nm) : -1;
        }
    }
    if (walker) {
        /* the clips: the model name without its underscores (AT_ST -> ATST_WalkLoop, ATST_idle, ATST_Death) */
        char pre[64], nm[96]; u32 k = 0;
        for (const char *q = name; *q && k < sizeof pre - 1; q++) if (*q != '_') pre[k++] = *q;
        pre[k] = 0;
        snprintf(nm, sizeof nm, "%s_WalkLoop", pre); d->clip_walk = find_clip(m, nm);
        snprintf(nm, sizeof nm, "%s_idle", pre); d->clip_idle = find_clip(m, nm);
        snprintf(nm, sizeof nm, "%s_Death", pre); d->clip_death = find_clip(m, nm);
        d->walk_speed = walk_speed_of(m, d->model, d->clip_walk) * ak_bp_float(o, "WalkingSpeedScale", 1);
        if (d->walk_speed < 0.5f) d->walk_speed = 4.0f;
        d->sprint_scale = ak_bp_float(o, "SprintingSpeedScale", 1);
    }
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
    if (flyer) d->hover = 0;                                             /* (flyers rest on their landing gear: the model origin) */
    if (walker) {                                                        /* walkers: the speed from the legs, sharp turns */
        d->top_speed = d->walk_speed; d->stall_speed = -d->walk_speed * 0.5f; d->max_acc = d->walk_speed * 2; d->boost_acc = d->walk_speed * 2;
        d->strafe_acc = 0; d->vel_damp = 3; d->radius *= 0.6f;           /* (legs: a narrower body than the box) */
    }
    const char *tur = ak_bp_string(o, "Turret0", "");
    d->turret_model = *tur ? ak_models_find(m, tur) : -1; d->turret_marker = ak_bp_string(o, "TurretMarker0", "tur");
    /* HardpointW1 names a Weapon (its "Projectile" is the LaserBolt; flyers: SpaceLasers_X_Wing -> SpaceLasers_Fighters) or, for some
     * ground vehicles, the LaserBolt itself (the Weapon of the same name, where there is one, carries the timing) */
    const char *hp = ak_bp_string(o, "HardpointW1", "");
    const ak_bp_object *hw = *hp ? ak_bp_find(bp, "Weapon", hp) : NULL;
    d->armed = ak_weapon_def_bolt(bp, hw ? ak_bp_string(hw, "Projectile", hp) : hp, &d->gun) || ak_weapon_def_bolt(bp, hp, &d->gun);
    static const char *mk[4] = { "HardpointW1Marker1", "HardpointW1Marker2", "HardpointW1Marker3", "HardpointW1Marker4" };
    static const char *tm[4] = { "HardpointW1Time1", "HardpointW1Time2", "HardpointW1Time3", "HardpointW1Time4" };
    f32 last = 0;
    for (int i = 0; i < 4; i++) {
        const char *s = ak_bp_string(o, mk[i], "");
        if (!*s || ak_model_marker(md, s) == NULL) continue;
        d->muzzle[d->nmuzzles] = s; d->muzzle_time[d->nmuzzles] = ak_bp_float(o, tm[i], 0); if (d->muzzle_time[d->nmuzzles] > last) last = d->muzzle_time[d->nmuzzles];
        d->nmuzzles++;
    }
    /* a volley every RateOfFire seconds (the Weapon's: tank lasers 0.25, fighters 0.3, TIE fighter 0.2, X-wing 2), the barrels at their
     * HardpointW1Time offsets within it (how the game combines the two is not traced; never shorter than the last barrel's offset) */
    d->volley = hw ? ak_bp_float(hw, "RateOfFire", last + 0.5f) : last + 0.5f;
    if (d->volley < last + 0.05f) d->volley = last + 0.05f;
    {   /* bots: the hardpoint's Weapon blueprint (else Weapon "Base") scales damage and the time between volleys */
        const ak_bp_object *w = hw ? hw : ak_bp_find(bp, "Weapon", "Base");
        f32 md = w ? ak_bp_float(w, "Modifier_Bot_Damage", 1) : 1, mr = w ? ak_bp_float(w, "Modifier_Bot_RateOfFire", 1) : 1;
        d->gun_bot = d->gun; d->gun_bot.dmg_infantry *= md; d->gun_bot.dmg_vehicle *= md; d->volley_bot = d->volley * mr;
    }
    return true;
}

void ak_vehicle_spawn(ak_vehicle *v, const ak_vehicle_def *d, const f32 *pos, f32 yaw, int team)
{
    s32 sp = v->spawn;
    memset(v, 0, sizeof *v);
    v->def = d; memcpy(v->pos, pos, 12); v->yaw = yaw; v->team = team; v->spawn = sp;
    v->health = d->health; v->alive = true; v->driver = -1; v->aim_yaw = 0;
}

static void flyer_update(ak_vehicle *v, const ak_collision *col, f32 gravity, bool boost, f32 dt)
{
    const ak_vehicle_def *d = v->def;
    if (!v->flying) {                                                     /* on the ground: settle; any input from a pilot takes off */
        f32 o[3] = { v->pos[0], v->pos[1] + 2.0f, v->pos[2] }, dn[3] = { 0, -1, 0 }; ak_col_hit h;
        if (ak_col_raycast(col, o, dn, 4.0f, FLY_IGNORE, &h)) { v->pos[1] = h.pos[1]; v->vel[1] = 0; }
        else if (ak_col_raycast(col, o, dn, 1e4f, FLY_IGNORE, &h)) { v->vel[1] -= gravity * dt; v->pos[1] += v->vel[1] * dt; if (v->pos[1] < h.pos[1]) v->pos[1] = h.pos[1]; }
        v->speed = 0; v->vel[0] = v->vel[2] = 0; v->pitch *= 0.9f; v->roll *= 0.9f;
        if (v->driver >= 0 && (boost || fabsf(v->throttle) > 0.2f || fabsf(v->steer) > 0.2f)) { v->flying = true; v->takeoff = 1.2f; v->speed = 0; v->pitch = 0; }
        return;
    }
    if (v->takeoff > 0) {                                                 /* lifting off: straight up, then away level */
        v->takeoff -= dt; v->pos[1] += 3.0f * dt;
        v->speed += d->stall_speed * dt / 1.2f; v->vel[1] = 3.0f;
        f32 fw[3] = { -sinf(v->yaw), 0, -cosf(v->yaw) };
        v->pos[0] += fw[0] * v->speed * dt; v->pos[2] += fw[2] * v->speed * dt;
        return;
    }
    /* turning: the stick pitches, banks and yaws; let go and the roll levels out (RollRemoval) */
    v->pitch -= v->throttle * d->pitch_rate * dt;
    if (v->pitch > 1.4f) v->pitch = 1.4f;
    if (v->pitch < -1.4f) v->pitch = -1.4f;
    v->yaw -= v->steer * d->turn_rate * dt;
    f32 want_roll = -v->steer * d->bank, rr = (fabsf(v->steer) > 0.05f ? (d->roll_rate > 0 ? d->roll_rate : d->turn_rate) : d->roll_removal) * dt;
    v->roll += want_roll > v->roll ? fminf(want_roll - v->roll, rr) : -fminf(v->roll - want_roll, rr);
    /* speed: cruising, boost to the top, brake to the stall speed */
    f32 want = boost ? d->top_speed : v->brake ? d->stall_speed : d->cruise, acc = (boost ? d->boost_acc : d->max_acc) * dt;
    if (want < d->stall_speed) want = d->stall_speed;
    v->speed += want > v->speed ? fminf(want - v->speed, acc) : -fminf(v->speed - want, acc);
    f32 cp = cosf(v->pitch), fw[3] = { -sinf(v->yaw) * cp, sinf(v->pitch), -cosf(v->yaw) * cp };
    for (int k = 0; k < 3; k++) v->vel[k] = fw[k] * v->speed;
    /* the level ahead: touch down slowly and level, or crash */
    f32 step = v->speed * dt, r = d->radius * 0.5f; ak_col_hit h;
    f32 o[3] = { v->pos[0], v->pos[1] + d->height * 0.5f, v->pos[2] }, dir[3] = { fw[0], fw[1], fw[2] };
    f32 dn[3] = { 0, -1, 0 };
    bool ahead = ak_col_raycast(col, o, dir, step + r, FLY_IGNORE, &h);
    bool below = !ahead && ak_col_raycast(col, o, dn, d->height * 0.5f + 0.3f, FLY_IGNORE, &h);
    if (ahead || below) {
        f32 into = fw[0] * h.normal[0] + fw[1] * h.normal[1] + fw[2] * h.normal[2];
        if (h.normal[1] > 0.8f && v->speed < d->stall_speed * 1.8f && v->pitch > -0.35f) {
            v->flying = false; v->pos[0] = h.pos[0]; v->pos[1] = h.pos[1]; v->pos[2] = h.pos[2]; v->speed = 0; v->pitch = 0;
            v->vel[0] = v->vel[1] = v->vel[2] = 0;
            return;
        }
        if (into > -0.7f) {                                                /* a glancing touch: skim off the surface (ground, ceiling, wall) */
            v->pitch += h.normal[1] * (0.6f * dt - into);
            if (fabsf(h.normal[1]) < 0.5f) {                               /* a wall: turn along it */
                f32 side = -sinf(v->yaw) * 0 + (cosf(v->yaw) * h.normal[0] - sinf(v->yaw) * h.normal[2]);
                v->yaw -= (side > 0 ? -1.0f : 1.0f) * (-into) * 0.8f;
            }
            v->speed *= 1.0f - 0.5f * dt;
            for (int k = 0; k < 3; k++) v->pos[k] += h.normal[k] * 0.3f;
        } else { v->crashed = true; if (getenv("AK_DEBUG_VEH")) fprintf(stderr, "[veh] crash at %.1f %.1f %.1f normal %.2f %.2f %.2f into %.2f\n", h.pos[0], h.pos[1], h.pos[2], h.normal[0], h.normal[1], h.normal[2], into); return; }
    }
    for (int k = 0; k < 3; k++) v->pos[k] += v->vel[k] * dt;
}

void ak_vehicle_update(ak_vehicle *v, const ak_collision *col, f32 gravity, bool boost, f32 dt)
{
    const ak_vehicle_def *d = v->def;
    if (!v->alive) return;
    if (d->kind == AK_VEH_FLYER) { flyer_update(v, col, gravity, boost, dt); return; }
    /* turning */
    v->yaw += -v->steer * d->turn_rate * dt;
    f32 sy = sinf(v->yaw), cy = cosf(v->yaw), fx = -sy, fz = -cy, rx = cy, rz = -sy;
    f32 fwd = v->vel[0] * fx + v->vel[2] * fz, side = v->vel[0] * rx + v->vel[2] * rz;
    /* along: toward the speed the throttle asks for (reverse up to the stall speed), at the blueprint's acceleration */
    f32 want = v->throttle >= 0 ? v->throttle * d->top_speed : -v->throttle * d->stall_speed;
    f32 acc = (boost ? d->boost_acc + d->max_acc : d->max_acc) * dt;
    if (boost && v->throttle > 0) want = d->kind == AK_VEH_WALKER ? d->top_speed * d->sprint_scale : d->top_speed * 1.25f;
    if (fabsf(v->throttle) < 0.05f) fwd *= expf(-d->vel_damp * dt);                 /* coasting */
    else fwd += want > fwd ? (want - fwd < acc ? want - fwd : acc) : (fwd - want < acc ? -(fwd - want) : -acc);
    /* across: strafing (hover craft), else the skid dies away */
    side += v->strafe * d->strafe_acc * dt;
    side *= expf(-(d->kind == AK_VEH_TRACK || d->kind == AK_VEH_WALKER ? 8.0f : d->vel_damp * 2.0f) * dt);
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
    /* tanks' models face +z: a half turn so the nose leads (walkers and flyers face -z, like the soldiers) */
    bool half = v->def->kind != AK_VEH_WALKER && v->def->kind != AK_VEH_FLYER; f32 k = half ? 1.0f : -1.0f, yw = v->yaw + (half ? 3.14159265f : 0.0f);
    f32 cy = cosf(yw), sy = sinf(yw);
    f32 R[3][3] = { { cr, k * sr, 0 }, { -k * sr, cr, 0 }, { 0, 0, 1 } };        /* roll about z (mirrored by the half turn) */
    f32 P[3][3] = { { 1, 0, 0 }, { 0, cp, k * sp }, { 0, -k * sp, cp } };         /* pitch about x (likewise) */
    f32 Y[3][3] = { { cy, 0, sy }, { 0, 1, 0 }, { -sy, 0, cy } };                 /* yaw about y */
    f32 A[3][3], B[3][3];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { A[i][j] = 0; for (int k = 0; k < 3; k++) A[i][j] += P[i][k] * R[k][j]; }
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { B[i][j] = 0; for (int k = 0; k < 3; k++) B[i][j] += Y[i][k] * A[k][j]; }
    f32 lift = v->def->hover;
    for (int r = 0; r < 3; r++) { out[r * 4] = B[r][0]; out[r * 4 + 1] = B[r][1]; out[r * 4 + 2] = B[r][2]; }
    out[3] = v->pos[0]; out[7] = v->pos[1] + lift; out[11] = v->pos[2];
}

void ak_vehicle_pose(ak_vehicle *v, const ak_model_set *m, f32 dt)
{
    const ak_vehicle_def *d = v->def; const ak_model *md = &m->models[d->model];
    if (md->skeleton < 0 || m->skels[md->skeleton].nbones > 64) { v->posed = false; return; }
    const ak_skeleton *sk = &m->skels[md->skeleton];
    s32 clip = -1; bool loop = true;
    if (d->kind == AK_VEH_WALKER) {
        f32 sy = sinf(v->yaw), cy = cosf(v->yaw), fwd = -sy * v->vel[0] - cy * v->vel[2], rate = 1;
        if (!v->alive) { clip = d->clip_death; loop = false; }
        else if (fabsf(fwd) > 0.3f) { clip = d->clip_walk; rate = fwd / d->walk_speed; }   /* the feet keep pace with the ground (backwards too) */
        else if (fabsf(v->steer) > 0.1f) { clip = d->clip_walk; rate = 0.6f; }               /* turning on the spot */
        else if (d->clip_idle >= 0) clip = d->clip_idle;
        else { clip = d->clip_walk; rate = 0; }                                             /* no idle clip: hold the stride */
        if (clip != v->clip && !(clip == d->clip_walk && v->clip == d->clip_walk)) v->anim_t = 0;
        v->anim_t += dt * rate;
    }
    if (d->kind == AK_VEH_FLYER) { clip = v->flying ? d->clip_flight : d->clip_landed; loop = false; if (clip != v->clip) v->anim_t = 0; v->anim_t += dt; }
    v->clip = clip;
    static ak_quat q[64]; static f32 t[64][3];
    if (clip >= 0) {
        const ak_anim_clip *c = &m->clips[clip]; f32 tt = v->anim_t;
        if (loop) { tt = fmodf(tt, c->duration); if (tt < 0) tt += c->duration; }
        else if (tt > c->duration) tt = c->duration - 1e-4f;
        ak_anim_sample(c, sk, tt, loop, q, t);
        ak_skeleton_pose_matrices(sk, q, (const f32 (*)[3])t, v->bones);
    } else ak_skeleton_bind_matrices(sk, v->bones);
    v->posed = true;
}

bool ak_vehicle_marker(const ak_vehicle *v, const ak_model_set *m, const char *name, f32 out[12])
{
    const ak_marker *mk = ak_model_marker(&m->models[v->def->model], name);
    if (!mk) return false;
    static const f32 I[12] = { 1, 0, 0, 0,  0, 1, 0, 0,  0, 0, 1, 0 };
    f32 L[12], M[12]; ak_marker_matrix(v->posed && mk->bone < 64 ? v->bones[mk->bone] : I, mk, L);
    ak_vehicle_matrix(v, M);
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) out[r * 4 + c] = M[r * 4] * L[c] + M[r * 4 + 1] * L[4 + c] + M[r * 4 + 2] * L[8 + c];
        out[r * 4 + 3] += M[r * 4 + 3];
    }
    return true;
}
