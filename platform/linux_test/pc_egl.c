/* Linux / headless host frontend: creates a GLES2 context through EGL (system Mesa, or ANGLE/SwiftShader for GPU-less machines) and runs the GL thread.
 * No window: used for automated tests (RS_DUMP_DIR frame dumps, RS_SCRIPT input).  Environment:
 *   Mesa llvmpipe (most reliable on GPU-less Linux):  LIBGL_ALWAYS_SOFTWARE=1 ./rsvita_host ...
 *   RS_STRICT_ES2=1 with ANGLE: exact OpenGL ES 2.0 context (no ES3 features available), mirrors the Vita's GLES2 feature level
 *   RS_GLES_DIR=<dir with libEGL.so + libGLESv2.so (ANGLE)>   RS_SOFTGL=1  -> ANGLE on SwiftShader (also set VK_ICD_FILENAMES=<dir>/vk_swiftshader_icd.json) */
#if !defined(_WIN32) && !defined(__vita__) && defined(HOST_BUILD)
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <pthread.h>
#include <unistd.h>
#include "psp_impl.h"
#include "rs_gl.h"
#include "gfx.h"

static void *h_egl, *h_gles; static void *(*egl_gpa)(const char *);
static void *getproc(const char *n){ void *p = egl_gpa ? egl_gpa(n) : 0; if (!p && h_gles) p = dlsym(h_gles, n); return p; }
static void *dl(const char *dir, const char *base, const char *alt){
    char p[1024]; void *h = 0;
    if (dir) { snprintf(p, sizeof p, "%s/%s", dir, base); h = dlopen(p, RTLD_NOW | RTLD_GLOBAL); }
    if (!h) h = dlopen(base, RTLD_NOW | RTLD_GLOBAL); if (!h && alt) h = dlopen(alt, RTLD_NOW | RTLD_GLOBAL); return h; }

#ifdef RS_VULKAN
#include "gfx_vk.h"
/* RS_RENDERER=vulkan: the system Vulkan loader (lavapipe with VK_ICD_FILENAMES=.../lvp_icd.json on GPU-less machines), headless */
static int vulkan_frontend(pthread_t game){
    const char *r = getenv("RS_RENDERER"); if (!r || strcmp(r, "vulkan")) return 0;
    void *h = dlopen("libvulkan.so.1", RTLD_NOW | RTLD_GLOBAL); if (!h) { fprintf(stderr, "[VK] cannot load libvulkan.so.1\n"); exit(2); }
    void *gipa = dlsym(h, "vkGetInstanceProcAddr");
    extern void rs_gfx_use_vulkan(int); rs_gfx_use_vulkan(1); gfx_vk_setup(gipa, 0);
    if (gfx_init() != 0) exit(2);
    gfx_thread_register();
    for (;;) { gfx_pump(5); if (pthread_tryjoin_np(game, 0) == 0) break; }
    return 1; }
#endif
void rs_frontend_main(pthread_t game){
#ifdef RS_VULKAN
    if (vulkan_frontend(game)) return;
#endif
    const char *dir = getenv("RS_GLES_DIR");
    if (!dir) setenv("EGL_PLATFORM", "surfaceless", 0);
    h_egl = dl(dir, "libEGL.so", "libEGL.so.1"); h_gles = dl(dir, "libGLESv2.so", "libGLESv2.so.2");
    if (!h_egl || !h_gles) { fprintf(stderr, "[GL] cannot load libEGL/libGLESv2 (set RS_GLES_DIR)\n"); exit(2); }
    egl_gpa = (void *(*)(const char *))dlsym(h_egl, "eglGetProcAddress");
    void *(*getDisplay)(void *) = dlsym(h_egl, "eglGetDisplay"); void *(*getPlatDisp)(int, void *, const int *) = egl_gpa("eglGetPlatformDisplayEXT");
    int (*init)(void *, int *, int *) = dlsym(h_egl, "eglInitialize"); int (*bindApi)(int) = dlsym(h_egl, "eglBindAPI");
    int (*chooseCfg)(void *, const int *, void **, int, int *) = dlsym(h_egl, "eglChooseConfig"); int (*getCfgs)(void *, void **, int, int *) = dlsym(h_egl, "eglGetConfigs");
    void *(*mkCtx)(void *, void *, void *, const int *) = dlsym(h_egl, "eglCreateContext"); void *(*mkPb)(void *, void *, const int *) = dlsym(h_egl, "eglCreatePbufferSurface");
    int (*makeCur)(void *, void *, void *, void *) = dlsym(h_egl, "eglMakeCurrent");
    void *dpy = 0;
    if (dir && getPlatDisp) { int at[8], n = 0; at[n++] = 0x3203; at[n++] = getenv("RS_SOFTGL") ? 0x3450 : 0x3489 /* default */; if (getenv("RS_SOFTGL")) { at[n++] = 0x348F; at[n++] = 0x3487; } at[n++] = 0x3038; dpy = getPlatDisp(0x3202, 0, at); }
    if (!dpy) dpy = getDisplay(0);
    int maj, min; if (!dpy || !init(dpy, &maj, &min)) { fprintf(stderr, "[GL] eglInitialize failed\n"); exit(2); }
    int desk = getenv("RS_GL_DESKTOP") != 0;           /* desktop OpenGL compatibility profile: the PS5 build's context */
    bindApi(desk ? 0x30A2 /* EGL_OPENGL_API */ : 0x30A0);
    void *cfg = 0; int n = 0;
    const int a1[] = {0x3040, desk ? 8 : 4, 0x3024, 8, 0x3023, 8, 0x3022, 8, 0x3021, 8, 0x3025, 16, 0x3033, 1, 0x3038};
    const int a2[] = {0x3040, desk ? 8 : 4, 0x3038};
    if (!chooseCfg(dpy, a1, &cfg, 1, &n) || n < 1) { cfg = 0; n = 0; if (!chooseCfg(dpy, a2, &cfg, 1, &n) || n < 1) { cfg = 0; n = 0; getCfgs(dpy, &cfg, 1, &n); } }
    /* RS_STRICT_ES2=1 (ANGLE only): EGL_CONTEXT_OPENGL_BACKWARDS_COMPATIBLE_ANGLE=FALSE -> an exact ES 2.0 context, so anything beyond GLES2 fails like it would on the Vita */
    const int ca[] = {0x3098, 2, 0x3038}, cs[] = {0x3098, 2, 0x3483, 0, 0x3038}; const int cd[] = {0x30FD, 2 /* EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT */, 0x3038};
    void *ctx = mkCtx(dpy, cfg, 0, desk ? cd : getenv("RS_STRICT_ES2") ? cs : ca);
    const int pa[] = {0x3057, 64, 0x3056, 64, 0x3038}; void *surf = cfg ? mkPb(dpy, cfg, pa) : 0;     /* no surface needed: everything renders into FBOs (surfaceless context) */
    if (!ctx || !makeCur(dpy, surf, surf, ctx)) { fprintf(stderr, "[GL] cannot create/make current a GLES2 context\n"); exit(2); }
    int miss = rs_gl_load(getproc); if (miss) { fprintf(stderr, "[GL] %d required GL functions missing\n", miss); exit(2); }
    const char *(*gs)(unsigned) = getproc("glGetString"); if (gs) fprintf(stderr, "[GL] %s | %s\n", gs(0x1F01), gs(0x1F02));
    if (gfx_init() != 0) exit(2);
    gfx_thread_register();
    for (;;) { gfx_pump(5); if (pthread_tryjoin_np(game, 0) == 0) break; }
}
#endif
