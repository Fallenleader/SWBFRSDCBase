/* GameCube renderer: GX (libogc).  The fixed-function pipeline takes the GL back end's work this way:
 *  - transforms: GX wants the projection apart from the model-view, so the engine hands it over (ak_gfx_set_projection) and each
 *    draw's model-view is projection^-1 x mvp; GL's clip depth (-w..w) becomes GX's (-w..0); 2D draws use an orthographic projection
 *  - colour: TEV stage 0 = texture x vertex (or lit) colour, scaled by the frame's colour scale; stage 1 x the tint (a constant colour)
 *  - object lighting: three coloured hardware lights, one per channel of the game's per-channel directional light, in model space
 *    (identity normal matrix), on the light channel's ambient colour
 *  - fog: GX's linear fog; cutouts: the alpha compare; blending: the blend unit; the beam: a precomputed glow texture
 *  - textures stay 4 / 8-bit palette images (CI4 / CI8, tiled), palettes as RGB5A3 TLUTs; personalised palettes share the pixels
 *  - geometry: the engine's vertices as arrays (stride 28), drawn with 16-bit indices from the CPU
 * No polygon offset on GX: decals / overlays are drawn without one (possible z-fighting) [open].  Normals are signed 8-bit with
 * 6 fraction bits on GX (x2 against the engine's /127), so the lights' colours are halved. */
#include "../../render/ak_gfx.h"
#include "../../render/ak_font.h"
#include "../plat.h"
#include "../../core/ak_settings.h"
#include <gccore.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ak_gfx_buf { void *p; u32 n, bytes; bool kept, i16; };   /* i16: 16-bit indices */
typedef struct { void *img; u32 refs; bool owned; } gx_img;   /* owned: freed with its last texture (else the level's memory) */
struct ak_gfx_tex { GXTexObj obj; GXTlutObj tlut; u16 *lut; gx_img *img; bool ci; };

static GXRModeObj *rmode; static void *xfb[2]; static int xfb_i; static void *fifo;
static int W, H; static char name[64];
static ak_gfx_stats st; static u64 t_begin;
static ak_gfx_tex *white, *font, *glow;

/* ---- matrices: ak_m4 is column-major (m[c * 4 + r]); GX's Mtx are rows */
static f32 el(const ak_m4 *m, int r, int c) { return m->m[c * 4 + r]; }
static bool inv4(const f32 *m, f32 *o)
{
    f32 inv[16];
    inv[0] = m[5]*m[10]*m[15] - m[5]*m[11]*m[14] - m[9]*m[6]*m[15] + m[9]*m[7]*m[14] + m[13]*m[6]*m[11] - m[13]*m[7]*m[10];
    inv[4] = -m[4]*m[10]*m[15] + m[4]*m[11]*m[14] + m[8]*m[6]*m[15] - m[8]*m[7]*m[14] - m[12]*m[6]*m[11] + m[12]*m[7]*m[10];
    inv[8] = m[4]*m[9]*m[15] - m[4]*m[11]*m[13] - m[8]*m[5]*m[15] + m[8]*m[7]*m[13] + m[12]*m[5]*m[11] - m[12]*m[7]*m[9];
    inv[12] = -m[4]*m[9]*m[14] + m[4]*m[10]*m[13] + m[8]*m[5]*m[14] - m[8]*m[6]*m[13] - m[12]*m[5]*m[10] + m[12]*m[6]*m[9];
    inv[1] = -m[1]*m[10]*m[15] + m[1]*m[11]*m[14] + m[9]*m[2]*m[15] - m[9]*m[3]*m[14] - m[13]*m[2]*m[11] + m[13]*m[3]*m[10];
    inv[5] = m[0]*m[10]*m[15] - m[0]*m[11]*m[14] - m[8]*m[2]*m[15] + m[8]*m[3]*m[14] + m[12]*m[2]*m[11] - m[12]*m[3]*m[10];
    inv[9] = -m[0]*m[9]*m[15] + m[0]*m[11]*m[13] + m[8]*m[1]*m[15] - m[8]*m[3]*m[13] - m[12]*m[1]*m[11] + m[12]*m[3]*m[9];
    inv[13] = m[0]*m[9]*m[14] - m[0]*m[10]*m[13] - m[8]*m[1]*m[14] + m[8]*m[2]*m[13] + m[12]*m[1]*m[10] - m[12]*m[2]*m[9];
    inv[2] = m[1]*m[6]*m[15] - m[1]*m[7]*m[14] - m[5]*m[2]*m[15] + m[5]*m[3]*m[14] + m[13]*m[2]*m[7] - m[13]*m[3]*m[6];
    inv[6] = -m[0]*m[6]*m[15] + m[0]*m[7]*m[14] + m[4]*m[2]*m[15] - m[4]*m[3]*m[14] - m[12]*m[2]*m[7] + m[12]*m[3]*m[6];
    inv[10] = m[0]*m[5]*m[15] - m[0]*m[7]*m[13] - m[4]*m[1]*m[15] + m[4]*m[3]*m[13] + m[12]*m[1]*m[7] - m[12]*m[3]*m[5];
    inv[14] = -m[0]*m[5]*m[14] + m[0]*m[6]*m[13] + m[4]*m[1]*m[14] - m[4]*m[2]*m[13] - m[12]*m[1]*m[6] + m[12]*m[2]*m[5];
    inv[3] = -m[1]*m[6]*m[11] + m[1]*m[7]*m[10] + m[5]*m[2]*m[11] - m[5]*m[3]*m[10] - m[9]*m[2]*m[7] + m[9]*m[3]*m[6];
    inv[7] = m[0]*m[6]*m[11] - m[0]*m[7]*m[10] - m[4]*m[2]*m[11] + m[4]*m[3]*m[10] + m[8]*m[2]*m[7] - m[8]*m[3]*m[6];
    inv[11] = -m[0]*m[5]*m[11] + m[0]*m[7]*m[9] + m[4]*m[1]*m[11] - m[4]*m[3]*m[9] - m[8]*m[1]*m[7] + m[8]*m[3]*m[5];
    inv[15] = m[0]*m[5]*m[10] - m[0]*m[6]*m[9] - m[4]*m[1]*m[10] + m[4]*m[2]*m[9] + m[8]*m[1]*m[6] - m[8]*m[2]*m[5];
    f32 det = m[0] * inv[0] + m[1] * inv[4] + m[2] * inv[8] + m[3] * inv[12];
    if (fabsf(det) < 1e-20f) return false;
    det = 1.0f / det; for (int i = 0; i < 16; i++) o[i] = inv[i] * det;
    return true;
}
static ak_m4 mul4(const ak_m4 *a, const ak_m4 *b)
{
    ak_m4 r; for (int c = 0; c < 4; c++) for (int rr = 0; rr < 4; rr++) { f32 s = 0; for (int k = 0; k < 4; k++) s += a->m[k * 4 + rr] * b->m[c * 4 + k]; r.m[c * 4 + rr] = s; }
    return r;
}

