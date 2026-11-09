/* SWBFRSDCBase - common definitions for the decompiled game code.
 * The game code works on 32-bit values; on a 32-bit target a pointer fits in u32 (first supported targets: 32-bit).
 * Memory is accessed with ordinary native pointers. */
#pragma once
#include <stdint.h>
#include <string.h>
#include <math.h>

typedef uint8_t u8; typedef int8_t s8; typedef uint16_t u16; typedef int16_t s16;
typedef uint32_t u32; typedef int32_t s32; typedef uint64_t u64; typedef int64_t s64;

/* The game code holds addresses in 32-bit values.
 *  - 32-bit targets: a guest address is a native pointer.
 *  - 64-bit targets (RS_GUEST64): guest addresses are offsets into one window of memory at rs_gbase (the PSP's own address map:
 *    scratchpad 0x00010000, VRAM 0x04000000, the game image 0x08804000, heap, thread stacks).  The threads that run game code
 *    have their stacks inside the window, so a function's stack frame has a guest address (RS_GADDR); a function's address is
 *    its PSP address (RS_FADDR) and calls through one look the native function up (RS_FPTR, platform/common/guest64.c). */
typedef struct { u32 addr; void *fn; } rs_fn_ent_t;     /* fn_table.c (generated): the functions whose address is taken */
extern const rs_fn_ent_t rs_fn_table[]; extern const int rs_fn_count;
#ifdef RS_GUEST64
extern u8 *rs_gbase;
void *rs_fn_native(u32 guest_addr);
#define PTR(a)            ((void *)(rs_gbase + (u32)(a)))
/* A stack frame (or other native memory) becomes a guest address.  The empty asm tells the compiler the memory escapes: the code
 * reaches it only through rs_gbase + offset, which the compiler cannot connect to the local array by itself (without it, stores
 * into a frame that are read back through PTR() - stack-passed arguments - can be deleted as dead). */
static inline u32 rs_gaddr(const void *p){ __asm__ volatile("" : : "r"(p) : "memory"); return (u32)((uintptr_t)p - (uintptr_t)rs_gbase); }
#define RS_GADDR(p)       rs_gaddr(p)
#define RS_FADDR(f, a)    ((u32)(a))
#define RS_FPTR(a)        rs_fn_native((u32)(a))
#else
#if UINTPTR_MAX != 0xFFFFFFFFu
#error "a 64-bit target needs RS_GUEST64 (pointers are held in 32-bit values)"
#endif
#define PTR(a)            ((void *)(uintptr_t)(a))
#define RS_GADDR(p)       ((u32)(uintptr_t)(p))
#define RS_FADDR(f, a)    ((u32)(uintptr_t)(f))
#define RS_FPTR(a)        PTR(a)
#endif

/* multi-value return of functions that deliver an integer pair and/or a float */
typedef struct { u32 v0, v1; float f0; } rv_t;
/* uniform prototype of functions whose address is taken (virtual methods, callbacks): called through pointers */
typedef rv_t (*ifn_t)(u32, u32, u32, u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);

/* ---- memory access through native pointers ---- */
#define LD_U8(a)      (*(const u8 *)PTR(a))
#define LD_S8(a)      (*(const s8 *)PTR(a))
#define LD_U16(a)     (*(const u16 *)PTR(a))
#define LD_S16(a)     (*(const s16 *)PTR(a))
#define LD32(a)       (*(const u32 *)PTR(a))
#define ST8(a, v)     (*(u8 *)PTR(a) = (u8)(v))
#define ST16(a, v)    (*(u16 *)PTR(a) = (u16)(v))
#define ST32(a, v)    (*(u32 *)PTR(a) = (u32)(v))
#ifdef RS_CENSUS
/* Analysis build only (tools/census): every store also records, per 32-bit guest word, the code location that wrote it, so the
 * GE command interpreter can attribute each executed command to the game function that produced it. */
