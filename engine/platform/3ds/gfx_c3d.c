/* Nintendo 3DS renderer (citro3d on the PICA200), top screen 400x240, stereoscopic 3D with the slider.
 *
 * - Geometry and textures live in the linear heap (the GPU reads it directly); the 6 MB of video RAM holds the screens.
 * - The PICA indexes with 16 bits: each draw's range of the engine's 32-bit index buffer is rebased once, on its first use, to
 *   16-bit indices over a vertex window starting at its lowest vertex (cached per buffer; ranges spanning more than 65536
 *   vertices are split into pieces that fit).
 * - Textures: the game's palette images expanded and stored as RGB565 / RGBA5551 / RGBA4444 (whichever keeps the alpha the
 *   texture uses; AK_TEX_32BIT=1 keeps RGBA8), with the game's mip levels, in the 3DS's tiled layout.
 * - One vertex program (aurek.v.pica); the pipelines are texture combiner set-ups, blend and depth states.  Fog: the vertex
 *   program puts the fog factor in a texture coordinate that samples a ramp (the fog colour, alpha 0..1) on unit 1, and the
 *   second combiner stage mixes it in.  Beams sample a baked glow picture instead of working the shape out per pixel.
 * - Stereo 3D: the frame's draws are recorded, then played back once per eye into the left and right screens.  Each eye's 3D
 *   draws move sideways in clip space by +-sep * (w - conv) (AK_3D_STRENGTH, AK_3D_DEPTH: objects at conv metres sit on the
 *   screen, farther ones behind it); the HUD sits on the screen.  With the slider down the frame is drawn once.
 *   (Adapted from the decompiled port's stereo set-up, platform/3ds: the same clip-space shift, per eye into its own screen.)
 * - The debug text (ak_gfx_text) goes to the bottom screen. */
#include "../../render/ak_gfx.h"
#include "../../render/ak_font.h"
#include "../../core/ak_settings.h"
#include "../plat.h"
#include <3ds.h>
#include <citro3d.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "aurek_shbin.h"

#define W 400
#define H 240
#define STRIDE (sizeof(ak_vtx))

/* ------------------------------------------------------------------ resources */
typedef struct { u16 *idx; u32 base, count; } seg;
typedef struct { u32 first, count, nseg; seg *s; } range;
struct ak_gfx_buf { void *mem; u32 n; u32 *idx32; range **r; u32 nr, cap, hint; };   /* (ranges apart: draws keep pointers to them) */
struct ak_gfx_tex { C3D_Tex tex; f32 uvt[4]; };

static C3D_RenderTarget *top_l, *top_r, *bot;
static DVLB_s *dvlb; static shaderProgram_s prog;
static int u_clip, u_uvt, u_fogp, u_tint;
static ak_gfx_tex white_tex, font_tex, beam_tex; static C3D_Tex fog_tex; static u32 fog_rgb_cur = 0xFFFFFFFFu;
static char name[64];
static int cull_mode, tex32; static f32 depth_bias;
static int st_on, st_strength; static f32 st_conv, st_sep;

/* ------------------------------------------------------------------ frame memory (vertices for immediate draws, the text) */
static u8 *ring[2]; static u32 ring_size, ring_off; static int ring_i;
static void *ring_alloc(u32 n)
{
    n = (n + 15) & ~15u;
    if (ring_off + n > ring_size) return NULL;
    void *p = ring[ring_i] + ring_off; ring_off += n; return p;
}

/* ------------------------------------------------------------------ textures */
static inline u32 morton8(u32 x, u32 y) { return (x & 1) | ((y & 1) << 1) | ((x & 2) << 1) | ((y & 2) << 2) | ((x & 4) << 2) | ((y & 4) << 3); }
static int pow2(int v) { int p = 8; while (p < v) p <<= 1; return p; }
/* RGBA8 (R in the low byte, row 0 = the top) into one level: 8x8 tiles in Morton order, row 0 in the first tile row (the GPU
 * samples the first row at t = 1; the decompiled port confirmed this layout on hardware) */
