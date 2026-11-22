/* Headless test platform: no window, no pad (an idle player), no audio.  With gfx_null.c and AK_FIXED_DT it runs the game the
 * same way on any CPU, so a run on a big-endian machine (qemu-ppc) can be compared line by line with a little-endian one. */
#include "../plat.h"
#include <stdlib.h>
static const char *dirs[2]; static int ndirs;
bool ak_plat_init(void) { const char *d = getenv("AK_DATA_DIR"); if (d) dirs[ndirs++] = d; dirs[ndirs++] = "."; return true; }
const char *const *ak_plat_data_dirs(int *n) { *n = ndirs; return dirs; }
const char *ak_plat_user_dir(void) { return "."; }
bool ak_plat_has_right_stick(void) { return true; }
void ak_plat_trophy_init(void) {}
void ak_plat_trophy_unlock(int id) { (void)id; }
bool ak_plat_poll(ak_input *in) { u32 prev = in->held; in->lx = in->ly = in->rx = in->ry = 0; in->held = 0; in->pressed = in->held & ~prev; return true; }
bool ak_plat_audio_open(u32 rate, ak_audio_fn fn, void *user) { (void)rate; (void)fn; (void)user; return false; }
void ak_plat_audio_close(void) {}
