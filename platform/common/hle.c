/* PSP firmware (HLE) layer: kernel objects, memory, IO, timing + logging stubs for the rest. */
#define _GNU_SOURCE
#include "psp_impl.h"
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

static pthread_mutex_t big = PTHREAD_MUTEX_INITIALIZER;
static volatile int big_waiting;                     /* threads blocked taking the big lock (yield_big hands it over only to them) */
/* Condition variables for waits between threads (always used as "while (!condition) wait").
 * On the Vita they are built on a kernel semaphore instead of the pthread library's condition variables: a 3-core build froze with the
 * GE interrupt thread and the game's main thread both waiting on one pthread condition variable whose condition had become true
 * (hang.txt: a list-finish callback queued but never picked up).  Here a broadcast posts one token per waiting thread that has none
 * yet (tokens == the semaphore's count, kept under the mutex), so no wake-up is lost, and every wait also gives up after 50 ms and
 * re-checks its condition, so even a lost wake-up would cost 50 ms instead of a freeze. */
#if defined(__vita__) || defined(RS_SEMCOND)
#ifdef __vita__
#include <psp2/kernel/threadmgr.h>
typedef SceUID rs_sem_t;
static void rs_sem_new(rs_sem_t *s){ *s = sceKernelCreateSema("rs_cond", 0, 0, 1 << 20, NULL); }
static int rs_sem_wait(rs_sem_t *s, unsigned us){ SceUInt to = us; return sceKernelWaitSema(*s, 1, &to) >= 0; }
static void rs_sem_post(rs_sem_t *s, int n){ sceKernelSignalSema(*s, n); }
#else                                                                   /* RS_SEMCOND: the same on Linux (POSIX semaphores), for testing */
#include <semaphore.h>
typedef struct { sem_t s; } rs_sem_t;
static void rs_sem_new(rs_sem_t *s){ sem_init(&s->s, 0, 0); }
static int rs_sem_wait(rs_sem_t *s, unsigned us){ struct timespec ts; clock_gettime(CLOCK_REALTIME, &ts); ts.tv_nsec += (long)us * 1000; ts.tv_sec += ts.tv_nsec / 1000000000L; ts.tv_nsec %= 1000000000L;
    while (sem_timedwait(&s->s, &ts) != 0) if (errno != EINTR) return 0; return 1; }
static void rs_sem_post(rs_sem_t *s, int n){ while (n-- > 0) sem_post(&s->s); }
#endif
typedef struct { rs_sem_t sem; int made, waiters, tokens; } rs_cond_t;
#define RS_COND_INIT {0}
static void rc_wait(rs_cond_t *cv, pthread_mutex_t *m){                  /* m held */
    if (!cv->made) { rs_sem_new(&cv->sem); cv->made = 1; }
    cv->waiters++; pthread_mutex_unlock(m);
    int got = rs_sem_wait(&cv->sem, 50000);
    if (m == &big) __sync_add_and_fetch(&big_waiting, 1);
    pthread_mutex_lock(m); if (m == &big) __sync_sub_and_fetch(&big_waiting, 1);
    cv->waiters--; if (got) cv->tokens--; }
static void rc_broadcast(rs_cond_t *cv){                                 /* m held */
    if (!cv->made) { rs_sem_new(&cv->sem); cv->made = 1; }
    int n = cv->waiters - cv->tokens; if (n > 0) { cv->tokens += n; rs_sem_post(&cv->sem, n); } }
#else
typedef struct { pthread_cond_t c; } rs_cond_t;
#define RS_COND_INIT {PTHREAD_COND_INITIALIZER}
static void rc_wait(rs_cond_t *cv, pthread_mutex_t *m){ pthread_cond_wait(&cv->c, m); }
static void rc_broadcast(rs_cond_t *cv){ pthread_cond_broadcast(&cv->c); }
#endif
static rs_cond_t gcv = RS_COND_INIT;
/* Per-thread guest state (FPU control word, vector registers, $k0) with RS_TLS_STRUCT: guest code reaches it through the global
 * rs_tls_cur instead of thread-local storage (emulated on the Vita: a library call per access, ~5000 per frame in battles).  Only one
 * guest thread runs at a time - the one holding the big lock - so every acquisition of the big lock points rs_tls_cur at the
 * acquiring thread's own block. */
#ifdef RS_TLS_STRUCT
rs_tls_t *rs_tls_cur;
#define TLS_RESUME() (rs_tls_cur = rs_tls())
#else
#define TLS_RESUME() ((void)0)
#endif
static volatile pthread_t big_owner;                 /* last thread to take the big lock (hang reports) */
static inline void big_lock(void){ __sync_add_and_fetch(&big_waiting, 1); pthread_mutex_lock(&big); __sync_sub_and_fetch(&big_waiting, 1); big_owner = pthread_self(); TLS_RESUME(); }
static inline void big_wait(rs_cond_t *cv){ rc_wait(cv, &big); big_owner = pthread_self(); TLS_RESUME(); }
static char g_root[1024] = ".";
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
static u64 guest_us(void){ static int vc = -1; static u64 reads; if (vc < 0) vc = getenv("RS_VCLOCK") != 0;
    return vc ? (u64)g_frames * 16667ull + ++reads : now_us(); }
#include "gfx.h"
static void unlocked_sleep(unsigned us){ u64 t = rs_perf_us(); pthread_mutex_unlock(&big); usleep(us); big_lock(); rs_perf.sleeps++; rs_perf.sleep_us += rs_perf_us() - t; }
/* Let another guest thread run.  On the Vita sched_yield() is a 1 ms sleep (pthread-embedded: pte_osThreadSleep(1)), which cost the
 * game's main thread ~5 ms per frame (it yields when it reads the pad, when a frame is late and every 32 clock reads).  There the
 * big lock is handed over instead: nothing happens when no thread is waiting for it; otherwise the lock is released and this thread
 * waits (up to 0.3 ms, spinning - the waiter runs on another core) until a waiter has taken it, then queues for it again; if no
 * waiter took it by then (one on this same core cannot run while this thread spins), it sleeps 1 ms as before. */
