/* PS5 platform (native homebrew title, 64-bit: RS_GUEST64): memory, threads, settings, logging, DualSense input, audio output and
 * the frontend loop for the decompiled game.  Rendering: the OpenGL renderer (platform/linux_test/gfx_gl.c) on the PS5 OpenGL 4.6 SDK
 * (Mesa on the PS5's GPU), a compatibility-profile context presenting at 3840x2160.
 *
 * Files (/data/SWBFRS/, the same layout as the PS Vita's ux0:data/SWBFRS/):
 *   GAME/            the extracted UMD (GAME/PSP_GAME/...); an ISO image is not read here (the C library has no custom streams)
 *   SAVEDATA/        game profiles
 *   settings.txt     optional KEY=VALUE lines (platform/ps5/README.md)
 *   log.txt          log of the last session
 *
 * Memory: the guest window (platform/common/guest64.c: the game image, heap, VRAM, the stacks of the threads that run game code) is
 * one block of direct memory. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <ps5_opengl_display_modes.h>
#include "vfs.h"
#include "psp_impl.h"
#include "guest64.h"
#include "gfx.h"

#define RS_DIR "/data/SWBFRS"
#define RS_GAME RS_DIR "/GAME"
const char *rs_platform_save_dir(void){ return RS_DIR "/SAVEDATA"; }
volatile int rs_prof_on;

/* ---------------------------------------------------------------- system calls (libkernel / system modules; declarations written
 * from their documented behaviour, no SDK headers) */
int64_t sceKernelGetDirectMemorySize(void);
int32_t sceKernelAllocateDirectMemory(int64_t search_start, int64_t search_end, size_t length, size_t alignment, int memory_type, int64_t *physical_start);
int32_t sceKernelMapDirectMemory(void **address, size_t length, int protection, int flags, int64_t physical_start, size_t alignment);
int sceKernelUsleep(unsigned int us);
int sceUserServiceInitialize(void *params);
int sceUserServiceGetInitialUser(int *user);
int scePadInit(void);
int scePadOpen(int user, int type, int index, const void *param);
int scePadReadState(int handle, void *data);
int sceAudioOutInit(void);
int sceAudioOutOpen(int user, int type, int index, unsigned int grain, unsigned int freq, unsigned int format);
int sceAudioOutOutput(int handle, const void *samples);
int sceSystemServicePowerTick(void) __attribute__((weak));

/* ---------------------------------------------------------------- per-thread processor state (RS_TLS_STRUCT: the compiler emulates
 * thread-local storage here, a call per access, so the game's per-thread state is one block; see src/game/rs_base.h) */
static __thread rs_tls_t tls_block;
rs_tls_t *rs_tls(void){ return &tls_block; }

/* ---------------------------------------------------------------- settings: /data/SWBFRS/settings.txt */
typedef struct { char k[48], v[80]; } kv_t;
static kv_t kv[64]; static int nkv;
static void settings_load(void){
    FILE *f = fopen(RS_DIR "/settings.txt", "r"); if (!f) return; char l[256];
    while (fgets(l, sizeof l, f) && nkv < 64) {
        char *e = strchr(l, '='); if (!e || l[0] == '#') continue; *e = 0; char *k = l, *v = e + 1;
        while (*k == ' ' || *k == '\t') k++; for (char *t = k + strlen(k); t > k && (t[-1] == ' ' || t[-1] == '\t'); ) *--t = 0;
        while (*v == ' ' || *v == '\t') v++; for (char *t = v + strlen(v); t > v && (t[-1] == '\n' || t[-1] == '\r' || t[-1] == ' '); ) *--t = 0;
        snprintf(kv[nkv].k, sizeof kv[nkv].k, "%s", k); snprintf(kv[nkv].v, sizeof kv[nkv].v, "%s", v); nkv++; }
    fclose(f); }
static const struct { const char *k, *v; } ps5_defaults[] = {
    {"RS_RES_SCALE", "8"},          /* 3840x2176 internally: 8x the PSP's 480x272 */
    {"RS_CROP_169", "1"},           /* 480x270 of it shown: exactly 16:9, 3840x2160 */
    {"RS_FPS", "60"},
    {"RS_MAX_PLAYERS", "128"},      /* game_patches.c (offline game options) */
    {"RS_MIN_TICKETS", "200"},
    {"RS_MAX_TICKETS", "5000"},
};
const char *rs_platform_setting(const char *key){
    for (int i = 0; i < nkv; i++) if (!strcmp(kv[i].k, key)) return kv[i].v;
    for (unsigned i = 0; i < sizeof ps5_defaults / sizeof ps5_defaults[0]; i++) if (!strcmp(ps5_defaults[i].k, key)) return ps5_defaults[i].v;
    return NULL; }
