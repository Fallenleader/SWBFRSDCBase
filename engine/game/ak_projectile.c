/* Aurek - projectiles (see ak_projectile.h) */
#include <math.h>
#include <string.h>
#include "game/ak_projectile.h"
#include "core/ak_settings.h"

/* the damage kinds a soldier's Sniper and Friendly calls ignore (func 089E22BC compares the damage's kind hash with these):
 * guided and remote missiles, launched grenades, det packs, mines, proton bombs and torpedoes, self-destructing rockets, the
 * thrown saber, the force powers and a few others that are not projectiles */
bool ak_proj_quiet_kind(const char *name)
{
    static const char *k[] = { "Guided_Missile", "Launched_Grenade_OnImpact", "Det_Pack", "Proton_Bomb", "Proximity_Mine",
                               "Remote_Rocket", "SelfDestruct_Rocket", "Proton Torpedo", "Fusion Cutter", "Lightsaber_Thrown", "Attachment" };
    if (!name) return false;
    for (u32 i = 0; i < sizeof k / sizeof k[0]; i++) { const char *a = k[i], *b = name; while (*a && *b && (*a | 32) == (*b | 32)) { a++; b++; } if (!*a && !*b) return true; }
    return false;
}

static bool proj_def(const ak_blueprints *bp, const char *name, ak_proj_def *d)
{
    memset(d, 0, sizeof *d);
    const ak_bp_object *o = ak_bp_find(bp, "Projectile", name);
    if (!o) return false;
    d->bp = o; d->name = o->name;
    d->speed = ak_bp_float(o, "ProjectileSpeed", 10); d->life = ak_bp_float(o, "Timer", 15);
    d->radius = ak_bp_float(o, "ExplosionRadius", 5);
    d->dmg_vehicle = ak_bp_float(o, "DamageToVehicle", 40); d->dmg_infantry = ak_bp_float(o, "DamageToInfantry", 60);
    d->drop_time = ak_bp_float(o, "Drop_Time", 0);
    d->track = ak_bp_int(o, "WillTrack", 0) != 0; d->gravity = ak_bp_int(o, "FeelsGravity", 1) != 0;
    d->on_impact = ak_bp_int(o, "ExplodesOnImpact", 0) != 0; d->on_timer = ak_bp_int(o, "ExplodesOnTimer", 0) != 0;
    d->add_vel = ak_bp_int(o, "AddFirerVelocity", 0) != 0;
    d->explosion_pfx = ak_bp_string(o, "PFXExplosion", NULL); if (d->explosion_pfx && !*d->explosion_pfx) d->explosion_pfx = NULL;
    d->trail_pfx = ak_bp_string(o, "PFXEffect", NULL); if (d->trail_pfx && !*d->trail_pfx) d->trail_pfx = NULL;
    const char *n = o->name;
    d->colour = strstr(n, "Bomb") ? 0xFFFFB060u : strstr(n, "Torpedo") ? 0xFFFFE0C0u : 0xFF40A0FFu;   /* (ABGR) */
    return true;
}

bool ak_proj_def_load(const ak_blueprints *bp, const char *name, ak_proj_def *out) { return proj_def(bp, name, out); }

bool ak_secondary_load(const ak_blueprints *bp, const char *hp, ak_secondary *s)
{
    memset(s, 0, sizeof *s);
    if (!hp || !*hp) return false;
    const ak_bp_object *w = ak_bp_find(bp, "Weapon", hp);
    if (!w) return false;
    s->weapon = w->name; s->hud_icon = ak_bp_string(w, "HUDIcon", NULL);
    if (!proj_def(bp, ak_bp_string(w, "Projectile", ""), &s->proj)) return false;   /* (beams, mortars, harpoons: not yet) */   /* PARITY(2.3) */
    s->rate = ak_bp_float(w, "RateOfFire", 0.5f); s->reload = ak_bp_float(w, "ReloadTime", 5);
    s->clip = ak_bp_int(w, "AmmoPerClip", 1); if (s->clip <= 0) s->clip = 1;
    s->lock_time = ak_bp_float(w, "LockonTime", 0);
    s->tracks = s->proj.track || ak_bp_int(w, "WillTrack", 0) != 0;
    s->bot_dmg = ak_bp_float(w, "Modifier_Bot_Damage", 1);
    s->armed = true;
    return true;
}

