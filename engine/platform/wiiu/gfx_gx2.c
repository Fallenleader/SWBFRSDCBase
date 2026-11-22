/* Wii U renderer: GX2 through wut's WHB gfx (TV + GamePad scan buffers, context states, GFD shader groups).  The GL back end's
 * pipelines and shaders (platform/wiiu/shaders, compiled offline to .gsh by CafeGLSL and embedded), drawn once into the TV's
 * colour buffer and copied to both screens (the GamePad's copy is scaled by GX2).  Uniforms in registers.  The CPU is big
 * endian: vertex floats and u32 indices are native (GX2's default attribute swap, GX2_INDEX_TYPE_U32), texture texels are
 * swapped to R, G, B, A bytes.
 *
 * Unconfirmed on hardware [assumed]: the clip-space depth range (GL style, -w..w, as CafeGLSL's Mesa output is), GX2's RGBA8
 * texel byte order, the GamePad copy of the TV buffer, the base-vertex meaning of GX2DrawIndexedEx's offset.  Textures are linear
 * (no tiling) and single-level for now: GX2's mip offsets are not handled yet. */
#include "../../render/ak_gfx.h"
#include "../../render/ak_font.h"
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <gx2/clear.h>
#include <gx2/draw.h>
#include <gx2/event.h>
#include <gx2/mem.h>
#include <gx2/registers.h>
#include <gx2/sampler.h>
#include <gx2/shaders.h>
#include <gx2/state.h>
#include <gx2/surface.h>
#include <gx2/swap.h>
#include <gx2/texture.h>
#include <gx2/utils.h>
#include <whb/gfx.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gfx_gx2_gsh.h"

struct ak_gfx_buf { void *p; u32 bytes; };
struct ak_gfx_tex { GX2Texture t; };

typedef struct {
    WHBGfxShaderGroup g; bool ok;
    s32 vp, fogr, tint, sh, uvo, fog, scale;          /* uniform register offsets (-1: none) */
} prog_t;
static prog_t prog[5], ui;                              /* 0 opaque, 1 cutout, 2 alpha, 3 beam */
static const int pipe_prog[AK_PIPE_COUNT] = { 0, 1, 1, 2, 2, 2, 3, 2 };
static GX2Sampler samp_lin, samp_near;
static ak_gfx_tex *white, *font;
static int W, H; static char name[96];
static ak_gfx_stats st; static u64 t_begin;

#define RING_BYTES (8u << 20)
static u8 *ring; static u32 ring_top;
#define UI_MAXQ 4096
typedef struct { f32 x, y, u, v; u32 c; } uiv;
static uiv *ui_v; static int ui_n; static u16 *ui_idx;

static s32 vreg(const GX2VertexShader *s, const char *n) { GX2UniformVar *v = GX2GetVertexUniformVar(s, n); return v ? (s32)v->offset : -1; }
static s32 preg(const GX2PixelShader *s, const char *n) { GX2UniformVar *v = GX2GetPixelUniformVar(s, n); return v ? (s32)v->offset : -1; }

