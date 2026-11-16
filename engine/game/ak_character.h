/* Aurek - a soldier on foot: movement against the level's collision.
 *
 * The numbers are the game's ("Controls" blueprint "Humanoid", MISC/COMMON.ASR): max run speed 6 m/s, jump impulse 6 m/s (a single
 * upward velocity kick, as the game's func_089A0308 gives the body), air control scale 0.15, max air speed 4 m/s, yaw speed 4 rad/s,
 * pitch speed 5 rad/s.  Gravity 10 m/s^2: the game's physics world step (func_088AFEF0) adds direction x dt x 10.0 (the constant at
 * 0x08AEC4F8) x the body's gravity factor (body +252, 1.0 by default; only thrown objects set 2.0) to every body that feels gravity
 * (flag bit 22 of body +248); the direction is (0, 1, 0) in game axes - straight down - set by func_088AF78C.  Not yet traced, and so
 * settings: ground acceleration (AK_RUN_ACCEL), body size and step height.  The steepest walkable slope is the game's 45 degrees (the
 * body step 088C4CF4: soldiers' bodies carry flag 0x2000000, which removes the climbing part of a move up anything steeper).
 *
 * The body, the game's (when body_box is set; the player): its box swept along each frame's move against the level (the body
 * step 088C4CF4): stop 0.005 m short of the first triangle it would touch and slide on along it, at most 10 passes; physics gravity
 * always on (soldiers: 088BB208(1)); on walkable ground (within 45 degrees) the move follows the ground plane (the soldier update
 * projects its velocity on the ground, 0x08995700); nothing steeper is climbed (body flag 0x2000000); no step-up - kerbs need a
 * ramp or a jump.  The engine's own body (bots, which the game moves without its physics): two spheres (knees-up and chest)
 * pushed out of walls horizontally, plus a ray down for the ground that steps up kerbs and stairs and keeps the feet on slopes.  Collision ignores what the game's soldiers ignore (flags 0x0004 and 0x1000). */
#ifndef AK_CHARACTER_H
#define AK_CHARACTER_H
#include "core/ak_core.h"
#include "assets/blueprint.h"
#include "world/ak_collision.h"

typedef struct {
    f32 run_speed, jump_impulse, air_control, air_speed, yaw_speed, pitch_speed;   /* the game's (Controls: Humanoid) */
    f32 sprint_speed, yaw_sprint;      /* "max sprint speed" (no blueprint sets it: the game's default 12 m/s), "yaw sprint modifier" */
    f32 gravity, accel, radius, height, step, walkable;                            /* not yet traced: settings */   /* PARITY(1.4 1.5) */
} ak_char_params;

typedef struct {
    f32 pos[3];                        /* feet */
    f32 vel[3];
    f32 yaw, pitch;                    /* facing (yaw 0 = -z, the camera's convention) and aim */
    bool on_ground, jumped, sprinting;  /* sprinting: running at the sprint speed this step */
    f32 ground_normal[3];
    f32 air_time;
    /* the game's body (set by the caller; kept through ak_char_spawn): an upright box (model space, engine axes, at the soldier's
     * scale) that keeps the yaw the soldier spawned with - the soldier class sets body flag 0x2000 (0899C544 -> 088BAC78(2)), after
     * which 088BAB50 no longer turns the physics body.  Moved by a swept move-and-slide (ak_char_update); 0 = the engine's spheres. */
    bool body_box; f32 body_min[3], body_max[3], body_yaw;
} ak_character;

typedef struct {
    f32 move_x, move_y; f32 look_x, look_y; bool jump, sprint;   /* move: right / forward, -1..1 */
    bool root; f32 root_vel[2];        /* on the ground, move with this velocity (forward, right m/s: the clips' root motion, ak_loco.h)
                                        * instead of the stick at a fixed speed */
} ak_char_input;

void ak_char_params_load(const ak_blueprints *bp, ak_char_params *out);
void ak_char_spawn(ak_character *c, const f32 *pos, f32 yaw);
/* one step: turns, moves relative to the facing, jumps, falls, collides */
void ak_char_update(ak_character *c, const ak_char_params *p, const ak_collision *col, const ak_char_input *in, f32 dt);
/* drop a point onto the ground below it (spawning): false when there is none within `range` */
bool ak_char_ground_below(const ak_collision *col, const f32 *pos, f32 range, f32 *ground);

#endif