static void yield_big(void){ u64 t = rs_perf_us();
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
__attribute__((weak)) void rs_perf_write(const char *line){ static int on = -1; if (on < 0) on = getenv("RS_PERF") != 0; if (on) fprintf(stderr, "%s", line); }
static const char *hname(int i);
static int perf_on = -1;
static void perf_threads(double fr, double ms);
static void perf_report(void){
    if (perf_on < 0) { const char *e = getenv("RS_PERF"); perf_on = e ? atoi(e) != 0 : 0;
#ifdef __vita__
        { extern int rs_setting_int(const char *, int); perf_on = rs_setting_int("RS_PERF_LOG", 0); }    /* the on-screen HUD replaces the log */
#endif
    }
    if (!perf_on) return;
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
    { extern void rs_perf_extra(char *, int); char e[512]; e[0] = 0; rs_perf_extra(e, sizeof e); if (e[0]) rs_perf_write(e); }
    perf_threads(fr, ms);
    { int o = snprintf(b, sizeof b, "[PERF]   waits:"); extern void perf_sema_report(char *, int, double); perf_sema_report(b + o, (int)(sizeof b - o - 2), fr); strcat(b, "\n"); rs_perf_write(b); } }
static char *gstr(u32 a){ static char b[4][512]; static int k; char *p = b[k++ & 3]; int i = 0; while (i < 511) { char ch = (char)LB(a + i); p[i++] = ch; if (!ch) break; } p[i < 512 ? i : 511] = 0; return p; }

/* ---------------- guest heap (first fit, address ordered) ---------------- */
typedef struct { u32 addr, size; int used, uid; } blk_t;
static blk_t blks[8192]; static int nblk; static int next_uid = 0x1000;
static void heap_init(void){ blks[0] = (blk_t){hle_heap_lo, hle_heap_hi - hle_heap_lo, 0, 0}; nblk = 1; }
static void blk_insert(int i, blk_t b){ memmove(&blks[i + 1], &blks[i], (nblk - i) * sizeof(blk_t)); blks[i] = b; nblk++; }
static int heap_alloc(u32 size, int top, u32 align){
    size = (size + 63) & ~63u; if (align < 64) align = 64;
    if (!top) {
        for (int i = 0; i < nblk; i++) if (!blks[i].used) {
            u32 a = (blks[i].addr + align - 1) & ~(align - 1), pad = a - blks[i].addr;
            if (blks[i].size >= pad + size) {
                if (pad) { blk_insert(i, (blk_t){blks[i].addr, pad, 0, 0}); i++; blks[i].addr += pad; blks[i].size -= pad; }
                if (blks[i].size > size) blk_insert(i + 1, (blk_t){blks[i].addr + size, blks[i].size - size, 0, 0});
                blks[i].size = size; blks[i].used = 1; blks[i].uid = next_uid++; return blks[i].uid; } }
    } else {
        for (int i = nblk - 1; i >= 0; i--) if (!blks[i].used && blks[i].size >= size) {
            u32 end = blks[i].addr + blks[i].size, a = (end - size) & ~(align - 1);
            if (a < blks[i].addr) continue;
            if (a > blks[i].addr) { blks[i].size = a - blks[i].addr; blk_insert(i + 1, (blk_t){a, end - a, 1, next_uid++}); i++; }
            else { blks[i].used = 1; blks[i].uid = next_uid++; }
            if (blks[i].size > size) { blks[i].size = size; }
            return blks[i].uid; }
    }
    return -1;
}
static blk_t *blk_find(int uid){ for (int i = 0; i < nblk; i++) if (blks[i].used && blks[i].uid == uid) return &blks[i]; return 0; }
static void heap_free(int uid){
    for (int i = 0; i < nblk; i++) if (blks[i].used && blks[i].uid == uid) {
        blks[i].used = 0;
        if (i + 1 < nblk && !blks[i + 1].used) { blks[i].size += blks[i + 1].size; memmove(&blks[i + 1], &blks[i + 2], (nblk - i - 2) * sizeof(blk_t)); nblk--; }
        if (i > 0 && !blks[i - 1].used) { blks[i - 1].size += blks[i].size; memmove(&blks[i], &blks[i + 1], (nblk - i - 1) * sizeof(blk_t)); nblk--; }
        return; } }
static u32 heap_free_total(void){ u32 t = 0; for (int i = 0; i < nblk; i++) if (!blks[i].used) t += blks[i].size; return t; }
static u32 heap_free_max(void){ u32 t = 0; for (int i = 0; i < nblk; i++) if (!blks[i].used && blks[i].size > t) t = blks[i].size; return t; }

static void h_AllocPartitionMemory(sdkcall_t *c){ int t = A2; int uid = (t == 2) ? heap_alloc(A3, 0, 64) : heap_alloc(A3, t == 1, 64);
    V0 = uid < 0 ? 0x80020190u : (u32)uid; }
static void h_GetBlockHeadAddr(sdkcall_t *c){ blk_t *b = blk_find(A0); V0 = b ? b->addr : 0; }
static void h_FreePartitionMemory(sdkcall_t *c){ heap_free(A0); V0 = 0; }
static void h_MaxFreeMemSize(sdkcall_t *c){ V0 = heap_free_max(); }
static void h_TotalFreeMemSize(sdkcall_t *c){ V0 = heap_free_total(); }

/* ---------------- threads ---------------- */
typedef struct kthread { int uid; u32 entry, stack, stacksize, prio; char name[32]; pthread_t th; sdkcall_t cpu; int started, exited, status, blk, last, prev; u64 *p_us, *p_n, p_hle, hold_us, holds; unsigned long ncalls_t; u32 last_ra, last_a0; u32 argc, argp; u8 argbuf[256]; volatile int in; } kthread_t;      /* in: 1 + index of the firmware call it is inside (0 = guest code) */
static kthread_t *threads[256]; static int nthreads;
static pthread_key_t k_cur, k_cpu; static pthread_once_t key_once = PTHREAD_ONCE_INIT;
static void mk_keys(void){ pthread_key_create(&k_cur, 0); pthread_key_create(&k_cpu, 0); }
#define cur_thread ((kthread_t *)pthread_getspecific(k_cur))
static kthread_t *thr_find(int uid){ for (int i = 0; i < nthreads; i++) if (threads[i]->uid == uid) return threads[i]; return 0; }
static void h_CreateThread(sdkcall_t *c){
    kthread_t *t = calloc(1, sizeof *t); t->uid = next_uid++; strncpy(t->name, gstr(A0), 31); t->entry = A1; t->prio = A2; t->stacksize = A3 ? A3 : 0x4000;
    t->blk = heap_alloc(t->stacksize, 1, 256); blk_t *b = blk_find(t->blk); t->stack = b ? b->addr : 0; threads[nthreads++] = t; V0 = t->uid;
    fprintf(stderr, "[HLE] CreateThread '%s' entry=%08x prio=%d stack=%x\n", t->name, t->entry, t->prio, t->stacksize); }
/* CPU core placement of each thread (platform hook; the Vita build pins threads to its 3 application cores) */
__attribute__((weak)) void rs_thread_cores(const char *name){ (void)name; }
static void *thread_main(void *p){
    kthread_t *t = p; pthread_once(&key_once, mk_keys); pthread_setspecific(k_cur, t); big_lock(); sdkcall_t *c = &t->cpu; memset(c, 0, sizeof *c); c->thread = t; { extern void rs_thread_init(void); rs_thread_init(); } rs_thread_cores(t->name);
    u32 sp = t->stack + t->stacksize - 64; if (t->argc) { sp -= (t->argc + 15) & ~15u; memcpy(g_mem + GADDR(sp), t->argbuf, t->argc); c->r[5] = sp; }
    fprintf(stderr, "[HLE] thread '%s' start: arglen=%u argp=%08x sp=%08x\n", t->name, t->argc, t->argp, sp);
    c->r[4] = t->argc; c->r[29] = sp; c->r[28] = 0; c->r[31] = 0;
    CALLDYN(c, t->entry);
    t->status = c->r[2]; t->exited = 1; g_alive_threads--; fprintf(stderr, "[HLE] thread '%s' returned %d\n", t->name, t->status);
    rc_broadcast(&gcv); pthread_mutex_unlock(&big); return 0; }
static void h_StartThread(sdkcall_t *c){ kthread_t *t = thr_find(A0); if (!t || t->started) { V0 = 0x800201A6u; return; }
    fprintf(stderr, "[HLE] StartThread '%s' from ra=%08x fn=%08x arg=%08x\n", t->name, c->r[31], A2 ? LW(A2) : 0, A2 ? LW(A2 + 4) : 0); if (strstr(t->name, "Atrac")) { extern void rc_dump_stack(sdkcall_t *, const char *); rc_dump_stack(c, "atrac start"); }
    t->started = 1; t->argc = A1 > 256 ? 256 : A1; t->argp = A2; if (t->argc) memcpy(t->argbuf, g_mem + GADDR(A2), t->argc); g_alive_threads++;
    pthread_attr_t at; pthread_attr_init(&at); { extern void rs_thread_attr(pthread_attr_t *, u32 psp_stack); rs_thread_attr(&at, t->stacksize); }
    pthread_create(&t->th, &at, thread_main, t); V0 = 0; }
static void h_ExitThread(sdkcall_t *c){ kthread_t *t = cur_thread; if (t) { t->status = A0; t->exited = 1; g_alive_threads--; rc_broadcast(&gcv); pthread_mutex_unlock(&big); pthread_exit(0); } }
static void h_DeleteThread(sdkcall_t *c){ V0 = 0; }
static void h_WaitThreadEnd(sdkcall_t *c){ kthread_t *t = thr_find(A0); if (!t) { V0 = 0x800201A5u; return; } while (!t->exited) big_wait(&gcv); V0 = t->status; }
static void h_Delay(sdkcall_t *c){ unsigned us = A0; if (us == 1000000) fprintf(stderr, "[DBG] 1s poll: s0(r16)=%08x ra=%08x\n", c->r[16], c->r[31]); if (us < 500) { yield_big(); } else unlocked_sleep(us > 200000 ? 200000 : us); V0 = 0; }
static void h_GetThreadId(sdkcall_t *c){ V0 = cur_thread ? cur_thread->uid : 0x1; }
static void h_GetThreadPrio(sdkcall_t *c){ V0 = cur_thread ? cur_thread->prio : 32; }
static void h_ChangePrio(sdkcall_t *c){ kthread_t *t = A0 ? thr_find(A0) : cur_thread; if (t) t->prio = A1; V0 = 0; }
static int fl_tick2, fl_rtc; static u32 tl_ra[8]; static int tl_n[8];
static void h_SysTimeLow(sdkcall_t *c){ V0 = (u32)guest_us(); { static unsigned k; if ((++k & 31) == 0) yield_big(); } fl_tick2++;   /* yielding on every call cost ~85 us each (x100/frame in big battles) */
    }
static void h_SleepThread(sdkcall_t *c){ for (;;) unlocked_sleep(100000); }

/* semaphores */
typedef struct { int uid; int count, max; u64 wait_us, waits; void *sig_th; int sig_prev; char name[24]; void *owner; u64 t_acq; } sema_t; static sema_t semas[256]; static int nsema;
static sema_t *sema_find(int uid){ for (int i = 0; i < nsema; i++) if (semas[i].uid == uid) return &semas[i]; return 0; }
static void h_CreateSema(sdkcall_t *c){ sema_t *s = &semas[nsema++]; s->uid = next_uid++; strncpy(s->name, gstr(A0), 23); s->count = A2; s->max = A3; V0 = s->uid; }
static void h_DeleteSema(sdkcall_t *c){ V0 = 0; }
static void perf_threads(double fr, double ms){
    for (int i = 0; i < nthreads; i++) { kthread_t *t = threads[i]; if (!t || !t->p_us || t->exited) continue; char b[1024];
        int o = snprintf(b, sizeof b, "[PERF]   thread %-20s guest %.2f ms, firmware %.2f ms, holds mutexes x%.1f %.2f ms:", t->name, ms - t->p_hle / fr / 1000, t->p_hle / fr / 1000, t->holds / fr, t->hold_us / fr / 1000); t->holds = t->hold_us = 0;
        for (int k = 0; k < 5; k++) { int best = -1; for (int j = 0; j < RC_NSTUBS; j++) if (t->p_us[j] && (best < 0 || t->p_us[j] > t->p_us[best])) best = j; if (best < 0) break;
            o += snprintf(b + o, sizeof b - o, " %s x%.1f %.2f ms;", hname(best), t->p_n[best] / fr, t->p_us[best] / fr / 1000); t->p_us[best] = 0; }
        memset(t->p_us, 0, RC_NSTUBS * 8); memset(t->p_n, 0, RC_NSTUBS * 8); t->p_hle = 0; snprintf(b + o, sizeof b - o, "\n"); rs_perf_write(b); } }
void perf_sema_report(char *b, int n, double fr){ int o = 0;
    for (int k = 0; k < 3; k++) { int best = -1; for (int i = 0; i < nsema; i++) if (semas[i].wait_us > 1000 && (best < 0 || semas[i].wait_us > semas[best].wait_us)) best = i; if (best < 0) break; sema_t *s = &semas[best];
        kthread_t *t = s->sig_th; o += snprintf(b + o, n - o, " | sema '%s' %x waits %.1f %.2f ms, signalled by '%s' after %s", s->name, s->uid, s->waits / fr, s->wait_us / fr / 1000, t ? t->name : "?", s->sig_prev > 0 ? hname(s->sig_prev - 1) : "-");
        s->wait_us = 0; s->waits = 0; if (o > n - 120) break; }
    for (int i = 0; i < nsema; i++) semas[i].wait_us = semas[i].waits = 0; }
static void h_SignalSema(sdkcall_t *c){ sema_t *s = sema_find(A0); if (!s) { V0 = 0x80020199u; return; } if (s->owner && s->max == 1) { kthread_t *o = s->owner; o->hold_us += rs_perf_us() - s->t_acq; o->holds++; s->owner = 0; } s->count += A1; s->sig_th = cur_thread; s->sig_prev = cur_thread ? cur_thread->prev : 0; rc_broadcast(&gcv); V0 = 0; }
static void h_WaitSema(sdkcall_t *c){ sema_t *s = sema_find(A0); if (!s) { V0 = 0x80020199u; return; } u64 t = rs_perf_us(); while (s->count < (int)A1) big_wait(&gcv); s->count -= A1; s->wait_us += rs_perf_us() - t; s->waits++; s->owner = cur_thread; s->t_acq = rs_perf_us(); V0 = 0; }
static void h_PollSema(sdkcall_t *c){ sema_t *s = sema_find(A0); if (!s) { V0 = 0x80020199u; return; } if (s->count >= (int)A1) { s->count -= A1; s->owner = cur_thread; s->t_acq = rs_perf_us(); V0 = 0; } else V0 = ERR_SEMA_ZERO; yield_big(); }

/* event flags */
typedef struct { int uid; u32 pat; } evf_t; static evf_t evfs[256]; static int nevf;
static evf_t *evf_find(int uid){ for (int i = 0; i < nevf; i++) if (evfs[i].uid == uid) return &evfs[i]; return 0; }
static void h_CreateEvf(sdkcall_t *c){ evf_t *e = &evfs[nevf++]; e->uid = next_uid++; e->pat = A2; fprintf(stderr, "[EVF] CREATE '%s' uid=%x pat=%x by '%s' ra=%08x\n", gstr(A0), e->uid, e->pat, cur_thread ? cur_thread->name : "?", c->r[31]); V0 = e->uid; }
static int evlog;
static void h_SetEvf(sdkcall_t *c){ evf_t *e = evf_find(A0); if (evlog++ < 80) fprintf(stderr, "[EVF] SET   uid=%x bits=%x by '%s' ra=%08x\n", A0, A1, cur_thread ? cur_thread->name : "?", c->r[31]); if (!e) { V0 = 0x80020 | 0x80000000u; return; } e->pat |= A1; rc_broadcast(&gcv); V0 = 0; }
static void h_ClearEvf(sdkcall_t *c){ evf_t *e = evf_find(A0); if (e) e->pat &= A1; V0 = 0; }
static void h_WaitEvf(sdkcall_t *c){ evf_t *e = evf_find(A0); u32 bits = A1, mode = A2;
    if (!e) { V0 = 0x80020000u; return; }
    if (evlog++ < 80) fprintf(stderr, "[EVF] WAIT  uid=%x bits=%x mode=%x pat=%x by '%s' ra=%08x\n", A0, bits, mode, e->pat, cur_thread ? cur_thread->name : "?", c->r[31]);
    for (;;) { int ok = (mode & 1) ? ((e->pat & bits) != 0) : ((e->pat & bits) == bits);
        if (ok) { if (A3) SW(A3, e->pat); if (mode & 0x10) e->pat = 0; if (mode & 0x20) e->pat &= ~bits; V0 = 0; return; }
        big_wait(&gcv); } }


/* fixed-length pools (the game builds its main heap from one big FPL block) */
typedef struct { int uid; u32 blocksize, nblocks, base; u32 used[64]; } fpl_t; static fpl_t fpls[32]; static int nfpl;
static fpl_t *fpl_find(int uid){ for (int i = 0; i < nfpl; i++) if (fpls[i].uid == uid) return &fpls[i]; return 0; }
static void h_CreateFpl(sdkcall_t *c){ fpl_t *f = &fpls[nfpl++]; f->uid = next_uid++; f->blocksize = A3; f->nblocks = T0 ? T0 : 1;
    int b = heap_alloc(f->blocksize * f->nblocks, 0, 64); blk_t *bb = b < 0 ? 0 : blk_find(b);
    if (!bb) { nfpl--; fprintf(stderr, "[HLE] CreateFpl: out of guest memory (%u x %u)\n", f->blocksize, f->nblocks); V0 = 0x80020190u; return; }
    f->base = bb->addr; fprintf(stderr, "[HLE] CreateFpl '%s' block=%u x %u at %08x\n", gstr(A0), f->blocksize, f->nblocks, f->base); V0 = f->uid; }
static void h_AllocateFpl(sdkcall_t *c){ fpl_t *f = fpl_find(A0); if (!f) { V0 = 0x80020199u; return; }
    for (u32 i = 0; i < f->nblocks && i < 64 * 32; i++) if (!(f->used[i >> 5] & (1u << (i & 31)))) { f->used[i >> 5] |= 1u << (i & 31); SW(A1, f->base + i * f->blocksize); V0 = 0; return; }
    V0 = 0x800201A9u; }
static void h_FreeFpl(sdkcall_t *c){ fpl_t *f = fpl_find(A0); if (!f) { V0 = 0x80020199u; return; } u32 i = (A1 - f->base) / f->blocksize; if (i < f->nblocks) f->used[i >> 5] &= ~(1u << (i & 31)); V0 = 0; }


/* ---------------- callbacks (delivered when the owning thread sleeps in a ...CB call) ---------------- */
typedef struct { int uid; u32 func, arg, count; kthread_t *owner; u32 pend[8]; int npend; } cb_t; static cb_t cbs[64]; static int ncb;
static void h_CreateCallback(sdkcall_t *c){ cb_t *b = &cbs[ncb++]; b->uid = next_uid++; b->func = A1; b->arg = A2; b->owner = cur_thread; V0 = b->uid;
    fprintf(stderr, "[CB] create '%s' uid=%x func=%08x arg=%08x owner='%s'\n", gstr(A0), b->uid, b->func, b->arg, cur_thread ? cur_thread->name : "?"); }
static void cb_notify(int uid, u32 arg){ for (int i = 0; i < ncb; i++) if (cbs[i].uid == uid && cbs[i].npend < 8) { cbs[i].pend[cbs[i].npend++] = arg; fprintf(stderr, "[CB] notify uid=%x arg=%x\n", uid, arg); } }
static void run_callbacks(sdkcall_t *c){
    for (int i = 0; i < ncb; i++) { cb_t *b = &cbs[i]; if (b->owner != cur_thread) continue;
        while (b->npend) { u32 arg = b->pend[0]; memmove(b->pend, b->pend + 1, (--b->npend) * 4);
            u32 save[32], hi = c->hi, lo = c->lo; memcpy(save, c->r, sizeof save);
            fprintf(stderr, "[CB] run uid=%x func=%08x count=%u arg=%x on '%s'\n", b->uid, b->func, b->count + 1, arg, cur_thread ? cur_thread->name : "?");
            c->r[4] = ++b->count; c->r[5] = arg; c->r[6] = b->arg; c->r[31] = 0; CALLDYN(c, b->func);
            memcpy(c->r, save, sizeof save); c->hi = hi; c->lo = lo; } } }
static void h_DelayCB(sdkcall_t *c){ run_callbacks(c); unsigned us = A0; if (us < 500) yield_big(); else unlocked_sleep(us > 200000 ? 200000 : us); run_callbacks(c); V0 = 0; }
static void h_Devctl(sdkcall_t *c){
    u32 cmd = A1; V0 = 0;
    if (cmd == 0x02415821u) cb_notify(LW(A2), 1);               /* register MS insert/eject callback -> report "inserted" */
    else if (cmd == 0x02425823u) { if (T0) SW(T0, 1); }          /* is memory stick inserted */
    else if (cmd == 0x02425818u) { u32 p = LW(A2); SW(p, 0x40000); SW(p + 4, 0x30000); SW(p + 8, 0x800000); SW(p + 12, 512); SW(p + 16, 64); }
}
static void h_UmdRegCb(sdkcall_t *c){ cb_notify(A0, 0x32); V0 = 0; }


/* ---------------- utility dialogs, modules, misc (NIDs identified by SHA-1 of the SDK function name) ---------------- */
/* On-screen keyboard.  A platform with a native keyboard implements rs_osk_begin/rs_osk_poll (the PS Vita: its IME dialog); without
 * one the text the game proposes is accepted as typed. */
__attribute__((weak)) int rs_osk_begin(const u16 *title, const u16 *initial, int max_len){ (void)title; (void)initial; (void)max_len; return 0; }
__attribute__((weak)) int rs_osk_poll(u16 *out, int max_len){ (void)out; (void)max_len; return -1; }   /* 0 running, 1 entered, -1 cancelled */
static int osk_state; static u32 osk_params; static int osk_polls, osk_native;
static u32 osk_data(void){ return LW(osk_params + 60); }
static int ustrcpy_in(u16 *dst, u32 src, int max){ int n = 0; if (src) while (n < max - 1 && LH(src + n * 2)) { dst[n] = LH(src + n * 2); n++; } dst[n] = 0; return n; }
static void osk_finish(const u16 *text, int result){         /* result: 0 unchanged, 1 cancelled, 2 changed (PSP_UTILITY_OSK_RESULT_*) */
    u32 data = osk_data();
    if (data) { u32 in = LW(data + 32), out = LW(data + 40), lim = LW(data + 48); int n = 0;
        if (out && lim) { if (text) while (n < (int)lim - 1 && text[n]) { SH(out + n * 2, text[n]); n++; }
                          else if (in) while (n < (int)lim - 1 && LH(in + n * 2)) { SH(out + n * 2, LH(in + n * 2)); n++; }
                          SH(out + n * 2, 0); }
        SW(data + 36, n); SW(data + 44, (u32)result); }
    SW(osk_params + 28, 0); }
static void h_OskInit(sdkcall_t *c){ osk_params = A0; osk_state = 2; osk_polls = 0; osk_native = 0; fprintf(stderr, "[UTIL] OSK start params=%08x\n", A0);
    u32 data = osk_data();
    if (data) { static u16 title[128], init[512]; int lim = (int)LW(data + 48); if (lim <= 0 || lim > 512) lim = 512;
        ustrcpy_in(title, LW(data + 28), 128); ustrcpy_in(init, LW(data + 32), 512); osk_native = rs_osk_begin(title, init, lim - 1); }
    V0 = 0; }
static void osk_step(void){
    if (osk_state != 2) return;
    if (!osk_native) { if (++osk_polls > 6) { osk_finish(0, 2); osk_state = 3; } return; }
    static u16 out[512]; u32 data = osk_data(); int lim = data ? (int)LW(data + 48) : 512; if (lim <= 0 || lim > 512) lim = 512;
    int r = rs_osk_poll(out, lim);
    if (r > 0) { osk_finish(out, 2); osk_state = 3; } else if (r < 0) { osk_finish(0, 1); osk_state = 3; } }
static void h_OskStatus(sdkcall_t *c){ osk_step(); V0 = osk_state; yield_big(); }
static void h_OskUpdate(sdkcall_t *c){ osk_step(); V0 = 0; }
static void h_OskShutdown(sdkcall_t *c){ osk_state = 0; V0 = 0; }
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

/* ---------------- file IO ---------------- */
#include "vfs.h"
typedef struct { FILE *f; void *d; int used; char path[1400]; } fd_t; static fd_t fds[128];
static int resolve_ci(const char *rel, char *out, size_t cap){   /* case-insensitive path walk under g_root */
    if (vfs_iso_active()) return vfs_iso_resolve(rel, out, cap);        /* game files from an ISO image (vfs.c) */
    char cur[1024]; strncpy(cur, g_root, sizeof cur); char tmp[1024]; strncpy(tmp, rel, sizeof tmp); char *save = 0;
    for (char *tok = strtok_r(tmp, "/\\", &save); tok; tok = strtok_r(0, "/\\", &save)) {
        char probe[1400]; snprintf(probe, sizeof probe, "%s/%s", cur, tok); struct stat st;
        if (stat(probe, &st) == 0) { strncpy(cur, probe, sizeof cur); continue; }
        DIR *d = opendir(cur); if (!d) return 0; struct dirent *e; int found = 0;
        while ((e = readdir(d))) if (!strcasecmp(e->d_name, tok)) { snprintf(probe, sizeof probe, "%s/%s", cur, e->d_name); strncpy(cur, probe, sizeof cur); found = 1; break; }
        closedir(d); if (!found) { snprintf(probe, sizeof probe, "%s/%s", cur, tok); strncpy(cur, probe, sizeof cur); return 0 + (snprintf(out, cap, "%s", cur) & 0); } }
    snprintf(out, cap, "%s", cur); return 1; }

/* UMD raw-sector emulation: directory entries report a fake start LBN; "sce_lbn0xLBN_size0xSIZE" paths map back to the file. */
typedef struct { u32 lbn, sectors; char path[1400]; } lbn_t; static lbn_t *lbns; static int nlbn, caplbn; static u32 next_lbn = 0x100;
static u32 lbn_for(const char *full, u32 size){
    for (int i = 0; i < nlbn; i++) if (!strcmp(lbns[i].path, full)) return lbns[i].lbn;
    if (nlbn == caplbn) { caplbn = caplbn ? caplbn * 2 : 1024; lbns = realloc(lbns, caplbn * sizeof(lbn_t)); }
    lbn_t *e = &lbns[nlbn++]; e->lbn = next_lbn; e->sectors = (size + 2047) / 2048 + 1; strncpy(e->path, full, sizeof e->path - 1); e->path[sizeof e->path - 1] = 0; next_lbn += e->sectors; return e->lbn; }
static const char *lbn_lookup(u32 lbn){ for (int i = 0; i < nlbn; i++) if (lbn >= lbns[i].lbn && lbn < lbns[i].lbn + lbns[i].sectors) return lbns[i].path; return 0; }
/* size the game should see for a file: a mod / override replacement may be larger or smaller than the disc file */
static u32 eff_size(const char *full, u32 base){
    if (vfs_iso_active()) return base;
    size_t rl = strlen(g_root); if (strncmp(full, g_root, rl)) return base;
    const char *alt = rs_patch_file(full + rl, full); struct stat st; if (alt && stat(alt, &st) == 0) return (u32)st.st_size; return base; }
static const char *strip_dev(const char *p){ const char *q = strchr(p, ':'); return q ? q + 1 : p; }
static void h_IoOpen(sdkcall_t *c){
    char *p = gstr(A0); u32 fl = A1; char full[1500]; unsigned lb = 0, lsz = 0;
    if (sscanf(strip_dev(p), "/sce_lbn0x%x_size0x%x", &lb, &lsz) == 2 || sscanf(strip_dev(p), "sce_lbn0x%x_size0x%x", &lb, &lsz) == 2) {
        const char *lp = lbn_lookup(lb); if (!lp) { fprintf(stderr, "[IO] unknown raw sector open %s\n", p); V0 = ERR_NOENT; return; } strncpy(full, lp, sizeof full - 1); full[sizeof full - 1] = 0; }
    else resolve_ci(strip_dev(p), full, sizeof full);
    if ((fl & 3) == 1 && !vfs_iso_active()) { size_t rl = strlen(g_root); const char *rel = strncmp(full, g_root, rl) ? strip_dev(p) : full + rl;
        const char *alt = rs_patch_file(rel, full); if (alt) { strncpy(full, alt, sizeof full - 1); full[sizeof full - 1] = 0; } }   /* mods / data patches (read-only opens) */
    const char *mode = (fl & 3) == 1 ? "rb" : ((fl & 3) == 2 ? ((fl & 0x400) ? "wb" : "r+b") : "r+b");
    if (fl & 0x200 && !(fl & 0x400) && !vfs_iso_active()) { FILE *t = fopen(full, "ab"); if (t) fclose(t); }
    FILE *f = vfs_fopen(full, mode); if (!f && (fl & 3) == 3) f = vfs_fopen(full, "rb");
    if (!f) { V0 = ERR_NOENT; fprintf(stderr, "[IO] open FAILED %s\n", p); return; }
    fprintf(stderr, "[IO] open %s\n", p); rs_atrac_note_file(full);
    for (int i = 3; i < 128; i++) if (!fds[i].used) { fds[i] = (fd_t){f, 0, 1, {0}}; V0 = i; return; } fclose(f); V0 = 0x80010018u; }
static void h_IoClose(sdkcall_t *c){ if (A0 < 128 && fds[A0].used) { if (fds[A0].f) fclose(fds[A0].f); if (fds[A0].d) vfs_closedir(fds[A0].d); fds[A0].used = 0; } V0 = 0; }
static void h_IoRead(sdkcall_t *c){ if (A0 >= 128 || !fds[A0].used) { V0 = 0x80010009u; return; } { static int dl = -1, df; if (dl < 0) { dl = getenv("RS_IO_DELAY_US") ? atoi(getenv("RS_IO_DELAY_US")) : 0; df = getenv("RS_IO_DELAY_FROM") ? atoi(getenv("RS_IO_DELAY_FROM")) : 0; } if (dl && g_frames >= df) unlocked_sleep((unsigned)dl); } u32 n = A2; u8 *dst = g_mem + GADDR(A1); V0 = (u32)fread(dst, 1, n, fds[A0].f);
#ifdef RS_CENSUS
    { extern u32 *rs_census_shadow; u32 a = (u32)(uintptr_t)dst; if (rs_census_shadow) for (u32 o = 0; o < V0 && a + o < 0x10000000u; o += 4) rs_census_shadow[(a + o) >> 2] = 1; }   /* 1 = loaded from a file */
#endif
    }
static void h_IoWrite(sdkcall_t *c){ if (A0 == 1 || A0 == 2) { fwrite(g_mem + GADDR(A1), 1, A2, stderr); V0 = A2; return; } if (A0 >= 128 || !fds[A0].used) { V0 = 0x80010009u; return; } V0 = (u32)fwrite(g_mem + GADDR(A1), 1, A2, fds[A0].f); }
static void h_IoLseek(sdkcall_t *c){ if (A0 >= 128 || !fds[A0].used) { V0 = 0x80010009u; V1 = 0xFFFFFFFFu; return; }
    s64 off = (s64)(((u64)A3 << 32) | A2); int wh = T0; fseeko(fds[A0].f, off, wh == 0 ? SEEK_SET : (wh == 1 ? SEEK_CUR : SEEK_END)); s64 pos = ftello(fds[A0].f); V0 = (u32)pos; V1 = (u32)((u64)pos >> 32); }
static void h_IoGetstat(sdkcall_t *c){ char full[1500]; int isdir; unsigned sz; resolve_ci(strip_dev(gstr(A0)), full, sizeof full);
    if (vfs_stat(full, &isdir, &sz) != 0) { fprintf(stderr, "[IO] getstat MISSING %s\n", gstr(A0)); V0 = ERR_NOENT; return; } memset(g_mem + GADDR(A1), 0, 88); SW(A1, isdir ? 0x1000 : 0x2000); u32 esz = isdir ? (u32)sz : eff_size(full, (u32)sz); SW(A1 + 8, esz); SW(A1 + 12, 0); if (!isdir) SW(A1 + 0x40, lbn_for(full, esz)); V0 = 0; }

/* ---------------- misc ---------------- */
/* Platform backends supply pad state. Defaults below are used by the headless host build. */
typedef struct { u32 buttons; u8 lx, ly, rx, ry; } rs_pad_t;
/* Headless default backend: optional script  RS_SCRIPT="frame:hexbuttons[:lx:ly];..."  (state holds from that frame on) */
__attribute__((weak)) void rs_backend_read_pad(rs_pad_t *p){
    p->buttons = 0; p->lx = p->ly = p->rx = p->ry = 0x80;
    static char *scr; static int init; if (!init) { init = 1; const char *e = getenv("RS_SCRIPT"); if (e) scr = strdup(e); }
    if (!scr) return; char *s = strdup(scr), *save = 0;
    /* RS_SCRIPT_CLOCK=1: step = 50 ms of guest clock (one frame of the original 20 FPS game) instead of one vblank -> frame-rate independent */
    static int clk = -1; static u64 t0; if (clk < 0) { clk = getenv("RS_SCRIPT_CLOCK") != 0; t0 = now_us(); }
    unsigned cur = clk ? (unsigned)((now_us() - t0) / 50000ull) : (unsigned)g_frames;
    for (char *tok = strtok_r(s, ";", &save); tok; tok = strtok_r(0, ";", &save)) { unsigned fr = 0, b = 0, lx = 128, ly = 128; int n = sscanf(tok, "%u:%x:%u:%u", &fr, &b, &lx, &ly);
        if (n >= 2 && cur >= fr) { p->buttons = b; p->lx = n >= 3 ? lx : 128; p->ly = n >= 4 ? ly : 128; } }
    free(s); }
extern volatile int rs_turn_x, rs_turn_y;   /* right-stick turning, consumed by the (future) camera patch */
volatile int rs_turn_x, rs_turn_y;
static void h_CtrlRead(sdkcall_t *c){ rs_pad_t p; rs_backend_read_pad(&p); u32 b = A0;
    /* PSP has ONE analog stick: the left Vita stick drives it (move + strafe). The right stick is exported for turning. */
    SW(b, (u32)guest_us()); SW(b + 4, p.buttons); SB(b + 8, p.lx); SB(b + 9, p.ly);
    rs_turn_x = (int)p.rx - 128; rs_turn_y = (int)p.ry - 128; V0 = 1; yield_big(); }
static void dump_frame(const char *dir, int n){
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
        if (getenv("RS_FRAMELOG") && ++n == 600) { fprintf(stderr, "[PACE] unlocked: %.2f ms per frame\n", work / 600e3); n = 0; work = 0; } return; }
    u64 period = 1000000ull / (u64)fps, now = now_us(); if (!epoch) epoch = now;
    /* at most fps frames per second.  A frame that took longer than the period is not held back to the next period boundary (that
     * turned ~37 ms frames into 50 ms ones at 60 fps); the next deadline then counts from now. */
    u64 next = epoch + period;
    if (now >= next) { next = now; epoch = now; yield_big(); }
    else { unlocked_sleep((unsigned)(next - now)); epoch = next; }
    { static u64 req, act, last, work; static int n; u64 t = now_us(); req += next - now; act += t - now; if (last) work += now - last; last = t;
      if (getenv("RS_FRAMELOG") && ++n == 600) { fprintf(stderr, "[PACE] per frame: work %.2f ms, sleep requested %.2f ms, slept %.2f ms\n", work / 600e3, req / 600e3, act / 600e3); n = 0; req = act = work = 0; } } }
