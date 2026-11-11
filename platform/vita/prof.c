/* Function profiler for the Vita (the profiling build: cmake -DRS_VITA_PROF=ON, game code compiled with -finstrument-functions).
 *
 * Every game function entered / left updates a shadow call stack of the guest thread that runs it (one thread runs guest code at a time:
 * the one holding the big lock, rs_tls_cur).  A sampler thread on its own core looks at that stack every 500 us.  A frame's samples are
 * kept until the frame ends, then counted in the table of that frame's length class (CLS_MS: under 33 ms, 33..67, 67..133, 133..267,
 * 267 ms and longer), so what makes the slow frames slow is seen apart from the ordinary ones:
 *   - per function: self (on top of the stack) and inclusive (anywhere on it) samples;
 *   - per call edge (caller -> callee, as found on the stack, indirect calls included): inclusive samples.  With these the whole frame
 *     is one call tree.
 * Each match (each mission set up: rs_prof_segment, game_patches.c) starts a new segment: ux0:data/SWBFRS/prof_vita_<n>.txt, rewritten
 * every 15 s while the segment lasts.  Format (resolve the addresses with nm on build/vita_prof/swbfrs; the build id names it):
 *   # build ..., segment n, ...            header
 *   C class frames samples idle            per class
 *   T thread name                          the guest threads
 *   F class thread address self inclusive  functions
 *   E class thread caller callee inclusive call edges
 * Samples that find no guest code running (firmware calls, waits) are counted as idle. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <pthread.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include "psp_impl.h"
extern rs_tls_t *rs_tls_cur;

#define NT 32                 /* guest threads tracked */
#define DEPTH 96
#define NC 5                  /* frame length classes */
static const unsigned CLS_MS[NC] = {0, 33, 67, 133, 267};
#define NH (1 << 14)
#define NE (1 << 16)
#ifndef RS_BUILD_ID
#define RS_BUILD_ID "?"
#endif
typedef struct { void *tls; volatile int depth; int tid; void *st[DEPTH]; } shadow_t;
static shadow_t sh[NT]; static volatile int nsh; static shadow_t *last;
typedef struct { uintptr_t fn; unsigned self, incl; unsigned char th; } ent_t;
typedef struct { uintptr_t a, b; unsigned n; unsigned char th; } edge_t;
static ent_t *fh[NC]; static edge_t *eh[NC];
static unsigned c_frames[NC], c_samples[NC], c_idle[NC], lost_f, lost_e, samples_all;
#define FS_MAX 4096           /* samples kept per frame (2 s); past that a frame's samples go to its class as they come */
static unsigned char fs_th[FS_MAX], fs_d[FS_MAX]; static void *(*fs_st)[DEPTH]; static int fs_n, fs_idle;
extern volatile int g_frames;
static volatile int seg_req; static int seg;

__attribute__((no_instrument_function)) static shadow_t *cur(void){
    void *t = (void *)rs_tls_cur;
    if (last && last->tls == t) return last;
    for (int i = 0; i < nsh; i++) if (sh[i].tls == t) return last = &sh[i];
    if (nsh >= NT) return 0;
    sh[nsh].tls = t; sh[nsh].depth = 0; sh[nsh].tid = sceKernelGetThreadId(); last = &sh[nsh]; nsh++; return last; }
__attribute__((no_instrument_function)) void __cyg_profile_func_enter(void *fn, void *site){
    (void)site; shadow_t *s = cur(); if (!s) return; int d = s->depth; if (d < DEPTH) s->st[d] = fn; s->depth = d + 1; }
__attribute__((no_instrument_function)) void __cyg_profile_func_exit(void *fn, void *site){
    (void)fn; (void)site; shadow_t *s = cur(); if (s && s->depth > 0) s->depth--; }
/* a new match: the sampler closes the segment so far and starts the next (called from game code, any thread) */
__attribute__((no_instrument_function)) void rs_prof_segment(void){ seg_req = 1; }

__attribute__((no_instrument_function)) static ent_t *fslot(ent_t *t, uintptr_t fn, int th){
    unsigned h = ((unsigned)(fn >> 1) * 2654435761u ^ (unsigned)th * 40503u) & (NH - 1);
    for (int k = 0; k < NH; k++, h = (h + 1) & (NH - 1)) {
        if (t[h].fn == fn && t[h].th == th) return &t[h];
        if (!t[h].fn) { t[h].fn = fn; t[h].th = (unsigned char)th; return &t[h]; } }
    return 0; }
__attribute__((no_instrument_function)) static edge_t *eslot(edge_t *t, uintptr_t a, uintptr_t b, int th){
    unsigned h = ((unsigned)(a >> 1) * 2654435761u ^ (unsigned)(b >> 1) * 2246822519u ^ (unsigned)th * 40503u) & (NE - 1);
    for (int k = 0; k < NE; k++, h = (h + 1) & (NE - 1)) {
        if (t[h].a == a && t[h].b == b && t[h].th == th) return &t[h];
        if (!t[h].a) { t[h].a = a; t[h].b = b; t[h].th = (unsigned char)th; return &t[h]; } }
    return 0; }
/* one sample (a stack of depth d on guest thread th) counted in class c */
__attribute__((no_instrument_function)) static void count(int c, int th, void **stk, int d){
    ent_t *ft = fh[c]; edge_t *et = eh[c]; c_samples[c]++;
    ent_t *e = fslot(ft, (uintptr_t)stk[d - 1], th); if (e) e->self++; else lost_f++;
    for (int i = 0; i < d; i++) {
        int dup = 0; for (int j = 0; j < i; j++) if (stk[j] == stk[i]) { dup = 1; break; }
        if (!dup) { e = fslot(ft, (uintptr_t)stk[i], th); if (e) e->incl++; else lost_f++; }
        if (i) { dup = 0; for (int j = 1; j < i; j++) if (stk[j] == stk[i] && stk[j - 1] == stk[i - 1]) { dup = 1; break; }
            if (!dup) { edge_t *g = eslot(et, (uintptr_t)stk[i - 1], (uintptr_t)stk[i], th); if (g) g->n++; else lost_e++; } } } }
