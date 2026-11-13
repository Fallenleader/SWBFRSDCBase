/* Aurek - turrets (see ak_turret.h) */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/ak_turret.h"

#define DEG 0.017453293f
static f32 wf(const u8 *p) { u32 w = ak_rd32(p); f32 f; memcpy(&f, &w, 4); return f; }

/* "name" or "vehicles\Turrets\box_turret\box_turret_turret01.ASR" -> the model */
static s32 part_model(const ak_model_set *m, const char *s)
{
    if (!s || !*s) return -1;
    const char *b = s;
    for (const char *q = s; *q; q++) if (*q == '\\' || *q == '/') b = q + 1;
    char n[96]; size_t k = 0;
    while (b[k] && b[k] != '.' && k + 1 < sizeof n) { n[k] = b[k]; k++; }
    n[k] = 0;
    return ak_models_find(m, n);
}

bool ak_turret_def_load(const ak_blueprints *bp, const ak_model_set *m, const char *base_name, ak_turret_def *d)
{
    memset(d, 0, sizeof *d);
    const ak_bp_object *o = ak_bp_find(bp, "Turret", base_name);
    if (!o) return false;
    d->bp = o; d->name = o->name;
    d->base = ak_models_find(m, base_name);
    d->pivot = part_model(m, ak_bp_string(o, "Pivot", ""));
    d->barrel = part_model(m, ak_bp_string(o, "Barrel", ""));
    d->wreck = part_model(m, ak_bp_string(o, "DestroyedTurret", ""));
    if (d->wreck < 0) { char n[96]; snprintf(n, sizeof n, "%s_destroyed", base_name); d->wreck = ak_models_find(m, n); }
    d->health = ak_bp_float(o, "Health", 200);
    d->turn_rate = ak_bp_float(o, "MaxTurnYaw", 40) * DEG;
    d->pitch_min = ak_bp_float(o, "MinPivotX", -20) * DEG; d->pitch_max = ak_bp_float(o, "MaxPivotX", 20) * DEG;
    d->cam_z = ak_bp_float(o, "CameraBestZ", 20.0f); d->cam_y = ak_bp_float(o, "CameraBestY", 5.0f);
    d->yaw_min = ak_bp_float(o, "MinPivotY", 0) * DEG;     d->yaw_max = ak_bp_float(o, "MaxPivotY", 0) * DEG;
    d->boardable = ak_bp_int(o, "Boardable", 1) != 0;
    /* the gun: HardpointW1 a Weapon (whose Projectile is the bolt) or the bolt itself; muzzles on the barrel */
    const char *hp = ak_bp_string(o, "HardpointW1", "");
    const ak_bp_object *hw = *hp ? ak_bp_find(bp, "Weapon", hp) : NULL;
    d->armed = ak_weapon_def_bolt(bp, hw ? ak_bp_string(hw, "Projectile", hp) : hp, &d->gun) || ak_weapon_def_bolt(bp, hp, &d->gun);
    static const char *mk[2] = { "HardpointW1Marker1", "HardpointW1Marker2" }, *tm[2] = { "HardpointW1Time1", "HardpointW1Time2" };
    f32 last = 0; s32 carrier = d->barrel >= 0 ? d->barrel : d->pivot >= 0 ? d->pivot : d->base;
    for (int i = 0; i < 2 && carrier >= 0; i++) {
        const char *s = ak_bp_string(o, mk[i], "");
        if (!*s || !ak_model_marker(&m->models[carrier], s)) continue;
        d->muzzle[d->nmuzzles] = s; d->muzzle_time[d->nmuzzles] = ak_bp_float(o, tm[i], 0);
        if (d->muzzle_time[d->nmuzzles] > last) last = d->muzzle_time[d->nmuzzles];
        d->nmuzzles++;
    }
    d->face = 1;
    if (d->nmuzzles && carrier >= 0) { const ak_marker *mk = ak_model_marker(&m->models[carrier], d->muzzle[0]);
        static const f32 I[12] = { 1, 0, 0, 0,  0, 1, 0, 0,  0, 0, 1, 0 }; f32 o[12];
        if (mk) { ak_marker_matrix(I, mk, o); if (o[11] < -0.2f) d->face = -1; } }
    d->volley = hw ? ak_bp_float(hw, "RateOfFire", last + 0.5f) : last + 0.5f;
    if (d->volley < last + 0.05f) d->volley = last + 0.05f;
    const ak_bp_object *w = hw ? hw : ak_bp_find(bp, "Weapon", "Base");
    f32 md = w ? ak_bp_float(w, "Modifier_Bot_Damage", 1) : 1, mr = w ? ak_bp_float(w, "Modifier_Bot_RateOfFire", 1) : 1;
    d->gun_bot = d->gun; d->gun_bot.dmg_infantry *= md; d->gun_bot.dmg_vehicle *= md; d->volley_bot = d->volley * mr;
    return d->base >= 0;
}

