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
} ak_weapon_def;

typedef struct { const ak_weapon_def *def; s32 ammo, spare; f32 cooldown, reload_t; int team; s32 owner; } ak_weapon;   /* team/owner: set after ak_weapon_give */

typedef struct { f32 pos[3], dir[3], travelled, range, speed, length, thick, damage, damage_vehicle; u32 colour; bool headshots; int team; s32 owner; } ak_bolt;
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
/* trigger held: fires when ready (from `muzzle` toward `target`); returns shots fired */
u32  ak_weapon_fire(ak_weapon *w, ak_bolts *b, const ak_collision *col, ak_target *targets, u32 ntargets, const f32 *muzzle, const f32 *target, u32 *seed);
void ak_weapon_update(ak_weapon *w, f32 dt, bool reload);
void ak_bolts_update(ak_bolts *b, const ak_collision *col, ak_target *targets, u32 ntargets, f32 dt);
/* a "star" sprite: six flat fins radiating from the axis a..c every 60 degrees, solid along the axis and fading to nothing at their
 * outer edge, which is set in at both ends so the tips pinch to the axis.  Drawn from both sides, it reads as a solid glowing shape
 * from any angle without turning to face the camera (AK_STAR_VERTS vertices). */
#define AK_STAR_FINS 6
#define AK_STAR_VERTS (AK_STAR_FINS * 6)
void ak_sprite_star(ak_vtx *out, const f32 *a, const f32 *c, f32 halfw, u32 rgba, u8 alpha_a, u8 alpha_c);
/* the bolts (along their flight) and the impact flashes (standing) as star sprites; returns vertices written.  Layer 0: the bolts'
 * coloured glow (alpha-blended, so it keeps its colour over snow and sand); layer 1: their white-hot cores and the impact flashes
 * (additive). */
u32  ak_bolts_vertices(const ak_bolts *b, const f32 *eye, int layer, ak_vtx *out, u32 max);
#endif
