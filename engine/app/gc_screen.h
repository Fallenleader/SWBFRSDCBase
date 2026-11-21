/* Aurek - the Galactic Conquest map screen (PARITY 5.4): the GC.PSP scene with the game's overlay (08A44xxx-08A4Axxx).
 * First slice: the GC state, the planets' places (the level's placed planet models; Alderaan = the mean of its Asteroid_02
 * pieces), the owner halos (GC_Planet_Corona.bmp) and the header ("PHASE x" top left, "CREDITS n" top right - 08A4656C's
 * family; text TEXT/GALACTICCONQUEST.ASR).  Sizes and colours are read off the original's screen (harness, 480 x 272) until the
 * drawing code is traced [assumed]. */
#ifndef AK_GC_SCREEN_H
#define AK_GC_SCREEN_H
#include "core/ak_core.h"
#include "core/ak_vfs.h"
#include "assets/asura.h"
#include "assets/model.h"
#include "assets/entity.h"
#include "assets/blueprint.h"
#include "render/ak_scene.h"
#include "game/ak_gc.h"
#include "game/ak_gc_ai.h"
#include "platform/plat.h"
#include "app/frontend.h"

enum { GCT_TECH, GCT_TECH2, GCT_SQUARE, GCT_TRIANGLE, GCT_CROSS, GCT_SELECT, GCT_CIRCLE, GCT_R1, GCT_ALL, GCT_ALL_GREY, GCT_EMP, GCT_EMP_GREY, GCT_TECH3, GCT_N };
typedef struct {
    bool ready;
    ak_gc g; ak_gc_rules r;
    f32 planet_pos[AK_GC_PLANETS][3]; bool planet_known[AK_GC_PLANETS];
    ak_gfx_tex *corona;
    ak_gfx_tex *tex[GCT_N];                /* GCT_*: the overlay's atlases and button icons */
    /* the sector outlines: SHAP hulls placed by ENTI type 7 (no mesh), in world space (engine axes); fill = the triangles, rim = the
       quads between the inner and outer outline */
    struct { ak_vtx *fill, *rim; u32 nfill, nrim; int sector; } shape[AK_GC_SECTORS]; int nshape;
    int cursor;                        /* the selected planet */
    int phase;                         /* GALACTICCONQUEST.ASR 0 Treasury, 1 Purchase, 2 Movement, 3 Reinforce, 4 Game Over */
    /* the player's turn (ak_gc_screen_update): sub 0 browsing, 1 choosing a count, 2 choosing a destination, 3 battle choice */
    int sub, src, dst, count, count_max;   /* (sub 4: the results panel - res_title, res_planet - until Continue) */
    u32 res_title; int res_planet, res_next_phase;
    f32 clock;
    bool overview;                     /* select held: Troops Overview */
    int zoom; f32 zoom_t;              /* R1: the cursor's sector close up (camera preset), L1 back; zoom_t 0..1 the move */
    f32 cam_from[5], cam_to[5];                         /* seconds (the cursor's pulse, 08A4D128's clock 0x08B285B4) */
    u32 msg; f32 msg_t;                /* a notice (GALACTICCONQUEST.ASR id) shown for msg_t seconds */
    ak_gc_income income;               /* the last treasury */
    ak_gc_ai ai;                       /* the opponent */
    /* the opponent's turn shown (the original plays it through the same screens, one press per AI_Wait 1.0 s): its steps after the
       turn is decided - 1 treasury, 2 a purchase, 3 troops bought, 4 a move, 5 its result, 6 the reinforcement */
    struct { int kind, a, b, c; u32 id; } ai_step[24]; int ai_nsteps, ai_cur; f32 ai_t; ak_gc_income ai_income; bool ai_show;
    int battle_side, battle_to, battle_n; bool battle_second;   /* the pending battle (sub 3) */
    bool battle_launch;                /* Attack chosen: the viewer starts the match (ak_gc_screen_battle_setup) and reports back */
    bool tech_open, tech_enemy;
    bool quit_open, win_open;          /* MP_Quit (START) / MP_Win_* (the game over) shown by the viewer */        /* (tech_enemy: R1 shows the opponent's) */                    /* square: the viewer shows MP_TechPurchase */
    bool battle_live;                  /* a match is being played for it */
} ak_gc_screen;

bool ak_gc_screen_init(ak_gc_screen *s, ak_vfs *vfs, const ak_level *l, const ak_scene_level *sc, const ak_model_set *ms,
                       const ak_entity_set *ents, const ak_blueprints *bp, u32 seed);
void ak_gc_screen_draw_back(const ak_gc_screen *s, const ak_m4 *vp);   /* behind the models: the owner halos */
void ak_gc_screen_draw(const ak_gc_screen *s, const ak_m4 *vp);        /* 2D, after the 3D */
/* the tech page (MP_TechPurchase) as it stands for side 0; ak_gc_screen_tech_buy: a GC_Purchase* choice */
void ak_gc_screen_tech(const ak_gc_screen *s, ak_fe_gc *o);
void ak_gc_screen_tech_buy(ak_gc_screen *s, int kind, int index);
/* the player's input (pressed buttons); returns true while it is the player's turn */
bool ak_gc_screen_update(ak_gc_screen *s, const ak_input *in, const ak_m4 *vp, f32 dt);
/* Attack: the level file stem (ak_gc_battle_level, e.g. "space_hoth"), the tickets by faction class (good, bad: ak_gc_battle_tickets)
   and the player's faction for the match */
const char *ak_gc_screen_battle_setup(ak_gc_screen *s, int tickets[2], int *player_faction);
/* the match's end (play.gc_result): the winning faction (-1 none) and the tickets left by faction class */
void ak_gc_screen_battle_done(ak_gc_screen *s, int winning_faction, const int left[2]);
/* Save and Quit: the conquest to a file of Aurek's own (the original writes a 0x144-byte record into the profile, 08A37D04 / 08A382B0
   request 2) [assumed: Aurek's format - the state as it is]; load it for Resume */
bool ak_gc_screen_save(const ak_gc_screen *s, const char *path);
bool ak_gc_screen_load(ak_gc_screen *s, const char *path);
/* the map camera (engine axes): position, yaw, pitch - the sector close-ups' moves (08A4BE04's presets) */
void ak_gc_screen_camera(const ak_gc_screen *s, f32 pos[3], f32 *yaw, f32 *pitch);
const u16 *ak_gc_text(u32 id, u32 *len);                          /* TEXT/GALACTICCONQUEST.ASR entry */
#endif