void ak_proj_launch(ak_projs *ps, const ak_proj_def *d, const f32 *pos, const f32 *dir, const f32 *fv, int team, s32 owner, s32 target, f32 dmg_scale)
{
    ak_proj *p = NULL;
    for (u32 i = 0; i < AK_MAX_PROJ && !p; i++) if (!ps->p[i].alive) p = &ps->p[i];
    if (!p) return;
    memset(p, 0, sizeof *p);
    p->d = d; memcpy(p->pos, pos, 12); p->alive = true; p->team = team; p->owner = owner; p->target = target; p->dmg_scale = dmg_scale;
    memcpy(p->dir, dir, 12);
    for (int k = 0; k < 3; k++) p->vel[k] = (d->drop_time > 0 ? 0 : dir[k] * d->speed) + (d->add_vel && fv ? fv[k] : 0);
    if (d->drop_time > 0) p->vel[1] -= 5.0f;                                   /* a bomb drops clear first (Drop_Time), then its motor fires */
    ps->fired++;
}

void ak_proj_throw(ak_projs *ps, const ak_proj_def *d, const f32 *pos, const f32 *vel, int team, s32 owner, f32 age)
{
    ak_proj *p = NULL;
    for (u32 i = 0; i < AK_MAX_PROJ && !p; i++) if (!ps->p[i].alive) p = &ps->p[i];
    if (!p) return;
    memset(p, 0, sizeof *p);
    p->d = d; memcpy(p->pos, pos, 12); memcpy(p->vel, vel, 12); p->alive = true; p->team = team; p->owner = owner; p->target = -1; p->dmg_scale = 1; p->t = age; p->drag = 0.063f;   /* (measured: a thrown thermal detonator keeps 99.37 % of its speed each 0.1 s) */
    f32 l = sqrtf(vel[0] * vel[0] + vel[1] * vel[1] + vel[2] * vel[2]) + 1e-6f; for (int k = 0; k < 3; k++) p->dir[k] = vel[k] / l;
    ps->fired++;
}

static void explode(ak_projs *ps, ak_proj *p, ak_target *tg, u32 nt, void (*boom)(void *, const f32 *, f32, const ak_proj_def *), void *ctx)
{
    const ak_proj_def *d = p->d; f32 r = d->radius > 0.5f ? d->radius : 0.5f;
    {   static int dbg = -1; if (dbg < 0) dbg = ak_setting_int("AK_DEBUG_PROJ", 0);
        if (dbg) AK_INFO("proj", "%s explodes at %.2f %.2f %.2f after %.2f s", d->name, p->pos[0], p->pos[1], p->pos[2], p->t); }
    for (u32 i = 0; i < nt; i++) {
        ak_target *t = &tg[i];
        if (!t->alive || (t->team == p->team && (s32)i != p->owner)) continue;   /* (the thrower's own blast hurts it: measured) */
        /* the fall-off (measured with the thermal detonator, radius 8, on the player at 1 / 3 / 5 / 7 m from where it lay: 100, 86.5,
           62.0, 26.3): the damage times 1 - (distance / radius)^2, the distance to the soldier's feet.  Vehicles: the same rule,
           not measured [PARITY(2.5b)] */
        f32 c[3] = { t->feet[0], t->feet[1], t->feet[2] };
        if (t->vehicle) { c[1] += t->height * 0.5f; }
        f32 dx = c[0] - p->pos[0], dy = c[1] - p->pos[1], dz = c[2] - p->pos[2], dist = sqrtf(dx * dx + dy * dy + dz * dz) - (t->vehicle ? t->radius : 0);
        if (dist < 0) dist = 0;
        if (dist > r) continue;
        f32 k = 1.0f - (dist / r) * (dist / r);
        f32 dmg = (t->vehicle ? d->dmg_vehicle : d->dmg_infantry) * k * p->dmg_scale;
        if (dmg <= 0) continue;
        t->health -= dmg; t->hits++; t->last_attacker = p->owner; t->last_quiet = ak_proj_quiet_kind(d->name); ps->hits++;
        if (t->health <= 0) { t->health = 0; t->alive = false; }
    }
    if (boom) boom(ctx, p->pos, d->radius, d);
    p->alive = false;
}

