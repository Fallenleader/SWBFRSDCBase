/* Native threads and synchronisation (ExperimentalRewrite): the game's threads, semaphores, event flags, fixed-length pools,
 * callbacks and delays, bound straight to the game's calls (no emulated firmware dispatch).
 *
 * Each game thread is a native thread (kept and reused on the 32-bit consoles: starting one cost the Vita a visible hitch per voice
 * line).  Waits are native waits on a per-object queue: a signal wakes only that object's waiters.
 *
 * Scheduling: the game's main thread, loader and file-cache threads share one priority and, on the PSP, never interrupted each
 * other - each ran until it blocked - and the game hands data between them without locks.  That contract is kept as the guest lock
 * (guest_sched.h): the game's own code runs one thread at a time between blocking points; every wait here releases it.  Everything
 * that is not the game's code (files, audio, rendering, movies) already runs outside it, in parallel.
 *
 * Typed interface: rs_platform.h (rs_sema_*, rs_evf_*, rs_delay_us, rs_thread_id). */
#include "guest_sched.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rs_platform.h"

#define ARGS u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3
#define UNUSED (void)a0; (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3
#define ERR_NOTHREAD   0x800201A5u
#define ERR_NOTDORMANT 0x800201A6u
#define ERR_NOTDONE    0x800201ADu
#define ERR_NOSEMA     0x80020199u
#define ERR_SEMA_ZERO  0x800201ADu
#define ERR_NOEVF      0x8002019Au
#define ERR_EVF_COND   0x800201AFu
#define ERR_NOFPL      0x8002019Bu
#define ERR_FPL_EMPTY  0x800201A9u
#define ERR_NOMEM      0x80020190u
#define ERR_MAXTHREADS 0x80020064u

/* ---------------- threads ---------------- */
kthread_t *rs_threads[256]; int rs_nthreads;
static pthread_key_t k_cur; static pthread_once_t key_once = PTHREAD_ONCE_INIT;
static void mk_keys(void){ pthread_key_create(&k_cur, 0); }
kthread_t *rs_kthread_cur(void){ pthread_once(&key_once, mk_keys); return (kthread_t *)pthread_getspecific(k_cur); }
#define cur_thread rs_kthread_cur()
extern volatile int g_alive_threads;
static kthread_t *thr_find(int uid){ for (int i = 0; i < rs_nthreads; i++) if (rs_threads[i]->uid == uid) return rs_threads[i]; return 0; }
/* Finished threads give back what they hold: the stack block at exit, the thread itself once deleted (sceKernelDeleteThread or
 * sceKernelExitDeleteThread).  The game starts a new thread for every voice line. */
static void thr_release_stack(kthread_t *t){ if (t->blk > 0) { rs_mem_free(t->blk); t->blk = 0; } }
static void thr_reap(void){
    int k = 0; kthread_t *self = cur_thread;
    for (int i = 0; i < rs_nthreads; i++) { kthread_t *t = rs_threads[i];
        if (t->exited && t->deleted && t != self) { thr_release_stack(t); free(t); continue; }
        rs_threads[k++] = t; }
    rs_nthreads = k; }
int rs_thread_id(void){ kthread_t *t = cur_thread; return t ? t->uid : 1; }

/* (name, entry, priority, stack size, attributes, options) */
u32 psp_sceKernelCreateThread(ARGS){ UNUSED;
    thr_reap(); if (rs_nthreads >= 256) { fprintf(stderr, "[THR] CreateThread '%s': too many threads\n", hle_gstr(a0)); return ERR_MAXTHREADS; }
    kthread_t *t = calloc(1, sizeof *t); t->uid = rs_new_uid(); strncpy(t->name, hle_gstr(a0), 31); t->entry = a1; t->prio = a2; t->stacksize = a3 ? a3 : 0x4000;
    t->blk = rs_mem_alloc(t->stacksize, 1, 256); t->stack = rs_mem_addr(t->blk); rs_threads[rs_nthreads++] = t;
    fprintf(stderr, "[THR] CreateThread '%s' entry=%08x prio=%d stack=%x\n", t->name, t->entry, t->prio, t->stacksize);
    return (u32)t->uid; }
