/* The game's remaining system calls, as native handlers written against its register block and bound straight to its calls (RS_BIND,
 * rs_bind.h): display pacing, controller, graphics lists, dialogs and saves, audio output, sound and movie entry points.  No firmware is
 * emulated: every call the game imports is native (native_*.c, these bindings, net.c); mkglue.py generates glue only for an import
 * nothing handles, which then reports itself as unimplemented. */
#define _GNU_SOURCE
#include "psp_impl.h"
#include "guest.h"
#include "plat.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <errno.h>
#include <unistd.h>
#include <time.h>
#include <sched.h>
#include <dirent.h>
#include <sys/stat.h>
#include <strings.h>

/* environment switches read on every frame: looked up once */
static const char *envc(const char *k, const char **slot, int *done){ if (!*done) { *slot = getenv(k); *done = 1; } return *slot; }
#define ENV_ONCE(k) ({ static const char *v_; static int d_; envc(k, &v_, &d_); })
#define A0 (c->r[4])
#define A1 (c->r[5])
#define A2 (c->r[6])
#define A3 (c->r[7])
#define T0 (c->r[8])
#define T1 (c->r[9])
#define V0 (c->r[2])
#define V1 (c->r[3])
#ifdef __vita__
#define GUEST_THREAD_STACK (1u << 20)
#else
#define GUEST_THREAD_STACK (16u << 20)
#endif
#define ERR_NOENT 0x80010002u
#define ERR_SEMA_ZERO 0x800201ADu
#define ERR_TIMEOUT 0x800201A8u

#include "guest_sched.h"
#define NSLOT 512                                    /* call slots (profiler, hang reports) */
pthread_mutex_t big = PTHREAD_MUTEX_INITIALIZER;
volatile int big_waiting;
rs_cond_t gcv = RS_COND_INIT;
volatile pthread_t big_owner;
#ifdef RS_TLS_STRUCT
rs_tls_t *rs_tls_cur;
#endif
static char g_root[1024] = ".";
const char *rs_game_root(void){ return g_root; }                   /* the extracted game folder (game_ui.c) */
u32 hle_heap_lo, hle_heap_hi;
volatile int g_ge_lists, g_alive_threads;
static int trace_all;
int rs_display_read(u32 *out);   /* ge.c */

volatile int g_frames;
/* guest clock.  RS_TIMESCALE scales it (testing: < 1 makes each real frame look shorter to the game = emulates a higher frame rate);
 * RS_TIMESCALE_FROM=<frame> applies the scale only from that vblank on (keeps loading fast); the clock stays continuous. */
static u64 now_us(void){ struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t); u64 real = (u64)t.tv_sec * 1000000ull + t.tv_nsec / 1000;
    static double scale = -1; static int from, from_sec; static u64 base_real, base_game; static int on;
    if (scale < 0) { const char *e = getenv("RS_TIMESCALE"); scale = e ? atof(e) : 1.0; if (scale <= 0) scale = 1.0; e = getenv("RS_TIMESCALE_FROM"); from = e ? atoi(e) : 0; base_real = real; base_game = real; on = from <= 0;
        e = getenv("RS_TIMESCALE_FROM_SEC"); if (e) { from_sec = atoi(e); on = 0; from = 1 << 30; } }
    if (!on && from_sec > 0 && real - base_real >= (u64)from_sec * 1000000ull) { on = 1; base_game = real; base_real = real; }
    if (!on) { if (g_frames >= from) { on = 1; base_game = real; base_real = real; } else return real; }
    return base_game + (u64)((double)(real - base_real) * scale); }
/* the clock the game reads.  RS_VCLOCK=1 (testing, with RS_FAST=1 and a frame-numbered RS_SCRIPT): it advances 1/60 s per vertical
 * blank plus 1 us per read, independent of the host's speed, so two runs of different builds can be compared frame by frame. */
/* RS_VCLOCK=2 (AI training): the virtual clock only while a match is being played (rs_vclock_match, from game_patches.c); the real
 * clock otherwise, so loading and the front end - which wait on the clock with short sleeps, and Windows sleeps last at least ~15 ms -
 * run at their normal speed.  The clock stays continuous across the switches. */
volatile int rs_vclock_match;
static u64 guest_us(void){ static int vc = -1; static u64 reads; if (vc < 0) { const char *e = getenv("RS_VCLOCK"); vc = e ? atoi(e) : 0; }
    if (vc == 1) return (u64)g_frames * 16667ull + ++reads;
    if (vc != 2) return now_us();
    static pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER; static int virt; static u64 last, base_v, off_r; static int f0;
    pthread_mutex_lock(&m);
    int want = rs_vclock_match != 0; u64 t;
    if (want && !virt) { virt = 1; base_v = last; f0 = g_frames; reads = 0; }
    if (!want && virt) { virt = 0; off_r = last - now_us(); }
    t = virt ? base_v + (u64)(g_frames - f0) * 16667ull + ++reads : now_us() + off_r;
    if (t < last) t = last + 1;
    last = t; pthread_mutex_unlock(&m); return t; }
#include "gfx.h"
void rs_guest_unlock(void){ pthread_mutex_unlock(&big); }
void rs_guest_lock(void){ big_lock(); }
int rs_guest_trylock(void){ if (pthread_mutex_trylock(&big)) return 0; big_owner = pthread_self(); return 1; }
void unlocked_sleep(unsigned us){ u64 t = rs_perf_us(); pthread_mutex_unlock(&big); usleep(us); big_lock(); rs_perf.sleeps++; rs_perf.sleep_us += rs_perf_us() - t; }
/* Let another guest thread run.  On the Vita sched_yield() is a 1 ms sleep (pthread-embedded: pte_osThreadSleep(1)), which cost the
 * game's main thread ~5 ms per frame (it yields when it reads the pad, when a frame is late and every 32 clock reads).  There the
 * big lock is handed over instead: nothing happens when no thread is waiting for it; otherwise the lock is released and this thread
 * waits (up to 0.3 ms, spinning - the waiter runs on another core) until a waiter has taken it, then queues for it again; if no
 * waiter took it by then (one on this same core cannot run while this thread spins), it sleeps 1 ms as before. */
void yield_big(void){ u64 t = rs_perf_us();
#if defined(__vita__) || defined(RS_SEMCOND)                       /* RS_SEMCOND: the Vita behaviour on Linux, for testing */
    if (!big_waiting) { rs_perf.yields++; return; }
    pthread_t me = pthread_self(); pthread_mutex_unlock(&big);
    while (pthread_equal(big_owner, me) && rs_perf_us() - t < 300) { }
    if (pthread_equal(big_owner, me)) sched_yield();     /* not taken: the waiter may share this core - give it the old 1 ms */
#else
    pthread_mutex_unlock(&big); sched_yield();
#endif
    big_lock(); rs_perf.yields++; rs_perf.yield_us += rs_perf_us() - t; }
void rs_big_unlock(void){ pthread_mutex_unlock(&big); }
void rs_big_lock(void){ big_lock(); }
/* profiler report, every 600 vblanks.  Weak: the Vita frontend replaces rs_perf_write with a file on the memory card. */
__attribute__((weak)) void rs_perf_mem(char *b, int n){ (void)b; (void)n; }
void rs_perf_extra(char *b, int n){ extern void gfx_cache_stats(char *, int); char m[200] = "", g[200] = ""; rs_perf_mem(m, sizeof m); gfx_cache_stats(g, sizeof g);
    snprintf(b, (size_t)n, "[PERF]   frame %d | %s | %s\n", g_frames, g, m); }
