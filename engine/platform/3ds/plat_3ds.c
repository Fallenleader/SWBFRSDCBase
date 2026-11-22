/* Nintendo 3DS platform (libctru): memory, clocks, threads, the controls, files, log and sound.  Written for the Old 3DS
 * (268 MHz ARM11, 64 MB for the application, no C-stick); a New 3DS runs it at its faster clock with the same controls.
 *
 * - The engine's folder is sdmc:/3ds/Aurek (settings.txt, log.txt).  Game files are looked for there, then in the earlier
 *   port's sdmc:/3ds/SWBFRS, so its game.iso / GAME/ and its converted DSP-ADPCM audio (converted/...adp) are used in place.
 * - Memory: the linear heap (GPU-visible: textures, geometry, screens) and the application heap split what is left; a large
 *   allocation the application heap cannot hold falls back to the linear heap.
 * - Controls: the PSP's own layout, one stick.  B = cross, A = circle, Y = square, X = triangle, L / ZL = L, R / ZR = R,
 *   the Circle Pad = the analogue stick, the d-pad, START, SELECT.  No right stick (twin-stick aiming is off).
 * - Sound: the engine's mix (stereo s16) through the DSP (ndsp), four buffers queued; the mixing thread runs on the system
 *   core when the system lets it (else beside the game).  Needs sdmc:/3ds/dspfirm.cdc (dumped once with DSP1). */
#include "../plat.h"
#include <3ds.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <sys/stat.h>

u32 __ctru_linear_heap_size = 30u << 20;
u32 __stacksize__ = 1u << 20;               /* (the main thread's stack: libctru's default is 32 KB) */     /* (the rest of the application's memory is the normal heap) */

#define USER_DIR "sdmc:/3ds/Aurek"
static const char *dirs[] = { USER_DIR, "sdmc:/3ds/SWBFRS" };

extern u32 __ctru_linear_heap;
void *ak_plat_alloc(size_t size, size_t align)
{
    void *p = memalign(align < 8 ? 8 : align, size);
    if (!p && size >= (64u << 10)) p = linearMemAlign(size, align < 16 ? 16 : align);
    return p;
}
void ak_plat_free(void *p)
{
    if (!p) return;
    u32 a = (u32)p;
    if (a >= __ctru_linear_heap && a < __ctru_linear_heap + __ctru_linear_heap_size) linearFree(p); else free(p);
}
u64 ak_plat_time_us(void) { return svcGetSystemTick() * 1000ull / (SYSCLOCK_ARM11 / 1000ull); }
void ak_plat_sleep_us(u64 us) { svcSleepThread((s64)us * 1000); }
int ak_plat_core_count(void) { return 1; }

struct ak_thread { Thread t; };
ak_thread *ak_plat_thread_start(const char *name, ak_thread_fn fn, void *arg, int core, size_t stack)
{
    (void)name;
    ak_thread *t = (ak_thread *)calloc(1, sizeof *t); if (!t) return NULL;
    s32 prio = 0x30; svcGetThreadPriority(&prio, CUR_THREAD_HANDLE);
    t->t = threadCreate((ThreadFunc)fn, arg, stack ? stack : 64 * 1024, prio - 1, core >= 0 ? core : -2, false);
    if (!t->t && core >= 0) t->t = threadCreate((ThreadFunc)fn, arg, stack ? stack : 64 * 1024, prio - 1, -2, false);
    if (!t->t) { free(t); return NULL; }
    return t;
}
void ak_plat_thread_join(ak_thread *t) { if (!t) return; threadJoin(t->t, U64_MAX); threadFree(t->t); free(t); }

void ak_plat_log_write(const char *line)
{
    static FILE *lf;
    if (!lf) lf = fopen(USER_DIR "/log.txt", "w");
    if (lf) {   /* flushed at once for warnings and errors; verbose runs flush every 64 lines (a crash loses at most those) */
        static u32 n; fprintf(lf, "%s\n", line);
        if (strstr(line, "error") || strstr(line, "warning") || ak_log_level_now() < 2 || ++n % 64 == 0) fflush(lf);
    }
}

/* RunFast: flush denormals to zero and default NaNs (the ARM11's VFP otherwise hands denormal numbers to slow software) */
static void runfast(void) { u32 f; __asm__ volatile("vmrs %0, fpscr" : "=r"(f)); f |= (1u << 24) | (1u << 25); __asm__ volatile("vmsr fpscr, %0" :: "r"(f)); }
static void plat_exit(void) { ak_plat_audio_close(); gfxExit(); }
bool ak_plat_init(void)
{
    runfast();
    osSetSpeedupEnable(true);                                       /* (New 3DS: 804 MHz and its L2 cache; nothing on the Old 3DS) */
    APT_SetAppCpuTimeLimit(30);                                     /* lets a thread run on the system core (the sound mix) */
    gfxInitDefault(); atexit(plat_exit);
    mkdir("sdmc:/3ds", 0777); mkdir(USER_DIR, 0777);
    bool n3ds = false; APT_CheckNew3DS(&n3ds);
    AK_INFO("plat", "Nintendo 3DS (%s): linear heap %lu KB, heap free about %lu KB", n3ds ? "New" : "Old",
            (unsigned long)(linearSpaceFree() >> 10), (unsigned long)(mallinfo().fordblks >> 10));
    return true;
}
const char *const *ak_plat_data_dirs(int *n) { *n = 2; return dirs; }
const char *ak_plat_user_dir(void) { return USER_DIR; }

