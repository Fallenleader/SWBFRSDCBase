/* Function profiler for the Vita (the profiling build: cmake -DRS_VITA_PROF=ON, game code compiled with -finstrument-functions).
 *
 * Every game function entered / left updates a shadow call stack of the guest thread that runs it (one thread runs guest code at a time:
 * the one holding the big lock, rs_tls_cur).  A sampler thread on its own core looks at that stack every 500 us and counts the function
 * on top (self time) and every function on the stack (inclusive time), per guest thread.  Every 15 s the counts so far are written to
 * ux0:data/SWBFRS/prof_vita.txt: one line per function, "thread address self inclusive" (resolve the addresses with nm on the
 * profiling build's ELF, build/vita_prof/swbfrs).  Samples that find no guest code running (firmware calls, waits) are counted as idle. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <pthread.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include "psp_impl.h"
extern rs_tls_t *rs_tls_cur;

#define NT 24                 /* guest threads tracked */
#define DEPTH 96
#define NH (1 << 14)
typedef struct { void *tls; volatile int depth; void *st[DEPTH]; } shadow_t;
static shadow_t sh[NT]; static int nsh; static shadow_t *last;
typedef struct { uintptr_t fn; unsigned self, incl; unsigned char th; } ent_t;
static ent_t hist[NH], spk[NH]; static unsigned samples, idle, lost, spk_frames, spk_samples;
/* Lag spikes: each frame's samples are kept until the frame ends; a frame longer than RS_PROF_SPIKE_MS (70 ms) has its samples added to
 * a second table (prof_spikes.txt), so what makes the slow frames slow (explosions...) is not averaged away by the ordinary ones. */
#define FS_MAX 1024
static unsigned char fs_th[FS_MAX], fs_d[FS_MAX]; static void *fs_st[FS_MAX][DEPTH]; static int fs_n;
extern volatile int g_frames;

__attribute__((no_instrument_function)) static shadow_t *cur(void){
    void *t = (void *)rs_tls_cur;
    if (last && last->tls == t) return last;
    for (int i = 0; i < nsh; i++) if (sh[i].tls == t) return last = &sh[i];
    if (nsh >= NT) return 0;
    sh[nsh].tls = t; sh[nsh].depth = 0; return last = &sh[nsh++]; }
__attribute__((no_instrument_function)) void __cyg_profile_func_enter(void *fn, void *site){
    (void)site; shadow_t *s = cur(); if (!s) return; int d = s->depth; if (d < DEPTH) s->st[d] = fn; s->depth = d + 1; }
__attribute__((no_instrument_function)) void __cyg_profile_func_exit(void *fn, void *site){
    (void)fn; (void)site; shadow_t *s = cur(); if (s && s->depth > 0) s->depth--; }

__attribute__((no_instrument_function)) static ent_t *slot_in(ent_t *hist, uintptr_t fn, int th);
#define slot(fn, th) slot_in(hist, fn, th)
__attribute__((no_instrument_function)) static ent_t *slot_in(ent_t *hist, uintptr_t fn, int th){
    unsigned h = ((unsigned)(fn >> 1) * 2654435761u ^ (unsigned)th * 40503u) & (NH - 1);
    for (int k = 0; k < NH; k++, h = (h + 1) & (NH - 1)) {
        if (hist[h].fn == fn && hist[h].th == th) return &hist[h];
        if (!hist[h].fn) { hist[h].fn = fn; hist[h].th = (unsigned char)th; return &hist[h]; } }
    return 0; }
__attribute__((no_instrument_function)) static void dump(void){
    FILE *f = fopen("ux0:data/SWBFRS/prof_vita.txt", "w"); if (!f) return;
    fprintf(f, "# samples %u (every 500 us), idle %u (no guest code running), lost %u\n# thread address self inclusive\n", samples, idle, lost);
    for (int i = 0; i < NH; i++) if (hist[i].fn) fprintf(f, "%d %08lx %u %u\n", hist[i].th, (unsigned long)hist[i].fn, hist[i].self, hist[i].incl);
    fclose(f);
    f = fopen("ux0:data/SWBFRS/prof_spikes.txt", "w"); if (!f) return;
    fprintf(f, "# lag spikes: %u frames longer than the threshold, %u samples (every 500 us)\n# thread address self inclusive\n", spk_frames, spk_samples);
    for (int i = 0; i < NH; i++) if (spk[i].fn) fprintf(f, "%d %08lx %u %u\n", spk[i].th, (unsigned long)spk[i].fn, spk[i].self, spk[i].incl);
    fclose(f); }
__attribute__((no_instrument_function)) static void frame_end(unsigned long long dur_us, unsigned long long limit_us){
    if (dur_us >= limit_us && fs_n) { spk_frames++; spk_samples += (unsigned)fs_n;
        for (int k = 0; k < fs_n; k++) { int d = fs_d[k], th = fs_th[k]; void **stk = fs_st[k];
            ent_t *e = slot_in(spk, (uintptr_t)stk[d - 1], th); if (e) e->self++;
            for (int i = 0; i < d; i++) { int dup = 0; for (int j = 0; j < i; j++) if (stk[j] == stk[i]) { dup = 1; break; }
                if (!dup) { e = slot_in(spk, (uintptr_t)stk[i], th); if (e) e->incl++; } } } }
    fs_n = 0; }
__attribute__((no_instrument_function)) static void *sampler(void *a){
    (void)a; unsigned long long next = 0; int fr0 = g_frames; unsigned long long t0 = sceKernelGetProcessTimeWide();
    extern int rs_setting_int(const char *, int); unsigned long long limit = (unsigned long long)rs_setting_int("RS_PROF_SPIKE_MS", 70) * 1000ull;
    for (;;) {
        sceKernelDelayThread(500);
        samples++;
        { int fr = g_frames; if (fr != fr0) { unsigned long long t = sceKernelGetProcessTimeWide(); frame_end((t - t0) / (unsigned long long)(fr - fr0 > 0 ? fr - fr0 : 1), limit); t0 = t; fr0 = fr; } }
        shadow_t *s = last; void *t = (void *)rs_tls_cur;
        if (!s || s->tls != t) { s = 0; for (int i = 0; i < nsh; i++) if (sh[i].tls == t) s = &sh[i]; }
        int d = s ? s->depth : 0; if (d > DEPTH) d = DEPTH;
        if (!s || d <= 0) idle++;
        else {
            int th = (int)(s - sh); void *stk[DEPTH]; memcpy(stk, s->st, (size_t)d * sizeof(void *));
            if (fs_n < FS_MAX) { fs_th[fs_n] = (unsigned char)th; fs_d[fs_n] = (unsigned char)d; memcpy(fs_st[fs_n], stk, (size_t)d * sizeof(void *)); fs_n++; }
            ent_t *e = slot((uintptr_t)stk[d - 1], th); if (e) e->self++; else lost++;
            for (int i = 0; i < d; i++) { int dup = 0; for (int j = 0; j < i; j++) if (stk[j] == stk[i]) { dup = 1; break; }
                if (!dup) { e = slot((uintptr_t)stk[i], th); if (e) e->incl++; } } }
        if (++next % 30000 == 0) dump(); } }               /* every 15 s */
__attribute__((no_instrument_function)) void rs_vita_prof_start(void){
    pthread_attr_t at; pthread_attr_init(&at); pthread_attr_setstacksize(&at, 64 * 1024); pthread_t t; pthread_create(&t, &at, sampler, 0);
    fprintf(stderr, "[PROF] function profiler on: ux0:data/SWBFRS/prof_vita.txt every 15 s\n"); }