__attribute__((weak)) void rs_perf_write(const char *line){ fprintf(stderr, "%s", line); }   /* only called when the report is on (perf_on) */
static const char *hname(int i);
static int perf_on = -1; int rs_perf_detail;
static void perf_threads(double fr, double ms);
static void perf_report(void){
    if (perf_on < 0) { const char *e = getenv("RS_PERF"); perf_on = e ? atoi(e) != 0 : 0;
#ifdef RS_DESKTOP
        { extern int rs_setting_int(const char *, int); if (!perf_on) perf_on = rs_setting_int("RS_PERF", 0); }   /* settings.txt too */
#endif
#ifdef __vita__
        { extern int rs_setting_int(const char *, int); perf_on = rs_setting_int("RS_PERF_LOG", 0); }    /* the on-screen HUD replaces the log */
#endif
    }
    rs_perf_detail = perf_on; if (!perf_on) return;
    static u64 last; static int n; u64 now = rs_perf_us(); if (!last) { last = now; memset(&rs_perf, 0, sizeof rs_perf); return; }
    if (++n < 600 && !(n >= 10 && now - last >= 5000000ull)) return;      /* every 600 frames or 5 s, whichever first (slow frames still report) */
    double fr = (double)n, ms = (now - last) / 1000.0 / fr; rs_perf_t p = rs_perf; memset(&rs_perf, 0, sizeof rs_perf); n = 0; last = now;
    char b[1024]; snprintf(b, sizeof b,
        "[PERF] frame %.2f ms (%.1f fps) | guest waits on GL: %.1f/frame %.2f ms | GL jobs %.2f ms: vtx %.2f ms (%.0f prims %.0f verts), draw calls %.0f %.2f ms, "
        "tex hash %.0f %.2f ms, tex upload %.1f %.2f ms, fb copies %.1f %.2f ms, cpu-display %.1f, readbacks %.1f | present %.2f ms (%.1f) | "
        "yields %.0f %.2f ms, sleeps %.1f %.2f ms | shadow pass %.0f draws %.2f ms (per frame)\n",
        ms, 1000.0 / ms, p.run_n / fr, p.run_wait_us / fr / 1000, p.job_us / fr / 1000, p.vtx_us / fr / 1000, p.prims / fr, p.verts / fr, p.batches / fr, p.draw_us / fr / 1000,
        p.hash_n / fr, p.hash_us / fr / 1000, p.up_n / fr, p.up_us / fr / 1000, p.copy_n / fr, p.copy_us / fr / 1000, p.cpu_disp_n / fr, p.readback_n / fr,
        p.present_n ? p.present_us / (double)p.present_n / 1000 : 0.0, p.present_n / fr, p.yields / fr, p.yield_us / fr / 1000, p.sleeps / fr, p.sleep_us / fr / 1000, p.shadow_draws / fr, p.shadow_us / fr / 1000);
    rs_perf_write(b);
    snprintf(b, sizeof b, "[PERF]   GE: %.0f commands, interpreter %.2f ms (prims included); per prim: GE state -> draw state %.2f ms, back-end setup %.2f ms, draw calls %.2f ms (per frame)\n",
        p.cmds / fr, p.ge_us / fr / 1000, p.prep_us / fr / 1000, p.setup_us / fr / 1000, p.draw_us / fr / 1000);
    rs_perf_write(b);
    snprintf(b, sizeof b, "[PERF]   per frame: draw state %.2f ms, transform %.2f ms, back end %.2f ms (copies %.2f, render state %.2f, uniforms %.2f, programs/targets %.2f)\n",
        p.bk[0] / fr / 1000, p.bk[1] / fr / 1000, p.bk[2] / fr / 1000, p.bk[3] / fr / 1000, p.bk[4] / fr / 1000, p.bk[5] / fr / 1000, p.bk[6] / fr / 1000);
    rs_perf_write(b);
    { extern void rs_perf_extra(char *, int); char e[512]; e[0] = 0; rs_perf_extra(e, sizeof e); if (e[0]) rs_perf_write(e); }
    perf_threads(fr, ms);
    { int o = snprintf(b, sizeof b, "[PERF]   waits:"); extern void perf_sema_report(char *, int, double); perf_sema_report(b + o, (int)(sizeof b - o - 2), fr); strcat(b, "\n"); rs_perf_write(b); } }
#define gstr hle_gstr
char *hle_gstr(u32 a){ static char b[4][512]; static int k; char *p = b[k++ & 3]; int i = 0; while (i < 511) { char ch = (char)LB(a + i); p[i++] = ch; if (!ch) break; } p[i < 512 ? i : 511] = 0; return p; }

/* guest memory blocks: native_mem.c; threads, semaphores, event flags, pools, callbacks: native_thread.c */
static int fl_tick2, fl_rtc; static u32 tl_ra[8]; static int tl_n[8];
#ifdef __vita__
#define CLOCK_YIELD 127              /* Vita: each hand-over costs the main thread a turn of whichever thread waits (7-19 ms a frame at 1 in 32) */
#else
#define CLOCK_YIELD 31
#endif
/* the game's clock and yields, for the native kernel calls (native_kernel.c) */
u64 rs_guest_clock_us(void){ return guest_us(); }
u64 rs_real_clock_us(void){ return now_us(); }
void rs_guest_yield(void){ yield_big(); }
int rs_guest_clock_yield_every(void){ return CLOCK_YIELD; }
static void perf_threads(double fr, double ms){
    for (int i = 0; i < rs_nthreads; i++) { kthread_t *t = rs_threads[i]; if (!t || !t->p_us || t->exited) continue; char b[1024];
        int o = snprintf(b, sizeof b, "[PERF]   thread %-20s guest %.2f ms, firmware %.2f ms, holds mutexes x%.1f %.2f ms:", t->name, ms - t->p_hle / fr / 1000, t->p_hle / fr / 1000, t->holds / fr, t->hold_us / fr / 1000); t->holds = t->hold_us = 0;
        for (int k = 0; k < 5; k++) { int best = -1; for (int j = 0; j < NSLOT; j++) if (t->p_us[j] && (best < 0 || t->p_us[j] > t->p_us[best])) best = j; if (best < 0) break;
            o += snprintf(b + o, sizeof b - o, " %s x%.1f %.2f ms;", hname(best), t->p_n[best] / fr, t->p_us[best] / fr / 1000); t->p_us[best] = 0; }
        memset(t->p_us, 0, NSLOT * 8); memset(t->p_n, 0, NSLOT * 8); t->p_hle = 0; snprintf(b + o, sizeof b - o, "\n"); rs_perf_write(b); } }


/* ---------------- utility dialogs, modules, misc (NIDs identified by SHA-1 of the SDK function name) ---------------- */
/* On-screen keyboard.  A platform with a native keyboard implements rs_osk_begin/rs_osk_poll (the PS Vita: its IME dialog); without
 * one the text the game proposes is accepted as typed. */
__attribute__((weak)) int rs_osk_begin(const u16 *title, const u16 *initial, int max_len){ (void)title; (void)initial; (void)max_len; return 0; }
__attribute__((weak)) int rs_osk_poll(u16 *out, int max_len){ (void)out; (void)max_len; return -1; }   /* 0 running, 1 entered, -1 cancelled */
static int osk_state; static u32 osk_params; static int osk_polls, osk_native;
static u32 osk_data(void){ return LW(osk_params + 52); }          /* SceUtilityOskParams: base (48 bytes), datacount, data */
/* the field's length: SceUtilityOskData +36 (outtextlength: the most characters the game takes), else +48 / +52 */
static u32 osk_limit(u32 d){ u32 l = LW(d + 36); if (!l || l > 512) l = LW(d + 48); if (!l || l > 512) l = LW(d + 52); if (!l || l > 512) l = 64; return l; }
static int ustrcpy_in(u16 *dst, u32 src, int max){ int n = 0; if (src) while (n < max - 1 && LH(src + n * 2)) { dst[n] = LH(src + n * 2); n++; } dst[n] = 0; return n; }
static void osk_finish(const u16 *text, int result){         /* result: 0 unchanged, 1 cancelled, 2 changed (PSP_UTILITY_OSK_RESULT_*) */
    u32 data = osk_data();
    if (data) { u32 in = LW(data + 32), out = LW(data + 40), lim = osk_limit(data); int n = 0;
        if (out && lim) { if (text) while (n < (int)lim - 1 && text[n]) { SH(out + n * 2, text[n]); n++; }
                          else if (in) while (n < (int)lim - 1 && LH(in + n * 2)) { SH(out + n * 2, LH(in + n * 2)); n++; }
                          SH(out + n * 2, 0); }
        SW(data + 44, (u32)result);
        fprintf(stderr, "[UTIL] OSK done: result %d, %d chars to %08x (limit %u, in %08x)\n", result, n, out, lim, in); }
    SW(osk_params + 28, 0); }