static bool have_proj; static ak_m4 proj, proj_inv; static Mtx44 gx_persp, gx_ortho; static f32 p_near = 0.5f, p_far = 1000.0f;
void ak_gfx_set_projection(const ak_m4 *p)
{
    have_proj = p && inv4(p->m, proj_inv.m);
    if (!have_proj) return;
    proj = *p; memset(gx_persp, 0, sizeof gx_persp);
    gx_persp[0][0] = el(p, 0, 0); gx_persp[0][2] = el(p, 0, 2); gx_persp[1][1] = el(p, 1, 1); gx_persp[1][2] = el(p, 1, 2);
    gx_persp[2][2] = 0.5f * (el(p, 2, 2) + 1.0f); gx_persp[2][3] = 0.5f * el(p, 2, 3); gx_persp[3][2] = -1.0f;   /* (GL z -> GX z: (z - w) / 2) */
    f32 a = el(p, 2, 2), b = el(p, 2, 3);
    if (fabsf(a - 1.0f) > 1e-6f && fabsf(a + 1.0f) > 1e-6f) { p_near = b / (a - 1.0f); p_far = b / (a + 1.0f); }
}

/* ---- textures */
static u16 rgb5a3(u32 c)
{
    u32 r = c & 255, g = (c >> 8) & 255, b = (c >> 16) & 255, a = c >> 24;
    if (a >= 0xE0) return (u16)(0x8000 | ((r >> 3) << 10) | ((g >> 3) << 5) | (b >> 3));
    return (u16)(((a >> 5) << 12) | ((r >> 4) << 8) | ((g >> 4) << 4) | (b >> 4));
}
/* one level of a palette image into GX's tiles: CI4 8 x 8 texels per 32-byte tile (high nibble = the left texel), CI8 8 x 4 */
static void tile_level(const ak_texture *t, int l, u8 *dst)
{
    int w = t->width >> l, h = t->height >> l; if (w < 1) w = 1; if (h < 1) h = 1;
    const u8 *src = t->pixels[l]; bool c4 = t->bpp == 4; int tw = 8, th = c4 ? 8 : 4, rowb = c4 ? (w + 1) / 2 : w;
    for (int ty = 0; ty < h; ty += th) for (int tx = 0; tx < w; tx += tw)
        for (int y = 0; y < th; y++) for (int x = 0; x < tw; x += c4 ? 2 : 1) {
            int sx = tx + x, sy = ty + y; u8 v = 0;
            if (c4) {
                u8 a = 0, b = 0;
                if (sy < h && sx < w) a = (src[sy * rowb + sx / 2] >> ((sx & 1) * 4)) & 15;
                if (sy < h && sx + 1 < w) b = (src[sy * rowb + (sx + 1) / 2] >> (((sx + 1) & 1) * 4)) & 15;
                v = (u8)(a << 4 | b);
            } else if (sy < h && sx < w) v = src[sy * rowb + sx];
            *dst++ = v;
        }
}
/* the same in place, over the level's own rows (its slot has room for the tiles): one band of tiles at a time, from the bottom
 * (a band's tiles never reach the rows of the bands above, which are still to do) */