static void store_level(u8 *dst, GPU_TEXCOLOR f, int tw, int th, const u32 *px, int w, int h)
{
    int bpp = f == GPU_RGBA8 ? 4 : 2;
    memset(dst, 0, (size_t)tw * th * bpp);
    for (int y = 0; y < h; y++) {
        const u32 *row = px + (size_t)y * w;
        for (int x = 0; x < w; x++) {
            u32 c = row[x], r = c & 255, g = (c >> 8) & 255, b = (c >> 16) & 255, a = c >> 24;
            u32 o = (u32)(((y >> 3) * (tw >> 3) + (x >> 3)) * 64) + morton8((u32)x & 7, (u32)y & 7);
            switch (f) {
            case GPU_RGBA8:    ((u32 *)dst)[o] = (r << 24) | (g << 16) | (b << 8) | a; break;
            case GPU_RGB565:   ((u16 *)dst)[o] = (u16)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3)); break;
            case GPU_RGBA5551: ((u16 *)dst)[o] = (u16)(((r >> 3) << 11) | ((g >> 3) << 6) | ((b >> 3) << 1) | (a >> 7)); break;
            default:           ((u16 *)dst)[o] = (u16)(((r >> 4) << 12) | ((g >> 4) << 8) | ((b >> 4) << 4) | (a >> 4)); break;
            }
        }
    }
}
static GPU_TEXCOLOR pick_format(const u32 *px, size_t n)
{
    if (tex32) return GPU_RGBA8;
    bool opaque = true, binary = true;
    for (size_t i = 0; i < n; i++) { u32 a = px[i] >> 24; if (a != 255) opaque = false; if (a != 0 && a != 255) { binary = false; break; } }
    return opaque ? GPU_RGB565 : binary ? GPU_RGBA5551 : GPU_RGBA4;
}
/* levels: RGBA8 pictures, each half the last; n of them */
static bool tex_make(ak_gfx_tex *x, const u32 *const *lv, int n, int w, int h, bool mip_filter, bool repeat)
{
    int tw = pow2(w), th = pow2(h);
    if (tw > 1024 || th > 1024) { AK_WARN("c3d", "texture %dx%d too large", w, h); return false; }
    if (tw != w || th != h) n = 1;                                   /* (padded: its smaller levels would not line up) */
    int maxl = 0; while (maxl + 1 < n && (tw >> (maxl + 1)) >= 8 && (th >> (maxl + 1)) >= 8) maxl++;
    GPU_TEXCOLOR f = pick_format(lv[0], (size_t)w * h);
    if (!C3D_TexInitWithParams(&x->tex, NULL, (C3D_TexInitParams){ (u16)tw, (u16)th, (u8)maxl, f, GPU_TEX_2D, false })) {
        AK_WARN("c3d", "no memory for a %dx%d texture (%lu KB free)", tw, th, (unsigned long)(linearSpaceFree() >> 10)); return false; }
    for (int l = 0; l <= maxl; l++) {
        u32 sz; u8 *d = (u8 *)C3D_TexGetImagePtr(&x->tex, x->tex.data, l, &sz);
        store_level(d, f, tw >> l, th >> l, lv[l], (w >> l) ? (w >> l) : 1, (h >> l) ? (h >> l) : 1);
    }
    C3D_TexFlush(&x->tex);
    C3D_TexSetFilter(&x->tex, GPU_LINEAR, GPU_LINEAR);
    if (maxl > 0 && mip_filter) C3D_TexSetFilterMipmap(&x->tex, GPU_LINEAR);
    C3D_TexSetWrap(&x->tex, repeat ? GPU_REPEAT : GPU_CLAMP_TO_EDGE, repeat ? GPU_REPEAT : GPU_CLAMP_TO_EDGE);
    x->uvt[0] = (f32)w / tw; x->uvt[1] = -(f32)h / th; x->uvt[2] = 0; x->uvt[3] = 1;
    return true;
}
static ak_gfx_tex *texture_from(const ak_texture *t)
{
    int w = t->width, h = t->height, n = t->levels ? t->levels : 1; if (n > 8) n = 8;
    u32 *lv[8] = { 0 }; bool ok = true;
    for (int l = 0; l < n && ok; l++) {
        int lw = w >> l, lh = h >> l; if (lw < 1) lw = 1; if (lh < 1) lh = 1;
        if (!t->pixels[l]) { n = l; break; }
        lv[l] = (u32 *)malloc((size_t)lw * lh * 4); if (!lv[l]) { ok = false; break; }
        ak_texture_expand(t, l, lv[l]);
    }
    ak_gfx_tex *x = ok && n ? (ak_gfx_tex *)calloc(1, sizeof *x) : NULL;
    if (x && !tex_make(x, (const u32 *const *)lv, n, w, h, true, true)) { free(x); x = NULL; }
    for (int l = 0; l < 8; l++) free(lv[l]);
    return x;
}
ak_gfx_tex *ak_gfx_texture(const ak_texture *t) { return texture_from(t); }
ak_gfx_tex *ak_gfx_texture_palette(ak_gfx_tex *base, const ak_texture *t, const u32 *palette)
{
    (void)base;                                                     /* (no palette textures on this GPU: expanded again) */
    ak_texture *c = (ak_texture *)malloc(sizeof *c); if (!c) return NULL;
    *c = *t; memcpy(c->palette, palette, (t->bpp == 8 ? 256 : 16) * 4);
    ak_gfx_tex *x = texture_from(c); free(c); return x;
}
void ak_gfx_free_tex(ak_gfx_tex *t) { if (t) { C3D_TexDelete(&t->tex); free(t); } }