u32 ak_turrets_read(const ak_level *l, ak_turret_rec *out, u32 max)
{
    ak_chunk c; u32 pos = 8, n = 0;
    while (ak_asura_next(&l->file, &pos, &c) && n < max) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 30 * 4) continue;
        const u8 *b = c.body; u32 nw = c.size / 4;
        if ((ak_rd32(b + 4) & 0xFFFF) != 0x801E) continue;
        for (u32 j = 7; j + 10 < nw; j++) {                                    /* position + unit quaternion, then health, 0, model */
            f32 p[3] = { wf(b + 4 * j), wf(b + 4 * j + 4), wf(b + 4 * j + 8) }, q[4] = { wf(b + 4 * j + 12), wf(b + 4 * j + 16), wf(b + 4 * j + 20), wf(b + 4 * j + 24) };
            bool ok = true;
            for (int k = 0; k < 3; k++) ok = ok && p[k] == p[k] && fabsf(p[k]) < 20000;
            for (int k = 0; k < 4; k++) ok = ok && q[k] == q[k] && fabsf(q[k]) <= 1.001f;
            if (!ok || fabsf(q[0] * q[0] + q[1] * q[1] + q[2] * q[2] + q[3] * q[3] - 1) > 1e-3f || fabsf(p[0]) + fabsf(p[1]) + fabsf(p[2]) < 0.05f) continue;
            ak_turret_rec *r = &out[n++];
            r->id = ak_rd32(b); ak_from_game(p, r->pos);
            r->rot.x = q[0]; r->rot.y = -q[1]; r->rot.z = -q[2]; r->rot.w = q[3];   /* to engine axes (model.c's rule) */
            r->health = wf(b + 4 * (j + 7)); r->model_hash = ak_rd32(b + 4 * (j + 9));
            r->post_id = ak_rd32(b + 4 * (nw - 2)); r->range = wf(b + 4 * (nw - 1));
            if (!(r->range > 1 && r->range < 5000)) r->range = 100;
            break;
        }
    }
    return n;
}

void ak_turret_place(ak_turret *t, const ak_turret_def *d, const ak_turret_rec *r)
{
    memset(t, 0, sizeof *t);
    t->def = d; t->id = r->id; memcpy(t->pos, r->pos, 12); t->rot = r->rot;
    t->health = r->health > 0 ? r->health : d->health; t->range = r->range; t->post_id = r->post_id;
    t->alive = true; t->team = -1; t->enemy = -1;
    f32 x = r->rot.x, y = r->rot.y, z = r->rot.z, w = r->rot.w;
    f32 R[12] = { 1 - 2 * (y * y + z * z), 2 * (x * y - z * w), 2 * (x * z + y * w), r->pos[0],
                  2 * (x * y + z * w), 1 - 2 * (x * x + z * z), 2 * (y * z - x * w), r->pos[1],
                  2 * (x * z - y * w), 2 * (y * z + x * w), 1 - 2 * (x * x + y * y), r->pos[2] };
    memcpy(t->base, R, sizeof R);
}

