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
#define mkdir_p(p) _mkdir(p)
#else
#include <unistd.h>
#include <dlfcn.h>
#include <sys/mman.h>
#define mkdir_p(p) mkdir(p, 0777)
#endif
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>
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
    {"RS_FULLSCREEN", "0"},
#else
    {"RS_RES_SCALE", "4"},          /* 1920x1088 */
    {"RS_RT", "0"},
    {"RS_FULLSCREEN", "0"},
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
static void *spawn_entry(void *p){
    spawn_t s = *(spawn_t *)p; free(p);
    NT_TIB *tib = (NT_TIB *)NtCurrentTeb(); void *ob = tib->StackBase, *ol = tib->StackLimit;
    u8 *top = s.stack + STACK_SZ - 64; top = (u8 *)((uintptr_t)top & ~(uintptr_t)15);
    tib->StackBase = s.stack + STACK_SZ; tib->StackLimit = s.stack;
    void *r = rs_on_stack(top, s.fn, s.arg);
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
            {SDL_CONTROLLER_BUTTON_LEFTSHOULDER, 0x0100}, {SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, 0x0200}, {SDL_CONTROLLER_BUTTON_TOUCHPAD, 0x0001}};
        for (unsigned i = 0; i < sizeof map / sizeof map[0]; i++) if (SDL_GameControllerGetButton(ctl, map[i].b)) p.buttons |= map[i].psp;
        if (SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 12000) p.buttons |= 0x0100;      /* L2 / R2 = L / R too */
        if (SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 12000) p.buttons |= 0x0200;
        p.lx = axis8(SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_LEFTX)); p.ly = axis8(SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_LEFTY));
        p.rx = axis8(SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_RIGHTX)); p.ry = axis8(SDL_GameControllerGetAxis(ctl, SDL_CONTROLLER_AXIS_RIGHTY)); }
    /* keyboard: WASD move, arrow keys look, Space / Enter = cross, Esc = start, Backspace = circle, E = triangle, Q = square,
     * Shift / right mouse... L, Ctrl = R, Tab = select, I J K L = d-pad */
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

int main(int argc, char **argv){
    (void)argc; (void)argv;
    find_data_dir(); settings_load(); log_init();
    double t0 = now_s();
#define STEP(...) do { fprintf(stderr, "[PC] %7.3fs ", now_s() - t0); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n"); } while (0)
    STEP("SWBFRSDCBase (decompiled Star Wars Battlefront: Renegade Squadron), %s build, data folder %s", RS_VARIANT, data_dir);
    SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) != 0) fatal(SDL_GetError());
    pad_mx = SDL_CreateMutex();
    int fs = rs_setting_int("RS_FULLSCREEN", 0);
    if (getenv("SteamDeck") && !rs_platform_setting("RS_FULLSCREEN")) fs = 1;
    win = SDL_CreateWindow("Star Wars Battlefront: Renegade Squadron", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 800,
                           SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI | (fs ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0));
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
    if (SDL_Vulkan_LoadLibrary(NULL) != 0) fatal("Vulkan is not available on this computer (no Vulkan driver)");
    unsigned ne = 0; SDL_Vulkan_GetInstanceExtensions(win, &ne, NULL);
    const char **ex = calloc(ne + 1, sizeof *ex); SDL_Vulkan_GetInstanceExtensions(win, &ne, ex);
    extern void rs_gfx_use_vulkan(int); rs_gfx_use_vulkan(1);
    gfx_vk_setup_window(SDL_Vulkan_GetVkGetInstanceProcAddr(), ex, (int)ne, make_surface, drawable_size);
    if (gfx_init() != 0) fatal("The Vulkan renderer could not start (see log.txt). A Vulkan 1.3 GPU with dynamic rendering is needed.");
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
            while (SDL_PollEvent(&e)) {
                if (e.type == SDL_QUIT) { STEP("window closed"); fflush(stderr); _exit(0); }
                if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_F11) { Uint32 f = SDL_GetWindowFlags(win) & SDL_WINDOW_FULLSCREEN_DESKTOP; SDL_SetWindowFullscreen(win, f ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP); SDL_ShowCursor(f ? SDL_ENABLE : SDL_DISABLE); }
                if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_RETURN && (e.key.keysym.mod & KMOD_ALT)) { Uint32 f = SDL_GetWindowFlags(win) & SDL_WINDOW_FULLSCREEN_DESKTOP; SDL_SetWindowFullscreen(win, f ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP); } }
            pad_update(); }
        if (gfx_present_due() || now - last >= 0.25) {
            last = now; gfx_present(0, 0);
            if (++frames == 1 || frames % 3600 == 0) STEP("presented %llu frames", frames);
            continue; }
        gfx_pump(4); }
    return 0; }