static bool load_prog(prog_t *p, const u8 *gsh, bool is_ui)
{
    memset(p, 0, sizeof *p);
    if (!WHBGfxLoadGFDShaderGroup(&p->g, 0, gsh)) { AK_ERROR("gx2", "shader group failed"); return false; }
    if (is_ui) {
        WHBGfxInitShaderAttribute(&p->g, "aPos", 0, 0, GX2_ATTRIB_FORMAT_FLOAT_32_32);
        WHBGfxInitShaderAttribute(&p->g, "aUv", 0, 8, GX2_ATTRIB_FORMAT_FLOAT_32_32);
        WHBGfxInitShaderAttribute(&p->g, "aCol", 0, 16, GX2_ATTRIB_FORMAT_UNORM_8_8_8_8);
    } else {
        WHBGfxInitShaderAttribute(&p->g, "aPos", 0, offsetof(ak_vtx, pos), GX2_ATTRIB_FORMAT_FLOAT_32_32_32);
        WHBGfxInitShaderAttribute(&p->g, "aUv", 0, offsetof(ak_vtx, uv), GX2_ATTRIB_FORMAT_FLOAT_32_32);
        WHBGfxInitShaderAttribute(&p->g, "aNrm", 0, offsetof(ak_vtx, nrm), GX2_ATTRIB_FORMAT_SNORM_8_8_8_8);
        WHBGfxInitShaderAttribute(&p->g, "aCol", 0, offsetof(ak_vtx, col), GX2_ATTRIB_FORMAT_UNORM_8_8_8_8);
    }
    if (!WHBGfxInitFetchShader(&p->g)) { AK_ERROR("gx2", "fetch shader failed"); return false; }
    const GX2VertexShader *vs = p->g.vertexShader; const GX2PixelShader *ps = p->g.pixelShader;
    p->vp = vreg(vs, "uVP"); p->fogr = vreg(vs, "uFogRange"); p->tint = vreg(vs, "uTint"); p->sh = vreg(vs, "uSh"); p->uvo = vreg(vs, "uUvOff");
    p->scale = vreg(vs, "uScale"); p->fog = preg(ps, "uFog");
    p->ok = true;
    return true;
}

static ak_gfx_tex *tex_make(int w, int h, GX2SurfaceFormat fmt, const u8 *px, u32 bpp, bool swap32)
{
    ak_gfx_tex *x = (ak_gfx_tex *)calloc(1, sizeof *x);
    if (!x) return NULL;
    GX2Texture *t = &x->t;
    t->surface.dim = GX2_SURFACE_DIM_TEXTURE_2D; t->surface.width = (u32)w; t->surface.height = (u32)h; t->surface.depth = 1;
    t->surface.mipLevels = 1; t->surface.format = fmt; t->surface.aa = GX2_AA_MODE1X; t->surface.use = GX2_SURFACE_USE_TEXTURE;
    t->surface.tileMode = GX2_TILE_MODE_LINEAR_ALIGNED;
    t->viewNumMips = 1; t->viewNumSlices = 1;
    t->compMap = fmt == GX2_SURFACE_FORMAT_UNORM_R8 ? GX2_COMP_MAP(GX2_SQ_SEL_R, GX2_SQ_SEL_0, GX2_SQ_SEL_0, GX2_SQ_SEL_1)
                                                      : GX2_COMP_MAP(GX2_SQ_SEL_R, GX2_SQ_SEL_G, GX2_SQ_SEL_B, GX2_SQ_SEL_A);
    GX2CalcSurfaceSizeAndAlignment(&t->surface);
    GX2InitTextureRegs(t);
    t->surface.image = memalign(t->surface.alignment, t->surface.imageSize);
    if (!t->surface.image) { free(x); return NULL; }
    u8 *dst = (u8 *)t->surface.image;
    for (int y = 0; y < h; y++) {
        u8 *row = dst + (size_t)y * t->surface.pitch * bpp; const u8 *src = px + (size_t)y * w * bpp;
        if (swap32) for (int i = 0; i < w; i++) { u32 v; memcpy(&v, src + 4 * i, 4); v = __builtin_bswap32(v); memcpy(row + 4 * i, &v, 4); }
        else memcpy(row, src, (size_t)w * bpp);
    }
    GX2Invalidate(GX2_INVALIDATE_MODE_CPU_TEXTURE, t->surface.image, t->surface.imageSize);
    return x;
}