static void h_OskInit(sdkcall_t *c){ osk_params = A0; osk_state = 2; osk_polls = 0; osk_native = 0; fprintf(stderr, "[UTIL] OSK start params=%08x\n", A0);
    u32 data = osk_data();
    if (data) { static u16 title[128], init[512]; int lim = (int)osk_limit(data);
        ustrcpy_in(title, LW(data + 28), 128); ustrcpy_in(init, LW(data + 32), 512); osk_native = rs_osk_begin(title, init, lim - 1); }
    V0 = 0; }
static void osk_step(void){
    if (osk_state != 2) return;
    if (!osk_native) { if (++osk_polls > 6) { osk_finish(0, 2); osk_state = 3; } return; }
    static u16 out[512]; u32 data = osk_data(); int lim = data ? (int)osk_limit(data) : 512;
    int r = rs_osk_poll(out, lim);
    if (r > 0) { osk_finish(out, 2); osk_state = 3; } else if (r < 0) { osk_finish(0, 1); osk_state = 3; } }
static void h_OskStatus(sdkcall_t *c){ osk_step(); V0 = osk_state; if (osk_state == 4) osk_state = 0; yield_big(); }   /* 4 finished (after shutdown), then 0 */
static void h_OskUpdate(sdkcall_t *c){ osk_step(); V0 = 0; }
static void h_OskShutdown(sdkcall_t *c){ osk_state = 4; V0 = 0; }
static int mod_uid = 0x2000;
static void h_LoadModule(sdkcall_t *c){ fprintf(stderr, "[MOD] LoadModule %s\n", gstr(A0)); V0 = mod_uid++; }
static void h_StartModule(sdkcall_t *c){ if (A3) SW(A3, 0); V0 = 0; }
static void h_ModuleIdByAddr(sdkcall_t *c){ V0 = 0x1F00; }
/* PSP "volatile" memory (4 MB the firmware lends to the game): the top 4 MB of the platform's game heap range */
static u32 vol_base;
static void h_VolLock(sdkcall_t *c){ if (A1) SW(A1, vol_base); if (A2) SW(A2, 0x3FC000u); V0 = 0; }
static void h_SysParamString(sdkcall_t *c){ const char *s = "Player"; if (A1 && A2) { u32 n = 0; while (s[n] && n + 1 < A2) { SB(A1 + n, s[n]); n++; } SB(A1 + n, 0); } V0 = 0; }


/* ---- ATRAC3+ (no decoder yet): emit a frame of silence per decode so the audio thread's loop completes ---- */
static int atrac_next = 0;
/* ---- audio (silent for now, but correctly TIMED).  The sas voice calls are pure register writes on the PSP and must return at once:
 * the game's audio thread makes ~40 of them per audio tick while holding the engine's global "Asura mutex", and the old catch-all
 * 1.5 ms sleep for unimplemented audio calls made the main thread wait ~1 ms per call (the Vita slideshow, worse as more sounds play).
 * Pacing comes only from the blocking output call: it sleeps like a double-buffered audio queue (buffer length at 44.1 kHz). */
static u32 au2_samples = 2048;
static void h_Au2Reserve(sdkcall_t *c){ if (A0) au2_samples = A0; V0 = 0; }
static void h_Au2Release(sdkcall_t *c){ V0 = 0; }
static void audio_block(u32 samples, u64 *next){
    u64 dur = (u64)samples * 1000000ull / 44100ull, now = rs_perf_us();
    if (*next < now) *next = now;                          /* queue drained (or first call): start a new timeline */
    if (*next > now + dur) unlocked_sleep((unsigned)(*next - now - dur));   /* one buffer may be queued; wait for the older one */
    *next += dur; }
int rs_audio_has_device(void); int rs_audio_out_busy(void); void rs_audio_out(const s16 *src, int frames, int vol);
static void h_Au2Output(sdkcall_t *c){ static u64 next; u32 vol = A0 > 0x8000 ? 0x8000 : A0; const s16 *pcm = (const s16 *)(g_mem + GADDR(A1));
    if (rs_audio_has_device()) { int guard = 0; while (rs_audio_out_busy() && guard++ < 500) unlocked_sleep(2000); rs_audio_out(pcm, (int)au2_samples, (int)vol); }
    else { rs_audio_out(pcm, (int)au2_samples, (int)vol); audio_block(au2_samples, &next); }
    V0 = 0; }
static u32 au_ch_samples[8] = {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024};
static void h_AuChReserve(sdkcall_t *c){ static int nx; int ch = (s32)A0 >= 0 && A0 < 8 ? (int)A0 : (nx++ & 7); au_ch_samples[ch] = A1 ? A1 : 1024; V0 = ch; }
static void h_AuOutBlocking(sdkcall_t *c){ static u64 next[8]; int ch = A0 & 7; audio_block(au_ch_samples[ch], &next[ch]); V0 = 0; }
#define HS(n) void n(sdkcall_t *c);
HS(hs_SasInit) HS(hs_SasCore) HS(hs_SasCoreWithMix) HS(hs_SasGetEndFlag) HS(hs_SasSetVoice) HS(hs_SasSetVolume) HS(hs_SasSetPitch) HS(hs_SasSetKeyOn) HS(hs_SasSetKeyOff)
HS(hs_SasSetNoise) HS(hs_SasSetSL) HS(hs_SasSetADSR) HS(hs_SasSetADSRmode) HS(hs_SasSetSimpleADSR) HS(hs_SasGetEnvelopeHeight) HS(hs_SasGetPauseFlag) HS(hs_SasSetPause)
HS(hs_SasGetGrain) HS(hs_SasSetGrain) HS(hs_SasGetOutputmode) HS(hs_SasSetOutputmode)
HS(ha_SetDataAndGetID) HS(ha_DecodeData) HS(ha_GetSoundSample) HS(ha_GetStreamDataInfo) HS(ha_AddStreamData) HS(ha_Release)
#undef HS
/* SAS / ATRAC calls run under their own lock (snd_mx).  Mixing and decoding (about 8 ms per frame together in battles) also let go
 * of the big guest lock while they work, as the PSP's Media Engine works next to the main CPU: the game's main thread no longer waits
 * for the audio thread's mixing whenever it makes a system call. */
static pthread_mutex_t snd_mx = PTHREAD_MUTEX_INITIALIZER;
#define HSW(n) static void w_##n(sdkcall_t *c){ pthread_mutex_lock(&snd_mx); n(c); pthread_mutex_unlock(&snd_mx); }
#define HSH(n) static void w_##n(sdkcall_t *c){ pthread_mutex_unlock(&big); pthread_mutex_lock(&snd_mx); n(c); pthread_mutex_unlock(&snd_mx); big_lock(); }
HSW(hs_SasInit) HSH(hs_SasCore) HSH(hs_SasCoreWithMix) HSW(hs_SasGetEndFlag) HSW(hs_SasSetVoice) HSW(hs_SasSetVolume) HSW(hs_SasSetPitch) HSW(hs_SasSetKeyOn) HSW(hs_SasSetKeyOff)
HSW(hs_SasSetNoise) HSW(hs_SasSetSL) HSW(hs_SasSetADSR) HSW(hs_SasSetADSRmode) HSW(hs_SasSetSimpleADSR) HSW(hs_SasGetEnvelopeHeight) HSW(hs_SasGetPauseFlag) HSW(hs_SasSetPause)
HSW(hs_SasGetGrain) HSW(hs_SasSetGrain) HSW(hs_SasGetOutputmode) HSW(hs_SasSetOutputmode)
HSW(ha_SetDataAndGetID) HSH(ha_DecodeData) HSW(ha_GetSoundSample) HSW(ha_GetStreamDataInfo) HSW(ha_AddStreamData) HSW(ha_Release)
#undef HSW
#undef HSH
void rs_atrac_note_file(const char *host_path);