static void h_WaitVblank(sdkcall_t *c){ static int fast = -1; if (fast < 0) fast = getenv("RS_FAST") != 0; if (fast) { rs_patch_apply_fps_cap(); yield_big(); } else pace_frame(); rs_patch_vblank(); g_frames++; if (++since_flip >= 30) { since_flip = 0; gfx_frame_ready(); } perf_report();   /* no flip for half a second: show what there is */
    if (getenv("RS_FRAMELOG")) { fl_vb++; fl_note_ra(c->r[31]); if (fl_vb >= 600) { fprintf(stderr, "[FRAME] %d vblank waits, %d frame-buffer flips, %d SystemTimeLow + %d RtcTick queries; vblank callers:", fl_vb, fl_fb, fl_tick2, fl_rtc);
        for (int i = 0; i < 8 && fl_ran[i]; i++) fprintf(stderr, " %08x x%d", fl_ra[i], fl_ran[i]);
        fprintf(stderr, "; time callers:"); for (int i = 0; i < 8 && tl_n[i]; i++) fprintf(stderr, " %08x x%d", tl_ra[i], tl_n[i]); memset(tl_n, 0, sizeof tl_n); fprintf(stderr, "\n"); fl_vb = fl_fb = fl_tick = fl_tick2 = fl_rtc = 0; memset(fl_ran, 0, sizeof fl_ran); } }
    const char *d = getenv("RS_DUMP_DIR"); if (d) { int every = getenv("RS_DUMP_EVERY") ? atoi(getenv("RS_DUMP_EVERY")) : 60; static int from = -1, to; if (from < 0) { from = getenv("RS_DUMP_FROM") ? atoi(getenv("RS_DUMP_FROM")) : 0; to = getenv("RS_DUMP_TO") ? atoi(getenv("RS_DUMP_TO")) : 1 << 30; }
        if (every > 0 && g_frames % every == 0 && g_frames >= from && g_frames <= to) dump_frame(d, g_frames); }
    V0 = 0; }
