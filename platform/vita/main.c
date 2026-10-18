/* PS Vita platform: memory, threads, settings, logging, input, audio output and the frontend loop for the decompiled game.
 *
 * Files (ux0:data/SWBFRS/):
 *   GAME/            the extracted UMD (GAME/PSP_GAME/..., the layout inside the image), or else
 *   game.iso         the UMD image itself (used only when GAME/PSP_GAME is absent)
 *   settings.txt     optional KEY=VALUE lines (see platform/vita/README.md)
 *   log.txt          log of the last session
 *
 * Memory: the game heap (64 MB, the top 4 MB being the PSP's "volatile" memory), the VRAM image (8 MB) and the data image (in the
 * executable) are the memory the game hands to the GPU.  GPU command lists carry 28-bit addresses, so these blocks must not share their
 * low 28 bits (platform/common/psp_impl.h): the heap is re-allocated until it does not. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <pthread.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/kernel/sysmem.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/cpu.h>
#include <psp2/io/stat.h>
#include <psp2/io/fcntl.h>
#include <psp2/ctrl.h>
#include <psp2/audioout.h>
#include <psp2/power.h>
#include <psp2/apputil.h>
#include <psp2/system_param.h>
#include <psp2/common_dialog.h>
#include <psp2/ime_dialog.h>
#include "vfs.h"
#include "psp_impl.h"
#include "gfx.h"
#include "gxm_core.h"

int _newlib_heap_size_user = 96 * 1024 * 1024;                 /* the platform layer's own allocations (decoders, vertex batches, ...) */
unsigned int sceUserMainThreadStackSize = 1024 * 1024;          /* the frontend thread interprets GE command lists */

#define RS_DIR "ux0:data/SWBFRS"
#define RS_GAME RS_DIR "/GAME"                                  /* extracted UMD: GAME/PSP_GAME/... (the ISO's own layout) */
#define RS_ISO RS_DIR "/game.iso"                               /* else the UMD image itself */
const char *rs_platform_save_dir(void){ return RS_DIR "/SAVEDATA"; }   /* game profiles (hle.c savedata) */
u8 *g_mem;                                                      /* NULL: the SDK layer works on native addresses */
volatile int rs_prof_on;

/* ---------------------------------------------------------------- per-thread processor state (RS_TLS_STRUCT, see src/game/rs_base.h) */
static __thread rs_tls_t tls_block;
rs_tls_t *rs_tls(void){ return &tls_block; }

/* ---------------------------------------------------------------- settings: ux0:data/SWBFRS/settings.txt */
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
static const struct { const char *k, *v; } vita_defaults[] = {
    {"RS_RES_SCALE", "2"},                                      /* render at 960x544 */
};
const char *rs_platform_setting(const char *key){
    for (int i = 0; i < nkv; i++) if (!strcmp(kv[i].k, key)) return kv[i].v;
    for (unsigned i = 0; i < sizeof vita_defaults / sizeof vita_defaults[0]; i++) if (!strcmp(vita_defaults[i].k, key)) return vita_defaults[i].v;
    return NULL; }
extern int rs_setting_int(const char *k, int d);

/* ---------------------------------------------------------------- logging: stderr -> ux0:data/SWBFRS/log.txt (everything up to RS_LOG_MB) */
static FILE *log_file; static long log_bytes, log_cap = 4L << 20;
static ssize_t log_write(void *ck, const char *buf, size_t n){ (void)ck;
    if (log_file && log_bytes < log_cap) { fwrite(buf, 1, n, log_file); log_bytes += (long)n; if (memchr(buf, '\n', n)) fflush(log_file); }
    return (ssize_t)n; }
static void log_init(void){
    sceIoMkdir(RS_DIR, 0777);
    log_file = fopen(RS_DIR "/log.txt", "w");
    log_cap = (long)rs_setting_int("RS_LOG_MB", 4) << 20;
    cookie_io_functions_t io = {0, log_write, 0, 0}; FILE *c = fopencookie(0, "w", io);
    if (c) { setvbuf(c, NULL, _IOLBF, 0); stderr = c; } else if (log_file) stderr = log_file; }

