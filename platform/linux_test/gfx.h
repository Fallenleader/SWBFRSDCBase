#pragma once
/* Renderer interface between the GE command interpreter (ge.c, platform neutral) and the GL ES 2.0 backend (gfx_gl.c).
 * All gfx_* functions except gfx_run/gfx_pump/gfx_thread_register must be called on the GL thread (inside gfx_run). */
#include "psp_impl.h"

typedef struct { float x, y, z, w, u, v, r, g, b, a, f; } gfx_vtx_t;          /* f = PSP fog factor (1 = no fog) */          /* x,y,z,w are GL clip-space coordinates */
typedef struct { u32 addr; int w, h, fmt, swz, bufw; u32 clut; } gtex_key_t;
/* hardware T&L path: raw decoded GE vertices + the per-primitive GE transform/lighting state (uniform arrays, vec4 each) */
typedef struct { float x, y, z, nx, ny, nz, u, v, r, g, b, a, w[8], tx, ty, tz; } gfx_hvtx_t;      /* t* = tangent (only filled when a mod normal map is bound) */
typedef struct {
    int skin, lit;
    float mvp[16], wvz[4], wld[12], vp0[4], vp1[4], vp2[4], uvt[4], fogp[4];
    float mamb[4], mdif[4], memi[4], msca[4], lfl[4], lpos[16], latt[16], lspot[16], la[16], ld[16];
    float bone[96];
    float wv[12];                 /* world*view (3 columns): camera space, the one space every 3D draw of a frame agrees on (real-time shadows) */
    float view[12];               /* the GE view matrix as set (4x3 rows); identity when the game folds the camera into the world matrix */
} gfx_hw_t;
typedef struct { u32 (*hash)(void *); void (*decode)(u32 *dst, void *); void *ud; } gtex_src_t;
typedef struct {
    u32 fbaddr; int fbfmt, fbstride;
    int sx1, sy1, sx2, sy2;
    int cull_en, cull_mode, ztest, zfunc, zwrite;
    int blend, bsrc, bdst, beq; u32 bfixa, bfixb;
    int atest, afunc, aref;
    int fog; u32 fogcol;
    int sten, sfunc, sref, smask, sfail, szfail, szpass, swmask;      /* PSP stencil (lives in fb alpha on the PSP; a GL stencil buffer here) */
    int cmr, cmg, cmb, cma;
    int tex; unsigned texid; float uvs[4];
    unsigned texmr, texn; int texhd;                                    /* mod texture replacement: PBR metal-roughness / normal map GL ids, HD colour (linear filtering) */
    int tfunc, trgba, tdbl, tclampu, tclampv, tfilter; u32 tenv;
} gfx_state_t;

extern volatile unsigned rs_gfx_epoch;                   /* bump once per displayed frame: textures are re-validated lazily */

/* ---- GL-thread API ---- */
int  gfx_init(void);
unsigned gfx_tex_acquire(const gtex_key_t *k, const gtex_src_t *src, float uvs[4]);
void gfx_tex_maps(unsigned *mr, unsigned *nrm, int *hd);              /* PBR maps of the texture the last gfx_tex_acquire returned */
void gfx_draw(const gfx_state_t *st, const gfx_vtx_t *tris, int nverts);
void gfx_draw_hw(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *tris, int nverts);   /* transform + light on the GPU */
int  gfx_hw_ok(void);                                                                                   /* HW T&L programs available + enabled */
void gfx_clear(const gfx_state_t *st, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int clr_c, int clr_a, int clr_z);
void gfx_flush(void);
void gfx_transfer(u32 src, int sbw, int sx, int sy, u32 dst, int dbw, int dx, int dy, int w, int h, int bpp);
void gfx_set_display(u32 addr, u32 stride, u32 fmt);
void gfx_get_display(u32 *addr, u32 *stride, u32 *fmt);
int  gfx_read_display(u32 *out480x272);
u32 *gfx_present_image(int w, int h);                     /* debug: final picture incl. FXAA, GL row order */
u32 *gfx_read_display_full(int *w, int *h);              /* internal resolution, malloc'd */                  /* RGBA8, row 0 = top */
void gfx_present(int winw, int winh);                    /* draw the display buffer into the currently bound window */
void gfx_stats(char *buf, int n);

/* ---- cross-thread plumbing (any thread) ---- */
void gfx_thread_register(void);                          /* called by the frontend on the thread that owns the GL context */
int  gfx_pump(int wait_ms);   /* returns 1 if a job ran */                              /* frontend loop: run a pending job from the guest (waits up to wait_ms) */
void gfx_run(void (*fn)(void *), void *arg);             /* run fn on the GL thread, blocking until done */

/* ---- profiler (runtime/gfx_gl.c; reported every 600 vblanks by hle.c: ux0:data/RS/perf.log on the Vita, stderr with RS_PERF=1 on PC) ---- */
typedef struct {
    u64 run_n, run_wait_us;                 /* guest -> GL thread hand-offs and the time guest threads spent waiting on them */
    u64 job_us, prims, verts, vtx_us;       /* GL thread: GE jobs; CPU vertex decode/transform/light */
    u64 hash_n, hash_us, up_n, up_us;       /* texture revalidation hashes, decodes + uploads */
    u64 batches, draw_us, present_n, present_us, readback_n, copy_n, copy_us, cpu_disp_n;
    u64 yields, yield_us, sleeps, sleep_us; /* guest-side scheduling */
    u64 shadow_draws, shadow_us;            /* real-time shadow depth pass */
} rs_perf_t;
extern rs_perf_t rs_perf;
u64 rs_perf_us(void);
void gfx_frame_ready(void);                              /* guest: a frame is complete (vblank) -> the frontend may present */
int  gfx_present_due(void);                              /* frontend: 1 once per completed guest frame */
void gfx_wake_init(void);
void gfx_shadow_frame(void);                             /* GL thread: end of a guest frame -> render the shadow map */

/* ---- shared helpers ---- */
static inline u32 gfx_vram(u32 a){ if ((a >> 24) == 0) a |= 0x04000000u; return a; }
static inline u8 *gfx_gp(u32 a){ return g_mem + GADDR(gfx_vram(a)); }
static inline u32 gfx_px_read(const u8 *p, int fmt){            /* PSP pixel -> 0xAABBGGRR */
    if (fmt == 3) { u32 v; memcpy(&v, p, 4); return v; }
    u16 q; memcpy(&q, p, 2); u32 r, g, b, a;
    switch (fmt) {
    case 0: r = (q & 31) * 255 / 31; g = ((q >> 5) & 63) * 255 / 63; b = ((q >> 11) & 31) * 255 / 31; a = 255; break;
    case 1: r = (q & 31) * 255 / 31; g = ((q >> 5) & 31) * 255 / 31; b = ((q >> 10) & 31) * 255 / 31; a = (q & 0x8000) ? 255 : 0; break;
    default: r = (q & 15) * 17; g = ((q >> 4) & 15) * 17; b = ((q >> 8) & 15) * 17; a = ((q >> 12) & 15) * 17; }
    return r | (g << 8) | (b << 16) | (a << 24); }
void gfx_hud(const char *const *lines, int n, int ww, int wh);       /* frontend: small text overlay in the window (debug HUD) */