/* CPU core placement of each thread (platform hook; the Vita build pins threads to its application cores) */
__attribute__((weak)) void rs_thread_cores(const char *name){ (void)name; }
__attribute__((weak)) void rs_thread_exit(void){ pthread_exit(0); }        /* the platform may leave a thread its own way (Windows) */
__attribute__((weak)) void rs_thread_stack_done(void){}                    /* platform: the ending thread's own stack can be reused */
static void run_guest(kthread_t *t){
    pthread_once(&key_once, mk_keys); pthread_setspecific(k_cur, t); big_lock(); sdkcall_t *c = &t->cpu; memset(c, 0, sizeof *c); c->thread = t;
    { static __thread int inited; extern void rs_thread_init(void);
      if (!inited) { rs_thread_init(); inited = 1; }                    /* once per native thread (a kept thread runs several of the game's) */
#ifdef RS_TLS_STRUCT
      else { rs_tls_t *x = rs_tls(); u32 k0 = x->psp_k0; memset(x, 0, sizeof *x); x->psp_k0 = k0; }   /* a fresh processor state */
#endif
    }
    rs_thread_cores(t->name);
    u32 sp = t->stack + t->stacksize - 64; if (t->argc) { sp -= (t->argc + 15) & ~15u; memcpy(g_mem + GADDR(sp), t->argbuf, t->argc); c->r[5] = sp; }
    c->r[4] = t->argc; c->r[29] = sp; c->r[28] = 0; c->r[31] = 0;
    CALLDYN(c, t->entry);
    t->status = c->r[2]; t->exited = 1; thr_release_stack(t); g_alive_threads--; fprintf(stderr, "[THR] thread '%s' returned %d\n", t->name, t->status);
    rc_broadcast(&gcv); pthread_mutex_unlock(&big);
#ifndef RS_POOL_TEST
    rs_thread_stack_done();
#endif
}
/* Native threads are kept and reused for the game's next threads on the 32-bit consoles (the 64-bit builds' threads run on stacks
 * given back at exit). */
#if (!defined(RS_DESKTOP) && !defined(RS_GUEST64)) || defined(RS_POOL_TEST)
#define POOLED 1
#include <setjmp.h>
typedef struct worker { pthread_t th; kthread_t *next; rs_cond_t cv; struct worker *link; jmp_buf exit_jb; } worker_t;
static worker_t *idle_workers; static pthread_key_t k_worker; static pthread_once_t kw_once = PTHREAD_ONCE_INIT;
static void mk_kw(void){ pthread_key_create(&k_worker, 0); }
static void *worker_main(void *p){
    worker_t *w = p; pthread_once(&kw_once, mk_kw); pthread_setspecific(k_worker, w);
    for (;;) {
        kthread_t *t = w->next; w->next = 0;
        if (!setjmp(w->exit_jb)) run_guest(t);                          /* sceKernelExitThread comes back here */
        big_lock(); w->link = idle_workers; idle_workers = w;           /* parked until the game starts another thread */
        while (!w->next) big_wait(&w->cv);
        pthread_mutex_unlock(&big); } }
