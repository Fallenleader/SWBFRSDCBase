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

void *rs_guest_alloc(size_t size, size_t align){
    static u32 next = RS_G_PLAT;
    if (align < 16) align = 16;
    u32 a = (u32)((next + align - 1) & ~(align - 1));
    if (a + size > RS_G_PLAT + RS_G_PLAT_SIZE) { fprintf(stderr, "[GUEST] out of platform guest memory\n"); abort(); }
    next = a + (u32)size; memset(rs_gbase + a, 0, size); return rs_gbase + a; }

/* a stack for a thread that runs game code, inside the window (so its frames have guest addresses) */
void *rs_guest_stack(size_t size){
    static u32 next = RS_G_STACKS;
    if (next + size > RS_G_STACKS + RS_G_STACKS_SIZE) { fprintf(stderr, "[GUEST] out of thread stacks\n"); abort(); }
    void *p = rs_gbase + next; next += (u32)size; return p; }
#else
void *rs_guest_alloc(size_t size, size_t align){
    if (align < 16) align = 16;
    void *raw = malloc(size + align); if (!raw) { fprintf(stderr, "[GUEST] out of memory\n"); abort(); }   /* never freed */
    void *p = (void *)(((uintptr_t)raw + align - 1) & ~(uintptr_t)(align - 1)); memset(p, 0, size); return p; }
#endif
