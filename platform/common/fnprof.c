/* Function call counter for the Linux build (make linux_test PROF=1): the game code is compiled with -finstrument-functions; calls
 * made while g_frames is in [RS_PROF_FROM, RS_PROF_TO) are counted per function and written to RS_PROF_OUT when the window ends
 * (address and count; resolve the addresses with nm on the binary).  For finding per-unit code and fixed limits. */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define N (1 << 17)
static uintptr_t key[N]; static unsigned cnt[N];
extern volatile int g_frames;
static int from = -2, to, done;
__attribute__((no_instrument_function)) static void dump(void){
    if (done) return; done = 1; const char *o = getenv("RS_PROF_OUT"); FILE *f = fopen(o ? o : "prof.txt", "w"); if (!f) return;
    for (int i = 0; i < N; i++) if (key[i]) fprintf(f, "%08lx %u\n", (unsigned long)key[i], cnt[i]); fclose(f); }
__attribute__((no_instrument_function)) void __cyg_profile_func_enter(void *fn, void *site){
    (void)site; if (from == -2) { const char *a = getenv("RS_PROF_FROM"), *b = getenv("RS_PROF_TO"); from = a ? atoi(a) : -1; to = b ? atoi(b) : 0; }
    int f = g_frames; if (from < 0 || f < from) return; if (f >= to) { dump(); return; }
    uintptr_t k = (uintptr_t)fn; unsigned h = (unsigned)(k >> 2) * 2654435761u >> 15;
    for (;;) { uintptr_t cur = __atomic_load_n(&key[h], __ATOMIC_RELAXED);
        if (cur == k) { __atomic_fetch_add(&cnt[h], 1, __ATOMIC_RELAXED); return; }
        if (!cur) { uintptr_t z = 0; if (__atomic_compare_exchange_n(&key[h], &z, k, 0, __ATOMIC_RELAXED, __ATOMIC_RELAXED)) { __atomic_fetch_add(&cnt[h], 1, __ATOMIC_RELAXED); return; } continue; }
        h = (h + 1) & (N - 1); } }
__attribute__((no_instrument_function)) void __cyg_profile_func_exit(void *fn, void *site){ (void)fn; (void)site; }
