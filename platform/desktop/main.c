/* Desktop platform (Steam Deck / Linux, Windows): the PS5 setup on a PC.  64-bit (RS_GUEST64), the Vulkan renderer
 * (platform/linux_test/gfx_vk.c) presenting to an SDL2 window, SDL2 game controllers (the Steam Deck's own controls, Xbox / PlayStation
 * pads) and keyboard, SDL2 audio.
 *
 * Files: everything next to the executable (a portable folder):
 *   game.iso         the UMD image: extracted into GAME/ on the first start, then deleted
 *   GAME/            the extracted UMD (GAME/PSP_GAME/...)
 *   converted/       the first start's media conversion (AT3 -> WAV, PMF -> MP4: platform/common/convert.c)
 *   mods/            textures, maps, movies, files (as on the consoles)
 *   SAVEDATA/        game profiles
 *   settings.txt     KEY=VALUE lines (as the PS5's)
 *   log.txt          log of the last session
 * Variants (compile-time RS_VARIANT): "deck" (no ray tracing, 1280x800 full screen), "windows" (ray tracing off by default),
 * "rtx" (Windows, ray tracing on by default, the NVIDIA GPU preferred). */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <pthread.h>
#include <time.h>
#include <sys/stat.h>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <direct.h>
#define VK_USE_PLATFORM_WIN32_KHR 1
#define mkdir_p(p) _mkdir(p)
#else
#include <unistd.h>
#include <dlfcn.h>
#include <sys/mman.h>
#define mkdir_p(p) mkdir(p, 0777)
#endif
#include <vulkan/vulkan.h>
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>
#ifdef _WIN32
#include <SDL2/SDL_syswm.h>
#endif
#include "psp_impl.h"
#include "guest64.h"
#include "gfx.h"
#include "gfx_vk.h"
#include "convert.h"

#ifndef RS_VARIANT
#define RS_VARIANT "deck"
#endif
#ifdef _WIN32
/* laptops with two GPUs: run on the discrete one */
__declspec(dllexport) DWORD NvOptimusEnablement = 1;
__declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
#endif

/* ---------------------------------------------------------------- per-thread processor state (native TLS) */
__thread u32 fpu_csr;
__thread float vfpu_v[128];
__thread u32 vfpu_cc;
__thread u32 psp_k0;
volatile int rs_prof_on;

/* ---------------------------------------------------------------- folders */
static char data_dir[1024], game_dir[1100], save_dir[1100];
static void find_data_dir(void){
#ifdef _WIN32
    GetModuleFileNameA(NULL, data_dir, sizeof data_dir);
    for (char *p = data_dir; *p; p++) if (*p == '\\') *p = '/';
#else
    ssize_t n = readlink("/proc/self/exe", data_dir, sizeof data_dir - 1); data_dir[n > 0 ? n : 0] = 0;
#endif
    char *s = strrchr(data_dir, '/'); if (s) *s = 0; else strcpy(data_dir, ".");
    const char *o = getenv("RS_DATA_DIR"); if (o && *o) snprintf(data_dir, sizeof data_dir, "%s", o);
    snprintf(game_dir, sizeof game_dir, "%s/GAME", data_dir); snprintf(save_dir, sizeof save_dir, "%s/SAVEDATA", data_dir);
    /* the shared code finds the data, mods and dump folders through these */
    char v[1200];
#ifdef _WIN32
#define SETENV(k, x) _putenv_s(k, x)
#else
#define SETENV(k, x) setenv(k, x, 1)
#endif
    SETENV("RS_DATA_DIR", data_dir);
    snprintf(v, sizeof v, "%s/mods", data_dir); if (!getenv("RS_MODS_DIR")) SETENV("RS_MODS_DIR", v);
    snprintf(v, sizeof v, "%s/mods/dumps/all", data_dir); if (!getenv("RS_DUMP_TEX_DIR")) SETENV("RS_DUMP_TEX_DIR", v); }
const char *rs_platform_save_dir(void){ return save_dir; }
const char *rs_platform_data_dir(void){ return data_dir; }

/* ---------------------------------------------------------------- settings: settings.txt next to the executable */
typedef struct { char k[48], v[80]; } kv_t;
static kv_t kv[96]; static int nkv;
static void settings_path(char *o, size_t n){ snprintf(o, n, "%s/settings.txt", data_dir); }
static void settings_load(void){
    char p[1100]; settings_path(p, sizeof p); FILE *f = fopen(p, "r"); if (!f) return; char l[256];
    while (fgets(l, sizeof l, f) && nkv < 96) {
        char *e = strchr(l, '='); if (!e || l[0] == '#') continue; *e = 0; char *k = l, *v = e + 1;
        while (*k == ' ' || *k == '\t') k++; for (char *t = k + strlen(k); t > k && (t[-1] == ' ' || t[-1] == '\t'); ) *--t = 0;
        while (*v == ' ' || *v == '\t') v++; for (char *t = v + strlen(v); t > v && (t[-1] == '\n' || t[-1] == '\r' || t[-1] == ' '); ) *--t = 0;
        snprintf(kv[nkv].k, sizeof kv[nkv].k, "%s", k); snprintf(kv[nkv].v, sizeof kv[nkv].v, "%s", v); nkv++; }
    fclose(f); }
