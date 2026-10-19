/* PS Vita renderer on GXM (the native GPU API): implements the platform renderer interface (platform/common/gfx.h) that the native
 * GU (platform/common/gu_native.c) draws through.  No GL layer.
 *
 *  - Surfaces: every PSP render target (frame buffers, render-to-texture) is a GXM colour surface in video RAM, keyed by its PSP
 *    address, at the internal resolution (RS_RES_SCALE 1-3: 512*S x 512*S, 512*S x 272*S at 3x; PSP row 0 = memory row 0).  All surfaces share one
 *    depth/stencil surface (loaded and stored across scenes, so a frame may switch targets and come back).
 *  - Draws: one vertex program per PSP vertex type reads the game's vertex bytes as GXM attributes in their PSP formats and does the
 *    PSP transform / skinning / lighting / fog / range culling (the same Cg as the validated GL back end, gfx_gl.c).  Fragment programs:
 *    texture function, fog, alpha test; blending and colour masks are baked into fragment program variants (GXM's model).
 *    Depth, stencil, cull and scissor are dynamic GXM state.
 *  - Textures: PSP formats go to GXM as they are where GXM reads them (565/5551/4444/8888, P4/P8 with the CLUT as palette, DXT as BC);
 *    other formats are decoded to RGBA8.  With anisotropic filtering (RS_ANISO) textures get a mip chain (tex_mips.c): palettized ones
 *    as P8 with the same palette, others as RGBA8; filtered draws of them use a fragment program variant that samples anisotropically.  Memory comes from a sub-allocated video-RAM pool; frees wait until the GPU is past them.
 *  - Display: the displayed surface is drawn to the 960x544 screen (gxm_core.c) with bilinear filtering and FXAA (RS_FXAA), the
 *    debug HUD on top. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/gxm.h>
#include "gfx.h"
#include "gxm_core.h"
#include "tex_mips.h"

volatile unsigned rs_gfx_epoch = 1;
rs_perf_t rs_perf;
u64 rs_perf_us(void){ return sceKernelGetProcessTimeWide(); }
extern int rs_setting_int(const char *, int);
#define ALIGN(x, a) (((x) + ((a) - 1)) & ~((a) - 1))

/* ===================================================================== video memory pool (textures, palettes) */
typedef struct blk_s { u32 off, size; int free; struct blk_s *next; } pblk_t;
static u8 *pool; static u32 pool_size; static pblk_t *pool_head;
static void pool_init(u32 size){
    pool = gxm_alloc(size, 256, 1); if (!pool) { size /= 2; pool = gxm_alloc(size, 256, 1); }
    pool_size = pool ? size : 0; pool_head = calloc(1, sizeof *pool_head); pool_head->size = pool_size; pool_head->free = 1; }
static void *pool_alloc(u32 size, u32 align){
    size = ALIGN(size, 64); if (align < 64) align = 64;
    for (pblk_t *b = pool_head; b; b = b->next) { if (!b->free) continue;
        u32 a = ALIGN(b->off, align), pad = a - b->off; if (b->size < pad + size) continue;
        if (pad) { pblk_t *n = calloc(1, sizeof *n); n->off = a; n->size = b->size - pad; n->free = 1; n->next = b->next; b->size = pad; b->next = n; b = n; }
        if (b->size > size + 64) { pblk_t *n = calloc(1, sizeof *n); n->off = b->off + size; n->size = b->size - size; n->free = 1; n->next = b->next; b->size = size; b->next = n; }
        b->free = 0; return pool + b->off; }
    return NULL; }
static void pool_release(void *p){
    if (!p) return; u32 off = (u32)((u8 *)p - pool);
    for (pblk_t *b = pool_head, *prev = NULL; b; prev = b, b = b->next) if (b->off == off && !b->free) {
        b->free = 1;
        if (b->next && b->next->free) { pblk_t *n = b->next; b->size += n->size; b->next = n->next; free(n); }
        if (prev && prev->free) { prev->size += b->size; prev->next = b->next; free(b); }
        return; } }
/* frees wait until the frames that may still read the memory have been displayed */
#define DEFER_N 1024
static struct { void *p; int frame; } deferred[DEFER_N]; static int ndef;
static unsigned st_finish;                                       /* full GPU waits (HUD) */
static void pool_free_later(void *p){ if (!p) return; if (ndef >= DEFER_N) { st_finish++; sceGxmFinish(gxm_ctx()); for (int i = 0; i < ndef; i++) pool_release(deferred[i].p); ndef = 0; }
    deferred[ndef].p = p; deferred[ndef].frame = gxm_frame_index(); ndef++; }
static void pool_collect(void){ int now = gxm_frame_index(), j = 0;
    for (int i = 0; i < ndef; i++) { if (now - deferred[i].frame >= 3) pool_release(deferred[i].p); else deferred[j++] = deferred[i]; } ndef = j; }

/* ===================================================================== surfaces */
#define SURF_N 10
#define SZ 512
static int RS_S = 2, SURF_H = 512;
#define PX (SZ * RS_S)
#define PXH (SURF_H * RS_S)
typedef struct { u32 addr; int stride, psz, fmt, used, drawn; unsigned stamp; void *mem; SceGxmColorSurface cs; SceGxmTexture tex; } surf_t;
static surf_t surfs[SURF_N]; static unsigned surf_stamp; static surf_t *scene_surf;
static SceGxmRenderTarget *srt; static SceGxmDepthStencilSurface sds;
static u32 disp_addr, disp_stride = 512, disp_fmt;
static unsigned st_draws, st_tris, st_texup, st_clears, st_scenes;
static u32 akey(u32 a){ return gfx_vram(a) & 0x0FFFFFFFu; }

static void end_scene(void){ if (!scene_surf) return; sceGxmEndScene(gxm_ctx(), NULL, NULL); scene_surf = NULL; }
static void apply_viewport(void){ sceGxmSetViewport(gxm_ctx(), PX / 2.0f, PX / 2.0f, PX / 2.0f, PX / 2.0f, 0.5f, 0.5f); sceGxmSetViewportEnable(gxm_ctx(), SCE_GXM_VIEWPORT_ENABLED); }
static int sc_set = -1, sc_r[4];
static void begin_scene(surf_t *s){
    if (scene_surf == s) return; end_scene();
    sceGxmBeginScene(gxm_ctx(), 0, srt, NULL, NULL, NULL, &s->cs, &sds); scene_surf = s; st_scenes++;
    apply_viewport(); sc_set = -1;
    sceGxmSetTwoSidedEnable(gxm_ctx(), SCE_GXM_TWO_SIDED_DISABLED); }
static surf_t *surf_find(u32 addr){ addr = akey(addr); for (int i = 0; i < SURF_N; i++) if (surfs[i].used && surfs[i].addr == addr) return &surfs[i]; return 0; }
static void clear_rect_internal(surf_t *s, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz, int sval);
static int surf_mem(surf_t *s){
    s->mem = gxm_alloc((size_t)PX * PXH * 4, SCE_GXM_COLOR_SURFACE_ALIGNMENT, 1); if (!s->mem) return -1;
    sceGxmColorSurfaceInit(&s->cs, SCE_GXM_COLOR_FORMAT_A8B8G8R8, SCE_GXM_COLOR_SURFACE_LINEAR, SCE_GXM_COLOR_SURFACE_SCALE_NONE,
                           SCE_GXM_OUTPUT_REGISTER_SIZE_32BIT, PX, PXH, PX, s->mem);
    sceGxmTextureInitLinear(&s->tex, s->mem, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, PX, PXH, 0); return 0; }
static surf_t *surf_create(u32 addr, int fmt, int stride){
    addr = akey(addr); surf_t *s = 0, *old = &surfs[0];
    for (int i = 0; i < SURF_N; i++) { if (!surfs[i].used) { s = &surfs[i]; break; } if (surfs[i].stamp < old->stamp) old = &surfs[i]; }
    if (!s) { s = old; if (scene_surf == s) end_scene(); }
    if (!s->mem && surf_mem(s)) { fprintf(stderr, "[GXM] out of video memory for a render surface\n"); return NULL; }
    s->used = 1; s->addr = addr; s->fmt = fmt; s->stride = stride ? stride : 512; s->psz = fmt == 3 ? 4 : 2; s->drawn = 0; s->stamp = ++surf_stamp;
    { float black[4] = {0, 0, 0, 1}; clear_rect_internal(s, 0, 0, SZ - 1, SURF_H - 1, black, 1.0f, 1, 1, 1, 0); }
    return s; }
static surf_t *surf_for_addr(u32 a, int *y0, int *x0){
    a = akey(a);
    for (int i = 0; i < SURF_N; i++) { surf_t *s = &surfs[i]; if (!s->used || !s->drawn || a < s->addr) continue;
        u32 off = a - s->addr, rowb = (u32)(s->stride * s->psz); if (off >= rowb * 272u || (off % rowb) % (u32)s->psz) continue;
        *y0 = (int)(off / rowb); *x0 = (int)((off % rowb) / (u32)s->psz); return s; }
    return 0; }
static surf_t *target_for(const gfx_state_t *st){
    surf_t *t = surf_find(st->fbaddr); if (!t) t = surf_create(st->fbaddr, st->fbfmt, st->fbstride); if (!t) return NULL;
    t->stamp = ++surf_stamp; t->drawn = 1; t->fmt = st->fbfmt; t->psz = st->fbfmt == 3 ? 4 : 2; if (st->fbstride) t->stride = st->fbstride;
    begin_scene(t); return t; }
static void scissor_psp(int x1, int y1, int x2, int y2){
    if (x1 < 0) x1 = 0; if (y1 < 0) y1 = 0; if (x2 > SZ - 1) x2 = SZ - 1; if (y2 > SURF_H - 1) y2 = SURF_H - 1;
    int r[4] = {x1 * RS_S, y1 * RS_S, (x2 + 1) * RS_S - 1, (y2 + 1) * RS_S - 1};
    if (r[2] < r[0] || r[3] < r[1]) { r[0] = r[1] = 0; r[2] = r[3] = 0; }
    if (sc_set == 1 && !memcmp(r, sc_r, sizeof r)) return;
    sceGxmSetRegionClip(gxm_ctx(), SCE_GXM_REGION_CLIP_OUTSIDE, (unsigned)r[0], (unsigned)r[1], (unsigned)r[2], (unsigned)r[3]); memcpy(sc_r, r, sizeof r); sc_set = 1; }

/* ===================================================================== shaders */
typedef struct { char *p; size_t n, cap; } sbuf_t;
static void sb(sbuf_t *b, const char *fmt, ...){
    va_list ap; va_start(ap, fmt); int l = vsnprintf(NULL, 0, fmt, ap); va_end(ap); if (l < 0) return;
    if (b->n + (size_t)l + 1 > b->cap) { b->cap = (b->n + (size_t)l + 1) * 2; b->p = realloc(b->p, b->cap); }
    va_start(ap, fmt); vsnprintf(b->p + b->n, (size_t)l + 1, fmt, ap); va_end(ap); b->n += (size_t)l; }
