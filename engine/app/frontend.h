/* Aurek - the front end (PARITY 8.2): the game's own menu pages (GUIMENU/<name>.GUI, read by assets/gui.c) drawn and driven as the
 * game does - the pictures, the menu texts (MISC/MENU/MENU_AM.ASR), the focus moved along each button's neighbour links, a
 * button opening the page it names, and the pages' script functions (FE_*) where Aurek has them. */
#ifndef AK_FRONTEND_H
#define AK_FRONTEND_H
#include "../core/ak_core.h"
#include "../core/ak_vfs.h"
#include "../platform/plat.h"

enum { AK_FE_NONE = 0, AK_FE_START = 1, AK_FE_QUIT = 2, AK_FE_TEAM = 3, AK_FE_SPAWN = 4, AK_FE_RESUME = 5, AK_FE_RESTART = 6, AK_FE_KILL = 7, AK_FE_LOADOUT = 8, AK_FE_GC_BUY = 9, AK_FE_GC_START = 10, AK_FE_GC_QUIT = 11, AK_FE_CMPN_START = 12 };   /* CMPN_START: FE_StartCampaign (ak_fe_cmpn_level: the campaign level index) */
int ak_fe_cmpn_level(void);   /* GC_QUIT: GC_SetQuitMenuRequest (ak_fe_gc_quit: 0 resume, 1 quit, 2 save and quit) */
int ak_fe_gc_quit(void);
void ak_fe_var(const char *name, f32 v);        /* a script value the pages read */   /* GC_START: FE_StartGalacticConquest (ak_fe_gc_new: 1 a new conquest, 0 resume) */
int ak_fe_gc_new(void);

/* what the in-match pages show (team selection, the spawn map): the match as it is */
#define AK_FE_MAX_POSTS 8
typedef struct {
    u32 level_text; int mode, era;                 /* the planet's STDTEXT name; 0 CQST .. 3 HCTF; 0 Galactic Civil War, 1 Clone Wars */
    int team, faction[2];                          /* the player's side; each side's faction (0 Republic, 1 CIS, 2 Alliance, 3 Empire) */
    int winner;                                    /* the match's winner (0 / 1), -1 still on */
    u32 nposts; f32 post_pos[AK_FE_MAX_POSTS][3]; int post_owner[AK_FE_MAX_POSTS]; s32 post_name[AK_FE_MAX_POSTS];   /* (owner 0 / 1, else nobody's; names: CPNAMES entries) */
    u32 nnames[2]; const u16 *name[2][32]; u32 name_len[2][32]; bool bot[2][32];
    u16 kills[2][32], deaths[2][32]; bool alive[2][32];          /* (the score boards) */
    const char *level;                             /* the level ("CLASSIC HOTH"): its name when level_text is 0 */
    f32 time_left;                                 /* the match's time left, seconds (< 0: no limit) */
    s32 tickets[2]; u32 held[2], posts_total;      /* the score boards' team lines: "(tickets) - [post] held/total" */
    f32 countdown;                                 /* the game-over score board's count (E_TX_CountDown; <= 0 none) */
    bool spawned;                                  /* BFF.FE_LocalPlayerSpawned: the player is in the match (the game-over pages' lists and
                                                      result show on 1, "Changing Map" on 0) */
} ak_fe_match;