/* ---------------------------------------------------------------- memory */
#define HEAP_SIZE (64u << 20)
#define VRAM_SIZE (8u << 20)
static int low28_clash(u32 base, u32 size){
    u32 a0 = base & 0x0FFFFFFFu;
    if ((u32)(a0 - 0x04000000u) < VRAM_SIZE || (u32)(0x04000000u - a0) < size) return 1;     /* the VRAM tag range 0x04000000.. */
    if (rs_vram_base != 0x04000000u) { u32 v0 = rs_vram_base & 0x0FFFFFFFu;                    /* the VRAM image's own address (gfx_vram) */
        if ((u32)(a0 - v0) < rs_vram_size || (u32)(v0 - a0) < size) return 1; }
    for (int i = 0; i < rs_nregions; i++) { u32 b0 = rs_regions[i].base & 0x0FFFFFFFu;
        if ((u32)(a0 - b0) < rs_regions[i].size || (u32)(b0 - a0) < size) return 1; }
    return 0; }
static void *alloc_block(const char *name, u32 size, int gpu_visible){
    SceUID spare[8]; int ns = 0; void *res = NULL;
    for (int tries = 0; tries < 8 && !res; tries++) {
        SceUID uid = sceKernelAllocMemBlock(name, SCE_KERNEL_MEMBLOCK_TYPE_USER_RW, size, NULL);
        if (uid < 0) { fprintf(stderr, "[VITA] cannot allocate %s (%u MB): 0x%08X\n", name, size >> 20, (unsigned)uid); break; }
        void *p = NULL; sceKernelGetMemBlockBase(uid, &p);
        if (gpu_visible && low28_clash((u32)(uintptr_t)p, size)) { fprintf(stderr, "[VITA] %s at %p clashes with another GPU-visible block (28-bit addresses); retrying\n", name, p); spare[ns++] = uid; continue; }
        res = p; }
    for (int i = 0; i < ns; i++) sceKernelFreeMemBlock(spare[i]);
    return res; }

/* thread stacks: the kernel places them; register each one as a GPU-visible region when it does not clash (best effort) */
void rs_thread_init(void){
    static u8 blocks[64][256] __attribute__((aligned(16))); static int n;
    rs_tls()->psp_k0 = (u32)(uintptr_t)blocks[__sync_fetch_and_add(&n, 1) & 63];
    SceKernelThreadInfo ti; memset(&ti, 0, sizeof ti); ti.size = sizeof ti;
    if (sceKernelGetThreadInfo(sceKernelGetThreadId(), &ti) >= 0 && ti.stack && ti.stackSize > 0) {
        u32 b = (u32)(uintptr_t)ti.stack, sz = (u32)ti.stackSize;
        if (!low28_clash(b, sz) && rs_nregions < RS_MAX_REGIONS) rs_region_add(b, sz); } }
/* CPU cores.  The Vita gives an application 3 cores:
 *   core 0  this thread: the frontend and all GPU work (GE list processing, vitaGL)
 *   core 1  the game's main thread (user_main: game logic, building the GPU lists)
 *   core 2  the game's other threads (audio mixing and ATRAC decoding run outside the big lock there), the GE interrupt thread, the
 *           audio output thread
 * so game logic, rendering and audio run at the same time instead of sharing cores the kernel picks. */
void rs_thread_cores(const char *name){
    static int pin = -1; if (pin < 0) pin = rs_setting_int("RS_CPU_PIN", 1);
    if (!pin) { fprintf(stderr, "[VITA] thread '%s': CPU affinity left to the kernel (RS_CPU_PIN=0)\n", name); return; }
    int mask = !strcmp(name, "frontend") ? SCE_KERNEL_CPU_MASK_USER_0 : (!strcmp(name, "user_main") ? SCE_KERNEL_CPU_MASK_USER_1 : SCE_KERNEL_CPU_MASK_USER_2);
    if (!strncmp(name, "media conversion ", 17)) mask = SCE_KERNEL_CPU_MASK_USER_0 << (atoi(name + 17) % 3);    /* one worker per core */
    SceUID me = sceKernelGetThreadId(); int before = sceKernelGetThreadCpuAffinityMask(me); int r = sceKernelChangeThreadCpuAffinityMask(me, mask);
    fprintf(stderr, "[VITA] thread '%s': CPU affinity %06x -> %06x%s\n", name, (unsigned)before, (unsigned)mask, r < 0 ? " FAILED" : ""); }
void rs_thread_attr(pthread_attr_t *at, u32 psp_stack){ (void)psp_stack; pthread_attr_setstacksize(at, 1024 * 1024); }

void rs_break(u32 code, u32 where){
    fprintf(stderr, "[GAME] break/trap code 0x%x at guest pc %08x\n", code, where); fflush(stderr);
    sceKernelExitProcess(3); for (;;) sceKernelDelayThread(1000000); }