static const char *FS_SRC =
    "float4 main(float2 vUV : TEXCOORD0, float4 vCol : TEXCOORD1, float vFog : TEXCOORD2, float vCull : TEXCOORD3,\n"
    "            uniform sampler2D uTex, uniform float4 uCfg0, uniform float4 uCfg1, uniform float4 uEnv, uniform float4 uFog, uniform float4 uMul) : COLOR\n"
    "{\n"
    "  if (vCull > 0.0) discard;\n"
    "  float4 c = vCol;\n"
    "  if (uCfg0.x > 0.5) {\n"
    "    float4 t = tex2D(uTex, vUV);\n"
    "    float ta = (uCfg0.z > 0.5) ? t.a : 1.0;\n"
    "    float f = uCfg0.y;\n"
    "    if (f < 0.5) { c.rgb = c.rgb * t.rgb; c.a = c.a * ta; }\n"
    "    else if (f < 1.5) { c.rgb = lerp(c.rgb, t.rgb, ta); }\n"
    "    else if (f < 2.5) { c.rgb = lerp(c.rgb, uEnv.rgb, t.rgb); c.a = c.a * ta; }\n"
    "    else if (f < 3.5) { c.rgb = t.rgb; if (uCfg0.z > 0.5) c.a = t.a; }\n"
    "    else { c.rgb = c.rgb + t.rgb; c.a = c.a * ta; }\n"
    "    if (uCfg0.w > 0.5) c.rgb = c.rgb * 2.0;\n"
    "  }\n"
    "  if (uFog.a > 0.5) c.rgb = lerp(uFog.rgb, c.rgb, saturate(vFog));\n"
    "  c.rgb = c.rgb * uMul.rgb;\n"
    "  float af = uCfg1.x; float a = floor(c.a * 255.0 + 0.5); float r = uCfg1.y;\n"
    "  if (af < 0.5) discard;\n"
    "  else if (af < 1.5) { }\n"
    "  else if (af < 2.5) { if (abs(a - r) > 0.5) discard; }\n"
    "  else if (af < 3.5) { if (abs(a - r) < 0.5) discard; }\n"
    "  else if (af < 4.5) { if (!(a < r - 0.5)) discard; }\n"
    "  else if (af < 5.5) { if (!(a < r + 0.5)) discard; }\n"
    "  else if (af < 6.5) { if (!(a > r + 0.5)) discard; }\n"
    "  else { if (!(a > r - 0.5)) discard; }\n"
    "  return c;\n"
    "}\n";
static const char *VS_SRC =                                             /* CPU-transformed vertices (gfx_vtx_t): sprites */
    "void main(float4 aPos, float2 aUV, float4 aCol, float aFog, uniform float4 uUVS,\n"
    "          float4 out vPos : POSITION, float2 out vUV : TEXCOORD0, float4 out vCol : TEXCOORD1, float out vFog : TEXCOORD2, float out vCull : TEXCOORD3)\n"
    "{ vPos = aPos; vUV = float2(aUV.x * uUVS.x + uUVS.w, aUV.y * uUVS.y + uUVS.z); vCol = aCol; vFog = aFog; vCull = 0.0; }\n";
static const char *CLR_VS = "void main(float2 aPos, uniform float4 uZ, float4 out vPos : POSITION) { vPos = float4(aPos.x, aPos.y, uZ.x, 1.0); }\n";
static const char *CLR_FS = "float4 main(uniform float4 uCol) : COLOR { return uCol; }\n";
static const char *BLT_VS = "void main(float2 aPos, float2 aUV, float4 out vPos : POSITION, float2 out vUV : TEXCOORD0) { vPos = float4(aPos, 0.5, 1.0); vUV = aUV; }\n";
static const char *BLT_FS = "float4 main(float2 vUV : TEXCOORD0, uniform sampler2D uTex) : COLOR { return tex2D(uTex, vUV); }\n";
/* FXAA (Lottes' FXAA 2 / "FXAA lite": 5 + 4 bilinear reads, no loops; the same shader as the GL back end) on the internal-resolution
 * picture while it is scaled to the screen.  uTexel = (1/w, 1/h, u max, v max). */
static const char *FXAA_FS =
    "float3 S(sampler2D t, float2 uv, float4 k) { return tex2D(t, clamp(uv, float2(0.0, 0.0), k.zw)).rgb; }\n"
    "float4 main(float2 vUV : TEXCOORD0, uniform sampler2D uTex, uniform float4 uTexel) : COLOR {\n"
    "  float2 px = uTexel.xy; float3 L = float3(0.299, 0.587, 0.114);\n"
    "  float3 rNW = S(uTex, vUV + float2(-1.0, -1.0) * px, uTexel), rNE = S(uTex, vUV + float2(1.0, -1.0) * px, uTexel);\n"
    "  float3 rSW = S(uTex, vUV + float2(-1.0, 1.0) * px, uTexel), rSE = S(uTex, vUV + float2(1.0, 1.0) * px, uTexel), rM = S(uTex, vUV, uTexel);\n"
    "  float lNW = dot(rNW, L), lNE = dot(rNE, L), lSW = dot(rSW, L), lSE = dot(rSE, L), lM = dot(rM, L);\n"
    "  float lMin = min(lM, min(min(lNW, lNE), min(lSW, lSE))), lMax = max(lM, max(max(lNW, lNE), max(lSW, lSE)));\n"
    "  float2 d = float2(-((lNW + lNE) - (lSW + lSE)), (lNW + lSW) - (lNE + lSE));\n"
    "  float red = max((lNW + lNE + lSW + lSE) * (0.25 * 0.125), 1.0 / 128.0);\n"
    "  float rcp = 1.0 / (min(abs(d.x), abs(d.y)) + red);\n"
    "  d = clamp(d * rcp, float2(-8.0, -8.0), float2(8.0, 8.0)) * px;\n"
    "  float3 rA = 0.5 * (S(uTex, vUV + d * (1.0 / 3.0 - 0.5), uTexel) + S(uTex, vUV + d * (2.0 / 3.0 - 0.5), uTexel));\n"
    "  float3 rB = rA * 0.5 + 0.25 * (S(uTex, vUV + d * -0.5, uTexel) + S(uTex, vUV + d * 0.5, uTexel));\n"
    "  float lB = dot(rB, L);\n"
    "  return float4((lB < lMin || lB > lMax) ? rA : rB, 1.0);\n"
    "}\n";

/* the PSP vertex program for vertex type vt (see gfx_gl.c native_vs_src: same shader, Cg) */
static char *native_vs_src(u32 vt, int lit){
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1, thr = (vt >> 23) & 1;
    static const char *sc[4] = {"1.0", "(1.0 / 128.0)", "(1.0 / 32768.0)", "1.0"};
    if (thr) { nf = 0; wf = 0; lit = 0; }
    sbuf_t b = {0};
    sb(&b, "#define vec2 float2\n#define vec3 float3\n#define vec4 float4\n");
    sb(&b, "uniform vec4 uMVP[4]; uniform vec4 uWVZ; uniform vec4 uWld[3]; uniform vec4 uB[24];\n"
           "uniform vec4 uVP0; uniform vec4 uVP1; uniform vec4 uVP2; uniform vec4 uUVT; uniform vec4 uUVS; uniform vec4 uFogP; uniform vec4 uDefC;\n"
           "uniform vec4 uMAmb; uniform vec4 uMDif; uniform vec4 uMEmi; uniform vec4 uMSca; uniform vec4 uLFl;\n"
           "uniform vec4 uLPos[4]; uniform vec4 uLAtt[4]; uniform vec4 uLSpot[4]; uniform vec4 uLA[4]; uniform vec4 uLD[4];\n");
    if (lit) sb(&b, "#define LIGHT(i, ih) if (uLFl.z > ih) { vec3 L = uLPos[i].xyz; float att = 1.0; if (uLPos[i].w > 0.5) { L = uLPos[i].xyz - wp; float d = length(L); if (d > 0.000001) L = L / d;"
                    " float den = uLAtt[i].x + uLAtt[i].y * d + uLAtt[i].z * d * d; att = (den > 0.000001) ? min(1.0 / den, 1.0) : 1.0;"
                    " if (uLPos[i].w > 1.5) { float cs = -dot(L, uLSpot[i].xyz); if (cs < uLSpot[i].w) att = 0.0; else if (uLAtt[i].w > 0.0) att = att * pow(max(cs, 0.0), uLAtt[i].w); } }"
                    " float ndl = max(dot(wn, L), 0.0); col += (uLA[i].rgb * amb + ndl * uLD[i].rgb * dif) * att; }\n");
    const char *an[6]; const char *at[6]; int na = 0;
    an[na] = "aP"; at[na++] = "vec3";
    if (nf) { an[na] = "aN"; at[na++] = "vec3"; }
    if (tf) { an[na] = "aT"; at[na++] = "vec2"; }
    if (cf) { an[na] = "aC"; at[na++] = cf == 7 ? "vec4" : "float"; }
    if (wf) { an[na] = "aW0"; at[na++] = "vec4"; if (nw > 4) { an[na] = "aW1"; at[na++] = "vec4"; } }
    sb(&b, "void nvxf(");
    for (int i = 0; i < na; i++) sb(&b, "%s %s, ", at[i], an[i]);
    sb(&b, "out vec4 oPos, out vec2 oUV, out vec4 oCol, out float oFog, out float oCull) {\n");
    switch (cf) {
    case 0: sb(&b, "  vec4 c = uDefC;\n"); break;
    case 7: sb(&b, "  vec4 c = aC;\n"); break;
    case 4: sb(&b, "  float v = aC; float q1 = floor(v / 32.0); float q2 = floor(v / 2048.0);\n"
                   "  vec4 c = vec4((v - q1 * 32.0) / 31.0, (q1 - q2 * 64.0) / 63.0, q2 / 31.0, 1.0);\n"); break;
    case 5: sb(&b, "  float v = aC; float q1 = floor(v / 32.0); float q2 = floor(v / 1024.0); float q3 = floor(v / 32768.0);\n"
                   "  vec4 c = vec4((v - q1 * 32.0) / 31.0, (q1 - q2 * 32.0) / 31.0, (q2 - q3 * 32.0) / 31.0, q3);\n"); break;
    default: sb(&b, "  float v = aC; float q1 = floor(v / 16.0); float q2 = floor(v / 256.0); float q3 = floor(v / 4096.0);\n"
                    "  vec4 c = vec4((v - q1 * 16.0) / 15.0, (q1 - q2 * 16.0) / 15.0, (q2 - q3 * 16.0) / 15.0, q3 / 15.0);\n"); break; }
    if (tf) sb(&b, "  vec2 t = aT%s;\n", thr ? "" : (tf == 1 ? " * (1.0 / 128.0)" : (tf == 2 ? " * (1.0 / 32768.0)" : "")));
    else sb(&b, "  vec2 t = vec2(0.0, 0.0);\n");
    sb(&b, "  vec2 uv = vec2(t.x * uUVT.x + uUVT.z, t.y * uUVT.y + uUVT.w); oUV = vec2(uv.x * uUVS.x + uUVS.w, uv.y * uUVS.y + uUVS.z);\n  oCol = c;\n");
    if (thr) {
        sb(&b, "  vec3 p = aP;\n");
        if (pf == 2) sb(&b, "  if (p.z < 0.0) p.z = p.z + 65536.0;\n");
        sb(&b, "  float z = clamp(p.z, 0.0, 65535.0);\n"
               "  oPos = vec4(p.x * (2.0 / 512.0) - 1.0, p.y * (2.0 / 512.0) - 1.0, z * (2.0 / 65535.0) - 1.0, 1.0); oFog = 1.0; oCull = 0.0; }\n"); }
    else {
        sb(&b, "  vec3 p = aP * %s;\n", sc[pf]);
        if (nf) sb(&b, "  vec3 n = aN * %s;\n", sc[nf]); else sb(&b, "  vec3 n = vec3(0.0, 0.0, 1.0);\n");
        if (wf) {
            sb(&b, "  vec4 p4 = vec4(p, 1.0); vec4 n4 = vec4(n, 0.0); p = vec3(0.0, 0.0, 0.0); n = vec3(0.0, 0.0, 0.0); float wt;\n");
            for (int i = 0; i < nw && i < 8; i++)
                sb(&b, "  wt = aW%d.%c * %s; p += wt * vec3(dot(p4, uB[%d]), dot(p4, uB[%d]), dot(p4, uB[%d])); n += wt * vec3(dot(n4, uB[%d]), dot(n4, uB[%d]), dot(n4, uB[%d]));\n",
                   i / 4, "xyzw"[i % 4], sc[wf], i * 3, i * 3 + 1, i * 3 + 2, i * 3, i * 3 + 1, i * 3 + 2); }
        sb(&b, "  vec4 q = vec4(p, 1.0);\n"
               "  vec4 cl = vec4(dot(q, uMVP[0]), dot(q, uMVP[1]), dot(q, uMVP[2]), dot(q, uMVP[3])); float w = cl.w;\n"
               "  oPos = vec4((cl.x * uVP0.x + uVP1.x * w) * (2.0 / 512.0) - w, (cl.y * uVP0.y + uVP1.y * w) * (2.0 / 512.0) - w, (cl.z * uVP0.z + uVP1.z * w) * (2.0 / 65535.0) - w, w);\n"
               "  float iw = (abs(w) > 0.000001) ? 1.0 / w : 0.0;\n"
               "  float sx = cl.x * iw * uVP0.x + uVP1.x + uVP2.x; float sy = cl.y * iw * uVP0.y + uVP1.y + uVP2.y; float sz = cl.z * iw * uVP0.z + uVP1.z;\n"
               "  float inz = (w > 0.0 && sz >= 0.0 && sz <= 65535.0) ? 1.0 : 0.0;\n"
               "  float xyout = (sx >= 0.0 && sx < 4096.0 && sy >= 0.0 && sy < 4096.0) ? 0.0 : 1.0;\n"
               "  oCull = ((uVP2.z < 0.5 && inz < 0.5) || ((inz > 0.5 || uVP2.z < 0.5) && xyout > 0.5)) ? 1.0 : 0.0;\n"
               "  oFog = 1.0; if (uFogP.z > 0.5) oFog = clamp((dot(q, uWVZ) + uFogP.x) * uFogP.y, 0.0, 1.0);\n");
        if (lit) sb(&b,
               "  vec3 wp = vec3(dot(q, uWld[0]), dot(q, uWld[1]), dot(q, uWld[2]));\n"
               "  vec4 nn = vec4(n, 0.0); vec3 wn = vec3(dot(nn, uWld[0]), dot(nn, uWld[1]), dot(nn, uWld[2])); float ln = length(wn); if (ln > 0.0000001) wn = wn / ln;\n"
               "  vec3 amb = (uLFl.x > 0.5) ? c.rgb : uMAmb.rgb; float aa = (uLFl.x > 0.5) ? c.a : uMAmb.a; vec3 dif = (uLFl.y > 0.5) ? c.rgb : uMDif.rgb;\n"
               "  vec3 col = uMEmi.rgb + uMSca.rgb * amb;\n"
               "  LIGHT(0, 0.5) LIGHT(1, 1.5) LIGHT(2, 2.5) LIGHT(3, 3.5)\n"
               "  oCol = vec4(clamp(col, vec3(0.0, 0.0, 0.0), vec3(1.0, 1.0, 1.0)), clamp(aa, 0.0, 1.0));\n");
        sb(&b, "}\n"); }
    sb(&b, "void main(");
    for (int i = 0; i < na; i++) sb(&b, "%s %s, ", at[i], an[i]);
    sb(&b, "float4 out vPos : POSITION, float2 out vUV : TEXCOORD0, float4 out vCol : TEXCOORD1, float out vFog : TEXCOORD2, float out vCull : TEXCOORD3) { nvxf(");
    for (int i = 0; i < na; i++) sb(&b, "%s, ", an[i]);
    sb(&b, "vPos, vUV, vCol, vFog, vCull); }\n");
    return b.p; }