void ak_projs_update(ak_projs *ps, const ak_collision *col, ak_target *tg, u32 nt, f32 gravity, f32 dt,
                     void (*boom)(void *, const f32 *, f32, const ak_proj_def *), void *ctx)
{
    for (u32 i = 0; i < AK_MAX_PROJ; i++) {
        ak_proj *p = &ps->p[i]; if (!p->alive) continue;
        const ak_proj_def *d = p->d;
        p->t += dt;
        if (p->t >= d->life) { if (d->on_timer) explode(ps, p, tg, nt, boom, ctx); else p->alive = false; continue; }
        if (d->drop_time > 0 && !p->dropped && p->t >= d->drop_time) { p->dropped = true; for (int k = 0; k < 3; k++) p->vel[k] += p->dir[k] * d->speed; }
        /* guidance: turn the velocity toward the target (after any drop) */
        if (p->target >= 0 && (u32)p->target < nt && tg[p->target].alive && p->t >= d->drop_time) {
            const ak_target *t = &tg[p->target];
            f32 c[3] = { t->feet[0], t->feet[1] + t->height * 0.5f, t->feet[2] };
            f32 sp = sqrtf(p->vel[0] * p->vel[0] + p->vel[1] * p->vel[1] + p->vel[2] * p->vel[2]); if (sp < 1) sp = 1;
            f32 want[3] = { c[0] - p->pos[0], c[1] - p->pos[1], c[2] - p->pos[2] }, wl = sqrtf(want[0] * want[0] + want[1] * want[1] + want[2] * want[2]);
            if (wl > 0.01f) {
                f32 cur[3] = { p->vel[0] / sp, p->vel[1] / sp, p->vel[2] / sp }, turn = 1.75f * dt;   /* (100 degrees a second: not traced) */   /* PARITY(2.4) */
                for (int k = 0; k < 3; k++) want[k] /= wl;
                f32 dot = cur[0] * want[0] + cur[1] * want[1] + cur[2] * want[2], ang = acosf(dot > 1 ? 1 : dot < -1 ? -1 : dot);
                f32 s = ang > turn ? turn / ang : 1.0f;
                for (int k = 0; k < 3; k++) cur[k] += (want[k] - cur[k]) * s;
                f32 cl = sqrtf(cur[0] * cur[0] + cur[1] * cur[1] + cur[2] * cur[2]);
                for (int k = 0; k < 3; k++) p->vel[k] = cur[k] / cl * sp;
            }
        }
        if (p->stuck) continue;                                               /* (resting where it landed, waiting for its timer) */
        if (d->gravity) p->vel[1] -= gravity * dt;
        if (p->drag > 0) { f32 f = 1.0f - p->drag * dt; for (int k = 0; k < 3; k++) p->vel[k] *= f; }
        f32 step[3] = { p->vel[0] * dt, p->vel[1] * dt, p->vel[2] * dt }, len = sqrtf(step[0] * step[0] + step[1] * step[1] + step[2] * step[2]);
        /* hits: the level, then any enemy body along the step */
        bool hit = false; f32 hit_t = len;
        if (len > 1e-4f) {
            f32 dir[3] = { step[0] / len, step[1] / len, step[2] / len }; ak_col_hit h;
            if (ak_col_raycast(col, p->pos, dir, len, AK_COL_NOT_BODIES, &h)) { hit = true; hit_t = h.t; }
            for (u32 k = 0; k < nt; k++) {
                const ak_target *t = &tg[k];
                if (!t->alive || t->team == p->team || (s32)k == p->owner) continue;
                f32 c[3] = { t->feet[0], t->feet[1] + t->height * 0.5f, t->feet[2] }, oc[3] = { c[0] - p->pos[0], c[1] - p->pos[1], c[2] - p->pos[2] };
                f32 along = oc[0] * dir[0] + oc[1] * dir[1] + oc[2] * dir[2]; if (along < 0 || along > hit_t + t->radius) continue;
                f32 px = oc[0] - dir[0] * along, py = oc[1] - dir[1] * along, pz = oc[2] - dir[2] * along, rr = t->radius + t->height * 0.5f;
                if (px * px + py * py + pz * pz < rr * rr) { hit = true; hit_t = along < hit_t ? along : hit_t; }
            }
            if (hit && !d->on_impact && d->on_timer) {                       /* a timed one (grenades): it stops where it lands - measured:
                                                                                  the thermal detonator neither bounces nor rolls */
                for (int k = 0; k < 3; k++) p->pos[k] += dir[k] * (hit_t > 0.02f ? hit_t - 0.02f : 0);
                p->stuck = true; continue;
            }
            if (hit) { for (int k = 0; k < 3; k++) p->pos[k] += dir[k] * hit_t; explode(ps, p, tg, nt, boom, ctx); continue; }
        }
        for (int k = 0; k < 3; k++) p->pos[k] += step[k];
    }
}
