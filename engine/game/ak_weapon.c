/* Aurek - weapons and laser bolts (see ak_weapon.h) */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "game/ak_weapon.h"
#include "core/ak_settings.h"
#include "audio/ak_audio.h"

#define SHOT_IGNORE 0          /* shots hit everything the level has (0x0004 surfaces stop shots and sight, not bodies) */

bool ak_weapon_def_load(const ak_blueprints *bp, const ak_model_set *models, const char *name, int faction, ak_weapon_def *d)
{
    memset(d, 0, sizeof *d);
    const ak_bp_object *w = ak_bp_find(bp, "Weapon", name);
    if (!w) return false;
    if (ak_bp_int(w, "Faction Specific", 0)) {                       /* the faction's own version: a direct child */
        const ak_bp_type *t = ak_bp_find_type(bp, "Weapon");
        {   static int dc = -1; if (dc < 0) dc = ak_setting_int("AK_DEBUG_WEAPON_CHILDREN", 0);   /* tests: a faction-specific weapon's children */
            if (dc) for (u32 i = 0; t && i < t->nobjects; i++) if (t->objects[i].parent == w)
                AK_INFO("weapon", "%s (asked for faction %d): child %s, Faction %d", name, faction, t->objects[i].name, ak_bp_int(&t->objects[i], "Faction", -1)); }
        for (u32 i = 0; t && i < t->nobjects; i++)
            if (t->objects[i].parent == w && ak_bp_int(&t->objects[i], "Faction", -1) == faction) { w = &t->objects[i]; break; }
    }
    d->bp = w; d->name = w->name;
    d->fire_snd = ak_bp_string(w, "Fire Sound", NULL);
    d->hud_icon = ak_bp_string(w, "HUDIcon", NULL);
    d->model = ak_models_find(models, ak_bp_string(w, "WeaponModel", ""));
    d->rate_of_fire = ak_bp_float(w, "RateOfFire", 0.3f);
    d->ai_acc[0] = ak_bp_float(w, "AIWeapon_Accuracy_Normal", 5.0f); d->ai_acc[1] = ak_bp_float(w, "AIWeapon_Accuracy_Elite", 5.0f);
    for (int k = 0; k < 2; k++) if (d->ai_acc[k] < 0) d->ai_acc[k] = 0;
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
    d->muzzle_pfx = ak_bp_string(w, "PFXMuzzleFlash", NULL); if (d->muzzle_pfx && !*d->muzzle_pfx) d->muzzle_pfx = NULL;
    d->impact_pfx = ak_bp_string(lb ? lb : w, "impact pfx", NULL); d->shield_pfx = ak_bp_string(lb ? lb : w, "shield impact pfx", NULL);
    d->impact_pfx_dist = ak_bp_float(w, "impact pfx max dist", 100);
    d->passby = ak_bp_string(lb ? lb : w, "passby sound", "Projectile_Passby"); d->passby_range = ak_bp_float(lb ? lb : w, "passby range", 5.0f);
    ak_weapon_def_heat(w, d);
    return true;
}

void ak_weapon_def_heat(const ak_bp_object *w, ak_weapon_def *d)
{
    d->heat_shot = ak_bp_float(w, "OverheatPershot", 0); d->heat_decay = ak_bp_float(w, "OverheatDecay", 0);
    d->heat_recover = ak_bp_float(w, "OverheatRecoveryTime", 0); d->burst_time = ak_bp_float(w, "BurstTime", 0); d->windup = ak_bp_float(w, "WindupTime", 0); d->bot_dmg = 1.0f;
    if (!d->per_shot) d->per_shot = 1;
}

void ak_heat_shot(ak_heat *h, const ak_weapon_def *d)
{
    if (d->heat_shot <= 0) return;
    h->heat += d->burst_time == 0 ? (f32)d->per_shot * d->heat_shot : d->heat_shot;
    h->fired = true;
    if (h->heat > 100.0f) { h->heat = 100.0f; h->recover_t = d->heat_recover; h->fired = false; }
}

