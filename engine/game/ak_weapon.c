/* Aurek - weapons and laser bolts (see ak_weapon.h) */
#include <math.h>
#include <string.h>
#include "game/ak_weapon.h"

#define SHOT_IGNORE 0          /* shots hit everything the level has (0x0004 surfaces stop shots and sight, not bodies) */

bool ak_weapon_def_load(const ak_blueprints *bp, const ak_model_set *models, const char *name, int faction, ak_weapon_def *d)
{
    memset(d, 0, sizeof *d);
    const ak_bp_object *w = ak_bp_find(bp, "Weapon", name);
    if (!w) return false;
    if (ak_bp_int(w, "Faction Specific", 0)) {                       /* the faction's own version: a direct child */
        const ak_bp_type *t = ak_bp_find_type(bp, "Weapon");
        for (u32 i = 0; t && i < t->nobjects; i++)
            if (t->objects[i].parent == w && ak_bp_int(&t->objects[i], "Faction", -1) == faction) { w = &t->objects[i]; break; }
    }
    d->bp = w; d->name = w->name;
    d->model = ak_models_find(models, ak_bp_string(w, "WeaponModel", ""));
    d->rate_of_fire = ak_bp_float(w, "RateOfFire", 0.3f);
    d->reload_time = ak_bp_float(w, "ReloadTime", 2.0f);
    d->distance = ak_bp_float(w, "Distance", 750.0f);
    d->clip = ak_bp_int(w, "AmmoPerClip", -1); d->clips = ak_bp_int(w, "MaxClips", 0);
    d->per_shot = (u32)ak_bp_int(w, "ProjectilesPerShot", 1); if (!d->per_shot) d->per_shot = 1;
    d->spread_deg = d->per_shot > 1 ? ak_bp_float(w, "MultishotSpreadAngle", 0) : 0;
    const char *pj = ak_bp_string(w, "Projectile", "");
    const ak_bp_object *lb = ak_bp_find(bp, "LaserBolt", pj), *pr = lb ? lb : ak_bp_find(bp, "Projectile", pj);
    d->dmg_infantry = ak_bp_float(pr, "DamageToInfantry", 10); d->dmg_vehicle = ak_bp_float(pr, "DamageToVehicle", 5);
    d->hitscan = !lb && pr && ak_bp_is(pr, "Hit Scan");
    d->headshots = ak_bp_int(w, "AllowHeadshots", 1) != 0;
    d->speed = ak_bp_float(pr, "ProjectileSpeed", 100); d->range = lb ? ak_bp_float(lb, "range", 50) : d->distance;
    d->length = ak_bp_float(lb, "length", 1.5f); d->thickness = ak_bp_float(lb, "thickness", 0.2f);
    d->colour = (u32)ak_bp_int(lb, "colour", (s32)0xFFFF2020u);
    d->dscale_dist = ak_bp_float(lb, "DistanceScalingMaxDist", 0); d->dscale_max = ak_bp_float(lb, "DistanceScalingMaxScale", 1);
    return true;
}

bool ak_weapon_def_bolt(const ak_blueprints *bp, const char *bolt, ak_weapon_def *d)
{
    memset(d, 0, sizeof *d);
    const ak_bp_object *lb = ak_bp_find(bp, "LaserBolt", bolt);
    if (!lb) return false;
    d->bp = lb; d->name = lb->name; d->model = -1;
    d->rate_of_fire = 0; d->distance = 750; d->clip = -1; d->per_shot = 1; d->headshots = false;
    d->dmg_infantry = ak_bp_float(lb, "DamageToInfantry", 10); d->dmg_vehicle = ak_bp_float(lb, "DamageToVehicle", 10);
    d->speed = ak_bp_float(lb, "ProjectileSpeed", 100); d->range = ak_bp_float(lb, "range", 100); d->distance = d->range;
    d->length = ak_bp_float(lb, "length", 1.5f); d->thickness = ak_bp_float(lb, "thickness", 0.2f);
    d->colour = (u32)ak_bp_int(lb, "colour", (s32)0xFFFF2020u);
    d->dscale_dist = ak_bp_float(lb, "DistanceScalingMaxDist", 0); d->dscale_max = ak_bp_float(lb, "DistanceScalingMaxScale", 1);
    return true;
}