/* file IO: native_io.c */

/* ---------------- misc ---------------- */
/* Platform backends supply pad state. Defaults below are used by the headless host build. */
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
/* Headless default backend: optional script  RS_SCRIPT="frame:hexbuttons[:lx:ly[:rx:ry]];..."  (state holds from that frame on) */
void rs_script_read_pad(rs_pad_t *p){                  /* RS_SCRIPT (tests): scripted input */
    p->buttons = 0; p->lx = p->ly = p->rx = p->ry = 0x80;
    static char *scr; static int init; if (!init) { init = 1; const char *e = getenv("RS_SCRIPT"); if (e) scr = strdup(e); }
    if (!scr) return; char *s = strdup(scr), *save = 0;
    /* RS_SCRIPT_CLOCK=1: step = 50 ms of guest clock (one frame of the original 20 FPS game) instead of one vblank -> frame-rate independent */
    static int clk = -1; static u64 t0; if (clk < 0) { clk = getenv("RS_SCRIPT_CLOCK") != 0; t0 = now_us(); }
    unsigned cur = clk ? (unsigned)((now_us() - t0) / 50000ull) : (unsigned)g_frames;
    for (char *tok = strtok_r(s, ";", &save); tok; tok = strtok_r(0, ";", &save)) { unsigned fr = 0, b = 0, lx = 128, ly = 128, rx = 128, ry = 128; int n = sscanf(tok, "%u:%x:%u:%u:%u:%u", &fr, &b, &lx, &ly, &rx, &ry);
        if (n >= 2 && cur >= fr) { p->buttons = b; p->lx = n >= 3 ? lx : 128; p->ly = n >= 4 ? ly : 128; p->rx = n >= 5 ? rx : 128; p->ry = n >= 6 ? ry : 128; } }
    free(s); }
__attribute__((weak)) void rs_backend_read_pad(rs_pad_t *p){ rs_script_read_pad(p); }
u8 rs_right_stick[2] = {128, 128};   /* the right stick (raw, as the PSP reports the left one): read by platform/common/twin_stick.c */
u32 rs_pad_inject(u32 buttons);
void rs_dedicated_tick(void);  /* dedicated_host.c */
static void h_CtrlRead(sdkcall_t *c){ rs_dedicated_tick(); rs_pad_t p; rs_backend_read_pad(&p); u32 b = A0; p.buttons = rs_pad_inject(p.buttons);   /* gamespy_ui.c */
    /* The PSP has one analog stick: the left stick goes to the game as it. The right stick is kept for twin_stick.c (turn / look). */
    SW(b, (u32)guest_us()); SW(b + 4, p.buttons); SB(b + 8, p.lx); SB(b + 9, p.ly);
    rs_right_stick[0] = p.rx; rs_right_stick[1] = p.ry; V0 = 1; yield_big(); }
/* RS_DUMP_PRESENT=<width>x<height> (test builds): the frames are dumped as presented to a screen of that size (scaling, FXAA, crop) */
typedef struct { const char *path; int w, h; } pdump_t;
static void present_dump_job(void *a){ pdump_t *d = a; extern u32 *gfx_present_image(int, int); u32 *b = gfx_present_image(d->w, d->h); if (!b) return;
    FILE *f = fopen(d->path, "wb"); if (f) { fprintf(f, "P6\n%d %d\n255\n", d->w, d->h);
        for (int y = d->h - 1; y >= 0; y--) for (int x = 0; x < d->w; x++) { u32 c = b[y * d->w + x]; u8 rgb[3] = {c & 255, (c >> 8) & 255, (c >> 16) & 255}; fwrite(rgb, 1, 3, f); } fclose(f); }
    free(b); }
static void dump_frame(const char *dir, int n){
    { const char *pd = ENV_ONCE("RS_DUMP_PRESENT"); int w, h; if (pd && sscanf(pd, "%dx%d", &w, &h) == 2) { char p[600]; snprintf(p, sizeof p, "%s/present_%05d.ppm", dir, n);
        pdump_t d = {p, w, h}; extern void gfx_run(void (*)(void *), void *); gfx_run(present_dump_job, &d); } }
    static u32 buf[480 * 272]; if (!rs_display_read(buf)) return; char p[600]; snprintf(p, sizeof p, "%s/frame_%05d.ppm", dir, n); FILE *f = fopen(p, "wb"); if (!f) return;
    fprintf(f, "P6\n480 272\n255\n"); for (int i = 0; i < 480 * 272; i++) { u8 rgb[3] = {buf[i] & 255, (buf[i] >> 8) & 255, (buf[i] >> 16) & 255}; fwrite(rgb, 1, 3, f); } fclose(f); }
static int fl_vb, fl_fb, fl_tick; static u32 fl_ra[8]; static int fl_ran[8];
static void fl_note_ra(u32 ra){ for (int i = 0; i < 8; i++) { if (fl_ran[i] && fl_ra[i] == ra) { fl_ran[i]++; return; } if (!fl_ran[i]) { fl_ra[i] = ra; fl_ran[i] = 1; return; } } }
/* Frame pacing.  The game calls sceDisplayWaitVblankStart(CB) exactly once per frame (f_08904128) and runs a variable time step
 * (f_0883b9c8 measures each frame with sceKernelGetSystemTimeLow), so the cap below sets the game's frame rate directly:
 * wait until the next tick of a fixed grid of 1/fps seconds (hardware: next 60 Hz vblank).  fps 0 = unlocked (no wait). */
/* RS_BENCH_FROM=<frame>: CPU benchmark.  From that frame on: frame rate unlocked and GE display lists are not executed
 * (no rendering), so the frame rate measures guest code + firmware emulation only.  Reports every 300 frames. */
int rs_bench_active;
static void bench_tick(void){
    static int from = -2; static u64 t0, c0; static unsigned f0;
    if (from == -2) from = getenv("RS_BENCH_FROM") ? atoi(getenv("RS_BENCH_FROM")) : -1;
    if (from < 0 || (int)g_frames < from) return;
    u64 cpu = 0;
#ifdef CLOCK_THREAD_CPUTIME_ID
    { struct timespec ts; clock_gettime(CLOCK_THREAD_CPUTIME_ID, &ts); cpu = (u64)ts.tv_sec * 1000000ull + ts.tv_nsec / 1000; }
#endif
    if (!rs_bench_active) { extern volatile int rs_prof_on; rs_prof_on = 1; rs_bench_active = 1; t0 = now_us(); c0 = cpu; f0 = g_frames; return; }
    if ((g_frames - f0) % 300 == 0) { u64 t = now_us(); fprintf(stderr, "[BENCH] %u frames: %.3f ms/frame wall, %.3f ms/frame main-thread CPU, %.1f fps\n",
        g_frames - f0, (t - t0) / 1000.0 / (g_frames - f0), (cpu - c0) / 1000.0 / (g_frames - f0), (g_frames - f0) * 1e6 / (double)(t - t0)); }
}
static int since_flip;                   /* vblanks since the game last flipped the display buffer */
static void pace_frame(void){
    static u64 epoch; bench_tick(); int fps = rs_bench_active ? 0 : (int)rs_patch_fps(); rs_patch_apply_fps_cap();
    if (fps <= 0) { yield_big(); static u64 last, work; static int n; u64 t = now_us(); if (last) work += t - last; last = t;
        if (ENV_ONCE("RS_FRAMELOG") && ++n == 600) { fprintf(stderr, "[PACE] unlocked: %.2f ms per frame\n", work / 600e3); n = 0; work = 0; } return; }
    u64 period = 1000000ull / (u64)fps, now = now_us(); if (!epoch) epoch = now;
    /* at most fps frames per second.  A frame that took longer than the period is not held back to the next period boundary (that
     * turned ~37 ms frames into 50 ms ones at 60 fps); the next deadline then counts from now. */
    u64 next = epoch + period;
    if (now >= next) { next = now; epoch = now; yield_big(); }
    else { unlocked_sleep((unsigned)(next - now)); epoch = next; }
    { static u64 req, act, last, work; static int n; u64 t = now_us(); req += next - now; act += t - now; if (last) work += now - last; last = t;
      if (ENV_ONCE("RS_FRAMELOG") && ++n == 600) { fprintf(stderr, "[PACE] per frame: work %.2f ms, sleep requested %.2f ms, slept %.2f ms\n", work / 600e3, req / 600e3, act / 600e3); n = 0; req = act = work = 0; } } }