__attribute__((no_instrument_function)) static int cls_of(unsigned long long us){
    int c = 0; for (int k = 1; k < NC; k++) if (us >= (unsigned long long)CLS_MS[k] * 1000ull) c = k; return c; }
__attribute__((no_instrument_function)) static void dump(void){
    char path[96]; snprintf(path, sizeof path, "ux0:data/SWBFRS/prof_vita_%d.txt", seg);
    FILE *f = fopen(path, "w"); if (!f) return;
    setvbuf(f, NULL, _IOFBF, 64 * 1024);
    fprintf(f, "# build " RS_BUILD_ID ", segment %d, samples every 500 us: %u, lost (tables full) %u functions %u edges\n", seg, samples_all, lost_f, lost_e);
    fprintf(f, "# classes by frame length (ms from): "); for (int c = 0; c < NC; c++) fprintf(f, "%u ", CLS_MS[c]); fprintf(f, "\n");
    for (int c = 0; c < NC; c++) fprintf(f, "C %d %u %u %u\n", c, c_frames[c], c_samples[c], c_idle[c]);
    for (int i = 0; i < nsh; i++) { SceKernelThreadInfo ti; memset(&ti, 0, sizeof ti); ti.size = sizeof ti;
        const char *nm = sceKernelGetThreadInfo(sh[i].tid, &ti) >= 0 ? ti.name : "?"; fprintf(f, "T %d %s\n", i, nm); }
    for (int c = 0; c < NC; c++) { ent_t *t = fh[c]; for (int i = 0; i < NH; i++) if (t[i].fn) fprintf(f, "F %d %d %08lx %u %u\n", c, t[i].th, (unsigned long)t[i].fn, t[i].self, t[i].incl); }
    for (int c = 0; c < NC; c++) { edge_t *t = eh[c]; for (int i = 0; i < NE; i++) if (t[i].a) fprintf(f, "E %d %d %08lx %08lx %u\n", c, t[i].th, (unsigned long)t[i].a, (unsigned long)t[i].b, t[i].n); }
    fclose(f); }
__attribute__((no_instrument_function)) static void reset(void){
    for (int c = 0; c < NC; c++) { memset(fh[c], 0, NH * sizeof(ent_t)); memset(eh[c], 0, NE * sizeof(edge_t)); c_frames[c] = c_samples[c] = c_idle[c] = 0; }
    lost_f = lost_e = samples_all = 0; }
__attribute__((no_instrument_function)) static void frame_end(unsigned long long dur_us, int frames){
    int c = cls_of(dur_us); c_frames[c] += (unsigned)frames; c_idle[c] += (unsigned)fs_idle;
    for (int k = 0; k < fs_n; k++) count(c, fs_th[k], fs_st[k], fs_d[k]);
    fs_n = 0; fs_idle = 0; }
__attribute__((no_instrument_function)) static void *sampler(void *a){
    (void)a; unsigned long long next = 0; int fr0 = g_frames; unsigned long long t0 = sceKernelGetProcessTimeWide();
    for (;;) {
        sceKernelDelayThread(500);
        samples_all++;
        { int fr = g_frames; if (fr != fr0) { unsigned long long t = sceKernelGetProcessTimeWide(); int n = fr - fr0 > 0 ? fr - fr0 : 1;
              frame_end((t - t0) / (unsigned long long)n, n); t0 = t; fr0 = fr; } }
        if (seg_req) { seg_req = 0; dump(); reset(); seg++; next = 0; }
        shadow_t *s = last; void *t = (void *)rs_tls_cur;
        if (!s || s->tls != t) { s = 0; for (int i = 0; i < nsh; i++) if (sh[i].tls == t) s = &sh[i]; }
        int d = s ? s->depth : 0; if (d > DEPTH) d = DEPTH;
        if (!s || d <= 0) fs_idle++;
        else { int th = (int)(s - sh);
            if (fs_n < FS_MAX) { fs_th[fs_n] = (unsigned char)th; fs_d[fs_n] = (unsigned char)d; memcpy(fs_st[fs_n], s->st, (size_t)d * sizeof(void *)); fs_n++; }
            else { void *stk[DEPTH]; memcpy(stk, s->st, (size_t)d * sizeof(void *)); count(NC - 1, th, stk, d); } }   /* (a frame past 2 s: the longest class) */
        if (++next % 30000 == 0) dump(); } }               /* every 15 s */
__attribute__((no_instrument_function)) void rs_vita_prof_start(void){
    for (int c = 0; c < NC; c++) { fh[c] = calloc(NH, sizeof(ent_t)); eh[c] = calloc(NE, sizeof(edge_t)); }
    fs_st = malloc(sizeof(*fs_st) * FS_MAX);
    for (int c = 0; c < NC; c++) if (!fh[c] || !eh[c]) { fprintf(stderr, "[PROF] no memory for the tables: profiler off\n"); return; }
    if (!fs_st) { fprintf(stderr, "[PROF] no memory for the frame buffer: profiler off\n"); return; }
    pthread_attr_t at; pthread_attr_init(&at); pthread_attr_setstacksize(&at, 64 * 1024); pthread_t t; pthread_create(&t, &at, sampler, 0);
    fprintf(stderr, "[PROF] call-tree profiler (build " RS_BUILD_ID ") on: ux0:data/SWBFRS/prof_vita_<match>.txt every 15 s, frames split by length\n"); }