static void mul34(const f32 *A, const f32 *B, f32 *O)                       /* O = A * B (3x4 rows, affine) */
{
    f32 T[12];
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) T[r * 4 + c] = A[r * 4] * B[c] + A[r * 4 + 1] * B[4 + c] + A[r * 4 + 2] * B[8 + c];
        T[r * 4 + 3] += A[r * 4 + 3];
    }
    memcpy(O, T, sizeof T);
}
static bool marker_of(const ak_model_set *m, s32 model, const char *name, f32 out[12])
{
    static const f32 I[12] = { 1, 0, 0, 0,  0, 1, 0, 0,  0, 0, 1, 0 };
    if (model < 0) return false;
    const ak_marker *mk = ak_model_marker(&m->models[model], name);
    if (!mk) return false;
    ak_marker_matrix(I, mk, out);
    /* the parts sit at the markers' points only: the markers' own orientations vary (half turns on box_turret's, a quarter turn on
     * Round_turret's "tur") while the parts are all modelled facing +z */
    f32 t3[3] = { out[3], out[7], out[11] };
    memcpy(out, I, sizeof I); out[3] = t3[0]; out[7] = t3[1]; out[11] = t3[2];
    return true;
}

bool ak_turret_pivot(const ak_turret *t, const ak_model_set *m, f32 out[12])
{
    f32 L[12];
    if (!marker_of(m, t->def->base, "tur", L)) { static const f32 I[12] = { 1, 0, 0, 0,  0, 1, 0, 0,  0, 0, 1, 0 }; memcpy(L, I, sizeof I); }
    f32 s = sinf(t->yaw), c = cosf(t->yaw), Y[12] = { c, 0, s, 0,  0, 1, 0, 0,  -s, 0, c, 0 };   /* about up: +z turns toward +x */
    mul34(t->base, L, out); mul34(out, Y, out);
    return true;
}

bool ak_turret_barrel(const ak_turret *t, const ak_model_set *m, f32 out[12])
{
    ak_turret_pivot(t, m, out);
    f32 L[12];
    if (marker_of(m, t->def->pivot, "bar", L)) mul34(out, L, out);
    f32 s = sinf(t->pitch), c = cosf(t->pitch), X[12] = { 1, 0, 0, 0,  0, c, s, 0,  0, -s, c, 0 };   /* up: +z tilts toward +y */
    mul34(out, X, out);
    return true;
}

bool ak_turret_muzzle(const ak_turret *t, const ak_model_set *m, u32 i, f32 out[3])
{
    if (i >= t->def->nmuzzles) return false;
    f32 B[12], L[12]; ak_turret_barrel(t, m, B);
    s32 carrier = t->def->barrel >= 0 ? t->def->barrel : t->def->pivot >= 0 ? t->def->pivot : t->def->base;
    if (!marker_of(m, carrier, t->def->muzzle[i], L)) return false;
    mul34(B, L, B);
    out[0] = B[3]; out[1] = B[7]; out[2] = B[11];
    return true;
}

bool ak_turret_aim_at(const ak_turret *t, const ak_model_set *m, const f32 *target, f32 *yaw, f32 *pitch)
{
    /* the target in the base's frame (rows are the axes: transpose to go back) */
    const f32 *B = t->base; f32 d[3] = { target[0] - B[3], target[1] - B[7], target[2] - B[11] };
    f32 lx = B[0] * d[0] + B[4] * d[1] + B[8] * d[2], ly = B[1] * d[0] + B[5] * d[1] + B[9] * d[2], lz = B[2] * d[0] + B[6] * d[1] + B[10] * d[2];
    f32 tur[12]; if (marker_of(m, t->def->base, "tur", tur)) ly -= tur[7];
    f32 F = t->def->face;                                                    /* a -z facing model: yaw by a half turn, pitch reversed */
    f32 y = atan2f(F * lx, F * lz), p = atan2f(ly, sqrtf(lx * lx + lz * lz));
    bool ok = true;
    if (t->def->yaw_min != 0 || t->def->yaw_max != 0) { if (y < t->def->yaw_min) { y = t->def->yaw_min; ok = false; } if (y > t->def->yaw_max) { y = t->def->yaw_max; ok = false; } }
    if (p < t->def->pitch_min) { p = t->def->pitch_min; ok = false; }
    if (p > t->def->pitch_max) { p = t->def->pitch_max; ok = false; }
    *yaw = y; *pitch = F * p;
    return ok;
}