static const struct { const char *k, *v; } defaults[] = {
    {"RS_RENDERER", "vulkan"},
#if defined(RS_VARIANT_DECK)
    {"RS_RES_SCALE", "3"},          /* 1440x816 internally for the Deck's 1280x800 */
    {"RS_RT", "0"},                 /* no ray tracing: too heavy for the Deck; shadow maps and PBR instead */
    {"RS_FULLSCREEN", "1"},
#elif defined(RS_VARIANT_RTX)
    {"RS_RES_SCALE", "6"},          /* 2880x1632 */
    {"RS_RT", "1"},                 /* hardware ray tracing (NVIDIA RTX through VK_KHR_ray_query) */
    {"RS_GPU_VENDOR", "0x10DE"},
    {"RS_RTAO_RAYS", "4"}, {"RS_RTGI_RAYS", "2"}, {"RS_RT_DISTANCE", "400"},
    {"RS_FULLSCREEN", "1"},
#else
    {"RS_RES_SCALE", "4"},          /* 1920x1088 */
    {"RS_RT", "0"},
    {"RS_FULLSCREEN", "1"},
#endif
    {"RS_CROP_169", "1"}, {"RS_FPS", "60"}, {"RS_MAX_PLAYERS", "128"}, {"RS_MIN_TICKETS", "200"}, {"RS_MAX_TICKETS", "5000"},
};
const char *rs_platform_setting(const char *key){
    for (int i = 0; i < nkv; i++) if (!strcmp(kv[i].k, key)) return kv[i].v;
    for (unsigned i = 0; i < sizeof defaults / sizeof defaults[0]; i++) if (!strcmp(defaults[i].k, key)) return defaults[i].v;
    return NULL; }
extern int rs_setting_int(const char *k, int d);
int rs_platform_setting_store(const char *key, const char *value){
    char p[1100]; settings_path(p, sizeof p);
    char *txt = NULL; size_t n = 0; FILE *f = fopen(p, "rb");
    if (f) { fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET); if (l > 0 && (txt = malloc((size_t)l + 1))) { n = fread(txt, 1, (size_t)l, f); txt[n] = 0; } fclose(f); }
    FILE *o = fopen(p, "wb"); if (!o) { free(txt); return -1; }
    int done = 0; size_t kl = strlen(key);
    for (char *q0 = txt; q0 && *q0; ) {
        char *e = strchr(q0, '\n'); size_t len = e ? (size_t)(e - q0 + 1) : strlen(q0);
        const char *q = q0; while (*q == ' ' || *q == '\t') q++;
        const char *r = q + kl; while (*r == ' ' || *r == '\t') r++;
        if (!done && !strncmp(q, key, kl) && *r == '=') { fprintf(o, "%s=%s\n", key, value); done = 1; }
        else fwrite(q0, 1, len, o);
        q0 += len; }
    if (!done) { if (n && txt[n - 1] != '\n') fputc('\n', o); fprintf(o, "%s=%s\n", key, value); }
    free(txt); if (fclose(o) != 0) return -1;
    for (int i = 0; i < nkv; i++) if (!strcmp(kv[i].k, key)) { snprintf(kv[i].v, sizeof kv[i].v, "%s", value); return 0; }
    if (nkv < 96) { snprintf(kv[nkv].k, sizeof kv[nkv].k, "%s", key); snprintf(kv[nkv].v, sizeof kv[nkv].v, "%s", value); nkv++; }
    return 0; }

static void log_init(void){
    if (getenv("RS_LOG_STDERR")) return;
    char p[1100]; snprintf(p, sizeof p, "%s/log.txt", data_dir);
    if (freopen(p, "w", stderr)) setvbuf(stderr, NULL, _IOLBF, 0); }
static void fatal(const char *msg){
    fprintf(stderr, "[PC] FATAL: %s\n", msg); fflush(stderr);
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Star Wars Battlefront: Renegade Squadron", msg, NULL);
    exit(1); }
static double now_s(void){ return SDL_GetPerformanceCounter() / (double)SDL_GetPerformanceFrequency(); }

/* ---------------------------------------------------------------- memory and threads */
static void *map_window(size_t size){
#ifdef _WIN32
    return VirtualAlloc(NULL, size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
#else
    void *p = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0); return p == MAP_FAILED ? NULL : p;
#endif
}
#define STACK_SZ (1u << 20)
void rs_thread_cores(const char *name){ (void)name; }
void rs_thread_init(void){ static u8 (*blocks)[256]; static int n; if (!blocks) blocks = rs_guest_alloc(64 * 256, 16);
    psp_k0 = GA(blocks[__sync_fetch_and_add(&n, 1) & 63]); }