/* ------------------------------------------------------------------ buffers */
ak_gfx_buf *ak_gfx_vertices(const ak_vtx *v, u32 n)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b); if (!b) return NULL;
    b->mem = linearMemAlign(sizeof *v * (n ? n : 1), 16);
    if (!b->mem) { AK_ERROR("c3d", "no linear memory for %u vertices (%lu KB free)", n, (unsigned long)(linearSpaceFree() >> 10)); free(b); return NULL; }
    memcpy(b->mem, v, sizeof *v * n); GSPGPU_FlushDataCache(b->mem, sizeof *v * n); b->n = n;
    return b;
}
ak_gfx_buf *ak_gfx_indices(const u32 *i, u32 n)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b); if (!b) return NULL;
    b->idx32 = (u32 *)malloc(4u * (n ? n : 1)); if (!b->idx32) { free(b); return NULL; }
    memcpy(b->idx32, i, 4u * n); b->n = n;
    return b;
}
void ak_gfx_free_buf(ak_gfx_buf *b)
{
    if (!b) return;
    if (b->mem) linearFree(b->mem);
    for (u32 k = 0; k < b->nr; k++) { for (u32 s = 0; s < b->r[k]->nseg; s++) linearFree(b->r[k]->s[s].idx); free(b->r[k]->s); free(b->r[k]); }
    free(b->r); free(b->idx32); free(b);
}
/* the 16-bit form of a range of a 32-bit index buffer: pieces of whole triangles, each over a window of at most 65536 vertices
 * starting at a multiple of 4 (keeps the window's address 16-byte aligned) */
static const range *range_of(ak_gfx_buf *ib, u32 first, u32 count)
{
    /* (draws come in the same order every frame: the one after the last match is checked first) */
    if (ib->hint < ib->nr && ib->r[ib->hint]->first == first && ib->r[ib->hint]->count == count) return ib->r[ib->hint++];
    for (u32 k = 0; k < ib->nr; k++) if (ib->r[k]->first == first && ib->r[k]->count == count) { ib->hint = k + 1; return ib->r[k]; }
    if (ib->nr == ib->cap) { u32 c = ib->cap ? ib->cap * 2 : 16; range **rr = (range **)realloc(ib->r, sizeof *rr * c); if (!rr) return NULL; ib->r = rr; ib->cap = c; }
    range *r = (range *)calloc(1, sizeof *r); if (!r) return NULL;
    ib->r[ib->nr] = r; r->first = first; r->count = count;
    const u32 *ix = ib->idx32 + first; u32 t = 0, ntri = count / 3;
    while (t < ntri) {
        u32 lo = 0xFFFFFFFFu, hi = 0, t0 = t;
        for (; t < ntri; t++) {
            u32 a = ix[t * 3], b = ix[t * 3 + 1], c = ix[t * 3 + 2];
            u32 l2 = lo, h2 = hi; if (a < l2) l2 = a; if (b < l2) l2 = b; if (c < l2) l2 = c; if (a > h2) h2 = a; if (b > h2) h2 = b; if (c > h2) h2 = c;
            if (h2 - (l2 & ~3u) > 65535u && t > t0) break;
            lo = l2; hi = h2;
        }
        u32 base = lo & ~3u, n = (t - t0) * 3;
        seg *ns = (seg *)realloc(r->s, sizeof *ns * (r->nseg + 1)); if (!ns) break; r->s = ns;
        u16 *d = (u16 *)linearMemAlign(2u * n, 16); if (!d) { AK_ERROR("c3d", "no linear memory for indices"); break; }
        for (u32 i = 0; i < n; i++) d[i] = (u16)(ix[t0 * 3 + i] - base);
        GSPGPU_FlushDataCache(d, 2u * n);
        r->s[r->nseg++] = (seg){ d, base, n };
    }
    ib->hint = ++ib->nr;
    return r;
}

/* ------------------------------------------------------------------ the frame's draw list (played once per eye) */
typedef struct { u8 pipe, cull, arrays; u16 mtx, tint; ak_gfx_tex *tex; const u8 *vb; const range *r; u32 count; } drec;
static drec *dl; static u32 ndl, dl_cap;
static f32 (*mtx)[16]; static u32 nmtx, mtx_cap;     /* rows */
static f32 (*tints)[4]; static u32 ntint, tint_cap;
static u16 cur_mtx, cur_tint, mtx_frame; static bool cull_on = true;
static ak_gfx_env env_; static ak_gfx_stats st; static u64 t_begin; static u32 clear_rgba;
static int in_frame;

static u16 push_mtx(const f32 *rows)
{
    if (nmtx == mtx_cap) { u32 c = mtx_cap ? mtx_cap * 2 : 256; void *p = realloc(mtx, sizeof *mtx * c); if (!p) return (u16)(nmtx - 1); mtx = (f32 (*)[16])p; mtx_cap = c; }
    memcpy(mtx[nmtx], rows, 64); return (u16)nmtx++;
}

/* object lighting (ak_gfx.h): this back end has no per-vertex lighting yet, so the light becomes a tint: the ambient plus half of
 * each channel's directional part (an upward-facing average), against the models' vertex colour of 128 */
static f32 user_tint_[4] = { 1, 1, 1, 1 }, light_f_[3] = { 1, 1, 1 };
static void apply_tint_(void);
void ak_gfx_set_light(const f32 *sh)
{
    for (int c = 0; c < 3; c++) {
        if (!sh) { light_f_[c] = 1; continue; }
        f32 d = sqrtf(sh[3 + c * 3] * sh[3 + c * 3] + sh[4 + c * 3] * sh[4 + c * 3] + sh[5 + c * 3] * sh[5 + c * 3]);
        light_f_[c] = (sh[c] + 0.5f * d) * (255.0f / 128.0f);
    }
    apply_tint_();
}
static u16 push_tint(const f32 *c)
{
    if (ntint && !memcmp(tints[ntint - 1], c, 16)) return (u16)(ntint - 1);
    if (ntint == tint_cap) { u32 c2 = tint_cap ? tint_cap * 2 : 64; void *p = realloc(tints, sizeof *tints * c2); if (!p) return (u16)(ntint - 1); tints = (f32 (*)[4])p; tint_cap = c2; }
    memcpy(tints[ntint], c, 16); return (u16)ntint++;
}
static drec *rec(void)
{
    if (ndl == dl_cap) { u32 c = dl_cap ? dl_cap * 2 : 1024; void *p = realloc(dl, sizeof *dl * c); if (!p) return NULL; dl = (drec *)p; dl_cap = c; }
    return &dl[ndl++];
}