extern int rs_setting_int(const char *k, int d);

/* ---------------------------------------------------------------- logging: stderr -> /data/SWBFRS/log.txt (up to RS_LOG_MB) */
static void log_init(void){
    mkdir(RS_DIR, 0777);
    FILE *f = freopen(RS_DIR "/log.txt", "w", stderr);
    if (f) setvbuf(stderr, NULL, _IOLBF, 0); }

/* ---------------------------------------------------------------- memory: the guest window */
static void *map_window(size_t size){
    int64_t phys = 0; void *p = NULL; const size_t align = 2u << 20;
    if (sceKernelAllocateDirectMemory(0, sceKernelGetDirectMemorySize(), size, align, 12, &phys) == 0 &&
        sceKernelMapDirectMemory(&p, size, PROT_READ | PROT_WRITE, 0, phys, align) == 0 && p) { memset(p, 0, size); return p; }
    p = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);       /* fallback: ordinary (flexible) memory */
    return p == MAP_FAILED ? NULL : p; }

/* threads that run game code have their stacks in the guest window (their frames have guest addresses) */
#define STACK_SZ (1u << 20)
void rs_thread_attr(pthread_attr_t *at, u32 psp_stack){ (void)psp_stack; pthread_attr_setstack(at, rs_guest_stack(STACK_SZ), STACK_SZ); }
void rs_thread_init(void){ static u8 (*blocks)[256]; static int n; if (!blocks) blocks = rs_guest_alloc(64 * 256, 16);
    rs_tls()->psp_k0 = GA(blocks[__sync_fetch_and_add(&n, 1) & 63]); }
void rs_break(u32 code, u32 where){ fprintf(stderr, "[GAME] break/trap code 0x%x at guest pc %08x\n", code, where); fflush(stderr); _exit(3); }

/* ---------------------------------------------------------------- input: the DualSense
 * PSP buttons: the face buttons, the d-pad, L1 / R1 as L / R, OPTIONS as START, CREATE (or the touch pad) as SELECT.  L2 / R2 are
 * L / R too (the twin-stick layout aims with L and fires with R on the PSP's shoulder buttons).  Sticks: left = the PSP stick,
 * right = the second stick (twin_stick.c). */
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
static int pad_handle = -1;
static u8 dz(u8 v){ int d = (int)v - 128; if (d > -20 && d < 20) return 128; return v; }
static void pad_init(void){
    int user = -1;
    sceUserServiceInitialize(NULL);
    if (sceUserServiceGetInitialUser(&user) < 0 || user < 0) { fprintf(stderr, "[PS5] no signed-in user: no controller\n"); return; }
    if (scePadInit() < 0) { fprintf(stderr, "[PS5] scePadInit failed\n"); return; }
    pad_handle = scePadOpen(user, 0, 0, NULL);
    fprintf(stderr, "[PS5] controller: user %d, pad handle %d\n", user, pad_handle); }
void rs_backend_read_pad(rs_pad_t *p){
    u8 d[256]; memset(d, 0, sizeof d);
    p->buttons = 0; p->lx = p->ly = p->rx = p->ry = 128;
    if (pad_handle < 0 || scePadReadState(pad_handle, d) < 0) return;
    u32 s; memcpy(&s, d, 4);                                         /* buttons, then the sticks (x, y), then L2 / R2 */
    u32 b = 0;
    if (s & 0x00000001u) b |= 0x000001;                              /* CREATE   -> SELECT */
    if (s & 0x00100000u) b |= 0x000001;                              /* touch pad -> SELECT */
    if (s & 0x00000008u) b |= 0x000008;                              /* OPTIONS  -> START */
    if (s & 0x00000010u) b |= 0x000010;
    if (s & 0x00000020u) b |= 0x000020;
    if (s & 0x00000040u) b |= 0x000040;
    if (s & 0x00000080u) b |= 0x000080;
    if (s & 0x00000500u) b |= 0x000100;                              /* L1 / L2 -> L */
    if (s & 0x00000A00u) b |= 0x000200;                              /* R1 / R2 -> R */
    if (s & 0x00001000u) b |= 0x001000;
    if (s & 0x00002000u) b |= 0x002000;
    if (s & 0x00004000u) b |= 0x004000;
    if (s & 0x00008000u) b |= 0x008000;
    p->buttons = b; p->lx = dz(d[4]); p->ly = dz(d[5]); p->rx = dz(d[6]); p->ry = dz(d[7]); }