bool ak_gfx_init(const ak_gfx_config *c)
{
    (void)c;
    if (!WHBGfxInit()) { AK_ERROR("gx2", "WHBGfxInit failed"); return false; }
    GX2ColorBuffer *tv = WHBGfxGetTVColourBuffer(); W = (int)tv->surface.width; H = (int)tv->surface.height;
    snprintf(name, sizeof name, "GX2 %dx%d (TV) + GamePad", W, H);
    static const u8 *const gsh[4] = { gsh_opaque, gsh_cutout, gsh_alpha, gsh_beam };
    for (int i = 0; i < 4; i++) if (!load_prog(&prog[i], gsh[i], false)) return false;
    if (!load_prog(&ui, gsh_ui, true)) return false;
    GX2InitSampler(&samp_lin, GX2_TEX_CLAMP_MODE_WRAP, GX2_TEX_XY_FILTER_MODE_LINEAR);
    GX2InitSampler(&samp_near, GX2_TEX_CLAMP_MODE_CLAMP, GX2_TEX_XY_FILTER_MODE_POINT);
    u32 wpx = 0xFFFFFFFFu; white = tex_make(1, 1, GX2_SURFACE_FORMAT_UNORM_R8_G8_B8_A8, (const u8 *)&wpx, 4, false);
    font = tex_make(AK_FONT_W, AK_FONT_H_PX, GX2_SURFACE_FORMAT_UNORM_R8, ak_font_alpha, 1, false);
    ring = (u8 *)memalign(GX2_VERTEX_BUFFER_ALIGNMENT, RING_BYTES);
    ui_v = (uiv *)malloc(sizeof(uiv) * 4 * UI_MAXQ);
    ui_idx = (u16 *)memalign(GX2_INDEX_BUFFER_ALIGNMENT, UI_MAXQ * 6 * 2);
    if (!white || !font || !ring || !ui_v || !ui_idx) return false;
    for (int i = 0; i < UI_MAXQ; i++) { u16 b = (u16)(i * 4); u16 *p = ui_idx + i * 6; p[0] = b; p[1] = b + 1; p[2] = b + 2; p[3] = b + 2; p[4] = b + 1; p[5] = b + 3; }
    GX2Invalidate(GX2_INVALIDATE_MODE_CPU_ATTRIBUTE_BUFFER, ui_idx, UI_MAXQ * 6 * 2);
    AK_INFO("gx2", "%s", name);
    return true;
}
void ak_gfx_shutdown(void) { WHBGfxShutdown(); }
void ak_gfx_size(int *w, int *h) { *w = W; *h = H; }
const char *ak_gfx_name(void) { return name; }

static ak_gfx_buf *buf_make(const void *d, u32 bytes)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b);
    if (!b) return NULL;
    b->p = memalign(GX2_VERTEX_BUFFER_ALIGNMENT, bytes ? bytes : 4); b->bytes = bytes;
    if (!b->p) { free(b); return NULL; }
    memcpy(b->p, d, bytes);
    GX2Invalidate(GX2_INVALIDATE_MODE_CPU_ATTRIBUTE_BUFFER, b->p, bytes);
    return b;
}
ak_gfx_buf *ak_gfx_vertices(const ak_vtx *v, u32 n) { return buf_make(v, (u32)sizeof *v * n); }
ak_gfx_buf *ak_gfx_indices(const u32 *i, u32 n) { return buf_make(i, 4u * n); }
/* (each frame ends with GX2DrawDone, so nothing the GPU reads is in flight when the game frees it) */
void ak_gfx_free_buf(ak_gfx_buf *b) { if (b) { free(b->p); free(b); } }
void ak_gfx_free_tex(ak_gfx_tex *t) { if (t) { free(t->t.surface.image); free(t); } }
void ak_gfx_wait_idle(void) { GX2DrawDone(); }

