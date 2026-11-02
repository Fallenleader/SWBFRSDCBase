/* Renderer selection (RS_RENDERER = opengl | vulkan): both back ends implement gfx.h; the OpenGL one is compiled with its functions
 * renamed (gfx_backend_gl.h, -include), the Vulkan one with gfx_backend_vk.h, and the gfx_* functions here call the chosen one.
 * The choice is made once, before gfx_init (rs_gfx_use_vulkan). */
#include "gfx.h"
#define GFX_BACKEND_FUNCS(X) \
    X(int, init, (void), ()) \
    X(unsigned, tex_acquire, (const gtex_key_t *k, const gtex_src_t *src, float uvs[4]), (k, src, uvs)) \
    X(void, tex_maps, (unsigned *mr, unsigned *nrm, int *hd), (mr, nrm, hd)) \
    X(void, draw, (const gfx_state_t *st, const gfx_vtx_t *v, int n), (st, v, n)) \
    X(void, draw_hw, (const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n), (st, hw, v, n)) \
    X(int, draw_native, (const gfx_state_t *st, const gfx_hw_t *hw, const gfx_native_t *nv), (st, hw, nv)) \
    X(int, hw_ok, (void), ()) \
    X(void, clear, (const gfx_state_t *st, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz), (st, x0, y0, x1, y1, rgba, depth, cc, ca, cz)) \
    X(void, flush, (void), ()) \
    X(void, transfer, (u32 src, int sbw, int sx, int sy, u32 dst, int dbw, int dx, int dy, int w, int h, int bpp), (src, sbw, sx, sy, dst, dbw, dx, dy, w, h, bpp)) \
    X(void, set_display, (u32 addr, u32 stride, u32 fmt), (addr, stride, fmt)) \
    X(void, get_display, (u32 *addr, u32 *stride, u32 *fmt), (addr, stride, fmt)) \
    X(int, read_display, (u32 *out), (out)) \
    X(u32 *, present_image, (int w, int h), (w, h)) \
    X(u32 *, read_display_full, (int *w, int *h), (w, h)) \
    X(void, present, (int w, int h), (w, h)) \
    X(void, stats, (char *buf, int n), (buf, n)) \
    X(void, cache_stats, (char *buf, int n), (buf, n)) \
    X(void, before_job, (void), ()) \
    X(void, shadow_frame, (void), ())
#define DECL(r, n, a, c) r gl_gfx_##n a; r vk_gfx_##n a;
GFX_BACKEND_FUNCS(DECL)
#undef DECL
/* the null renderer (dedicated host, RS_DEDICATED): everything accepted, nothing drawn, no GPU or window */
static int null_gfx_init(void){ return 0; }
static unsigned null_gfx_tex_acquire(const gtex_key_t *k, const gtex_src_t *src, float uvs[4]){ (void)k; (void)src; if (uvs) { uvs[0] = 0; uvs[1] = 0; uvs[2] = 1; uvs[3] = 1; } return 1; }
static void null_gfx_tex_maps(unsigned *mr, unsigned *nrm, int *hd){ if (mr) *mr = 0; if (nrm) *nrm = 0; if (hd) *hd = 0; }
static void null_gfx_draw(const gfx_state_t *st, const gfx_vtx_t *v, int n){ (void)st; (void)v; (void)n; }
static void null_gfx_draw_hw(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n){ (void)st; (void)hw; (void)v; (void)n; }
static int null_gfx_draw_native(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_native_t *nv){ (void)st; (void)hw; (void)nv; return 1; }
static int null_gfx_hw_ok(void){ return 1; }
static void null_gfx_clear(const gfx_state_t *st, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz){ (void)st; (void)x0; (void)y0; (void)x1; (void)y1; (void)rgba; (void)depth; (void)cc; (void)ca; (void)cz; }
static void null_gfx_flush(void){}
static void null_gfx_transfer(u32 src, int sbw, int sx, int sy, u32 dst, int dbw, int dx, int dy, int w, int h, int bpp){ (void)src; (void)sbw; (void)sx; (void)sy; (void)dst; (void)dbw; (void)dx; (void)dy; (void)w; (void)h; (void)bpp; }
static u32 null_disp[3];
static void null_gfx_set_display(u32 addr, u32 stride, u32 fmt){ null_disp[0] = addr; null_disp[1] = stride; null_disp[2] = fmt; }
static void null_gfx_get_display(u32 *addr, u32 *stride, u32 *fmt){ if (addr) *addr = null_disp[0]; if (stride) *stride = null_disp[1]; if (fmt) *fmt = null_disp[2]; }
static int null_gfx_read_display(u32 *out){ (void)out; return 0; }
static u32 *null_gfx_present_image(int w, int h){ (void)w; (void)h; return 0; }
static u32 *null_gfx_read_display_full(int *w, int *h){ if (w) *w = 0; if (h) *h = 0; return 0; }
static void null_gfx_present(int w, int h){ (void)w; (void)h; }
static void null_gfx_stats(char *buf, int n){ if (buf && n > 0) buf[0] = 0; }
static void null_gfx_cache_stats(char *buf, int n){ if (buf && n > 0) buf[0] = 0; }
static void null_gfx_before_job(void){}
static void null_gfx_shadow_frame(void){}
static int use_vk = -1;
void rs_gfx_use_null(void){ use_vk = 2; }
void rs_gfx_use_vulkan(int on){ use_vk = on; }
int rs_gfx_vulkan(void){ return use_vk == 1; }
#if defined(RS_VULKAN) && defined(RS_NO_GL)
#define FWD(r, n, a, c) r gfx_##n a { return use_vk == 2 ? null_gfx_##n c : vk_gfx_##n c; }       /* Vulkan only (Steam Deck: no OpenGL renderer) */
#elif defined(RS_VULKAN)
#define FWD(r, n, a, c) r gfx_##n a { return use_vk == 2 ? null_gfx_##n c : use_vk == 1 ? vk_gfx_##n c : gl_gfx_##n c; }
#else
#define FWD(r, n, a, c) r gfx_##n a { return use_vk == 2 ? null_gfx_##n c : gl_gfx_##n c; }
#endif
GFX_BACKEND_FUNCS(FWD)
#undef FWD
#ifdef RS_NO_GL
/* shared renderer globals that live in gfx_gl.c when it is built */
#include <time.h>
volatile unsigned rs_gfx_epoch = 1;
rs_perf_t rs_perf;
u64 rs_perf_us(void){ struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t); return (u64)t.tv_sec * 1000000ull + (u64)t.tv_nsec / 1000; }
#endif