#endif
static void *thread_main(void *p){ run_guest((kthread_t *)p); return 0; }
/* (thread, argument length, argument) */
u32 psp_sceKernelStartThread(ARGS){ UNUSED; kthread_t *t = thr_find((int)a0); if (!t || t->started) return ERR_NOTDORMANT;
    t->started = 1; t->argc = a1 > sizeof t->argbuf ? (u32)sizeof t->argbuf : a1; t->argp = a2; if (t->argc) memcpy(t->argbuf, g_mem + GADDR(a2), t->argc); g_alive_threads++;
    pthread_attr_t at; pthread_attr_init(&at); { extern void rs_thread_attr(pthread_attr_t *, u32 psp_stack); rs_thread_attr(&at, t->stacksize); }
    pthread_attr_setdetachstate(&at, PTHREAD_CREATE_DETACHED);                       /* nobody joins game threads */
#ifndef POOLED
#ifdef RS_DESKTOP
    extern int rs_thread_spawn(pthread_t *, pthread_attr_t *, void *(*)(void *), void *); int e = rs_thread_spawn(&t->th, &at, thread_main, t);   /* platform/desktop (Windows: stack switch) */
#else
    int e = pthread_create(&t->th, &at, thread_main, t);
#endif
#else
    (void)thread_main; int e = 0;
    if (idle_workers) { worker_t *w = idle_workers; idle_workers = w->link; t->th = w->th; w->next = t; rc_broadcast(&w->cv); }   /* a kept thread */
    else { worker_t *w = calloc(1, sizeof *w); w->next = t; e = pthread_create(&w->th, &at, worker_main, w); if (!e) t->th = w->th; else free(w); }
#endif
    pthread_attr_destroy(&at);
    if (e) { fprintf(stderr, "[THR] StartThread '%s': the thread could not be created (%d)\n", t->name, e); t->started = 0; g_alive_threads--; return ERR_NOMEM; }
    return 0; }
static u32 exit_thread(u32 status, int del){ kthread_t *t = cur_thread; if (!t) return 0;
    if (del) t->deleted = 1;
    t->status = (int)status; t->exited = 1; thr_release_stack(t); g_alive_threads--; rc_broadcast(&gcv); pthread_mutex_unlock(&big);
#ifndef RS_POOL_TEST
    rs_thread_stack_done();
#endif
#ifdef POOLED
    { pthread_once(&kw_once, mk_kw); worker_t *w = pthread_getspecific(k_worker); if (w) longjmp(w->exit_jb, 1); }   /* back to the kept thread's loop */
#endif
    rs_thread_exit(); return 0; }
u32 psp_sceKernelExitThread(ARGS){ UNUSED; return exit_thread(a0, 0); }
u32 psp_sceKernelExitDeleteThread(ARGS){ UNUSED; return exit_thread(a0, 1); }
u32 psp_sceKernelDeleteThread(ARGS){ UNUSED; kthread_t *t = thr_find((int)a0); if (!t) return ERR_NOTHREAD;
    if (!t->exited && t->started) return ERR_NOTDONE; t->deleted = 1; if (!t->started) t->exited = 1; return 0; }
static void run_callbacks(void);
static u32 wait_end(int uid, int cb){ kthread_t *t = thr_find(uid); if (!t) return ERR_NOTHREAD;
    if (cb) run_callbacks();
    while ((t = thr_find(uid)) && !t->exited) big_wait(&gcv);          /* looked up again: an ended, deleted thread can be reaped meanwhile */
    return t ? (u32)t->status : 0; }
u32 psp_sceKernelWaitThreadEnd(ARGS){ UNUSED; return wait_end((int)a0, 0); }
u32 psp_sceKernelWaitThreadEndCB(ARGS){ UNUSED; return wait_end((int)a0, 1); }
u32 psp_sceKernelGetThreadId(ARGS){ UNUSED; return (u32)rs_thread_id(); }
u32 psp_sceKernelGetThreadCurrentPriority(ARGS){ UNUSED; kthread_t *t = cur_thread; return t ? t->prio : 32; }
u32 psp_sceKernelChangeThreadPriority(ARGS){ UNUSED; kthread_t *t = a0 ? thr_find((int)a0) : cur_thread; if (t) t->prio = a1; return 0; }
u32 psp_sceKernelRotateThreadReadyQueue(ARGS){ UNUSED; unlocked_sleep(200); return 0; }   /* "let the others of my priority run": the game spins on it while it waits for them, so it really steps aside */

