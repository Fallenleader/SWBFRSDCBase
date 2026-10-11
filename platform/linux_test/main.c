/* TEST HARNESS ONLY - runs the decompiled game on 32-bit Linux to validate it.  Not a port.
 * Memory placement: GE (GPU) command lists hold 28-bit addresses, so everything the game hands to the GPU must live in the
 * low 256 MB: the executable is linked non-PIE (data image at ~0x08xxxxxx), VRAM is mapped at 0x04000000, the game heap and
 * the game threads' stacks are mapped below 0x10000000. */
#define _GNU_SOURCE
#include "psp_impl.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/mman.h>

u8 *g_mem;   /* NULL: harness SDK code accesses memory through native addresses */
__thread u32 fpu_csr;
__thread float vfpu_v[128];
__thread u32 vfpu_cc;
__thread u32 psp_k0;
void rs_thread_init(void){ static u8 blocks[64][256] __attribute__((aligned(16))); static int n; psp_k0 = (u32)(uintptr_t)blocks[__sync_fetch_and_add(&n, 1) & 63]; }

void hle_init(const char *root, u32 lo, u32 hi); void hle_wait_all_threads(void); void hle_report(void);
void rs_prof_dump(void);
rv_t func_08A85AB0(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);

void rs_break(u32 code, u32 where){
    fprintf(stderr, "[GAME] break/trap code 0x%x at guest pc %08x\n", code, where); fflush(stderr); abort(); }

static void *map_fixed(u32 addr, u32 size, const char *what){
    void *p = mmap((void *)(uintptr_t)addr, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
    if (p == MAP_FAILED || (u32)(uintptr_t)p != addr) { fprintf(stderr, "[HARNESS] cannot map %s at %08x\n", what, addr); exit(2); }
    return p; }

#define STACK_LO 0x0E000000u
#define STACK_SZ (1u << 20)
static u32 stack_next = STACK_LO;
void rs_harness_stack(pthread_attr_t *at){
    if (stack_next + STACK_SZ > 0x10000000u) { fprintf(stderr, "[HARNESS] out of thread stacks\n"); exit(2); }
    pthread_attr_setstack(at, (void *)(uintptr_t)stack_next, STACK_SZ); stack_next += STACK_SZ; }

static const char *arg_root = ".";
static void *watchdog(void *p){ int s = (int)(long)p; sleep(s); fprintf(stderr, "[RS] time limit reached (%ds)\n", s); rs_prof_dump(); hle_report(); fflush(stderr); _exit(0); return 0; }
static void *game_main(void *unused){
    (void)unused;
    /* game heap 0x0A000000-0x0DFFFFFF (64 MB, as the extended-memory configuration of the earlier builds) */
    rs_thread_init();
    hle_init(arg_root, 0x0A000000u, 0x0E000000u);
    const char *path = "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN";
    static char argbuf[64]; strcpy(argbuf, path);
    fprintf(stderr, "[RS] decompiled game: module_start\n");
    rv_t r = func_08A85AB0((u32)strlen(path) + 1, (u32)(uintptr_t)argbuf, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    fprintf(stderr, "[RS] module_start returned %d; waiting for game threads\n", (int)r.v0);
    hle_wait_all_threads(); hle_report(); return 0; }

void rs_frontend_main(pthread_t th);
int main(int argc, char **argv){
    for (int i = 1; i < argc; i++) if (!strcmp(argv[i], "--root") && i + 1 < argc) arg_root = argv[++i];
    map_fixed(0x00010000u, 0x4000, "scratchpad");
    map_fixed(0x04000000u, 8u << 20, "VRAM");
    map_fixed(0x0A000000u, 64u << 20, "game heap");
    map_fixed(STACK_LO, 0x10000000u - STACK_LO, "thread stacks");
    const char *t = getenv("RS_MAX_SECONDS"); pthread_t wd; if (t) pthread_create(&wd, 0, watchdog, (void *)(long)atoi(t));
    pthread_attr_t at; pthread_attr_init(&at); rs_harness_stack(&at);
    pthread_t th; pthread_create(&th, &at, game_main, 0); rs_frontend_main(th); return 0;
}
