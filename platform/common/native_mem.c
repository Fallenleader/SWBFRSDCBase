/* Native guest memory blocks (ExperimentalRewrite): sceKernelAllocPartitionMemory and friends.
 *
 * The game asks the firmware for memory blocks inside its own address range (the heap it builds its allocators on, thread stacks,
 * pools).  The range is whatever the platform gives the game (hle_init: heap_lo .. heap_hi), not the PSP's partition sizes: the
 * Vita, the 3DS and the 64-bit builds each pass their own.  First fit, address ordered; "top" blocks are taken from the high end.
 * Callers hold the guest lock. */
#include "guest_sched.h"
#include <stdio.h>
#include <string.h>
#include "rs_platform.h"

typedef struct { u32 addr, size; int used, uid; } blk_t;
static blk_t blks[8192]; static int nblk;
static int next_uid = 0x1000;
int rs_new_uid(void){ return next_uid++; }                      /* the game's kernel object ids (one sequence, like the PSP) */

void rs_mem_init(u32 lo, u32 hi){ blks[0] = (blk_t){lo, hi - lo, 0, 0}; nblk = 1; }
static void blk_insert(int i, blk_t b){ if (nblk >= (int)(sizeof blks / sizeof *blks)) return; memmove(&blks[i + 1], &blks[i], (nblk - i) * sizeof(blk_t)); blks[i] = b; nblk++; }
int rs_mem_alloc(u32 size, int top, u32 align){
    size = (size + 63) & ~63u; if (align < 64) align = 64;
    if (!top) {
        for (int i = 0; i < nblk; i++) if (!blks[i].used) {
            u32 a = (blks[i].addr + align - 1) & ~(align - 1), pad = a - blks[i].addr;
            if (blks[i].size >= pad + size) {
                if (pad) { blk_insert(i, (blk_t){blks[i].addr, pad, 0, 0}); i++; blks[i].addr += pad; blks[i].size -= pad; }
                if (blks[i].size > size) blk_insert(i + 1, (blk_t){blks[i].addr + size, blks[i].size - size, 0, 0});
                blks[i].size = size; blks[i].used = 1; blks[i].uid = rs_new_uid(); return blks[i].uid; } }
    } else {
        for (int i = nblk - 1; i >= 0; i--) if (!blks[i].used && blks[i].size >= size) {
            u32 end = blks[i].addr + blks[i].size, a = (end - size) & ~(align - 1);
            if (a < blks[i].addr) continue;
            if (a > blks[i].addr) { blks[i].size = a - blks[i].addr; blk_insert(i + 1, (blk_t){a, end - a, 1, rs_new_uid()}); i++; }
            else { blks[i].used = 1; blks[i].uid = rs_new_uid(); }
            if (blks[i].size > size) blks[i].size = size;
            return blks[i].uid; }
    }
    return -1;
}
static blk_t *blk_find(int uid){ for (int i = 0; i < nblk; i++) if (blks[i].used && blks[i].uid == uid) return &blks[i]; return 0; }
u32 rs_mem_addr(int uid){ blk_t *b = blk_find(uid); return b ? b->addr : 0; }
void rs_mem_free(int uid){
    for (int i = 0; i < nblk; i++) if (blks[i].used && blks[i].uid == uid) {
        blks[i].used = 0;
        if (i + 1 < nblk && !blks[i + 1].used) { blks[i].size += blks[i + 1].size; memmove(&blks[i + 1], &blks[i + 2], (nblk - i - 2) * sizeof(blk_t)); nblk--; }
        if (i > 0 && !blks[i - 1].used) { blks[i - 1].size += blks[i].size; memmove(&blks[i], &blks[i + 1], (nblk - i - 1) * sizeof(blk_t)); nblk--; }
        return; } }
uint32_t rs_mem_free_total(void){ u32 t = 0; for (int i = 0; i < nblk; i++) if (!blks[i].used) t += blks[i].size; return t; }
uint32_t rs_mem_free_max(void){ u32 t = 0; for (int i = 0; i < nblk; i++) if (!blks[i].used && blks[i].size > t) t = blks[i].size; return t; }

/* ---- the game's entry points ---- */
#define ARGS u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3
#define UNUSED (void)a0; (void)a1; (void)a2; (void)a3; (void)t0; (void)t1; (void)t2; (void)t3
/* (partition, name, type: 0 low / 1 high / 2 at an address (taken as low), size, address) */
u32 psp_sceKernelAllocPartitionMemory(ARGS){ UNUSED; int uid = rs_mem_alloc(a3, a2 == 1, 64); return uid < 0 ? 0x80020190u : (u32)uid; }
u32 psp_sceKernelGetBlockHeadAddr(ARGS){ UNUSED; return rs_mem_addr((int)a0); }
u32 psp_sceKernelFreePartitionMemory(ARGS){ UNUSED; rs_mem_free((int)a0); return 0; }
u32 psp_sceKernelMaxFreeMemSize(ARGS){ UNUSED; return rs_mem_free_max(); }
u32 psp_sceKernelTotalFreeMemSize(ARGS){ UNUSED; return rs_mem_free_total(); }