/* ---------------------------------------------------------------- audio: the game mixes 44.1 kHz stereo in 1024-frame blocks
 * (platform/common/audio.c); the PS5 outputs 48 kHz in 256-frame grains: resampled here, written blocking (paced). */
static int aport = -1;
int rs_audio_host_open(int rate){
    (void)rate; sceAudioOutInit();
    aport = sceAudioOutOpen(0xFF, 0, 0, 256, 48000, 1);
    if (aport < 0) { fprintf(stderr, "[PS5] audio port failed: 0x%08X\n", (unsigned)aport); return 0; }
    return 1; }
void rs_audio_host_write(const s16 *stereo, int frames){
    /* linear interpolation; pos is the output position in input samples, -1 being the previous block's last sample */
    static s16 grain[256 * 2]; static int gn; static double pos; static s16 last[2];
    if (aport < 0 || frames < 2) return;
    const double step = 44100.0 / 48000.0;
    for (; pos < frames - 1; pos += step) {
        int i = (int)(pos + 1.0) - 1; double f = pos - i;               /* floor, for pos >= -1 */
        const s16 *a = i < 0 ? last : stereo + i * 2, *b = stereo + (i + 1) * 2;
        grain[gn * 2] = (s16)(a[0] + (b[0] - a[0]) * f); grain[gn * 2 + 1] = (s16)(a[1] + (b[1] - a[1]) * f);
        if (++gn == 256) { sceAudioOutOutput(aport, grain); gn = 0; } }
    pos -= frames; last[0] = stereo[(frames - 1) * 2]; last[1] = stereo[(frames - 1) * 2 + 1]; }

/* ---------------------------------------------------------------- profiler / HUD hooks (unused on this platform) */
void rs_perf_write(const char *line){ (void)line; }
void rs_perf_mem(char *b, int n){ snprintf(b, (size_t)n, "-"); }
void rs_prof_dump(void){}
/* media conversion (platform/common/convert.c, the Vita's start-up screen) is not part of this build: the original AT3 audio is
 * decoded as it plays; the PMF videos are not shown */
const char *rs_convert_output_for(const char *full, const char *ext){ (void)full; (void)ext; return NULL; }

