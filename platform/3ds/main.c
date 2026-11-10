/* Nintendo 3DS platform (libctru): memory, threads, settings, logging, input, audio, keyboard and the frontend loop of the decompiled
 * game.  The renderer is gfx_c3d.c (citro3d, the top screen); the bottom screen stays black with the profiler's text on it.
 *
 * Files (sdmc:/3ds/SWBFRS/):
 *   game.iso         the UMD image (read in place), or
 *   GAME/            the extracted UMD (GAME/PSP_GAME/...)
 *   settings.txt     optional KEY=VALUE lines (platform/3ds/settings.txt lists them)
 *   log.txt          log of the last session
 *   SAVEDATA/        profiles
 *   mods/            mods, as on the other builds (custom maps, weapons, textures ...)
 *
 * Memory (one layout for the Old and the New 3DS; the New 3DS just has more of everything that is left):
 *   - the GPU heap ("linear" memory: textures, vertex data, the render surfaces that do not fit video RAM): 12 MB (24 MB with the New
 *     3DS's larger memory)
 *   - the game heap (the PSP's user memory as the game sees it): RS_HEAP_MB, 22 MB default (the PSP-1000 gave the game about 20)
 *   - the PSP's 2 MB of video RAM (an image in normal memory; the game addresses it as 0x04000000 + offset)
 *   - everything else is the C heap (this layer's own allocations, thread stacks). */
#include <3ds.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <pthread.h>
#include <sys/stat.h>
#include <errno.h>
#include "psp_impl.h"
#include "gfx.h"

#include "convert.h"
#define RS_DIR "sdmc:/3ds/SWBFRS"
#define RS_GAME RS_DIR "/GAME"
#define RS_ISO RS_DIR "/game.iso"
const char *rs_platform_data_dir(void){ return RS_DIR; }
const char *rs_platform_save_dir(void){ return RS_DIR "/SAVEDATA"; }
u8 *g_mem;
volatile int rs_prof_on;
int rs_is_new3ds;

/* ---------------------------------------------------------------- per-thread processor state (RS_TLS_STRUCT) */
static __thread rs_tls_t tls_block;
rs_tls_t *rs_tls(void){ return &tls_block; }

/* ---------------------------------------------------------------- settings: sdmc:/3ds/SWBFRS/settings.txt */
typedef struct { char k[48], v[80]; } kv_t;
static kv_t kv[96]; static int nkv;
static void settings_load(void){
    FILE *f = fopen(RS_DIR "/settings.txt", "r"); if (!f) return; char l[256];
    while (fgets(l, sizeof l, f) && nkv < 96) {
        char *e = strchr(l, '='); if (!e || l[0] == '#') continue; *e = 0; char *k = l, *v = e + 1;
        while (*k == ' ' || *k == '\t') k++; for (char *t = k + strlen(k); t > k && (t[-1] == ' ' || t[-1] == '\t'); ) *--t = 0;
        while (*v == ' ' || *v == '\t') v++; for (char *t = v + strlen(v); t > v && (t[-1] == '\n' || t[-1] == '\r' || t[-1] == ' '); ) *--t = 0;
        char *h = strchr(v, '#'); if (h) { *h = 0; for (char *t = v + strlen(v); t > v && (t[-1] == ' ' || t[-1] == '\t'); ) *--t = 0; }
        snprintf(kv[nkv].k, sizeof kv[nkv].k, "%s", k); snprintf(kv[nkv].v, sizeof kv[nkv].v, "%s", v); nkv++; }
    fclose(f); }
/* the 3DS's defaults where they differ from the other builds: the original game's player counts (16, bots included), no 64-player
 * squads, PSP fog; the requested customisation patches stay on (any colour, any weapon, any head except for the CIS) */
