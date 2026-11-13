/* Aurek - ground vehicles: the "Tank" blueprints (MISC/COMMON.ASR) - hover tanks (IFT-T, IFT-X, AAT, AAC-1), speeder bikes, tracked
 * tanks (T4-B, A5 juggernauts, armoured tank droid) and creatures (Taun-Taun).
 *
 * From the blueprint: TopSpeed, StallSpeed (the fastest reverse, negative), MaxAcc, BoostAcc, MaxStrafeAcc, VelDamp, MaxTurnYaw
 * (degrees a second), CosmeticRoll (degrees of lean into a turn), Health, CameraBestZ / CameraBestY (the chase camera), TargetRange,
 * HardpointW1 (a LaserBolt) fired from HardpointW1Marker1..4 at HardpointW1Time1..4 within each volley, Turret0 / TurretMarker0.
 * A vehicle spawn (ENTI type 27) names one model per side; the side that holds the nearest command post gets its vehicle.
 *
 * Not traced from the game's code yet, so this engine's: the handling model (how the numbers combine), the hover height, how the barrel
 * times combine with the Weapon's RateOfFire (the volley period), and the turret aiming. */
#ifndef AK_VEHICLE_H
#define AK_VEHICLE_H
#include "core/ak_core.h"
#include "assets/blueprint.h"
#include "assets/model.h"
#include "world/ak_collision.h"
#include "game/ak_weapon.h"
#include "game/ak_projectile.h"

enum { AK_VEH_HOVER, AK_VEH_SPEEDER, AK_VEH_TRACK, AK_VEH_CREATURE, AK_VEH_WALKER, AK_VEH_FLYER };

typedef struct {
    const ak_bp_object *bp; const char *name; s32 model, turret_model; const char *turret_marker;
    int kind;
    f32 top_speed, stall_speed, max_acc, boost_acc, strafe_acc, vel_damp, turn_rate, roll_deg;
    f32 health, cam_z, cam_y, target_range;
    f32 hover, radius, height;             /* hover height above the ground; collision circle; body height */
    ak_weapon_def gun; bool armed;          /* HardpointW1: the bolt */
    ak_weapon_def gun_bot; f32 volley_bot;  /* the same in a bot's hands: the hardpoint's Weapon blueprint's Modifier_Bot_Damage (damage x) and
                                             * Modifier_Bot_RateOfFire (time between volleys x) - Weapon "Base": 0.3 and 3 */
    const char *muzzle[4]; f32 muzzle_time[4]; u32 nmuzzles; f32 volley;
    /* walkers ("Walker" blueprints: AT-ST, AT-AT, AT-RT, AT-TE, spider walker): no root motion in their clips, so the walking
     * speed is measured from the walk loop itself - how fast a planted foot slides back (AT-ST 4.9 m/s, AT-AT 2.0 m/s) */
    s32 clip_walk, clip_idle, clip_death; f32 walk_speed, sprint_scale; bool drivable;
    /* flyers ("Flyer" blueprints: starfighters, bombers, interceptors, transports, the snowspeeder): CruisingSpeed, StallSpeed (the
     * slowest it flies), TopSpeed (boost), MaxTurnPitch / Yaw / Roll and RollRemoval (degrees a second), AnimLanded / AnimFlight */
    f32 cruise, pitch_rate, roll_rate, roll_removal, bank; s32 clip_flight, clip_landed;
    int flyer_type;                    /* Flyer_Type (AK_FLY_*: the space AI commander's roles) */
    bool carries_cp; const char *cp_marker;   /* CarriesCommandPost (AT-AT, transports): a command post of its side rides it, at CommandPostMarker */
    ak_secondary sec; const char *sec_muzzle[4]; u32 nsec_muzzles;   /* HardpointW2 (torpedoes, missiles, bombs) from HardpointW2Marker1..4 */
    f32 lock_angle, lock_time, lose_lock_angle, lose_lock_range;   /* LockAngle / LockOnTime / LoseLockOnAngle (radians) / LoseLockOnRange */
} ak_vehicle_def;

typedef struct {
    const ak_vehicle_def *def;
    f32 pos[3], yaw, vel[3], pitch, roll;
    f32 health; bool alive; int team;
    s32 driver;                            /* -1 empty, 0 the player, 1 + i bot i */
    s32 spawn; f32 respawn_t, dead_t;
    f32 volley_t; u32 fired_mask; f32 aim_yaw, aim_pitch;
    s32 sec_ammo; f32 sec_t, sec_reload; u32 sec_next; s32 lock; f32 lock_t; bool locked; f32 bot_sec_t;   /* the secondary: clip, cool-down, reload, which muzzle; the lock-on */
    f32 throttle, steer, strafe;           /* the driver's controls, -1..1 */
    f32 anim_t; s32 clip; bool posed; f32 bones[64][12];   /* the pose (walkers walk; the rest hold their bind pose) */
    bool flying, crashed; f32 speed, takeoff; bool brake;  /* flyers */
} ak_vehicle;

/* the Tank (or Walker) blueprint of this name with its model in this level; false if there is none */
bool ak_vehicle_def_load(const ak_blueprints *bp, const ak_model_set *m, const char *name, ak_vehicle_def *out);
void ak_vehicle_spawn(ak_vehicle *v, const ak_vehicle_def *d, const f32 *pos, f32 yaw, int team);
/* one step of driving (controls in v->throttle / steer / strafe; boost doubles the push).  Flyers: throttle is the stick's pitch
 * (forward = nose down), steer banks and turns, boost flies at TopSpeed, v->brake slows to StallSpeed; on the ground any input takes
 * off; touching the level slowly and level lands, anything else crashes (v->crashed). */
void ak_vehicle_update(ak_vehicle *v, const ak_collision *col, f32 gravity, bool boost, f32 dt);
/* the model's world matrix (3x4 rows, with the lean) */
void ak_vehicle_matrix(const ak_vehicle *v, f32 out[12]);
/* the pose for this frame (walk / idle clip, or the bind pose) */
void ak_vehicle_pose(ak_vehicle *v, const ak_model_set *m, f32 dt);
/* a marker of the vehicle's model in the world (3x4 rows); false if the model has no such marker */
bool ak_vehicle_marker(const ak_vehicle *v, const ak_model_set *m, const char *name, f32 out[12]);
#endif
