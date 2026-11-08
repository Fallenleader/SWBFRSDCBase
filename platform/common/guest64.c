/* Guest memory for 64-bit targets (RS_GUEST64; see src/game/rs_base.h and guest.h), and the guest allocator every target has.
 *
 * The window is one block of memory the platform maps (rs_guest64_init).  It is laid out as the PSP's memory, so guest addresses
 * are the game's own:
 *   0x00010000  scratchpad (16 KB)           0x04000000  VRAM (8 MB)
 *   0x08804000  the game image (data.c)      0x0A000000  game heap (RS_G_HEAP_SIZE)
 *   0x0E000000  stacks of the threads that run game code     0x10000000  rs_guest_alloc
 * Functions: the game holds a function's PSP address; RS_FPTR / CALLDYN look the native function up in an open-addressing table
 * built from fn_table.c (the functions whose address the game takes). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "psp_impl.h"
#include "guest.h"

#ifdef RS_GUEST64
#include "guest64.h"
u8 *rs_gbase;
u8 *g_mem;                                 /* the SDK code reaches guest memory through g_mem + address: the window */
typedef struct { u32 addr; void *fn; } fent_t;
extern const fent_t rs_fn_table[]; extern const int rs_fn_count;
extern u32 rs_image_init[]; extern const u32 rs_image_size;
static fent_t *ht; static u32 hmask;
static u32 hslot(u32 a){ return ((a >> 2) * 2654435761u) & hmask; }

void rs_guest64_init(void *window, size_t size){
    rs_gbase = window; g_mem = window;
    if (size < RS_G_WINDOW) { fprintf(stderr, "[GUEST] window too small (%zu bytes)\n", size); abort(); }
    memcpy(rs_gbase + RS_G_IMAGE, rs_image_init, rs_image_size);          /* the image at its PSP address */
    u32 n = 1; while (n < (u32)rs_fn_count * 4) n <<= 1;
    ht = calloc(n, sizeof *ht); hmask = n - 1;
    for (int i = 0; i < rs_fn_count; i++) { u32 h = hslot(rs_fn_table[i].addr); while (ht[h].addr) h = (h + 1) & hmask; ht[h] = rs_fn_table[i]; }
    rs_vram_base = RS_G_VRAM; rs_vram_size = RS_G_VRAM_SIZE;
    rs_region_add(RS_G_IMAGE, rs_image_size); rs_region_add(RS_G_HEAP, RS_G_HEAP_SIZE); rs_region_add(RS_G_STACKS, RS_G_STACKS_SIZE);
    rs_region_add(RS_G_PLAT, RS_G_PLAT_SIZE);
    fprintf(stderr, "[GUEST] 64-bit guest window at %p (%u MB), %d functions callable by address\n", window, (unsigned)(size >> 20), rs_fn_count); }

void *rs_fn_native(u32 a){
    for (u32 h = hslot(a); ht[h].addr; h = (h + 1) & hmask) if (ht[h].addr == a) return ht[h].fn;
    fprintf(stderr, "[GUEST] call through %08x: no such function (called from %p)\n", a, __builtin_return_address(0)); fflush(stderr);
#ifdef HOST_BUILD
    { extern int backtrace(void **, int); extern void backtrace_symbols_fd(void *const *, int, int); void *b[24]; backtrace_symbols_fd(b, backtrace(b, 24), 2); }
#endif
    abort(); }

/* a native function the game is to call through an address (a command it calls by name, ...): a guest address of its own in the
 * table (past the game image's code, 0x08FF0000 up: no game function is there) */
u32 rs_fn_alias(void *fn){
    static u32 next = 0x08FF0000u;
    u32 a = next; next += 16;
    u32 h = hslot(a); while (ht[h].addr) h = (h + 1) & hmask;
    ht[h].addr = a; ht[h].fn = fn; return a; }

void *rs_guest_alloc(size_t size, size_t align){
    static u32 next = RS_G_PLAT;
    if (align < 16) align = 16;
    u32 a = (u32)((next + align - 1) & ~(align - 1));
    if (a + size > RS_G_PLAT + RS_G_PLAT_SIZE) { fprintf(stderr, "[GUEST] out of platform guest memory\n"); abort(); }
    next = a + (u32)size; memset(rs_gbase + a, 0, size); return rs_gbase + a; }

/* a stack for a thread that runs game code, inside the window (so its frames have guest addresses).  Stacks of threads that have
 * ended come back (rs_guest_stack_release) and are used again: the game starts a thread for every voice line and sound stream, and
 * with one megabyte each the 32 MB area used to run out after about 30 of them ("out of thread stacks") in a long session. */
#include <pthread.h>
#include <time.h>
static pthread_mutex_t stk_m = PTHREAD_MUTEX_INITIALIZER;
static struct { u32 off, size; double t; } stk_free[64]; static int stk_n;
static double stk_now(void){ struct timespec ts; timespec_get(&ts, TIME_UTC); return ts.tv_sec + ts.tv_nsec * 1e-9; }
void rs_guest_stack_release(void *p, size_t size, double delay){
    extern int rs_setting_int(const char *, int);
    static int on = -1; if (on < 0) on = rs_setting_int("RS_STACK_REUSE", 1); if (!on) return;   /* 0: never reuse (diagnostics) */
    pthread_mutex_lock(&stk_m);
    if (stk_n < 64) { stk_free[stk_n].off = (u32)((u8 *)p - rs_gbase); stk_free[stk_n].size = (u32)size; stk_free[stk_n].t = stk_now() + delay; stk_n++; }
    pthread_mutex_unlock(&stk_m); }
void *rs_guest_stack(size_t size){
    static u32 next = RS_G_STACKS;
    pthread_mutex_lock(&stk_m);
    double t = stk_now();
    for (int i = 0; i < stk_n; i++) if (stk_free[i].size == size && stk_free[i].t <= t) {
        void *p = rs_gbase + stk_free[i].off; stk_free[i] = stk_free[--stk_n]; pthread_mutex_unlock(&stk_m); return p; }
    if (next + size > RS_G_STACKS + RS_G_STACKS_SIZE) { pthread_mutex_unlock(&stk_m); fprintf(stderr, "[GUEST] out of thread stacks\n"); abort(); }
    void *p = rs_gbase + next; next += (u32)size; pthread_mutex_unlock(&stk_m); return p; }
#else
u32 rs_fn_alias(void *fn){ return (u32)(uintptr_t)fn; }          /* 32-bit: the game calls native addresses */
void *rs_guest_alloc(size_t size, size_t align){
    if (align < 16) align = 16;
    void *raw = malloc(size + align); if (!raw) { fprintf(stderr, "[GUEST] out of memory\n"); abort(); }   /* never freed */
    void *p = (void *)(((uintptr_t)raw + align - 1) & ~(uintptr_t)(align - 1)); memset(p, 0, size); return p; }
#endif