enum { U_MVP, U_WVZ, U_WLD, U_B, U_VP0, U_VP1, U_VP2, U_UVT, U_UVS, U_FOGP, U_DEFC, U_MAMB, U_MDIF, U_MEMI, U_MSCA, U_LFL, U_LPOS, U_LATT, U_LSPOT, U_LA, U_LD, U_NV };
static const char *const U_NAMES[U_NV] = {"uMVP", "uWVZ", "uWld", "uB", "uVP0", "uVP1", "uVP2", "uUVT", "uUVS", "uFogP", "uDefC", "uMAmb", "uMDif", "uMEmi", "uMSca", "uLFl", "uLPos", "uLAtt", "uLSpot", "uLA", "uLD"};
typedef struct { u32 key; int state; const SceGxmProgram *gxp; SceGxmVertexProgram *vp; const SceGxmProgramParameter *u[U_NV]; } vprog_t;
#define VP_N 192
static vprog_t vps[VP_N]; static int nvp;
static SceGxmShaderPatcherId fs_id; static const SceGxmProgram *fs_gxp;
static const SceGxmProgramParameter *fu_cfg0g, *fu_cfg1g, *fu_envg, *fu_fogg, *fu_mulg;
/* the same fragment program with anisotropic sampling (tex_mips.h), for filtered draws of textures that have a mip chain */
typedef struct { SceGxmShaderPatcherId id; const SceGxmProgram *gxp; const SceGxmProgramParameter *cfg0, *cfg1, *env, *fog, *mul, *aniso; } fsv_t;
static fsv_t fs_af; static int af_ok;
static vprog_t cpu_vp;                                       /* gfx_vtx_t program */
static SceGxmVertexProgram *clr_vp, *blt_vp; static SceGxmFragmentProgram *blt_fp; static const SceGxmProgram *clr_vgxp, *clr_fgxp, *blt_vgxp; static SceGxmShaderPatcherId clr_fid;
static const SceGxmProgramParameter *clr_uz, *clr_ucol;
static SceGxmFragmentProgram *fxaa_fp; static const SceGxmProgramParameter *fxaa_texel; static int use_fxaa;   /* present pass */
static u16 *lin_idx;                                         /* 0, 1, 2, ... 65535 */

static SceGxmAttributeFormat afmt(int psp_fmt, int is_unsigned){
    switch (psp_fmt) { case 1: return is_unsigned ? SCE_GXM_ATTRIBUTE_FORMAT_U8 : SCE_GXM_ATTRIBUTE_FORMAT_S8;
                       case 2: return is_unsigned ? SCE_GXM_ATTRIBUTE_FORMAT_U16 : SCE_GXM_ATTRIBUTE_FORMAT_S16;
                       default: return SCE_GXM_ATTRIBUTE_FORMAT_F32; } }
static int reg_of(const SceGxmProgram *p, const char *name){ const SceGxmProgramParameter *q = sceGxmProgramFindParameterByName(p, name); return q ? (int)sceGxmProgramParameterGetResourceIndex(q) : -1; }

static const vprog_t *native_prog(u32 vt, int lit, int vsz, const int *off){
    int thr = (vt >> 23) & 1; u32 key = (vt & 0x1C7FFu) | ((u32)thr << 23) | ((u32)(lit && !thr) << 24) | 0x80000000u;
    for (int i = 0; i < nvp; i++) if (vps[i].key == key) return vps[i].state > 0 ? &vps[i] : NULL;
    if (nvp >= VP_N) return NULL;
    vprog_t *e = &vps[nvp++]; memset(e, 0, sizeof *e); e->key = key; e->state = -1;
    if (!((vt >> 7) & 3)) return NULL;
    char *src = native_vs_src(vt, lit); u64 t0 = rs_perf_us();
    e->gxp = gxm_shader(src, 0); free(src);
    if (!e->gxp) { fprintf(stderr, "[GXM] vertex type %06x: %s\n", (unsigned)vt, gxm_error()); return NULL; }
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1;
    if (thr) { nf = 0; wf = 0; }
    SceGxmVertexAttribute at[6]; int na = 0; int r;
    if ((r = reg_of(e->gxp, "aP")) >= 0) { at[na] = (SceGxmVertexAttribute){0, (unsigned short)off[4], afmt(pf, 0), 3, (unsigned short)r}; na++; }
    if (nf && off[3] >= 0 && (r = reg_of(e->gxp, "aN")) >= 0) { at[na] = (SceGxmVertexAttribute){0, (unsigned short)off[3], afmt(nf, 0), 3, (unsigned short)r}; na++; }
    if (tf && off[1] >= 0 && (r = reg_of(e->gxp, "aT")) >= 0) { at[na] = (SceGxmVertexAttribute){0, (unsigned short)off[1], afmt(tf, 1), 2, (unsigned short)r}; na++; }
    if (cf && off[2] >= 0 && (r = reg_of(e->gxp, "aC")) >= 0) { at[na] = (SceGxmVertexAttribute){0, (unsigned short)off[2], cf == 7 ? SCE_GXM_ATTRIBUTE_FORMAT_U8N : SCE_GXM_ATTRIBUTE_FORMAT_U16, (unsigned char)(cf == 7 ? 4 : 1), (unsigned short)r}; na++; }
    if (wf && off[0] >= 0) { static const int fs[4] = {0, 1, 2, 4};
        if ((r = reg_of(e->gxp, "aW0")) >= 0) { at[na] = (SceGxmVertexAttribute){0, (unsigned short)off[0], afmt(wf, 1), (unsigned char)(nw > 4 ? 4 : nw), (unsigned short)r}; na++; }
        if (nw > 4 && (r = reg_of(e->gxp, "aW1")) >= 0) { at[na] = (SceGxmVertexAttribute){0, (unsigned short)(off[0] + 4 * fs[wf]), afmt(wf, 1), (unsigned char)(nw - 4), (unsigned short)r}; na++; } }
    SceGxmVertexStream st = {(unsigned short)vsz, SCE_GXM_INDEX_SOURCE_INDEX_16BIT};
    SceGxmShaderPatcherId id; if (sceGxmShaderPatcherRegisterProgram(gxm_patcher(), e->gxp, &id) < 0 ||
        sceGxmShaderPatcherCreateVertexProgram(gxm_patcher(), id, at, (unsigned)na, &st, 1, &e->vp) < 0) { fprintf(stderr, "[GXM] vertex type %06x: cannot create the program\n", (unsigned)vt); return NULL; }
    for (int i = 0; i < U_NV; i++) e->u[i] = sceGxmProgramFindParameterByName(e->gxp, U_NAMES[i]);
    fprintf(stderr, "[GXM] program for vertex type %06x%s%s ready (%.1f ms)\n", (unsigned)(vt & 0x1C7FFu), thr ? " 2D" : "", lit && !thr ? " lit" : "", (rs_perf_us() - t0) / 1000.0);
    e->state = 1; return e; }

/* fragment program variants: blending and colour mask (GXM bakes them into the program) */
typedef struct { u32 key; SceGxmFragmentProgram *fp; } fprog_t;
#define FP_N 128
static fprog_t fps[FP_N]; static int nfp;
static SceGxmFragmentProgram *frag_prog(int blend_on, SceGxmBlendFunc cf, SceGxmBlendFunc af, int cs, int cd, int as, int ad, int mask, SceGxmShaderPatcherId id, const SceGxmProgram *vgxp){
    u32 key = (u32)blend_on | (u32)cf << 1 | (u32)af << 4 | (u32)cs << 7 | (u32)cd << 11 | (u32)as << 15 | (u32)ad << 19 | (u32)mask << 23 | (id == clr_fid ? 1u << 28 : 0) |
              (af_ok && id == fs_af.id ? 1u << 29 : 0);
    for (int i = 0; i < nfp; i++) if (fps[i].key == key) return fps[i].fp;
    SceGxmBlendInfo bi; memset(&bi, 0, sizeof bi); bi.colorMask = (SceGxmColorMask)mask;
    if (blend_on) { bi.colorFunc = cf; bi.alphaFunc = af; bi.colorSrc = (SceGxmBlendFactor)cs; bi.colorDst = (SceGxmBlendFactor)cd; bi.alphaSrc = (SceGxmBlendFactor)as; bi.alphaDst = (SceGxmBlendFactor)ad; }
    else { bi.colorFunc = SCE_GXM_BLEND_FUNC_NONE; bi.alphaFunc = SCE_GXM_BLEND_FUNC_NONE; bi.colorSrc = bi.alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bi.colorDst = bi.alphaDst = SCE_GXM_BLEND_FACTOR_ZERO; }
    SceGxmFragmentProgram *fp = NULL;
    if (sceGxmShaderPatcherCreateFragmentProgram(gxm_patcher(), id, SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4, SCE_GXM_MULTISAMPLE_NONE, &bi, vgxp, &fp) < 0) return NULL;
    if (nfp < FP_N) { fps[nfp].key = key; fps[nfp].fp = fp; nfp++; }
    return fp; }