static const struct { const char *k, *v; } ds_defaults[] = {
    {"RS_MAX_PLAYERS", "16"}, {"RS_MAX_TICKETS", "200"}, {"RS_AI_BOTS_ALL", "0"}, {"RS_FOG", "100"}, {"RS_ANY_HEAD_CIS", "0"},
    {"RS_FPS", "30"}, {"RS_RES_SCALE", "1"}, {"RS_ANISO", "1"},
};
const char *rs_platform_setting(const char *key){
    if (!strcmp(key, "RS_TWIN_STICK") && !rs_is_new3ds) return "0";      /* the Old 3DS has no right stick: the PSP's controls, whatever settings.txt says */
    for (int i = 0; i < nkv; i++) if (!strcmp(kv[i].k, key)) return kv[i].v;
    for (unsigned i = 0; i < sizeof ds_defaults / sizeof ds_defaults[0]; i++) if (!strcmp(ds_defaults[i].k, key)) return ds_defaults[i].v;
    if (!strcmp(key, "RS_TWIN_STICK")) return rs_is_new3ds ? "1" : "0";      /* twin-stick controls need the New 3DS's C-stick */
    return NULL; }
extern int rs_setting_int(const char *k, int d);

/* ---------------------------------------------------------------- memory: the application and GPU ("linear") heaps
 * libctru's default split gives the GPU heap far more than this game's GPU data needs; the game heap lives in the application heap. */
extern char *fake_heap_start, *fake_heap_end;
extern u32 __ctru_heap, __ctru_heap_size, __ctru_linear_heap, __ctru_linear_heap_size;
void __system_allocateHeaps(void){
    Handle reslimit = 0; if (R_FAILED(svcGetResourceLimit(&reslimit, CUR_PROCESS_HANDLE))) svcBreak(USERBREAK_PANIC);
    s64 maxCommit = 0, currentCommit = 0; ResourceLimitType t = RESLIMIT_COMMIT;
    svcGetResourceLimitLimitValues(&maxCommit, reslimit, &t, 1); svcGetResourceLimitCurrentValues(&currentCommit, reslimit, &t, 1); svcCloseHandle(reslimit);
    u32 remaining = (u32)(maxCommit - currentCommit) & ~0xFFFu;
    u32 lin = (remaining > (100u << 20) ? 24u : 16u) << 20;          /* (runs before the system services: no settings file yet) */
    if (lin > remaining / 2) lin = (remaining / 2) & ~0xFFFu;
    __ctru_linear_heap_size = lin; __ctru_heap_size = remaining - lin;
    if (__ctru_heap_size > (OS_HEAP_AREA_END - OS_HEAP_AREA_BEGIN)) __ctru_heap_size = OS_HEAP_AREA_END - OS_HEAP_AREA_BEGIN;
    if (R_FAILED(svcControlMemory(&__ctru_heap, OS_HEAP_AREA_BEGIN, 0x0, __ctru_heap_size, MEMOP_ALLOC, MEMPERM_READ | MEMPERM_WRITE))) svcBreak(USERBREAK_PANIC);
    if (R_FAILED(svcControlMemory(&__ctru_linear_heap, 0x0, 0x0, __ctru_linear_heap_size, MEMOP_ALLOC_LINEAR, MEMPERM_READ | MEMPERM_WRITE))) svcBreak(USERBREAK_PANIC);
    mappableInit(OS_MAP_AREA_BEGIN, OS_MAP_AREA_END);
    fake_heap_start = (char *)__ctru_heap; fake_heap_end = fake_heap_start + __ctru_heap_size; }
u32 __stacksize__ = 512 * 1024;                                   /* the frontend thread (renderer) */

/* ---------------------------------------------------------------- logging: stderr -> sdmc:/3ds/SWBFRS/log.txt (up to RS_LOG_MB) */
static FILE *log_file; static long log_bytes, log_cap = 2L << 20;
static ssize_t log_write(void *ck, const char *buf, size_t n){ (void)ck;
    if (log_file && log_bytes < log_cap) { fwrite(buf, 1, n, log_file); log_bytes += (long)n; if (memchr(buf, '\n', n)) fflush(log_file); }
    return (ssize_t)n; }
