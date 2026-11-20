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
    const char *fire_snd;              /* the weapon's "Fire Sound" event (played at the muzzle) */
    const char *hud_icon;              /* "HUDIcon": its picture on the HUD's weapon sheets ("EMP_Blaster_Rifle.tga") */
    f32 heat_shot, heat_decay, heat_recover, burst_time;   /* OverheatPershot / OverheatDecay / OverheatRecoveryTime, BurstTime */
    f32 ai_acc[2];                     /* AIWeapon_Accuracy_Normal / _Elite (degrees; 08A24438) */
    const char *muzzle_pfx;            /* the weapon's "PFXMuzzleFlash" effect (played at the muzzle, along the shot) */
    const char *impact_pfx, *shield_pfx;   /* the bolt's "impact pfx" (on the level) and "shield impact pfx" (on vehicles) */
    f32 impact_pfx_dist;               /* the weapon's "impact pfx max dist": no impact effect farther from the camera */
} ak_weapon_def;

/* A weapon's heat (the game's, weapon loader 08A16FD8: OverheatPershot / Decay / RecoveryTime at w+0x7C / +0x80 / +0x84, the heat
 * at w+0x78).  A shot (08A1C950) adds OverheatPershot - x ProjectilesPerShot (at least 1) when BurstTime is 0 - and marks the weapon
 * as fired (w+0x16C bit 0x4000); past 100 (0x08AEF85C) it overheats (state 6, 08A1A0D0): the heat is held at 100 and the weapon
 * cannot fire for OverheatRecoveryTime, after which the fired mark is clear.  Every update (08A186EC) outside that state the heat
 * falls by OverheatDecay a second once fired, else 200 a second (0x08AEF860), not below 0.  Only weapons in a player's hands heat
 * (the shot adds heat only with w+0x16C bit 0x40, set by 08A19C8C when the owner is player-controlled). */
typedef struct { f32 heat, recover_t; bool fired; } ak_heat;
static inline bool ak_heat_ready(const ak_heat *h) { return h->recover_t <= 0; }
void ak_heat_shot(ak_heat *h, const ak_weapon_def *d);
void ak_heat_update(ak_heat *h, const ak_weapon_def *d, f32 dt);

typedef struct { const ak_weapon_def *def; s32 ammo, spare; f32 cooldown, reload_t; int team; s32 owner; ak_heat heat; bool heats; } ak_weapon;   /* team/owner: set after ak_weapon_give; heats: a player's (ak_heat) */

typedef struct { f32 pos[3], dir[3], travelled, range, speed, length, thick, damage, damage_vehicle; u32 colour; f32 dscale_max, dscale_dist; bool headshots; int team; s32 owner; const char *impact_pfx, *shield_pfx; } ak_bolt;
typedef struct { f32 pos[3], normal[3]; f32 age; u32 colour; u16 material; bool body; const char *pfx; } ak_impact;   /* pfx: the effect it plays (NULL none) */   /* material: the surface's (0xFFFF none) */
#define AK_MAX_BOLTS 512
#define AK_MAX_IMPACTS 64
typedef struct { f32 pos[3], dir[3]; const char *pfx; } ak_shot_fx;   /* a shot's muzzle effect (the weapon's PFXMuzzleFlash) */
#define AK_MAX_SHOT_FX 32
typedef struct { ak_bolt b[AK_MAX_BOLTS]; u32 n; ak_impact imp[AK_MAX_IMPACTS]; u32 nimp, next_imp; u32 fired, hits, impacts;
                 ak_shot_fx shot[AK_MAX_SHOT_FX]; u32 shots; bool pfx_impacts; } ak_bolts;   /* impacts / shots: ever made (rings of the latest); pfx_impacts: impacts with an effect are drawn by it */

/* Something a shot can hurt: a standing body (vertical capsule from its feet) with a head sphere.  Soldiers have 100 health (the
 * game's default for a Humanoid blueprint without "Health": func_089826E8 reads it with 100.0 from 0x08AEE53C; heroes say 600) and
 * take "Headshot multiplier" (4) times the damage in the head when the weapon has AllowHeadshots. */
typedef struct {
    f32 feet[3], height, radius;
    f32 head[3], head_radius;
    f32 health, headshot_mult, max_health;   /* max_health: the HUD's target panel */
    bool alive, vehicle;
    int team;                          /* shots of the same team pass through (friendly fire off, the game's default) */
    s32 last_attacker;                 /* the owner of the last shot that hurt it (-1 none) */
    bool last_quiet;                   /* that hurt came from a kind the soldiers' Sniper / Friendly calls ignore (func 089E22BC's list) */
    u32 hits, headshots;
    f32 last_hit_dir[3];
} ak_target;

/* the weapon a soldier of `faction` gets for `name` (the faction rule above); false = no such weapon */
bool ak_weapon_def_load(const ak_blueprints *bp, const ak_model_set *models, const char *name, int faction, ak_weapon_def *out);
void ak_weapon_give(ak_weapon *w, const ak_weapon_def *d);
/* the Overheat keys (and BurstTime) of Weapon `w` into `d` */
void ak_weapon_def_heat(const ak_bp_object *w, ak_weapon_def *d);
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
/* A lightsaber's motion fan (DICE's "new motion fan", from the owner's reference GIFs): the surface the blade swept over its last
 * few positions (samples newest first: blade base / tip, age in seconds).  Between samples the blade's direction is interpolated
 * (normalised lerp, 6 steps; at most ~90 degrees of arc), so the fan's outer edge is an arc that follows the swing rather than a straight chord (the "old motion
 * fan").  Drawn with AK_PIPE_BEAM, the uv being each edge's age / life: a white leading edge, the blade's colour behind it, fading out
 * by `life` seconds; a little dimmer toward the hilt.  Returns vertices written (0 when the blade barely moved). */
u32 ak_saber_fan(ak_vtx *out, u32 max, const f32 (*base)[3], const f32 (*tip)[3], const f32 *age, u32 n, f32 life, u32 rgba);
/* the bolts (the game's half-width: thickness x 0.5; far bolts scaled by the bolt's DistanceScaling) and the impact flashes,
 * all for AK_PIPE_BEAM; returns vertices written */
u32  ak_bolts_vertices(const ak_bolts *b, const f32 *eye, ak_vtx *out, u32 max);
#endif