static void tile_level_in_place(const ak_texture *t, int l)
{
    static u8 band[8 * 1024] __attribute__((aligned(32))), out[8 * 1024] __attribute__((aligned(32)));
    int w = t->width >> l, h = t->height >> l; if (w < 1) w = 1; if (h < 1) h = 1;
    bool c4 = t->bpp == 4; int th = c4 ? 8 : 4, rowb = c4 ? (w + 1) / 2 : w, nb = (h + th - 1) / th, tiles = (w + 7) / 8;
    u8 *px = (u8 *)t->pixels[l];
    if (rowb * th > (int)sizeof band || tiles * 32 > (int)sizeof out) return;
    for (int b = nb - 1; b >= 0; b--) {
        int rows = h - b * th < th ? h - b * th : th;
        memcpy(band, px + (size_t)b * th * rowb, (size_t)rows * rowb);
        u8 *d = out;
        for (int tx = 0; tx < w; tx += 8)
            for (int y = 0; y < th; y++) for (int x = 0; x < 8; x += c4 ? 2 : 1) {
                int sx = tx + x; u8 v = 0;
                if (c4) {
                    u8 a = 0, c = 0;
                    if (y < rows && sx < w) a = (band[y * rowb + sx / 2] >> ((sx & 1) * 4)) & 15;
                    if (y < rows && sx + 1 < w) c = (band[y * rowb + (sx + 1) / 2] >> (((sx + 1) & 1) * 4)) & 15;
                    v = (u8)(a << 4 | c);
                } else if (y < rows && sx < w) v = band[y * rowb + sx];
                *d++ = v;
            }
        memcpy(px + (size_t)b * tiles * 32, out, (size_t)tiles * 32);
    }
}
static bool pow2(int v) { return v > 0 && !(v & (v - 1)); }
static ak_gfx_tex *tex_ci(const ak_texture *t, const u32 *pal, gx_img *share, bool in_place)
{
    ak_gfx_tex *x = (ak_gfx_tex *)calloc(1, sizeof *x);
    if (!x) return NULL;
    u8 fmt = t->bpp == 4 ? GX_TF_CI4 : GX_TF_CI8; int levels = t->levels ? t->levels : 1, keep = 0;
    bool mips = pow2(t->width) && pow2(t->height) && levels > 1;
    u32 sizes[8], total = 0;
    for (int l = 0; l < levels && l < 8; l++) {
        int w = t->width >> l, h = t->height >> l; if (w < 1 || h < 1) break;
        sizes[l] = GX_GetTexBufferSize((u16)w, (u16)h, fmt, GX_FALSE, 0); total += sizes[l]; keep = l + 1;
        if (!mips) break;
    }
    if (share) { x->img = share; share->refs++; }
    else if (in_place) {   /* the texture's own block (ak_texture_slot: each level's slot = its GX size): re-tiled over its rows */
        x->img = (gx_img *)calloc(1, sizeof *x->img); if (!x->img) { free(x); return NULL; }
        x->img->img = t->pixels[0]; x->img->refs = 1;
        for (int l = 0; l < keep; l++) tile_level_in_place(t, l);
        DCFlushRange(x->img->img, total);
    } else {
        x->img = (gx_img *)calloc(1, sizeof *x->img); if (!x->img) { free(x); return NULL; }
        x->img->img = memalign(32, total); x->img->refs = 1; x->img->owned = true;
        if (!x->img->img) { AK_WARN("gx", "no memory for a %dx%d texture", t->width, t->height); free(x->img); free(x); return NULL; }
        u8 *d = (u8 *)x->img->img; for (int l = 0; l < keep; l++) { tile_level(t, l, d); d += sizes[l]; }
        DCFlushRange(x->img->img, total);
    }
    u32 n = 1u << t->bpp; x->lut = (u16 *)memalign(32, n * 2);
    if (!x->lut) { AK_WARN("gx", "no memory for a palette"); if (--x->img->refs == 0) { if (x->img->owned) free(x->img->img); free(x->img); } free(x); return NULL; }
    for (u32 i = 0; i < n; i++) x->lut[i] = rgb5a3(pal[i]);
    DCFlushRange(x->lut, n * 2);
    GX_InitTlutObj(&x->tlut, x->lut, GX_TL_RGB5A3, (u16)n);
    u8 wrap = pow2(t->width) && pow2(t->height) ? GX_REPEAT : GX_CLAMP;
    GX_InitTexObjCI(&x->obj, x->img->img, t->width, t->height, fmt, wrap, wrap, keep > 1 ? GX_TRUE : GX_FALSE, GX_TLUT0);
    if (keep > 1) GX_InitTexObjLOD(&x->obj, GX_LIN_MIP_LIN, GX_LINEAR, 0.0f, (f32)(keep - 1), 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
    x->ci = true;
    return x;
}
ak_gfx_tex *ak_gfx_texture(const ak_texture *t) { return tex_ci(t, t->palette, NULL, false); }
ak_gfx_tex *ak_gfx_texture_palette(ak_gfx_tex *b, const ak_texture *t, const u32 *pal) { return tex_ci(t, pal, b ? b->img : NULL, false); }
ak_gfx_tex *ak_gfx_texture_kept(ak_texture *t)
{
    bool ok = ((uintptr_t)t->pixels[0] & 31) == 0; u32 o = 0;
    for (u32 l = 0; ok && l < t->levels; l++) { ok = t->pixels[l] == t->pixels[0] + o; o += ak_texture_slot(t, l); }
    return tex_ci(t, t->palette, NULL, ok);
}
void ak_gfx_free_tex(ak_gfx_tex *t)
{
    if (!t) return;
    if (t->img && --t->img->refs == 0) { if (t->img->owned) free(t->img->img); free(t->img); }
    free(t->lut); free(t);
}
/* a plain texture (I8 or RGBA8 tiles) from linear rows */
static ak_gfx_tex *tex_plain(int w, int h, u8 fmt, const u8 *px)
{
    ak_gfx_tex *x = (ak_gfx_tex *)calloc(1, sizeof *x); x->img = (gx_img *)calloc(1, sizeof *x->img);
    u32 sz = GX_GetTexBufferSize((u16)w, (u16)h, fmt, GX_FALSE, 0); u8 *d = (u8 *)memalign(32, sz); memset(d, 0, sz);
    x->img->img = d; x->img->refs = 1;
    if (fmt == GX_TF_I8) { for (int ty = 0; ty < h; ty += 4) for (int tx = 0; tx < w; tx += 8) for (int y = 0; y < 4; y++) for (int xx = 0; xx < 8; xx++) {
        int sx = tx + xx, sy = ty + y; *d++ = (sx < w && sy < h) ? px[sy * w + sx] : 0; } }
    else {  /* RGBA8: 4 x 4 tiles of 64 bytes: 32 bytes of A R pairs, then 32 of G B */
        for (int ty = 0; ty < h; ty += 4) for (int tx = 0; tx < w; tx += 4) {
            for (int y = 0; y < 4; y++) for (int xx = 0; xx < 4; xx++) { int sx = tx + xx, sy = ty + y; const u8 *p = (sx < w && sy < h) ? px + 4 * (sy * w + sx) : NULL;
                d[2 * (y * 4 + xx)] = p ? p[3] : 0; d[2 * (y * 4 + xx) + 1] = p ? p[0] : 0; d[32 + 2 * (y * 4 + xx)] = p ? p[1] : 0; d[32 + 2 * (y * 4 + xx) + 1] = p ? p[2] : 0; }
            d += 64; }
    }
    DCFlushRange(x->img->img, sz);
    GX_InitTexObj(&x->obj, x->img->img, (u16)w, (u16)h, fmt, GX_CLAMP, GX_CLAMP, GX_FALSE);
    return x;
}

/* ---- buffers */
static ak_gfx_buf *buf_make(const void *d, u32 bytes, u32 n)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b);
    if (!b) return NULL;
    b->p = memalign(32, bytes ? bytes : 4); b->bytes = bytes; b->n = n;
    if (!b->p) { free(b); return NULL; }
    memcpy(b->p, d, bytes); DCFlushRange(b->p, bytes);
    return b;
}
ak_gfx_buf *ak_gfx_vertices(const ak_vtx *v, u32 n) { return buf_make(v, (u32)sizeof *v * n, n); }
ak_gfx_buf *ak_gfx_indices(const u32 *i, u32 n) { return buf_make(i, 4u * n, n); }
ak_gfx_buf *ak_gfx_vertices_kept(const ak_vtx *v, u32 n)
{
    if (((uintptr_t)v & 31) != 0) return ak_gfx_vertices(v, n);
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b); if (!b) return NULL;
    b->p = (void *)v; b->n = n; b->bytes = (u32)sizeof *v * n; b->kept = true; DCFlushRange(b->p, b->bytes);
    return b;
}
ak_gfx_buf *ak_gfx_indices_kept(const u32 *i, u32 n)   /* (the CPU reads the indices into the command FIFO: never copied) */
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b); if (!b) return NULL;
    b->p = (void *)i; b->n = n; b->bytes = 4u * n; b->kept = true;
    return b;
}
ak_gfx_buf *ak_gfx_indices16_kept(const u16 *i, u32 n)
{
    ak_gfx_buf *b = ak_gfx_indices_kept((const u32 *)i, n); if (b) { b->bytes = 2u * n; b->i16 = true; }
    return b;
}
void ak_gfx_free_buf(ak_gfx_buf *b) { if (b) { if (!b->kept) free(b->p); free(b); } }   /* (each frame ends with GX_DrawDone) */
void ak_gfx_wait_idle(void) { GX_DrawDone(); }