/* delays: a short one is a yield; longer ones sleep without the guest lock (capped: the game polls with long delays) */
void rs_delay_us(unsigned us){ if (us < 500) yield_big(); else unlocked_sleep(us > 200000 ? 200000 : us); }
u32 psp_sceKernelDelayThread(ARGS){ UNUSED; rs_delay_us(a0); return 0; }
u32 psp_sceKernelDelayThreadCB(ARGS){ UNUSED; run_callbacks(); rs_delay_us(a0); run_callbacks(); return 0; }

/* ---------------- semaphores ---------------- */
typedef struct { int uid; int count, max; u64 wait_us, waits; kthread_t *sig_th; char name[24]; kthread_t *owner; u64 t_acq; rs_cond_t cv; } sema_t;
static sema_t semas[256]; static int nsema;
static sema_t *sema_find(int uid){ for (int i = 0; i < nsema; i++) if (semas[i].uid == uid) return &semas[i]; return 0; }
int rs_sema_create(const char *name, int init, int max){ if (nsema >= 256) return -1; sema_t *s = &semas[nsema++]; memset(s, 0, sizeof *s);
    s->uid = rs_new_uid(); strncpy(s->name, name ? name : "", 23); s->count = init; s->max = max; return s->uid; }
int rs_sema_delete(int id){ return sema_find(id) ? 0 : -1; }          /* kept: the game deletes and recreates only at exit */
int rs_sema_signal(int id, int n){ sema_t *s = sema_find(id); if (!s) return -1;
    if (s->owner && s->max == 1) { s->owner->hold_us += rs_perf_us() - s->t_acq; s->owner->holds++; s->owner = 0; }
    s->count += n; s->sig_th = cur_thread; rc_broadcast(&s->cv); return 0; }
static void sema_take(sema_t *s, int n){ s->count -= n; s->owner = cur_thread; s->t_acq = rs_perf_us(); }
int rs_sema_wait(int id, int n){ sema_t *s = sema_find(id); if (!s) return -1;
    u64 t = rs_perf_us(); while (s->count < n) big_wait(&s->cv); sema_take(s, n); s->wait_us += rs_perf_us() - t; s->waits++; return 0; }
int rs_sema_poll(int id, int n){ sema_t *s = sema_find(id); if (!s) return -1; int ok = s->count >= n; if (ok) sema_take(s, n); yield_big(); return ok ? 0 : 1; }
/* (name, attributes, initial count, maximum, options) */
u32 psp_sceKernelCreateSema(ARGS){ UNUSED; int id = rs_sema_create(hle_gstr(a0), (int)a2, (int)a3); return id < 0 ? ERR_NOMEM : (u32)id; }
u32 psp_sceKernelDeleteSema(ARGS){ UNUSED; return rs_sema_delete((int)a0) ? ERR_NOSEMA : 0; }
u32 psp_sceKernelSignalSema(ARGS){ UNUSED; return rs_sema_signal((int)a0, (int)a1) ? ERR_NOSEMA : 0; }
u32 psp_sceKernelWaitSema(ARGS){ UNUSED; return rs_sema_wait((int)a0, (int)a1) ? ERR_NOSEMA : 0; }
u32 psp_sceKernelWaitSemaCB(ARGS){ UNUSED; run_callbacks(); return rs_sema_wait((int)a0, (int)a1) ? ERR_NOSEMA : 0; }
u32 psp_sceKernelPollSema(ARGS){ UNUSED; int r = rs_sema_poll((int)a0, (int)a1); return r < 0 ? ERR_NOSEMA : r ? ERR_SEMA_ZERO : 0; }
/* the profiler's wait report (hle.c): the three semaphores waited on longest since the last report */
void perf_sema_report(char *b, int n, double fr){ int o = 0;
    for (int k = 0; k < 3; k++) { int best = -1; for (int i = 0; i < nsema; i++) if (semas[i].wait_us > 1000 && (best < 0 || semas[i].wait_us > semas[best].wait_us)) best = i; if (best < 0) break; sema_t *s = &semas[best];
        o += snprintf(b + o, n - o, " | sema '%s' %x waits %.1f %.2f ms, signalled by '%s'", s->name, s->uid, s->waits / fr, s->wait_us / fr / 1000, s->sig_th ? s->sig_th->name : "?");
        s->wait_us = 0; s->waits = 0; if (o > n - 120) break; }
    for (int i = 0; i < nsema; i++) semas[i].wait_us = semas[i].waits = 0; }

