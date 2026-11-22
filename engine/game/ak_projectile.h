/* Aurek - projectiles: the "Projectile" blueprints fired by secondary weapons (HardpointW2: proton torpedoes, homing missiles,
 * proton bombs, concussion missiles).  The Weapon names the Projectile and carries the clip (AmmoPerClip, ReloadTime, MaxClips -1 =
 * endless), RateOfFire, LockonTime and WillTrack; the vehicle carries the lock-on (LockAngle, LockOnTime, LoseLockOnAngle,
 * LoseLockOnRange - Flyer "Base": 15 degrees, 2 s, 45 degrees, 1500 m; fighters 3.5 s, bombers 0.5 s, transports 5 s).
 * Projectile fields: ProjectileSpeed, Timer (life), ExplodesOnImpact / ExplodesOnTimer, ExplosionRadius, DamageToVehicle /
 * DamageToInfantry, WillTrack, FeelsGravity, AddFirerVelocity, ToLaunchDirection, Drop_Time (proton bombs: a drop before the motor).
 * Not traced (this engine's): how fast a tracking projectile turns (here 100 degrees a second) [PARITY(2.4)].  The blast fall-off is
 * measured: 1 - (distance / radius)^2 (explode, ak_projectile.c). */
#ifndef AK_PROJECTILE_H
#define AK_PROJECTILE_H
#include "core/ak_core.h"
#include "assets/blueprint.h"
#include "world/ak_collision.h"
#include "game/ak_weapon.h"

typedef struct ak_proj_def_s {
    const ak_bp_object *bp; const char *name;
    f32 speed, life, radius, dmg_vehicle, dmg_infantry, drop_time;
    bool track, gravity, on_impact, on_timer, add_vel;
    u32 colour;                         /* the streak's colour (by kind: torpedo blue-white, missile orange, bomb blue) */
    const char *explosion_pfx, *trail_pfx;   /* "PFXExplosion" (where it blows up) and "PFXEffect" (its trail) */
    f32 prox, prox_delay;               /* "WillDetonateAT" (m) / "ProximityExplodeDelay" (s): a mine (def +0x94 / +0xF0) */
    f32 det_height;                     /* "Detonation_Height" (m, def +0xB0): goes off that close above the ground (the cluster grenade 0.25) */
    bool remote;                        /* neither timed nor on impact, not a mine: set off by its owner (the det pack) [assumed] */
    const struct ak_proj_def_s *child;  /* "ChildProjectiles" (def +0xB4): what it bursts into (cluster grenades) */
    u32 nchildren; f32 child_speed, splay, dispersion;   /* "NumberOfChildren" +0xC4, "ChildSpeed" +0xB8, "AmmountOfSplay" +0xBC, "DispersionDistance" +0xC0 */
} ak_proj_def;

/* a secondary weapon (HardpointW2), resolved through its Weapon blueprint */
typedef struct {
    bool armed; const char *weapon; ak_proj_def proj;
    f32 rate, reload, lock_time; s32 clip;   /* clip < 0: never runs dry */
    const char *hud_icon;                    /* the Weapon's "HUDIcon" (its picture on the HUD) */
    bool tracks; f32 bot_dmg;                /* tracks: Weapon or Projectile WillTrack; bot_dmg: the Weapon's Modifier_Bot_Damage */
    bool bomb_lock;                          /* its projectile is "Proton_Bomb" (hash 0xF968C3BB): it locks on though it does not track (089CC77C) */
} ak_secondary;

typedef struct {
    const ak_proj_def *d; f32 pos[3], vel[3], dir[3], t, dmg_scale; int team; s32 owner, target; bool alive, dropped, stuck; f32 drag;
    f32 prox_t;                         /* a mine: time since an enemy came in range (-1 none yet) */
    f32 tlast[3]; bool thave;           /* a guided one: its target's point last frame (for the target's velocity) */
} ak_proj;

#define AK_MAX_PROJ 64
typedef struct { ak_proj p[AK_MAX_PROJ]; u32 fired, hits; } ak_projs;

/* a Projectile blueprint by name */
bool ak_proj_quiet_kind(const char *name);   /* see ak_projectile.c */
bool ak_proj_def_load(const ak_blueprints *bp, const char *name, ak_proj_def *out);
bool ak_secondary_load(const ak_blueprints *bp, const char *hardpoint, ak_secondary *out);
/* launch from `pos` along `dir` (unit), adding the firer's velocity where the projectile says so; target -1 = unguided */
void ak_proj_launch(ak_projs *ps, const ak_proj_def *d, const f32 *pos, const f32 *dir, const f32 *firer_vel,
                    int team, s32 owner, s32 target, f32 dmg_scale);
/* set off every remote one (det packs) of `owner`; the number set off */
u32  ak_projs_detonate(ak_projs *ps, s32 owner, ak_target *tg, u32 nt, void (*boom)(void *ctx, const f32 *pos, f32 radius, const struct ak_proj_def_s *d), void *ctx);
/* how many of `d` `owner` has out (placed mines, det packs) */
u32  ak_projs_count(const ak_projs *ps, const ak_proj_def *d, s32 owner);
/* a thrown one (grenades): its own velocity, `age` seconds of its timer already gone */
void ak_proj_throw(ak_projs *ps, const ak_proj_def *d, const f32 *pos, const f32 *vel, int team, s32 owner, f32 age);
/* move, steer, collide and explode them; an explosion hurts every target within the radius (not the firer's team); `boom` gets each
 * explosion's position (effects) */
void ak_projs_update(ak_projs *ps, const ak_collision *col, ak_target *targets, u32 ntargets, f32 gravity, f32 dt,
                     void (*boom)(void *ctx, const f32 *pos, f32 radius, const ak_proj_def *d), void *ctx);
#endif