void rs_break(u32 code, u32 where){ fprintf(stderr, "[GAME] break/trap code 0x%x at guest pc %08x\n", code, where); fflush(stderr); _exit(3); }
#ifndef _WIN32
void rs_thread_attr(pthread_attr_t *at, u32 psp_stack){ (void)psp_stack; pthread_attr_setstack(at, rs_guest_stack(STACK_SZ), STACK_SZ); }
int rs_thread_spawn(pthread_t *t, pthread_attr_t *at, void *(*fn)(void *), void *arg){ return pthread_create(t, at, fn, arg); }
#else
/* Windows threads cannot be given a stack: each game thread switches to its stack in the guest window (the game's stack frames must
 * have guest addresses) and the thread's TEB stack bounds follow it */
void *rs_on_stack(void *top, void *(*fn)(void *), void *arg);
__asm__(".globl rs_on_stack\n"
        "rs_on_stack:\n"
        "  push %rbp\n  mov %rsp, %rbp\n"
        "  mov %rcx, %rsp\n"             /* the new stack (16-byte aligned top) */
        "  push %rbp\n"                  /* the old frame */
        "  sub $40, %rsp\n"              /* shadow space, alignment */
        "  mov %r8, %rcx\n  call *%rdx\n"
        "  add $40, %rsp\n  pop %rbp\n"
        "  mov %rbp, %rsp\n  pop %rbp\n  ret\n");
typedef struct { void *(*fn)(void *); void *arg; u8 *stack; } spawn_t;
/* sceKernelExitThread: back to here with __builtin_longjmp (registers only).  pthread_exit / longjmp unwind with SEH through the
 * guest stack, which has no unwind data: that crashed Windows when the first game thread ended (loading a match). */
static __thread void *exit_jb[5]; static __thread void *(*body_fn)(void *);
static void *thread_body(void *arg){
    if (__builtin_setjmp(exit_jb) == 0) return body_fn(arg);
    return NULL; }
void rs_thread_exit(void){ __builtin_longjmp(exit_jb, 1); }
static void *spawn_entry(void *p){
    spawn_t s = *(spawn_t *)p; free(p);
    NT_TIB *tib = (NT_TIB *)NtCurrentTeb(); void *ob = tib->StackBase, *ol = tib->StackLimit;
    u8 *top = s.stack + STACK_SZ - 64; top = (u8 *)((uintptr_t)top & ~(uintptr_t)15);
    tib->StackBase = s.stack + STACK_SZ; tib->StackLimit = s.stack;
    body_fn = s.fn; void *r = rs_on_stack(top, thread_body, s.arg);
    tib->StackBase = ob; tib->StackLimit = ol; return r; }
void rs_thread_attr(pthread_attr_t *at, u32 psp_stack){ (void)at; (void)psp_stack; }
int rs_thread_spawn(pthread_t *t, pthread_attr_t *at, void *(*fn)(void *), void *arg){
    spawn_t *s = malloc(sizeof *s); s->fn = fn; s->arg = arg; s->stack = rs_guest_stack(STACK_SZ);
    pthread_attr_t a; pthread_attr_init(&a); pthread_attr_setstacksize(&a, 256 * 1024); (void)at;
    return pthread_create(t, &a, spawn_entry, s); }
#endif