static void log_init(void){
    mkdir("sdmc:/3ds", 0777); mkdir(RS_DIR, 0777);
    log_file = fopen(RS_DIR "/log.txt", "w");
    log_cap = (long)rs_setting_int("RS_LOG_MB", 2) << 20;
    cookie_io_functions_t io = {0, log_write, 0, 0}; FILE *c = fopencookie(0, "w", io);
    if (c) { setvbuf(c, NULL, _IOLBF, 0); stderr = c; } else if (log_file) stderr = log_file; }

/* ---------------------------------------------------------------- threads
 * The application core runs every game thread; a thread runs game code only while it holds the big lock (hle.c), so they take turns
 * there as they did on the PSP.  Native stacks of 512 KB (the decompiled functions keep their PSP stack frames on them). */
/* VFP "flush to zero": the ARM11's VFP hands every denormal operand or result to a slow software path (support code), costing
 * hundreds of cycles each; the PSP's FPU flushed denormals to zero anyway, so this is also the game's own arithmetic.  Per thread
 * (FPSCR is part of a thread's context).  RS_FLUSH_DENORMALS=0 leaves it off. */
static void fpu_fast(void){ static int on = -1; if (on < 0) on = rs_setting_int("RS_FLUSH_DENORMALS", 1); if (!on) return;
    u32 f; __asm__ volatile("vmrs %0, fpscr" : "=r"(f)); f |= 1u << 24; __asm__ volatile("vmsr fpscr, %0" :: "r"(f)); }
void rs_thread_init(void){ static u8 blocks[64][256] __attribute__((aligned(16))); static int n; rs_tls()->psp_k0 = (u32)(uintptr_t)blocks[__sync_fetch_and_add(&n, 1) & 63]; fpu_fast(); }
void rs_thread_cores(const char *name){ (void)name; }
void rs_thread_attr(pthread_attr_t *at, u32 psp_stack){ (void)psp_stack; pthread_attr_setstacksize(at, (size_t)rs_setting_int("RS_THREAD_STACK_KB", 512) * 1024); }
void rs_break(u32 code, u32 where){
    fprintf(stderr, "[GAME] break/trap code 0x%x at guest pc %08x\n", code, where); fflush(stderr);
    svcSleepThread(500000000LL); exit(3); }

/* ---------------------------------------------------------------- input
 * The PSP's buttons by position: B = cross, A = circle, Y = square, X = triangle; L / R the shoulder buttons; the circle pad is the
 * analog stick.  New 3DS: the C-stick is the right stick (twin-stick controls, platform/common/twin_stick.c) and ZL / ZR are L / R too. */
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
static u8 axis(int v, int range){ int d = v * 127 / range; if (d > -20 && d < 20) d = 0; if (d > 127) d = 127; if (d < -128) d = -128; return (u8)(128 + d); }
volatile int rs_dialog_active;
void rs_backend_read_pad(rs_pad_t *p){
    u32 k = hidKeysHeld(), b = 0;
    if (k & KEY_SELECT) b |= 0x000001;
    if (k & KEY_START)  b |= 0x000008;
    if (k & KEY_DUP)    b |= 0x000010;
    if (k & KEY_DRIGHT) b |= 0x000020;
    if (k & KEY_DDOWN)  b |= 0x000040;
    if (k & KEY_DLEFT)  b |= 0x000080;
    if (k & (KEY_L | KEY_ZL)) b |= 0x000100;
    if (k & (KEY_R | KEY_ZR)) b |= 0x000200;
    if (k & KEY_X) b |= 0x001000;
    if (k & KEY_A) b |= 0x002000;
    if (k & KEY_B) b |= 0x004000;
    if (k & KEY_Y) b |= 0x008000;
    circlePosition cp; hidCircleRead(&cp);
    p->lx = axis(cp.dx, 150); p->ly = axis(-cp.dy, 150);
    p->rx = p->ry = 128;
    if (rs_is_new3ds) { circlePosition cs; hidCstickRead(&cs); p->rx = axis(cs.dx, 140); p->ry = axis(-cs.dy, 140); }
    if (rs_dialog_active) { b = 0; p->lx = p->ly = p->rx = p->ry = 128; }
    p->buttons = b; }