/* RS_SPIKE_MS=<ms> (settings.txt or environment): log every game frame that took longer, with the files opened during it */
unsigned rs_spike_opens; char rs_spike_last[160];
static void spike_check(void){
    static int ms = -2; static u64 last; if (ms == -2) { extern int rs_setting_int(const char *, int); ms = rs_setting_int("RS_SPIKE_MS", 0); if (!ms && getenv("RS_SPIKE_MS")) ms = atoi(getenv("RS_SPIKE_MS")); }
    if (ms <= 0) return; u64 t = now_us();
    if (last && t - last > (u64)ms * 1000u) fprintf(stderr, "[SPIKE] frame %d took %.1f ms; %u files opened during it (last: %s)\n", g_frames, (t - last) / 1000.0, rs_spike_opens, rs_spike_opens ? rs_spike_last : "-");
    rs_spike_opens = 0; last = t; }
static void h_WaitVblank(sdkcall_t *c){ spike_check(); static int fast = -1; if (fast < 0) fast = getenv("RS_FAST") != 0; if (fast) { rs_patch_apply_fps_cap(); yield_big(); } else pace_frame(); rs_patch_vblank(); g_frames++; { const char *md = ENV_ONCE("RS_MEMDUMP"); if (md) { char b[200]; snprintf(b, sizeof b, "%s", md); for (char *s = strtok(b, ","); s; s = strtok(0, ",")) if (atoi(s) == g_frames) { extern const u32 rs_image_size; char p[300]; snprintf(p, sizeof p, "%s/d_%d.img", getenv("RS_MEMDIR"), g_frames); FILE *f = fopen(p, "wb"); fwrite(GP(GIMG(0x08804000u)), 1, rs_image_size, f); fclose(f); snprintf(p, sizeof p, "%s/d_%d.heap", getenv("RS_MEMDIR"), g_frames); f = fopen(p, "wb"); fwrite(GP(0x0A000000u), 1, 64u << 20, f); fclose(f); } } }   /* TEMP */ if (++since_flip >= 30) { since_flip = 0; gfx_frame_ready(); } perf_report();   /* no flip for half a second: show what there is */
    if (ENV_ONCE("RS_FRAMELOG")) { fl_vb++; fl_note_ra(c->r[31]); if (fl_vb >= 600) { fprintf(stderr, "[FRAME] %d vblank waits, %d frame-buffer flips, %d SystemTimeLow + %d RtcTick queries; vblank callers:", fl_vb, fl_fb, fl_tick2, fl_rtc);
        for (int i = 0; i < 8 && fl_ran[i]; i++) fprintf(stderr, " %08x x%d", fl_ra[i], fl_ran[i]);
        fprintf(stderr, "; time callers:"); for (int i = 0; i < 8 && tl_n[i]; i++) fprintf(stderr, " %08x x%d", tl_ra[i], tl_n[i]); memset(tl_n, 0, sizeof tl_n); fprintf(stderr, "\n"); fl_vb = fl_fb = fl_tick = fl_tick2 = fl_rtc = 0; memset(fl_ran, 0, sizeof fl_ran); } }
    const char *d = ENV_ONCE("RS_DUMP_DIR"); if (d) { int every = getenv("RS_DUMP_EVERY") ? atoi(getenv("RS_DUMP_EVERY")) : 60; static int from = -1, to; if (from < 0) { from = getenv("RS_DUMP_FROM") ? atoi(getenv("RS_DUMP_FROM")) : 0; to = getenv("RS_DUMP_TO") ? atoi(getenv("RS_DUMP_TO")) : 1 << 30; }
        if (every > 0 && g_frames % every == 0 && g_frames >= from && g_frames <= to) dump_frame(d, g_frames); }
    V0 = 0; }
void rs_display_set(u32, u32, u32); int rs_display_read(u32 *); int rs_ge_enqueue(u32, u32); void rs_ge_update_stall(int, u32); void rs_ge_reset(void);
extern u32 rs_ge_cb_finish_func, rs_ge_cb_finish_arg;
static pthread_key_t k_cpu; static pthread_once_t cpu_once = PTHREAD_ONCE_INIT;
static void mk_cpu_key(void){ pthread_key_create(&k_cpu, 0); }
static sdkcall_t *tl_get(void){ pthread_once(&cpu_once, mk_cpu_key); return (sdkcall_t *)pthread_getspecific(k_cpu); }
/* A new frame is shown when the game flips the display buffer, not at every vertical blank: presenting (and waiting for the target's
 * own display flip) once per vblank kept the renderer thread blocked while the game waited for it to run its GPU lists. */
/* vblanks so far, from the clock (60 Hz): the movie player paces itself by it (a picture every 2 vblanks).  Counting the game's
 * own vblank waits instead ran movies at the game's frame cap - half speed (15 fps) when the cap is 30. */
static void h_SetFrameBuf(sdkcall_t *c){ rs_display_set(A0, A1, A2); V0 = 0; fl_fb++; since_flip = 0; }   /* rs_display_set signals the new frame once drawn */
void rs_ge_finish_hook(int id){
    sdkcall_t *c = tl_get(); if (!c || !rs_ge_cb_finish_func) return;
    u32 save[32], hi = c->hi, lo = c->lo; memcpy(save, c->r, sizeof save);
    c->r[4] = id; c->r[5] = rs_ge_cb_finish_arg; c->r[6] = 0; c->r[31] = 0; CALLDYN(c, rs_ge_cb_finish_func);
    memcpy(c->r, save, sizeof save); c->hi = hi; c->lo = lo; }
/* GE interrupt: list-finish callbacks of asynchronously executed lists run here, as on the PSP (not on the thread that queued the list) */
static pthread_mutex_t gi_m = PTHREAD_MUTEX_INITIALIZER; static rs_cond_t gi_work = RS_COND_INIT, gi_done = RS_COND_INIT;   /* work for the GE thread / a callback delivered */
static int gi_q[256]; static unsigned gi_h, gi_t, gi_running; static pthread_t gi_th; static int gi_th_ok;
void rs_ge_signal_finish(int id){ pthread_mutex_lock(&gi_m); if (gi_h - gi_t < 256) gi_q[gi_h++ % 256] = id; rc_broadcast(&gi_work); pthread_mutex_unlock(&gi_m); }
static void *ge_intr_thread(void *u){ (void)u; gi_th = pthread_self(); gi_th_ok = 1;
    pthread_once(&cpu_once, mk_cpu_key); static sdkcall_t ctx; pthread_setspecific(k_cpu, &ctx); { extern void rs_thread_init(void); rs_thread_init(); } { extern void rs_thread_cores(const char *); rs_thread_cores("GE interrupt"); }
    for (;;) { pthread_mutex_lock(&gi_m); while (gi_h == gi_t) rc_wait(&gi_work, &gi_m); int id = gi_q[gi_t % 256]; gi_running = 1; pthread_mutex_unlock(&gi_m);
        big_lock(); rs_ge_finish_hook(id); rc_broadcast(&gcv); pthread_mutex_unlock(&big);
        pthread_mutex_lock(&gi_m); gi_t++; gi_running = 0; rc_broadcast(&gi_done); pthread_mutex_unlock(&gi_m); } return 0; }
