#pragma once
/* The transitional guest lock and the wait queues built on it (shared by hle.c and the native kernel modules).  Internal to
 * platform/common: native modules include it; the typed interface for the rest of the program is rs_platform.h. */
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include "psp_impl.h"
#include <pthread.h>
#include <errno.h>
#include <time.h>
#include <sched.h>
#include <unistd.h>
#include "gfx.h"
extern pthread_mutex_t big;
extern volatile int big_waiting;                     /* threads blocked taking the big lock (yield_big hands it over only to them) */
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
static inline void rs_sem_new(rs_sem_t *s){ *s = sceKernelCreateSema("rs_cond", 0, 0, 1 << 20, NULL); }
static inline int rs_sem_wait(rs_sem_t *s, unsigned us){ SceUInt to = us; return sceKernelWaitSema(*s, 1, &to) >= 0; }
static inline void rs_sem_post(rs_sem_t *s, int n){ sceKernelSignalSema(*s, n); }
#else                                                                   /* RS_SEMCOND: the same on Linux (POSIX semaphores), for testing */
#include <semaphore.h>
typedef struct { sem_t s; } rs_sem_t;
static inline void rs_sem_new(rs_sem_t *s){ sem_init(&s->s, 0, 0); }
static inline int rs_sem_wait(rs_sem_t *s, unsigned us){ struct timespec ts; clock_gettime(CLOCK_REALTIME, &ts); ts.tv_nsec += (long)us * 1000; ts.tv_sec += ts.tv_nsec / 1000000000L; ts.tv_nsec %= 1000000000L;
    while (sem_timedwait(&s->s, &ts) != 0) if (errno != EINTR) return 0; return 1; }
static inline void rs_sem_post(rs_sem_t *s, int n){ while (n-- > 0) sem_post(&s->s); }
#endif
typedef struct { rs_sem_t sem; int made, waiters, tokens; } rs_cond_t;
#define RS_COND_INIT {0}
static inline void rc_wait(rs_cond_t *cv, pthread_mutex_t *m){                  /* m held */
    if (!cv->made) { rs_sem_new(&cv->sem); cv->made = 1; }
    cv->waiters++; pthread_mutex_unlock(m);
    int got = rs_sem_wait(&cv->sem, 50000);
    if (m == &big) __sync_add_and_fetch(&big_waiting, 1);
    pthread_mutex_lock(m); if (m == &big) __sync_sub_and_fetch(&big_waiting, 1);
    cv->waiters--; if (got) cv->tokens--; }
static inline void rc_broadcast(rs_cond_t *cv){                                 /* m held */
    if (!cv->made) { rs_sem_new(&cv->sem); cv->made = 1; }
    int n = cv->waiters - cv->tokens; if (n > 0) { cv->tokens += n; rs_sem_post(&cv->sem, n); } }
#else
typedef struct { pthread_cond_t c; } rs_cond_t;
#define RS_COND_INIT {PTHREAD_COND_INITIALIZER}
static inline void rc_wait(rs_cond_t *cv, pthread_mutex_t *m){ pthread_cond_wait(&cv->c, m); }
static inline void rc_broadcast(rs_cond_t *cv){ pthread_cond_broadcast(&cv->c); }
#endif
extern rs_cond_t gcv;
/* Per-thread guest state (FPU control word, vector registers, $k0) with RS_TLS_STRUCT: guest code reaches it through the global
 * rs_tls_cur instead of thread-local storage (emulated on the Vita: a library call per access, ~5000 per frame in battles).  Only one
 * guest thread runs at a time - the one holding the big lock - so every acquisition of the big lock points rs_tls_cur at the
 * acquiring thread's own block. */
#ifdef RS_TLS_STRUCT
extern rs_tls_t *rs_tls_cur;
#define TLS_RESUME() (rs_tls_cur = rs_tls())
#else
#define TLS_RESUME() ((void)0)
#endif
extern volatile pthread_t big_owner;                 /* last thread to take the big lock (hang reports) */
static inline void big_lock(void){ __sync_add_and_fetch(&big_waiting, 1); pthread_mutex_lock(&big); __sync_sub_and_fetch(&big_waiting, 1); big_owner = pthread_self(); TLS_RESUME(); }
static inline void big_wait(rs_cond_t *cv){ rc_wait(cv, &big); big_owner = pthread_self(); TLS_RESUME(); }
void unlocked_sleep(unsigned us);          /* sleep without the guest lock */
void yield_big(void);                      /* let another guest thread run */
char *hle_gstr(u32 a);                     /* a guest string (4 rotating buffers) */
/* ---- kernel objects (native_thread.c, native_mem.c) ---- */
typedef struct kthread { int uid; u32 entry, stack, stacksize, prio; char name[32]; pthread_t th; sdkcall_t cpu; int started, exited, status, blk, last, prev; u64 *p_us, *p_n, p_hle, hold_us, holds; unsigned long ncalls_t; u32 last_ra, last_a0; u32 argc, argp; u8 argbuf[4096]; volatile int in; int deleted; } kthread_t;      /* in: 1 + index of the firmware call it is inside (0 = guest code) */
extern kthread_t *rs_threads[256]; extern int rs_nthreads;
kthread_t *rs_kthread_cur(void);
int rs_new_uid(void);
void rs_mem_init(u32 lo, u32 hi);
int rs_mem_alloc(u32 size, int top, u32 align);   /* block uid, < 0: none */
u32 rs_mem_addr(int uid);                         /* 0: no such block */
void rs_mem_free(int uid);
#include "rs_bind.h"