void ak_weapon_give(ak_weapon *w, const ak_weapon_def *d)
{
    memset(w, 0, sizeof *w); w->def = d; w->team = -1; w->owner = -1;
    w->ammo = d->clip; w->spare = d->clip > 0 ? d->clip * (d->clips > 0 ? d->clips - 1 : 0) : 0;
}

/* first target hit along o + t d, t in (0, max]: vertical capsule (the body) or the head sphere */
static s32 ray_targets(ak_target *tg, u32 n, const f32 *o, const f32 *d, f32 max, f32 *t_out, bool *head, int team)
{
    s32 best = -1; f32 bt = max;
    for (u32 i = 0; i < n; i++) {
        ak_target *T = &tg[i]; if (!T->alive || (team >= 0 && T->team == team)) continue;
        /* head sphere */
        f32 oc[3] = { o[0] - T->head[0], o[1] - T->head[1], o[2] - T->head[2] };
        f32 b = oc[0] * d[0] + oc[1] * d[1] + oc[2] * d[2], c = oc[0] * oc[0] + oc[1] * oc[1] + oc[2] * oc[2] - T->head_radius * T->head_radius, disc = b * b - c;
        if (disc >= 0) { f32 t = -b - sqrtf(disc); if (t > 0 && t < bt) { bt = t; best = (s32)i; *head = true; } }
        /* body: infinite vertical cylinder, then clamp to the body's height (below the head) */
        f32 ox = o[0] - T->feet[0], oz = o[2] - T->feet[2], a2 = d[0] * d[0] + d[2] * d[2];
        if (a2 < 1e-8f) continue;
        f32 b2 = ox * d[0] + oz * d[2], c2 = ox * ox + oz * oz - T->radius * T->radius, disc2 = b2 * b2 - a2 * c2;
        if (disc2 < 0) continue;
        f32 t = (-b2 - sqrtf(disc2)) / a2; if (t <= 0) t = (-b2 + sqrtf(disc2)) / a2;
        f32 y = o[1] + d[1] * t - T->feet[1];
        if (t > 0 && t < bt && y >= 0 && y <= T->height) { bt = t; best = (s32)i; *head = false; }
    }
    *t_out = bt;
    return best;
}

static void hurt(ak_target *T, f32 dmg_inf, f32 dmg_veh, bool head, bool allow_head, const f32 *dir, s32 owner)
{
    T->last_attacker = owner;
    f32 d = T->vehicle ? dmg_veh : dmg_inf;
    if (head && allow_head && !T->vehicle) { d *= T->headshot_mult; T->headshots++; }
    T->health -= d; T->hits++;
    memcpy(T->last_hit_dir, dir, 12);
    if (T->health <= 0) { T->health = 0; T->alive = false; }
}

static f32 rnd(u32 *s) { *s = *s * 1664525u + 1013904223u; return (f32)(*s >> 8) / 16777216.0f; }

static void impact(ak_bolts *b, const ak_col_hit *h, u32 colour)
{
    ak_impact *im = &b->imp[b->next_imp]; b->next_imp = (b->next_imp + 1) % AK_MAX_IMPACTS; if (b->nimp < AK_MAX_IMPACTS) b->nimp++;
    memcpy(im->pos, h->pos, 12); memcpy(im->normal, h->normal, 12); im->age = 0; im->colour = colour;
    b->hits++;
}

