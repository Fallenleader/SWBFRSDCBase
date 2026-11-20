/* Aurek - the front end (PARITY 8.2): the game's own menu pages (GUIMENU/<name>.GUI, read by assets/gui.c) drawn and driven as the
 * game does - the pictures, the menu texts (MISC/MENU/MENU_AM.ASR), the focus moved along each button's neighbour links, a
 * button opening the page it names, and the pages' script functions (FE_*) where Aurek has them. */
#ifndef AK_FRONTEND_H
#define AK_FRONTEND_H
#include "../core/ak_core.h"
#include "../core/ak_vfs.h"
#include "../platform/plat.h"

enum { AK_FE_NONE = 0, AK_FE_START = 1, AK_FE_QUIT = 2, AK_FE_TEAM = 3, AK_FE_SPAWN = 4, AK_FE_RESUME = 5, AK_FE_RESTART = 6, AK_FE_KILL = 7 };

/* what the in-match pages show (team selection, the spawn map): the match as it is */
#define AK_FE_MAX_POSTS 8
typedef struct {
    u32 level_text; int mode, era;                 /* the planet's STDTEXT name; 0 CQST .. 3 HCTF; 0 Galactic Civil War, 1 Clone Wars */
    int team, faction[2];                          /* the player's side; each side's faction (0 Republic, 1 CIS, 2 Alliance, 3 Empire) */
    int winner;                                    /* the match's winner (0 / 1), -1 still on */
    u32 nposts; f32 post_pos[AK_FE_MAX_POSTS][3]; int post_owner[AK_FE_MAX_POSTS]; s32 post_name[AK_FE_MAX_POSTS];   /* (owner 0 / 1, else nobody's; names: CPNAMES entries) */
    u32 nnames[2]; const u16 *name[2][32]; u32 name_len[2][32]; bool bot[2][32];
    u16 kills[2][32], deaths[2][32]; bool alive[2][32];          /* (the score boards) */
} ak_fe_match;

bool ak_fe_init(ak_vfs *vfs);                  /* the page index and the menu texts; false = no GUIMENU files */
bool ak_fe_open(const char *page);             /* "MP_MainMenu" */
int ak_fe_update(const ak_input *in, f32 dt);  /* AK_FE_START: a match was launched (FE_HostGame) */
void ak_fe_draw(void);                         /* between ak_gfx_begin and ak_gfx_end */
const char *ak_fe_page(void);                  /* the page shown (its name), NULL none */
const char *ak_fe_launch(int *mode);
/* the in-match pages (GUIMENU/BFF_GUIMENU_INGAMESP.GUI): open one over the match, the match's state each frame, close */
bool ak_fe_open_ingame(const char *page);
void ak_fe_set_match(const ak_fe_match *m);
void ak_fe_close(void);
int ak_fe_team(void);                          /* after AK_FE_TEAM: 0 auto, 1 the good side, 2 the evil side */
int ak_fe_spawn_post(void);                    /* after AK_FE_SPAWN: the post chosen (index), -1 none */           /* after AK_FE_START: the level ("CLASSIC TATOOINE") and the mode (0 CQST .. 3 HCTF) */
#endif