/* ---- set-up */
#define FIFO_SIZE (128u << 10)
bool ak_gfx_init(const ak_gfx_config *c)
{
    (void)c;
    rmode = VIDEO_GetPreferredMode(NULL);
    for (int i = 0; i < 2; i++) xfb[i] = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
    VIDEO_Configure(rmode); VIDEO_SetNextFramebuffer(xfb[0]); VIDEO_SetBlack(FALSE); VIDEO_Flush(); VIDEO_WaitVSync();
    if (rmode->viTVMode & VI_NON_INTERLACE) VIDEO_WaitVSync();
    fifo = memalign(32, FIFO_SIZE); memset(fifo, 0, FIFO_SIZE);
    GX_Init(fifo, FIFO_SIZE);
    W = rmode->fbWidth; H = rmode->efbHeight;
    GX_SetViewport(0, 0, (f32)W, (f32)H, 0, 1);
    f32 ys = GX_GetYScaleFactor(rmode->efbHeight, rmode->xfbHeight); u32 xh = GX_SetDispCopyYScale(ys);
    GX_SetScissor(0, 0, W, H); GX_SetDispCopySrc(0, 0, W, H); GX_SetDispCopyDst(W, xh);
    GX_SetCopyFilter(rmode->aa, rmode->sample_pattern, GX_TRUE, rmode->vfilter);
    GX_SetFieldMode(rmode->field_rendering, (rmode->viHeight == 2 * rmode->xfbHeight) ? GX_ENABLE : GX_DISABLE);
    GX_SetPixelFmt(rmode->aa ? GX_PF_RGB565_Z16 : GX_PF_RGB8_Z24, GX_ZC_LINEAR);
    GX_SetDispCopyGamma(GX_GM_1_0);
    GX_SetCullMode(GX_CULL_NONE);
    /* vertex formats: 0 = the engine's vertices by index, 1 = the debug text, direct */
    GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
    GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_NRM, GX_NRM_XYZ, GX_S8, 6);
    GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
    GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_F32, 0);
    GX_SetVtxAttrFmt(GX_VTXFMT1, GX_VA_POS, GX_POS_XY, GX_F32, 0);
    GX_SetVtxAttrFmt(GX_VTXFMT1, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
    GX_SetVtxAttrFmt(GX_VTXFMT1, GX_VA_TEX0, GX_TEX_ST, GX_F32, 0);
    Mtx id; guMtxIdentity(id); GX_LoadNrmMtxImm(id, GX_PNMTX0); GX_SetCurrentMtx(GX_PNMTX0);
    memset(gx_ortho, 0, sizeof gx_ortho); gx_ortho[0][0] = 1; gx_ortho[1][1] = 1; gx_ortho[2][2] = 0.5f; gx_ortho[2][3] = -0.5f; gx_ortho[3][3] = 1;
    snprintf(name, sizeof name, "GX %dx%d", W, H);
    /* the small textures: white, the font (I8), the beam's glow (RGBA8: the core in colour, the glow x 0.6 in alpha) */
    u32 wpx = 0xFFFFFFFFu; white = tex_plain(1, 1, GX_TF_RGBA8, (const u8 *)&wpx);
    font = tex_plain(AK_FONT_W, AK_FONT_H_PX, GX_TF_I8, ak_font_alpha);
    {   enum { G = 64 }; u8 *g = (u8 *)malloc(G * G * 4);
        for (int y = 0; y < G; y++) for (int x = 0; x < G; x++) {
            f32 u = (x + 0.5f) / G * 2 - 1, v = (y + 0.5f) / G * 2 - 1, d = sqrtf(u * u + v * v);
            f32 s1 = d < 0.75f ? 0 : d > 1 ? 1 : (d - 0.75f) / 0.25f; s1 = s1 * s1 * (3 - 2 * s1);
            f32 s2 = d < 0.16f ? 0 : d > 0.30f ? 1 : (d - 0.16f) / 0.14f; s2 = s2 * s2 * (3 - 2 * s2);
            f32 glw = expf(-d * d * 5.0f) * (1.0f - s1), core = 1.0f - s2;
            u8 *p = g + 4 * (y * G + x); p[0] = p[1] = p[2] = (u8)(core * 255); p[3] = (u8)(glw * 255);
        }
        glow = tex_plain(G, G, GX_TF_RGBA8, g); free(g); }
    AK_INFO("gx", "%s, %s", name, (rmode->viTVMode & VI_NON_INTERLACE) ? "progressive" : "interlaced");
    return true;
}
void ak_gfx_shutdown(void) {}
void ak_gfx_size(int *w, int *h) { *w = W; *h = H; }
const char *ak_gfx_name(void) { return name; }