void ak_heat_update(ak_heat *h, const ak_weapon_def *d, f32 dt)
{
    if (h->recover_t > 0) { h->recover_t -= dt; if (h->recover_t < 0) h->recover_t = 0; return; }
    if (h->heat > 0) { h->heat -= dt * (h->fired ? d->heat_decay : 200.0f); if (h->heat < 0) h->heat = 0; }
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
    d->impact_pfx = ak_bp_string(lb, "impact pfx", NULL); d->shield_pfx = ak_bp_string(lb, "shield impact pfx", NULL); d->impact_pfx_dist = 100;
    d->passby = ak_bp_string(lb, "passby sound", "Projectile_Passby"); d->passby_range = ak_bp_float(lb, "passby range", 5.0f);
    return true;
}

void ak_weapon_give(ak_weapon *w, const ak_weapon_def *d)
{
    memset(w, 0, sizeof *w); w->def = d; w->team = -1; w->owner = -1; w->src = -1;
    w->ammo = d->clip; w->spare = d->clip > 0 ? d->clip * (d->clips > 0 ? d->clips - 1 : 0) : 0;
}

/* first target hit along o + t d, t in (0, max]: vertical capsule (the body) or the head sphere.  Team-mates let shots through
 * (2.7, measured: no hit message ever reached a team-mate in the original, and the soldiers' damage path 089A7310 -> 089E1FDC has
 * no team test, so the bolt does not register them - where it skips them is not found; 089DD5B4 skips the shooter and objects
 * flagged at +0x4D / +0xF7).  AK_FRIENDLY_BLOCK=1: team-mates stop shots without harm (a test switch) */