static void ge_intr_start(void){ pthread_attr_t at; pthread_attr_init(&at); { extern void rs_thread_attr(pthread_attr_t *, u32); rs_thread_attr(&at, 0x10000); } pthread_t t;
#ifdef RS_DESKTOP
    { extern int rs_thread_spawn(pthread_t *, pthread_attr_t *, void *(*)(void *), void *); rs_thread_spawn(&t, &at, ge_intr_thread, 0); } }
#else
    pthread_create(&t, &at, ge_intr_thread, 0); }
#endif
int rs_ge_busy(void); void rs_ge_wait_idle(void);
unsigned rs_ge_posted(void); int rs_ge_done_upto(unsigned mark);
static void ge_sync(sdkcall_t *c){
    if (A0 == 1) { V0 = rs_ge_busy() ? 2 : 0; return; }                      /* peek: 2 = drawing */
    /* RS_GE_PIPELINE=1 (experimental): the game may build frame N+1 while frame N is still being drawn - a sync waits for the lists
     * queued before the previous sync, not for the ones just queued.  The game double-buffers its display lists, but data it rewrites
     * in place every frame could be read by the renderer one frame late (visible as flicker), so it is off by default. */
    static int pipe = -1; if (pipe < 0) { extern int rs_setting_int(const char *, int); pipe = rs_setting_int("RS_GE_PIPELINE", 0); }
    if (pipe) { static unsigned prev; unsigned mark = prev; prev = rs_ge_posted(); while (!rs_ge_done_upto(mark)) unlocked_sleep(200); V0 = 0; return; }
    rs_ge_wait_idle();                                                        /* every queued list executed ... */
    pthread_mutex_unlock(&big); pthread_mutex_lock(&gi_m); while (gi_h != gi_t || gi_running) rc_wait(&gi_done, &gi_m); pthread_mutex_unlock(&gi_m); big_lock();   /* ... and its callback delivered */
    V0 = 0; }
static void h_GeListSync(sdkcall_t *c){ c->r[4] = c->r[5]; ge_sync(c); }       /* (list id, mode) */
static void h_GeDrawSync(sdkcall_t *c){ ge_sync(c); }                        /* (mode) */
static void h_GeSetCallback(sdkcall_t *c){ if (A0) { rs_ge_cb_finish_func = LW(A0 + 8); rs_ge_cb_finish_arg = LW(A0 + 12); fprintf(stderr, "[GE] finish callback %08x arg=%08x\n", rs_ge_cb_finish_func, rs_ge_cb_finish_arg); } V0 = 0; }
static void h_GeUpdateStall(sdkcall_t *c){ rs_ge_update_stall(A0 - 0x100, A1); V0 = 0; }
static void h_GeEnqueue(sdkcall_t *c){ g_ge_lists++; V0 = 0x100 + rs_ge_enqueue(A0, A1); }
static void h_GeEdramAddr(sdkcall_t *c){ V0 = rs_vram_base; }
static void h_Zero(sdkcall_t *c){ V0 = 0; }
static void h_One(sdkcall_t *c){ V0 = 1; }
static void h_ExitGame(sdkcall_t *c){ fprintf(stderr, "[HLE] sceKernelExitGame called\n"); fflush(stderr); _exit(0); }
/* ---------------- savedata (sceUtilitySavedata*): the game's profile.  The PSP's save dialog is not shown: the operation runs at once
 * and the status goes init -> visible -> finished -> shutdown as the game polls.  Files live in rs_platform_save_dir()/<gameName><saveName>/
 * (the PSP's layout under PSP/SAVEDATA).  Param offsets: SceUtilitySavedataParam (pspsdk psputility_savedata.h). */
__attribute__((weak)) const char *rs_platform_save_dir(void){ const char *e = getenv("RS_SAVEDIR"); return e ? e : "savedata"; }
static int sd_status; static u32 sd_param;
static void sd_dir(u32 p, char *out, size_t n, const char *save){ snprintf(out, n, "%s/%s%s", rs_platform_save_dir(), gstr(p + 0x3C), save); }
static int sd_exec(u32 p, int mode, const char *slot){
    char save[24]; snprintf(save, sizeof save, "%s", slot ? slot : gstr(p + 0x4C));
    if (!save[0] && LW(p + 0x60)) snprintf(save, sizeof save, "%s", gstr(LW(p + 0x60)));          /* list modes: the first name */
    char dir[700], file[800]; sd_dir(p, dir, sizeof dir, save); snprintf(file, sizeof file, "%s/%s", dir, gstr(p + 0x64));
    u32 buf = LW(p + 0x74), cap = LW(p + 0x78), size = LW(p + 0x7C); int res = 0;
    switch (mode) {
    case 1: case 3: case 5: case 14: case 18: case 17: case 13: {                               /* save / write */
        mkdir(rs_platform_save_dir(), 0777); mkdir(dir, 0777);
        FILE *f = fopen(file, "wb"); if (f && buf) { fwrite(g_mem + GADDR(buf), 1, size, f); fclose(f); } else { if (f) fclose(f); res = (int)0x8011038Bu; }
        break; }
    case 0: case 2: case 4: case 15: case 16: {                                                 /* load / read */
        FILE *f = fopen(file, "rb"); if (!f) { res = (int)0x80110307u; break; }                   /* no data */
        u32 n = buf ? (u32)fread(g_mem + GADDR(buf), 1, cap, f) : 0; fclose(f); SW(p + 0x7C, n); break; }
    case 7: case 10: case 21: { if (remove(file) != 0) res = (int)0x80110307u; break; }         /* delete */
    default: break; }
    { u32 mf = LW(p + 0x5D0); if (mf) { SW(mf, 32768); SW(mf + 4, 0x10000); SW(mf + 8, 2 * 1024 * 1024); } }   /* msFree: plenty of room */
    if (mode == 8) { u32 si = LW(p + 0x5FC); if (si) { SW(si + 16, 32768); SW(si + 20, 0x10000); SW(si + 24, 2 * 1024 * 1024); SW(si + 36, 0); SW(si + 48, 0); } }
    fprintf(stderr, "[SAVE] mode %d %s/%s: result %08x (%u bytes)\n", mode, dir, gstr(p + 0x64), (unsigned)res, (unsigned)LW(p + 0x7C));
    return res; }
static void sd_run(u32 p){ SW(p + 0x1C, (u32)sd_exec(p, (int)LW(p + 0x30), NULL)); }
int rs_savedata_op(u32 p, int mode, const char *slot){ return sd_exec(p, mode, slot); }   /* save_manager.c: one slot */
static void h_SaveInit(sdkcall_t *c){ sd_param = A0;
    if (getenv("RS_SAVE_LOG")) { u32 p = A0, l = LW(p + 0x60); fprintf(stderr, "[SAVEP] mode %d game '%s' save '%s' file '%s' bufsize %u size %u focus %d sfo title '%s' stitle '%s' detail '%s' list:",
        (int)LW(p + 0x30), gstr(p + 0x3C), gstr(p + 0x4C), gstr(p + 0x64), LW(p + 0x78), LW(p + 0x7C), (int)LW(p + 0x5C8), gstr(p + 0x80), gstr(p + 0x100), gstr(p + 0x180));
        for (int i = 0; l && i < 16; i++) { const char *s = gstr(l + 20 * i); if (!s[0]) break; fprintf(stderr, " '%s'", s); } fprintf(stderr, "\n"); }
    { extern int rs_savemgr_begin(u32); if (rs_savemgr_begin(A0)) { sd_status = 1; V0 = 0; return; } }   /* list modes: the save manager */
    sd_run(A0); sd_status = 1; V0 = 0; }
static void h_SaveStatus(sdkcall_t *c){
    { extern int rs_savemgr_busy(void); extern void rs_savemgr_poll(void);
      if (rs_savemgr_busy()) { rs_savemgr_poll(); if (rs_savemgr_busy()) { V0 = sd_status == 1 ? 1u : 2u; sd_status = 2; return; } sd_status = 3; } }
    int s = sd_status; if (s == 1 || s == 2) sd_status++; else if (s == 4) sd_status = 0; V0 = (u32)s; }