/* ---------------------------------------------------------------- on-screen keyboard: the system's software keyboard applet, run by the
 * frontend thread (applets take over the screens) at the game's request */
static volatile int osk_req;                                     /* 0 idle, 1 requested, 3 entered, 4 cancelled */
static char osk_init[512], osk_out[512]; static int osk_max;
int rs_osk_begin(const u16 *title, const u16 *initial, int max_len){
    (void)title; if (max_len <= 0) return 0; if (max_len > 255) max_len = 255;
    int i; for (i = 0; i < 511 && initial && initial[i]; i++) osk_init[i] = initial[i] < 128 ? (char)initial[i] : '?'; osk_init[i] = 0;
    osk_max = max_len; __sync_synchronize(); osk_req = 1; return 1; }
int rs_osk_poll(u16 *out, int max_len){
    int r = osk_req;
    if (r == 3) { int i; for (i = 0; i < max_len - 1 && osk_out[i]; i++) out[i] = (u8)osk_out[i]; out[i] = 0; osk_req = 0; return 1; }
    if (r == 4) { osk_req = 0; return -1; }
    return 0; }
static void osk_frontend(void){
    if (osk_req != 1) return;
    rs_dialog_active = 1;
    SwkbdState kb; swkbdInit(&kb, SWKBD_TYPE_NORMAL, 2, osk_max); swkbdSetInitialText(&kb, osk_init);
    SwkbdButton bt = swkbdInputText(&kb, osk_out, sizeof osk_out);
    rs_dialog_active = 0; __sync_synchronize(); osk_req = bt == SWKBD_BUTTON_CONFIRM ? 3 : 4; }

/* ---------------------------------------------------------------- audio: one DSP channel, 16-bit stereo, the game's own mixing rate;
 * rs_audio_host_write blocks until a buffer is free, which paces the audio thread (as the PSP's blocking output does) */
#define NBUF 4
static ndspWaveBuf wb[NBUF]; static s16 *abuf; static int afr, anext, aok; static LightEvent aev;
static void a_cb(void *u){ (void)u; LightEvent_Signal(&aev); }
int rs_audio_host_open(int rate){
    if (R_FAILED(ndspInit())) { fprintf(stderr, "[3DS] no sound: the DSP firmware is missing (sdmc:/3ds/dspfirm.cdc: dump it with DSP1)\n"); return 0; }
    afr = 1024; abuf = linearAlloc((size_t)afr * 4 * NBUF); if (!abuf) return 0;
    ndspSetOutputMode(NDSP_OUTPUT_STEREO); ndspChnReset(0); ndspChnSetInterp(0, NDSP_INTERP_LINEAR); ndspChnSetRate(0, (float)rate);
    ndspChnSetFormat(0, NDSP_FORMAT_STEREO_PCM16); float mix[12] = {1, 1}; ndspChnSetMix(0, mix);
    memset(wb, 0, sizeof wb); for (int i = 0; i < NBUF; i++) { wb[i].data_vaddr = abuf + i * afr * 2; wb[i].nsamples = (u32)afr; wb[i].status = NDSP_WBUF_DONE; }
    LightEvent_Init(&aev, RESET_ONESHOT); ndspSetCallback(a_cb, NULL); aok = 1; return 1; }
void rs_audio_host_write(const s16 *stereo, int frames){
    if (!aok) return;
    while (frames > 0) {
        ndspWaveBuf *w = &wb[anext];
        while (w->status != NDSP_WBUF_DONE && w->status != NDSP_WBUF_FREE) LightEvent_Wait(&aev);
        int n = frames > afr ? afr : frames;
        memcpy((void *)w->data_pcm16, stereo, (size_t)n * 4); w->nsamples = (u32)n; DSP_FlushDataCache(w->data_pcm16, (u32)n * 4);
        ndspChnWaveBufAdd(0, w); anext = (anext + 1) % NBUF; stereo += n * 2; frames -= n; } }

