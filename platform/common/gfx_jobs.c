/* Hand-off of GPU work from the game's threads to the renderer thread (the one thread that talks to GL / GXM).
 *
 *   gfx_post(fn, arg, n)  queue a job (arg copied, n <= GFX_JOB_ARG bytes) and return at once: the PSP's GPU runs command lists
 *                         asynchronously, so the game goes on with its next frame while this one is interpreted and drawn
 *   gfx_run(fn, arg)      run fn on the renderer thread after everything queued before it, and wait for it
 *   gfx_pump(wait_ms)     renderer thread: run the queued jobs (waits up to wait_ms for one)
 * Jobs run in the order they were queued. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <pthread.h>
#include "gfx.h"
#ifdef __vita__
#include <psp2/kernel/threadmgr.h>
static SceUID wake_sema = -1;                    /* guest -> renderer wake-up (newlib's timed condition waits are not trusted on the Vita) */
void gfx_wake_init(void){ if (wake_sema < 0) wake_sema = sceKernelCreateSema("rs_gfx_wake", 0, 0, 1 << 20, 0); }
static void wake_gfx(void){ if (wake_sema >= 0) sceKernelSignalSema(wake_sema, 1); }
static void wait_wake(int wait_us){ if (wake_sema >= 0) { SceUInt t = (SceUInt)wait_us; sceKernelWaitSema(wake_sema, 1, &t); } else sceKernelDelayThread(wait_us); }
#else
void gfx_wake_init(void){}
static void wake_gfx(void){}
static void wait_wake(int wait_us){ (void)wait_us; }
#endif

static volatile unsigned frame_seq, presented_seq;
void gfx_frame_ready(void){ frame_seq++; wake_gfx(); }
int gfx_present_due(void){ unsigned f = frame_seq; if (f == presented_seq) return 0; presented_seq = f; return 1; }
unsigned gfx_frame_seq(void){ return frame_seq; }
__attribute__((weak)) void gfx_before_job(void){}           /* renderer hook: start of a job (the GL back end's shadow pass) */

#define QN 256
typedef struct { void (*fn)(void *); unsigned char arg[GFX_JOB_ARG]; void *ptr; int sync; } job_t;
static job_t q[QN]; static unsigned q_head, q_tail;           /* q_tail: next to run; q_head: next free */
static unsigned long done_seq;                                  /* jobs completed */
static pthread_mutex_t jm = PTHREAD_MUTEX_INITIALIZER; static pthread_cond_t jc_post = PTHREAD_COND_INITIALIZER, jc_done = PTHREAD_COND_INITIALIZER;
static int gl_ready; static pthread_t gl_th;

void gfx_thread_register(void){ pthread_mutex_lock(&jm); gl_th = pthread_self(); gl_ready = 1; pthread_cond_broadcast(&jc_done); pthread_mutex_unlock(&jm); }
static int on_gl(void){ return gl_ready && pthread_equal(pthread_self(), gl_th); }
static void run_queue_here(void);
/* enqueue (jm held); returns the job's sequence number */
static unsigned long push(void (*fn)(void *), const void *arg, size_t n, void *ptr, int sync){
    while (!gl_ready || q_head - q_tail >= QN) pthread_cond_wait(&jc_done, &jm);
    job_t *j = &q[q_head % QN]; j->fn = fn; j->ptr = ptr; j->sync = sync; if (n) memcpy(j->arg, arg, n);
    q_head++; pthread_cond_signal(&jc_post); wake_gfx();
    return done_seq + (q_head - q_tail); }
void gfx_post(void (*fn)(void *), const void *arg, size_t n){
    if (n > GFX_JOB_ARG) { fprintf(stderr, "[GFX] job argument too large\n"); abort(); }
    if (on_gl()) { run_queue_here(); unsigned char tmp[GFX_JOB_ARG]; if (n) memcpy(tmp, arg, n); fn(tmp); return; }
    pthread_mutex_lock(&jm); push(fn, arg, n, 0, 0); pthread_mutex_unlock(&jm); }
void gfx_run(void (*fn)(void *), void *arg){
    if (on_gl()) { run_queue_here(); fn(arg); return; }
    pthread_mutex_lock(&jm);
    u64 t0 = rs_perf_us();
    unsigned long my = push(fn, 0, 0, arg, 1);
    while (done_seq < my) pthread_cond_wait(&jc_done, &jm);
    rs_perf.run_n++; rs_perf.run_wait_us += rs_perf_us() - t0;
    pthread_mutex_unlock(&jm); }
static void (*volatile running_fn)(void *); static volatile u64 running_since;            /* the job the renderer is in (hang reports) */
static void run_one(job_t *j){ u64 t0 = rs_perf_us(); running_since = t0; running_fn = j->fn; gfx_before_job(); j->fn(j->sync ? j->ptr : (void *)j->arg); gfx_flush(); running_fn = 0; rs_perf.job_us += rs_perf_us() - t0; }
int gfx_jobs_report(char *b, int n){                            /* unlocked snapshot */
    void (*f)(void *) = running_fn; u64 since = running_since, now = rs_perf_us();
    if (f) return snprintf(b, (size_t)n, "renderer: in job %p for %.1f s; jobs queued %u, started %u, done %lu; guest frames %u, presented %u\n",
                           (void *)f, (double)(now - since) / 1e6, q_head, q_tail, done_seq, frame_seq, presented_seq);
    return snprintf(b, (size_t)n, "renderer: idle; jobs queued %u, started %u, done %lu; guest frames %u, presented %u\n", q_head, q_tail, done_seq, frame_seq, presented_seq); }
/* renderer thread: run every queued job */
static void run_queue_here(void){
    pthread_mutex_lock(&jm);
    while (q_tail != q_head) { job_t j = q[q_tail % QN]; pthread_mutex_unlock(&jm);
        run_one(&j);
        pthread_mutex_lock(&jm); q_tail++; done_seq++; pthread_cond_broadcast(&jc_done); }
    pthread_mutex_unlock(&jm); }
int gfx_pump(int wait_ms){
#ifdef __vita__
    if (wait_ms > 0) { pthread_mutex_lock(&jm); int empty = q_tail == q_head; pthread_mutex_unlock(&jm); if (empty) wait_wake(wait_ms * 1000); wait_ms = 0; }
#endif
    pthread_mutex_lock(&jm);
    if (q_tail == q_head && wait_ms > 0) { struct timespec ts; clock_gettime(CLOCK_REALTIME, &ts); ts.tv_nsec += (long)wait_ms * 1000000L; ts.tv_sec += ts.tv_nsec / 1000000000L; ts.tv_nsec %= 1000000000L; pthread_cond_timedwait(&jc_post, &jm, &ts); }
    int ran = q_tail != q_head;
    pthread_mutex_unlock(&jm);
    if (ran) run_queue_here();
    return ran; }