/* ---------------------------------------------------------------- input: SDL game controllers (the Steam Deck's controls appear as one)
 * and the keyboard, read on the main thread, handed to the game thread */
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
int rs_oskpanel_active(void);
static SDL_mutex *pad_mx; static rs_pad_t pad_now = {0, 128, 128, 128, 128};
static SDL_GameController *ctl;
static u8 axis8(int v){ int d = v / 256; if (d > -24 && d < 24) d = 0; d += 128; return (u8)(d < 0 ? 0 : d > 255 ? 255 : d); }
static void pad_update(void){
    rs_pad_t p = {0, 128, 128, 128, 128};
    if (!ctl) for (int i = 0; i < SDL_NumJoysticks(); i++) if (SDL_IsGameController(i) && (ctl = SDL_GameControllerOpen(i))) { fprintf(stderr, "[PC] controller: %s\n", SDL_GameControllerName(ctl)); break; }
    if (ctl && !SDL_GameControllerGetAttached(ctl)) { SDL_GameControllerClose(ctl); ctl = NULL; }
    if (ctl) {
        static const struct { int b; u32 psp; } map[] = {
            {SDL_CONTROLLER_BUTTON_A, 0x4000}, {SDL_CONTROLLER_BUTTON_B, 0x2000}, {SDL_CONTROLLER_BUTTON_X, 0x8000}, {SDL_CONTROLLER_BUTTON_Y, 0x1000},
            {SDL_CONTROLLER_BUTTON_START, 0x0008}, {SDL_CONTROLLER_BUTTON_BACK, 0x0001}, {SDL_CONTROLLER_BUTTON_DPAD_UP, 0x0010},
            {SDL_CONTROLLER_BUTTON_DPAD_RIGHT, 0x0020}, {SDL_CONTROLLER_BUTTON_DPAD_DOWN, 0x0040}, {SDL_CONTROLLER_BUTTON_DPAD_LEFT, 0x0080},
            {SDL_CONTROLLER_BUTTON_LEFTSHOULDER, 0x0100}, {SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, 0x0200}, {SDL_CONTROLLER_BUTTON_TOUCHPAD, 0x0001},
            {SDL_CONTROLLER_BUTTON_PADDLE1, 0x0200}, {SDL_CONTROLLER_BUTTON_PADDLE3, 0x0200}, {SDL_CONTROLLER_BUTTON_PADDLE2, 0x0100}, {SDL_CONTROLLER_BUTTON_PADDLE4, 0x0100},
            {SDL_CONTROLLER_BUTTON_MISC1, 0x0001}};
        for (unsigned i = 0; i < sizeof map / sizeof map[0]; i++) if (SDL_GameControllerGetButton(ctl, map[i].b)) p.buttons |= map[i].psp;
        if (SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 12000) p.buttons |= 0x0100;      /* L2 / R2 = L / R too */
        if (SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 12000) p.buttons |= 0x0200;
        p.lx = axis8(SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_LEFTX)); p.ly = axis8(SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_LEFTY));
        p.rx = axis8(SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_RIGHTX)); p.ry = axis8(SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_RIGHTY)); }
    /* keyboard: WASD move, arrow keys look, Space / Enter = cross, Esc = start, Backspace = circle, E = triangle, Q = square,
     * Shift / right mouse... L, Ctrl = R, Tab = select, I J K L = d-pad */
    if (rs_oskpanel_active()) { SDL_LockMutex(pad_mx); pad_now = p; SDL_UnlockMutex(pad_mx); return; }   /* typing: the game gets nothing */
    const Uint8 *k = SDL_GetKeyboardState(NULL);
    if (k[SDL_SCANCODE_SPACE] || k[SDL_SCANCODE_RETURN]) p.buttons |= 0x4000;
    if (k[SDL_SCANCODE_BACKSPACE]) p.buttons |= 0x2000;
    if (k[SDL_SCANCODE_Q]) p.buttons |= 0x8000;
    if (k[SDL_SCANCODE_E]) p.buttons |= 0x1000;
    if (k[SDL_SCANCODE_ESCAPE]) p.buttons |= 0x0008;
    if (k[SDL_SCANCODE_TAB]) p.buttons |= 0x0001;
    if (k[SDL_SCANCODE_LSHIFT]) p.buttons |= 0x0100;
    if (k[SDL_SCANCODE_LCTRL] || k[SDL_SCANCODE_RCTRL]) p.buttons |= 0x0200;
    if (k[SDL_SCANCODE_I]) p.buttons |= 0x0010; if (k[SDL_SCANCODE_L]) p.buttons |= 0x0020; if (k[SDL_SCANCODE_K]) p.buttons |= 0x0040; if (k[SDL_SCANCODE_J]) p.buttons |= 0x0080;
    if (k[SDL_SCANCODE_A]) p.lx = 0; if (k[SDL_SCANCODE_D]) p.lx = 255; if (k[SDL_SCANCODE_W]) p.ly = 0; if (k[SDL_SCANCODE_S]) p.ly = 255;
    if (k[SDL_SCANCODE_LEFT]) p.rx = 0; if (k[SDL_SCANCODE_RIGHT]) p.rx = 255; if (k[SDL_SCANCODE_UP]) p.ry = 0; if (k[SDL_SCANCODE_DOWN]) p.ry = 255;
    SDL_LockMutex(pad_mx); pad_now = p; SDL_UnlockMutex(pad_mx); }