/* ---------------- event flags ---------------- */
typedef struct { int uid; u32 pat; rs_cond_t cv; } evf_t; static evf_t evfs[256]; static int nevf;
static evf_t *evf_find(int uid){ for (int i = 0; i < nevf; i++) if (evfs[i].uid == uid) return &evfs[i]; return 0; }
int rs_evf_create(const char *name, uint32_t pat){ (void)name; if (nevf >= 256) return -1; evf_t *e = &evfs[nevf++]; memset(e, 0, sizeof *e); e->uid = rs_new_uid(); e->pat = pat; return e->uid; }
int rs_evf_set(int id, uint32_t bits){ evf_t *e = evf_find(id); if (!e) return -1; e->pat |= bits; rc_broadcast(&e->cv); return 0; }
int rs_evf_clear(int id, uint32_t keep){ evf_t *e = evf_find(id); if (!e) return -1; e->pat &= keep; return 0; }
static int evf_match(evf_t *e, uint32_t bits, int mode){ return (mode & RS_EVF_OR) ? (e->pat & bits) != 0 : (e->pat & bits) == bits; }
static void evf_consume(evf_t *e, uint32_t bits, int mode, uint32_t *out){ if (out) *out = e->pat; if (mode & RS_EVF_CLEAR_ALL) e->pat = 0; if (mode & RS_EVF_CLEAR) e->pat &= ~bits; }
int rs_evf_wait(int id, uint32_t bits, int mode, uint32_t *out){ evf_t *e = evf_find(id); if (!e) return -1;
    while (!evf_match(e, bits, mode)) big_wait(&e->cv); evf_consume(e, bits, mode, out); return 0; }
int rs_evf_poll(int id, uint32_t bits, int mode, uint32_t *out){ evf_t *e = evf_find(id); if (!e) return -1;
    if (!evf_match(e, bits, mode)) { if (out) *out = e->pat; return 1; } evf_consume(e, bits, mode, out); return 0; }
/* (name, attributes, initial pattern, options) */
u32 psp_sceKernelCreateEventFlag(ARGS){ UNUSED; int id = rs_evf_create(hle_gstr(a0), a2); return id < 0 ? ERR_NOMEM : (u32)id; }
u32 psp_sceKernelDeleteEventFlag(ARGS){ UNUSED; return evf_find((int)a0) ? 0 : ERR_NOEVF; }
u32 psp_sceKernelSetEventFlag(ARGS){ UNUSED; return rs_evf_set((int)a0, a1) ? ERR_NOEVF : 0; }
u32 psp_sceKernelClearEventFlag(ARGS){ UNUSED; return rs_evf_clear((int)a0, a1) ? ERR_NOEVF : 0; }
/* (flag, bits, mode, out pattern, timeout) */
u32 psp_sceKernelWaitEventFlag(ARGS){ UNUSED; uint32_t p = 0; if (rs_evf_wait((int)a0, a1, (int)a2, &p)) return ERR_NOEVF; if (a3) SW(a3, p); return 0; }