void rs_display_set(u32, u32, u32); int rs_display_read(u32 *); int rs_ge_enqueue(u32, u32); void rs_ge_update_stall(int, u32); void rs_ge_reset(void);
extern u32 rs_ge_cb_finish_func, rs_ge_cb_finish_arg;
static sdkcall_t *tl_get(void){ pthread_once(&key_once, mk_keys); return (sdkcall_t *)pthread_getspecific(k_cpu); }
/* A new frame is shown when the game flips the display buffer, not at every vertical blank: presenting (and waiting for the target's
 * own display flip) once per vblank kept the renderer thread blocked while the game waited for it to run its GPU lists. */
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
    pthread_once(&key_once, mk_keys); static sdkcall_t ctx; pthread_setspecific(k_cpu, &ctx); { extern void rs_thread_init(void); rs_thread_init(); } rs_thread_cores("GE interrupt");
    for (;;) { pthread_mutex_lock(&gi_m); while (gi_h == gi_t) rc_wait(&gi_work, &gi_m); int id = gi_q[gi_t % 256]; gi_running = 1; pthread_mutex_unlock(&gi_m);
        big_lock(); rs_ge_finish_hook(id); rc_broadcast(&gcv); pthread_mutex_unlock(&big);
        pthread_mutex_lock(&gi_m); gi_t++; gi_running = 0; rc_broadcast(&gi_done); pthread_mutex_unlock(&gi_m); } return 0; }