/* ===================================================================== textures */
#define TC_N 1024
typedef struct { gtex_key_t k; u32 hash; unsigned epoch, stamp; int used, hnext, mips; unsigned up_ep; SceGxmTexture tex; void *mem, *pal; long bytes; } tent_t;
static tent_t tc[TC_N]; static unsigned tc_stamp; static long tc_bytes; static u32 *scratch;
#define TC_HB 4096
static int tc_head[TC_HB];
static unsigned tex_slot;                                  /* gfx_tex_acquire returns an index + 1 into tc[] (or a surface: 0x10000 + index) */
static u32 tk_hash(const gtex_key_t *k){ u32 h = k->addr * 2654435761u ^ (u32)k->w * 40503u ^ (u32)k->h * 9973u ^ (u32)k->fmt * 131u ^ (u32)k->swz ^ (u32)k->bufw * 7919u ^ k->clut * 2246822519u; return (h ^ (h >> 15)) & (TC_HB - 1); }
static int tk_eq(const gtex_key_t *a, const gtex_key_t *b){ return a->addr == b->addr && a->w == b->w && a->h == b->h && a->fmt == b->fmt && a->swz == b->swz && a->bufw == b->bufw && a->clut == b->clut; }
static void tc_link(tent_t *e){ u32 h = tk_hash(&e->k); e->hnext = tc_head[h]; tc_head[h] = (int)(e - tc) + 1; }
static void tc_unlink(tent_t *e){ u32 h = tk_hash(&e->k); int me = (int)(e - tc) + 1; int *pp = &tc_head[h];
    while (*pp) { if (*pp == me) { *pp = e->hnext; break; } pp = &tc[*pp - 1].hnext; } e->hnext = 0; }
static void tent_release_mem(tent_t *e){ pool_free_later(e->mem); pool_free_later(e->pal); e->mem = e->pal = NULL; tc_bytes -= e->bytes; e->bytes = 0; }
static void tent_free(tent_t *e){ if (!e->used) return; tc_unlink(e); tent_release_mem(e); memset(e, 0, sizeof *e); }
void gfx_tex_maps(unsigned *mr, unsigned *nrm, int *hd){ *mr = 0; *nrm = 0; *hd = 0; }

static u32 part1by1(u32 x){ x &= 0xFFFF; x = (x ^ (x << 8)) & 0x00FF00FF; x = (x ^ (x << 4)) & 0x0F0F0F0F; x = (x ^ (x << 2)) & 0x33333333; x = (x ^ (x << 1)) & 0x55555555; return x; }
static u16 rb_swap(u16 v){ return (u16)((v & 0x07E0u) | (v >> 11) | ((v & 31u) << 11)); }
static void bc_color_fix(u8 *cb, int dxt1){
    u16 c0, c1; u32 ix; memcpy(&c0, cb, 2); memcpy(&c1, cb + 2, 2); memcpy(&ix, cb + 4, 4);
    u16 a = rb_swap(c0), b = rb_swap(c1);
    if (dxt1 && ((c0 > c1) != (a > b))) { u16 t = a; a = b; b = t; if (c0 > c1) ix ^= 0x55555555u; else ix ^= (~ix >> 1) & 0x55555555u; }
    memcpy(cb, &a, 2); memcpy(cb + 2, &b, 2); memcpy(cb + 4, &ix, 4); }
/* the PSP texels as they are, in a GXM format that reads them (as platform/vita/gfx_vgl.c did through vitaGL); 0 = not this format */
static int tex_native(tent_t *e, const gtex_key_t *k){
    int f = k->fmt, w = k->w, h = k->h, bw = k->bufw > 0 ? k->bufw : k->w;
    size_t base = GADDR(gfx_vram(k->addr)); if (base >= GMEM_SIZE) return 0;
    const u8 *src = g_mem + base; size_t avail = GMEM_SIZE - base;
    if (f >= 8 && f <= 10) {
        if (w < 4 || h < 4) return 0;
        int bsz = f == 8 ? 8 : 16, nbx = w / 4, nby = h / 4, bpr = (bw + 3) / 4;
        if ((size_t)bpr * (size_t)(nby - 1) * bsz + (size_t)nbx * bsz > avail) return 0;
        long need = (long)nbx * nby * bsz; u8 *m = pool_alloc((u32)need, 256); if (!m) return 0;
        int tile = nbx < nby ? nbx : nby; u32 tt = (u32)tile * (u32)tile;
        for (int by = 0; by < nby; by++) for (int bx = 0; bx < nbx; bx++) {
            u32 d = (part1by1((u32)(bx % tile)) << 1 | part1by1((u32)(by % tile))) + (u32)(bx / tile + by / tile) * tt;
            u8 blk[16]; memcpy(blk, src + ((size_t)by * bpr + bx) * bsz, (size_t)bsz); bc_color_fix(blk + (f == 8 ? 0 : 8), f == 8); memcpy(m + (size_t)d * bsz, blk, (size_t)bsz); }
        sceGxmTextureInitSwizzled(&e->tex, m, f == 8 ? SCE_GXM_TEXTURE_FORMAT_UBC1_ABGR : (f == 9 ? SCE_GXM_TEXTURE_FORMAT_UBC2_ABGR : SCE_GXM_TEXTURE_FORMAT_UBC3_ABGR), (unsigned)w, (unsigned)h, 0);
        e->mem = m; e->bytes = need; return 1; }
    int bpp; SceGxmTextureFormat gf;
    switch (f) {
    case 0: bpp = 16; gf = SCE_GXM_TEXTURE_FORMAT_U5U6U5_BGR; break;
    case 1: bpp = 16; gf = SCE_GXM_TEXTURE_FORMAT_U1U5U5U5_ABGR; break;
    case 2: bpp = 16; gf = SCE_GXM_TEXTURE_FORMAT_U4U4U4U4_ABGR; break;
    case 3: bpp = 32; gf = SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR; break;
    case 4: bpp = 4; gf = SCE_GXM_TEXTURE_FORMAT_P4_ABGR; break;
    case 5: bpp = 8; gf = SCE_GXM_TEXTURE_FORMAT_P8_ABGR; break;
    default: return 0; }
    if (bpp == 4 && w < 2) return 0;
    size_t srow = (size_t)bw * bpp / 8, rb = (size_t)w * bpp / 8, drow = (size_t)ALIGN(w, 8) * bpp / 8;
    if (srow * (size_t)h > avail || rb > srow) return 0;
    if (k->swz && (srow & 15)) return 0;
    int npal = f == 4 ? 16 : (f == 5 ? 256 : 0);
    u32 *pal = NULL; if (npal) { pal = pool_alloc((u32)npal * 4, 64); if (!pal) return 0; ge_clut_palette(pal, npal); }
    long need = (long)(drow * (size_t)h); u8 *dst = pool_alloc((u32)need, 256); if (!dst) { pool_release(pal); return 0; }
    if (!k->swz) for (int y = 0; y < h; y++) memcpy(dst + (size_t)y * drow, src + (size_t)y * srow, rb);
    else { size_t tiles_row = srow >> 4;
        for (int y = 0; y < h; y++) { const u8 *trow = src + ((size_t)(y >> 3) * tiles_row) * 128 + (size_t)(y & 7) * 16; u8 *d = dst + (size_t)y * drow;
            for (size_t c = 0; c < rb; c += 16) memcpy(d + c, trow + (c >> 4) * 128, rb - c < 16 ? rb - c : 16); } }
    sceGxmTextureInitLinear(&e->tex, dst, gf, (unsigned)w, (unsigned)h, 0);
    if (pal) sceGxmTextureSetPalette(&e->tex, pal);
    e->mem = dst; e->pal = pal; e->bytes = need + npal * 4; return 1; }
static int tex_decoded(tent_t *e, const gtex_key_t *k, const gtex_src_t *src){
    if (!scratch) scratch = malloc(1024 * 1024 * 4);
    src->decode(scratch, src->ud);
    long need = (long)ALIGN(k->w, 8) * k->h * 4; u8 *m = pool_alloc((u32)need, 256); if (!m) return 0;
    for (int y = 0; y < k->h; y++) memcpy(m + (size_t)y * ALIGN(k->w, 8) * 4, scratch + (size_t)y * k->w, (size_t)k->w * 4);
    sceGxmTextureInitLinear(&e->tex, m, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, (unsigned)k->w, (unsigned)k->h, 0);
    e->mem = m; e->bytes = need; return 1; }

/* anisotropic filtering (RS_ANISO, tex_mips.h): the texture decoded to RGBA8 with its mip chain (rows padded to 8 texels, levels in
 * sequence: GXM's linear layout) */
/* the indices of a P4 / P8 texture, one byte each (as tex_native reads them: linear or swizzled rows) */
static int read_indices(const gtex_key_t *k, u8 *out){
    int w = k->w, h = k->h, bw = k->bufw > 0 ? k->bufw : k->w, bpp = k->fmt == 4 ? 4 : 8;
    size_t base = GADDR(gfx_vram(k->addr)); if (base >= GMEM_SIZE) return 0;
    const u8 *src = g_mem + base; size_t avail = GMEM_SIZE - base, srow = (size_t)bw * bpp / 8, rb = (size_t)w * bpp / 8;
    if (srow * (size_t)h > avail || rb > srow || (k->swz && (srow & 15))) return 0;
    static u8 row[1024];
    for (int y = 0; y < h; y++) {
        if (!k->swz) memcpy(row, src + (size_t)y * srow, rb);
        else { const u8 *trow = src + ((size_t)(y >> 3) * (srow >> 4)) * 128 + (size_t)(y & 7) * 16;
            for (size_t c = 0; c < rb; c += 16) memcpy(row + c, trow + (c >> 4) * 128, rb - c < 16 ? rb - c : 16); }
        u8 *o = out + (size_t)y * w;
        if (bpp == 8) memcpy(o, row, (size_t)w); else for (int x = 0; x < w; x++) o[x] = (u8)((row[x >> 1] >> ((x & 1) * 4)) & 15); }
    return 1; }