static void h_SaveShutdown(sdkcall_t *c){ sd_status = 4; V0 = 0; }
static void h_UtilParam(sdkcall_t *c){ if (A0 == 7) SW(A1, 1); else if (A0 == 8) SW(A1, 1); else SW(A1, 0); V0 = 0; }
static void h_Printf(sdkcall_t *c){ fprintf(stderr, "[GAME] %s\n", gstr(A0)); V0 = 0; }

/* movies (mpeg.c) */
void hm_MpegInit(sdkcall_t *); void hm_MpegFinish(sdkcall_t *); void hm_MpegQueryMemSize(sdkcall_t *); void hm_MpegRingbufferQueryMemSize(sdkcall_t *); void hm_MpegRingbufferConstruct(sdkcall_t *); void hm_MpegRingbufferDestruct(sdkcall_t *); void hm_MpegCreate(sdkcall_t *); void hm_MpegDelete(sdkcall_t *); void hm_MpegQueryStreamOffset(sdkcall_t *); void hm_MpegQueryStreamSize(sdkcall_t *); void hm_MpegRegistStream(sdkcall_t *); void hm_MpegUnRegistStream(sdkcall_t *); void hm_MpegMallocAvcEsBuf(sdkcall_t *); void hm_MpegFreeAvcEsBuf(sdkcall_t *); void hm_MpegInitAu(sdkcall_t *); void hm_MpegQueryAtracEsSize(sdkcall_t *); void hm_MpegRingbufferPut(sdkcall_t *); void hm_MpegRingbufferAvailableSize(sdkcall_t *); void hm_MpegGetAvcAu(sdkcall_t *); void hm_MpegAvcDecode(sdkcall_t *); void hm_MpegAvcDecodeStop(sdkcall_t *); void hm_MpegGetAtracAu(sdkcall_t *); void hm_MpegAtracDecode(sdkcall_t *); void hm_PsmfSetPsmf(sdkcall_t *); void hm_PsmfGetNumberOfSpecificStreams(sdkcall_t *);
typedef struct { u32 nid; const char *name; void (*fn)(sdkcall_t *); } hle_t;
/* the game's calls bound to the handlers above (RS_BIND: guest_sched.h) */
RS_BIND(sceCtrlReadBufferPositive, h_CtrlRead)
RS_BIND(sceDisplayWaitVblankStart, h_WaitVblank)
RS_BIND(sceDisplayWaitVblankStartCB, h_WaitVblank)
RS_BIND(sceDisplaySetFrameBuf, h_SetFrameBuf)
RS_BIND(sceGeListEnQueue, h_GeEnqueue)
RS_BIND(sceGeListEnQueueHead, h_GeEnqueue)
RS_BIND(sceGeEdramGetAddr, h_GeEdramAddr)
RS_BIND(sceGeListSync, h_GeListSync)
RS_BIND(sceGeDrawSync, h_GeDrawSync)
RS_BIND(sceGeListUpdateStallAddr, h_GeUpdateStall)
RS_BIND(sceGeSetCallback, h_GeSetCallback)
RS_BIND(sceKernelExitGame, h_ExitGame)
RS_BIND(sceUtilityGetSystemParamInt, h_UtilParam)
RS_BIND(sceUtilitySavedataInitStart, h_SaveInit)
RS_BIND(sceUtilitySavedataGetStatus, h_SaveStatus)
RS_BIND(sceUtilitySavedataShutdownStart, h_SaveShutdown)
RS_BIND(sceUtilityOskInitStart, h_OskInit)
RS_BIND(sceUtilityOskGetStatus, h_OskStatus)
RS_BIND(sceUtilityOskUpdate, h_OskUpdate)
RS_BIND(sceUtilityOskShutdownStart, h_OskShutdown)
RS_BIND(sceUtilityGetSystemParamString, h_SysParamString)
RS_BIND(sceKernelLoadModule, h_LoadModule)
RS_BIND(sceKernelStartModule, h_StartModule)
RS_BIND(sceKernelGetModuleIdByAddress, h_ModuleIdByAddr)
RS_BIND(sceKernelVolatileMemLock, h_VolLock)
RS_BIND(sceKernelVolatileMemUnlock, h_Zero)
RS_BIND(sceAudioOutput2Reserve, h_Au2Reserve)
RS_BIND(sceAudioOutput2Release, h_Au2Release)
RS_BIND(sceAudioOutput2OutputBlocking, h_Au2Output)
RS_BIND(__sceSasInit, w_hs_SasInit)
RS_BIND(__sceSasCore, w_hs_SasCore)
RS_BIND(__sceSasCoreWithMix, w_hs_SasCoreWithMix)
RS_BIND(__sceSasGetEndFlag, w_hs_SasGetEndFlag)
RS_BIND(__sceSasSetVolume, w_hs_SasSetVolume)
RS_BIND(__sceSasSetPitch, w_hs_SasSetPitch)
RS_BIND(__sceSasSetVoice, w_hs_SasSetVoice)
RS_BIND(__sceSasSetADSR, w_hs_SasSetADSR)
RS_BIND(__sceSasSetKeyOn, w_hs_SasSetKeyOn)
RS_BIND(__sceSasSetKeyOff, w_hs_SasSetKeyOff)
RS_BIND(__sceSasSetPause, w_hs_SasSetPause)
RS_BIND(__sceSasGetOutputmode, w_hs_SasGetOutputmode)
RS_BIND(__sceSasRevVON, h_Zero)
RS_BIND(__sceSasSetSimpleADSR, w_hs_SasSetSimpleADSR)
RS_BIND(sceAtracSetDataAndGetID, w_ha_SetDataAndGetID)
RS_BIND(sceAtracDecodeData, w_ha_DecodeData)
RS_BIND(sceAtracGetSoundSample, w_ha_GetSoundSample)
RS_BIND(sceAtracGetStreamDataInfo, w_ha_GetStreamDataInfo)
RS_BIND(sceAtracAddStreamData, w_ha_AddStreamData)
RS_BIND(sceAtracReleaseAtracID, w_ha_Release)
RS_BIND(sceMpegInit, hm_MpegInit)
RS_BIND(sceMpegFinish, hm_MpegFinish)
RS_BIND(sceMpegQueryMemSize, hm_MpegQueryMemSize)
RS_BIND(sceMpegRingbufferQueryMemSize, hm_MpegRingbufferQueryMemSize)
RS_BIND(sceMpegRingbufferConstruct, hm_MpegRingbufferConstruct)
RS_BIND(sceMpegRingbufferDestruct, hm_MpegRingbufferDestruct)
RS_BIND(sceMpegCreate, hm_MpegCreate)
RS_BIND(sceMpegDelete, hm_MpegDelete)
RS_BIND(sceMpegQueryStreamOffset, hm_MpegQueryStreamOffset)
RS_BIND(sceMpegQueryStreamSize, hm_MpegQueryStreamSize)
RS_BIND(sceMpegRegistStream, hm_MpegRegistStream)
RS_BIND(sceMpegUnRegistStream, hm_MpegUnRegistStream)
RS_BIND(sceMpegMallocAvcEsBuf, hm_MpegMallocAvcEsBuf)
RS_BIND(sceMpegFreeAvcEsBuf, hm_MpegFreeAvcEsBuf)
RS_BIND(sceMpegInitAu, hm_MpegInitAu)
RS_BIND(sceMpegQueryAtracEsSize, hm_MpegQueryAtracEsSize)
RS_BIND(sceMpegRingbufferPut, hm_MpegRingbufferPut)
RS_BIND(sceMpegRingbufferAvailableSize, hm_MpegRingbufferAvailableSize)
RS_BIND(sceMpegGetAvcAu, hm_MpegGetAvcAu)
RS_BIND(sceMpegAvcDecode, hm_MpegAvcDecode)
RS_BIND(sceMpegAvcDecodeStop, hm_MpegAvcDecodeStop)
RS_BIND(sceMpegGetAtracAu, hm_MpegGetAtracAu)
RS_BIND(sceMpegAtracDecode, hm_MpegAtracDecode)
RS_BIND(scePsmfSetPsmf, hm_PsmfSetPsmf)
RS_BIND(scePsmfGetNumberOfSpecificStreams, hm_PsmfGetNumberOfSpecificStreams)
static const hle_t *handlers[512]; static unsigned char seen[512]; static unsigned long ncalls[512];
/* slots: the emulated calls' glue indices (0 .. RC_NSTUBS-1), then one per bound call (RS_BIND), numbered as first called */
static const char *bind_name[NSLOT];
static const char *hname(int i){ if (i >= RC_NSTUBS) return i < NSLOT && bind_name[i] ? bind_name[i] : "?"; return handlers[i] ? handlers[i]->name : "?"; }
/* every bound call: the thread's last-call / inside-call record (hang reports) and, with the profiler on, its time */
u64 rs_bind_begin(sdkcall_t *c, int *slot, const char *name){
    static int next = -1; if (*slot < 0) { if (next < 0) next = RC_NSTUBS; int k = __sync_fetch_and_add(&next, 1); if (k >= NSLOT) k = NSLOT - 1; bind_name[k] = name; *slot = k; }
    pthread_once(&cpu_once, mk_cpu_key); pthread_setspecific(k_cpu, c);
    kthread_t *me = rs_kthread_cur(); if (!me) return 0;
    me->ncalls_t++; me->prev = me->last; me->last = *slot + 1; me->last_a0 = c->r[4]; me->in = *slot + 1;
    if (!perf_on) return 0;
    if (!me->p_us) { me->p_us = calloc(NSLOT, 8); me->p_n = calloc(NSLOT, 8); }
    return rs_perf_us(); }
