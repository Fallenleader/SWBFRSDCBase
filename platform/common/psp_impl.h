/* TEST HARNESS ONLY (not part of the decompiled game).
 * Linux 32-bit implementation of the PSP SDK interface the decompiled game calls (src/game/psp_sdk.h), used to validate the
 * decompilation.  It is the earlier project's firmware/graphics/audio code switched to native pointers; sdkcall_t is the
 * argument/result block of one SDK call (a0-a3, t0-t3 in, v0/v1 out). */
#pragma once
#include <stdint.h>
#include <string.h>
#include <math.h>
typedef uint8_t u8; typedef int8_t s8; typedef uint16_t u16; typedef int16_t s16;
typedef uint32_t u32; typedef int32_t s32; typedef uint64_t u64; typedef int64_t s64;
#include "guest.h"
u32 rs_scratchpad_addr(void);
typedef struct sdkcall_s { u32 r[32]; u32 hi, lo; void *thread; } sdkcall_t;
typedef struct { u32 addr; const char *lib; u32 nid; } rc_stub_t;
extern const int RC_NSTUBS; extern const rc_stub_t rc_stubs[];
extern u8 *g_mem;                                   /* = NULL: addresses are native pointers */
/* ---- addresses ----
 * SDK calls receive native pointers.  GPU (GE) command lists carry 28-bit addresses (BASE register + 24 bits), and VRAM
 * offsets are relative to the start of VRAM.  The platform registers the memory regions the game can hand to the GPU
 * (data segment, game heap, ...) and the VRAM block; GADDR turns any of these forms into the native address:
 *   0x04xxxxxx (VRAM tag)            -> VRAM block + offset
 *   28-bit address of a region       -> that region's native address (regions must not share their low 28 bits)
 *   anything else                    -> unchanged (a native pointer) */
typedef struct { u32 base, size; } rs_region_t;
#define RS_MAX_REGIONS 32
extern rs_region_t rs_regions[RS_MAX_REGIONS]; extern int rs_nregions;
extern u32 rs_vram_base, rs_vram_size;
void rs_region_add(u32 base, u32 size);
static inline u32 GADDR(u32 a){
    u32 l = a & 0x0FFFFFFFu;
    if (l != a) return a;                                   /* full native pointer (the 32-bit targets map user memory above 256 MB) */
    if ((l >> 24) == 0x04u && (l & 0xFFFFFFu) < rs_vram_size) return rs_vram_base + (l & 0xFFFFFFu);
    for (int i = 0; i < rs_nregions; i++) { u32 o = (l - (rs_regions[i].base & 0x0FFFFFFFu)) & 0x0FFFFFFFu; if (o < rs_regions[i].size) return rs_regions[i].base + o; }
    return a; }
#define GMEM_SIZE 0xFFFFFFFFu
static inline u8  LB(u32 a){ return g_mem[GADDR(a)]; }
static inline u16 LH(u32 a){ u16 v; memcpy(&v, g_mem + GADDR(a), 2); return v; }
static inline u32 LW(u32 a){ u32 v; memcpy(&v, g_mem + GADDR(a), 4); return v; }
static inline void SB(u32 a, u32 v){ g_mem[GADDR(a)] = (u8)v; }
static inline void SH(u32 a, u32 v){ u16 x = (u16)v; memcpy(g_mem + GADDR(a), &x, 2); }
static inline void SW(u32 a, u32 v){ memcpy(g_mem + GADDR(a), &v, 4); }
typedef struct { u32 v0, v1; float f0; } rv_t;
/* per-thread processor state of the game when RS_TLS_STRUCT is defined (same layout as src/game/rs_base.h) */
typedef struct { u32 fpu_csr; u32 vfpu_cc; u32 psp_k0; u32 pad; float vfpu_v[128]; } rs_tls_t;
rs_tls_t *rs_tls(void) __attribute__((const));
typedef rv_t (*ifn_t)(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
#define CALLDYN(c, a) do { rv_t r_ = ((ifn_t)GFN(a))((c)->r[4], (c)->r[5], (c)->r[6], (c)->r[7], (c)->r[8], (c)->r[9], (c)->r[10], (c)->r[11], 0, 0, 0, 0, 0, 0, 0, 0); (c)->r[2] = r_.v0; (c)->r[3] = r_.v1; } while (0)
void hle_call(sdkcall_t *c, int idx);
void rc_dump_stack(sdkcall_t *c, const char *tag);
/* settings (harness: fixed defaults, original game behaviour) */
u32 rs_patch_fps(void); void rs_patch_apply_fps_cap(void); void rs_patch_vblank(void); extern int rs_fps_choice;
const char *rs_patch_file(const char *rel_path, const char *host_path);
u32 rs_patch_heap_top(u32 psp_top);