/* ------------------------------------------------------------------ pipeline state */
static void tev_pipe(int p)
{
    C3D_TexEnv *e = C3D_GetTexEnv(0); C3D_TexEnvInit(e);
    if (p == AK_PIPE_BEAM) {                     /* (vertex colour x glow + core) x vertex alpha; alpha = glow x 0.6 x vertex alpha */
        C3D_TexEnvSrc(e, C3D_RGB, GPU_PRIMARY_COLOR, GPU_TEXTURE0, 0); C3D_TexEnvOpRgb(e, GPU_TEVOP_RGB_SRC_COLOR, GPU_TEVOP_RGB_SRC_ALPHA, 0);
        C3D_TexEnvFunc(e, C3D_RGB, GPU_MODULATE); C3D_TexEnvScale(e, C3D_RGB, GPU_TEVSCALE_2);
        C3D_TexEnvSrc(e, C3D_Alpha, GPU_TEXTURE0, GPU_CONSTANT, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_MODULATE); C3D_TexEnvColor(e, 0x99FFFFFFu);
        e = C3D_GetTexEnv(1); C3D_TexEnvInit(e);
        C3D_TexEnvSrc(e, C3D_RGB, GPU_PREVIOUS, GPU_TEXTURE0, 0); C3D_TexEnvFunc(e, C3D_RGB, GPU_ADD);
        C3D_TexEnvSrc(e, C3D_Alpha, GPU_PREVIOUS, GPU_PRIMARY_COLOR, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_MODULATE);
        e = C3D_GetTexEnv(2); C3D_TexEnvInit(e);
        C3D_TexEnvSrc(e, C3D_RGB, GPU_PREVIOUS, GPU_PRIMARY_COLOR, 0); C3D_TexEnvOpRgb(e, GPU_TEVOP_RGB_SRC_COLOR, GPU_TEVOP_RGB_SRC_ALPHA, 0);
        C3D_TexEnvFunc(e, C3D_RGB, GPU_MODULATE);
        C3D_TexEnvSrc(e, C3D_Alpha, GPU_PREVIOUS, 0, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_REPLACE);
        return;
    }
    /* texture x vertex colour (the vertex program halved it: the stage doubles) */
    C3D_TexEnvSrc(e, C3D_RGB, GPU_TEXTURE0, GPU_PRIMARY_COLOR, 0); C3D_TexEnvFunc(e, C3D_RGB, GPU_MODULATE); C3D_TexEnvScale(e, C3D_RGB, GPU_TEVSCALE_2);
    if (p == AK_PIPE_OPAQUE) { C3D_TexEnvSrc(e, C3D_Alpha, GPU_PRIMARY_COLOR, 0, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_REPLACE); }
    else if (p == AK_PIPE_CUTOUT || p == AK_PIPE_OVERLAY) { C3D_TexEnvSrc(e, C3D_Alpha, GPU_TEXTURE0, 0, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_REPLACE); }
    else { C3D_TexEnvSrc(e, C3D_Alpha, GPU_TEXTURE0, GPU_PRIMARY_COLOR, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_MODULATE); }
    /* fog: lerp toward the ramp's colour by its alpha */
    e = C3D_GetTexEnv(1); C3D_TexEnvInit(e);
    if (p != AK_PIPE_HUD) {
        C3D_TexEnvSrc(e, C3D_RGB, GPU_TEXTURE1, GPU_PREVIOUS, GPU_TEXTURE1);
        C3D_TexEnvOpRgb(e, GPU_TEVOP_RGB_SRC_COLOR, GPU_TEVOP_RGB_SRC_COLOR, GPU_TEVOP_RGB_SRC_ALPHA); C3D_TexEnvFunc(e, C3D_RGB, GPU_INTERPOLATE);
        C3D_TexEnvSrc(e, C3D_Alpha, GPU_PREVIOUS, 0, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_REPLACE);
    }
    e = C3D_GetTexEnv(2); C3D_TexEnvInit(e);
}
static void state_pipe(int p)
{
    tev_pipe(p);
    if (p == AK_PIPE_HUD) C3D_DepthTest(false, GPU_ALWAYS, GPU_WRITE_COLOR);
    else C3D_DepthTest(true, GPU_GEQUAL, p >= AK_PIPE_LAYER ? GPU_WRITE_COLOR : GPU_WRITE_ALL);   /* (near = 1: the depth runs backwards) */
    C3D_DepthMap(true, -1.0f, (p == AK_PIPE_OVERLAY || p == AK_PIPE_BLEND) ? depth_bias : 0.0f);
    C3D_AlphaTest(p == AK_PIPE_CUTOUT || p == AK_PIPE_OVERLAY, GPU_GEQUAL, 128);
    switch (p) {
    case AK_PIPE_LAYER: case AK_PIPE_BLEND: case AK_PIPE_HUD:
        C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_SRC_ALPHA, GPU_ONE_MINUS_SRC_ALPHA, GPU_ONE, GPU_ONE_MINUS_SRC_ALPHA); break;
    case AK_PIPE_ADD:
        C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_SRC_ALPHA, GPU_ONE, GPU_ONE, GPU_ONE); break;
    case AK_PIPE_BEAM:
        C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_ONE, GPU_ONE_MINUS_SRC_ALPHA, GPU_ONE, GPU_ONE_MINUS_SRC_ALPHA); break;
    default:
        C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_ONE, GPU_ZERO, GPU_ONE, GPU_ZERO); break;
    }
    f32 fx = 0, fy = 0;
    if (p != AK_PIPE_HUD && p != AK_PIPE_BEAM && env_.fog_end > env_.fog_start) { fx = 1.0f / (env_.fog_end - env_.fog_start); fy = -env_.fog_start * fx; }
    f32 cs = p == AK_PIPE_HUD ? 1.0f : env_.colour_scale;
    C3D_FVUnifSet(GPU_VERTEX_SHADER, u_fogp, fx, fy, cs * 0.5f / 255.0f, 1.0f / 255.0f);
}
static void bind_tex(int p, ak_gfx_tex *t)
{
    ak_gfx_tex *x = p == AK_PIPE_BEAM ? &beam_tex : t ? t : &white_tex;
    C3D_TexBind(0, &x->tex);
    if (p == AK_PIPE_BEAM) C3D_FVUnifSet(GPU_VERTEX_SHADER, u_uvt, 0.5f, 0.5f, 0.5f, 0.5f);
    else C3D_FVUnifSet(GPU_VERTEX_SHADER, u_uvt, x->uvt[0], x->uvt[1], x->uvt[2], x->uvt[3]);
}
/* engine clip rows -> the 3DS's: this eye's shift (x += d (w - conv)), the depth range [-w, 0], the quarter turn */
static void set_clip(const f32 *r, f32 d)
{
    f32 r0[4] = { r[0] + d * r[12], r[1] + d * r[13], r[2] + d * r[14], r[3] + d * r[15] - d * st_conv };
    C3D_FVec *p = C3D_FVUnifWritePtr(GPU_VERTEX_SHADER, u_clip, 4);
    p[0].x = r[4]; p[0].y = r[5]; p[0].z = r[6]; p[0].w = r[7];
    p[1].x = -r0[0]; p[1].y = -r0[1]; p[1].z = -r0[2]; p[1].w = -r0[3];
    p[2].x = 0.5f * r[8] - 0.5f * r[12]; p[2].y = 0.5f * r[9] - 0.5f * r[13]; p[2].z = 0.5f * r[10] - 0.5f * r[14]; p[2].w = 0.5f * r[11] - 0.5f * r[15];
    p[3].x = r[12]; p[3].y = r[13]; p[3].z = r[14]; p[3].w = r[15];
}
static void bufinfo(const void *vb)
{
    C3D_BufInfo *bi = C3D_GetBufInfo(); BufInfo_Init(bi);
    BufInfo_Add(bi, vb, STRIDE, 4, 0x2C10);                       /* position, uv, (4 bytes: the normal, skipped), colour */
}

