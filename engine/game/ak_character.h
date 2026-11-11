/* Aurek - a soldier on foot: movement against the level's collision.
 *
 * The numbers are the game's ("Controls" blueprint "Humanoid", MISC/COMMON.ASR): max run speed 6 m/s, jump impulse 6 m/s (a single
 * upward velocity kick, as the game's func_089A0308 gives the body), air control scale 0.15, max air speed 4 m/s, yaw speed 4 rad/s,
 * pitch speed 5 rad/s.  Not yet traced from the game, and so settings: gravity (AK_GRAVITY, provisional 9.81 m/s^2 - the physics
 * world sets it at run time; to be read from the test harness), ground acceleration (AK_RUN_ACCEL), body size and step height.
 *
 * The body: two spheres (knees-up and chest) pushed out of walls horizontally, plus a ray down for the ground that steps up kerbs
 * and stairs and keeps the feet on slopes.  Collision ignores what the game's soldiers ignore (flags 0x0004 and 0x1000). */
#ifndef AK_CHARACTER_H
#define AK_CHARACTER_H
#include "core/ak_core.h"
#include "assets/blueprint.h"
#include "world/ak_collision.h"

typedef struct {
    f32 run_speed, jump_impulse, air_control, air_speed, yaw_speed, pitch_speed;   /* the game's (Controls: Humanoid) */
    f32 gravity, accel, radius, height, step, walkable;                            /* not yet traced: settings */
} ak_char_params;

typedef struct {
    f32 pos[3];                        /* feet */
    f32 vel[3];
    f32 yaw, pitch;                    /* facing (yaw 0 = -z, the camera's convention) and aim */
    bool on_ground, jumped;
    f32 ground_normal[3];
    f32 air_time;
} ak_character;

typedef struct { f32 move_x, move_y; f32 look_x, look_y; bool jump; } ak_char_input;   /* move: right / forward, -1..1 */

void ak_char_params_load(const ak_blueprints *bp, ak_char_params *out);
void ak_char_spawn(ak_character *c, const f32 *pos, f32 yaw);
/* one step: turns, moves relative to the facing, jumps, falls, collides */
void ak_char_update(ak_character *c, const ak_char_params *p, const ak_collision *col, const ak_char_input *in, f32 dt);
/* drop a point onto the ground below it (spawning): false when there is none within `range` */
bool ak_char_ground_below(const ak_collision *col, const f32 *pos, f32 range, f32 *ground);

#endif
