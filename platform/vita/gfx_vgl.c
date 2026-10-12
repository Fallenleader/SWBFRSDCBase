/* PS Vita renderer, fallback: the GL ES 2.0 back end (platform/linux_test/gfx_gl.c, Cg shader sources on the Vita) on top of vitaGL.
 * Built when RS_RENDERER=VITAGL (platform/vita/CMakeLists.txt).  The native GXM back end (gfx_gxm.c) is the default. */
#include <stdio.h>
#include <string.h>
#include <vitaGL.h>
#include <vitashark.h>
#include <psp2/io/stat.h>

static void *vita_getproc(const char *name){
#define X(r, n, a) if (!strcmp(name, #n)) return RS_VITA_PROC(n);
#define RS_VITA_PROC(n) RS_VITA_PROC_##n
#include "rs_vita_procs.h"
#include "rs_gl_funcs.h"
#undef X
    if (!strcmp(name, "glClearDepthf")) return (void *)glClearDepthf;
    return 0; }
int rs_gl_load(void *(*getproc)(const char *name));
int gfx_init(void);
void gfx_present(int ww, int wh);
void gfx_hud(const char *const *lines, int n, int ww, int wh);

int rs_renderer_start(void){
    vglInitExtended(0, 960, 544, 0x1800000, SCE_GXM_MULTISAMPLE_NONE);
    vglWaitVblankStart(GL_TRUE);
    if (rs_gl_load(vita_getproc) != 0) { fprintf(stderr, "[GL] vitaGL is missing required entry points\n"); return -1; }
    glClearColor(0, 0, 0, 1); glClear(GL_COLOR_BUFFER_BIT); vglSwapBuffers(GL_FALSE);
    return gfx_init(); }
void rs_renderer_present(const char *const *lines, int n){
    extern volatile int rs_dialog_active;
    gfx_present(960, 544); if (lines && n > 0) gfx_hud(lines, n, 960, 544); vglSwapBuffers(rs_dialog_active ? GL_TRUE : GL_FALSE); }