u32 ak_weapon_fire(ak_weapon *w, ak_bolts *b, const ak_collision *col, ak_target *tg, u32 ntg, const f32 *muzzle, const f32 *target, u32 *seed)
{
    const ak_weapon_def *d = w->def;
    if (!d || w->cooldown > 0 || w->reload_t > 0) return 0;
    if (d->clip > 0 && w->ammo <= 0) { if (w->spare > 0) w->reload_t = d->reload_time; return 0; }
    f32 dir[3] = { target[0] - muzzle[0], target[1] - muzzle[1], target[2] - muzzle[2] };
    f32 l = sqrtf(dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2]); if (l < 1e-4f) return 0;
    for (int k = 0; k < 3; k++) dir[k] /= l;
    for (u32 s = 0; s < d->per_shot; s++) {
        f32 dd[3] = { dir[0], dir[1], dir[2] };
        if (d->spread_deg > 0) {                                          /* a random direction inside the spread cone */
            f32 a = d->spread_deg * 0.5f * 3.14159265f / 180.0f * sqrtf(rnd(seed)), ph = rnd(seed) * 6.2831853f;
            f32 up[3] = { 0, 1, 0 }, r[3] = { dd[1] * up[2] - dd[2] * up[1], dd[2] * up[0] - dd[0] * up[2], dd[0] * up[1] - dd[1] * up[0] };
            f32 rl = sqrtf(r[0] * r[0] + r[1] * r[1] + r[2] * r[2]); if (rl < 1e-4f) { r[0] = 1; r[1] = r[2] = 0; rl = 1; }
            for (int k = 0; k < 3; k++) r[k] /= rl;
            f32 u[3] = { r[1] * dd[2] - r[2] * dd[1], r[2] * dd[0] - r[0] * dd[2], r[0] * dd[1] - r[1] * dd[0] };
            for (int k = 0; k < 3; k++) dd[k] = dd[k] * cosf(a) + (r[k] * cosf(ph) + u[k] * sinf(ph)) * sinf(a);
        }
        if (d->hitscan) {
            ak_col_hit h; f32 reach = d->distance, tt; bool head = false;
            bool wall = ak_col_raycast(col, muzzle, dd, reach, SHOT_IGNORE, &h); if (wall) reach = h.t;
            s32 ti = ray_targets(tg, ntg, muzzle, dd, reach, &tt, &head, w->team);
            if (ti >= 0) hurt(&tg[ti], d->dmg_infantry, d->dmg_vehicle, head, d->headshots, dd, w->owner);
            else if (wall) impact(b, &h, 0xFFFFFFFFu);
            continue;
        }
        if (b->n >= AK_MAX_BOLTS) break;
        ak_bolt *o = &b->b[b->n++];
        memcpy(o->pos, muzzle, 12); memcpy(o->dir, dd, 12);
        o->travelled = 0; o->range = d->range; o->speed = d->speed; o->length = d->length; o->thick = d->thickness; o->damage = d->dmg_infantry; o->damage_vehicle = d->dmg_vehicle; o->headshots = d->headshots; o->colour = d->colour; o->dscale_max = d->dscale_max; o->dscale_dist = d->dscale_dist; o->team = w->team; o->owner = w->owner;
    }
    b->fired++;
    w->cooldown = d->rate_of_fire;
    if (d->clip > 0) w->ammo--;
    return 1;
}

void ak_weapon_update(ak_weapon *w, f32 dt, bool reload)
{
    const ak_weapon_def *d = w->def; if (!d) return;
    if (w->cooldown > 0) w->cooldown -= dt;
    if (reload && d->clip > 0 && w->ammo < d->clip && w->spare > 0 && w->reload_t <= 0) w->reload_t = d->reload_time;
    if (w->reload_t > 0) {
        w->reload_t -= dt;
        if (w->reload_t <= 0) { s32 take = d->clip - w->ammo; if (take > w->spare) take = w->spare; w->ammo += take; w->spare -= take; w->reload_t = 0; }
    }
}