/* one pass of the frame's draws into a target; d = this eye's shift (0: the 2D frame) */
static void play(C3D_RenderTarget *rt, f32 d)
{
    C3D_RenderTargetClear(rt, C3D_CLEAR_ALL, clear_rgba, 0);
    C3D_FrameDrawOn(rt);
    C3D_TexBind(1, &fog_tex);
    int pipe = -1, cull = -1; u32 m = 0xFFFFFFFFu, tn = 0xFFFFFFFFu; ak_gfx_tex *tex = (ak_gfx_tex *)1;
    for (u32 i = 0; i < ndl; i++) {
        const drec *r = &dl[i];
        if (C3D_GetCmdBufUsage() > 0.8f) { C3D_FrameSplit(0); }
        if (r->pipe != pipe) { pipe = r->pipe; state_pipe(pipe); tex = (ak_gfx_tex *)1; m = 0xFFFFFFFFu; }
        if (r->mtx != m) { m = r->mtx; set_clip(mtx[m], pipe == AK_PIPE_HUD ? 0.0f : d); }
        if (r->tint != tn) { tn = r->tint; C3D_FVUnifSet(GPU_VERTEX_SHADER, u_tint, tints[tn][0], tints[tn][1], tints[tn][2], tints[tn][3]); }
        if (r->tex != tex) { tex = r->tex; bind_tex(pipe, tex); }
        int want = cull_mode && r->cull && (pipe == AK_PIPE_OPAQUE || pipe == AK_PIPE_OVERLAY) ? cull_mode : 0;
        if (want != cull) { cull = want; C3D_CullFace(want == 1 ? GPU_CULL_BACK_CCW : want == 2 ? GPU_CULL_FRONT_CCW : GPU_CULL_NONE); }
        if (r->arrays) { bufinfo(r->vb); C3D_DrawArrays(GPU_TRIANGLES, 0, (int)r->count); }
        else for (u32 s = 0; s < r->r->nseg; s++) {
            const seg *g = &r->r->s[s];
            bufinfo(r->vb + (size_t)g->base * STRIDE);
            C3D_DrawElements(GPU_TRIANGLES, (int)g->count, C3D_UNSIGNED_SHORT, g->idx);
        }
    }
}