static s32 ray_targets(ak_target *tg, u32 n, const f32 *o, const f32 *d, f32 max, f32 *t_out, bool *head, int team, s32 src)
{
    s32 best = -1; f32 bt = max;
    static int fb = -1; if (fb < 0) fb = ak_setting_int("AK_FRIENDLY_BLOCK", 0);
    for (u32 i = 0; i < n; i++) {
        ak_target *T = &tg[i]; if (!T->alive || (s32)i == src || (!fb && team >= 0 && T->team == team)) continue;
        if (T->nbb) {                                                      /* the bone boxes (08808B24): the nearest box hit, part 6 the head */
            for (u32 q = 0; q < T->nbb; q++) {
                f32 lo = 0, hi = bt; bool in = true;
                for (int k = 0; k < 3 && in; k++) {
                    f32 oc = (o[0] - T->bb_c[q][0]) * T->bb_ax[q][k][0] + (o[1] - T->bb_c[q][1]) * T->bb_ax[q][k][1] + (o[2] - T->bb_c[q][2]) * T->bb_ax[q][k][2];
                    f32 dd = d[0] * T->bb_ax[q][k][0] + d[1] * T->bb_ax[q][k][1] + d[2] * T->bb_ax[q][k][2];
                    if (fabsf(dd) < 1e-9f) { if (fabsf(oc) > T->bb_h[q][k]) in = false; continue; }
                    f32 t1 = (-T->bb_h[q][k] - oc) / dd, t2 = (T->bb_h[q][k] - oc) / dd; if (t1 > t2) { f32 x = t1; t1 = t2; t2 = x; }
                    if (t1 > lo) lo = t1;
                    if (t2 < hi) hi = t2;
                    if (lo > hi) in = false;
                }
                if (in && lo > 0 && lo < bt) { bt = lo; best = (s32)i; *head = T->bb_bone[q] == AK_HEAD_PART; }
            }
            continue;
        }
        if (T->nplanes) {                                                  /* a convex hull: clip the ray by its faces' planes */
            f32 lo = 0, hi = bt; bool in = true;
            for (u32 k = 0; k < T->nplanes && in; k++) {
                const f32 *pl = T->planes + 4 * k;
                f32 dn = pl[0] * d[0] + pl[1] * d[1] + pl[2] * d[2], ds = pl[0] * o[0] + pl[1] * o[1] + pl[2] * o[2] - pl[3];
                if (fabsf(dn) < 1e-9f) { if (ds > 0) in = false; continue; }
                f32 t = -ds / dn;
                if (dn < 0) { if (t > lo) lo = t; } else { if (t < hi) hi = t; }
                if (lo > hi) in = false;
            }
            if (in && lo > 0 && lo < bt) { bt = lo; best = (s32)i; *head = false; }
            continue;
        }
        if (T->boxed) {                                                    /* the body box: a slab test in its frame */
            f32 lo = 0, hi = bt; bool in = true;
            for (int k = 0; k < 3 && in; k++) {
                f32 oc = (o[0] - T->box_c[0]) * T->box_ax[k][0] + (o[1] - T->box_c[1]) * T->box_ax[k][1] + (o[2] - T->box_c[2]) * T->box_ax[k][2];
                f32 dd = d[0] * T->box_ax[k][0] + d[1] * T->box_ax[k][1] + d[2] * T->box_ax[k][2];
                if (fabsf(dd) < 1e-9f) { if (fabsf(oc) > T->box_h[k]) in = false; continue; }
                f32 t1 = (-T->box_h[k] - oc) / dd, t2 = (T->box_h[k] - oc) / dd; if (t1 > t2) { f32 x = t1; t1 = t2; t2 = x; }
                if (t1 > lo) lo = t1;
                if (t2 < hi) hi = t2;
                if (lo > hi) in = false;
            }
            if (in && lo > 0 && lo < bt) { bt = lo; best = (s32)i; *head = false; }
            continue;
        }
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

static void hurt(ak_target *T, f32 dmg_inf, f32 dmg_veh, bool head, bool allow_head, const f32 *dir, s32 owner, bool rage)
{
    T->last_attacker = owner; T->last_quiet = false;
    {   static int lh = -1; if (lh < 0) lh = ak_setting_int("AK_LOG_HITS", 0); if (lh) AK_INFO("hit", "owner %d", owner); }   /* (tests: who hits, for the shooters' movement) */
    f32 d = T->vehicle ? dmg_veh : dmg_inf;
    if (head && allow_head && !T->vehicle) { d *= T->headshot_mult; T->headshots++; }
    /* a soldier's damage handler (089A7310): after the headshot, x2 when the attacker's unit has Rage (vfunc +0x98, 08AC4970),
       x0.5 (D_08AEEA10) when its own has Rally (vfunc +0x9C) - fixed factors, the Weapons' Damage_Multiplier / Damage_Reduction
       are not read (2.3p) */
    if (!T->vehicle) { if (rage) d *= 2.0f; if (T->rally) d *= 0.5f; }
    {   static int lh2 = -1; if (lh2 < 0) lh2 = ak_setting_int("AK_LOG_HITS", 0); if (lh2 >= 2) AK_INFO("hit", "owner %d damage %.2f%s health %.1f -> %.1f", owner, d, head && allow_head && !T->vehicle ? " (head)" : "", T->health, T->health - d); }
    T->health -= d; T->hits++;
    memcpy(T->last_hit_dir, dir, 12);
    if (T->health <= 0) { T->health = 0; T->alive = false; }
}

static f32 rnd(u32 *s) { *s = *s * 1664525u + 1013904223u; return (f32)(*s >> 8) / 16777216.0f; }

static void impact(ak_bolts *b, const ak_col_hit *h, u32 colour, bool body, const char *pfx)
{
    ak_impact *im = &b->imp[b->next_imp]; b->next_imp = (b->next_imp + 1) % AK_MAX_IMPACTS; if (b->nimp < AK_MAX_IMPACTS) b->nimp++;
    memcpy(im->pos, h->pos, 12); memcpy(im->normal, h->normal, 12); im->age = 0; im->colour = colour;
    im->material = body ? 0xFFFF : h->material; im->body = body; im->pfx = pfx;
    b->hits++; b->impacts++;
}

u32 ak_weapon_fire(ak_weapon *w, ak_bolts *b, const ak_collision *col, ak_target *tg, u32 ntg, const f32 *muzzle, const f32 *target, u32 *seed)
{
    const ak_weapon_def *d = w->def;
    if (!d || w->cooldown > 0 || w->reload_t > 0 || (w->heats && !ak_heat_ready(&w->heat))) return 0;
    if (d->clip > 0 && w->ammo <= 0) { if (w->spare > 0) w->reload_t = d->reload_time; return 0; }
    f32 dir[3] = { target[0] - muzzle[0], target[1] - muzzle[1], target[2] - muzzle[2] };
    f32 l = sqrtf(dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2]); if (l < 1e-4f) return 0;
    for (int k = 0; k < 3; k++) dir[k] /= l;
    /* a burst weapon (BurstTime > 0 with ProjectilesPerShot 2 or more: Boba Fett's rifle 0.1 / 3): traced in the shot 08A1C5E4 -
       with w+56 (BurstTime) above 0, or fewer than 2 projectiles, each call makes one projectile (no fan); a press owes
       ProjectilesPerShot calls (08A17C64 loads w+296 from w+100 when it is 0), each call takes one (w+296 - 1) and adds
       OverheatPershot once; between them the cooldown is BurstTime, after the last RateOfFire. Measured on the original (gdb,
       Boba Fett's rifle in a bot's hands): calls 6 frames apart, then 0.983 s; the heat +20 a call */
    const bool burst = d->burst_time > 0 && d->per_shot > 1;
    if (burst && w->owed <= 0) w->owed = (s32)d->per_shot;
    for (u32 s = 0; s < (burst ? 1u : d->per_shot); s++) {
        f32 dd[3] = { dir[0], dir[1], dir[2] };
        if (!burst && d->spread_deg > 0 && d->per_shot > 1) {
            /* the multishot fan (traced, the shot 08A1C5E4: MultishotSpreadAngle x pi/180 at w+96, ProjectilesPerShot at w+100): the
               projectiles leave evenly spaced across the spread, from -spread / 2 in steps of spread / (count - 1), each turned about
               the aim frame's up axis - not a random cone.  [assumed: the frame's up taken as the world's up turned with the aim; the
               branch on w+112 before the fan not read] */
            f32 sp = d->spread_deg * 3.14159265f / 180.0f, a = -0.5f * sp + sp * (f32)s / (f32)(d->per_shot - 1);
            f32 up[3] = { 0, 1, 0 }, r[3] = { dd[1] * up[2] - dd[2] * up[1], dd[2] * up[0] - dd[0] * up[2], dd[0] * up[1] - dd[1] * up[0] };
            f32 rl = sqrtf(r[0] * r[0] + r[1] * r[1] + r[2] * r[2]); if (rl < 1e-4f) { r[0] = 1; r[1] = r[2] = 0; rl = 1; }
            for (int k = 0; k < 3; k++) r[k] /= rl;
            for (int k = 0; k < 3; k++) dd[k] = dd[k] * cosf(a) + r[k] * sinf(a);
        }
        if (d->hitscan) {
            ak_col_hit h; f32 reach = d->distance, tt; bool head = false;
            bool wall = ak_col_raycast(col, muzzle, dd, reach, SHOT_IGNORE, &h); if (wall) reach = h.t;
            s32 ti = ray_targets(tg, ntg, muzzle, dd, reach, &tt, &head, w->team, w->src >= 0 ? w->src : w->owner);
            if (ti >= 0 && (w->team < 0 || tg[ti].team != w->team)) hurt(&tg[ti], d->dmg_infantry, d->dmg_vehicle, head, d->headshots, dd, w->owner, w->owner >= 0 && (u32)w->owner < ntg && tg[w->owner].rage);
            else if (wall) impact(b, &h, 0xFFFFFFFFu, false, d->impact_pfx);
            continue;
        }
        if (b->n >= AK_MAX_BOLTS) break;
        ak_bolt *o = &b->b[b->n++];
        memcpy(o->pos, muzzle, 12); memcpy(o->dir, dd, 12);
        o->travelled = 0; o->range = d->range; o->speed = d->speed; o->length = d->length; o->thick = d->thickness; o->damage = d->dmg_infantry; o->damage_vehicle = d->dmg_vehicle; o->vs_local = d->bot_dmg > 0 ? d->bot_dmg : 1.0f; o->ai = d->ai; o->headshots = d->headshots; o->colour = d->colour; o->dscale_max = d->dscale_max; o->dscale_dist = d->dscale_dist; o->team = w->team; o->owner = w->owner; o->src = w->src >= 0 ? w->src : w->owner; o->impact_pfx = d->impact_pfx; o->shield_pfx = d->shield_pfx; o->passby = d->passby; o->passby_range = d->passby_range; o->passby_h = 0;
    }
    b->fired++;
    if (d->muzzle_pfx) { ak_shot_fx *f = &b->shot[b->shots++ % AK_MAX_SHOT_FX]; memcpy(f->pos, muzzle, 12); memcpy(f->dir, dir, 12); f->pfx = d->muzzle_pfx; f->colour = d->colour; }
    w->cooldown = d->rate_of_fire;
    if (burst) { w->owed--; if (w->owed > 0) w->cooldown = d->burst_time; }
    else if (w->owed > 0) w->owed--;
    if (d->clip > 0) w->ammo--;
    /* the reload starts with the shot that empties the clip (measured: the blaster rifle's last round at frame 497, a full clip
       at 631 - its ReloadTime 2.25 s from that shot) */
    if (d->clip > 0 && w->ammo <= 0 && w->spare > 0) w->reload_t = d->reload_time;
    if (w->heats) ak_heat_shot(&w->heat, d);
    if (d->fire_snd) ak_audio_play(d->fire_snd, muzzle, false);       /* the weapon's "Fire Sound" */
    return 1;
}

void ak_weapon_update(ak_weapon *w, f32 dt, bool reload)
{
    const ak_weapon_def *d = w->def; if (!d) return;
    if (w->cooldown > 0) w->cooldown -= dt;
    ak_heat_update(&w->heat, d, dt);
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
        s32 ti = step > 0 ? ray_targets(tg, ntg, o->pos, o->dir, wall ? h.t : step, &tt, &head, o->team, o->src) : -1;
        {   static int dp = -1; if (dp < 0) dp = ak_setting_int("AK_DEBUG_PROPS", 0);
            if (dp && wall && o->owner == 0) AK_INFO("bolt", "wall at %.2f %.2f %.2f (t %.2f), target %d", h.pos[0], h.pos[1], h.pos[2], h.t, ti); }
        if (ti >= 0) {
            {   f32 k = tg[ti].local && o->ai ? o->vs_local * (tg[ti].elite > 0 ? tg[ti].elite : 1.0f) : 1.0f;   /* (089E1FDC: an AI's shot at the local player takes Modifier_Bot_Damage) */
                {   static int lgf = -1; if (lgf < 0) lgf = ak_setting_int("AK_DEBUG_FRIENDLY", 0);
                    if (lgf && o->team >= 0 && tg[ti].team == o->team) AK_INFO("bolt", "stopped by team-mate %d (owner %d)", ti, o->owner); }
                if (o->team < 0 || tg[ti].team != o->team) hurt(&tg[ti], o->damage * k, o->damage_vehicle * k, head, o->headshots, o->dir, o->owner, o->owner >= 0 && (u32)o->owner < ntg && tg[o->owner].rage); }
            {   static int lg = -1; if (lg < 0) lg = getenv("AK_LOG_VEH_HITS") != NULL;   /* tests: each hit on a vehicle, the shot's range */
                if (lg && tg[ti].vehicle) AK_INFO("vhit", "owner %d target %d at %.0f m, %.1f", o->owner, ti, o->travelled + tt, o->damage_vehicle); }
            ak_col_hit fake; for (int k = 0; k < 3; k++) { fake.pos[k] = o->pos[k] + o->dir[k] * tt; fake.normal[k] = -o->dir[k]; }
            fake.material = 0xFFFF; impact(b, &fake, o->colour, true, tg[ti].vehicle ? o->shield_pfx : NULL);   /* [assumed] soldiers: none */ step = tt; dead = true;
        } else if (wall) { impact(b, &h, o->colour, false, o->impact_pfx); dead = true; }
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

u32 ak_saber_fan(ak_vtx *out, u32 max, const f32 (*base)[3], const f32 (*tip)[3], const f32 *age, u32 n, f32 life, u32 rgba)
{
    enum { STEPS = 6 };
    u32 w = 0; f32 swept = 0;                                                 /* the fan covers at most ~90 degrees of arc */
    f32 cr = (f32)((rgba >> 16) & 255) / 255.0f, cg = (f32)((rgba >> 8) & 255) / 255.0f, cb = (f32)(rgba & 255) / 255.0f;
    for (u32 i = 0; i + 1 < n; i++) {
        if (age[i] >= life) break;
        f32 d0[3], d1[3], l0 = 0, l1 = 0;
        for (int k = 0; k < 3; k++) { d0[k] = tip[i][k] - base[i][k]; d1[k] = tip[i + 1][k] - base[i + 1][k]; l0 += d0[k] * d0[k]; l1 += d1[k] * d1[k]; }
        l0 = sqrtf(l0); l1 = sqrtf(l1);
        if (l0 < 1e-4f || l1 < 1e-4f) continue;
        f32 dt[3] = { tip[i][0] - tip[i + 1][0], tip[i][1] - tip[i + 1][1], tip[i][2] - tip[i + 1][2] };
        if (dt[0] * dt[0] + dt[1] * dt[1] + dt[2] * dt[2] < 0.03f * 0.03f) continue;   /* (no smear when the blade is still) */
        {   f32 c = (d0[0] * d1[0] + d0[1] * d1[1] + d0[2] * d1[2]) / (l0 * l1); c = c > 1 ? 1 : c < -1 ? -1 : c;
            swept += acosf(c); if (swept > 1.6f && i > 0) break; }
        f32 pb[3], pt[3], pa = age[i];
        memcpy(pb, base[i], 12); memcpy(pt, tip[i], 12);
        for (int s = 1; s <= STEPS && w + 6 <= max; s++) {
            f32 f = (f32)s / STEPS, d[3], dl = 0, nb[3], nt[3];
            for (int k = 0; k < 3; k++) { d[k] = d0[k] / l0 * (1 - f) + d1[k] / l1 * f; dl += d[k] * d[k]; }
            dl = sqrtf(dl); if (dl < 1e-6f) continue;
            f32 len = l0 * (1 - f) + l1 * f, na = age[i] * (1 - f) + age[i + 1] * f;
            for (int k = 0; k < 3; k++) { nb[k] = base[i][k] * (1 - f) + base[i + 1][k] * f; nt[k] = nb[k] + d[k] / dl * len; }
            /* the beam shader's glow across the fan: uv = how old that edge is (0 = the blade now: the white core; 1 = gone), so
               the fan has a white leading edge, the blade's colour behind it, fading out toward the oldest edge */
            f32 u0 = 0.55f * pa / life, u1 = 0.55f * na / life;                 /* (0.55: the glow stays strong across the fan) */
            if (pa >= life) u0 = 1;
            if (na >= life) u1 = 1;
            const f32 *P[4] = { pb, pt, nt, nb }; f32 U[4] = { u0, u0, u1, u1 }, A[4] = { 0.6f, 1, 1, 0.6f };   /* a little dimmer toward the hilt */
            static const int T[6] = { 0, 1, 2, 0, 2, 3 };
            for (int q = 0; q < 6; q++) {
                ak_vtx *v = &out[w++]; int j = T[q];
                memcpy(v->pos, P[j], 12); v->uv[0] = U[j]; v->uv[1] = 0; v->nrm[0] = v->nrm[1] = v->nrm[3] = 0; v->nrm[2] = 127;
                v->col[0] = (u8)(cr * 127); v->col[1] = (u8)(cg * 127); v->col[2] = (u8)(cb * 127); v->col[3] = (u8)(A[j] * 255);
            }
            memcpy(pb, nb, 12); memcpy(pt, nt, 12); pa = na;
        }
    }
    return w;
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
        if (im->age > 0.15f || (b->pfx_impacts && im->pfx)) continue;   /* (impacts that play the game's effect draw no flash) */
        f32 p[3]; for (int k = 0; k < 3; k++) p[k] = im->pos[k] + im->normal[k] * 0.05f;
        n += ak_flash(out + n, p, 0.25f + im->age * 3.0f, eye, im->colour, (u8)(255 * (1.0f - im->age / 0.15f)));
    }
    return n;
}

/* the AI's burst and pause read the Weapon's keys themselves, with their own defaults (traced, 08A24648 / 08A24740 via 0896CDCC):
   WindupTime 0, OverheatPershot 5 (D_08AEF9E4; at least 1), RateOfFire 0.5 (D_08AEF9EC; at least 0.05), OverheatDecay 20
   (D_08AEF9F4 / 9FC).  The defaults only matter for a weapon with no such key anywhere up its parents: the Weapon "Base" gives
   OverheatPershot / Decay / WindupTime 0, so ALL_Blaster_Rifle (RateOfFire 0.3 from BlasterRifle) still streams 22.5 s bursts
   (the original's lookup 0881BA44 does walk the parents: a key not on the object is looked up again at its +8, the parent) */
static f32 ai_key(const ak_weapon_def *d, const char *k, f32 def) { return d->bp ? ak_bp_float(d->bp, k, def) : def; }
f32 ak_ai_burst(const ak_weapon_def *d)
{
    f32 ops = ai_key(d, "OverheatPershot", 5.0f), rof = ai_key(d, "RateOfFire", 0.5f), dec = ai_key(d, "OverheatDecay", 20.0f);
    if (ops < 1.0f) ops = 1.0f; if (rof < 0.05f) rof = 0.05f;
    return ai_key(d, "WindupTime", 0.0f) + 75.0f / (ops / rof - dec);
}
f32 ak_ai_pause(const ak_weapon_def *d) { f32 dec = ai_key(d, "OverheatDecay", 20.0f); return dec <= 0 ? 0.0f : 75.0f / dec; }
static void ai_fire_set(ak_ai_fire *c, const ak_weapon_def *d, int st, f32 r)
{
    c->state = st;
    c->t = st == 2 ? ak_ai_burst(d) : st == 1 ? ak_ai_pause(d) * (0.9f + 0.2f * r) : 0.0f;
}
bool ak_ai_fire_update(ak_ai_fire *c, const ak_weapon_def *d, bool want, bool ok, f32 r, f32 dt)
{
    c->began = false;
    if (!d) return false;
    if (c->state == 0) ai_fire_set(c, d, 1, r);
    c->t -= dt;
    if (c->state == 1) {
        if (c->t > 0 || !want || !ok) return false;
        ai_fire_set(c, d, 2, r); c->began = true; return true;
    }
    if (c->t <= 0 || !want || !ok) { ai_fire_set(c, d, 1, r); return false; }
    return true;
}
bool ak_ai_fire_ok(const f32 *fwd, const f32 *to, f32 range, f32 cone, bool flat)
{
    f32 d2 = to[0] * to[0] + to[1] * to[1] + to[2] * to[2];
    if (!(d2 < range * range)) return false;
    f32 a[3] = { fwd[0], flat ? 0 : fwd[1], fwd[2] }, b[3] = { to[0], flat ? 0 : to[1], to[2] };
    f32 fl = sqrtf(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]), dl = sqrtf(b[0] * b[0] + b[1] * b[1] + b[2] * b[2]);
    if (fl <= 0 || dl <= 0) return true;
    return (a[0] * b[0] + a[1] * b[1] + a[2] * b[2]) / (fl * dl) > cosf(cone);
}