static void ge_intr_start(void){ pthread_attr_t at; pthread_attr_init(&at); { extern void rs_thread_attr(pthread_attr_t *, u32); rs_thread_attr(&at, 0x10000); } pthread_t t; pthread_create(&t, &at, ge_intr_thread, 0); }
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
static void h_RotateQueue(sdkcall_t *c){ unlocked_sleep(200); V0 = 0; }
static void h_Dopen(sdkcall_t *c){ char full[1500]; const char *p = gstr(A0); resolve_ci(strip_dev(p), full, sizeof full); void *d = vfs_opendir(full);
    if (!d) { fprintf(stderr, "[IO] dopen FAILED %s\n", p); V0 = ERR_NOENT; return; }
    for (int i = 3; i < 128; i++) if (!fds[i].used) { fds[i] = (fd_t){0, d, 1, {0}}; strncpy(fds[i].path, full, sizeof fds[i].path - 1); V0 = i; return; } vfs_closedir(d); V0 = 0x80010018u; }
static void h_Dread(sdkcall_t *c){ if (A0 >= 128 || !fds[A0].used || !fds[A0].d) { V0 = 0x80010009u; return; }
    char name[256], full[2000]; if (!vfs_readdir(fds[A0].d, name, sizeof name, full, sizeof full)) { V0 = 0; return; } memset(g_mem + GADDR(A1), 0, 0x160);
    int isdir = 0; unsigned fsz = 0; vfs_stat(full, &isdir, &fsz);
    SW(A1, isdir ? 0x1000 : 0x2000); if (!isdir) { u32 sz = eff_size(full, (u32)fsz); SW(A1 + 8, sz); SW(A1 + 0x40, lbn_for(full, sz)); } strncpy((char *)(g_mem + GADDR(A1 + 0x58)), name, 255); V0 = 1; }