/* ------------------------------------------------------------------ text (bottom screen) */
#define TXT_MAX 2048
static ak_vtx *txt; static u32 ntxt;
void ak_gfx_text(f32 x, f32 y, u32 c, const char *s)
{
    if (!txt) return;
    u8 col[4] = { (u8)c, (u8)(c >> 8), (u8)(c >> 16), (u8)(c >> 24) };
    for (; *s && ntxt + 6 <= TXT_MAX * 6; s++, x += AK_FONT_CW) {
        int ch = (u8)*s; if (ch < 32 || ch > 126) ch = '?';
        if (ch == ' ' || x >= 320) continue;
        int i = ch - 32; f32 u0 = (f32)((i % 16) * AK_FONT_CW) / AK_FONT_W, v0 = (f32)((i / 16) * AK_FONT_CH) / AK_FONT_H_PX;
        f32 u1 = u0 + (f32)AK_FONT_CW / AK_FONT_W, v1 = v0 + (f32)AK_FONT_CH / AK_FONT_H_PX;
        f32 q[4][4] = { { x, y, u0, v0 }, { x + AK_FONT_CW, y, u1, v0 }, { x, y + AK_FONT_CH, u0, v1 }, { x + AK_FONT_CW, y + AK_FONT_CH, u1, v1 } };
        static const int o[6] = { 0, 1, 2, 2, 1, 3 };
        for (int k = 0; k < 6; k++) { ak_vtx *v = &txt[ntxt++]; memset(v, 0, sizeof *v);
            v->pos[0] = q[o[k]][0]; v->pos[1] = q[o[k]][1]; v->uv[0] = q[o[k]][2]; v->uv[1] = q[o[k]][3]; memcpy(v->col, col, 4); }
    }
}
static void text_pass(void)
{
    C3D_RenderTargetClear(bot, C3D_CLEAR_ALL, 0x000000FF, 0);
    C3D_FrameDrawOn(bot);
    if (!ntxt) return;
    ak_vtx *v = (ak_vtx *)ring_alloc(sizeof *v * ntxt); if (!v) { ntxt = 0; return; }
    memcpy(v, txt, sizeof *v * ntxt);
    ak_m4 o = ak_m4_ortho2d(320.0f, 240.0f); f32 r[16];
    for (int a = 0; a < 4; a++) for (int b = 0; b < 4; b++) r[a * 4 + b] = o.m[b * 4 + a];
    state_pipe(AK_PIPE_HUD); set_clip(r, 0); C3D_FVUnifSet(GPU_VERTEX_SHADER, u_tint, 1, 1, 1, 1);
    C3D_CullFace(GPU_CULL_NONE);
    C3D_TexBind(0, &font_tex.tex); C3D_FVUnifSet(GPU_VERTEX_SHADER, u_uvt, font_tex.uvt[0], font_tex.uvt[1], font_tex.uvt[2], font_tex.uvt[3]);
    bufinfo(v); C3D_DrawArrays(GPU_TRIANGLES, 0, (int)ntxt);
    ntxt = 0;
}