/* the game's on-screen keyboard: typed on the PC keyboard (platform/common/osk_panel.c draws it) */
int rs_oskpanel_begin(const u16 *, const u16 *, int); int rs_oskpanel_poll(u16 *, int); int rs_oskpanel_active(void);
void rs_oskpanel_char(unsigned); void rs_oskpanel_backspace(void); void rs_oskpanel_finish(int);
int rs_osk_begin(const u16 *title, const u16 *initial, int max_len){ return rs_oskpanel_begin(title, initial, max_len); }
int rs_osk_poll(u16 *out, int max_len){ return rs_oskpanel_poll(out, max_len); }
static void osk_event(const SDL_Event *e){
    if (e->type == SDL_TEXTINPUT) {
        const unsigned char *t = (const unsigned char *)e->text.text;
        while (*t) { unsigned c = *t++, n = 0;                                    /* UTF-8 -> code points */
            if (c >= 0xF0) { c &= 7; n = 3; } else if (c >= 0xE0) { c &= 15; n = 2; } else if (c >= 0xC0) { c &= 31; n = 1; }
            while (n-- && (*t & 0xC0) == 0x80) c = c << 6 | (*t++ & 63);
            if (c < 0x10000) rs_oskpanel_char(c); } }
    else if (e->type == SDL_KEYDOWN) {
        SDL_Keycode k = e->key.keysym.sym;
        if (k == SDLK_RETURN || k == SDLK_KP_ENTER) rs_oskpanel_finish(1);
        else if (k == SDLK_ESCAPE) rs_oskpanel_finish(0);
        else if (k == SDLK_BACKSPACE) rs_oskpanel_backspace(); }
    else if (e->type == SDL_CONTROLLERBUTTONDOWN) {
        if (e->cbutton.button == SDL_CONTROLLER_BUTTON_START) rs_oskpanel_finish(1);
        else if (e->cbutton.button == SDL_CONTROLLER_BUTTON_B) rs_oskpanel_backspace(); } }
void rs_script_read_pad(rs_pad_t *p);
void rs_backend_read_pad(rs_pad_t *p){ static int scr = -1; if (scr < 0) scr = getenv("RS_SCRIPT") != 0; if (scr) { rs_script_read_pad(p); return; }
    SDL_LockMutex(pad_mx); *p = pad_now; SDL_UnlockMutex(pad_mx); }

/* ---------------------------------------------------------------- audio: 44.1 kHz stereo blocks from the game (audio.c), queued */
static SDL_AudioDeviceID adev;
int rs_audio_host_open(int rate){
    SDL_AudioSpec want = {0}, have; want.freq = rate; want.format = AUDIO_S16SYS; want.channels = 2; want.samples = 1024;
    adev = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
    if (!adev) { fprintf(stderr, "[PC] no audio output: %s\n", SDL_GetError()); return 0; }
    SDL_PauseAudioDevice(adev, 0); return 1; }
void rs_audio_host_write(const s16 *stereo, int frames){
    if (!adev) return;
    while (SDL_GetQueuedAudioSize(adev) > 4096 * 4) SDL_Delay(1);                    /* paced by the output, as the consoles' blocking writes */
    SDL_QueueAudio(adev, stereo, (Uint32)frames * 4); }

void rs_perf_write(const char *line){ (void)line; }
void rs_perf_mem(char *b, int n){ snprintf(b, (size_t)n, "-"); }
void rs_prof_dump(void){}

/* ---------------------------------------------------------------- window */
static SDL_Window *win;
static void *make_surface(void *instance){ VkSurfaceKHR s = 0; if (!SDL_Vulkan_CreateSurface(win, (VkInstance)instance, &s)) { fprintf(stderr, "[PC] %s\n", SDL_GetError()); return NULL; } return (void *)(uintptr_t)s; }
static void drawable_size(int *w, int *h){ SDL_Vulkan_GetDrawableSize(win, w, h); }

/* ---------------------------------------------------------------- renderers
 *   vulkan  the Vulkan renderer (gfx_vk.c) through the system's Vulkan driver
 *   opengl  the OpenGL renderer (gfx_gl.c): OpenGL 2.1 + framebuffer objects (ARB or EXT) - the lowest OpenGL that runs its
 *           PBR shaders (GLSL 1.10), so it starts on old GPUs and drivers
 *   dx12    (Windows) the Vulkan renderer on Direct3D 12: Mesa's Dozen driver (vulkan_dzn.dll next to the executable, with
 *           dxil.dll) is loaded directly, without the Vulkan loader, so it runs on GPUs with only a Direct3D 12 driver
 * If the chosen renderer cannot start the game falls back to Vulkan, then OpenGL. */
enum { R_VULKAN, R_OPENGL, R_DX12 };
static int renderer; static SDL_GLContext glctx;
static Uint32 win_flags(int r){ return r == R_OPENGL ? SDL_WINDOW_OPENGL : r == R_VULKAN ? SDL_WINDOW_VULKAN : 0; }
static void window_size(int *w, int *h){
    int res = rs_setting_int("RS_RESOLUTION", 0), sc = rs_setting_int("RS_RES_SCALE", 4);
    if (!res) res = sc <= 3 ? 720 : sc == 4 ? 1080 : sc <= 6 ? 1440 : 2160;
    *w = res >= 2160 ? 3840 : res >= 1440 ? 2560 : res >= 1080 ? 1920 : 1280; *h = res >= 2160 ? 2160 : res >= 1440 ? 1440 : res >= 1080 ? 1080 : 720;
#ifdef RS_VARIANT_DECK
    *w = 1280; *h = 800;
#endif
    SDL_Rect ub; if (SDL_GetDisplayUsableBounds(0, &ub) == 0 && ub.w > 0 && ub.h > 0) {          /* a window that fits the desktop */
        while ((*w > ub.w || *h > ub.h) && *w > 640) { *w = *w * 3 / 4; *h = *h * 3 / 4; } } }
