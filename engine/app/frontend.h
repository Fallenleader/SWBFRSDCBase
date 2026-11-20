/* Aurek - the front end (PARITY 8.2): the game's own menu pages (GUIMENU/<name>.GUI, read by assets/gui.c) drawn and driven as the
 * game does - the pictures, the menu texts (MISC/MENU/MENU_AM.ASR), the focus moved along each button's neighbour links, a
 * button opening the page it names, and the pages' script functions (FE_*) where Aurek has them. */
#ifndef AK_FRONTEND_H
#define AK_FRONTEND_H
#include "../core/ak_core.h"
#include "../core/ak_vfs.h"
#include "../platform/plat.h"

enum { AK_FE_NONE = 0, AK_FE_START = 1, AK_FE_QUIT = 2 };

bool ak_fe_init(ak_vfs *vfs);                  /* the page index and the menu texts; false = no GUIMENU files */
bool ak_fe_open(const char *page);             /* "MP_MainMenu" */
int ak_fe_update(const ak_input *in, f32 dt);  /* AK_FE_START: a match was launched (FE_HostGame) */
void ak_fe_draw(void);                         /* between ak_gfx_begin and ak_gfx_end */
const char *ak_fe_page(void);                  /* the page shown (its name), NULL none */
const char *ak_fe_launch(int *mode);           /* after AK_FE_START: the level ("CLASSIC TATOOINE") and the mode (0 CQST .. 3 HCTF) */
#endif