void ak_bolts_update(ak_bolts *b, const ak_collision *col, ak_target *tg, u32 ntg, f32 dt)
{
    for (u32 i = 0; i < b->n;) {
        ak_bolt *o = &b->b[i]; f32 step = o->speed * dt; bool dead = false;
        if (o->travelled + step > o->range) { step = o->range - o->travelled; dead = true; }
        ak_col_hit h; f32 tt; bool head = false;
        bool wall = step > 0 && ak_col_raycast(col, o->pos, o->dir, step, SHOT_IGNORE, &h);
        s32 ti = step > 0 ? ray_targets(tg, ntg, o->pos, o->dir, wall ? h.t : step, &tt, &head, o->team) : -1;
        if (ti >= 0) {
            hurt(&tg[ti], o->damage, o->damage_vehicle, head, o->headshots, o->dir, o->owner);
            ak_col_hit fake; for (int k = 0; k < 3; k++) { fake.pos[k] = o->pos[k] + o->dir[k] * tt; fake.normal[k] = -o->dir[k]; }
            impact(b, &fake, o->colour); step = tt; dead = true;
        } else if (wall) { impact(b, &h, o->colour); dead = true; }
        for (int k = 0; k < 3; k++) o->pos[k] += o->dir[k] * step;
        o->travelled += step;
        if (dead) b->b[i] = b->b[--b->n]; else i++;
    }
    for (u32 i = 0; i < b->nimp; i++) b->imp[i].age += dt;
}

static void vtx(ak_vtx *o, const f32 *p, f32 u, f32 v, u32 rgba, u8 alpha)
{
    memset(o, 0, sizeof *o); memcpy(o->pos, p, 12); o->uv[0] = u; o->uv[1] = v;
    o->col[0] = (u8)(((rgba >> 16) & 255) / 2); o->col[1] = (u8)(((rgba >> 8) & 255) / 2); o->col[2] = (u8)((rgba & 255) / 2);   /* 128 = full (x2 in the shader) */
    o->col[3] = alpha;
}

u32 ak_beam(ak_vtx *v, const f32 *a, const f32 *c, f32 halfw, const f32 *eye, u32 rgba, u8 alpha_a, u8 alpha_c)
{
    f32 ax[3] = { c[0] - a[0], c[1] - a[1], c[2] - a[2] }, l = sqrtf(ax[0] * ax[0] + ax[1] * ax[1] + ax[2] * ax[2]);
    f32 to[3] = { eye[0] - c[0], eye[1] - c[1], eye[2] - c[2] }, tl = sqrtf(to[0] * to[0] + to[1] * to[1] + to[2] * to[2]);
    if (tl < 1e-5f) return 0;
    for (int k = 0; k < 3; k++) to[k] /= tl;
    f32 cosv = 1.0f;
    if (l > 1e-5f) { for (int k = 0; k < 3; k++) ax[k] /= l; cosv = fabsf(ax[0] * to[0] + ax[1] * to[1] + ax[2] * to[2]); }
    if (cosv > 0.9998f) {
        /* looking straight along it (within about a degree, the game's test): a square facing the camera at the near end */
        f32 up[3] = { 0, 1, 0 }; if (fabsf(to[1]) > 0.95f) { up[0] = 1; up[1] = 0; }
        f32 r[3] = { up[1] * to[2] - up[2] * to[1], up[2] * to[0] - up[0] * to[2], up[0] * to[1] - up[1] * to[0] };
        f32 rl = sqrtf(r[0] * r[0] + r[1] * r[1] + r[2] * r[2]); for (int k = 0; k < 3; k++) r[k] /= rl;
        f32 u[3] = { to[1] * r[2] - to[2] * r[1], to[2] * r[0] - to[0] * r[2], to[0] * r[1] - to[1] * r[0] };
        const f32 *m = alpha_c >= alpha_a ? c : a; u8 al = alpha_c >= alpha_a ? alpha_c : alpha_a;
        f32 q[4][3]; static const f32 qu[4][2] = { { -1, -1 }, { 1, -1 }, { 1, 1 }, { -1, 1 } };
        for (int i = 0; i < 4; i++) for (int k = 0; k < 3; k++) q[i][k] = m[k] + (r[k] * qu[i][0] + u[k] * qu[i][1]) * halfw;
        static const int tri[6] = { 0, 1, 2, 0, 2, 3 };
        for (int i = 0; i < 6; i++) vtx(&v[i], q[tri[i]], qu[tri[i]][0], qu[tri[i]][1], rgba, al);
        return 6;
    }
    /* the game's strip: turned about its own axis to face the camera (side = axis x to-camera), pointed at both ends */
    f32 s[3] = { ax[1] * to[2] - ax[2] * to[1], ax[2] * to[0] - ax[0] * to[2], ax[0] * to[1] - ax[1] * to[0] };
    f32 sl = sqrtf(s[0] * s[0] + s[1] * s[1] + s[2] * s[2]); for (int k = 0; k < 3; k++) s[k] *= halfw / sl;
    f32 P[6][3];
    for (int k = 0; k < 3; k++) {
        P[0][k] = a[k] - ax[k] * halfw * 2; P[1][k] = a[k] - s[k]; P[2][k] = a[k] + s[k];
        P[3][k] = c[k] - s[k]; P[4][k] = c[k] + s[k]; P[5][k] = c[k] + ax[k] * halfw * 2;
    }
    /* UV: across in half-widths; along, 0 over the body and out to 2 at the tips, so length(uv) is the distance to the core line */
    static const f32 U[6][2] = { { -2, 0 }, { 0, -1 }, { 0, 1 }, { 0, -1 }, { 0, 1 }, { 2, 0 } };
    u8 A[6] = { alpha_a, alpha_a, alpha_a, alpha_c, alpha_c, alpha_c };
    static const int tri[12] = { 0, 1, 2,  1, 3, 4,  1, 4, 2,  3, 5, 4 };
    for (int i = 0; i < 12; i++) vtx(&v[i], P[tri[i]], U[tri[i]][0], U[tri[i]][1], rgba, A[tri[i]]);
    return 12;
}