/* ---------------------------------------------------------------- profiler output */
void rs_perf_write(const char *line){ static FILE *f; static int on = -1; if (on < 0) on = rs_setting_int("RS_PERF_LOG", 0); if (!on) return;
    if (!f) { f = fopen(RS_DIR "/perf.log", "a"); if (f) fputs("==== new session ====\n", f); } if (f) { fputs(line, f); fflush(f); } }
void rs_perf_mem(char *b, int n){ struct mallinfo mi = mallinfo();
    snprintf(b, (size_t)n, "heap used %.1f MB; linear free %.1f MB", mi.uordblks / 1048576.0, linearSpaceFree() / 1048576.0); }

/* ---------------------------------------------------------------- the bottom screen: black, with the profiler's figures (RS_HUD=0 hides them) */
extern volatile int g_frames;
static PrintConsole bottom;
static void hud_update(u64 presented){
    static int on = -1; if (on < 0) on = rs_setting_int("RS_HUD", 1); if (!on) return;
    static u64 t_last, pres_last, gfr_last; static rs_perf_t p_last;
    u64 now = osGetTime();
    if (!t_last) { t_last = now; p_last = rs_perf; pres_last = presented; gfr_last = (u64)g_frames; return; }
    if (now - t_last < 500) return;
    double dt = (double)(now - t_last) * 1000.0; rs_perf_t p = rs_perf;
    double fps = (presented - pres_last) * 1e6 / dt, gfps = ((u64)g_frames - gfr_last) * 1e6 / dt;
    double gl = (double)(p.job_us - p_last.job_us + p.present_us - p_last.present_us) / dt;
    double idle = (double)(p.run_wait_us - p_last.run_wait_us + p.sleep_us - p_last.sleep_us) / dt;
    double cpu = 1.0 - idle; if (cpu < 0) cpu = 0; if (cpu > 1) cpu = 1; if (gl > 1) gl = 1;
    double pf = (double)(presented - pres_last); if (pf < 1) pf = 1;
    struct mallinfo mi = mallinfo(); char st[160]; gfx_stats(st, sizeof st);
    extern void gfx_c3d_counters(unsigned *draws, unsigned *uploads, unsigned *verts, float *gpu_ms);
    unsigned dr, up, vx; float gms; gfx_c3d_counters(&dr, &up, &vx, &gms);
    static unsigned dr_l, up_l, vx_l;
    consoleSelect(&bottom);
    printf("\x1b[1;1H\x1b[37mSWBF Renegade Squadron (%s 3DS)\x1b[K\n\n", rs_is_new3ds ? "New" : "Old");
    printf("FPS %5.1f   GAME FRAMES %5.1f/s\x1b[K\n", fps, gfps);
    printf("GAME CPU %3.0f%%   RENDER %3.0f%%\x1b[K\n", cpu * 100, gl * 100);
    printf("GPU %5.1f ms/frame\x1b[K\n", gms);
    printf("DRAWS %5.0f  VERTS %6.0f  UPLOADS %4.1f\x1b[K\n", (dr - dr_l) / pf, (vx - vx_l) / pf, (up - up_l) / pf);
    printf("HEAP %4.1f MB   GPU HEAP FREE %4.1f MB\x1b[K\n", mi.uordblks / 1048576.0, linearSpaceFree() / 1048576.0);
    printf("VRAM FREE %4.0f KB\x1b[K\n", vramSpaceFree() / 1024.0);
    printf("3D %s\x1b[K\n", osGet3DSliderState() > 0.0f ? "slider up (stereo: not yet)" : "off");
    dr_l = dr; up_l = up; vx_l = vx;
    t_last = now; p_last = p; pres_last = presented; gfr_last = (u64)g_frames; }