/* ---- the frame */
static ak_m4 frame_vp, cur_mvp; static ak_gfx_env env, frame_env; static f32 tint[4]; static f32 sh[12]; static bool light_on, cull_on;
static f32 uvo[2]; static int cull_mode; static ak_gfx_tex *cur_tex; static u8 *ring; static u32 ring_top;
#define RING_BYTES (256u << 10)                    /* (the frame's immediate vertices: particles, beams, the HUD) */
static u32 ring_most; static u32 ring_drops;
void ak_gfx_begin(u32 clear, const ak_m4 *vp, const ak_gfx_env *e)
{
    t_begin = ak_plat_time_us(); memset(&st, 0, sizeof st);
    GXColor cc = { (u8)(clear & 255), (u8)(clear >> 8), (u8)(clear >> 16), 255 };
    GX_SetCopyClear(cc, GX_MAX_Z24);
    frame_vp = cur_mvp = *vp; env = frame_env = *e; tint[0] = tint[1] = tint[2] = tint[3] = 1; light_on = false; uvo[0] = uvo[1] = 0;
    { static int cm = -1; if (cm < 0) cm = ak_setting_int("AK_CULL", 0); cull_mode = cm; }
    cull_on = true; cur_tex = NULL; ring_top = 0;
    if (!ring) ring = (u8 *)memalign(32, RING_BYTES);
    GX_InvalidateTexAll();
}
void ak_gfx_set_transform(const ak_m4 *m) { cur_mvp = m ? *m : frame_vp; }
void ak_gfx_set_tint(const f32 *c) { if (c) memcpy(tint, c, 16); else tint[0] = tint[1] = tint[2] = tint[3] = 1; }
void ak_gfx_set_cull(bool on) { cull_on = on; }
void ak_gfx_set_light(const f32 *s) { light_on = s != NULL; if (s) memcpy(sh, s, sizeof sh); }
void ak_gfx_set_uv_offset(const f32 *u) { uvo[0] = u ? u[0] : 0; uvo[1] = u ? u[1] : 0; }
void ak_gfx_set_fog_range(const f32 *se) { env.fog_start = se ? se[0] : frame_env.fog_start; env.fog_end = se ? se[1] : frame_env.fog_end; }