static int tex_mipped(tent_t *e, const gtex_key_t *k, const gtex_src_t *src){
    int L = rs_mip_levels(k->w, k->h); if (L < 2) return 0;
    if (!scratch) scratch = malloc(1024 * 1024 * 4);
    src->decode(scratch, src->ud);
    if (k->fmt == 4 || k->fmt == 5) {                          /* palettized: stays palettized (8-bit), level 0 the game's own indices */
        static u8 *idx; if (!idx) idx = malloc(1024 * 1024); if (!idx || !read_indices(k, idx)) return 0;
        int npal = k->fmt == 4 ? 16 : 256;
        u32 *pal = pool_alloc(256 * 4, 64); if (!pal) return 0; memset(pal, 0, 256 * 4); ge_clut_palette(pal, npal);
        long need = (long)rs_mip_bytes(k->w, k->h, L, 8) / 4; u8 *m = pool_alloc((u32)need, 256); if (!m) { pool_release(pal); return 0; }
        rs_mip_build_pal(idx, scratch, pal, npal, k->w, k->h, L, 8, m);
        sceGxmTextureInitLinear(&e->tex, m, SCE_GXM_TEXTURE_FORMAT_P8_ABGR, (unsigned)k->w, (unsigned)k->h, (unsigned)L); sceGxmTextureSetPalette(&e->tex, pal);
        e->mem = m; e->pal = pal; e->bytes = need + 1024; e->mips = L; return 1; }
    long need = (long)rs_mip_bytes(k->w, k->h, L, 8); u8 *m = pool_alloc((u32)need, 256); if (!m) return 0;
    rs_mip_build(scratch, k->w, k->h, L, 8, m);
    sceGxmTextureInitLinear(&e->tex, m, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, (unsigned)k->w, (unsigned)k->h, (unsigned)L);
    e->mem = m; e->bytes = need; e->mips = L; return 1; }
unsigned gfx_tex_acquire(const gtex_key_t *k, const gtex_src_t *src, float uvs[4]){
    uvs[0] = uvs[1] = 1; uvs[2] = uvs[3] = 0;
    if (k->w <= 0 || k->h <= 0 || k->w > 1024 || k->h > 1024) return 0;
    int y0, x0; surf_t *s = surf_for_addr(k->addr, &y0, &x0);
    if (s) { if (s == scene_surf) return 0; uvs[0] = (float)k->w / SZ; uvs[1] = (float)k->h / SURF_H; uvs[2] = (float)y0 / SURF_H; uvs[3] = (float)x0 / SZ; return 0x10000u + (unsigned)(s - surfs); }
    tent_t *e = 0, *old = &tc[0];
    for (int i = tc_head[tk_hash(k)]; i; i = tc[i - 1].hnext) if (tk_eq(&tc[i - 1].k, k)) { e = &tc[i - 1]; break; }
    if (!e) for (int i = 0; i < TC_N; i++) { tent_t *t = &tc[i]; if (!t->used) { old = t; break; } if (t->stamp < old->stamp) old = t; }
    if (e && e->epoch == rs_gfx_epoch) { e->stamp = ++tc_stamp; return (unsigned)(e - tc) + 1; }
    u64 t_h = rs_perf_us(); u32 h = src->hash(src->ud); rs_perf.hash_n++; rs_perf.hash_us += rs_perf_us() - t_h;
    if (e && e->hash == h && e->mem) { e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp; return (unsigned)(e - tc) + 1; }
    if (!e) {
        static long budget = -1; if (budget < 0) budget = (long)rs_setting_int("RS_TEX_BUDGET_MB", 40) * 1048576L;
        while (tc_bytes + (long)k->w * k->h * 4 > budget) { tent_t *v = 0; for (int i = 0; i < TC_N; i++) if (tc[i].used && tc[i].epoch != rs_gfx_epoch && (!v || tc[i].stamp < v->stamp)) v = &tc[i];
            if (!v) break; tent_free(v); old = v; }
        e = old; tent_free(e); e->k = *k; e->used = 1; tc_link(e); }
    else { tent_release_mem(e);                                /* contents changed: new memory (the GPU may still read the old) */
        e->mips = rs_gfx_epoch - e->up_ep < 30 ? -1 : 0; }       /* changing within a second (animated): no mip chain, ever */
    e->hash = h; e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp;
    u64 t_u = rs_perf_us();
    int ok = 0;
    if (e->mips == 0 && rs_aniso_level() > 1 && !rs_tex_nomip(k->addr)) { ok = tex_mipped(e, k, src); if (!ok) { pool_collect(); ok = tex_mipped(e, k, src); } }
    if (!ok) { if (e->mips > 0) e->mips = 0; ok = tex_native(e, k); }
    if (!ok) { pool_collect(); ok = tex_native(e, k); }
    if (!ok) ok = tex_decoded(e, k, src);
    if (!ok) { fprintf(stderr, "[GXM] out of texture memory (%dx%d)\n", k->w, k->h); tent_free(e); return 0; }
    e->up_ep = rs_gfx_epoch; tc_bytes += e->bytes; st_texup++; rs_perf.up_n++; rs_perf.up_us += rs_perf_us() - t_u;
    return (unsigned)(e - tc) + 1; }
static const SceGxmTexture *tex_of(unsigned id){
    if (id >= 0x10000u) { unsigned i = id - 0x10000u; return i < SURF_N && surfs[i].used ? &surfs[i].tex : NULL; }
    return id && id <= TC_N && tc[id - 1].used ? &tc[id - 1].tex : NULL; }

static gxm_tex_t white_gt;
#define white_tex (white_gt.tex)

/* ===================================================================== state */
static SceGxmBlendFactor bfactor(int f, int is_src, u32 fix, int fb565, float *mul, int *approx){
    switch (f) {
    case 0: return is_src ? SCE_GXM_BLEND_FACTOR_DST_COLOR : SCE_GXM_BLEND_FACTOR_SRC_COLOR;
    case 1: return is_src ? SCE_GXM_BLEND_FACTOR_ONE_MINUS_DST_COLOR : SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
    case 2: case 6: return SCE_GXM_BLEND_FACTOR_SRC_ALPHA;
    case 3: case 7: return SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    case 4: case 8: return fb565 ? SCE_GXM_BLEND_FACTOR_ONE : SCE_GXM_BLEND_FACTOR_DST_ALPHA;
    case 5: case 9: return fb565 ? SCE_GXM_BLEND_FACTOR_ZERO : SCE_GXM_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
    default:
        if ((fix & 0xFFFFFF) == 0) return SCE_GXM_BLEND_FACTOR_ZERO;
        if ((fix & 0xFFFFFF) == 0xFFFFFF) return SCE_GXM_BLEND_FACTOR_ONE;
        /* GXM has no constant blend colour: a fixed source factor is applied in the fragment program; a fixed destination factor is
         * approximated (as the vitaGL build did) */
        if (is_src) { mul[0] = (fix & 255) / 255.0f; mul[1] = ((fix >> 8) & 255) / 255.0f; mul[2] = ((fix >> 16) & 255) / 255.0f; return SCE_GXM_BLEND_FACTOR_ONE; }
        { float l = ((fix & 255) + ((fix >> 8) & 255) + ((fix >> 16) & 255)) / 765.0f; *approx = 1; return l >= 0.5f ? SCE_GXM_BLEND_FACTOR_ONE : SCE_GXM_BLEND_FACTOR_ZERO; } } }
static const SceGxmDepthFunc dfunc[8] = {SCE_GXM_DEPTH_FUNC_NEVER, SCE_GXM_DEPTH_FUNC_ALWAYS, SCE_GXM_DEPTH_FUNC_EQUAL, SCE_GXM_DEPTH_FUNC_NOT_EQUAL,
                                         SCE_GXM_DEPTH_FUNC_LESS, SCE_GXM_DEPTH_FUNC_LESS_EQUAL, SCE_GXM_DEPTH_FUNC_GREATER, SCE_GXM_DEPTH_FUNC_GREATER_EQUAL};
static const SceGxmStencilFunc sfuncs[8] = {SCE_GXM_STENCIL_FUNC_NEVER, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_FUNC_EQUAL, SCE_GXM_STENCIL_FUNC_NOT_EQUAL,
                                            SCE_GXM_STENCIL_FUNC_LESS, SCE_GXM_STENCIL_FUNC_LESS_EQUAL, SCE_GXM_STENCIL_FUNC_GREATER, SCE_GXM_STENCIL_FUNC_GREATER_EQUAL};
static const SceGxmStencilOp sops[8] = {SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_ZERO, SCE_GXM_STENCIL_OP_REPLACE, SCE_GXM_STENCIL_OP_INVERT,
                                        SCE_GXM_STENCIL_OP_INCR, SCE_GXM_STENCIL_OP_DECR, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP};