/* ------------------------------------------------------------------ fixed textures */
static void fog_ramp(const f32 *rgb)
{
    u32 r = (u32)(rgb[0] * 255.0f + 0.5f), g = (u32)(rgb[1] * 255.0f + 0.5f), b = (u32)(rgb[2] * 255.0f + 0.5f);
    r = r > 255 ? 255 : r; g = g > 255 ? 255 : g; b = b > 255 ? 255 : b;
    u32 key = r | g << 8 | b << 16; if (key == fog_rgb_cur) return; fog_rgb_cur = key;
    static u32 px[64 * 8];
    for (int y = 0; y < 8; y++) for (int x = 0; x < 64; x++) px[y * 64 + x] = key | (u32)(x * 255 / 63) << 24;
    store_level((u8 *)fog_tex.data, GPU_RGBA8, 64, 8, px, 64, 8); C3D_TexFlush(&fog_tex);
}
static bool fixed_textures(void)
{
    static u32 wpx[64]; for (int i = 0; i < 64; i++) wpx[i] = 0xFFFFFFFFu;
    const u32 *l0 = wpx; if (!tex_make(&white_tex, &l0, 1, 8, 8, false, true)) return false;
    u32 *f = (u32 *)malloc(AK_FONT_W * AK_FONT_H_PX * 4); if (!f) return false;
    for (int i = 0; i < AK_FONT_W * AK_FONT_H_PX; i++) f[i] = 0x00FFFFFFu | (u32)ak_font_alpha[i] << 24;
    l0 = f; bool ok = tex_make(&font_tex, &l0, 1, AK_FONT_W, AK_FONT_H_PX, false, false); free(f);
    if (!ok) return false;
    C3D_TexSetFilter(&font_tex.tex, GPU_NEAREST, GPU_NEAREST);
    u32 *bm = (u32 *)malloc(64 * 64 * 4); if (!bm) return false;
    for (int y = 0; y < 64; y++) for (int x = 0; x < 64; x++) {
        f32 u = (x + 0.5f) / 32.0f - 1.0f, v = (y + 0.5f) / 32.0f - 1.0f, d = sqrtf(u * u + v * v);
        f32 s1 = d <= 0.75f ? 0 : d >= 1.0f ? 1 : ((d - 0.75f) / 0.25f) * ((d - 0.75f) / 0.25f) * (3 - 2 * (d - 0.75f) / 0.25f);
        f32 s2 = d <= 0.16f ? 0 : d >= 0.30f ? 1 : ((d - 0.16f) / 0.14f) * ((d - 0.16f) / 0.14f) * (3 - 2 * (d - 0.16f) / 0.14f);
        f32 glow = expf(-d * d * 5.0f) * (1 - s1), core = 1 - s2;
        u32 c = (u32)(core * 255 + 0.5f), a = (u32)(glow * 255 + 0.5f);
        bm[y * 64 + x] = c | c << 8 | c << 16 | a << 24;
    }
    int keep = tex32; tex32 = 1; l0 = bm; ok = tex_make(&beam_tex, &l0, 1, 64, 64, false, false); tex32 = keep; free(bm);
    if (!ok) return false;
    if (!C3D_TexInit(&fog_tex, 64, 8, GPU_RGBA8)) return false;
    C3D_TexSetFilter(&fog_tex, GPU_LINEAR, GPU_LINEAR); C3D_TexSetWrap(&fog_tex, GPU_CLAMP_TO_EDGE, GPU_CLAMP_TO_EDGE);
    f32 z[3] = { 0, 0, 0 }; fog_ramp(z);
    return true;
}

/* ------------------------------------------------------------------ the interface */
static bool c3d_up;
void ak_gfx_shutdown(void);
#define DISPLAY_FLAGS (GX_TRANSFER_FLIP_VERT(0) | GX_TRANSFER_OUT_TILED(0) | GX_TRANSFER_RAW_COPY(0) | \
    GX_TRANSFER_IN_FORMAT(GX_TRANSFER_FMT_RGBA8) | GX_TRANSFER_OUT_FORMAT(GX_TRANSFER_FMT_RGB8) | GX_TRANSFER_SCALING(GX_TRANSFER_SCALE_NO))
bool ak_gfx_init(const ak_gfx_config *c)
{
    cull_mode = ak_setting_int("AK_CULL", 0); tex32 = ak_setting_int("AK_TEX_32BIT", 0);
    depth_bias = ak_setting_int("AK_3DS_DEPTH_BIAS", 100) * 1e-7f;
    st_on = ak_setting_int("AK_3D", 1); st_strength = ak_setting_int("AK_3D_STRENGTH", 3); st_conv = ak_setting_float("AK_3D_DEPTH", 4.0f);
    if (!C3D_Init((size_t)ak_setting_int("AK_3DS_CMDBUF_KB", 1024) * 1024)) { AK_ERROR("c3d", "C3D_Init"); return false; }
    c3d_up = true; atexit(ak_gfx_shutdown);                         /* (before the platform's exit: the GPU first) */
    if (c->vsync) C3D_FrameRate(60.0f);
    top_l = C3D_RenderTargetCreate(240, 400, GPU_RB_RGBA8, GPU_RB_DEPTH24_STENCIL8);
    top_r = C3D_RenderTargetCreate(240, 400, GPU_RB_RGBA8, GPU_RB_DEPTH24_STENCIL8);
    bot = C3D_RenderTargetCreate(240, 320, GPU_RB_RGBA8, GPU_RB_DEPTH24_STENCIL8);
    if (!top_l || !bot) { AK_ERROR("c3d", "no screen targets"); return false; }
    C3D_RenderTargetSetOutput(top_l, GFX_TOP, GFX_LEFT, DISPLAY_FLAGS);
    if (top_r) C3D_RenderTargetSetOutput(top_r, GFX_TOP, GFX_RIGHT, DISPLAY_FLAGS); else st_on = 0;
    C3D_RenderTargetSetOutput(bot, GFX_BOTTOM, GFX_LEFT, DISPLAY_FLAGS);
    dvlb = DVLB_ParseFile((u32 *)aurek_shbin, aurek_shbin_size); shaderProgramInit(&prog); shaderProgramSetVsh(&prog, &dvlb->DVLE[0]);
    u_clip = shaderInstanceGetUniformLocation(prog.vertexShader, "clip"); u_uvt = shaderInstanceGetUniformLocation(prog.vertexShader, "uvt");
    u_fogp = shaderInstanceGetUniformLocation(prog.vertexShader, "fogp"); u_tint = shaderInstanceGetUniformLocation(prog.vertexShader, "tint");
    C3D_BindProgram(&prog);
    C3D_AttrInfo *ai = C3D_GetAttrInfo(); AttrInfo_Init(ai);
    AttrInfo_AddLoader(ai, 0, GPU_FLOAT, 3); AttrInfo_AddLoader(ai, 1, GPU_FLOAT, 2); AttrInfo_AddLoader(ai, 2, GPU_UNSIGNED_BYTE, 4);
    ring_size = (u32)ak_setting_int("AK_3DS_VTX_KB", 1024) << 10;
    ring[0] = (u8 *)linearMemAlign(ring_size, 16); ring[1] = (u8 *)linearMemAlign(ring_size, 16);
    txt = (ak_vtx *)malloc(sizeof *txt * TXT_MAX * 6);
    if (!ring[0] || !ring[1] || !fixed_textures()) { AK_ERROR("c3d", "no memory for the renderer"); return false; }
    snprintf(name, sizeof name, "citro3d %dx%d%s", W, H, st_on ? " (stereo 3D)" : "");
    AK_INFO("c3d", "ready: linear heap %lu KB free, video RAM %lu KB free", (unsigned long)(linearSpaceFree() >> 10), (unsigned long)(vramSpaceFree() >> 10));
    return true;
}
void ak_gfx_shutdown(void) { if (c3d_up) { c3d_up = false; C3D_Fini(); } }
void ak_gfx_size(int *w, int *h) { *w = W; *h = H; }
const char *ak_gfx_name(void) { return name; }
void ak_gfx_wait_idle(void)
{
    if (in_frame) return;
    C3D_FrameBegin(C3D_FRAME_SYNCDRAW); C3D_FrameEnd(0);           /* (FrameBegin waits for the GPU's last frame) */
    C3D_FrameBegin(0); C3D_FrameEnd(0);
}