bool ak_fe_init(ak_vfs *vfs);
bool ak_fe_profile_load(void);                 /* the player profile (savedata/ULUS10292<slot>/DATA.BIN, the game's format) */
bool ak_fe_profile_save(void);
void ak_fe_stat(int i);                                  /* the profile's counter i + 1, the medals checked (089775E0) */
u32 ak_fe_stat_value(int i);
bool ak_fe_has_profile(void);
bool ak_fe_personal_look(int faction, const char **body, int *head, int *c1, int *c2);   /* the profile's personalisation for a faction */                            /* (the front end set up: its profile loaded or new) */
void ak_fe_match_won(const char *level, int mode);       /* the player's side won a match (08972F90): the level, its mode */
void ak_fe_medal_clear(void);
void ak_fe_trophies_sync(void);                          /* the trophies of the medals already earned (after the trophies are set up) */                            /* the game-over dialogue's medal line off */
const u16 *ak_fe_profile_name(u32 *len);       /* its name, NULL none */
void ak_fe_campaign_won(void);                 /* a won campaign mission: the profile's level on (08973468), saved */                  /* the page index and the menu texts; false = no GUIMENU files */
bool ak_fe_open(const char *page);             /* "MP_MainMenu" */
/* the movies the menus play (FE_PlayMovie): the caller's player by the game's movie name ("credits", "basics"); blocks */
void ak_fe_set_movie_player(int (*fn)(const char *name));
int ak_fe_update(const ak_input *in, f32 dt);  /* AK_FE_START: a match was launched (FE_HostGame) */
void ak_fe_draw(void);                         /* between ak_gfx_begin and ak_gfx_end */
/* the on-screen keyboard (the profile's name; drawn by ak_fe_draw while open, or alone with ak_osk_draw) */
void ak_osk_open(const char *title, const u16 *init, u32 n, u32 max);
int  ak_osk_update(const ak_input *in, f32 dt);   /* 0 open, 1 done, -1 cancelled */
void ak_osk_draw(void);
bool ak_osk_active(void);
const u16 *ak_osk_text(u32 *n);
const char *ak_fe_page(void);                  /* the page shown (its name), NULL none */
const char *ak_fe_launch(int *mode);
/* the in-match pages (GUIMENU/BFF_GUIMENU_INGAMESP.GUI): open one over the match, the match's state each frame, close */
bool ak_fe_open_ingame(const char *page);
bool ak_fe_open_customisation(void);            /* the customisation menu alone (an own post's d-pad up); closing it gives AK_FE_LOADOUT */
void ak_fe_set_match(const ak_fe_match *m);
void ak_fe_close(void);
int ak_fe_team(void);                          /* after AK_FE_TEAM: 0 auto, 1 the good side, 2 the evil side */
/* the customisation (the spawn map's Customization Menu): after AK_FE_LOADOUT the player's choice - each category's item (0 = none
   or the lowest), the Weapon blueprints of the first five (NULL none); returns the credits spent */
void ak_fe_set_blueprints(const void *bp);     /* (COMMON.ASR's, for the items' names, costs and descriptions) */
int ak_fe_loadout(int sel[8], const char *names[5]);
/* the menus' 3D models (1004 widgets): the viewer draws `weapon` (a Weapon blueprint object, NULL none) - in the soldier's hands when
   `soldier` - in the rectangle (480 x 272 units) with the widget's camera */
/* a soldier's look for the previews: a Humanoid, its head 0..2, team / uniform colours; head_only: the head mesh alone */
typedef struct { const char *body; int head, c1, c2; bool head_only; } ak_fe_look;
typedef void (*ak_fe_model_fn)(const void *weapon, bool soldier, const ak_fe_look *look, const f32 rect[4], f32 fov, const f32 cam_off[3], const f32 rot[3]);
void ak_fe_set_model_drawer(ak_fe_model_fn fn);
/* Galactic Conquest's MP_TechPurchase (BFF_GALACTICCONQUEST.GUI): the side's technology and commanders as the page shows them;
   after AK_FE_GC_BUY (GC_Purchase<Equipment|Infantry|Space>Tech n / GC_PurchaseCommander n) the choice: kind 0..2 tech (level n),
   3 a commander (n) */
typedef struct {
    int tech[3];                                   /* the level held per kind (0 = level 1) */
    u32 tech_price[3][3];
    bool cmdr_avail[4], cmdr_bought[4]; u32 cmdr_price[4];
    const u16 *acquired; u32 acquired_len;         /* "ACQUIRED" */
    const u16 *cmdr_name[4]; u32 cmdr_name_len[4];
    const u16 *info[13]; u32 info_len[13];         /* the focused item's line: tech kind x 3 + level, then 9 + commander */
    void *portrait[2];                             /* (ak_gfx_tex) the side's commanders: in colour, greyed */
} ak_fe_gc;
bool ak_fe_open_gc(const char *page, const ak_fe_gc *g);
void ak_fe_set_gc(const ak_fe_gc *g);
void ak_fe_gc_enemy(bool on);                  /* R1: the opponent's page (Menus.GCDisplayingEnemyTech: the red backgrounds) */
int ak_fe_gc_choice(int *index);               /* after AK_FE_GC_BUY: the kind (0..2 tech, 3 commander) */
int ak_fe_spawn_post(void);                    /* after AK_FE_SPAWN: the post chosen (index), -1 none */           /* after AK_FE_START: the level ("CLASSIC TATOOINE") and the mode (0 CQST .. 3 HCTF) */
#endif