/* everything a draw needs besides its vertices; returns the fragment program, sets uniforms of the fragment shader */
static SceGxmFragmentProgram *apply_state(const gfx_state_t *s, const SceGxmProgram *vgxp){
    SceGxmContext *c = gxm_ctx();
    int x1 = s->sx1 < 0 ? 0 : s->sx1, y1 = s->sy1 < 0 ? 0 : s->sy1, x2 = s->sx2 > SZ - 1 ? SZ - 1 : s->sx2, y2 = s->sy2 > SZ - 1 ? SZ - 1 : s->sy2;
    scissor_psp(x1, y1, x2, y2);
    sceGxmSetFrontDepthFunc(c, s->ztest ? dfunc[s->zfunc & 7] : SCE_GXM_DEPTH_FUNC_ALWAYS);
    sceGxmSetFrontDepthWriteEnable(c, (s->ztest && s->zwrite) ? SCE_GXM_DEPTH_WRITE_ENABLED : SCE_GXM_DEPTH_WRITE_DISABLED);
    /* rows run downwards in a GXM surface (PSP row 0 = memory row 0), the opposite of GL's window: the winding the GL path culled as
     * back faces (cull_mode 1 = GL_BACK, glFrontFace(GL_CCW)) appears clockwise here */
    sceGxmSetCullMode(c, !s->cull_en ? SCE_GXM_CULL_NONE : (s->cull_mode == 1 ? SCE_GXM_CULL_CCW : SCE_GXM_CULL_CW));
    if (s->sten) {
        sceGxmSetFrontStencilFunc(c, sfuncs[s->sfunc & 7], sops[s->sfail & 7], sops[s->szfail & 7], sops[s->szpass & 7], (u8)s->smask, (u8)s->swmask);
        sceGxmSetFrontStencilRef(c, (unsigned)s->sref); }
    else sceGxmSetFrontStencilFunc(c, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, 0, 0);
    float mul[3] = {1, 1, 1}; int approx = 0;
    const SceGxmTexture *tx = s->tex ? tex_of(s->texid) : NULL; int use = tx != NULL;
    const tent_t *te = use && s->texid < 0x10000u ? &tc[s->texid - 1] : NULL;
    int mipped = te && te->mips > 1 && s->tfilter, aniso = mipped && af_ok;   /* filtered + mip chain: trilinear, anisotropic if the program built */
    SceGxmShaderPatcherId pid = aniso ? fs_af.id : fs_id;
    int mask = (s->cmr ? SCE_GXM_COLOR_MASK_R : 0) | (s->cmg ? SCE_GXM_COLOR_MASK_G : 0) | (s->cmb ? SCE_GXM_COLOR_MASK_B : 0) | (s->cma ? SCE_GXM_COLOR_MASK_A : 0);
    SceGxmFragmentProgram *fp;
    if (s->blend) {
        int fb565 = s->fbfmt == 0;
        SceGxmBlendFactor sf = bfactor(s->bsrc, 1, s->bfixa, fb565, mul, &approx), df = bfactor(s->bdst, 0, s->bfixb, fb565, mul, &approx);
        SceGxmBlendFactor as = (sf == SCE_GXM_BLEND_FACTOR_DST_COLOR || sf == SCE_GXM_BLEND_FACTOR_ONE_MINUS_DST_COLOR) ? SCE_GXM_BLEND_FACTOR_ONE : sf;
        SceGxmBlendFactor ad = (df == SCE_GXM_BLEND_FACTOR_SRC_COLOR || df == SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_COLOR) ? SCE_GXM_BLEND_FACTOR_ONE : df;
        SceGxmBlendFunc fn = s->beq == 1 ? SCE_GXM_BLEND_FUNC_SUBTRACT : (s->beq == 2 ? SCE_GXM_BLEND_FUNC_REVERSE_SUBTRACT : (s->beq == 3 ? SCE_GXM_BLEND_FUNC_MIN : (s->beq == 4 ? SCE_GXM_BLEND_FUNC_MAX : SCE_GXM_BLEND_FUNC_ADD)));
        fp = frag_prog(1, fn, fn, sf, df, as, ad, mask, pid, vgxp); }
    else fp = frag_prog(0, 0, 0, 0, 0, 0, 0, mask, pid, vgxp);
    if (!fp) return NULL;
    sceGxmSetFragmentProgram(c, fp);
    void *fb; sceGxmReserveFragmentDefaultUniformBuffer(c, &fb);
    const SceGxmProgramParameter *fu_cfg0 = aniso ? fs_af.cfg0 : fu_cfg0g, *fu_cfg1 = aniso ? fs_af.cfg1 : fu_cfg1g, *fu_env = aniso ? fs_af.env : fu_envg,
                                 *fu_fog = aniso ? fs_af.fog : fu_fogg, *fu_mul = aniso ? fs_af.mul : fu_mulg;
    float v[4];
    if (aniso && fs_af.aniso) { v[0] = (float)te->k.w; v[1] = (float)te->k.h; v[2] = (float)rs_aniso_level(); v[3] = 0; sceGxmSetUniformDataF(fb, fs_af.aniso, 0, 4, v); }
    if (fu_cfg0) { v[0] = use ? 1.0f : 0.0f; v[1] = (float)s->tfunc; v[2] = (float)s->trgba; v[3] = (float)s->tdbl; sceGxmSetUniformDataF(fb, fu_cfg0, 0, 4, v); }
    if (fu_cfg1) { v[0] = s->atest ? (float)s->afunc : 1.0f; v[1] = (float)s->aref; v[2] = v[3] = 0; sceGxmSetUniformDataF(fb, fu_cfg1, 0, 4, v); }
    if (fu_env) { v[0] = (s->tenv & 255) / 255.0f; v[1] = ((s->tenv >> 8) & 255) / 255.0f; v[2] = ((s->tenv >> 16) & 255) / 255.0f; v[3] = 1; sceGxmSetUniformDataF(fb, fu_env, 0, 4, v); }
    if (fu_fog) { v[0] = (s->fogcol & 255) / 255.0f; v[1] = ((s->fogcol >> 8) & 255) / 255.0f; v[2] = ((s->fogcol >> 16) & 255) / 255.0f; v[3] = s->fog ? 1.0f : 0.0f; sceGxmSetUniformDataF(fb, fu_fog, 0, 4, v); }
    if (fu_mul) { v[0] = mul[0]; v[1] = mul[1]; v[2] = mul[2]; v[3] = 1; sceGxmSetUniformDataF(fb, fu_mul, 0, 4, v); }
    if (use) {
        SceGxmTexture t = *tx;
        SceGxmTextureFilter flt = s->tfilter ? SCE_GXM_TEXTURE_FILTER_LINEAR : SCE_GXM_TEXTURE_FILTER_POINT;
        if (s->texid >= 0x10000u) flt = SCE_GXM_TEXTURE_FILTER_LINEAR;
        sceGxmTextureSetMinFilter(&t, flt); sceGxmTextureSetMagFilter(&t, flt);
        if (te && te->mips > 1) { if (mipped) sceGxmTextureSetMipFilter(&t, SCE_GXM_TEXTURE_MIP_FILTER_ENABLED); else sceGxmTextureSetMipmapCount(&t, 0); }   /* point-sampled: the full-size level only, as on the PSP */
        sceGxmTextureSetUAddrMode(&t, s->tclampu ? SCE_GXM_TEXTURE_ADDR_CLAMP : SCE_GXM_TEXTURE_ADDR_REPEAT);
        sceGxmTextureSetVAddrMode(&t, s->tclampv ? SCE_GXM_TEXTURE_ADDR_CLAMP : SCE_GXM_TEXTURE_ADDR_REPEAT);
        sceGxmSetFragmentTexture(c, 0, &t); }
    else sceGxmSetFragmentTexture(c, 0, &white_tex);              /* the program samples only when textured, but keep a valid binding */
    return fp; }

/* ===================================================================== draws */
static void set_vu(void *ub, const vprog_t *P, int i, int n4, const float *v){ if (P->u[i]) sceGxmSetUniformDataF(ub, P->u[i], 0, (unsigned)(n4 * 4), v); }
int gfx_draw_native(const gfx_state_t *st, const gfx_hw_t *h, const gfx_native_t *nv){
    if (nv->count <= 0 || nv->vsz <= 0 || nv->off[4] < 0) return 0;
    int n = nv->count; if (n < 3) return 1;
    if (nv->ptype == 3) n -= n % 3;
    u32 vt = nv->vt; int thr = (vt >> 23) & 1;
    const vprog_t *P = native_prog(vt, h->lit, nv->vsz, nv->off); if (!P) return 0;
    surf_t *t = target_for(st); if (!t) return 1;
    u64 t_s = rs_perf_us();
    /* vertices: the copy the native GU made of the game's bytes, into GPU-visible frame memory */
    u32 lo = 0, hi = (u32)n - 1; const u16 *ix = lin_idx;
    if (nv->idxf) {                                                /* the vertices the indices use; indices rebased to them (16-bit) */
        u16 *d = gxm_frame_alloc((size_t)n * 2, 16); if (!d) return 1;
        const u8 *ip = nv->idata; lo = 0xFFFFFFFFu; hi = 0;
        for (int i = 0; i < n; i++) { u32 x = nv->idxf == 1 ? ip[i] : (nv->idxf == 2 ? ((u32)ip[i * 2] | (u32)ip[i * 2 + 1] << 8) : ((u32)ip[i * 4] | (u32)ip[i * 4 + 1] << 8 | (u32)ip[i * 4 + 2] << 16 | (u32)ip[i * 4 + 3] << 24));
            if (x < lo) lo = x; if (x > hi) hi = x; d[i] = (u16)x; }
        if (hi - lo >= 65535u) return 0;
        if (lo) for (int i = 0; i < n; i++) d[i] = (u16)(d[i] - lo);
        ix = d; }
    else if (n > 65536) return 0;
    int nvert = (int)(hi - lo + 1);
    void *vb = gxm_frame_alloc((size_t)nvert * nv->vsz, 16); if (!vb) { static int w; if (!w++) fprintf(stderr, "[GXM] frame memory full: draws dropped this frame\n"); return 1; }
    memcpy(vb, nv->vdata + (size_t)lo * nv->vsz, (size_t)nvert * nv->vsz);
    SceGxmContext *c = gxm_ctx();
    SceGxmFragmentProgram *fp = apply_state(st, P->gxp); if (!fp) return 1;
    sceGxmSetVertexProgram(c, P->vp);
    void *ub; sceGxmReserveVertexDefaultUniformBuffer(c, &ub);
    if (!thr) {
        set_vu(ub, P, U_MVP, 4, h->mvp); set_vu(ub, P, U_WVZ, 1, h->wvz); set_vu(ub, P, U_WLD, 3, h->wld);
        set_vu(ub, P, U_VP0, 1, h->vp0); set_vu(ub, P, U_VP1, 1, h->vp1); set_vu(ub, P, U_VP2, 1, h->vp2); set_vu(ub, P, U_FOGP, 1, h->fogp);
        if (h->skin) set_vu(ub, P, U_B, 24, h->bone);
        if (h->lit) { set_vu(ub, P, U_LFL, 1, h->lfl); set_vu(ub, P, U_MAMB, 1, h->mamb); set_vu(ub, P, U_MDIF, 1, h->mdif); set_vu(ub, P, U_MEMI, 1, h->memi); set_vu(ub, P, U_MSCA, 1, h->msca);
            set_vu(ub, P, U_LPOS, 4, h->lpos); set_vu(ub, P, U_LATT, 4, h->latt); set_vu(ub, P, U_LSPOT, 4, h->lspot); set_vu(ub, P, U_LA, 4, h->la); set_vu(ub, P, U_LD, 4, h->ld); } }
    set_vu(ub, P, U_UVT, 1, h->uvt); set_vu(ub, P, U_UVS, 1, st->uvs); set_vu(ub, P, U_DEFC, 1, nv->defc);
    sceGxmSetVertexStream(c, 0, vb);
    SceGxmPrimitiveType pt = nv->ptype == 4 ? SCE_GXM_PRIMITIVE_TRIANGLE_STRIP : (nv->ptype == 5 ? SCE_GXM_PRIMITIVE_TRIANGLE_FAN : SCE_GXM_PRIMITIVE_TRIANGLES);
    rs_perf.setup_us += rs_perf_us() - t_s; u64 t_d = rs_perf_us();
    sceGxmDraw(c, pt, SCE_GXM_INDEX_FORMAT_U16, ix, (unsigned)n);
    rs_perf.draw_us += rs_perf_us() - t_d; rs_perf.batches++; st_draws++; st_tris += (unsigned)(nv->ptype == 3 ? n / 3 : n - 2);
    return 1; }

void gfx_draw(const gfx_state_t *st, const gfx_vtx_t *v, int n){
    if (n <= 0) return;
    surf_t *t = target_for(st); if (!t) return;
    void *vb = gxm_frame_alloc(sizeof(gfx_vtx_t) * (size_t)n, 16); if (!vb) return; memcpy(vb, v, sizeof(gfx_vtx_t) * (size_t)n);
    SceGxmContext *c = gxm_ctx();
    if (!apply_state(st, cpu_vp.gxp)) return;
    sceGxmSetVertexProgram(c, cpu_vp.vp);
    void *ub; sceGxmReserveVertexDefaultUniformBuffer(c, &ub); set_vu(ub, &cpu_vp, U_UVS, 1, st->uvs);
    sceGxmSetVertexStream(c, 0, vb);
    sceGxmDraw(c, SCE_GXM_PRIMITIVE_TRIANGLES, SCE_GXM_INDEX_FORMAT_U16, lin_idx, (unsigned)n); st_draws++; st_tris += (unsigned)(n / 3); }
void gfx_draw_hw(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n){ (void)st; (void)hw; (void)v; (void)n; }
void gfx_flush(void){ }
int gfx_hw_ok(void){ return 1; }

/* clears: a rectangle drawn through the colour / alpha / depth masks (the PSP clears alpha and stencil together) */
static void clear_rect_internal(surf_t *s, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz, int sval){
    begin_scene(s); SceGxmContext *c = gxm_ctx();
    scissor_psp(x0, y0, x1, y1);
    int mask = (cc ? (SCE_GXM_COLOR_MASK_R | SCE_GXM_COLOR_MASK_G | SCE_GXM_COLOR_MASK_B) : 0) | (ca ? SCE_GXM_COLOR_MASK_A : 0);
    SceGxmFragmentProgram *fp = frag_prog(0, 0, 0, 0, 0, 0, 0, mask, clr_fid, clr_vgxp); if (!fp) return;
    sceGxmSetFrontDepthFunc(c, SCE_GXM_DEPTH_FUNC_ALWAYS); sceGxmSetFrontDepthWriteEnable(c, cz ? SCE_GXM_DEPTH_WRITE_ENABLED : SCE_GXM_DEPTH_WRITE_DISABLED);
    sceGxmSetCullMode(c, SCE_GXM_CULL_NONE);
    if (ca) { sceGxmSetFrontStencilFunc(c, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_REPLACE, SCE_GXM_STENCIL_OP_REPLACE, SCE_GXM_STENCIL_OP_REPLACE, 0xFF, 0xFF); sceGxmSetFrontStencilRef(c, (unsigned)sval); }
    else sceGxmSetFrontStencilFunc(c, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, 0, 0);
    sceGxmSetVertexProgram(c, clr_vp); sceGxmSetFragmentProgram(c, fp);
    void *ub; sceGxmReserveVertexDefaultUniformBuffer(c, &ub); float z[4] = {depth * 2.0f - 1.0f, 0, 0, 0}; if (clr_uz) sceGxmSetUniformDataF(ub, clr_uz, 0, 4, z);
    void *fb; sceGxmReserveFragmentDefaultUniformBuffer(c, &fb); if (clr_ucol) sceGxmSetUniformDataF(fb, clr_ucol, 0, 4, rgba);
    float *q = gxm_frame_alloc(8 * sizeof(float), 16); if (!q) return;
    float l = x0 * (2.0f / 512) - 1, r = (x1 + 1) * (2.0f / 512) - 1, tp = y0 * (2.0f / 512) - 1, bt = (y1 + 1) * (2.0f / 512) - 1;
    q[0] = l; q[1] = tp; q[2] = r; q[3] = tp; q[4] = l; q[5] = bt; q[6] = r; q[7] = bt;
    sceGxmSetVertexStream(c, 0, q); sceGxmDraw(c, SCE_GXM_PRIMITIVE_TRIANGLE_STRIP, SCE_GXM_INDEX_FORMAT_U16, lin_idx, 4); sc_set = -1; }