/* ---------------------------------------------------------------- game thread */
void hle_init(const char *root, u32 lo, u32 hi); void hle_wait_all_threads(void); void hle_report(void);
rv_t func_08A85AB0(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
static u32 heap_base, heap_size; static const char *game_root;
static volatile int game_done;
static void *game_main(void *unused){
    (void)unused;
    rs_thread_init();
    hle_init(game_root, heap_base, heap_base + heap_size);
    const char *path = "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN";
    static char argbuf[64]; strcpy(argbuf, path);
    fprintf(stderr, "[RS] decompiled game: module_start\n");
    rv_t r = func_08A85AB0((u32)strlen(path) + 1, (u32)(uintptr_t)argbuf, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    fprintf(stderr, "[RS] module_start returned %d; waiting for game threads\n", (int)r.v0);
    hle_wait_all_threads(); hle_report(); game_done = 1; return 0; }

static void fatal(const char *msg){
    fprintf(stderr, "[3DS] FATAL: %s\n", msg); fflush(stderr);
    consoleSelect(&bottom); printf("\x1b[2J\x1b[1;1H\x1b[31mCannot start:\x1b[37m\n\n%s\n\nPress START to exit.\n", msg);
    while (aptMainLoop()) { hidScanInput(); if (hidKeysDown() & KEY_START) break; gspWaitForVBlank(); }
    gfxExit(); exit(1); }

int main(void){
    osSetSpeedupEnable(true); fpu_fast();                                       /* New 3DS: 804 MHz and the L2 cache (no effect on the Old 3DS) */
    { bool n = false; APT_CheckNew3DS(&n); rs_is_new3ds = n; }
    gfxInitDefault(); gfxSet3D(false);
    consoleInit(GFX_BOTTOM, &bottom);
    settings_load(); log_init();
    u64 t0 = osGetTime();
#define STEP(...) do { fprintf(stderr, "[3DS] %7.3fs ", (osGetTime() - t0) / 1e3); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n"); } while (0)
    STEP("SWBFRSDCBase (decompiled Star Wars Battlefront: Renegade Squadron), %s 3DS", rs_is_new3ds ? "New" : "Old");
    STEP("memory: C heap %lu KB, GPU heap %lu KB, VRAM %lu KB free", (unsigned long)(__ctru_heap_size >> 10), (unsigned long)(__ctru_linear_heap_size >> 10), (unsigned long)(vramSpaceFree() >> 10));
    consoleSelect(&bottom); printf("\x1b[1;1HSWBF Renegade Squadron\n\nStarting...\n");

    /* game files: the UMD image read in place, else the extracted folder */
    struct stat st;
    if (stat(RS_ISO, &st) == 0) { extern int vfs_iso_mount(const char *path); if (vfs_iso_mount(RS_ISO) != 0) fatal("game.iso is not a readable UMD image"); game_root = "iso:"; STEP("game files: " RS_ISO); }
    else if (stat(RS_GAME "/PSP_GAME/SYSDIR", &st) == 0) { game_root = RS_GAME; STEP("game files: " RS_GAME); }
    else fatal("Game files not found.\nCopy your UMD image to\n" RS_ISO "\nor extract it so that\n" RS_GAME "/PSP_GAME\nexists.");

    /* first start: the game's audio converted to the 3DS's own format (DSP-ADPCM, convert.c) into sdmc:/3ds/SWBFRS/converted; later
     * starts only check it (seconds).  Before the game heap exists: the converter reads a whole sound bundle (16 MB) at once. */
    {   if (rs_convert_start(game_root, RS_DIR "/converted", 1, 0) == 0) {
            u64 shown = 0; rs_conv_status_t c;
            for (;;) { rs_convert_status(&c); u64 now = osGetTime();
                if (c.phase == RS_CONV_DONE) { STEP("media conversion: done (%d files)", c.files_total); break; }
                if (c.phase == RS_CONV_FAILED) { STEP("media conversion failed: %s", c.message); consoleSelect(&bottom); printf("\x1b[2J\x1b[1;1HAudio conversion failed:\n%s\n(see log.txt)\n", c.message); svcSleepThread(3000000000LL); break; }
                if (now - shown >= 500) { shown = now; consoleSelect(&bottom);
                    if (c.phase == RS_CONV_CONVERTING) printf("\x1b[1;1HSWBF Renegade Squadron\n\nFirst start: converting the audio\nfor the 3DS (once).\n\n%3d%%  file %d of %d\n%-40.40s\n",
                                         c.work_total ? (int)(c.work_done * 100 / c.work_total) : 0, c.files_done + 1, c.files_todo, c.current[0]);
                    else printf("\x1b[1;1HSWBF Renegade Squadron\n\nChecking the converted audio...\n"); }
                if (!aptMainLoop()) { svcExitProcess(); }
                svcSleepThread(100000000LL); }
            consoleSelect(&bottom); printf("\x1b[2J\x1b[1;1HSWBF Renegade Squadron\n\nStarting...\n"); } }

    /* GPU-visible memory of the game: the data image (in this executable), the scratchpad, the VRAM image, the game heap */
    { extern u32 rs_image_w[]; extern const u32 rs_image_size; rs_region_add((u32)(uintptr_t)rs_image_w, rs_image_size); }
    { extern u8 rs_scratchpad[]; rs_region_add((u32)(uintptr_t)rs_scratchpad, 0x4000); }
    u32 vsz = 2u << 20; void *vram = memalign(64, vsz); if (!vram) fatal("out of memory (the PSP video memory image)");
    memset(vram, 0, vsz); rs_vram_base = (u32)(uintptr_t)vram; rs_vram_size = vsz;
    heap_size = (u32)rs_setting_int("RS_HEAP_MB", 22) << 20;
    void *heap = memalign(64, heap_size); if (!heap) fatal("out of memory (the game heap: lower RS_HEAP_MB in settings.txt)");
    heap_base = (u32)(uintptr_t)heap; rs_region_add(heap_base, heap_size);
    STEP("data image %p, VRAM %p, game heap %p (%u MB)", (void *)rs_regions[0].base, vram, heap, heap_size >> 20);

    if (gfx_init() != 0) fatal("renderer initialisation failed (see log.txt)");
    gfx_wake_init(); gfx_thread_register();
    STEP("renderer ready");
    consoleSelect(&bottom); printf("\x1b[2J");

    pthread_attr_t at; pthread_attr_init(&at); pthread_attr_setstacksize(&at, 512 * 1024);
    pthread_t th; if (pthread_create(&th, &at, game_main, 0) != 0) fatal("cannot create the game thread");

    u64 last = 0, presented = 0;
    while (aptMainLoop() && !game_done) {
        u64 now = osGetTime();
        osk_frontend();
        if (gfx_present_due() || now - last >= 250) {               /* once per completed game frame (or 4x a second while it loads) */
            last = now;
            hidScanInput();
            if ((hidKeysHeld() & (KEY_L | KEY_R | KEY_START | KEY_SELECT)) == (KEY_L | KEY_R | KEY_START | KEY_SELECT)) { STEP("exit requested (L+R+START+SELECT)"); break; }
            extern void gfx_c3d_present(void); gfx_c3d_present(); presented++;
            hud_update(presented);
            if (presented == 1 || presented % 1800 == 0) STEP("presented %llu frames", (unsigned long long)presented);
            continue; }
        gfx_pump(4); }
    /* leave at once: exit() would free the heap under the game's threads (their stacks are in it), and the next one to wake faulted
     * (closing the game from the HOME Menu crashed in Luma).  The process exit ends every thread; the DSP is stopped first. */
    STEP("exiting"); fflush(stderr); if (log_file) fflush(log_file);
    /* the services are closed the way exit() does (__appExit: fs, hid, apt (tells the HOME Menu we closed), srv): leaving without
     * that made the system show "An error has occurred" and restart; only the heap is not given back (the threads still use it) */
    { extern void rs_net_exit(void); rs_net_exit(); }                    /* the socket service: left open, the system faulted after the exit */
    ndspExit(); gfxExit(); { extern void __appExit(void); __appExit(); } svcExitProcess();
    return 0; }
