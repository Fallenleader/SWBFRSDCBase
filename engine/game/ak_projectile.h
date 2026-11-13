/* Aurek - projectiles: the "Projectile" blueprints fired by secondary weapons (HardpointW2: proton torpedoes, homing missiles,
 * proton bombs, concussion missiles).  The Weapon names the Projectile and carries the clip (AmmoPerClip, ReloadTime, MaxClips -1 =
 * endless), RateOfFire, LockonTime and WillTrack; the vehicle carries the lock-on (LockAngle, LockOnTime, LoseLockOnAngle,
 * LoseLockOnRange - Flyer "Base": 15 degrees, 2 s, 45 degrees, 1500 m; fighters 3.5 s, bombers 0.5 s, transports 5 s).
 * Projectile fields: ProjectileSpeed, Timer (life), ExplodesOnImpact / ExplodesOnTimer, ExplosionRadius, DamageToVehicle /
 * DamageToInfantry, WillTrack, FeelsGravity, AddFirerVelocity, ToLaunchDirection, Drop_Time (proton bombs: a drop before the motor).
 * Not traced (this engine's): how fast a tracking projectile turns (here 100 degrees a second), the blast fall-off (here full damage
 * in the inner half of the radius, falling to a quarter at its edge). */
#ifndef AK_PROJECTILE_H
#define AK_PROJECTILE_H
#include "core/ak_core.h"
#include "assets/blueprint.h"
#include "world/ak_collision.h"
#include "game/ak_weapon.h"

typedef struct {
    const ak_bp_object *bp; const char *name;
    f32 speed, life, radius, dmg_vehicle, dmg_infantry, drop_time;
    bool track, gravity, on_impact, on_timer, add_vel;
    u32 colour;                         /* the streak's colour (by kind: torpedo blue-white, missile orange, bomb blue) */
} ak_proj_def;

/* a secondary weapon (HardpointW2), resolved through its Weapon blueprint */
typedef struct {
    bool armed; const char *weapon; ak_proj_def proj;
    f32 rate, reload, lock_time; s32 clip;   /* clip < 0: never runs dry */
    bool tracks; f32 bot_dmg;                /* tracks: Weapon or Projectile WillTrack; bot_dmg: the Weapon's Modifier_Bot_Damage */
} ak_secondary;

typedef struct {
    const ak_proj_def *d; f32 pos[3], vel[3], dir[3], t, dmg_scale; int team; s32 owner, target; bool alive, dropped;
} ak_proj;

#define AK_MAX_PROJ 64
typedef struct { ak_proj p[AK_MAX_PROJ]; u32 fired, hits; } ak_projs;

bool ak_secondary_load(const ak_blueprints *bp, const char *hardpoint, ak_secondary *out);
/* launch from `pos` along `dir` (unit), adding the firer's velocity where the projectile says so; target -1 = unguided */
void ak_proj_launch(ak_projs *ps, const ak_proj_def *d, const f32 *pos, const f32 *dir, const f32 *firer_vel,
                    int team, s32 owner, s32 target, f32 dmg_scale);
/* move, steer, collide and explode them; an explosion hurts every target within the radius (not the firer's team); `boom` gets each
 * explosion's position (effects) */
void ak_projs_update(ak_projs *ps, const ak_collision *col, ak_target *targets, u32 ntargets, f32 gravity, f32 dt,
                     void (*boom)(void *ctx, const f32 *pos, f32 radius), void *ctx);
#endif