void gfx_clear(const gfx_state_t *st, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz){
    surf_t *t = target_for(st); if (!t) return; st_clears++;
    if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0; if (x1 > SZ - 1) x1 = SZ - 1; if (y1 > SZ - 1) y1 = SZ - 1;
    int sx1 = st->sx1 > x0 ? st->sx1 : x0, sy1 = st->sy1 > y0 ? st->sy1 : y0, sx2 = st->sx2 < x1 ? st->sx2 : x1, sy2 = st->sy2 < y1 ? st->sy2 : y1;
    if (sx2 < sx1 || sy2 < sy1) return;
    int sv = (int)(rgba[3] * 255.0f + 0.5f); if (sv < 0) sv = 0; if (sv > 255) sv = 255;
    clear_rect_internal(t, sx1, sy1, sx2, sy2, rgba, depth < 0 ? 0 : (depth > 1 ? 1 : depth), cc, ca, cz, sv); }

/* image copies between GPU surfaces (or into one from memory) */
static void blit_rect(surf_t *dst, const SceGxmTexture *srct, int tw, int th, float su0, float sv0, float su1, float sv1, int dx, int dy, int w, int h){
    begin_scene(dst); SceGxmContext *c = gxm_ctx();
    scissor_psp(dx, dy, dx + w - 1, dy + h - 1);
    sceGxmSetFrontDepthFunc(c, SCE_GXM_DEPTH_FUNC_ALWAYS); sceGxmSetFrontDepthWriteEnable(c, SCE_GXM_DEPTH_WRITE_DISABLED); sceGxmSetCullMode(c, SCE_GXM_CULL_NONE);
    sceGxmSetFrontStencilFunc(c, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, 0, 0);
    sceGxmSetVertexProgram(c, blt_vp); sceGxmSetFragmentProgram(c, blt_fp);
    SceGxmTexture t = *srct; sceGxmTextureSetMinFilter(&t, SCE_GXM_TEXTURE_FILTER_POINT); sceGxmTextureSetMagFilter(&t, SCE_GXM_TEXTURE_FILTER_POINT); sceGxmSetFragmentTexture(c, 0, &t);
    float *q = gxm_frame_alloc(16 * sizeof(float), 16); if (!q) return; (void)tw; (void)th;
    float l = dx * (2.0f / 512) - 1, r = (dx + w) * (2.0f / 512) - 1, tp = dy * (2.0f / 512) - 1, bt = (dy + h) * (2.0f / 512) - 1;
    float v[16] = {l, tp, su0, sv0,  r, tp, su1, sv0,  l, bt, su0, sv1,  r, bt, su1, sv1}; memcpy(q, v, sizeof v);
    sceGxmSetVertexStream(c, 0, q); sceGxmDraw(c, SCE_GXM_PRIMITIVE_TRIANGLE_STRIP, SCE_GXM_INDEX_FORMAT_U16, lin_idx, 4); sc_set = -1; }
void gfx_transfer(u32 src, int sbw, int sx, int sy, u32 dst, int dbw, int dx, int dy, int w, int h, int bpp){
    int ys = 0, yd = 0, xs = 0, xd = 0; surf_t *ss = surf_for_addr(src, &ys, &xs), *ds = surf_for_addr(dst, &yd, &xd);
    if (w <= 0 || h <= 0 || w > SZ || h > SZ) return;
    if (ss) {
        if (!ds) { ds = surf_create(dst, ss->fmt, dbw); if (!ds) return; ds->drawn = 1; yd = xd = 0; ss = surf_for_addr(src, &ys, &xs); if (!ss) return; }
        if (ds == ss) return;
        rs_perf.copy_n++;
        float u0 = (float)(sx + xs) / SZ, v0 = (float)(sy + ys) / SURF_H, u1 = (float)(sx + xs + w) / SZ, v1 = (float)(sy + ys + h) / SURF_H;
        blit_rect(ds, &ss->tex, PX, PXH, u0, v0, u1, v1, dx + xd, dy + yd, w, h); ds->stamp = ++surf_stamp; }
    else if (ds) {                                             /* CPU memory -> GPU surface: a temporary texture drawn into it */
        int fmt = bpp == 4 ? 3 : (ds->psz == 2 ? ds->fmt : 1); int tw = ALIGN(w, 8);
        u32 *tmp = pool_alloc((u32)(tw * h * 4), 256); if (!tmp) return;
        for (int y = 0; y < h; y++) for (int x = 0; x < w; x++) tmp[y * tw + x] = gfx_px_read(gfx_gp(src + (u32)(((sy + y) * sbw + sx + x) * bpp)), fmt);
        SceGxmTexture t; sceGxmTextureInitLinear(&t, tmp, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, (unsigned)w, (unsigned)h, 0);
        blit_rect(ds, &t, w, h, 0, 0, 1, 1, dx + xd, dy + yd, w, h); pool_free_later(tmp); } }

/* ===================================================================== display */
void gfx_get_display(u32 *a, u32 *s, u32 *f){ *a = disp_addr; *s = disp_stride; *f = disp_fmt; }
void gfx_set_display(u32 addr, u32 stride, u32 fmt){ if (addr) { disp_addr = akey(addr); disp_stride = stride ? stride : 512; disp_fmt = fmt & 3; } }
static surf_t *disp_surface(void){ surf_t *s = surf_find(disp_addr); return (s && s->drawn) ? s : 0; }
int gfx_read_display(u32 *out){
    if (!disp_addr) return 0;
    surf_t *s = disp_surface();
    if (!s) { for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) out[y * 480 + x] = gfx_px_read(g_mem + GADDR((disp_addr + (u32)((y * disp_stride + x) * (disp_fmt == 3 ? 4 : 2))) | 0x04000000u), disp_fmt) | 0xFF000000u; return 1; }
    end_scene(); st_finish++; sceGxmFinish(gxm_ctx()); rs_perf.readback_n++;
    const u32 *m = s->mem; for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) out[y * 480 + x] = m[(size_t)(y * RS_S + RS_S / 2) * PX + x * RS_S + RS_S / 2] | 0xFF000000u;
    return 1; }
u32 *gfx_read_display_full(int *w, int *h){ (void)w; (void)h; return NULL; }
u32 *gfx_present_image(int w, int h){ (void)w; (void)h; return NULL; }
static gxm_tex_t disp_tex, cpu_tex;
void gfx_present(int ww, int wh){
    (void)ww; (void)wh; u64 t = rs_perf_us();
    end_scene(); pool_collect();
    gxm_begin_frame(0xFF000000u);
    surf_t *s = disp_surface();
    if (s) {                                                       /* the internal-resolution picture to the 960x544 screen, filtered */
        SceGxmTexture tx = s->tex; sceGxmTextureSetMinFilter(&tx, SCE_GXM_TEXTURE_FILTER_LINEAR); sceGxmTextureSetMagFilter(&tx, SCE_GXM_TEXTURE_FILTER_LINEAR);
        float um = 480.0f * RS_S / PX, vm = 272.0f * RS_S / PXH;
        if (use_fxaa && fxaa_fp) {
            ui_flush(); SceGxmContext *c = gxm_ctx(); float *q = gxm_frame_alloc(16 * sizeof(float), 16);
            if (q) { float v[16] = {-1, 1, 0, 0,  1, 1, um, 0,  -1, -1, 0, vm,  1, -1, um, vm}; memcpy(q, v, sizeof v);
                sceGxmSetVertexProgram(c, blt_vp); sceGxmSetFragmentProgram(c, fxaa_fp); sceGxmSetFragmentTexture(c, 0, &tx);
                void *fb; sceGxmReserveFragmentDefaultUniformBuffer(c, &fb);
                float k[4] = {1.0f / PX, 1.0f / PXH, (480.0f * RS_S - 0.5f) / PX, (272.0f * RS_S - 0.5f) / PXH}; if (fxaa_texel) sceGxmSetUniformDataF(fb, fxaa_texel, 0, 4, k);
                sceGxmSetVertexStream(c, 0, q); sceGxmDraw(c, SCE_GXM_PRIMITIVE_TRIANGLE_STRIP, SCE_GXM_INDEX_FORMAT_U16, lin_idx, 4); } }
        else { disp_tex.tex = tx; disp_tex.w = PX; disp_tex.h = PXH; ui_quad_opaque(&disp_tex, 0, 0, GXM_W, GXM_H, 0, 0, um, vm); } }
    else if (disp_addr) {                                          /* the game wrote the frame buffer with the CPU (no GPU surface) */
        static u32 pix[480 * 272]; gfx_read_display(pix); if (!cpu_tex.mem) gxm_tex_rgba(&cpu_tex, pix, 480, 272, 1);
        else { u8 *m = cpu_tex.mem; for (int y = 0; y < 272; y++) memcpy(m + (size_t)y * 480 * 4, pix + y * 480, 480 * 4); }
        ui_quad_opaque(&cpu_tex, 0, 0, GXM_W, GXM_H, 0, 0, 1, 1); }
    rs_perf.present_n++; rs_perf.present_us += rs_perf_us() - t; }
void gfx_hud(const char *const *lines, int n, int ww, int wh){
    (void)ww; (void)wh; float y = 8;
    for (int i = 0; i < n; i++) { if (!lines[i]) continue; float w = ui_text_width(lines[i], 0.6f); ui_rect(6, y - 2, w + 8, 18, 0x90000000u); ui_text(10, y, 0.6f, 0xFFFFFFFFu, lines[i]); y += 19; } }

/* frontend entry points (platform/vita/main.c): the GPU device is already up (gxm_init, before the conversion screen) */
int rs_renderer_start(void){ return gfx_init(); }
void rs_renderer_present(const char *const *lines, int n){
    extern volatile int rs_dialog_active;
    gfx_present(GXM_W, GXM_H); if (lines && n > 0) gfx_hud(lines, n, GXM_W, GXM_H);
    gxm_set_dialog(rs_dialog_active); gxm_end_frame(); }
void gfx_cache_stats(char *buf, int n){ int used = 0; for (int i = 0; i < TC_N; i++) used += tc[i].used; int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used;
    snprintf(buf, (size_t)n, "texture cache %d/%d entries, %.1f MB; %d render surfaces", used, TC_N, tc_bytes / 1048576.0, ns); }
