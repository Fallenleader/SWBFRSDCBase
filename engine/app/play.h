/* Aurek - play mode: one soldier on foot in the level, as the game plays, with one change the owner chose: the camera.
 *
 * Camera (AK_CAM_STYLE): "modern" (the default) - over the right shoulder, 1.8 m back, level with the shoulder, looking along the
 * soldier's facing with the centre of the screen clear (the DICE Battlefront framing); "classic" - the game's own ("Camera" blueprint
 * "humanoid 3rd person": pivot 1.5 m up and 0.3 m right, 7 m behind and 0.5 m up, 0.2 m left, 60 degrees).  Both pull in when the
 * level is in the way.
 *
 * Controls (AK_TWIN_STICK: -1 = the device's default, 0 = off, 1 = on; on only where the device has a second stick):
 *  - twin stick (the default where there is a right stick: PC, Steam Deck, Vita, PS4, PS5; an option on the New 3DS): the right
 *    stick aims freely with a response curve (AK_AIM_SPEED, AK_AIM_CURVE, AK_INVERT_Y); the left stick moves relative to the aim;
 *  - the game's own (always on the Old 3DS): the right stick (or buttons) turns at the game's yaw speed 4 / pitch speed 5.
 * In both, as in the game: cross jumps, R fires, L holds a lock-on to the nearest enemy in front within "targeting range" (the
 * soldier turns to it at "aim yaw speed"; shots go to the chest, then the head once the lock is held "lock on to head time"); the
 * weapon reloads when empty.
 *
 * Clips are picked by state (idle, run forward / back / sideways, jump, fall, land) from the level's Human_Rifle_* animations; the
 * game's own animation table ("Animtable: generic_male") is not traced yet.  Every soldier carries a blaster rifle (AK_WEAPON,
 * default "BlasterRifle", the faction's own version).
 *
 * Conquest (game/ak_conquest.h): the posts start with the level's owners; soldiers within 5 m capture; each death costs the team a
 * ticket; the bleed and the total-loss timer run as in the game.  Soldiers have the blueprint's health (100); a soldier that falls
 * comes back with the next spawn wave at a post its team owns.
 *
 * Bots (AK_BOTS in all, shared between the sides; the player's side has one fewer): the factions' own classes (light, medium,
 * heavy) that this level has models for.  Each picks a command post its side does not hold (the nearest, with some randomness),
 * walks there along the level's navigation graph and stands on it until it is theirs, then moves on; with every post held it
 * defends one.  It fights any enemy it can see within the targeting range (50 m): turns to it, holds the trigger in bursts with an
 * aim error that grows with distance, and keeps moving (slower, strafing).  The game's own AI is not traced yet: the reaction
 * time, the aim error (AK_BOT_AIM, degrees), the bursts and the field of view are this engine's. */
#ifndef AK_PLAY_H
#define AK_PLAY_H
#include "core/ak_core.h"
#include "core/ak_math.h"
#include "assets/model.h"
#include "assets/blueprint.h"
#include "world/ak_collision.h"
#include "world/ak_nav.h"
#include "game/ak_character.h"
#include "game/ak_soldier.h"
#include "game/ak_weapon.h"
#include "game/ak_conquest.h"
#include "render/ak_scene.h"
#include "platform/plat.h"

enum { PLAY_IDLE, PLAY_RUN, PLAY_BACK, PLAY_LEFT, PLAY_RIGHT, PLAY_JUMP, PLAY_FALL, PLAY_LAND, PLAY_NCLIPS };

#define PLAY_MAX_BOTS 127
#define PLAY_MAX_CLASSES 8
typedef struct {                       /* a bot soldier */
    ak_soldier_look look; ak_character ch; int team; ak_weapon weapon; bool alive;
    f32 bones[64][12]; int state; f32 clip_t, land_t, dead_t, pose_dt; s32 death_clip; bool was_ground;
    /* the mind */
    s32 goal; u32 path[128]; u32 npath, path_i; f32 hold[3]; bool holding;
    f32 think_t, goal_t, react_t, burst_t, stuck_t, strafe_t; f32 stuck_pos[3]; s32 enemy; f32 strafe; u32 seed;
} ak_play_bot;

typedef struct {
    bool ready;
    ak_collision col; ak_nav nav; bool have_nav;
    ak_char_params cp; ak_character ch; ak_soldier_look look;
    s32 clip[PLAY_NCLIPS]; int state; f32 clip_t, land_t;
    /* camera */
    bool classic_cam;
    f32 fov, pivot_h, pivot_x, cam_back, cam_up, cam_side, pull_out_rate, pull_in_rate;
    f32 cam_dist;                      /* current pull-in distance (eases back out) */
    f32 eye[3], aim[3]; bool aim_ok;   /* last camera position and its forward direction (shots go where it looks) */
    f32 aim_point[3];                  /* where the centre of the view meets the level */
    bool twin_stick; f32 aim_yaw_speed, aim_pitch_speed, aim_curve; bool invert_y;
    /* lock-on (the game's) */
    s32 lock; f32 lock_t, lock_range, lock_turn, lock_head_time;
    /* weapon */
    ak_weapon_def wdef; ak_weapon weapon; bool armed; ak_bolts bolts; u32 seed;
    f32 bones[64][12]; bool posed;     /* the body's pose this frame (the weapon and the muzzle ride it) */
    ak_play_bot *bot; u32 nbots;       /* (from the level arena) */
    ak_target target[1 + PLAY_MAX_BOTS];   /* 0: the player, 1 + i: bot i */
    u32 kills, deaths;
    s32 idle_clip, death_clips[3];
    ak_weapon_def team_wdef[2]; bool team_armed[2];
    const char *klass[2][PLAY_MAX_CLASSES]; u32 nklass[2];
    ak_arena scratch; bool bots_passive; f32 bot_aim, sight;
    ak_conquest_map cq; bool have_cq; int team;   /* command posts; the soldier's team (0 = team 1) */
    ak_cq_rules rules; ak_conquest match; int team_faction[2];
    f32 health, max_health, dead_t; bool alive;
    f32 scale;                         /* soldiers' size relative to the world (AK_SOLDIER_SCALE) */
    f32 clock;                         /* seconds of play (spinning logos) */
    s32 near_post;                     /* the post the soldier stands at (the HUD's capture bar), or -1 */
} ak_play;

/* body: a Humanoid blueprint name; start: where to look for the nearest walkable spot */
bool ak_play_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a, const char *body, const f32 *start);
void ak_play_update(ak_play *p, const ak_model_set *m, const ak_input *in, f32 dt);
void ak_play_camera(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch, f32 *fovy);
/* the held weapon's world matrix (3x4 rows) */
bool ak_play_weapon_matrix(const ak_play *p, const ak_model_set *m, f32 out[12]);
/* damage to the player's soldier (from bots, falls, tests) */
void ak_play_damage(ak_play *p, f32 amount);
void ak_play_draw(ak_play *p, ak_scene_models *ms, const ak_model_set *m, const ak_m4 *vp, ak_scene_stats *st);
/* soldiers alive per side */
void ak_play_counts(const ak_play *p, u32 alive[2], u32 total[2]);
#endif