extern u32 *rs_census_shadow;
#define RS_CENSUS_TAG(a) ({ __label__ L_; L_: __attribute__((unused)); if ((u32)(a) < 0x10000000u && rs_census_shadow) rs_census_shadow[(u32)(a) >> 2] = (u32)(uintptr_t)&&L_; })
#undef ST8
#undef ST16
#undef ST32
#define ST8(a, v)     ({ u32 rs_cen_a = (u32)(a); RS_CENSUS_TAG(rs_cen_a); *(u8 *)PTR(rs_cen_a) = (u8)(v); })
#define ST16(a, v)    ({ u32 rs_cen_a = (u32)(a); RS_CENSUS_TAG(rs_cen_a); *(u16 *)PTR(rs_cen_a) = (u16)(v); })
#define ST32(a, v)    ({ u32 rs_cen_a = (u32)(a); RS_CENSUS_TAG(rs_cen_a); *(u32 *)PTR(rs_cen_a) = (u32)(v); })
#endif
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
/* float -> int as the PSP FPU does it (round.w / trunc.w / ceil.w / floor.w / cvt.w with the FCR31 mode): out-of-range values and NaN
 * saturate to 0x7FFFFFFF / 0x80000000.  Done with the CPU's own truncating conversion and a correction step - no library rounding calls
 * (on the Vita's VFPv3 those are out-of-line software routines). */
static inline u32 F2I(float f, int mode){
    if (!(f == f) || f >= 2147483648.0f) return 0x7FFFFFFFu;
    if (f < -2147483648.0f) return 0x80000000u;
    s32 i = (s32)f;                                   /* truncation; exact range checked above */
    float r = f - (float)i;                           /* exact: f and i are within 1 of each other (or f is integral) */
    switch (mode) {
    case 1: break;                                    /* toward zero */
    case 2: if (r > 0.0f) i++; break;                 /* up */
    case 3: if (r < 0.0f) i--; break;                 /* down */
    default:                                          /* nearest, ties to even */
        if (r > 0.5f || (r == 0.5f && (i & 1))) i++;
        else if (r < -0.5f || (r == -0.5f && (i & 1))) i--; }
    return (u32)i; }
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
 * per-thread state is one block per thread, and rs_tls_cur points at the block of the guest thread that is running (the platform
 * layer runs one guest thread at a time and re-points rs_tls_cur whenever a thread takes over), so an access is a plain load. */
typedef struct { u32 fpu_csr; u32 vfpu_cc; u32 psp_k0; u32 pad; float vfpu_v[128]; } rs_tls_t;
extern rs_tls_t *rs_tls_cur;
#define fpu_csr (rs_tls_cur->fpu_csr)
#define vfpu_v  (rs_tls_cur->vfpu_v)
#define vfpu_cc (rs_tls_cur->vfpu_cc)
#define psp_k0  (rs_tls_cur->psp_k0)
#endif

/* runtime-sized stack allocation (the game's alloca) */
#define RS_ALLOCA(n) __builtin_alloca(n)

/* the PSP's 16 KB scratchpad RAM (fixed address 0x00010000 on the PSP), provided by the platform */
#ifdef RS_GUEST64
#define rs_scratchpad (rs_gbase + 0x00010000u)
#else
extern u8 rs_scratchpad[0x4000];
#endif

/* ---- traps ---- */
void rs_break(u32 code, u32 where);

#ifdef RS_CENSUS
/* analysis build: library copies made by game code tag their destination with the calling location */
static inline void *rs_census_memcpy(void *d, const void *s, size_t n, u32 pc){ u32 a = (u32)(uintptr_t)d;
    if (rs_census_shadow) for (size_t o = 0; o < n; o += 4) if (a + o < 0x10000000u) rs_census_shadow[(a + o) >> 2] = pc;
    return __builtin_memcpy(d, s, n); }
#define memcpy(d, s, n) ({ __label__ M_; M_: __attribute__((unused)); rs_census_memcpy((d), (s), (n), (u32)(uintptr_t)&&M_); })
#endif