static u8 c8(f32 v) { return v <= 0 ? 0 : v >= 1 ? 255 : (u8)(v * 255.0f + 0.5f); }
static void transform(ak_pipe p)
{
    Mtx mv; bool persp = have_proj && p != AK_PIPE_HUD;
    ak_m4 m = persp ? mul4(&proj_inv, &cur_mvp) : cur_mvp;
    for (int r = 0; r < 3; r++) for (int c = 0; c < 4; c++) mv[r][c] = el(&m, r, c);
    GX_LoadPosMtxImm(mv, GX_PNMTX0);
    GX_LoadProjectionMtx(persp ? gx_persp : gx_ortho, persp ? GX_PERSPECTIVE : GX_ORTHOGRAPHIC);
    Mtx tm; guMtxIdentity(tm);
    if (p == AK_PIPE_BEAM) { tm[0][0] = 0.5f; tm[0][3] = 0.5f; tm[1][1] = 0.5f; tm[1][3] = 0.5f; }   /* (half-widths -> the glow texture) */
    else { tm[0][3] = uvo[0]; tm[1][3] = uvo[1]; }
    GX_LoadTexMtxImm(tm, GX_TEXMTX0, GX_MTX2x4);
    GX_SetTexCoordGen(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, GX_TEXMTX0);
}
static void state(ak_pipe p, ak_gfx_tex *t)
{
    bool hud = p == AK_PIPE_HUD, beam = p == AK_PIPE_BEAM;
    transform(p);
    /* lighting: three coloured directional lights in model space on the ambient, or the vertex colour */
    if (light_on && !hud) {
        for (int c = 0; c < 3; c++) {
            const f32 *d = sh + 3 + 3 * c; f32 s = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
            GXLightObj lo; GXColor lc = { 0, 0, 0, 255 }; u8 v = c8(s * 0.5f);
            if (c == 0) lc.r = v; else if (c == 1) lc.g = v; else lc.b = v;
            f32 k = s > 1e-6f ? 1e6f / s : 0;
            GX_InitLightPos(&lo, d[0] * k, d[1] * k, d[2] * k); GX_InitLightColor(&lo, lc);
            GX_InitLightAttn(&lo, 1, 0, 0, 1, 0, 0); GX_LoadLightObj(&lo, (u8)(GX_LIGHT0 << c));
        }
        GXColor amb = { c8(sh[0]), c8(sh[1]), c8(sh[2]), 255 }, mat = { 255, 255, 255, 255 };
        GX_SetChanAmbColor(GX_COLOR0, amb); GX_SetChanMatColor(GX_COLOR0, mat);
        GX_SetChanCtrl(GX_COLOR0, GX_ENABLE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT0 | GX_LIGHT1 | GX_LIGHT2, GX_DF_CLAMP, GX_AF_NONE);
    } else GX_SetChanCtrl(GX_COLOR0, GX_DISABLE, GX_SRC_VTX, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
    GX_SetChanCtrl(GX_ALPHA0, GX_DISABLE, GX_SRC_VTX, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
    GX_SetNumChans(1); GX_SetNumTexGens(1);
    /* TEV */
    f32 cs = hud ? 1.0f : env.colour_scale; u8 scale = cs > 3.0f ? GX_CS_SCALE_4 : cs > 1.5f ? GX_CS_SCALE_2 : GX_CS_SCALE_1;
    GXColor k = { c8(tint[0]), c8(tint[1]), c8(tint[2]), c8(tint[3]) }; GX_SetTevKColor(GX_KCOLOR0, k);
    GX_SetTevKColorSel(GX_TEVSTAGE1, GX_TEV_KCSEL_K0); GX_SetTevKAlphaSel(GX_TEVSTAGE1, GX_TEV_KASEL_K0_A);
    GX_SetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
    GX_SetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
    if (beam) {   /* colour x glow + core, then x the vertex alpha; alpha = glow x 0.6 x vertex alpha (premultiplied) */
        GX_SetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_RASC, GX_CC_TEXA, GX_CC_TEXC);
        GX_SetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_TEXA, GX_CA_RASA, GX_CA_ZERO);
        GX_SetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_CPREV, GX_CC_RASA, GX_CC_ZERO);
        GX_SetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_APREV, GX_CA_KONST, GX_CA_ZERO);
        GXColor k6 = { 255, 255, 255, 153 }; GX_SetTevKColor(GX_KCOLOR0, k6);
        GX_SetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    } else {
        GX_SetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_TEXC, GX_CC_RASC, GX_CC_ZERO);
        GX_SetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_TEXA, GX_CA_RASA, GX_CA_ZERO);
        GX_SetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_CPREV, GX_CC_KONST, GX_CC_ZERO);
        GX_SetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_APREV, GX_CA_KONST, GX_CA_ZERO);
        GX_SetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, scale, GX_TRUE, GX_TEVPREV);
    }
    GX_SetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GX_SetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GX_SetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GX_SetNumTevStages(2);
    /* blending, depth, alpha test, cull */
    if (p == AK_PIPE_ADD) GX_SetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_ONE, GX_LO_CLEAR);
    else if (beam) GX_SetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_INVSRCALPHA, GX_LO_CLEAR);
    else if (p >= AK_PIPE_LAYER) GX_SetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR);
    else GX_SetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);
    GX_SetZMode(hud ? GX_FALSE : GX_TRUE, GX_LEQUAL, p <= AK_PIPE_OVERLAY ? GX_TRUE : GX_FALSE);
    bool cut = p == AK_PIPE_CUTOUT || p == AK_PIPE_OVERLAY;
    GX_SetAlphaCompare(cut ? GX_GREATER : GX_ALWAYS, cut ? 127 : 0, GX_AOP_AND, GX_ALWAYS, 0);
    GX_SetZCompLoc(cut ? GX_FALSE : GX_TRUE);
    int cull = cull_mode && cull_on && (p == AK_PIPE_OPAQUE || p == AK_PIPE_OVERLAY) ? cull_mode : 0;
    GX_SetCullMode(cull == 0 ? GX_CULL_NONE : cull == 2 ? GX_CULL_FRONT : GX_CULL_BACK);   /* [assumed: GX's winding sense = GL's after the y flip] */
    /* fog */
    if (hud || beam || env.fog_end <= env.fog_start) { GXColor z = { 0, 0, 0, 0 }; GX_SetFog(GX_FOG_NONE, 0, 1, 0.1f, 1, z); }
    else { GXColor fc = { c8(env.fog_rgb[0]), c8(env.fog_rgb[1]), c8(env.fog_rgb[2]), 255 }; GX_SetFog(GX_FOG_LIN, env.fog_start, env.fog_end, p_near, p_far, fc); }
    /* texture */
    ak_gfx_tex *tx = beam ? glow : t ? t : white;
    if (tx != cur_tex) { if (tx->ci) GX_LoadTlut(&tx->tlut, GX_TLUT0); GX_LoadTexObj(&tx->obj, GX_TEXMAP0); cur_tex = tx; }
}
static void indexed_desc(void)
{
    GX_ClearVtxDesc();
    GX_SetVtxDesc(GX_VA_POS, GX_INDEX16); GX_SetVtxDesc(GX_VA_NRM, GX_INDEX16); GX_SetVtxDesc(GX_VA_CLR0, GX_INDEX16); GX_SetVtxDesc(GX_VA_TEX0, GX_INDEX16);
}
static void arrays(const ak_vtx *base)
{
    GX_SetArray(GX_VA_POS, (void *)base->pos, sizeof(ak_vtx)); GX_SetArray(GX_VA_NRM, (void *)base->nrm, sizeof(ak_vtx));
    GX_SetArray(GX_VA_CLR0, (void *)base->col, sizeof(ak_vtx)); GX_SetArray(GX_VA_TEX0, (void *)base->uv, sizeof(ak_vtx));
    GX_InvVtxCache();
}
void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count)
{
    if (!count || !vb || !ib) return;
    state(p, t); indexed_desc();
    if (ib->i16) {                                       /* (a model's: under 65536 vertices, drawn from its own array) */
        const u16 *x = (const u16 *)ib->p + first;
        arrays((const ak_vtx *)vb->p);
        GX_Begin(GX_TRIANGLES, GX_VTXFMT0, (u16)count);
        for (u32 i = 0; i < count; i++) { u16 k = x[i]; GX_Position1x16(k); GX_Normal1x16(k); GX_Color1x16(k); GX_TexCoord1x16(k); }
        GX_End();
        st.draws++; st.tris += count / 3; return;
    }
    const u32 *idx = (const u32 *)ib->p + first; u32 lo = 0xFFFFFFFFu, hi = 0;
    for (u32 i = 0; i < count; i++) { if (idx[i] < lo) lo = idx[i]; if (idx[i] > hi) hi = idx[i]; }
    lo &= ~7u;                                           /* (8 x 28 bytes = 7 x 32: the array base stays 32-byte aligned) */
    if (hi - lo > 0xFFFFu) { AK_WARN("gx", "a draw spans %u vertices: skipped", hi - lo); return; }
    arrays((const ak_vtx *)vb->p + lo);
    for (u32 o = 0; o < count; o += 65535) {            /* (GX_Begin counts in 16 bits: 65535 = 21845 triangles) */
        u32 n = count - o < 65535 ? count - o : 65535;
        GX_Begin(GX_TRIANGLES, GX_VTXFMT0, (u16)n);
        for (u32 i = o; i < o + n; i++) { u16 k = (u16)(idx[i] - lo); GX_Position1x16(k); GX_Normal1x16(k); GX_Color1x16(k); GX_TexCoord1x16(k); }
        GX_End();
    }
    st.draws++; st.tris += count / 3;
}
void ak_gfx_draw_immediate(ak_pipe p, ak_gfx_tex *t, const ak_vtx *v, u32 count)
{
    if (!count) return;
    u32 bytes = (u32)sizeof *v * count, o = (ring_top + 31) & ~31u;
    if (o + bytes > RING_BYTES || count > 0xFFFF) { ring_drops++; return; }
    memcpy(ring + o, v, bytes); DCFlushRange(ring + o, bytes); ring_top = o + bytes; if (ring_top > ring_most) ring_most = ring_top;
    state(p, t); indexed_desc(); arrays((const ak_vtx *)(ring + o));
    GX_Begin(GX_TRIANGLES, GX_VTXFMT0, (u16)count);
    for (u32 i = 0; i < count; i++) { GX_Position1x16((u16)i); GX_Normal1x16((u16)i); GX_Color1x16((u16)i); GX_TexCoord1x16((u16)i); }
    GX_End();
    st.draws++; st.tris += count / 3;
}