void ak_gfx_begin(u32 clear, const ak_m4 *vp, const ak_gfx_env *env)
{
    t_begin = ak_plat_time_us(); memset(&st, 0, sizeof st);
    C3D_FrameBegin(C3D_FRAME_SYNCDRAW); in_frame = 1;
    ring_i ^= 1; ring_off = 0; ndl = 0; nmtx = 0; ntint = 0;
    clear_rgba = (clear & 0xFF) << 24 | ((clear >> 8) & 0xFF) << 16 | ((clear >> 16) & 0xFF) << 8 | 0xFF;
    env_ = *env; fog_ramp(env->fog_rgb);
    ak_gfx_set_transform(vp); mtx_frame = cur_mtx;
    f32 w[4] = { 1, 1, 1, 1 }; cur_tint = push_tint(w); cull_on = true; memcpy(user_tint_, w, sizeof w); light_f_[0] = light_f_[1] = light_f_[2] = 1;
}
void ak_gfx_set_cull(bool on) { cull_on = on; }
void ak_gfx_set_transform(const ak_m4 *m)
{
    if (!m) { cur_mtx = mtx_frame; return; }
    f32 r[16]; for (int a = 0; a < 4; a++) for (int b = 0; b < 4; b++) r[a * 4 + b] = m->m[b * 4 + a];
    cur_mtx = push_mtx(r);
}
static void apply_tint_(void)
{
    f32 t[4] = { user_tint_[0] * light_f_[0], user_tint_[1] * light_f_[1], user_tint_[2] * light_f_[2], user_tint_[3] };
    cur_tint = push_tint(t);
}
void ak_gfx_set_tint(const f32 *rgba) { f32 w[4] = { 1, 1, 1, 1 }; memcpy(user_tint_, rgba ? rgba : w, sizeof w); apply_tint_(); }

void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count)
{
    if (!vb || !ib || !count) return;
    const range *r = range_of(ib, first, count); if (!r) return;
    drec *d = rec(); if (!d) return;
    *d = (drec){ (u8)p, cull_on, 0, cur_mtx, cur_tint, t, (const u8 *)vb->mem, r, count };
    st.draws++; st.tris += count / 3;
}
void ak_gfx_draw_immediate(ak_pipe p, ak_gfx_tex *t, const ak_vtx *v, u32 count)
{
    if (!count) return;
    ak_vtx *dv = (ak_vtx *)ring_alloc(sizeof *v * count); if (!dv) return;
    memcpy(dv, v, sizeof *v * count);
    drec *d = rec(); if (!d) return;
    *d = (drec){ (u8)p, cull_on, 1, cur_mtx, cur_tint, t, (const u8 *)dv, NULL, count };
    st.draws++; st.tris += count / 3;
}

void ak_gfx_end(ak_gfx_stats *out)
{
    f32 sl = st_on ? osGet3DSliderState() : 0.0f;
    bool stereo = sl > 0.01f;
    static int was = -1; if ((int)stereo != was) { gfxSet3D(stereo); was = stereo; }
    st_sep = sl * (f32)st_strength / 100.0f;
    play(top_l, stereo ? -st_sep : 0.0f);
    if (stereo) play(top_r, st_sep);
    text_pass();
    GSPGPU_FlushDataCache(ring[ring_i], ring_off ? ring_off : 16);
    st.cpu_submit_ms = (ak_plat_time_us() - t_begin) / 1000.0f;
    C3D_FrameEnd(0); in_frame = 0;
    st.gpu_wait_ms = C3D_GetDrawingTime();
    if (out) *out = st;
}
bool ak_gfx_screenshot(const char *path) { (void)path; return false; }
