/* Aurek - play mode: one soldier on foot in the level, with the game's third-person camera ("Camera" blueprint "humanoid 3rd
 * person": pivot 1.5 m up and 0.3 m right, the camera 7 m behind it and 0.5 m up, 0.2 m left, 60 degrees; pulled in when the level
 * is in the way).  Clips are picked by state (idle, run forward / back / sideways, jump, fall, land) from the level's
 * Human_Rifle_* animations; the game's own animation table ("Animtable: generic_male") is not traced yet.
 * The soldier carries a blaster rifle (AK_WEAPON, default "BlasterRifle", the faction's own version): R fires, L reloads.
 * Target dummies of the other side (AK_DUMMIES, up to 6) stand on navigation nodes ahead: 100 health, headshots x4; they fall
 * (a death clip) and stand up again 4 s later. */
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
#include "render/ak_scene.h"
#include "platform/plat.h"

enum { PLAY_IDLE, PLAY_RUN, PLAY_BACK, PLAY_LEFT, PLAY_RIGHT, PLAY_JUMP, PLAY_FALL, PLAY_LAND, PLAY_NCLIPS };

#define PLAY_DUMMIES 6
typedef struct {                       /* a target soldier of the other side, standing still (bots come with 1.6) */
    ak_soldier_look look; f32 pos[3], yaw;
    f32 bones[64][12]; f32 t, dead_t; s32 death_clip;
} ak_play_dummy;

typedef struct {
    bool ready;
    ak_collision col; ak_nav nav; bool have_nav;
    ak_char_params cp; ak_character ch; ak_soldier_look look;
    s32 clip[PLAY_NCLIPS]; int state; f32 clip_t, land_t;
    f32 cam_dist;                      /* current pull-in distance (eases back out) */
    f32 eye[3], aim[3]; bool aim_ok;                /* last camera position and its forward direction (shots go where it looks) */
    ak_weapon_def wdef; ak_weapon weapon; bool armed; ak_bolts bolts; u32 seed;
    f32 bones[64][12];                 /* the body's pose this frame (the weapon and the muzzle ride it) */
    bool posed;
    ak_play_dummy dummy[PLAY_DUMMIES]; ak_target target[PLAY_DUMMIES]; u32 ndummy; u32 kills;
    s32 idle_clip, death_clips[3];
    f32 fov, pivot_h, pivot_x, cam_back, cam_up, cam_side, pull_out_rate, pull_in_rate;
} ak_play;

/* body: a Humanoid blueprint name; start: where to look for the nearest walkable spot */
bool ak_play_init(ak_play *p, const ak_level *l, const ak_model_set *m, const ak_blueprints *bp, ak_arena *a, const char *body, const f32 *start);
void ak_play_update(ak_play *p, const ak_model_set *m, const ak_input *in, f32 dt);
void ak_play_camera(ak_play *p, f32 dt, ak_v3 *eye, f32 *yaw, f32 *pitch);
/* the held weapon's world matrix (3x4 rows) */
bool ak_play_weapon_matrix(const ak_play *p, const ak_model_set *m, f32 out[12]);
void ak_play_draw(ak_play *p, ak_scene_models *ms, const ak_model_set *m, const ak_m4 *vp, ak_scene_stats *st);
#endif