static SDL_Window *open_window(int r, int fs){
    int w, h; window_size(&w, &h);
    return SDL_CreateWindow("Star Wars Battlefront: Renegade Squadron", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h,
                            win_flags(r) | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI | (fs ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0)); }

static int start_vulkan(void){
    if (SDL_Vulkan_LoadLibrary(NULL) != 0) { fprintf(stderr, "[PC] no Vulkan driver: %s\n", SDL_GetError()); return -1; }
    unsigned ne = 0; SDL_Vulkan_GetInstanceExtensions(win, &ne, NULL);
    const char **ex = calloc(ne + 1, sizeof *ex); SDL_Vulkan_GetInstanceExtensions(win, &ne, ex);
    extern void rs_gfx_use_vulkan(int); rs_gfx_use_vulkan(1);
    gfx_vk_setup_window(SDL_Vulkan_GetVkGetInstanceProcAddr(), ex, (int)ne, make_surface, drawable_size);
    return gfx_init(); }

#ifndef RS_NO_GL
static void *gl_proc(const char *n){ return SDL_GL_GetProcAddress(n); }
static int start_opengl(void){
    glctx = SDL_GL_CreateContext(win);
    if (!glctx) { fprintf(stderr, "[PC] no OpenGL 2.1 context: %s\n", SDL_GetError()); return -1; }
    SDL_GL_MakeCurrent(win, glctx);
    const char *(*gs)(unsigned) = (const char *(*)(unsigned))SDL_GL_GetProcAddress("glGetString");
    if (gs) fprintf(stderr, "[GL] %s | %s | %s\n", gs(0x1F00), gs(0x1F01), gs(0x1F02));
    extern int rs_gl_load(void *(*)(const char *)); int miss = rs_gl_load(gl_proc);
    if (miss) { fprintf(stderr, "[GL] %d required OpenGL functions missing (OpenGL 2.1 with framebuffer objects is needed)\n", miss); return -1; }
    SDL_GL_SetSwapInterval(rs_setting_int("RS_VSYNC", 1) ? 1 : 0);
    extern void rs_gfx_use_vulkan(int); rs_gfx_use_vulkan(0);
    return gfx_init(); }
#endif

#ifdef _WIN32
static PFN_vkGetInstanceProcAddr dzn_gipa;
static void *dzn_surface(void *instance){
    SDL_SysWMinfo wi; SDL_VERSION(&wi.version); if (!SDL_GetWindowWMInfo(win, &wi)) return NULL;
    PFN_vkCreateWin32SurfaceKHR mk = (PFN_vkCreateWin32SurfaceKHR)dzn_gipa((VkInstance)instance, "vkCreateWin32SurfaceKHR"); if (!mk) return NULL;
    VkWin32SurfaceCreateInfoKHR ci = {VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR, 0, 0, GetModuleHandleW(NULL), wi.info.win.window};
    VkSurfaceKHR s = 0; return mk((VkInstance)instance, &ci, 0, &s) == VK_SUCCESS ? (void *)(uintptr_t)s : NULL; }
static void dzn_size(int *w, int *h){ SDL_GetWindowSizeInPixels(win, w, h); }
static int start_dx12(void){
    char p[1200]; snprintf(p, sizeof p, "%s/vulkan_dzn.dll", data_dir);
    HMODULE m = LoadLibraryExA(p, NULL, LOAD_WITH_ALTERED_SEARCH_PATH);          /* its DLLs (dxil.dll, SPIR-V tools) from the same folder */
    if (!m) { fprintf(stderr, "[DX12] cannot load %s (error %lu)\n", p, GetLastError()); return -1; }
    typedef VkResult (VKAPI_PTR *neg_t)(uint32_t *); neg_t neg = (neg_t)(void *)GetProcAddress(m, "vk_icdNegotiateLoaderICDInterfaceVersion");
    if (neg) { uint32_t v = 5; neg(&v); }
    dzn_gipa = (PFN_vkGetInstanceProcAddr)(void *)GetProcAddress(m, "vk_icdGetInstanceProcAddr");
    if (!dzn_gipa) { fprintf(stderr, "[DX12] vulkan_dzn.dll has no vk_icdGetInstanceProcAddr\n"); return -1; }
    static const char *ex[2] = {"VK_KHR_surface", "VK_KHR_win32_surface"};
    extern void rs_gfx_use_vulkan(int); rs_gfx_use_vulkan(1);
    gfx_vk_setup_window((void *)dzn_gipa, ex, 2, dzn_surface, dzn_size);
    fprintf(stderr, "[DX12] Direct3D 12 through Dozen (Vulkan on D3D12)\n");
    return gfx_init(); }