/* ---------------- fixed-length pools (the game builds its main heap from one big pool block) ---------------- */
typedef struct { int uid; u32 blocksize, nblocks, base; u32 used[64]; } fpl_t; static fpl_t fpls[32]; static int nfpl;
static fpl_t *fpl_find(int uid){ for (int i = 0; i < nfpl; i++) if (fpls[i].uid == uid) return &fpls[i]; return 0; }
/* (name, partition, attributes, block size, block count, options) */
u32 psp_sceKernelCreateFpl(ARGS){ UNUSED; if (nfpl >= 32) return ERR_NOMEM; fpl_t *f = &fpls[nfpl]; memset(f, 0, sizeof *f);
    f->blocksize = a3; f->nblocks = t0 ? t0 : 1; if (f->nblocks > 64 * 32) f->nblocks = 64 * 32;
    int b = rs_mem_alloc(f->blocksize * f->nblocks, 0, 64); u32 addr = b < 0 ? 0 : rs_mem_addr(b);
    if (!addr) { fprintf(stderr, "[THR] CreateFpl: out of guest memory (%u x %u)\n", f->blocksize, f->nblocks); return ERR_NOMEM; }
    f->uid = rs_new_uid(); f->base = addr; nfpl++; fprintf(stderr, "[THR] CreateFpl '%s' block=%u x %u at %08x\n", hle_gstr(a0), f->blocksize, f->nblocks, f->base); return (u32)f->uid; }
/* (pool, out address) */
u32 psp_sceKernelTryAllocateFpl(ARGS){ UNUSED; fpl_t *f = fpl_find((int)a0); if (!f) return ERR_NOFPL;
    for (u32 i = 0; i < f->nblocks; i++) if (!(f->used[i >> 5] & (1u << (i & 31)))) { f->used[i >> 5] |= 1u << (i & 31); SW(a1, f->base + i * f->blocksize); return 0; }
    return ERR_FPL_EMPTY; }

/* ---------------- callbacks (delivered when the owning thread waits in a ...CB call) ---------------- */
typedef struct { int uid; u32 func, arg, count; kthread_t *owner; u32 pend[8]; int npend; } cb_t; static cb_t cbs[64]; static int ncb;
/* (name, function, argument) */
u32 psp_sceKernelCreateCallback(ARGS){ UNUSED; if (ncb >= 64) return ERR_NOMEM; cb_t *b = &cbs[ncb++]; memset(b, 0, sizeof *b);
    b->uid = rs_new_uid(); b->func = a1; b->arg = a2; b->owner = cur_thread; return (u32)b->uid; }
u32 psp_sceKernelDeleteCallback(ARGS){ UNUSED; for (int i = 0; i < ncb; i++) if (cbs[i].uid == (int)a0) { cbs[i] = cbs[--ncb]; return 0; } return 0x80020198u; }
static void cb_notify(int uid, u32 arg){ for (int i = 0; i < ncb; i++) if (cbs[i].uid == uid && cbs[i].npend < 8) cbs[i].pend[cbs[i].npend++] = arg; }
static void run_callbacks(void){
    kthread_t *me = cur_thread;
    for (int i = 0; i < ncb; i++) { cb_t *b = &cbs[i]; if (b->owner != me) continue;
        while (b->npend) { u32 arg = b->pend[0]; memmove(b->pend, b->pend + 1, (--b->npend) * 4);
            sdkcall_t c; memset(&c, 0, sizeof c); c.thread = me;
            c.r[4] = ++b->count; c.r[5] = arg; c.r[6] = b->arg; CALLDYN(&c, b->func); } } }
/* device notifications the game registers for: the memory card and the disc are always present */
u32 psp_sceIoDevctl(ARGS){ UNUSED;
    if (a1 == 0x02415821u) cb_notify((int)LW(a2), 1);                   /* memory card insert/eject callback -> "inserted" */
    else if (a1 == 0x02425823u) { if (t0) SW(t0, 1); }                  /* is the memory card inserted */
    else if (a1 == 0x02425818u) { u32 p = LW(a2); SW(p, 0x40000); SW(p + 4, 0x30000); SW(p + 8, 0x800000); SW(p + 12, 512); SW(p + 16, 64); }   /* free space */
    return 0; }
u32 psp_sceUmdRegisterUMDCallBack(ARGS){ UNUSED; cb_notify((int)a0, 0x32); return 0; }   /* disc present, readable */