void rs_bind_end(int slot, u64 t0){
    kthread_t *me = rs_kthread_cur(); if (!me) return; me->in = 0;
    if (t0 && me->p_us) { u64 t = rs_perf_us() - t0; me->p_us[slot] += t; me->p_n[slot]++; me->p_hle += t; } }
void hle_init(const char *root, u32 heap_lo, u32 heap_hi){
    if (root) strncpy(g_root, root, sizeof g_root - 1); { rs_region_add(rs_scratchpad_addr(), 0x4000); } vol_base = heap_hi - 0x400000u; hle_heap_lo = heap_lo; hle_heap_hi = vol_base; rs_mem_init(hle_heap_lo, hle_heap_hi); rs_ge_reset(); ge_intr_start(); trace_all = getenv("RS_TRACE") != 0;
    big_lock();
}
void hle_lock_release_for_main(void){ pthread_mutex_unlock(&big); }
void hle_wait_all_threads(void){ while (g_alive_threads > 0) big_wait(&gcv); }
void rs_ge_summary(void);
void hle_report(void){ rs_ge_summary();
    { const char *d = getenv("RS_DUMP"); while (d && *d) { unsigned a = 0, n = 0; if (sscanf(d, "%x:%x", &a, &n) != 2) break;
        fprintf(stderr, "[DUMP] %08x:", a); for (unsigned i = 0; i < n; i += 4) fprintf(stderr, "%s%08x", (i & 31) ? " " : "\n  ", LW(a + i)); fprintf(stderr, "\n");
        d = strchr(d, ','); if (d) d++; } }
    { extern void rs_audio_summary(void); rs_audio_summary(); } fprintf(stderr, "\n==== RUN SUMMARY ====\nframes(vblank waits)=%d  GE lists queued=%d  live threads=%d\n", g_frames, g_ge_lists, g_alive_threads);
    for (int i = 0; i < rs_nthreads; i++) { kthread_t *t = rs_threads[i]; int l = t->last - 1;
        fprintf(stderr, "  thread %-22s %s last call: %s\n", t->name, t->exited ? "EXITED" : "alive ", l < 0 ? "-" : hname(l)); fprintf(stderr, "      ra=%08x a0=%x  total HLE calls=%lu\n", t->last_ra, t->last_a0, t->ncalls_t); 
        if (l >= 0 && l < RC_NSTUBS && !handlers[l]) fprintf(stderr, "      (%s %08X)\n", rc_stubs[l].lib, rc_stubs[l].nid); }
    int un = 0; for (int i = 0; i < RC_NSTUBS; i++) if (!handlers[i] && ncalls[i]) { if (!un++) fprintf(stderr, "Unimplemented firmware calls that were hit (lib NID count):\n"); fprintf(stderr, "  %-18s %08X  x%lu\n", rc_stubs[i].lib, rc_stubs[i].nid, ncalls[i]); }
    if (!un) fprintf(stderr, "No unimplemented firmware calls were hit.\n");
}
void hle_call(sdkcall_t *c, int idx){
    if (idx < 0) { fprintf(stderr, "[HLE] bad stub\n"); exit(5); }
    pthread_once(&cpu_once, mk_cpu_key); pthread_setspecific(k_cpu, c); ncalls[idx]++; kthread_t *me = rs_kthread_cur(); if (me) { me->ncalls_t++; me->prev = me->last; me->last = idx + 1; me->last_ra = c->r[31]; me->last_a0 = c->r[4]; }
    const hle_t *h = handlers[idx];
    if (!seen[idx]) { seen[idx] = 1; fprintf(stderr, "[HLE] first call: %s %s (%08X) a0=%x a1=%x a2=%x a3=%x\n", rc_stubs[idx].lib, h ? h->name : "<UNIMPLEMENTED>", rc_stubs[idx].nid, A0, A1, A2, A3); }
    else if (trace_all) fprintf(stderr, "[HLE] %s %08X\n", rc_stubs[idx].lib, rc_stubs[idx].nid);
    if (h) { if (me) me->in = idx + 1;
        if (perf_on && me) { if (!me->p_us) { me->p_us = calloc(NSLOT, 8); me->p_n = calloc(NSLOT, 8); }
            u64 t = rs_perf_us(); h->fn(c); t = rs_perf_us() - t; me->p_us[idx] += t; me->p_n[idx]++; me->p_hle += t; } else h->fn(c);
        if (me) me->in = 0; return; }
    V0 = 0; V1 = 0;
    /* Unimplemented calls must never become a busy loop that starves the other guest threads. */
    if (!strncmp(rc_stubs[idx].lib, "sceSas", 6)) return;                 /* voice parameter writes: never sleep (see the audio section) */
    unlocked_sleep(150);
}

/* ---------------- hang report (platform watchdog; read without the big lock: a snapshot for diagnosis, not exact) ---------------- */
int rs_hang_report(char *b, int n){
    int o = 0; extern volatile int g_frames;
#define HP(...) do { if (o < n) o += snprintf(b + o, (size_t)(n - o), __VA_ARGS__); } while (0)
    int held = pthread_mutex_trylock(&big) != 0; if (!held) pthread_mutex_unlock(&big);
    pthread_t ow = big_owner; const char *own = "a host thread (frontend / game start-up / audio)";
    for (int i = 0; i < rs_nthreads; i++) if (rs_threads[i] && pthread_equal(rs_threads[i]->th, ow)) own = rs_threads[i]->name;
    if (gi_th_ok && pthread_equal(gi_th, ow)) own = "GE interrupt";
    HP("vblanks %d | big lock %s, last taken by '%s'\n", g_frames, held ? "HELD" : "free", own);
    HP("GE: lists posted %u, finish callbacks queued %u delivered %u (running %u)\n", rs_ge_posted(), gi_h, gi_t, gi_running);
    for (int i = 0; i < rs_nthreads; i++) { kthread_t *t = rs_threads[i]; if (!t) continue; int in = t->in, l = t->last - 1;
        HP("  %-24s %s  %s%s  last call %s  ra=%08x a0=%x calls=%lu\n", t->name, t->exited ? "exited" : (t->started ? "alive " : "new   "),
           in ? "INSIDE " : "guest code", in ? hname(in - 1) : "", l < 0 ? "-" : hname(l), t->last_ra, t->last_a0, t->ncalls_t); }
#undef HP
    return o; }