/* ---- the debug text: queued, drawn at the end in screen pixels */
#define UI_MAXC 4096
typedef struct { f32 x, y; u32 c; char ch; } uich;
static uich ui[UI_MAXC]; static int ui_n;
void ak_gfx_text(f32 x, f32 y, u32 c, const char *s)
{
    for (; *s && ui_n < UI_MAXC; s++, x += AK_FONT_CW) { int ch = (u8)*s; if (ch < 32 || ch > 126) ch = '?'; if (ch == ' ') continue; ui[ui_n++] = (uich){ x, y, c, (char)ch }; }
}
static void draw_text(void)
{
    if (!ui_n) return;
    Mtx mv; guMtxIdentity(mv); mv[0][0] = 2.0f / W; mv[0][3] = -1.0f; mv[1][1] = -2.0f / H; mv[1][3] = 1.0f;
    GX_LoadPosMtxImm(mv, GX_PNMTX0); GX_LoadProjectionMtx(gx_ortho, GX_ORTHOGRAPHIC);
    Mtx tm; guMtxIdentity(tm); GX_LoadTexMtxImm(tm, GX_TEXMTX0, GX_MTX2x4); GX_SetTexCoordGen(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, GX_TEXMTX0);
    GX_SetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_VTX, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE); GX_SetNumChans(1); GX_SetNumTexGens(1);
    GX_SetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
    GX_SetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_RASC);
    GX_SetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_TEXA, GX_CA_RASA, GX_CA_ZERO);
    GX_SetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GX_SetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GX_SetNumTevStages(1);
    GX_SetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR); GX_SetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    GX_SetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0); GX_SetCullMode(GX_CULL_NONE);
    { GXColor z = { 0, 0, 0, 0 }; GX_SetFog(GX_FOG_NONE, 0, 1, 0.1f, 1, z); }
    GX_LoadTexObj(&font->obj, GX_TEXMAP0); cur_tex = font;
    GX_ClearVtxDesc(); GX_SetVtxDesc(GX_VA_POS, GX_DIRECT); GX_SetVtxDesc(GX_VA_CLR0, GX_DIRECT); GX_SetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    for (int q = 0; q < ui_n; q += 1024) {
        int n = ui_n - q > 1024 ? 1024 : ui_n - q;
        GX_Begin(GX_QUADS, GX_VTXFMT1, (u16)(n * 4));
        for (int i = q; i < q + n; i++) {
            int g = ui[i].ch - 32; f32 u0 = (f32)((g % 16) * AK_FONT_CW) / AK_FONT_W, v0 = (f32)((g / 16) * AK_FONT_CH) / AK_FONT_H_PX;
            f32 u1 = u0 + (f32)AK_FONT_CW / AK_FONT_W, v1 = v0 + (f32)AK_FONT_CH / AK_FONT_H_PX, x = ui[i].x, y = ui[i].y;
            u32 c = __builtin_bswap32(ui[i].c);          /* (0xAABBGGRR -> R, G, B, A) */
            GX_Position2f32(x, y); GX_Color1u32(c); GX_TexCoord2f32(u0, v0);
            GX_Position2f32(x + AK_FONT_CW, y); GX_Color1u32(c); GX_TexCoord2f32(u1, v0);
            GX_Position2f32(x + AK_FONT_CW, y + AK_FONT_CH); GX_Color1u32(c); GX_TexCoord2f32(u1, v1);
            GX_Position2f32(x, y + AK_FONT_CH); GX_Color1u32(c); GX_TexCoord2f32(u0, v1);
        }
        GX_End();
    }
    ui_n = 0;
}
int gc_console(const char **lines, int max);   /* (plat_gc.c) */
u32 gc_heap_free(void);
void ak_gfx_end(ak_gfx_stats *out)
{
    {   const char *ln[24]; int n = gc_console(ln, 24);
        for (int i = 0; i < n; i++) ak_gfx_text(8, (f32)(H - 8 - (n - i) * AK_FONT_CH), 0xFFC0FFC0u, ln[i]); }
    draw_text();
    st.cpu_submit_ms = (ak_plat_time_us() - t_begin) / 1000.0f;
    u64 t0 = ak_plat_time_us();
    GX_DrawDone();
    GX_SetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE); GX_SetColorUpdate(GX_TRUE);
    xfb_i ^= 1; GX_CopyDisp(xfb[xfb_i], GX_TRUE); GX_Flush();
    VIDEO_SetNextFramebuffer(xfb[xfb_i]); VIDEO_Flush(); VIDEO_WaitVSync();
    st.gpu_wait_ms = (ak_plat_time_us() - t0) / 1000.0f;
    if (out) *out = st;
    { static u32 fr, low = 0xFFFFFFFFu; u32 f = gc_heap_free(); if (f < low) low = f;
      if (++fr % 600 == 1) AK_INFO("gc", "heap: %u KB free (the least %u KB); immediate vertices: at most %u KB of %u, %u draws dropped", f >> 10, low >> 10, ring_most >> 10, RING_BYTES >> 10, ring_drops); }
}
bool ak_gfx_screenshot(const char *path) { (void)path; return false; }