static ak_gfx_tex *texture_with(const ak_texture *t, const u32 *pal)
{
    u32 *px = (u32 *)malloc((size_t)t->width * t->height * 4);
    if (!px) return NULL;
    ak_texture tt = *t; memcpy(tt.palette, pal, sizeof(u32) << t->bpp);
    ak_texture_expand(&tt, 0, px);                      /* u32 texels, R in the low byte: swapped to R, G, B, A bytes */
    ak_gfx_tex *x = tex_make(t->width, t->height, GX2_SURFACE_FORMAT_UNORM_R8_G8_B8_A8, (const u8 *)px, 4, true);
    free(px);
    return x;
}
ak_gfx_tex *ak_gfx_texture(const ak_texture *t) { return texture_with(t, t->palette); }
ak_gfx_tex *ak_gfx_texture_palette(ak_gfx_tex *b, const ak_texture *t, const u32 *pal) { (void)b; return texture_with(t, pal); }

/* ---- the frame */
static f32 vp[16], frame_vp[16], tint[4], uvo[4], sh[16], fogr[4]; static ak_gfx_env env, frame_env;
static int cur_pipe = -1, cull_mode; static bool cull_on, light_on;

void ak_gfx_begin(u32 clear, const ak_m4 *m, const ak_gfx_env *e)
{
    t_begin = ak_plat_time_us(); memset(&st, 0, sizeof st);
    WHBGfxBeginRender(); WHBGfxBeginRenderTV();
    WHBGfxClearColor((clear & 255) / 255.0f, ((clear >> 8) & 255) / 255.0f, ((clear >> 16) & 255) / 255.0f, 1.0f);
    GX2SetColorControl(GX2_LOGIC_OP_COPY, 0xFF, FALSE, TRUE);
    memcpy(vp, m->m, sizeof vp); memcpy(frame_vp, m->m, sizeof vp); env = frame_env = *e;
    tint[0] = tint[1] = tint[2] = tint[3] = 1; uvo[0] = uvo[1] = uvo[2] = uvo[3] = 0; light_on = false; memset(sh, 0, sizeof sh);
    { static int cm = -1; if (cm < 0) cm = ak_setting_int("AK_CULL", 0); cull_mode = cm; }
    cull_on = true; cur_pipe = -1; ring_top = 0;
}
void ak_gfx_set_transform(const ak_m4 *m) { memcpy(vp, (m ? m->m : frame_vp), sizeof vp); }
void ak_gfx_set_tint(const f32 *c) { if (c) memcpy(tint, c, 16); else tint[0] = tint[1] = tint[2] = tint[3] = 1; }
void ak_gfx_set_cull(bool on) { cull_on = on; }
void ak_gfx_set_light(const f32 *s) { light_on = s != NULL; if (s) for (int i = 0; i < 4; i++) { sh[i * 4] = s[i * 3]; sh[i * 4 + 1] = s[i * 3 + 1]; sh[i * 4 + 2] = s[i * 3 + 2]; sh[i * 4 + 3] = 0; } }
void ak_gfx_set_uv_offset(const f32 *u) { uvo[0] = u ? u[0] : 0; uvo[1] = u ? u[1] : 0; }
void ak_gfx_set_fog_range(const f32 *se) { env.fog_start = se ? se[0] : frame_env.fog_start; env.fog_end = se ? se[1] : frame_env.fog_end; }