int rt_scenes = 16;                                               /* scenes per frame the render target was created with */
void gfx_vita_counters(unsigned *scenes, unsigned *draws, unsigned *uploads, unsigned *finishes, int *rts){ *scenes = st_scenes; *draws = st_draws; *uploads = st_texup; *finishes = st_finish; *rts = rt_scenes; }
void gfx_stats(char *buf, int n){ int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used; snprintf(buf, (size_t)n, "draws=%u tris=%u clears=%u texture-uploads=%u scenes=%u surfaces=%d", st_draws, st_tris, st_clears, st_texup, st_scenes, ns); }
void gfx_shadow_frame(void){ }
void gfx_before_job(void){ }

/* ===================================================================== init */
static int prog_pair(const char *vs, const char *fsrc, const SceGxmProgram **vg, const SceGxmProgram **fg, SceGxmShaderPatcherId *vid, SceGxmShaderPatcherId *fid){
    *vg = gxm_shader(vs, 0); *fg = fsrc ? gxm_shader(fsrc, 1) : NULL; if (!*vg || (fsrc && !*fg)) return -1;
    if (sceGxmShaderPatcherRegisterProgram(gxm_patcher(), *vg, vid) < 0) return -1;
    if (fsrc && sceGxmShaderPatcherRegisterProgram(gxm_patcher(), *fg, fid) < 0) return -1;
    return 0; }
int gfx_init(void){
    /* 1x = 480x272 (the PSP), 2x = 960x544 (the Vita screen), 3x = 1440x816 (supersampled down to the screen).  At 3x a surface keeps
     * the 272 rows of a PSP screen instead of 512, so ten of them fit the video memory (as the GL back end) */
    RS_S = rs_setting_int("RS_RES_SCALE", 2); if (RS_S < 1) RS_S = 1; if (RS_S > 3) RS_S = 3;
    SURF_H = RS_S >= 3 ? 272 : 512;
    use_fxaa = rs_setting_int("RS_FXAA", 1);
    SceGxmRenderTargetParams rp; memset(&rp, 0, sizeof rp); rp.width = PX; rp.height = PXH; rp.scenesPerFrame = 16; rp.multisampleMode = SCE_GXM_MULTISAMPLE_NONE; rp.driverMemBlock = -1;
    {   int e = sceGxmCreateRenderTarget(&rp, &srt);                  /* short of memory: fewer scenes per frame need less driver memory */
        while (e < 0 && rp.scenesPerFrame > 4) { fprintf(stderr, "[GXM] render target with %d scenes per frame failed (%08x)\n", rp.scenesPerFrame, (unsigned)e);
            rp.scenesPerFrame /= 2; e = sceGxmCreateRenderTarget(&rp, &srt); }
        if (e < 0) { fprintf(stderr, "[GXM] cannot create the render target (%dx%d): %08x\n", PX, PXH, (unsigned)e); return -1; }
        rt_scenes = (int)rp.scenesPerFrame; }
    unsigned dw = ALIGN(PX, SCE_GXM_TILE_SIZEX), dh = ALIGN(PXH, SCE_GXM_TILE_SIZEY);
    void *dmem = gxm_alloc((size_t)dw * dh * 4, SCE_GXM_DEPTHSTENCIL_SURFACE_ALIGNMENT, 1); if (!dmem) { fprintf(stderr, "[GXM] out of video memory (depth buffer)\n"); return -1; }
    sceGxmDepthStencilSurfaceInit(&sds, SCE_GXM_DEPTH_STENCIL_FORMAT_S8D24, SCE_GXM_DEPTH_STENCIL_SURFACE_TILED, dw, dmem, NULL);
    sceGxmDepthStencilSurfaceSetForceLoadMode(&sds, SCE_GXM_DEPTH_STENCIL_FORCE_LOAD_ENABLED);
    sceGxmDepthStencilSurfaceSetForceStoreMode(&sds, SCE_GXM_DEPTH_STENCIL_FORCE_STORE_ENABLED);
    for (int i = 0; i < SURF_N; i++) surf_mem(&surfs[i]);            /* render surfaces first, so they get the video RAM (the texture pool may not) */
    pool_init((u32)rs_setting_int("RS_TEX_POOL_MB", 48) << 20);
    { u32 w1[64]; for (int i = 0; i < 64; i++) w1[i] = 0xFFFFFFFFu; if (gxm_tex_rgba(&white_gt, w1, 8, 8, 0)) return -1; }
    lin_idx = gxm_alloc(65536 * 2, 16, 0); if (!lin_idx) return -1; for (int i = 0; i < 65536; i++) lin_idx[i] = (u16)i;
    /* main fragment shader + the CPU-vertex program */
    SceGxmShaderPatcherId vid;
    if (prog_pair(VS_SRC, FS_SRC, &cpu_vp.gxp, &fs_gxp, &vid, &fs_id)) { fprintf(stderr, "[GXM] base shaders: %s\n", gxm_error()); return -1; }
    fu_cfg0g = sceGxmProgramFindParameterByName(fs_gxp, "uCfg0"); fu_cfg1g = sceGxmProgramFindParameterByName(fs_gxp, "uCfg1"); fu_envg = sceGxmProgramFindParameterByName(fs_gxp, "uEnv");
    fu_fogg = sceGxmProgramFindParameterByName(fs_gxp, "uFog"); fu_mulg = sceGxmProgramFindParameterByName(fs_gxp, "uMul");
    /* the anisotropic variant of the fragment program (a failure leaves trilinear filtering) */
    if (rs_aniso_level() > 1) {
        static char src[8192]; const char *body = strstr(FS_SRC, "float4 main(");
        if (body && strlen(FS_SRC) + 2048 < sizeof src) {
            size_t pre = (size_t)(body - FS_SRC); memcpy(src, FS_SRC, pre); src[pre] = 0; strcat(src, RS_ANISO_CG); strcat(src, body);
            char *u = strstr(src, "uniform float4 uMul)"), *tx = strstr(src, "tex2D(uTex, vUV)");
            if (u && tx) {
                static char out[8192]; char *o = out; const char *r = src;
                /* in order of appearance: the uniform list first, then the sample */
                memcpy(o, r, (size_t)(u - r)); o += u - r; o += sprintf(o, "uniform float4 uMul, uniform float4 uAniso)"); r = u + strlen("uniform float4 uMul)");
                memcpy(o, r, (size_t)(tx - r)); o += tx - r; o += sprintf(o, "afTex(uTex, vUV, uAniso)"); r = tx + strlen("tex2D(uTex, vUV)");
                strcpy(o, r);
                fs_af.gxp = gxm_shader(out, 1);
                if (fs_af.gxp && sceGxmShaderPatcherRegisterProgram(gxm_patcher(), fs_af.gxp, &fs_af.id) >= 0) {
                    const SceGxmProgram *g = fs_af.gxp; af_ok = 1;
                    fs_af.cfg0 = sceGxmProgramFindParameterByName(g, "uCfg0"); fs_af.cfg1 = sceGxmProgramFindParameterByName(g, "uCfg1"); fs_af.env = sceGxmProgramFindParameterByName(g, "uEnv");
                    fs_af.fog = sceGxmProgramFindParameterByName(g, "uFog"); fs_af.mul = sceGxmProgramFindParameterByName(g, "uMul"); fs_af.aniso = sceGxmProgramFindParameterByName(g, "uAniso"); }
                else fprintf(stderr, "[GXM] anisotropic filtering shader unavailable (%s): trilinear filtering instead\n", gxm_error()); } } }
    { SceGxmVertexAttribute at[4]; int na = 0, r; static const char *nm[4] = {"aPos", "aUV", "aCol", "aFog"}; static const int off[4] = {0, 16, 24, 40}, cnt[4] = {4, 2, 4, 1};
      for (int i = 0; i < 4; i++) if ((r = reg_of(cpu_vp.gxp, nm[i])) >= 0) { at[na] = (SceGxmVertexAttribute){0, (unsigned short)off[i], SCE_GXM_ATTRIBUTE_FORMAT_F32, (unsigned char)cnt[i], (unsigned short)r}; na++; }
      SceGxmVertexStream st = {sizeof(gfx_vtx_t), SCE_GXM_INDEX_SOURCE_INDEX_16BIT};
      if (sceGxmShaderPatcherCreateVertexProgram(gxm_patcher(), vid, at, (unsigned)na, &st, 1, &cpu_vp.vp) < 0) return -1;
      for (int i = 0; i < U_NV; i++) cpu_vp.u[i] = sceGxmProgramFindParameterByName(cpu_vp.gxp, U_NAMES[i]); cpu_vp.state = 1; }
    /* clears */
    { SceGxmShaderPatcherId cv; const SceGxmProgram *fg; if (prog_pair(CLR_VS, CLR_FS, &clr_vgxp, &fg, &cv, &clr_fid)) return -1; clr_fgxp = fg;
      int r = reg_of(clr_vgxp, "aPos"); SceGxmVertexAttribute at = {0, 0, SCE_GXM_ATTRIBUTE_FORMAT_F32, 2, (unsigned short)(r < 0 ? 0 : r)}; SceGxmVertexStream st = {8, SCE_GXM_INDEX_SOURCE_INDEX_16BIT};
      if (sceGxmShaderPatcherCreateVertexProgram(gxm_patcher(), cv, &at, 1, &st, 1, &clr_vp) < 0) return -1;
      clr_uz = sceGxmProgramFindParameterByName(clr_vgxp, "uZ"); clr_ucol = sceGxmProgramFindParameterByName(clr_fgxp, "uCol"); }
    /* copies between surfaces */
    { SceGxmShaderPatcherId bv, bf; const SceGxmProgram *fg; if (prog_pair(BLT_VS, BLT_FS, &blt_vgxp, &fg, &bv, &bf)) return -1;
      SceGxmVertexAttribute at[2] = {{0, 0, SCE_GXM_ATTRIBUTE_FORMAT_F32, 2, (unsigned short)reg_of(blt_vgxp, "aPos")}, {0, 8, SCE_GXM_ATTRIBUTE_FORMAT_F32, 2, (unsigned short)reg_of(blt_vgxp, "aUV")}};
      SceGxmVertexStream st = {16, SCE_GXM_INDEX_SOURCE_INDEX_16BIT};
      if (sceGxmShaderPatcherCreateVertexProgram(gxm_patcher(), bv, at, 2, &st, 1, &blt_vp) < 0) return -1;
      if (sceGxmShaderPatcherCreateFragmentProgram(gxm_patcher(), bf, SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4, SCE_GXM_MULTISAMPLE_NONE, NULL, blt_vgxp, &blt_fp) < 0) return -1; }
    /* FXAA present pass (a failure only turns it off) */
    { const SceGxmProgram *fg = gxm_shader(FXAA_FS, 1); SceGxmShaderPatcherId fid;
      if (fg && sceGxmShaderPatcherRegisterProgram(gxm_patcher(), fg, &fid) >= 0 &&
          sceGxmShaderPatcherCreateFragmentProgram(gxm_patcher(), fid, SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4, SCE_GXM_MULTISAMPLE_NONE, NULL, blt_vgxp, &fxaa_fp) >= 0)
          fxaa_texel = sceGxmProgramFindParameterByName(fg, "uTexel");
      else { fxaa_fp = NULL; fprintf(stderr, "[GXM] FXAA shader unavailable (%s): presenting without it\n", gxm_error()); } }
    fprintf(stderr, "[GXM] renderer ready: surfaces %dx%d (x%d: the PSP screen at %dx%d), FXAA %s, anisotropic filtering %s (x%d), texture pool %u MB\n", PX, PXH, RS_S, 480 * RS_S, 272 * RS_S,
            use_fxaa && fxaa_fp ? "on" : "off", rs_aniso_level() < 2 ? "off" : af_ok ? "on" : "trilinear only", rs_aniso_level(), pool_size >> 20);
    return 0; }
