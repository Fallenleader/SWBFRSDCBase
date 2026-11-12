/* Aurek - weapons and laser bolts, from the game's blueprints.
 *
 * A Weapon blueprint (MISC/COMMON.ASR) gives the model, RateOfFire (seconds between shots), AmmoPerClip (-1 = endless), MaxClips,
 * ReloadTime, ProjectilesPerShot (+ MultishotSpreadAngle), Distance, and Projectile: a LaserBolt (DamageToInfantry,
 * DamageToVehicle, ProjectileSpeed, range = how far a bolt flies, colour, length, thickness) or a Projectile ("Hit Scan" for
 * snipers: instant, out to the weapon's Distance).  "Faction Specific" weapons are replaced, for a soldier of faction f, by their
 * direct child whose Faction is f (BlasterRifle -> EMP_Blaster_Rifle for the Empire).
 * The weapon is held at the body's "gun" marker; shots leave from the weapon's "muz" marker toward the point the camera aims at. */
#ifndef AK_WEAPON_H
#define AK_WEAPON_H
#include "core/ak_core.h"
#include "assets/blueprint.h"
#include "assets/model.h"
#include "assets/asura.h"
#include "world/ak_collision.h"

typedef struct {
    const ak_bp_object *bp; const char *name;
    s32 model;                         /* -1 = not in this level */
    f32 rate_of_fire, reload_time, distance, spread_deg;
    s32 clip, clips; u32 per_shot;
    bool hitscan, headshots;
    f32 dmg_infantry, dmg_vehicle, speed, range, length, thickness;
    u32 colour;                        /* 0xAARRGGBB */
    f32 dscale_max, dscale_dist;       /* DistanceScalingMaxScale / MaxDist: bolts drawn bigger with distance (0 = off) */
} ak_weapon_def;

typedef struct { const ak_weapon_def *def; s32 ammo, spare; f32 cooldown, reload_t; int team; s32 owner; } ak_weapon;   /* team/owner: set after ak_weapon_give */

typedef struct { f32 pos[3], dir[3], travelled, range, speed, length, thick, damage, damage_vehicle; u32 colour; f32 dscale_max, dscale_dist; bool headshots; int team; s32 owner; } ak_bolt;
typedef struct { f32 pos[3], normal[3]; f32 age; u32 colour; } ak_impact;
#define AK_MAX_BOLTS 512
#define AK_MAX_IMPACTS 64
typedef struct { ak_bolt b[AK_MAX_BOLTS]; u32 n; ak_impact imp[AK_MAX_IMPACTS]; u32 nimp, next_imp; u32 fired, hits; } ak_bolts;

/* Something a shot can hurt: a standing body (vertical capsule from its feet) with a head sphere.  Soldiers have 100 health (the
 * game's default for a Humanoid blueprint without "Health": func_089826E8 reads it with 100.0 from 0x08AEE53C; heroes say 600) and
 * take "Headshot multiplier" (4) times the damage in the head when the weapon has AllowHeadshots. */
typedef struct {
    f32 feet[3], height, radius;
    f32 head[3], head_radius;
    f32 health, headshot_mult;
    bool alive, vehicle;
    int team;                          /* shots of the same team pass through (friendly fire off, the game's default) */
    s32 last_attacker;                 /* the owner of the last shot that hurt it (-1 none) */
    u32 hits, headshots;
    f32 last_hit_dir[3];
} ak_target;

/* the weapon a soldier of `faction` gets for `name` (the faction rule above); false = no such weapon */
bool ak_weapon_def_load(const ak_blueprints *bp, const ak_model_set *models, const char *name, int faction, ak_weapon_def *out);
void ak_weapon_give(ak_weapon *w, const ak_weapon_def *d);
/* a bare LaserBolt as a weapon (vehicle hardpoints): no model, endless, fired by the caller's timing */
bool ak_weapon_def_bolt(const ak_blueprints *bp, const char *bolt, ak_weapon_def *out);
/* trigger held: fires when ready (from `muzzle` toward `target`); returns shots fired */
u32  ak_weapon_fire(ak_weapon *w, ak_bolts *b, const ak_collision *col, ak_target *targets, u32 ntargets, const f32 *muzzle, const f32 *target, u32 *seed);
void ak_weapon_update(ak_weapon *w, f32 dt, bool reload);
void ak_bolts_update(ak_bolts *b, const ak_collision *col, ak_target *targets, u32 ntargets, f32 dt);
/* Beams, the game's way with DICE's shading: a strip turned about its own axis to face the camera (side = axis x the direction to
 * the camera), pointed at both ends (6 points, 4 triangles), drawn with AK_PIPE_BEAM, whose pixel shader works out a white core and
 * a coloured falloff from the UV (distance to the core line), so a flat strip reads as a round, glowing rod.  Looking straight down
 * its axis (within about a degree, the game's test: |cos| > 0.9998) it becomes a square facing the camera.  Returns the vertices
 * written: 12, 6, or 0. */
#define AK_BEAM_VERTS 12
u32 ak_beam(ak_vtx *out, const f32 *a, const f32 *c, f32 halfw, const f32 *eye, u32 rgba, u8 alpha_a, u8 alpha_c);
/* a round flash facing the camera (6 vertices) */
u32 ak_flash(ak_vtx *out, const f32 *pos, f32 halfw, const f32 *eye, u32 rgba, u8 alpha);
/* the bolts (the game's half-width: thickness x 0.5; far bolts scaled by the bolt's DistanceScaling) and the impact flashes,
 * all for AK_PIPE_BEAM; returns vertices written */
u32  ak_bolts_vertices(const ak_bolts *b, const f32 *eye, ak_vtx *out, u32 max);
#endif
