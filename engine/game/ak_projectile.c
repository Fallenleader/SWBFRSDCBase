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

static bool proj_def_depth(const ak_blueprints *bp, const char *name, ak_proj_def *d, int depth)
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
    d->prox = ak_bp_float(o, "WillDetonateAT", 0); d->prox_delay = ak_bp_float(o, "ProximityExplodeDelay", 0); d->det_height = ak_bp_float(o, "Detonation_Height", 0);
    d->remote = !d->on_impact && !d->on_timer && d->prox <= 0;
    d->nchildren = (u32)ak_bp_int(o, "NumberOfChildren", 0); d->child_speed = ak_bp_float(o, "ChildSpeed", 0);
    d->splay = ak_bp_float(o, "AmmountOfSplay", 0); d->dispersion = ak_bp_float(o, "DispersionDistance", 0);
    d->child = NULL;
    if (d->nchildren && depth < 2) {                                     /* the children's own def, kept for the level (a few kinds) */
        static ak_proj_def kids[8]; static u32 nkids;
        const char *cn = ak_bp_string(o, "ChildProjectiles", NULL);
        const ak_proj_def *found = NULL;
        for (u32 i = 0; i < nkids && i < 8 && cn; i++) if (kids[i].bp && !strcmp(kids[i].name, cn) && kids[i].bp == ak_bp_find(bp, "Projectile", cn)) found = &kids[i];
        if (!found && cn && proj_def_depth(bp, cn, &kids[nkids % 8], depth + 1)) found = &kids[nkids++ % 8];   /* (oldest reused across levels) */
        d->child = found;
    }
    const char *n = o->name;
    d->colour = strstr(n, "Bomb") ? 0xFFFFB060u : strstr(n, "Torpedo") ? 0xFFFFE0C0u : 0xFF40A0FFu;   /* (ABGR) */
    return true;
}

static bool proj_def(const ak_blueprints *bp, const char *name, ak_proj_def *d) { return proj_def_depth(bp, name, d, 0); }
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
    memset(p, 0, sizeof *p); p->prox_t = -1;
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
    p->d = d; memcpy(p->pos, pos, 12); memcpy(p->vel, vel, 12); p->alive = true; p->team = team; p->owner = owner; p->target = -1; p->dmg_scale = 1; p->t = age; p->drag = 0.063f; p->prox_t = -1;   /* (measured: a thrown thermal detonator keeps 99.37 % of its speed each 0.1 s) */
    f32 l = sqrtf(vel[0] * vel[0] + vel[1] * vel[1] + vel[2] * vel[2]) + 1e-6f; for (int k = 0; k < 3; k++) p->dir[k] = vel[k] / l;
    ps->fired++;
}

static void explode(ak_projs *ps, ak_proj *p, ak_target *tg, u32 nt, void (*boom)(void *, const f32 *, f32, const ak_proj_def *), void *ctx, const ak_collision *col)
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
        f32 dmg = (t->vehicle ? d->dmg_vehicle : d->dmg_infantry) * k * (t->local && p->owner != 0 ? p->dmg_scale * (t->elite > 0 ? t->elite : 1.0f) : 1.0f);   /* (an AI's: Modifier_Bot_Damage and the elite global on the local player only, 089E1FDC) */
        if (dmg <= 0) continue;
        t->health -= dmg; t->hits++; t->last_attacker = p->owner; t->last_quiet = ak_proj_quiet_kind(d->name); ps->hits++;
        if (t->health <= 0) { t->health = 0; t->alive = false; }
    }
    if (boom) boom(ctx, p->pos, d->radius, d);
    p->alive = false;
    if (d->child && d->nchildren) {
        /* cluster grenades (08A02464): child i starts DispersionDistance out along the angle i x 2 pi / n (about the vertical) and
           moves at ChildSpeed along that direction x AmmountOfSplay plus 10 down (game axes), normalised */
        f32 cpos[3]; memcpy(cpos, p->pos, 12); int team = p->team; s32 owner = p->owner; f32 sc = p->dmg_scale;
        for (u32 i = 0; i < d->nchildren; i++) {
            f32 a = (f32)i * 6.2831853f / (f32)d->nchildren, cx = cosf(a), cz = sinf(a);
            f32 v[3] = { cx * d->splay, -10.0f, -cz * d->splay }, vl = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
            f32 at[3] = { cpos[0] + cx * d->dispersion, cpos[1], cpos[2] - cz * d->dispersion };
            if (col) {                                                        /* [assumed] kept out of the ground: not through a wall, not under a slope */
                f32 hd[3] = { cx, 0, -cz }; ak_col_hit h;
                if (ak_col_raycast(col, cpos, hd, d->dispersion, AK_COL_NOT_BODIES, &h)) for (int k = 0; k < 3; k++) at[k] = cpos[k] + hd[k] * (h.t > 0.1f ? h.t - 0.1f : 0);
                f32 top[3] = { at[0], at[1] + 2.0f, at[2] }, dn[3] = { 0, -1, 0 };
                if (ak_col_raycast(col, top, dn, 2.0f, AK_COL_NOT_BODIES, &h)) at[1] = h.pos[1] + 0.05f;
            }
            for (int k = 0; k < 3; k++) v[k] = v[k] / vl * d->child_speed;
            ak_proj *c = NULL; for (u32 j = 0; j < AK_MAX_PROJ && !c; j++) if (!ps->p[j].alive) c = &ps->p[j];
            if (!c) break;
            memset(c, 0, sizeof *c); c->d = d->child; memcpy(c->pos, at, 12); memcpy(c->vel, v, 12); c->alive = true; c->team = team; c->owner = owner;
            c->target = -1; c->dmg_scale = sc; c->prox_t = -1;
            f32 l = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]) + 1e-6f; for (int k = 0; k < 3; k++) c->dir[k] = v[k] / l;
        }
    }
}

