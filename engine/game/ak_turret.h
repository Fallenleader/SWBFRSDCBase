/* Aurek - turrets: the "Turret" blueprints placed as level entities (ENTI type 30, class 0x801E: func 089BC0AC builds them, a
 * vehicle of the game's vehicle classes).  Space Hoth's capital ships carry 14 (Round_turret 600, box_turret 150, Auto_turret_gun 200);
 * Hoth has 10 (Hoth_Turret_Defence, Dish_Turret).
 *
 * Record (game axes): id, 0x801E, 5, 2, 1, 8, 16, 0, 0 (a further word pair on some), position, rotation quaternion, health, 0, the
 * base model's name hash, ..., near the end the command post it belongs to (its id, 999 = none) and a range (100 m on the ground
 * levels, 500 m on the space levels: the turret's reach).
 * Parts (the blueprint): the base model ("tur" marker) -> Pivot (turns about the up axis, MaxTurnYaw degrees a second, MinPivotY /
 * MaxPivotY its yaw limits, both 0 = all round; "bar" marker) -> Barrel (tilts, MinPivotX / MaxPivotX degrees) -> its muzzles
 * (HardpointW1Marker1/2 at HardpointW1Time1/2).  HardpointW1 a Weapon (its Projectile the LaserBolt) or a LaserBolt; Health;
 * DestroyedTurret (a model name or asset path) stands after it is destroyed; Boardable (0: an automatic turret).
 * Most models face +z; some (Hoth_Turret_Defence: its muzzle at z -2.6) face -z: `face` is the sign, from the first muzzle. */
#ifndef AK_TURRET_H
#define AK_TURRET_H
#include "core/ak_core.h"
#include "assets/blueprint.h"
#include "assets/model.h"
#include "game/ak_weapon.h"

typedef struct {
    const ak_bp_object *bp; const char *name;
    s32 base, pivot, barrel, wreck;    /* models (-1 = none) */
    f32 health, turn_rate, pitch_min, pitch_max, yaw_min, yaw_max;   /* radians (yaw limits 0 / 0: all round) */
    bool boardable, armed;
    ak_weapon_def gun, gun_bot; f32 volley, volley_bot;
    const char *muzzle[2]; f32 muzzle_time[2]; u32 nmuzzles;
    f32 face;                          /* +1: the parts face +z, -1: they face -z */
    f32 cam_z, cam_y;                  /* the gunner's camera: CameraBestZ back, CameraBestY up (the game's defaults 20, 5) */
} ak_turret_def;

typedef struct {
    const ak_turret_def *def; u32 id;
    f32 pos[3]; ak_quat rot; f32 base[12];   /* the base's world matrix (3x4 rows) */
    f32 yaw, pitch, health, range, volley_t, think_t, aim_t, rad;   /* rad: the base model's size (the hit body) */
    bool alive; int team; u32 post_id; s32 enemy;
} ak_turret;

/* the Turret blueprint for this base model (its name), with its parts in this level; false if none */
bool ak_turret_def_load(const ak_blueprints *bp, const ak_model_set *m, const char *base_name, ak_turret_def *out);
/* read the turret records of a level (ENTI type 30): position, rotation, health, base model hash, post, range */
typedef struct { u32 id, model_hash, post_id; f32 pos[3]; ak_quat rot; f32 health, range; } ak_turret_rec;
u32 ak_turrets_read(const ak_level *l, ak_turret_rec *out, u32 max);
void ak_turret_place(ak_turret *t, const ak_turret_def *d, const ak_turret_rec *r);
/* world matrices (3x4 rows) of the pivot and the barrel, and a muzzle's position; false when the part is missing */
bool ak_turret_pivot(const ak_turret *t, const ak_model_set *m, f32 out[12]);
bool ak_turret_barrel(const ak_turret *t, const ak_model_set *m, f32 out[12]);
bool ak_turret_muzzle(const ak_turret *t, const ak_model_set *m, u32 i, f32 out[3]);
/* the pivot's yaw and the barrel's pitch that point the barrel at `target` (within the limits): false if out of reach */
bool ak_turret_aim_at(const ak_turret *t, const ak_model_set *m, const f32 *target, f32 *yaw, f32 *pitch);
#endif