static void h_One(sdkcall_t *c){ V0 = 1; }
static void h_UmdStat(sdkcall_t *c){ V0 = 0x32; }
static void h_ExitGame(sdkcall_t *c){ fprintf(stderr, "[HLE] sceKernelExitGame called\n"); fflush(stderr); _exit(0); }
static void h_UtilParam(sdkcall_t *c){ if (A0 == 7) SW(A1, 1); else if (A0 == 8) SW(A1, 1); else SW(A1, 0); V0 = 0; }
static void h_RtcTick(sdkcall_t *c){ fl_rtc++; u64 us = guest_us() + 62135596800000000ull; SW(A0, (u32)us); SW(A0 + 4, (u32)(us >> 32)); V0 = 0; }
static void h_Printf(sdkcall_t *c){ fprintf(stderr, "[GAME] %s\n", gstr(A0)); V0 = 0; }

typedef struct { u32 nid; const char *name; void (*fn)(sdkcall_t *); } hle_t;
static const hle_t tbl[] = {
 {0x237DBD4F,"sceKernelAllocPartitionMemory",h_AllocPartitionMemory},{0x9D9A5BA1,"sceKernelGetBlockHeadAddr",h_GetBlockHeadAddr},
 {0xB6D61D02,"sceKernelFreePartitionMemory",h_FreePartitionMemory},{0xA291F107,"sceKernelMaxFreeMemSize",h_MaxFreeMemSize},
 {0xF919F628,"sceKernelTotalFreeMemSize",h_TotalFreeMemSize},
 {0x446D8DE6,"sceKernelCreateThread",h_CreateThread},{0xF475845D,"sceKernelStartThread",h_StartThread},{0xAA73C935,"sceKernelExitThread",h_ExitThread},
 {0x809CE29B,"sceKernelExitDeleteThread",h_ExitThread},{0x9FA03CD3,"sceKernelDeleteThread",h_DeleteThread},{0x278C0DF5,"sceKernelWaitThreadEnd",h_WaitThreadEnd},
 {0xCEADEB47,"sceKernelDelayThread",h_Delay},{0x293B45B8,"sceKernelGetThreadId",h_GetThreadId},{0x94AA61EE,"sceKernelGetThreadCurrentPriority",h_GetThreadPrio},
 {0x71BC9871,"sceKernelChangeThreadPriority",h_ChangePrio},{0x369ED59D,"sceKernelGetSystemTimeLow",h_SysTimeLow},
 {0xD6DA4BA1,"sceKernelCreateSema",h_CreateSema},{0x28B6489C,"sceKernelDeleteSema",h_DeleteSema},{0x3F53E640,"sceKernelSignalSema",h_SignalSema},
 {0x4E3A1105,"sceKernelWaitSema",h_WaitSema},{0x58B1F937,"sceKernelPollSema",h_PollSema},
 {0x55C20A00,"sceKernelCreateEventFlag",h_CreateEvf},{0x1FB15A32,"sceKernelSetEventFlag",h_SetEvf},{0x812346E4,"sceKernelClearEventFlag",h_ClearEvf},{0x402FCF22,"sceKernelWaitEventFlag",h_WaitEvf},
 {0x109F50BC,"sceIoOpen",h_IoOpen},{0x810C4BC3,"sceIoClose",h_IoClose},{0x6A638D83,"sceIoRead",h_IoRead},{0x42EC03AC,"sceIoWrite",h_IoWrite},
 {0x27EB27B8,"sceIoLseek",h_IoLseek},{0xACE946E8,"sceIoGetstat",h_IoGetstat},
 {0x1F803938,"sceCtrlReadBufferPositive",h_CtrlRead},{0x1F4011E6,"sceCtrlSetSamplingMode",h_Zero},{0x6A2774F3,"sceCtrlSetSamplingCycle",h_Zero},
 {0x984C27E7,"sceDisplayWaitVblankStart",h_WaitVblank},{0x46F186C3,"sceDisplayWaitVblankStartCB",h_WaitVblank},{0x289D82FE,"sceDisplaySetFrameBuf",h_SetFrameBuf},{0x0E20F177,"sceDisplaySetMode",h_Zero},
 {0xAB49E76A,"sceGeListEnQueue",h_GeEnqueue},{0x1C0D95A6,"sceGeListEnQueueHead",h_GeEnqueue},{0xE47E40E4,"sceGeEdramGetAddr",h_GeEdramAddr},
 {0x03444EB4,"sceGeListSync",h_GeListSync},{0xB287BD61,"sceGeDrawSync",h_GeDrawSync},{0xE0D68148,"sceGeListUpdateStallAddr",h_GeUpdateStall},{0xA4FC06A4,"sceGeSetCallback",h_GeSetCallback},
 {0x46EBB729,"sceUmdCheckMedium",h_One},{0x6B4A146C,"sceUmdGetDriveStat",h_UmdStat},{0x8EF08FCE,"sceUmdWaitDriveStat",h_UmdStat},{0x4A9E5E29,"sceUmdWaitDriveStatCB",h_UmdStat},{0xC6183D47,"sceUmdActivate",h_Zero},
 {0x05572A5F,"sceKernelExitGame",h_ExitGame},{0xA5DA2406,"sceUtilityGetSystemParamInt",h_UtilParam},{0x3F7AD767,"sceRtcGetCurrentTick",h_RtcTick},
 {0x172D316E,"sceKernelStdout",h_Zero},
 {0x912354A7,"sceKernelRotateThreadReadyQueue",h_RotateQueue},{0xB29DDF9C,"sceIoDopen",h_Dopen},
 {0xF6269B82,"sceUtilityOskInitStart",h_OskInit},{0xF3F76017,"sceUtilityOskGetStatus",h_OskStatus},{0x4B85C861,"sceUtilityOskUpdate",h_OskUpdate},{0x3DFAEBA9,"sceUtilityOskShutdownStart",h_OskShutdown},
 {0x2A2B3DE0,"sceUtilityLoadModule",h_Zero},{0x34B78343,"sceUtilityGetSystemParamString",h_SysParamString},
 {0x977DE386,"sceKernelLoadModule",h_LoadModule},{0x50F0C1EC,"sceKernelStartModule",h_StartModule},{0xD1FF982A,"sceKernelStopModule",h_Zero},{0x2E0911AA,"sceKernelUnloadModule",h_Zero},{0xD8B73127,"sceKernelGetModuleIdByAddress",h_ModuleIdByAddr},
 {0x3E0271D3,"sceKernelVolatileMemLock",h_VolLock},{0xA569E425,"sceKernelVolatileMemUnlock",h_Zero},{0x4AC57943,"sceKernelRegisterExitCallback",h_Zero},{0x04B7766E,"scePowerRegisterCallback",h_Zero},
 {0x79D1C3FA,"sceKernelDcacheWritebackAll",h_Zero},{0x3EE30821,"sceKernelDcacheWritebackRange",h_Zero},{0xB435DEC5,"sceKernelDcacheWritebackInvalidateAll",h_Zero},{0xBFA98062,"sceKernelDcacheInvalidateRange",h_Zero},{0x34B9FA9E,"sceKernelDcacheWritebackInvalidateRange",h_Zero},{0x13A5ABEF,"sceKernelPrintf",h_Zero},
 {0xB29DDF9C,"sceIoDopen",h_Dopen},{0xE3EB004C,"sceIoDread",h_Dread},{0xEB092469,"sceIoDclose",h_IoClose},
 {0x01562BA3,"sceAudioOutput2Reserve",h_Au2Reserve},{0x43196845,"sceAudioOutput2Release",h_Au2Release},{0x2D53F36E,"sceAudioOutput2OutputBlocking",h_Au2Output},
 {0x5EC81C55,"sceAudioChReserve",h_AuChReserve},{0x6FC46853,"sceAudioChRelease",h_Zero},{0x136CAF51,"sceAudioOutputBlocking",h_AuOutBlocking},{0x13F592BC,"sceAudioOutputPannedBlocking",h_AuOutBlocking},
 {0x42778A9F,"__sceSasInit",w_hs_SasInit},{0xA3589D81,"__sceSasCore",w_hs_SasCore},{0x50A14DFC,"__sceSasCoreWithMix",w_hs_SasCoreWithMix},{0x68A46B95,"__sceSasGetEndFlag",w_hs_SasGetEndFlag},
 {0x440CA7D8,"__sceSasSetVolume",w_hs_SasSetVolume},{0xAD84D37F,"__sceSasSetPitch",w_hs_SasSetPitch},{0x99944089,"__sceSasSetVoice",w_hs_SasSetVoice},{0x019B25EB,"__sceSasSetADSR",w_hs_SasSetADSR},
 {0x76F01ACA,"__sceSasSetKeyOn",w_hs_SasSetKeyOn},{0xA0CF2FA4,"__sceSasSetKeyOff",w_hs_SasSetKeyOff},{0x787D04D5,"__sceSasSetPause",w_hs_SasSetPause},{0xE175EF66,"__sceSasGetOutputmode",w_hs_SasGetOutputmode},
 {0xF983B186,"__sceSasRevVON",h_Zero},{0xD5A229C9,"__sceSasRevEVOL",h_Zero},{0x33D4AB37,"__sceSasRevType",h_Zero},{0x267A6DD2,"__sceSasRevParam",h_Zero},
 {0x9EC3676A,"__sceSasSetADSRmode",w_hs_SasSetADSRmode},{0x5F9529F6,"__sceSasSetSL",w_hs_SasSetSL},{0xCBCD4F79,"__sceSasSetSimpleADSR",w_hs_SasSetSimpleADSR},{0xB7660A23,"__sceSasSetNoise",w_hs_SasSetNoise},
 {0xE855BF76,"__sceSasSetOutputmode",w_hs_SasSetOutputmode},{0xD1E0A01E,"__sceSasSetGrain",w_hs_SasSetGrain},{0xBD11B7C2,"__sceSasGetGrain",w_hs_SasGetGrain},{0x2C8E6AB3,"__sceSasGetPauseFlag",w_hs_SasGetPauseFlag},
 {0x74AE582A,"__sceSasGetEnvelopeHeight",w_hs_SasGetEnvelopeHeight},
 {0x7A20E7AF,"sceAtracSetDataAndGetID",w_ha_SetDataAndGetID},{0x6A8C3CD5,"sceAtracDecodeData",w_ha_DecodeData},{0xA2BBA8BE,"sceAtracGetSoundSample",w_ha_GetSoundSample},
 {0x5D268707,"sceAtracGetStreamDataInfo",w_ha_GetStreamDataInfo},{0x7DB31251,"sceAtracAddStreamData",w_ha_AddStreamData},{0x61EB33F5,"sceAtracReleaseAtracID",w_ha_Release},

 {0xC07BB470,"sceKernelCreateFpl",h_CreateFpl},{0x623AE665,"sceKernelAllocateFpl",h_AllocateFpl},{0xF6414A71,"sceKernelFreeFpl",h_FreeFpl},
 {0x68DA9E36,"sceKernelDelayThreadCB",h_DelayCB},{0xE81CAF8F,"sceKernelCreateCallback",h_CreateCallback},{0x54F5FB11,"sceIoDevctl",h_Devctl},{0xAEE7404D,"sceUmdRegisterUMDCallBack",h_UmdRegCb},{0x6AD345D7,"sceKernelSetGPO",h_Zero},{0x092968F4,"sceKernelCpuSuspendIntr",h_Zero},{0x5F10D406,"sceKernelCpuResumeIntr",h_Zero},
 {0x7591C7DB,"sceKernelSetCompiledSdkVersion",h_Zero},{0xF77D77CB,"sceKernelSetCompilerVersion",h_Zero},
};
#define NTBL (int)(sizeof tbl / sizeof tbl[0])
static const hle_t *handlers[512]; static unsigned char seen[512]; static unsigned long ncalls[512];
static const char *hname(int i){ return handlers[i] ? handlers[i]->name : "?"; }
void hle_init(const char *root, u32 heap_lo, u32 heap_hi){
    if (root) strncpy(g_root, root, sizeof g_root - 1); { extern u8 rs_scratchpad[]; rs_region_add((u32)(uintptr_t)rs_scratchpad, 0x4000); } vol_base = heap_hi - 0x400000u; hle_heap_lo = heap_lo; hle_heap_hi = vol_base; heap_init(); rs_ge_reset(); ge_intr_start(); trace_all = getenv("RS_TRACE") != 0;
    for (int i = 0; i < RC_NSTUBS; i++) for (int k = 0; k < NTBL; k++) if (tbl[k].nid == rc_stubs[i].nid) handlers[i] = &tbl[k];
    big_lock();
}
void hle_lock_release_for_main(void){ pthread_mutex_unlock(&big); }
void hle_wait_all_threads(void){ while (g_alive_threads > 0) big_wait(&gcv); }
void rs_ge_summary(void);
void hle_report(void){ rs_ge_summary();
    { extern void rs_audio_summary(void); rs_audio_summary(); } fprintf(stderr, "\n==== RUN SUMMARY ====\nframes(vblank waits)=%d  GE lists queued=%d  live threads=%d\n", g_frames, g_ge_lists, g_alive_threads);
    for (int i = 0; i < nthreads; i++) { kthread_t *t = threads[i]; int l = t->last - 1;
        fprintf(stderr, "  thread %-22s %s last call: %s\n", t->name, t->exited ? "EXITED" : "alive ", l < 0 ? "-" : (handlers[l] ? handlers[l]->name : "<unimplemented>")); fprintf(stderr, "      ra=%08x a0=%x  total HLE calls=%lu\n", t->last_ra, t->last_a0, t->ncalls_t); 
        if (l >= 0 && !handlers[l]) fprintf(stderr, "      (%s %08X)\n", rc_stubs[l].lib, rc_stubs[l].nid); }
    int un = 0; for (int i = 0; i < RC_NSTUBS; i++) if (!handlers[i] && ncalls[i]) { if (!un++) fprintf(stderr, "Unimplemented firmware calls that were hit (lib NID count):\n"); fprintf(stderr, "  %-18s %08X  x%lu\n", rc_stubs[i].lib, rc_stubs[i].nid, ncalls[i]); }
    if (!un) fprintf(stderr, "No unimplemented firmware calls were hit.\n");
}
void hle_call(sdkcall_t *c, int idx){
    if (idx < 0) { fprintf(stderr, "[HLE] bad stub\n"); exit(5); }
    pthread_once(&key_once, mk_keys); pthread_setspecific(k_cpu, c); ncalls[idx]++; if (cur_thread) { cur_thread->ncalls_t++; cur_thread->prev = cur_thread->last; cur_thread->last = idx + 1; cur_thread->last_ra = c->r[31]; cur_thread->last_a0 = c->r[4]; }
    const hle_t *h = handlers[idx];
    if (!seen[idx]) { seen[idx] = 1; fprintf(stderr, "[HLE] first call: %s %s (%08X) a0=%x a1=%x a2=%x a3=%x\n", rc_stubs[idx].lib, h ? h->name : "<UNIMPLEMENTED>", rc_stubs[idx].nid, A0, A1, A2, A3); }
    else if (trace_all) fprintf(stderr, "[HLE] %s %08X\n", rc_stubs[idx].lib, rc_stubs[idx].nid);
    if (h) { kthread_t *me = cur_thread; if (me) me->in = idx + 1;
        if (perf_on && me) { if (!me->p_us) { me->p_us = calloc(RC_NSTUBS, 8); me->p_n = calloc(RC_NSTUBS, 8); }
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
    for (int i = 0; i < nthreads; i++) if (threads[i] && pthread_equal(threads[i]->th, ow)) own = threads[i]->name;
    if (gi_th_ok && pthread_equal(gi_th, ow)) own = "GE interrupt";
    HP("vblanks %d | big lock %s, last taken by '%s'\n", g_frames, held ? "HELD" : "free", own);
    HP("GE: lists posted %u, finish callbacks queued %u delivered %u (running %u)\n", rs_ge_posted(), gi_h, gi_t, gi_running);
    for (int i = 0; i < nthreads; i++) { kthread_t *t = threads[i]; if (!t) continue; int in = t->in, l = t->last - 1;
        HP("  %-24s %s  %s%s  last call %s  ra=%08x a0=%x calls=%lu\n", t->name, t->exited ? "exited" : (t->started ? "alive " : "new   "),
           in ? "INSIDE " : "guest code", in ? hname(in - 1) : "", l < 0 ? "-" : hname(l), t->last_ra, t->last_a0, t->ncalls_t); }
#undef HP
    return o; }
