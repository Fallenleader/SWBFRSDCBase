/* GameCube platform (libogc): memory, time, threads (LWP), the log, the pad, audio (AESND), files on an SD card through libfat
 * (SD2SP2 or an SD Gecko: the first of sd:, sp2:, carda:, cardb: that holds an "aurek" folder).
 *
 * The pad in the twin-stick layout: the stick moves, the C-stick aims; the PSP's buttons: A (the big one) = CROSS, B = SQUARE,
 * X = CIRCLE, Y = TRIANGLE, L = L, R = R, START = START, Z = SELECT, the d-pad as the PSP's.  The button mapping by position is
 * [assumed] (the GameCube's face buttons are not in a diamond). */
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <gccore.h>
#include <aesndlib.h>
#include <ogc/lwp_watchdog.h>
#include <fat.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

/* ---- memory, time, threads */
void *ak_plat_alloc(size_t size, size_t align) { return memalign(align < 32 ? 32 : align, size); }   /* (32: the GPU's and DSP's DMA) */
void ak_plat_free(void *p) { free(p); }
u64 ak_plat_time_us(void) { return ticks_to_microsecs(gettime()); }
void ak_plat_sleep_us(u64 us) { usleep((useconds_t)us); }
int ak_plat_core_count(void) { return 1; }
struct ak_thread { lwp_t t; ak_thread_fn fn; void *arg; void *stack; };
static void *thread_entry(void *p) { ak_thread *t = (ak_thread *)p; t->fn(t->arg); return NULL; }
ak_thread *ak_plat_thread_start(const char *name, ak_thread_fn fn, void *arg, int core, size_t stack)
{
    (void)name; (void)core;
    ak_thread *t = (ak_thread *)calloc(1, sizeof *t);
    if (!t) return NULL;
    t->fn = fn; t->arg = arg; if (!stack) stack = 64u << 10;
    t->stack = memalign(32, stack);
    if (!t->stack || LWP_CreateThread(&t->t, thread_entry, t, t->stack, stack, 64) != 0) { free(t->stack); free(t); return NULL; }
    return t;
}
void ak_plat_thread_join(ak_thread *t) { if (!t) return; LWP_JoinThread(t->t, NULL); free(t->stack); free(t); }

/* ---- files */
static char app_dir[64];
/* the last log lines, drawn over the picture when there is no log file to write (the game on a disc, no SD card): gfx_gx.c */
#define CON_LINES 24
static char con[CON_LINES][96]; static u32 con_n; static bool con_shown;
u32 gc_heap_free(void)                               /* malloc's free blocks + the arena not yet taken */
{
    struct mallinfo mi = mallinfo(); u32 top = (u32)sbrk(0), hi = (u32)SYS_GetArena1Hi();
    return (u32)mi.fordblks + (hi > top ? hi - top : 0);
}
int gc_console(const char **lines, int max)
{
    if (!con_shown && !ak_setting_int("AK_GC_CONSOLE", 0)) return 0;
    int n = (int)(con_n < CON_LINES ? con_n : CON_LINES); if (n > max) n = max;
    for (int i = 0; i < n; i++) lines[i] = con[(con_n - (u32)n + (u32)i) % CON_LINES];
    return n;
}
static const char *dirs[1]; static int ndirs;
void ak_plat_log_write(const char *line)
{
    static FILE *lf; static bool tried;
    {   static const char *flt; static bool got; if (!got && ak_setting_str("AK_LOG", NULL)) { flt = ak_setting_str("AK_GC_CONSOLE_FILTER", NULL); got = true; }
        bool pass = !flt || !*flt || strstr(line, "error") || strstr(line, "warning");
        for (const char *f = flt; !pass && f && *f;) {               /* (AK_GC_CONSOLE_FILTER: words between '|', any of them) */
            const char *e = strchr(f, '|'); size_t n = e ? (size_t)(e - f) : strlen(f); char w[32];
            if (n && n < sizeof w) { memcpy(w, f, n); w[n] = 0; if (strstr(line, w)) pass = true; }
            f = e ? e + 1 : NULL;
        }
        if (pass) {   /* (the on-screen console's copy) */
            u32 k = con_n++ % CON_LINES; snprintf(con[k], sizeof con[k], "%s", line); } }
    if (!lf && !tried && app_dir[0] && strncmp(app_dir, "dvd:", 4)) { char p[96]; snprintf(p, sizeof p, "%s/log.txt", app_dir); lf = fopen(p, "w"); tried = true; }
    con_shown = !lf;
    if (lf) {
        static u32 n; fprintf(lf, "%s\n", line);
        if (strstr(line, "error") || strstr(line, "warning") || ak_log_level_now() < 2 || ++n % 64 == 0) fflush(lf);
    }
}