static void state(ak_pipe p, ak_gfx_tex *t)
{
    const prog_t *g = &prog[pipe_prog[p]];
    if ((int)p != cur_pipe) {
        GX2SetFetchShader(&g->g.fetchShader); GX2SetVertexShader(g->g.vertexShader); GX2SetPixelShader(g->g.pixelShader);
        bool blend = p >= AK_PIPE_LAYER;
        GX2BlendMode src = p == AK_PIPE_BEAM ? GX2_BLEND_MODE_ONE : GX2_BLEND_MODE_SRC_ALPHA;
        GX2BlendMode dst = p == AK_PIPE_ADD ? GX2_BLEND_MODE_ONE : GX2_BLEND_MODE_INV_SRC_ALPHA;
        GX2SetBlendControl(GX2_RENDER_TARGET_0, src, dst, GX2_BLEND_COMBINE_MODE_ADD, TRUE, src, dst, GX2_BLEND_COMBINE_MODE_ADD);
        GX2SetColorControl(GX2_LOGIC_OP_COPY, blend ? 0x01 : 0x00, FALSE, TRUE);
        bool write = p <= AK_PIPE_OVERLAY;
        GX2SetDepthOnlyControl(p != AK_PIPE_HUD, write, GX2_COMPARE_FUNC_LEQUAL);
        bool bias = p == AK_PIPE_OVERLAY || p == AK_PIPE_BLEND;
        int cull = cull_mode && cull_on && (p == AK_PIPE_OPAQUE || p == AK_PIPE_OVERLAY) ? cull_mode : 0;
        GX2SetPolygonControl(GX2_FRONT_FACE_CCW, cull == 2, cull == 1, FALSE, GX2_POLYGON_MODE_TRIANGLE, GX2_POLYGON_MODE_TRIANGLE, bias, bias, FALSE);
        if (bias) GX2SetPolygonOffset(-2.0f, -1.0f, -2.0f, -1.0f, 0.0f);      /* (the GL back end's glPolygonOffset(-1, -2)) */
        cur_pipe = (int)p;
    }
    fogr[0] = p == AK_PIPE_HUD ? 0 : env.fog_start; fogr[1] = p == AK_PIPE_HUD ? 0 : env.fog_end; fogr[2] = p == AK_PIPE_HUD ? 1 : env.colour_scale; fogr[3] = light_on ? 1.0f : 0.0f;
    if (g->vp >= 0) GX2SetVertexUniformReg((u32)g->vp, 16, vp);
    if (g->fogr >= 0) GX2SetVertexUniformReg((u32)g->fogr, 4, fogr);
    if (g->tint >= 0) GX2SetVertexUniformReg((u32)g->tint, 4, tint);
    if (g->uvo >= 0) GX2SetVertexUniformReg((u32)g->uvo, 4, uvo);
    if (g->sh >= 0 && light_on) GX2SetVertexUniformReg((u32)g->sh, 16, sh);
    if (g->fog >= 0) { f32 f[4] = { env.fog_rgb[0], env.fog_rgb[1], env.fog_rgb[2], 1 }; GX2SetPixelUniformReg((u32)g->fog, 4, f); }
    if (p != AK_PIPE_BEAM) { GX2SetPixelTexture(&(t ? t : white)->t, 0); GX2SetPixelSampler(&samp_lin, 0); }
}
void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count)
{
    if (!count || !vb || !ib) return;
    state(p, t);
    GX2SetAttribBuffer(0, vb->bytes, sizeof(ak_vtx), vb->p);
    GX2DrawIndexedEx(GX2_PRIMITIVE_MODE_TRIANGLES, count, GX2_INDEX_TYPE_U32, (const u32 *)ib->p + first, 0, 1);
    st.draws++; st.tris += count / 3;
}
static void *ring_put(const void *d, u32 n)
{
    u32 o = (ring_top + 63) & ~63u;
    if (o + n > RING_BYTES) return NULL;
    ring_top = o + n; memcpy(ring + o, d, n);
    GX2Invalidate(GX2_INVALIDATE_MODE_CPU_ATTRIBUTE_BUFFER, ring + o, n);
    return ring + o;
}
void ak_gfx_draw_immediate(ak_pipe p, ak_gfx_tex *t, const ak_vtx *v, u32 count)
{
    if (!count) return;
    void *d = ring_put(v, (u32)sizeof *v * count);
    if (!d) return;
    state(p, t);
    GX2SetAttribBuffer(0, (u32)sizeof *v * count, sizeof(ak_vtx), d);
    GX2DrawEx(GX2_PRIMITIVE_MODE_TRIANGLES, count, 0, 1);
    st.draws++; st.tris += count / 3;
}
void ak_gfx_text(f32 x, f32 y, u32 c, const char *s)
{
    for (; *s && ui_n < UI_MAXQ; s++, x += AK_FONT_CW) {
        int ch = (u8)*s; if (ch < 32 || ch > 126) ch = '?';
        if (ch == ' ') continue;
        int i = ch - 32; f32 u0 = (f32)((i % 16) * AK_FONT_CW) / AK_FONT_W, v0 = (f32)((i / 16) * AK_FONT_CH) / AK_FONT_H_PX;
        f32 u1 = u0 + (f32)AK_FONT_CW / AK_FONT_W, v1 = v0 + (f32)AK_FONT_CH / AK_FONT_H_PX;
        u32 cc = __builtin_bswap32(c);                   /* (the vertex colour's bytes as R, G, B, A in memory) */
        uiv *v = ui_v + ui_n * 4; ui_n++;
        v[0] = (uiv){ x, y, u0, v0, cc }; v[1] = (uiv){ x + AK_FONT_CW, y, u1, v0, cc }; v[2] = (uiv){ x, y + AK_FONT_CH, u0, v1, cc }; v[3] = (uiv){ x + AK_FONT_CW, y + AK_FONT_CH, u1, v1, cc };
    }
}
void ak_gfx_end(ak_gfx_stats *out)
{
    if (ui_n) {
        void *d = ring_put(ui_v, (u32)(sizeof(uiv) * 4 * (size_t)ui_n));
        if (d) {
            GX2SetFetchShader(&ui.g.fetchShader); GX2SetVertexShader(ui.g.vertexShader); GX2SetPixelShader(ui.g.pixelShader);
            GX2SetBlendControl(GX2_RENDER_TARGET_0, GX2_BLEND_MODE_SRC_ALPHA, GX2_BLEND_MODE_INV_SRC_ALPHA, GX2_BLEND_COMBINE_MODE_ADD, TRUE,
                               GX2_BLEND_MODE_SRC_ALPHA, GX2_BLEND_MODE_INV_SRC_ALPHA, GX2_BLEND_COMBINE_MODE_ADD);
            GX2SetColorControl(GX2_LOGIC_OP_COPY, 0x01, FALSE, TRUE); GX2SetDepthOnlyControl(FALSE, FALSE, GX2_COMPARE_FUNC_ALWAYS);
            GX2SetPolygonControl(GX2_FRONT_FACE_CCW, FALSE, FALSE, FALSE, GX2_POLYGON_MODE_TRIANGLE, GX2_POLYGON_MODE_TRIANGLE, FALSE, FALSE, FALSE);
            f32 sc[4] = { 2.0f / W, 2.0f / H, 0, 0 }; if (ui.scale >= 0) GX2SetVertexUniformReg((u32)ui.scale, 4, sc);
            GX2SetPixelTexture(&font->t, 0); GX2SetPixelSampler(&samp_near, 0);
            GX2SetAttribBuffer(0, (u32)(sizeof(uiv) * 4 * (size_t)ui_n), sizeof(uiv), d);
            GX2DrawIndexedEx(GX2_PRIMITIVE_MODE_TRIANGLES, (u32)ui_n * 6, GX2_INDEX_TYPE_U16, ui_idx, 0, 1);
        }
        ui_n = 0; cur_pipe = -1;
    }
    WHBGfxFinishRenderTV();
    GX2CopyColorBufferToScanBuffer(WHBGfxGetTVColourBuffer(), GX2_SCAN_TARGET_DRC);   /* the same picture on the GamePad */
    st.cpu_submit_ms = (ak_plat_time_us() - t_begin) / 1000.0f;
    u64 t0 = ak_plat_time_us();
    WHBGfxFinishRender();                                /* (swap, flush and wait for the GPU) */
    st.gpu_wait_ms = (ak_plat_time_us() - t0) / 1000.0f;
    if (out) *out = st;
}
bool ak_gfx_screenshot(const char *path) { (void)path; return false; }