/* the Circle Pad: about +-155 at the rim; a dead zone at the centre, as the PSP stick's */
static f32 pad(int v) { f32 f = v / 150.0f; if (f > 1) f = 1; if (f < -1) f = -1; return f > 0.15f || f < -0.15f ? f : 0.0f; }
void ak_plat_trophy_init(void) {}
void ak_plat_trophy_unlock(int id) { (void)id; }
bool ak_plat_has_right_stick(void) { return false; }

bool ak_plat_poll(ak_input *in)
{
    if (!aptMainLoop()) return false;
    hidScanInput();
    u32 k = hidKeysHeld(), prev = in->held;
    circlePosition cp; hidCircleRead(&cp);
    in->lx = pad(cp.dx); in->ly = pad(cp.dy); in->rx = in->ry = 0;
    static const struct { u32 k, m; } map[] = {
        { KEY_B, AK_BTN_CROSS }, { KEY_A, AK_BTN_CIRCLE }, { KEY_Y, AK_BTN_SQUARE }, { KEY_X, AK_BTN_TRIANGLE },
        { KEY_L, AK_BTN_L }, { KEY_ZL, AK_BTN_L }, { KEY_R, AK_BTN_R }, { KEY_ZR, AK_BTN_R },
        { KEY_START, AK_BTN_START }, { KEY_SELECT, AK_BTN_SELECT },
        { KEY_DUP, AK_BTN_UP }, { KEY_DDOWN, AK_BTN_DOWN }, { KEY_DLEFT, AK_BTN_LEFT }, { KEY_DRIGHT, AK_BTN_RIGHT } };
    u32 h = 0;
    for (size_t i = 0; i < sizeof map / sizeof map[0]; i++) if (k & map[i].k) h |= map[i].m;
    in->held = h; in->pressed = h & ~prev;
    if ((k & (KEY_L | KEY_R | KEY_START | KEY_SELECT)) == (KEY_L | KEY_R | KEY_START | KEY_SELECT)) return false;   /* (quit) */
    return true;
}

/* ---- sound: ndsp channel 0, PCM16 stereo at the engine's rate, NBUF buffers of FRAMES frames */
#define NBUF 4
#define FRAMES 512
static ak_audio_fn afn; static void *auser; static volatile int arun; static ak_thread *athr;
static ndspWaveBuf wb[NBUF]; static s16 *abuf; static LightEvent aev;
static void dsp_cb(void *u) { (void)u; LightEvent_Signal(&aev); }
static void audio_thread(void *arg)
{
    (void)arg; runfast();
    while (arun) {
        for (int i = 0; i < NBUF; i++) {
            if (wb[i].status != NDSP_WBUF_DONE && wb[i].status != NDSP_WBUF_FREE) continue;
            afn(wb[i].data_pcm16, FRAMES, auser);
            DSP_FlushDataCache(wb[i].data_pcm16, FRAMES * 4);
            ndspChnWaveBufAdd(0, &wb[i]);
        }
        LightEvent_Wait(&aev);
    }
}
bool ak_plat_audio_open(u32 rate, ak_audio_fn fn, void *user)
{
    if (R_FAILED(ndspInit())) { AK_WARN("plat", "no sound: the DSP did not start (dump sdmc:/3ds/dspfirm.cdc with DSP1)"); return false; }
    afn = fn; auser = user;
    abuf = (s16 *)linearAlloc(NBUF * FRAMES * 4);
    if (!abuf) { ndspExit(); return false; }
    memset(abuf, 0, NBUF * FRAMES * 4);
    ndspSetOutputMode(NDSP_OUTPUT_STEREO);
    ndspChnReset(0); ndspChnSetInterp(0, NDSP_INTERP_LINEAR); ndspChnSetRate(0, (float)rate); ndspChnSetFormat(0, NDSP_FORMAT_STEREO_PCM16);
    float mix[12] = { 1.0f, 1.0f }; ndspChnSetMix(0, mix);
    memset(wb, 0, sizeof wb);
    for (int i = 0; i < NBUF; i++) { wb[i].data_pcm16 = abuf + i * FRAMES * 2; wb[i].nsamples = FRAMES; wb[i].status = NDSP_WBUF_FREE; }
    LightEvent_Init(&aev, RESET_ONESHOT); ndspSetCallback(dsp_cb, NULL);
    arun = 1; athr = ak_plat_thread_start("aurek_audio", audio_thread, NULL, 1, 32 * 1024);   /* the system core */
    return athr != NULL;
}
void ak_plat_audio_close(void)
{
    if (!athr && !abuf) return;
    arun = 0; LightEvent_Signal(&aev);
    if (athr) { ak_plat_thread_join(athr); athr = NULL; }
    if (abuf) { ndspChnReset(0); ndspExit(); linearFree(abuf); abuf = NULL; }
}