bool gc_dvd_mount(void);
bool ak_plat_init(void)
{
    VIDEO_Init(); PAD_Init();
    if (fatInitDefault()) {
        static const char *const roots[] = { "sd:", "sp2:", "carda:", "cardb:" };
        for (u32 i = 0; i < sizeof roots / sizeof *roots && !app_dir[0]; i++) {
            char p[64]; snprintf(p, sizeof p, "%s/aurek", roots[i]); struct stat s;
            if (stat(p, &s) == 0) snprintf(app_dir, sizeof app_dir, "%s", p);
        }
    }
    if (!app_dir[0] && gc_dvd_mount()) {               /* the game on a disc image (Swiss, Dolphin): its files/aurek */
        struct stat s; if (stat("dvd:/aurek", &s) == 0) snprintf(app_dir, sizeof app_dir, "dvd:/aurek");
    }
    if (!app_dir[0]) snprintf(app_dir, sizeof app_dir, "sd:/aurek");
    chdir(app_dir);
    dirs[ndirs++] = app_dir;
    return true;
}
const char *const *ak_plat_data_dirs(int *n) { *n = ndirs; return dirs; }
const char *ak_plat_user_dir(void) { return app_dir; }
bool ak_plat_has_right_stick(void) { return true; }
void ak_plat_trophy_init(void) {}
void ak_plat_trophy_unlock(int id) { (void)id; }

static f32 axis(int v, int dead) { if (v > -dead && v < dead) return 0.0f; f32 f = v / 100.0f; return f > 1 ? 1 : f < -1 ? -1 : f; }   /* (the sticks reach about +-100) */
bool ak_plat_poll(ak_input *in)
{
    PAD_ScanPads();
    u32 prev = in->held, b = PAD_ButtonsHeld(0), h = 0;
    if (b & PAD_BUTTON_A) h |= AK_BTN_CROSS;
    if (b & PAD_BUTTON_B) h |= AK_BTN_SQUARE;
    if (b & PAD_BUTTON_X) h |= AK_BTN_CIRCLE;
    if (b & PAD_BUTTON_Y) h |= AK_BTN_TRIANGLE;
    if ((b & PAD_TRIGGER_L) || PAD_TriggerL(0) > 100) h |= AK_BTN_L;
    if ((b & PAD_TRIGGER_R) || PAD_TriggerR(0) > 100) h |= AK_BTN_R;
    if (b & PAD_BUTTON_START) h |= AK_BTN_START;
    if (b & PAD_TRIGGER_Z) h |= AK_BTN_SELECT;
    if (b & PAD_BUTTON_UP) h |= AK_BTN_UP;
    if (b & PAD_BUTTON_DOWN) h |= AK_BTN_DOWN;
    if (b & PAD_BUTTON_LEFT) h |= AK_BTN_LEFT;
    if (b & PAD_BUTTON_RIGHT) h |= AK_BTN_RIGHT;
    in->lx = axis(PAD_StickX(0), 15); in->ly = axis(PAD_StickY(0), 15);
    in->rx = axis(PAD_SubStickX(0), 15); in->ry = axis(PAD_SubStickY(0), 15);
    in->held = h; in->pressed = h & ~prev;
    return true;                                         /* (power off / reset end the program) */
}

/* ---- audio: one streaming stereo voice.  The DSP asks for the next buffer (VOICE_STATE_STREAM, in its interrupt) and gets the one
 * the mixing thread filled; the thread is woken to fill the other.  (The engine's mixer takes locks: it must not run in the interrupt.) */
