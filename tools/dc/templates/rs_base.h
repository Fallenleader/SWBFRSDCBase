/* SWBFRSDCBase - common definitions for the decompiled game code.
 * The game code works on 32-bit values; on a 32-bit target a pointer fits in u32 (first supported targets: 32-bit).
 * Memory is accessed with ordinary native pointers. */
#pragma once
#include <stdint.h>
#include <string.h>
#include <math.h>

typedef uint8_t u8; typedef int8_t s8; typedef uint16_t u16; typedef int16_t s16;
typedef uint32_t u32; typedef int32_t s32; typedef uint64_t u64; typedef int64_t s64;

#if UINTPTR_MAX != 0xFFFFFFFFu
#error "SWBFRSDCBase currently requires a 32-bit target (pointers are held in 32-bit values)"
#endif

/* multi-value return of functions that deliver an integer pair and/or a float */
typedef struct { u32 v0, v1; float f0; } rv_t;
/* uniform prototype of functions whose address is taken (virtual methods, callbacks): called through pointers */
typedef rv_t (*ifn_t)(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);

/* ---- memory access through native pointers ---- */
#define PTR(a)        ((void *)(uintptr_t)(a))
#define LD_U8(a)      (*(const u8 *)PTR(a))
#define LD_S8(a)      (*(const s8 *)PTR(a))
#define LD_U16(a)     (*(const u16 *)PTR(a))
#define LD_S16(a)     (*(const s16 *)PTR(a))
#define LD32(a)       (*(const u32 *)PTR(a))
#define ST8(a, v)     (*(u8 *)PTR(a) = (u8)(v))
#define ST16(a, v)    (*(u16 *)PTR(a) = (u16)(v))
#define ST32(a, v)    (*(u32 *)PTR(a) = (u32)(v))
static inline u32 LDU32(u32 a){ u32 v; memcpy(&v, PTR(a), 4); return v; }          /* unaligned (lwl/lwr pair) */
static inline void STU32(u32 a, u32 v){ memcpy(PTR(a), &v, 4); }                    /* unaligned (swl/swr pair) */
static inline u32 LWL(u32 o, u32 a){ u32 w = LD32(a & ~3u), s = a & 3; return (o & (0x00FFFFFFu >> (s * 8))) | (w << (24 - s * 8)); }
static inline u32 LWR(u32 o, u32 a){ u32 w = LD32(a & ~3u), s = a & 3; return (o & (0xFFFFFF00u << ((3 - s) * 8))) | (w >> (s * 8)); }
static inline void SWL(u32 a, u32 v){ u32 w = LD32(a & ~3u), s = a & 3; ST32(a & ~3u, (w & (0xFFFFFF00u << (s * 8))) | (v >> (24 - s * 8))); }
static inline void SWR(u32 a, u32 v){ u32 w = LD32(a & ~3u), s = a & 3; ST32(a & ~3u, (w & (0x00FFFFFFu >> ((3 - s) * 8))) | (v << (s * 8))); }

/* ---- value helpers ---- */
static inline float BITSF(u32 u){ float f; memcpy(&f, &u, 4); return f; }
static inline u32 FBITS(float f){ u32 u; memcpy(&u, &f, 4); return u; }
#define ROTR(x, n) ((((u32)(x)) >> ((n) & 31)) | (((u32)(x)) << ((32 - ((n) & 31)) & 31)))
#define CLZ(x) ((x) ? (u32)__builtin_clz(x) : 32u)
static inline u32 WSBH(u32 x){ return ((x & 0xFF00FF00u) >> 8) | ((x & 0x00FF00FFu) << 8); }
static inline u32 WSBW(u32 x){ return __builtin_bswap32(x); }
static inline u32 BITREV(u32 x){ u32 r = 0; for (int i = 0; i < 32; i++) { r = (r << 1) | (x & 1); x >>= 1; } return r; }
static inline float SAT0(float f){ return f < 0 ? 0 : (f > 1 ? 1 : f); }
static inline float SAT1(float f){ return f < -1 ? -1 : (f > 1 ? 1 : f); }
/* float -> int with the four rounding modes (0 nearest, 1 truncate, 2 ceil, 3 floor), saturating as the FPU does */
static inline u32 F2I(float f, int mode){
    if (isnan(f)) return 0x7FFFFFFFu;
    double d = f;
    switch (mode) { case 0: d = nearbyint(d); break; case 1: d = trunc(d); break; case 2: d = ceil(d); break; default: d = floor(d); }
    if (d >= 2147483648.0) return 0x7FFFFFFFu;
    if (d < -2147483648.0) return 0x80000000u;
    return (u32)(s32)d; }
static inline int FCMP(float a, float b, int cond){
    int un = isnan(a) || isnan(b);
    switch (cond & 7) {
    case 0: return 0; case 1: return un; case 2: return !un && a == b; case 3: return un || a == b;
    case 4: return !un && a < b; case 5: return un || a < b; case 6: return !un && a <= b; default: return un || a <= b; } }

/* ---- processor state that is shared between functions ----
 * FPU control/status word (rounding mode for cvt.w.s) and the vector unit's 128 registers + condition flags.
 * The game keeps vectors/matrices in vector registers across calls, so they are per-thread globals. */
/* $k0 in user code: pointer to a per-thread block the firmware provides (newlib keeps its per-thread data there) */
#ifndef RS_TLS_STRUCT
extern __thread u32 fpu_csr;
extern __thread float vfpu_v[128];
extern __thread u32 vfpu_cc;
extern __thread u32 psp_k0;
#else
/* Targets whose thread-local storage is emulated (a library call per access, e.g. the PS Vita) define RS_TLS_STRUCT: the
 * per-thread state is one block, and rs_tls() returns the calling thread's block.  rs_tls() is declared const, so the
 * compiler calls it once per function and keeps the pointer in a register. */
typedef struct { u32 fpu_csr; u32 vfpu_cc; u32 psp_k0; u32 pad; float vfpu_v[128]; } rs_tls_t;
rs_tls_t *rs_tls(void) __attribute__((const));
#define fpu_csr (rs_tls()->fpu_csr)
#define vfpu_v  (rs_tls()->vfpu_v)
#define vfpu_cc (rs_tls()->vfpu_cc)
#define psp_k0  (rs_tls()->psp_k0)
#endif

/* runtime-sized stack allocation (the game's alloca) */
#define RS_ALLOCA(n) __builtin_alloca(n)

/* the PSP's 16 KB scratchpad RAM (fixed address 0x00010000 on the PSP), provided by the platform */
extern u8 rs_scratchpad[0x4000];

/* ---- traps ---- */
void rs_break(u32 code, u32 where);
