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
static int use_vk = -1;
void rs_gfx_use_vulkan(int on){ use_vk = on; }
int rs_gfx_vulkan(void){ return use_vk == 1; }
#ifdef RS_VULKAN
#define FWD(r, n, a, c) r gfx_##n a { return use_vk == 1 ? vk_gfx_##n c : gl_gfx_##n c; }
#else
#define FWD(r, n, a, c) r gfx_##n a { return gl_gfx_##n c; }
#endif
GFX_BACKEND_FUNCS(FWD)
#undef FWD