#endif

/* the renderer from RS_RENDERER, falling back to the others; the window is made for it (its flags depend on the API) */
static void start_renderer(int fs){
    const char *rn = rs_platform_setting("RS_RENDERER"); int want = R_VULKAN;
#ifndef RS_NO_GL
    if (rn && (!strcmp(rn, "opengl") || !strcmp(rn, "gl") || !strcmp(rn, "0"))) want = R_OPENGL;
#endif
#ifdef _WIN32
    if (rn && (!strcmp(rn, "dx12") || !strcmp(rn, "d3d12") || !strcmp(rn, "directx12"))) want = R_DX12;
#endif
    int order[3], n = 0; order[n++] = want;
    if (want != R_VULKAN) order[n++] = R_VULKAN;
#ifndef RS_NO_GL
    if (want != R_OPENGL) order[n++] = R_OPENGL;
#endif
    for (int i = 0; i < n; i++) {
        int r = order[i];
        if (r == R_OPENGL) { SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2); SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, 0); SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1); SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 0); }
        if (win && (SDL_GetWindowFlags(win) & (SDL_WINDOW_OPENGL | SDL_WINDOW_VULKAN)) != win_flags(r)) { SDL_DestroyWindow(win); win = NULL; }
        if (!win) win = open_window(r, fs);
        if (!win) { fprintf(stderr, "[PC] window: %s\n", SDL_GetError()); continue; }
        int ok = -1;
        if (r == R_VULKAN) ok = start_vulkan();
#ifndef RS_NO_GL
        else if (r == R_OPENGL) ok = start_opengl();
#endif
#ifdef _WIN32
        else if (r == R_DX12) ok = start_dx12();
#endif
        if (ok == 0) { renderer = r; static const char *nm[3] = {"Vulkan", "OpenGL", "DirectX 12"};
            if (r != want) fprintf(stderr, "[PC] renderer: %s (the chosen one could not start)\n", nm[r]); else fprintf(stderr, "[PC] renderer: %s\n", nm[r]);
            return; }
        fprintf(stderr, "[PC] renderer %d could not start\n", r); }
    fatal("No renderer could start (see log.txt). A GPU with Vulkan 1.1+ (dynamic rendering), Direct3D 12 or OpenGL 2.1 is needed."); }
static void present_frame(void){
#ifndef RS_NO_GL
    if (renderer == R_OPENGL) { int w, h; SDL_GL_GetDrawableSize(win, &w, &h); gfx_present(w, h); SDL_GL_SwapWindow(win); return; }
#endif
    gfx_present(0, 0); }

/* the first start: game.iso extracted, media converted (the window shows the progress in its title) */
static void prepare_media(void){
    char iso[1100], out[1100]; snprintf(iso, sizeof iso, "%s/game.iso", data_dir); snprintf(out, sizeof out, "%s/converted", data_dir);
    struct stat st; int have_iso = stat(iso, &st) == 0;
    int cores = SDL_GetCPUCount(); if (cores > 4) cores = 4; if (cores < 1) cores = 1;
    if (rs_convert_start_iso(have_iso ? iso : NULL, game_dir, out, cores, 0)) return;
    for (;;) {
        rs_conv_status_t c; rs_convert_status(&c);
        SDL_Event e; while (SDL_PollEvent(&e)) if (e.type == SDL_QUIT) exit(0);
        char t[200]; double f = c.work_total ? (double)c.work_done / (double)c.work_total : 0;
        if (c.phase == RS_CONV_EXTRACTING) snprintf(t, sizeof t, "Renegade Squadron - extracting the game files (first start) %d%%", (int)(f * 100));
        else if (c.phase == RS_CONV_CONVERTING) snprintf(t, sizeof t, "Renegade Squadron - converting audio and video (first start) %d%%", (int)(f * 100));
        else snprintf(t, sizeof t, "Renegade Squadron - checking media");
        SDL_SetWindowTitle(win, t);
        if (c.phase == RS_CONV_DONE) break;
        if (c.phase == RS_CONV_FAILED) { fprintf(stderr, "[PC] media: %s\n", c.message); break; }
        SDL_Delay(100); }
    SDL_SetWindowTitle(win, "Star Wars Battlefront: Renegade Squadron"); }