/* ---------------------------------------------------------------- input */
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
static u8 dz(u8 v){ int d = (int)v - 128; if (d > -28 && d < 28) return 128; return v; }     /* analog dead zone */
void rs_backend_read_pad(rs_pad_t *p){
    SceCtrlData d; memset(&d, 0, sizeof d); sceCtrlPeekBufferPositive(0, &d, 1);
    u32 b = 0;
    if (d.buttons & SCE_CTRL_SELECT)   b |= 0x000001;
    if (d.buttons & SCE_CTRL_START)    b |= 0x000008;
    if (d.buttons & SCE_CTRL_UP)       b |= 0x000010;
    if (d.buttons & SCE_CTRL_RIGHT)    b |= 0x000020;
    if (d.buttons & SCE_CTRL_DOWN)     b |= 0x000040;
    if (d.buttons & SCE_CTRL_LEFT)     b |= 0x000080;
    if (d.buttons & SCE_CTRL_LTRIGGER) b |= 0x000100;
    if (d.buttons & SCE_CTRL_RTRIGGER) b |= 0x000200;
    if (d.buttons & SCE_CTRL_TRIANGLE) b |= 0x001000;
    if (d.buttons & SCE_CTRL_CIRCLE)   b |= 0x002000;
    if (d.buttons & SCE_CTRL_CROSS)    b |= 0x004000;
    if (d.buttons & SCE_CTRL_SQUARE)   b |= 0x008000;
    extern volatile int rs_dialog_active; if (rs_dialog_active) { b = 0; d.lx = d.ly = d.rx = d.ry = 128; }   /* the keyboard has the input */
    p->buttons = b; p->lx = dz(d.lx); p->ly = dz(d.ly); p->rx = dz(d.rx); p->ry = dz(d.ry); }

/* ---------------------------------------------------------------- on-screen keyboard: the Vita's IME dialog
 * The game thread asks (rs_osk_begin / rs_osk_poll, see hle.c); the frontend thread runs the dialog, because system dialogs are drawn
 * by the renderer's frame loop (sceCommonDialogUpdate / vglSwapBuffers). */
volatile int rs_dialog_active;                                   /* a system dialog is on screen: the renderer draws it */
static volatile int osk_req;                                    /* 0 idle, 1 requested, 2 running, 3 entered, 4 cancelled */
static SceWChar16 osk_title[128], osk_init[512], osk_buf[512]; static int osk_max;
int rs_osk_begin(const u16 *title, const u16 *initial, int max_len){
    if (max_len <= 0) return 0; if (max_len > 511) max_len = 511;
    int i; for (i = 0; i < 127 && title && title[i]; i++) osk_title[i] = title[i]; osk_title[i] = 0;
    for (i = 0; i < max_len && initial && initial[i]; i++) osk_init[i] = initial[i]; osk_init[i] = 0;
    osk_max = max_len; __sync_synchronize(); osk_req = 1; return 1; }
int rs_osk_poll(u16 *out, int max_len){
    int r = osk_req;
    if (r == 3) { int i; for (i = 0; i < max_len - 1 && osk_buf[i]; i++) out[i] = osk_buf[i]; out[i] = 0; osk_req = 0; return 1; }
    if (r == 4) { osk_req = 0; return -1; }
    return 0; }
static void osk_frontend(void){
    if (osk_req == 1) {
        SceImeDialogParam p; sceImeDialogParamInit(&p);
        p.supportedLanguages = 0; p.languagesForced = SCE_FALSE; p.type = SCE_IME_TYPE_DEFAULT; p.option = 0;
        p.textBoxMode = SCE_IME_DIALOG_TEXTBOX_MODE_DEFAULT; p.title = osk_title; p.maxTextLength = (SceUInt32)osk_max;
        p.initialText = osk_init; p.inputTextBuffer = osk_buf; memset(osk_buf, 0, sizeof osk_buf);
        int r = sceImeDialogInit(&p);
        if (r < 0) { fprintf(stderr, "[VITA] IME dialog failed to open: 0x%08X\n", (unsigned)r); osk_req = 4; }
        else { osk_req = 2; rs_dialog_active = 1; } }
    else if (osk_req == 2 && sceImeDialogGetStatus() == SCE_COMMON_DIALOG_STATUS_FINISHED) {
        SceImeDialogResult res; memset(&res, 0, sizeof res); sceImeDialogGetResult(&res); sceImeDialogTerm(); rs_dialog_active = 0;
        __sync_synchronize(); osk_req = res.button == SCE_IME_DIALOG_BUTTON_ENTER ? 3 : 4; } }