#define ABUF_FRAMES 1024
static s16 abuf[2][ABUF_FRAMES * 2] __attribute__((aligned(32))), silence[ABUF_FRAMES * 2] __attribute__((aligned(32)));
static volatile int aready[2]; static int acur; static lwpq_t aq; static lwp_t athread; static volatile bool arun;
static ak_audio_fn afn; static void *auser; static AESNDPB *voice;
static void *mix_thread(void *u)
{
    (void)u;
    while (arun) {
        for (int i = 0; i < 2; i++) if (!aready[i]) { afn(abuf[i], ABUF_FRAMES, auser); DCFlushRange(abuf[i], sizeof abuf[i]); aready[i] = 1; }
        LWP_ThreadSleep(aq);
    }
    return NULL;
}
static void voice_cb(AESNDPB *pb, u32 state)
{
    if (state != VOICE_STATE_STREAM) return;
    if (aready[acur]) { AESND_SetVoiceBuffer(pb, abuf[acur], sizeof abuf[0]); aready[acur] = 0; acur ^= 1; }
    else AESND_SetVoiceBuffer(pb, silence, sizeof silence);     /* (the thread fell behind: a gap, not a stale buffer) */
    LWP_ThreadSignal(aq);
}
bool ak_plat_audio_open(u32 rate, ak_audio_fn fn, void *user)
{
    afn = fn; auser = user;
    AESND_Init();
    voice = AESND_AllocateVoice(voice_cb);
    if (!voice) return false;
    memset(silence, 0, sizeof silence); DCFlushRange(silence, sizeof silence);
    aready[0] = aready[1] = 0; acur = 0; arun = true; LWP_InitQueue(&aq);
    static u8 stack[32u << 10] __attribute__((aligned(32)));
    if (LWP_CreateThread(&athread, mix_thread, NULL, stack, sizeof stack, 100) != 0) { AESND_FreeVoice(voice); voice = NULL; return false; }
    while (!aready[0] || !aready[1]) usleep(1000);
    AESND_SetVoiceFormat(voice, VOICE_STEREO16); AESND_SetVoiceFrequency(voice, (f32)rate);
    AESND_SetVoiceVolume(voice, 255, 255); AESND_SetVoiceStream(voice, true);
    AESND_SetVoiceBuffer(voice, silence, sizeof silence);
    AESND_SetVoiceStop(voice, false);
    AESND_Pause(false);
    return true;
}
void ak_plat_audio_close(void)
{
    if (!voice) return;
    AESND_SetVoiceStop(voice, true); AESND_FreeVoice(voice); voice = NULL;
    arun = false; LWP_ThreadSignal(aq); LWP_JoinThread(athread, NULL); LWP_CloseQueue(aq);
}

/* ---- ARAM (16 MB beside the 24): the sounds' ADPCM, read back by DMA as voices play them.  A bump allocator; marks free back. */
static u32 aram_base, aram_end, aram_top; static u8 aram_bounce[4096] __attribute__((aligned(32)));
static void aram_dma(u32 dir, void *mram, u32 aram, u32 n)   /* (32-byte aligned, n a multiple of 32; interrupts off: one user at a time) */
{
    u32 lv = IRQ_Disable();
    if (dir == AR_ARAMTOMRAM) DCInvalidateRange(mram, n); else DCFlushRange(mram, n);
    AR_StartDMA(dir, (u32)mram, aram, n); while (AR_GetDMAStatus()) {}
    if (dir == AR_ARAMTOMRAM) DCInvalidateRange(mram, n);
    IRQ_Restore(lv);
}
u32 ak_plat_aram_store(const void *src, u32 n)
{
    if (!aram_base) { aram_base = aram_top = AR_Init(NULL, 0); aram_end = aram_base + AR_GetSize(); aram_top = (aram_top + 31) & ~31u;
                      AK_INFO("gc", "ARAM: %u KB from 0x%x", (aram_end - aram_base) >> 10, aram_base); }
    u32 sz = (n + 31) & ~31u; if (aram_top + sz + 512 > aram_end) return 0;   /* (+512 kept free after: a block read past the end stays inside) */
    u32 at = aram_top;
    for (u32 o = 0; o < sz; o += sizeof aram_bounce) {
        u32 k = sz - o < sizeof aram_bounce ? sz - o : sizeof aram_bounce;
        memset(aram_bounce, 0, k); memcpy(aram_bounce, (const u8 *)src + o, n - o < k ? n - o : k);
        aram_dma(AR_MRAMTOARAM, aram_bounce, at + o, k);
    }
    aram_top += sz + 512;
    return at;
}
void ak_plat_aram_read(void *dst, u32 aram, u32 n) { aram_dma(AR_ARAMTOMRAM, dst, aram, n); }
u32 ak_plat_aram_mark(void) { return aram_top; }
void ak_plat_aram_release(u32 mark) { if (mark >= aram_base && mark <= aram_top) aram_top = mark; }