/* ---------------------------------------------------------------- game thread */
void hle_init(const char *root, u32 lo, u32 hi); void hle_wait_all_threads(void); void hle_report(void);
rv_t func_08A85AB0(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
static volatile int game_done;
static void *game_main(void *unused){
    (void)unused;
    rs_thread_init();
    hle_init(game_dir, RS_G_HEAP, RS_G_HEAP + RS_G_HEAP_SIZE);
    const char *path = "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN";
    char *argbuf = rs_guest_alloc(64, 16); strcpy(argbuf, path);
    fprintf(stderr, "[RS] decompiled game: module_start\n");
    rv_t r = func_08A85AB0((u32)strlen(path) + 1, GA(argbuf), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    fprintf(stderr, "[RS] module_start returned %d; waiting for game threads\n", (int)r.v0);
    hle_wait_all_threads(); hle_report(); fflush(stderr); game_done = 1; return 0; }

#ifndef _WIN32
#include <signal.h>
static void report_sig(int s){ (void)s; extern void hle_report(void); hle_report(); fflush(stderr); }   /* kill -USR1: what each game thread is doing */
#endif
int main(int argc, char **argv){
    (void)argc; (void)argv;
#ifndef _WIN32
    signal(SIGUSR1, report_sig);
#endif
    find_data_dir(); settings_load(); log_init();
    double t0 = now_s();
#define STEP(...) do { fprintf(stderr, "[PC] %7.3fs ", now_s() - t0); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n"); } while (0)
    STEP("SWBFRSDCBase (decompiled Star Wars Battlefront: Renegade Squadron), %s build, data folder %s", RS_VARIANT, data_dir);
    SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_STEAMDECK, "1");            /* the Deck's own controls when it runs outside Steam (desktop mode) */
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_XBOX, "1"); SDL_SetHint(SDL_HINT_JOYSTICK_RAWINPUT, "1");   /* Xbox pads: XInput / Raw Input, triggers separate */
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "0");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) != 0) fatal(SDL_GetError());
    pad_mx = SDL_CreateMutex();
    int fs = rs_setting_int("RS_FULLSCREEN", 0);
    if (getenv("SteamDeck") && !rs_platform_setting("RS_FULLSCREEN")) fs = 1;
    win = open_window(-1, fs);                           /* for the first start's progress; made again for the renderer if need be */
    if (!win) fatal(SDL_GetError());
    SDL_ShowCursor(fs ? SDL_DISABLE : SDL_ENABLE);
    {   struct stat st; char sys[1200], iso[1100]; snprintf(sys, sizeof sys, "%s/PSP_GAME/SYSDIR", game_dir); snprintf(iso, sizeof iso, "%s/game.iso", data_dir);
        if (stat(sys, &st) != 0 && stat(iso, &st) != 0) {
            char m[1500]; snprintf(m, sizeof m, "The game files were not found.\n\nCopy the UMD image to\n%s\n(it is extracted on the first start), or extract it so that\n%s/PSP_GAME exists.", iso, game_dir);
            fatal(m); }
        prepare_media();
        if (stat(sys, &st) != 0) fatal("The game files could not be extracted from game.iso (is there enough free space?)");
        STEP("game files: %s", game_dir); }
    void *w = map_window(RS_G_WINDOW); if (!w) fatal("cannot reserve the game's memory");
    rs_guest64_init(w, RS_G_WINDOW);
    start_renderer(fs); SDL_ShowCursor(fs ? SDL_DISABLE : SDL_ENABLE);
    gfx_wake_init(); gfx_thread_register();
    STEP("renderer ready");
    pthread_attr_t at; pthread_attr_init(&at); rs_thread_attr(&at, 0);
    extern int rs_thread_spawn(pthread_t *, pthread_attr_t *, void *(*)(void *), void *);
    pthread_t th; if (rs_thread_spawn(&th, &at, game_main, 0) != 0) fatal("cannot create the game thread");
    double last = 0, lastpad = 0; unsigned long long frames = 0;
    while (!game_done) {
        double now = now_s();
        if (now - lastpad > 0.004) {
            lastpad = now; SDL_Event e;
            { static int ti; int a = rs_oskpanel_active(); if (a != ti) { ti = a; if (a) SDL_StartTextInput(); else SDL_StopTextInput(); } }
            while (SDL_PollEvent(&e)) {
                if (rs_oskpanel_active()) { osk_event(&e); if (e.type != SDL_QUIT) continue; }
                if (e.type == SDL_QUIT) { STEP("window closed"); fflush(stderr); _exit(0); }
                if (e.type == SDL_KEYDOWN && (e.key.keysym.sym == SDLK_F11 || (e.key.keysym.sym == SDLK_RETURN && (e.key.keysym.mod & KMOD_ALT)))) {
                    Uint32 f = SDL_GetWindowFlags(win) & SDL_WINDOW_FULLSCREEN_DESKTOP; SDL_SetWindowFullscreen(win, f ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP);
                    SDL_ShowCursor(f ? SDL_ENABLE : SDL_DISABLE); rs_platform_setting_store("RS_FULLSCREEN", f ? "0" : "1"); } }   /* kept for the next start */
            pad_update(); }
        if (gfx_present_due() || now - last >= 0.25) {
            last = now; present_frame();
            if (++frames == 1 || frames % 3600 == 0) STEP("presented %llu frames", frames);
            continue; }
        gfx_pump(4); }
    return 0; }