u32 ak_projs_detonate(ak_projs *ps, s32 owner, ak_target *tg, u32 nt, void (*boom)(void *, const f32 *, f32, const ak_proj_def *), void *ctx)
{
    u32 n = 0;
    for (u32 i = 0; i < AK_MAX_PROJ; i++) { ak_proj *p = &ps->p[i]; if (p->alive && p->d->remote && p->owner == owner) { explode(ps, p, tg, nt, boom, ctx, NULL); n++; } }
    return n;
}

u32 ak_projs_count(const ak_projs *ps, const ak_proj_def *d, s32 owner)
{
    u32 n = 0;
    for (u32 i = 0; i < AK_MAX_PROJ; i++) if (ps->p[i].alive && ps->p[i].d == d && ps->p[i].owner == owner) n++;
    return n;
}

void ak_projs_update(ak_projs *ps, const ak_collision *col, ak_target *tg, u32 nt, f32 gravity, f32 dt,
                     void (*boom)(void *, const f32 *, f32, const ak_proj_def *), void *ctx)
{
    for (u32 i = 0; i < AK_MAX_PROJ; i++) {
        ak_proj *p = &ps->p[i]; if (!p->alive) continue;
        const ak_proj_def *d = p->d;
        p->t += dt;
        if (p->t >= d->life) { if (d->on_timer) explode(ps, p, tg, nt, boom, ctx, col); else p->alive = false; continue; }
        if (d->drop_time > 0 && !p->dropped && p->t >= d->drop_time) { p->dropped = true; for (int k = 0; k < 3; k++) p->vel[k] += p->dir[k] * d->speed; }
        /* guidance (traced, the projectile update 08A005B0: with WillTrack (+168) and a living target (+140, health > 0) the velocity
           is set every frame straight at the target's point (its vfunc +44) plus the target's velocity (vfunc +40) times the frame
           time, at the projectile's current speed - no turn-rate limit).  [assumed: the point is the body's middle; the target's
           velocity is taken from its movement since the last frame] */
        if (p->target >= 0 && (u32)p->target < nt && tg[p->target].alive && tg[p->target].health > 0 && p->t >= d->drop_time) {
            const ak_target *t = &tg[p->target];
            f32 c[3] = { t->feet[0], t->feet[1] + t->height * 0.5f, t->feet[2] }, tv[3] = { 0, 0, 0 };
            if (p->thave && dt > 0) for (int k = 0; k < 3; k++) tv[k] = (c[k] - p->tlast[k]) / dt;
            memcpy(p->tlast, c, 12); p->thave = true;
            f32 sp = sqrtf(p->vel[0] * p->vel[0] + p->vel[1] * p->vel[1] + p->vel[2] * p->vel[2]);
            f32 want[3] = { c[0] + tv[0] * dt - p->pos[0], c[1] + tv[1] * dt - p->pos[1], c[2] + tv[2] * dt - p->pos[2] };
            f32 wl = sqrtf(want[0] * want[0] + want[1] * want[1] + want[2] * want[2]);
            if (wl > 0) for (int k = 0; k < 3; k++) p->vel[k] = want[k] / wl * sp;
        }
        if (d->prox > 0) {
            /* a mine (traced: each living unit's update 089E1890 walks the mines; one within WillDetonateAT of the unit's position
               calls 08A02228, which sets it off when the unit is not the one that laid it (+156) and the mine's age (+216) is past
               ProximityExplodeDelay (+240) - an arming time; either side, no team test) [assumed: vehicles the same, by position] */
            if (p->t > d->prox_delay)
                for (u32 k = 0; k < nt; k++) {
                    const ak_target *t = &tg[k]; if (!t->alive || t->health <= 0 || (s32)k == p->owner) continue;
                    f32 dx = t->feet[0] - p->pos[0], dy = t->feet[1] - p->pos[1], dz = t->feet[2] - p->pos[2];
                    if (dx * dx + dy * dy + dz * dz < d->prox * d->prox) { p->prox_t = 0; break; }
                }
            if (p->prox_t >= 0) { explode(ps, p, tg, nt, boom, ctx, col); continue; }
        }
        if (d->det_height > 0 && !p->stuck) {                                 /* (traced, 08A005B0: a ray 10 m down; the ground within
                                                                                  Detonation_Height sets it off - the cluster grenade bursts 0.25 m up) */
            f32 dn[3] = { 0, -1, 0 }; ak_col_hit gh;
            if (ak_col_raycast(col, p->pos, dn, 10.0f, AK_COL_NOT_BODIES, &gh) && gh.t <= d->det_height) { explode(ps, p, tg, nt, boom, ctx, col); continue; }
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
            if (hit && !d->on_impact) {                                       /* a timed one (grenades), a mine or a det pack: it stops where
                                                                                  it lands - measured: the thermal detonator neither bounces nor rolls */
                for (int k = 0; k < 3; k++) p->pos[k] += dir[k] * (hit_t > 0.02f ? hit_t - 0.02f : 0);
                p->stuck = true; continue;
            }
            if (hit) { for (int k = 0; k < 3; k++) p->pos[k] += dir[k] * hit_t; explode(ps, p, tg, nt, boom, ctx, col); continue; }
        }
        for (int k = 0; k < 3; k++) p->pos[k] += step[k];
    }
}