u32 ak_flash(ak_vtx *v, const f32 *pos, f32 halfw, const f32 *eye, u32 rgba, u8 alpha)
{
    f32 a[3] = { pos[0], pos[1], pos[2] }, c[3] = { pos[0], pos[1], pos[2] };
    f32 to[3] = { eye[0] - pos[0], eye[1] - pos[1], eye[2] - pos[2] }, tl = sqrtf(to[0] * to[0] + to[1] * to[1] + to[2] * to[2]);
    if (tl < 1e-5f) return 0;
    for (int k = 0; k < 3; k++) c[k] += to[k] / tl * 0.001f;               /* a zero-length beam toward the camera: the facing square */
    return ak_beam(v, a, c, halfw, eye, rgba, alpha, alpha);
}

u32 ak_bolts_vertices(const ak_bolts *b, const f32 *eye, ak_vtx *out, u32 max)
{
    u32 n = 0;
    for (u32 i = 0; i < b->n && n + AK_BEAM_VERTS <= max; i++) {
        const ak_bolt *o = &b->b[i];
        f32 len = o->length < o->travelled ? o->length : o->travelled, tail[3];
        for (int k = 0; k < 3; k++) tail[k] = o->pos[k] - o->dir[k] * len;
        f32 w = o->thick * 0.5f / 0.75f;                                  /* the game's half-width (thickness x 0.5) at the glow's visible edge */
        if (o->dscale_dist > 0) {                                         /* far bolts drawn bigger (space lasers: up to x8 by 100 m) */
            f32 dx = o->pos[0] - eye[0], dy = o->pos[1] - eye[1], dz = o->pos[2] - eye[2], d = sqrtf(dx * dx + dy * dy + dz * dz) / o->dscale_dist;
            w *= 1.0f + (o->dscale_max - 1.0f) * (d > 1 ? 1 : d);
        }
        n += ak_beam(out + n, tail, o->pos, w, eye, o->colour, 160, 255);
    }
    for (u32 i = 0; i < b->nimp && n + AK_BEAM_VERTS <= max; i++) {
        const ak_impact *im = &b->imp[i];
        if (im->age > 0.15f) continue;
        f32 p[3]; for (int k = 0; k < 3; k++) p[k] = im->pos[k] + im->normal[k] * 0.05f;
        n += ak_flash(out + n, p, 0.25f + im->age * 3.0f, eye, im->colour, (u8)(255 * (1.0f - im->age / 0.15f)));
    }
    return n;
}