/* ---------------------------------------------------------------- audio: one BGM port, 44.1 kHz stereo, 1024 frames per write (blocking = paced) */
static int aport = -1;
int rs_audio_host_open(int rate){
    aport = sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_BGM, 1024, rate, SCE_AUDIO_OUT_MODE_STEREO);
    if (aport < 0) { fprintf(stderr, "[VITA] audio port failed: 0x%08X\n", (unsigned)aport); return 0; }
    int vol[2] = {SCE_AUDIO_VOLUME_0DB, SCE_AUDIO_VOLUME_0DB}; sceAudioOutSetVolume(aport, (SceAudioOutChannelFlag)(SCE_AUDIO_VOLUME_FLAG_L_CH | SCE_AUDIO_VOLUME_FLAG_R_CH), vol); return 1; }
void rs_audio_host_write(const s16 *stereo, int frames){ (void)frames; if (aport >= 0) sceAudioOutOutput(aport, stereo); }

/* ---------------------------------------------------------------- profiler output (RS_PERF_LOG=1 -> ux0:data/SWBFRS/perf.log) */
void rs_perf_write(const char *line){ static FILE *f; static int on = -1; if (on < 0) on = rs_setting_int("RS_PERF_LOG", 0); if (!on) return;
    if (!f) { f = fopen(RS_DIR "/perf.log", "a"); if (f) fputs("==== new session ====\n", f); } if (f) { fputs(line, f); fflush(f); } }
void rs_perf_mem(char *b, int n){ struct mallinfo mi = mallinfo(); SceKernelFreeMemorySizeInfo fm; memset(&fm, 0, sizeof fm); fm.size = sizeof fm; sceKernelGetFreeMemorySize(&fm);
    snprintf(b, (size_t)n, "heap used %.1f of %d MB; free: user %d KB, CDRAM %d KB", mi.uordblks / 1048576.0, _newlib_heap_size_user >> 20, fm.size_user / 1024, fm.size_cdram / 1024); }

/* ---------------------------------------------------------------- debug HUD (RS_HUD=1) */
extern volatile int g_frames;
static u64 hud_presented;
static const char *const *hud_update(int *nl){
    static int on = -1; if (on < 0) on = rs_setting_int("RS_HUD", 0); *nl = 0; if (!on) return NULL;
    static u64 t_last, pres_last, gfr_last; static rs_perf_t p_last; static char l[3][96]; static const char *lines[3] = {l[0], l[1], l[2]};
    u64 now = sceKernelGetProcessTimeWide();
    if (!t_last) { t_last = now; p_last = rs_perf; pres_last = hud_presented; gfr_last = (u64)g_frames; snprintf(l[0], sizeof l[0], "RS"); l[1][0] = l[2][0] = 0; }
    else if (now - t_last >= 500000) {
        double dt = (double)(now - t_last); rs_perf_t p = rs_perf;
        if (p.job_us < p_last.job_us) p_last = p;
        double fps = (hud_presented - pres_last) * 1e6 / dt, gfps = ((u64)g_frames - gfr_last) * 1e6 / dt;
        double gl = (double)(p.job_us - p_last.job_us + p.present_us - p_last.present_us) / dt;
        double idle = (double)(p.run_wait_us - p_last.run_wait_us + p.sleep_us - p_last.sleep_us) / dt;
        double cpu = 1.0 - idle; if (cpu < 0) cpu = 0; if (cpu > 1) cpu = 1; if (gl > 1) gl = 1;
        struct mallinfo mi = mallinfo();
        snprintf(l[0], sizeof l[0], "FPS %.1f  VBLANK %.1f", fps, gfps);
        snprintf(l[1], sizeof l[1], "GAME CPU %.0f%%  GE+GPU THREAD %.0f%%", cpu * 100, gl * 100);
        snprintf(l[2], sizeof l[2], "HEAP %.0f/%d MB", mi.uordblks / 1048576.0, _newlib_heap_size_user >> 20);
        t_last = now; p_last = p; pres_last = hud_presented; gfr_last = (u64)g_frames; }
    *nl = 3; return lines; }