/* ---------------------------------------------------------------- game thread */
void hle_init(const char *root, u32 lo, u32 hi); void hle_wait_all_threads(void); void hle_report(void);
rv_t func_08A85AB0(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
static const char *game_root = RS_GAME;
static void *game_main(void *unused){
    (void)unused;
    rs_thread_init();
    hle_init(game_root, RS_G_HEAP, RS_G_HEAP + RS_G_HEAP_SIZE);
    const char *path = "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN";
    char *argbuf = rs_guest_alloc(64, 16); strcpy(argbuf, path);
    fprintf(stderr, "[RS] decompiled game: module_start\n");
    rv_t r = func_08A85AB0((u32)strlen(path) + 1, GA(argbuf), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    fprintf(stderr, "[RS] module_start returned %d; waiting for game threads\n", (int)r.v0);
    hle_wait_all_threads(); hle_report(); fflush(stderr); _exit(0); return 0; }

static void fatal(const char *msg){ fprintf(stderr, "[PS5] FATAL: %s\n", msg); fflush(stderr); sceKernelUsleep(500000); _exit(1); }
static double now_s(void){ struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t); return t.tv_sec + t.tv_nsec / 1e9; }

/* ---------------------------------------------------------------- display: EGL + OpenGL (compatibility profile: the renderer's
 * GLSL 1.10-style programs and client-side arrays) */
static EGLDisplay dpy; static EGLSurface surf; static EGLint sw, sh;
static void *getproc(const char *n){ return (void *)eglGetProcAddress(n); }
static void display_init(void){
    dpy = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    int mw = 3840, mh = 2160, out = rs_setting_int("RS_OUTPUT", 2160);
    if (out == 1080) { mw = 1920; mh = 1080; } else if (out == 1440) { mw = 2560; mh = 1440; }
    if (!eglSetDisplayModePS5(dpy, mw, mh)) fprintf(stderr, "[PS5] display mode %dx%d not set\n", mw, mh);
    eglSetDisplayRefreshPS5(dpy, 60);
    EGLint maj = 0, min = 0;
    if (!eglInitialize(dpy, &maj, &min) || !eglBindAPI(EGL_OPENGL_API)) fatal("eglInitialize failed");
    static const EGLint ca[] = {EGL_SURFACE_TYPE, EGL_WINDOW_BIT, EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT, EGL_RED_SIZE, 8, EGL_GREEN_SIZE, 8,
                                EGL_BLUE_SIZE, 8, EGL_ALPHA_SIZE, 8, EGL_DEPTH_SIZE, 24, EGL_STENCIL_SIZE, 8, EGL_NONE};
    EGLConfig cfg; EGLint n = 0;
    if (!eglChooseConfig(dpy, ca, &cfg, 1, &n) || n != 1) fatal("no EGL configuration");
    surf = eglCreateWindowSurface(dpy, cfg, (EGLNativeWindowType)0, NULL);
    static const EGLint compat[] = {EGL_CONTEXT_MAJOR_VERSION_KHR, 4, EGL_CONTEXT_MINOR_VERSION_KHR, 6,
                                    EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR, EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR, EGL_NONE};
    EGLContext ctx = eglCreateContext(dpy, cfg, EGL_NO_CONTEXT, compat);
    if (surf == EGL_NO_SURFACE || ctx == EGL_NO_CONTEXT || !eglMakeCurrent(dpy, surf, surf, ctx)) fatal("cannot create the OpenGL context");
    eglQuerySurface(dpy, surf, EGL_WIDTH, &sw); eglQuerySurface(dpy, surf, EGL_HEIGHT, &sh);
    eglSwapInterval(dpy, 1);
    extern int rs_gl_load(void *(*)(const char *)); int miss = rs_gl_load(getproc);
    if (miss) { fprintf(stderr, "[PS5] %d OpenGL functions missing\n", miss); fatal("OpenGL functions missing"); }
    const char *(*gs)(unsigned) = (const char *(*)(unsigned))getproc("glGetString");
    fprintf(stderr, "[PS5] EGL %d.%d, %dx%d window; %s | %s\n", maj, min, sw, sh, gs ? gs(0x1F01) : "?", gs ? gs(0x1F02) : "?"); }

int main(void){
    settings_load(); log_init();
    double t0 = now_s();
#define STEP(...) do { fprintf(stderr, "[PS5] %7.3fs ", now_s() - t0); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n"); } while (0)
    STEP("SWBFRSDCBase (decompiled Star Wars Battlefront: Renegade Squadron) starting");
    {   /* game files: the extracted folder if present, else the ISO image */
        struct stat st;
        if (stat(RS_GAME "/PSP_GAME/SYSDIR", &st) == 0) STEP("game files: " RS_GAME);
        else fatal("game files not found: extract the UMD so that " RS_GAME "/PSP_GAME exists (an ISO image is not read on the PS5)"); }
    void *w = map_window(RS_G_WINDOW); if (!w) fatal("cannot map the guest window");
    rs_guest64_init(w, RS_G_WINDOW);
    pad_init();
    display_init();
    if (gfx_init() != 0) fatal("renderer initialisation failed (see the lines above)");
    gfx_wake_init(); gfx_thread_register();
    STEP("renderer ready");

    pthread_attr_t at; pthread_attr_init(&at); rs_thread_attr(&at, 0);
    pthread_t th; if (pthread_create(&th, &at, game_main, 0) != 0) fatal("cannot create the game thread");

    double last = 0; unsigned long long frames = 0;
    for (;;) {
        double now = now_s();
        if (gfx_present_due() || now - last >= 0.25) {
            last = now;
            gfx_present(sw, sh); eglSwapBuffers(dpy, surf);
            if (++frames == 1 || frames % 3600 == 0) STEP("presented %llu frames", frames);
            continue; }
        gfx_pump(4); }
    return 0; }
