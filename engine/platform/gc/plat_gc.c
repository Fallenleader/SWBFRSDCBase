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
    int on = ak_setting_int("AK_GC_CONSOLE", -1);              /* 1 on, 0 off, -1: on when there is no log file */
    if (on == 0 || (on < 0 && !con_shown)) return 0;
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
/* (a whole number of AESND's 1152-byte transfers: on the GameCube it copies a voice's buffer to ARAM in DSP_STREAMBUFFER_SIZE pieces and
 * pads the last piece with silence - 4096-byte buffers lost 512 bytes of every 4608 played, a buzz and the sound 11% slow) */
#define ABUF_FRAMES (DSP_STREAMBUFFER_SIZE)   /* 1152 stereo frames = 4 transfers */
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

/* ---- the memory card (slot A, else slot B): saves never go to the SD card or the disc.  A file "aurek_<key>": the two comment lines
 * the console's memory card screen shows (32 characters each), "AKSV", the data's length, the data; whole 8 KB sectors.  A card that
 * reads as broken or of the other region's encoding is left alone (never formatted).  [untested on a console: Dolphin's card only] */
#define CARD_GAME "AURE"
#define CARD_MAKER "01"
static u8 card_work[CARD_WORKAREA_SIZE] __attribute__((aligned(32))); static s32 card_chan = -1; static u32 card_sector;
static void card_detached(s32 chan, s32 result) { (void)result; if (chan == card_chan) card_chan = -1; }
static bool card_ready(void)
{
    static bool inited; if (!inited) { CARD_Init(CARD_GAME, CARD_MAKER); inited = true; }
    if (card_chan >= 0) return true;
    for (s32 ch = 0; ch < 2; ch++) {
        s32 mem = 0, sect = 0, r = CARD_ProbeEx(ch, &mem, &sect);
        if (r < 0 && r != CARD_ERROR_BUSY) continue;               /* (nothing there, or not a card: an SD Gecko) */
        r = CARD_Mount(ch, card_work, card_detached);
        if (r == CARD_ERROR_READY) { card_chan = ch; CARD_GetSectorSize(ch, &card_sector); AK_INFO("gc", "memory card in slot %c (%d KB sectors)", 'A' + ch, (int)(card_sector >> 10)); return true; }
        AK_WARN("gc", "the memory card in slot %c cannot be used (%d%s)", 'A' + ch, (int)r, r == CARD_ERROR_BROKEN || r == CARD_ERROR_ENCODING ? ": it needs formatting in the console's memory card screen" : "");
        CARD_Unmount(ch);
    }
    return false;
}
static void card_name(char *out, const char *key) { snprintf(out, CARD_FILENAMELEN, "aurek_%s", key); }
bool ak_plat_memcard_write(const char *key, const char *title, const void *data, u32 n)
{
    if (!card_ready()) { AK_WARN("gc", "no memory card: %s not saved", key); return false; }
    char nm[CARD_FILENAMELEN + 1]; card_name(nm, key);
    u32 size = (72 + n + card_sector - 1) / card_sector * card_sector;
    u8 *buf = (u8 *)memalign(32, size); if (!buf) { AK_WARN("gc", "no memory to save %s", key); return false; }
    memset(buf, 0, size);
    snprintf((char *)buf, 32, "Aurek: SW Battlefront RS"); snprintf((char *)buf + 32, 32, "%s", title ? title : key);
    memcpy(buf + 64, "AKSV", 4); buf[68] = (u8)(n >> 24); buf[69] = (u8)(n >> 16); buf[70] = (u8)(n >> 8); buf[71] = (u8)n;
    memcpy(buf + 72, data, n); DCFlushRange(buf, size);
    card_file f; s32 r = CARD_Open(card_chan, nm, &f);
    if (r == CARD_ERROR_READY && f.len < size) { CARD_Close(&f); CARD_Delete(card_chan, nm); r = CARD_ERROR_NOFILE; }   /* (grown: made anew) */
    if (r == CARD_ERROR_NOFILE) r = CARD_Create(card_chan, nm, size, &f);
    if (r != CARD_ERROR_READY) { AK_WARN("gc", "%s: the memory card refused it (%d%s)", key, (int)r, r == CARD_ERROR_INSSPACE || r == CARD_ERROR_NOENT ? ": not enough free blocks" : ""); free(buf); return false; }
    /* one sector per call: libogc's CARD_Write writes only the first sector of what it is given (card.c __write_callback) */
    for (u32 o = 0; o < size && r == CARD_ERROR_READY; o += card_sector) r = CARD_Write(&f, buf + o, card_sector, o);
    if (r == CARD_ERROR_READY) {                                    /* the comment lines for the memory card screen; no icon */
        card_stat st; if (CARD_GetStatus(card_chan, f.filenum, &st) == CARD_ERROR_READY) {
            st.comment_addr = 0; st.icon_addr = 0xFFFFFFFFu; st.banner_fmt = 0; st.icon_fmt = 0; st.icon_speed = 0;
            CARD_SetStatus(card_chan, f.filenum, &st);
        }
    }
    CARD_Close(&f); free(buf);
    if (r != CARD_ERROR_READY) { AK_WARN("gc", "%s: the memory card write failed (%d)", key, (int)r); return false; }
    AK_INFO("gc", "saved %s to the memory card in slot %c (%u blocks)", key, 'A' + card_chan, size / 8192);
    return true;
}
s32 ak_plat_memcard_read(const char *key, void *out, u32 cap)
{
    if (!card_ready()) return -1;
    char nm[CARD_FILENAMELEN + 1]; card_name(nm, key);
    card_file f; if (CARD_Open(card_chan, nm, &f) != CARD_ERROR_READY) return -1;
    u32 flen = (u32)f.len; u8 *buf = (u8 *)memalign(32, flen); s32 got = -1;   /* (f.len: CARD_Read changes it) */
    s32 r = buf ? CARD_ERROR_READY : CARD_ERROR_FATAL_ERROR;
    if (buf) DCInvalidateRange(buf, flen);
    for (u32 o = 0; o < flen && r == CARD_ERROR_READY; o += card_sector) r = CARD_Read(&f, buf + o, card_sector, o);   /* (sector by sector, as the writes) */
    if (r == CARD_ERROR_READY && !memcmp(buf + 64, "AKSV", 4)) {
        u32 n = (u32)buf[68] << 24 | (u32)buf[69] << 16 | (u32)buf[70] << 8 | buf[71];
        if (n <= flen - 72) { got = (s32)(n < cap ? n : cap); memcpy(out, buf + 72, (size_t)got); }
    }
    CARD_Close(&f); free(buf);
    return got;
}
bool ak_plat_memcard_delete(const char *key)
{
    if (!card_ready()) return false;
    char nm[CARD_FILENAMELEN + 1]; card_name(nm, key);
    return CARD_Delete(card_chan, nm) == CARD_ERROR_READY;
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