/* ---------------------------------------------------------------- game thread */
void hle_init(const char *root, u32 lo, u32 hi); void hle_wait_all_threads(void); void hle_report(void);
rv_t func_08A85AB0(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
static u32 heap_base;
static void *game_main(void *unused){
    (void)unused;
    rs_thread_init();
    hle_init(RS_GAME, heap_base, heap_base + HEAP_SIZE);
    const char *path = "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN";
    static char argbuf[64]; strcpy(argbuf, path);
    fprintf(stderr, "[RS] decompiled game: module_start\n");
    rv_t r = func_08A85AB0((u32)strlen(path) + 1, (u32)(uintptr_t)argbuf, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    fprintf(stderr, "[RS] module_start returned %d; waiting for game threads\n", (int)r.v0);
    hle_wait_all_threads(); hle_report(); sceKernelExitProcess(0); return 0; }

/* ---------------------------------------------------------------- hang watchdog: ux0:data/SWBFRS/hang.txt
 * When the game stops reaching vertical blanks for 8 s (after it has started), writes what every game thread, the big lock, the GE and
 * the renderer are doing, then again every 15 s while it stays stuck (5 reports at most).  Written with sceIo only: a stuck thread may
 * hold the C library's FILE lock. */
static volatile unsigned fe_beat, fe_stage;                    /* frontend loop: iterations, and where it is (1 dialogs, 2 present, 3 GE jobs) */
static int wd_entry(SceSize args, void *argp){
    (void)args; (void)argp; extern int rs_hang_report(char *, int); extern int gfx_jobs_report(char *, int);
    static char b[8192]; int last_fr = -1, stall = 0, reports = 0; unsigned last_beat = 0;
    for (;;) {
        sceKernelDelayThread(1000000);
        int fr = g_frames; unsigned beat = fe_beat;
        if (fr != last_fr || fr == 0) { last_fr = fr; stall = 0; last_beat = beat; continue; }
        stall++;
        if (stall < 8 || reports >= 5 || (stall - 8) % 15) continue;
        reports++;
        int o = snprintf(b, sizeof b, "==== no vertical blank for %d s (report %d) ====\nfrontend: %u loop iterations in that time, now in %s\n", stall, reports, beat - last_beat,
                         fe_stage == 1 ? "system dialogs" : fe_stage == 2 ? "present" : fe_stage == 3 ? "GE jobs (gfx_pump)" : "?");
        o += gfx_jobs_report(b + o, (int)sizeof b - o);
        if (o < (int)sizeof b) o += rs_hang_report(b + o, (int)sizeof b - o);
        if (o > (int)sizeof b - 1) o = (int)sizeof b - 1;
        SceUID fd = sceIoOpen(RS_DIR "/hang.txt", SCE_O_WRONLY | SCE_O_CREAT | SCE_O_APPEND, 0666);
        if (fd >= 0) { sceIoWrite(fd, b, (SceSize)o); sceIoClose(fd); } } }
static void watchdog_start(void){
    SceUID t = sceKernelCreateThread("rs_watchdog", wd_entry, 0x10000100 - 16, 0x4000, 0, SCE_KERNEL_CPU_MASK_USER_ALL, NULL);
    if (t < 0) t = sceKernelCreateThread("rs_watchdog", wd_entry, 0x10000100, 0x4000, 0, SCE_KERNEL_CPU_MASK_USER_ALL, NULL);
    if (t >= 0) sceKernelStartThread(t, 0, NULL); else fprintf(stderr, "[VITA] no watchdog thread: 0x%08X\n", (unsigned)t); }

static void fatal(const char *msg){ fprintf(stderr, "[VITA] FATAL: %s\n", msg); fflush(stderr); sceKernelDelayThread(500000); sceKernelExitProcess(1); }

int main(void){
    { extern void rs_stdio_lock_init(void); rs_stdio_lock_init(); }      /* before anything opens a file or another thread exists */
    settings_load(); log_init();
    u64 t0 = sceKernelGetProcessTimeWide();
#define STEP(...) do { fprintf(stderr, "[VITA] %7.3fs ", (sceKernelGetProcessTimeWide() - t0) / 1e6); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n"); } while (0)
    STEP("SWBFRSDCBase (decompiled Star Wars Battlefront: Renegade Squadron) starting");
    scePowerSetArmClockFrequency(444); scePowerSetBusClockFrequency(222); scePowerSetGpuClockFrequency(222); scePowerSetGpuXbarClockFrequency(166);
    sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG);
    { SceKernelFreeMemorySizeInfo mi; memset(&mi, 0, sizeof mi); mi.size = sizeof mi; sceKernelGetFreeMemorySize(&mi);
      STEP("free memory: user %d KB, CDRAM %d KB, phycont %d KB", mi.size_user / 1024, mi.size_cdram / 1024, mi.size_phycont / 1024); }
    {   /* game files: the extracted folder if present, else the ISO image */
        SceIoStat st;
        if (sceIoGetstat(RS_GAME "/PSP_GAME/SYSDIR", &st) >= 0) STEP("game files: " RS_GAME);
        else if (sceIoGetstat(RS_ISO, &st) >= 0) { if (vfs_iso_mount(RS_ISO) != 0) fatal(RS_ISO " is not a readable ISO 9660 image"); STEP("game files: " RS_ISO); }
        else fatal("game files not found: extract the UMD so that " RS_GAME "/PSP_GAME exists, or copy the UMD image to " RS_ISO); }
    {   /* system dialogs (the on-screen keyboard) */
        SceAppUtilInitParam ip; SceAppUtilBootParam bp; memset(&ip, 0, sizeof ip); memset(&bp, 0, sizeof bp); sceAppUtilInit(&ip, &bp);
        SceCommonDialogConfigParam cp; sceCommonDialogConfigParamInit(&cp);
        int v = 0; sceAppUtilSystemParamGetInt(SCE_SYSTEM_PARAM_ID_LANG, &v); cp.language = (SceSystemParamLang)v;
        v = 0; sceAppUtilSystemParamGetInt(SCE_SYSTEM_PARAM_ID_ENTER_BUTTON, &v); cp.enterButtonAssign = (SceSystemParamEnterButtonAssign)v;
        sceCommonDialogSetConfigParam(&cp); }

    /* GPU-visible memory: the data image (in this executable), the scratchpad, the VRAM image, the game heap */
    { extern u32 rs_image_w[]; extern const u32 rs_image_size; rs_region_add((u32)(uintptr_t)rs_image_w, rs_image_size); }
    { extern u8 rs_scratchpad[]; rs_region_add((u32)(uintptr_t)rs_scratchpad, 0x4000); }
    void *vram = alloc_block("rs_vram", VRAM_SIZE, 1); if (!vram) fatal("cannot allocate the VRAM image");
    memset(vram, 0, VRAM_SIZE); rs_vram_base = (u32)(uintptr_t)vram; rs_vram_size = VRAM_SIZE;
    void *heap = alloc_block("rs_heap", HEAP_SIZE, 1); if (!heap) fatal("cannot allocate the game heap (64 MB)");
    heap_base = (u32)(uintptr_t)heap; rs_region_add(heap_base, HEAP_SIZE);
    STEP("data image %p, VRAM %p, heap %p", (void *)rs_regions[0].base, vram, heap);

    /* renderer (this thread owns the GPU) */
    rs_thread_cores("frontend");
    if (gxm_init(RS_DIR "/shaders") != 0) fatal(gxm_error());
    STEP("GPU ready");
    {   /* start-up media screen: converted audio (PCM) and video (MP4) checked every boot, anything missing converted */
        extern int rs_convert_screen(const char *game_root, const char *out_dir);
        int r = rs_convert_screen(vfs_iso_active() ? "iso:" : RS_GAME, RS_DIR "/converted");
        STEP(r == 0 ? "media ready" : "media conversion skipped (%d): original media only", r); }
    { extern int rs_renderer_start(void); if (rs_renderer_start() != 0) fatal("renderer initialisation failed (see the lines above)"); }
    gfx_wake_init(); gfx_thread_register();
    STEP("renderer ready");

    pthread_attr_t at; pthread_attr_init(&at); pthread_attr_setstacksize(&at, 1024 * 1024);
    watchdog_start();
    pthread_t th; if (pthread_create(&th, &at, game_main, 0) != 0) fatal("cannot create the game thread");

    u64 last = 0, frames = 0;
    for (;;) {
        u64 now = sceKernelGetProcessTimeWide(); fe_beat++;
        fe_stage = 1; osk_frontend(); fe_stage = 2;
        if (gfx_present_due() || now - last >= 250000 || (rs_dialog_active && now - last >= 16000)) {          /* present once per completed game frame (or 4x a second while it loads) */
            last = now;
            rs_pad_t p; rs_backend_read_pad(&p);
            if ((p.buttons & 0x30B) == 0x30B) { STEP("exit requested (L+R+START+SELECT)"); sceKernelExitProcess(0); }
            { extern void rs_renderer_present(const char *const *lines, int n); int n = 0; const char *const *l = hud_update(&n); rs_renderer_present(l, n); } hud_presented++;
            if (++frames == 1 || frames % 1800 == 0) STEP("presented %llu frames", (unsigned long long)frames);
            continue; }
        fe_stage = 3; gfx_pump(4); }
    return 0; }
