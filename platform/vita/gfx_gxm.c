/* PS Vita renderer: native GXM back end for the GE command interpreter (platform/common/ge.c), implementing platform/common/gfx.h.
 *
 *  - Every PSP render target (frame buffers, render-to-texture buffers) is a 512 x SURF_H PSP-pixel (x RS_RES_SCALE) RGBA8 linear colour
 *    surface in CDRAM, keyed by its PSP address (SURF_H = 512, or 272 at the 2x-Vita supersampled scale, to fit CDRAM).  Memory row 0 = PSP
 *    row 0; the viewport maps clip y = -1 to row 0 and clip y = +1 to PSP row 512, so the clip-space vertices of the GE maths land the same
 *    way here.  A surface's memory is also bound as a linear texture (render-to-texture, frame-buffer reads).
 *  - 3D draws are native: the game's PSP vertex buffers go to the GPU as they are (copied into the vertex ring, never decoded), the vertex
 *    programs read the PSP vertex formats as GXM attributes (one program per PSP vertex type, built on first use and cached on ux0:) and
 *    do the GE transform, skinning and lighting; the PSP primitive (triangles, strips, fans) is drawn as it is.  Textures are uploaded in
 *    their PSP formats (565/5551/4444/8888, 4- and 8-bit CLUT as GXM paletted textures, DXT1/3/5 as BC1/2/3); only the PSP swizzle is
 *    undone (a block copy).  Through-mode (2D) draws, sprites and clears still go through ge.c's CPU path.
 *  - One SceGxmRenderTarget serves all surfaces (same size); one D24S8 depth/stencil surface is shared by all of them (as the PSP shares
 *    its depth buffer) and is force-loaded/stored, so switching surfaces in the middle of a frame keeps depth.  One scene per surface switch.
 *  - Programs: the same Shader Model 2.0 class Cg programs as the GL back end, compiled at start-up with the system Cg compiler
 *    (vitaShaRK, needs ur0:data/libshacccg.suprx).  Fragment programs are created per blend state (GXM bakes blending and the colour mask
 *    into the fragment program) and cached.  GXM has no constant blend colour: a fixed source factor is applied in the shader (exact), a
 *    fixed destination factor is approximated by ONE/ZERO (as the vitaGL path did).
 *  - Scissor: the PSP scissor is applied in the fragment program (window position test) when it is narrower than the 480x272 screen.
 *  - Memory the GPU reads (vertices, textures) is never overwritten while a submitted frame may still use it: vertices go to a ring buffer,
 *    textures to a pool whose frees are deferred, both released by fences (fragment notifications at the end of each presented frame).
 *  - All GXM calls run on ONE thread (the frontend thread); the game's threads hand work over with gfx_run().
 * Not implemented (as in the GL back end): colour test, logic ops, mipmaps, texgen, specular, points/lines; mod textures, PBR and real-time
 * shadows are not part of this back end (set aside for now). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <malloc.h>
#include <pthread.h>
#include <psp2/gxm.h>
#include <psp2/display.h>
#include <psp2/kernel/sysmem.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include <vitashark.h>
#include <psp2/common_dialog.h>
#include <psp2/io/stat.h>
#include "gfx.h"

volatile unsigned rs_gfx_epoch = 1;
rs_perf_t rs_perf;
u64 rs_perf_us(void){ return sceKernelGetProcessTimeWide(); }
/* job hand-off, frame signalling: platform/common/gfx_jobs.c */

extern int rs_setting_int(const char *key, int def);
#define ALIGN(x, a) (((x) + ((a) - 1)) & ~((a) - 1))
#define LOGG(...) fprintf(stderr, "[GXM] " __VA_ARGS__)

/* ------------------------------------------------------------------ GPU memory */
static void *gpu_alloc(SceKernelMemBlockType type, unsigned size, SceGxmMemoryAttribFlags attr, SceUID *uid_out){
    unsigned sz = ALIGN(size, type == SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW ? 256 * 1024 : 4096);
    SceUID uid = sceKernelAllocMemBlock("rs_gpu", type, sz, NULL);
    if (uid < 0 && type == SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW) {         /* CDRAM full: main memory (slower for the GPU, still works) */
        type = SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE; sz = ALIGN(size, 4096); uid = sceKernelAllocMemBlock("rs_gpu", type, sz, NULL); }
    if (uid < 0) { LOGG("cannot allocate %u KB of GPU memory (0x%08X)\n", sz / 1024, (unsigned)uid); return NULL; }
    void *p = NULL; sceKernelGetMemBlockBase(uid, &p);
    if (sceGxmMapMemory(p, sz, attr) < 0) { LOGG("sceGxmMapMemory failed\n"); sceKernelFreeMemBlock(uid); return NULL; }
    if (uid_out) *uid_out = uid;
    return p; }
static void *usse_alloc(int fragment, unsigned size, unsigned *offset){
    unsigned sz = ALIGN(size, 4096); SceUID uid = sceKernelAllocMemBlock("rs_usse", SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, sz, NULL);
    if (uid < 0) return NULL; void *p = NULL; sceKernelGetMemBlockBase(uid, &p);
    int r = fragment ? sceGxmMapFragmentUsseMemory(p, sz, offset) : sceGxmMapVertexUsseMemory(p, sz, offset);
    if (r < 0) { sceKernelFreeMemBlock(uid); return NULL; }
    return p; }

/* ------------------------------------------------------------------ fences (frame notifications) */
static SceGxmContext *ctx; static SceGxmShaderPatcher *patcher;
static volatile unsigned int *notif;            /* GPU writes the id of the last completed fence here */
static unsigned fence_next = 1;                 /* id the next fence will carry; everything submitted since the last fence belongs to it */
static int fence_done(unsigned id){ return (int)(*notif - id) >= 0; }
static void fence_wait(unsigned id){ u64 t0 = rs_perf_us(); while (!fence_done(id)) { sceKernelDelayThread(200); if (rs_perf_us() - t0 > 2000000) { LOGG("fence %u timed out (GPU at %u)\n", id, *notif); break; } } }

/* ---- vertex/scratch ring buffer ---- */
static u8 *ring; static u32 ring_size, ring_head, ring_tail, ring_used;
typedef struct { unsigned id; u32 head, used; } rmark_t;
#define RMARK_N 64
static rmark_t rmark[RMARK_N]; static int rmark_r, rmark_w;
static void scene_fence_now(void);
static void ring_retire(int block){
    while (rmark_r != rmark_w) { rmark_t *m = &rmark[rmark_r % RMARK_N];
        if (!fence_done(m->id)) { if (!block) break; fence_wait(m->id); }
        ring_tail = m->head; ring_used -= m->used; rmark_r++; block = 0; } }
static u32 ring_cur_used;                       /* bytes allocated since the last mark */
static int no_fence;                            /* inside the display scene: allocations must not end the scene for a fence */
static void ring_mark(unsigned id){
    if (rmark_w - rmark_r >= RMARK_N) ring_retire(1);
    rmark[rmark_w % RMARK_N] = (rmark_t){id, ring_head, ring_cur_used}; rmark_w++; ring_cur_used = 0; }
static void *ring_alloc(u32 n){
    n = ALIGN(n, 16); if (n > ring_size / 2) return NULL;
    for (int tries = 0; tries < 4; tries++) {
        ring_retire(0);
        u32 pad = (ring_head + n > ring_size) ? ring_size - ring_head : 0;     /* skip the tail end of the buffer */
        if (ring_used + pad + n <= ring_size) {
            if (pad) { ring_head = 0; ring_used += pad; ring_cur_used += pad; }
            void *p = ring + ring_head; ring_head += n; if (ring_head == ring_size) ring_head = 0; ring_used += n; ring_cur_used += n; return p; }
        if (rmark_r != rmark_w) ring_retire(1);                                  /* wait for the oldest frame in flight */
        else if (!no_fence) scene_fence_now();                                   /* the current frame filled the ring: fence it */
        else break;
    }
    LOGG("vertex ring exhausted (%u bytes requested)\n", n); return NULL; }

/* ---- texture pool: first-fit allocator, frees deferred until the GPU is done ---- */
typedef struct { u32 off, size; } pblk_t;
static u8 *pool; static u32 pool_size; static pblk_t *pfree; static int pfree_n, pfree_cap;
typedef struct { u32 off, size; unsigned id; } pdefer_t;
static pdefer_t *pdef; static int pdef_n, pdef_cap;
static void pool_release(u32 off, u32 size){
    if (pfree_n + 1 > pfree_cap) { pfree_cap = pfree_cap ? pfree_cap * 2 : 256; pfree = realloc(pfree, sizeof *pfree * (size_t)pfree_cap); }
    int i = 0; while (i < pfree_n && pfree[i].off < off) i++;
    memmove(&pfree[i + 1], &pfree[i], sizeof *pfree * (size_t)(pfree_n - i)); pfree[i] = (pblk_t){off, size}; pfree_n++;
    if (i + 1 < pfree_n && pfree[i].off + pfree[i].size == pfree[i + 1].off) { pfree[i].size += pfree[i + 1].size; memmove(&pfree[i + 1], &pfree[i + 2], sizeof *pfree * (size_t)(pfree_n - i - 2)); pfree_n--; }
    if (i > 0 && pfree[i - 1].off + pfree[i - 1].size == pfree[i].off) { pfree[i - 1].size += pfree[i].size; memmove(&pfree[i], &pfree[i + 1], sizeof *pfree * (size_t)(pfree_n - i - 1)); pfree_n--; } }
static void pool_collect(void){ int k = 0; for (int i = 0; i < pdef_n; i++) { if (fence_done(pdef[i].id)) pool_release(pdef[i].off, pdef[i].size); else pdef[k++] = pdef[i]; } pdef_n = k; }
static void pool_free_later(u8 *p, u32 size){
    if (!p) return; if (pdef_n + 1 > pdef_cap) { pdef_cap = pdef_cap ? pdef_cap * 2 : 256; pdef = realloc(pdef, sizeof *pdef * (size_t)pdef_cap); }
    pdef[pdef_n++] = (pdefer_t){(u32)(p - pool), size, fence_next}; }
static u8 *pool_try(u32 size){
    size = ALIGN(size, 256);
    for (int i = 0; i < pfree_n; i++) if (pfree[i].size >= size) { u32 o = pfree[i].off; pfree[i].off += size; pfree[i].size -= size;
        if (!pfree[i].size) { memmove(&pfree[i], &pfree[i + 1], sizeof *pfree * (size_t)(pfree_n - i - 1)); pfree_n--; } return pool + o; }
    return NULL; }

/* ------------------------------------------------------------------ shaders (Cg, compiled at start-up) */
static const char *VS_MAIN =
    "void main(float4 aPos, float2 aUV, float4 aCol, float aFog, uniform float4 uUVS,\n"
    "          float4 out vPos : POSITION, float2 out vUV : TEXCOORD0, float4 out vCol : TEXCOORD1, float out vFog : TEXCOORD2, float out vCull : TEXCOORD3)\n"
    "{ vPos = aPos; vUV = float2(aUV.x * uUVS.x + uUVS.w, aUV.y * uUVS.y + uUVS.z); vCol = aCol; vFog = aFog; vCull = 0.0; }\n";
static const char *FS_MAIN =
    "float4 main(float2 vUV : TEXCOORD0, float4 vCol : TEXCOORD1, float vFog : TEXCOORD2, float vCull : TEXCOORD3, float4 wPos : WPOS,\n"
    "            uniform sampler2D uTex, uniform float4 uCfg0, uniform float4 uCfg1, uniform float4 uEnv, uniform float4 uFog, uniform float4 uMul, uniform float4 uScis) : COLOR\n"
    "{\n"
    "  if (vCull > 0.0) discard;\n"
    "  if (uScis.x >= 0.0) { if (wPos.x < uScis.x || wPos.y < uScis.y || wPos.x > uScis.z || wPos.y > uScis.w) discard; }\n"
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
/* hardware transform & lighting (the GE's T&L on the GPU), same maths as the GL back end's HWVS_BODY without the shadow/PBR outputs */
static const char *HWVS_SRC =
    "uniform float4 uMVP[4]; uniform float4 uWVZ; uniform float4 uWld[3]; uniform float4 uB[24];\n"
    "uniform float4 uVP0; uniform float4 uVP1; uniform float4 uVP2; uniform float4 uUVT; uniform float4 uUVS; uniform float4 uFogP;\n"
    "uniform float4 uMAmb; uniform float4 uMDif; uniform float4 uMEmi; uniform float4 uMSca; uniform float4 uLFl;\n"
    "uniform float4 uLPos[4]; uniform float4 uLAtt[4]; uniform float4 uLSpot[4]; uniform float4 uLA[4]; uniform float4 uLD[4];\n"
    "#define BONE(i, wt) p += (wt) * float3(dot(p4, uB[i * 3]), dot(p4, uB[i * 3 + 1]), dot(p4, uB[i * 3 + 2])); n += (wt) * float3(dot(n4, uB[i * 3]), dot(n4, uB[i * 3 + 1]), dot(n4, uB[i * 3 + 2]));\n"
    "#define LIGHT(i, ih) if (uLFl.z > ih) { float3 L = uLPos[i].xyz; float att = 1.0; if (uLPos[i].w > 0.5) { L = uLPos[i].xyz - wp; float d = length(L); if (d > 0.000001) L = L / d;"
    " float den = uLAtt[i].x + uLAtt[i].y * d + uLAtt[i].z * d * d; att = (den > 0.000001) ? min(1.0 / den, 1.0) : 1.0;"
    " if (uLPos[i].w > 1.5) { float cs = -dot(L, uLSpot[i].xyz); if (cs < uLSpot[i].w) att = 0.0; else if (uLAtt[i].w > 0.0) att = att * pow(max(cs, 0.0), uLAtt[i].w); } }"
    " float ndl = max(dot(wn, L), 0.0); col += (uLA[i].rgb * amb + ndl * uLD[i].rgb * dif) * att; }\n"
    "void main(float3 aP, float3 aN, float2 aT, float4 aC, float4 aW0, float4 aW1,\n"
    "          float4 out vPos : POSITION, float2 out vUV : TEXCOORD0, float4 out vCol : TEXCOORD1, float out vFog : TEXCOORD2, float out vCull : TEXCOORD3)\n"
    "{\n"
    "  float3 p = aP; float3 n = aN;\n"
    "#ifdef SKIN\n"
    "  float4 p4 = float4(aP, 1.0); float4 n4 = float4(aN, 0.0); p = float3(0.0, 0.0, 0.0); n = float3(0.0, 0.0, 0.0);\n"
    "  BONE(0, aW0.x) BONE(1, aW0.y) BONE(2, aW0.z) BONE(3, aW0.w) BONE(4, aW1.x) BONE(5, aW1.y) BONE(6, aW1.z) BONE(7, aW1.w)\n"
    "#endif\n"
    "  float4 q = float4(p, 1.0);\n"
    "  float4 cl = float4(dot(q, uMVP[0]), dot(q, uMVP[1]), dot(q, uMVP[2]), dot(q, uMVP[3])); float w = cl.w;\n"
    "  vPos = float4((cl.x * uVP0.x + uVP1.x * w) * (2.0 / 512.0) - w, (cl.y * uVP0.y + uVP1.y * w) * (2.0 / 512.0) - w, (cl.z * uVP0.z + uVP1.z * w) * (2.0 / 65535.0) - w, w);\n"
    "  float iw = (abs(w) > 0.000001) ? 1.0 / w : 0.0;\n"
    "  float sx = cl.x * iw * uVP0.x + uVP1.x + uVP2.x, sy = cl.y * iw * uVP0.y + uVP1.y + uVP2.y, sz = cl.z * iw * uVP0.z + uVP1.z;\n"
    "  float inz = (w > 0.0 && sz >= 0.0 && sz <= 65535.0) ? 1.0 : 0.0;\n"
    "  float xyout = (sx >= 0.0 && sx < 4096.0 && sy >= 0.0 && sy < 4096.0) ? 0.0 : 1.0;\n"
    "  vCull = ((uVP2.z < 0.5 && inz < 0.5) || ((inz > 0.5 || uVP2.z < 0.5) && xyout > 0.5)) ? 1.0 : 0.0;\n"
    "  vFog = 1.0; if (uFogP.z > 0.5) vFog = clamp((dot(q, uWVZ) + uFogP.x) * uFogP.y, 0.0, 1.0);\n"
    "  float2 uv = float2(aT.x * uUVT.x + uUVT.z, aT.y * uUVT.y + uUVT.w); vUV = float2(uv.x * uUVS.x + uUVS.w, uv.y * uUVS.y + uUVS.z);\n"
    "  vCol = aC;\n"
    "#ifdef LIT\n"
    "  float3 wp = float3(dot(q, uWld[0]), dot(q, uWld[1]), dot(q, uWld[2]));\n"
    "  float4 nn = float4(n, 0.0); float3 wn = float3(dot(nn, uWld[0]), dot(nn, uWld[1]), dot(nn, uWld[2])); float ln = length(wn); if (ln > 0.0000001) wn = wn / ln;\n"
    "  float3 amb = (uLFl.x > 0.5) ? aC.rgb : uMAmb.rgb; float aa = (uLFl.x > 0.5) ? aC.a : uMAmb.a; float3 dif = (uLFl.y > 0.5) ? aC.rgb : uMDif.rgb;\n"
    "  float3 col = uMEmi.rgb + uMSca.rgb * amb;\n"
    "  LIGHT(0, 0.5) LIGHT(1, 1.5) LIGHT(2, 2.5) LIGHT(3, 3.5)\n"
    "  vCol = float4(clamp(col, float3(0.0, 0.0, 0.0), float3(1.0, 1.0, 1.0)), clamp(aa, 0.0, 1.0));\n"
    "#endif\n"
    "}\n";
static const char *FILLVS_SRC = "void main(float3 aPos, float4 out vPos : POSITION) { vPos = float4(aPos, 1.0); }\n";
static const char *FILLFS_SRC = "float4 main(uniform float4 uCol) : COLOR { return uCol; }\n";
static const char *PVS_SRC = "void main(float2 aPos, float2 aUV, float4 out vPos : POSITION, float2 out vUV : TEXCOORD0) { vPos = float4(aPos, 0.5, 1.0); vUV = aUV; }\n";
static const char *PFS_SRC = "float4 main(float2 vUV : TEXCOORD0, uniform sampler2D uTex) : COLOR { return float4(tex2D(uTex, vUV).rgb, 1.0); }\n";
static const char *CFS_SRC = "float4 main(float2 vUV : TEXCOORD0, uniform sampler2D uTex) : COLOR { return tex2D(uTex, vUV); }\n";
/* FXAA (the same filter as the GL back end) in the present pass.  uTexel: one display pixel in texture units (xy), clamp limits (zw). */
static const char *FFS_SRC =
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
static int use_fxaa; static float pres_texel[4];

static void shark_log(const char *msg, shark_log_level lvl, int line){ fprintf(stderr, "[GXM] shader compiler %s (line %d): %s\n", lvl == SHARK_LOG_ERROR ? "ERROR" : (lvl == SHARK_LOG_WARNING ? "warning" : "info"), line, msg); }
/* Compiled programs are kept in ux0:data/SWBFRS/shaders/<hash of the source>.gxp, so the Cg compiler runs once per program, not at
 * every start (the per-vertex-type programs are built during play, the first time a vertex type is drawn). */
#define SHADER_DIR "ux0:data/SWBFRS/shaders"
static u32 src_hash(const char *s, int fragment){ u32 h = 2166136261u ^ (u32)fragment; for (; *s; s++) h = (h ^ (u8)*s) * 16777619u; return h; }
static SceGxmProgram *cache_load(u32 h){
    char path[128]; snprintf(path, sizeof path, SHADER_DIR "/%08x.gxp", (unsigned)h); FILE *f = fopen(path, "rb"); if (!f) return NULL;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    SceGxmProgram *p = (n > 0 && n < (1 << 20)) ? malloc((size_t)n) : NULL;
    if (p && fread(p, 1, (size_t)n, f) != (size_t)n) { free(p); p = NULL; }
    fclose(f);
    if (p && (sceGxmProgramCheck(p) < 0 || sceGxmProgramGetSize(p) != (unsigned)n)) { free(p); p = NULL; }
    return p; }
static void cache_store(u32 h, const SceGxmProgram *p, unsigned n){
    static int dir; if (!dir) { sceIoMkdir(SHADER_DIR, 0777); dir = 1; }
    char path[128]; snprintf(path, sizeof path, SHADER_DIR "/%08x.gxp", (unsigned)h); FILE *f = fopen(path, "wb"); if (!f) return;
    fwrite(p, 1, n, f); fclose(f); }
static SceGxmProgram *compile(const char *src, int fragment, const char *what){
    u32 h = src_hash(src, fragment); SceGxmProgram *c = cache_load(h); if (c) return c;
    u64 t0 = rs_perf_us();
    uint32_t sz = 0; SceGxmProgram *p = shark_compile_shader_extended(src, &sz, fragment ? SHARK_FRAGMENT_SHADER : SHARK_VERTEX_SHADER, SHARK_OPT_DEFAULT, SHARK_DISABLE, SHARK_DISABLE, SHARK_DISABLE);
    if (!p || !sz) { LOGG("%s %s shader: compile FAILED\n", what, fragment ? "fragment" : "vertex"); shark_clear_output(); return NULL; }
    c = malloc(sz); memcpy(c, p, sz); shark_clear_output();
    LOGG("compiled %s %s program (%u bytes, %.1f ms)\n", what, fragment ? "fragment" : "vertex", (unsigned)sz, (rs_perf_us() - t0) / 1000.0);
    cache_store(h, c, sz); return c; }

/* a vertex program + its uniform parameters (looked up by name) */
typedef struct { SceGxmProgram *gxp; SceGxmShaderPatcherId id; SceGxmVertexProgram *vp;
                 const SceGxmProgramParameter *mvp, *wvz, *wld, *b, *vp0, *vp1, *vp2, *uvt, *uvs, *fogp, *mamb, *mdif, *memi, *msca, *lfl, *lpos, *latt, *lspot, *la, *ld, *defc; } vprog_t;
typedef struct { SceGxmProgram *gxp; SceGxmShaderPatcherId id; int tex_unit;
                 const SceGxmProgramParameter *cfg0, *cfg1, *env, *fog, *mul, *scis, *col, *texel; } fprog_t;
enum { VP_MAIN, VP_HW0, VP_HW1, VP_HW2, VP_HW3, VP_FILL, VP_PRES, VP_N };
enum { FP_MAIN, FP_FILL, FP_PRES, FP_COPY, FP_FXAA, FP_N };
static vprog_t VP[VP_N]; static fprog_t FP[FP_N]; static int hw_ok;
int gfx_hw_ok(void){ return hw_ok; }

#define PARAM(prog, n) sceGxmProgramFindParameterByName((prog), (n))
static int make_vprog_f(vprog_t *v, const char *src, const char *what, const char *const *names, const u8 *ncomp, const u16 *offs, const SceGxmAttributeFormat *fmts, int nattr, int stride){
    v->gxp = compile(src, 0, what); if (!v->gxp) return 0;
    if (sceGxmShaderPatcherRegisterProgram(patcher, v->gxp, &v->id) < 0) { LOGG("%s: register failed\n", what); return 0; }
    SceGxmVertexAttribute at[8]; int na = 0;
    for (int i = 0; i < nattr; i++) { const SceGxmProgramParameter *pp = PARAM(v->gxp, names[i]); if (!pp) continue;    /* unused input (optimised out) */
        at[na].streamIndex = 0; at[na].offset = offs[i]; at[na].format = fmts ? fmts[i] : SCE_GXM_ATTRIBUTE_FORMAT_F32; at[na].componentCount = ncomp[i];
        at[na].regIndex = (u16)sceGxmProgramParameterGetResourceIndex(pp); na++; }
    SceGxmVertexStream st = {(uint16_t)stride, SCE_GXM_INDEX_SOURCE_INDEX_16BIT};
    int r = sceGxmShaderPatcherCreateVertexProgram(patcher, v->id, at, (unsigned)na, &st, 1, &v->vp);
    if (r < 0) { LOGG("%s: vertex program creation failed (0x%08X)\n", what, (unsigned)r); return 0; }
    const SceGxmProgram *g = v->gxp;
    v->mvp = PARAM(g, "uMVP"); v->wvz = PARAM(g, "uWVZ"); v->wld = PARAM(g, "uWld"); v->b = PARAM(g, "uB"); v->vp0 = PARAM(g, "uVP0"); v->vp1 = PARAM(g, "uVP1");
    v->vp2 = PARAM(g, "uVP2"); v->uvt = PARAM(g, "uUVT"); v->uvs = PARAM(g, "uUVS"); v->fogp = PARAM(g, "uFogP"); v->mamb = PARAM(g, "uMAmb"); v->mdif = PARAM(g, "uMDif");
    v->memi = PARAM(g, "uMEmi"); v->msca = PARAM(g, "uMSca"); v->lfl = PARAM(g, "uLFl"); v->lpos = PARAM(g, "uLPos"); v->latt = PARAM(g, "uLAtt"); v->lspot = PARAM(g, "uLSpot");
    v->la = PARAM(g, "uLA"); v->ld = PARAM(g, "uLD"); v->defc = PARAM(g, "uDefC");
    return 1; }
static int make_vprog(vprog_t *v, const char *src, const char *what, const char *const *names, const u8 *ncomp, const u16 *offs, int nattr, int stride){
    return make_vprog_f(v, src, what, names, ncomp, offs, NULL, nattr, stride); }
static int make_fprog(fprog_t *f, const char *src, const char *what){
    f->gxp = compile(src, 1, what); if (!f->gxp) return 0;
    if (sceGxmShaderPatcherRegisterProgram(patcher, f->gxp, &f->id) < 0) { LOGG("%s: register failed\n", what); return 0; }
    const SceGxmProgram *g = f->gxp; const SceGxmProgramParameter *t = PARAM(g, "uTex"); f->tex_unit = t ? (int)sceGxmProgramParameterGetResourceIndex(t) : -1;
    f->cfg0 = PARAM(g, "uCfg0"); f->cfg1 = PARAM(g, "uCfg1"); f->env = PARAM(g, "uEnv"); f->fog = PARAM(g, "uFog"); f->mul = PARAM(g, "uMul"); f->scis = PARAM(g, "uScis"); f->col = PARAM(g, "uCol"); f->texel = PARAM(g, "uTexel");
    return 1; }

/* fragment programs per (fragment source, vertex program, blend state) */
typedef struct { u32 blend; u8 f; const SceGxmProgram *v; SceGxmFragmentProgram *fp; } fpent_t;
#define FPC_N 1024
static fpent_t fpc[FPC_N]; static int fpc_n;
static SceGxmFragmentProgram *get_fp(int f, const SceGxmProgram *v, const SceGxmBlendInfo *bi){
    u32 b; memcpy(&b, bi, 4); u32 key = b ^ ((u32)f * 0x9E3779B1u) ^ ((u32)(uintptr_t)v * 0x85EBCA77u);
    u32 h = (key ^ (key >> 15) ^ (key >> 7)) & (FPC_N - 1);
    for (int i = 0; i < FPC_N; i++) { fpent_t *e = &fpc[(h + i) & (FPC_N - 1)];
        if (!e->fp) {
            if (fpc_n >= FPC_N - 8) return NULL;
            SceGxmFragmentProgram *fp = NULL;
            int r = sceGxmShaderPatcherCreateFragmentProgram(patcher, FP[f].id, SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4, SCE_GXM_MULTISAMPLE_NONE, bi, v, &fp);
            if (r < 0) { LOGG("fragment program (prog %d, blend %08x) failed (0x%08X)\n", f, b, (unsigned)r); return NULL; }
            e->blend = b; e->f = (u8)f; e->v = v; e->fp = fp; fpc_n++; return fp; }
        if (e->blend == b && e->f == f && e->v == v) return e->fp; }
    return NULL; }

/* ------------------------------------------------------------------ surfaces (render targets) */
#define SURF_N 12
#define SZ 512                                  /* PSP pixels across a surface */
static int RS_S = 1, SURF_H = 512;                  /* internal resolution scale; PSP rows per surface */
#define PXW (SZ * RS_S)
#define PXH (SURF_H * RS_S)
typedef struct { u32 addr; int stride, psz, fmt, used, drawn; unsigned stamp; u8 *data; SceGxmColorSurface cs; SceGxmTexture tex; } surf_t;
static surf_t surfs[SURF_N]; static unsigned surf_stamp; static surf_t *cur_target; static int in_scene;
static SceGxmRenderTarget *rt_surf, *rt_disp; static SceGxmDepthStencilSurface depth_surf;
static u32 disp_addr, disp_stride = 512, disp_fmt;
static unsigned st_draws, st_batches, st_tris, st_texup, st_clears, st_scenes;
static int cull_flip;
static u16 *idx_buf;                            /* 0, 1, 2, ... (non-indexed draws) */
#define MAXV 63000                              /* vertices per draw call (16-bit indices must stay below 64000) */

/* display */
#define DISP_W 960
#define DISP_H 544
#define DISP_N 3
typedef struct { void *addr; } disp_cb_t;
static void *disp_depth;                       /* depth buffer for system dialogs drawn over the display (sceCommonDialogUpdate) */
static void *disp_mem[DISP_N]; static SceGxmColorSurface disp_cs[DISP_N]; static SceGxmSyncObject *disp_sync[DISP_N]; static int disp_back, disp_front;
static int vsync_on = 1;
static void display_cb(const void *data){
    const disp_cb_t *d = data; SceDisplayFrameBuf fb; memset(&fb, 0, sizeof fb);
    fb.size = sizeof fb; fb.base = d->addr; fb.pitch = DISP_W; fb.pixelformat = SCE_DISPLAY_PIXELFORMAT_A8B8G8R8; fb.width = DISP_W; fb.height = DISP_H;
    sceDisplaySetFrameBuf(&fb, SCE_DISPLAY_SETBUF_NEXTFRAME);
    if (vsync_on) sceDisplayWaitVblankStart(); }

static u32 akey(u32 a){ return gfx_vram(a) & 0x0FFFFFFFu; }
static void flush_batch(void);
static void end_scene(const SceGxmNotification *n){
    if (!in_scene) return;
    sceGxmEndScene(ctx, NULL, n); in_scene = 0; cur_target = NULL; }
static void begin_scene(surf_t *s){
    sceGxmBeginScene(ctx, 0, rt_surf, NULL, NULL, NULL, &s->cs, &depth_surf); in_scene = 1; cur_target = s; st_scenes++;
    sceGxmSetViewport(ctx, PXW * 0.5f, PXW * 0.5f, PXW * 0.5f, PXW * 0.5f, 0.5f, 0.5f);      /* 512 PSP pixels across both axes (y may run past the surface) */
    sceGxmSetRegionClip(ctx, SCE_GXM_REGION_CLIP_OUTSIDE, 0, 0, PXW - 1, PXH - 1); }
static void bind(surf_t *s){ if (cur_target == s && in_scene) return; end_scene(NULL); begin_scene(s); }
/* fence: end the current scene with a notification (the GPU writes fence_next when it is done), restart it if one was open */
static void fence_emit(void){
    unsigned id = fence_next++; SceGxmNotification n = {notif, id};
    surf_t *was = in_scene ? cur_target : NULL;
    if (!was) { /* no open scene to carry the notification: an empty one on the first surface */
        surf_t *s = NULL; for (int i = 0; i < SURF_N; i++) if (surfs[i].used) { s = &surfs[i]; break; }
        if (!s) { *notif = id; ring_mark(id); return; }
        begin_scene(s); end_scene(&n); }
    else end_scene(&n);
    ring_mark(id);
    if (was) begin_scene(was); }
static void scene_fence_now(void){ fence_emit(); }

static void draw_clear_quad(surf_t *t, float x0, float y0, float x1, float y1, float z, const float rgba[4], int cmask, int depth_write, int sten, int sval);
static surf_t *surf_find(u32 addr){ addr = akey(addr); for (int i = 0; i < SURF_N; i++) if (surfs[i].used && surfs[i].addr == addr) return &surfs[i]; return 0; }
static surf_t *surf_create(u32 addr, int fmt, int stride){
    addr = akey(addr); surf_t *s = 0, *old = &surfs[0];
    for (int i = 0; i < SURF_N; i++) { if (!surfs[i].used) { s = &surfs[i]; break; } if (surfs[i].stamp < old->stamp) old = &surfs[i]; }
    if (!s) { s = old; if (cur_target == s) end_scene(NULL); }
    if (!s->data) {
        s->data = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, (unsigned)(PXW * PXH * 4), SCE_GXM_MEMORY_ATTRIB_RW, NULL);
        if (!s->data) return NULL;
        sceGxmColorSurfaceInit(&s->cs, SCE_GXM_COLOR_FORMAT_U8U8U8U8_ABGR, SCE_GXM_COLOR_SURFACE_LINEAR, SCE_GXM_COLOR_SURFACE_SCALE_NONE, SCE_GXM_OUTPUT_REGISTER_SIZE_32BIT, PXW, PXH, PXW, s->data);
        sceGxmTextureInitLinear(&s->tex, s->data, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, PXW, PXH, 0); }
    s->used = 1; s->addr = addr; s->fmt = fmt; s->stride = stride ? stride : 512; s->psz = fmt == 3 ? 4 : 2; s->drawn = 0; s->stamp = ++surf_stamp;
    { static const float black[4] = {0, 0, 0, 1}; bind(s); draw_clear_quad(s, 0, 0, SZ, SZ, 1.0f, black, SCE_GXM_COLOR_MASK_ALL, 1, 1, 0); }
    return s; }
static surf_t *surf_for_addr(u32 a, int *y0, int *x0){
    a = akey(a);
    for (int i = 0; i < SURF_N; i++) { surf_t *s = &surfs[i]; if (!s->used || !s->drawn || a < s->addr) continue;
        u32 off = a - s->addr, rowb = (u32)(s->stride * s->psz); if (off >= rowb * 272u || (off % rowb) % (u32)s->psz) continue;
        *y0 = (int)(off / rowb); *x0 = (int)((off % rowb) / (u32)s->psz); return s; }
    return 0; }
static surf_t *target_for(const gfx_state_t *s){
    surf_t *t = surf_find(s->fbaddr); if (!t) t = surf_create(s->fbaddr, s->fbfmt, s->fbstride); if (!t) return NULL;
    t->stamp = ++surf_stamp; t->drawn = 1; t->fmt = s->fbfmt; t->psz = s->fbfmt == 3 ? 4 : 2; if (s->fbstride) t->stride = s->fbstride; return t; }

/* ------------------------------------------------------------------ texture cache */
#define TC_N 256
typedef struct { gtex_key_t k; u32 hash; unsigned epoch, stamp; long bytes; int used; u8 *mem; SceGxmTexture tex; } tent_t;
static tent_t tc[TC_N]; static unsigned tc_stamp; static u32 *scratch; static long tc_bytes;
void gfx_tex_maps(unsigned *mr, unsigned *nrm, int *hd){ *mr = 0; *nrm = 0; *hd = 0; }
static void tent_free(tent_t *e){ if (!e->used) return; pool_free_later(e->mem, (u32)e->bytes); tc_bytes -= e->bytes; memset(e, 0, sizeof *e); }
/* texture ids handed to ge.c: 1..TC_N = cache entry, 0x1000 + i = surface i */
#define TID_SURF 0x1000
static const SceGxmTexture *tex_of(unsigned id){
    if (id >= TID_SURF && id < TID_SURF + SURF_N) return surfs[id - TID_SURF].data ? &surfs[id - TID_SURF].tex : NULL;
    if (id >= 1 && id <= TC_N && tc[id - 1].used) return &tc[id - 1].tex;
    return NULL; }
static u8 *tex_mem(long bytes){
    u8 *m = pool_try((u32)bytes); if (m) return m;
    pool_collect(); m = pool_try((u32)bytes); if (m) return m;
    for (;;) { tent_t *v = 0; for (int i = 0; i < TC_N; i++) if (tc[i].used && tc[i].epoch != rs_gfx_epoch && (!v || tc[i].stamp < v->stamp)) v = &tc[i];   /* least recently used, not in this frame */
        if (!v) break; tent_free(v); pool_collect(); m = pool_try((u32)bytes); if (m) return m; }
    flush_batch(); fence_emit(); fence_wait(fence_next - 1); pool_collect(); m = pool_try((u32)bytes); if (m) return m;
    LOGG("texture pool full (%ld KB requested)\n", bytes / 1024); return NULL; }

/* ---- native texture upload: the PSP texel data in a GXM format that reads it as it is ----
 * 565 / 5551 / 4444 / 8888 have the same bit layout in GXM's U5U6U5_BGR / U1U5U5U5_ABGR / U4U4U4U4_ABGR / U8U8U8U8_ABGR (red in the
 * low bits).  4- and 8-bit CLUT textures become P4 / P8 textures with the CLUT as their palette (P4: first texel in the low nibble, as
 * on the PSP).  DXT1/3/5 become BC1/2/3: same blocks, but the PSP stores the 565 end-point colours with red in the low bits, standard BC
 * with red in the high bits, so each block's two end points get red and blue exchanged (DXT1: and the end points are put back in the
 * order that keeps the block's 3- or 4-colour mode); BC textures are block-swizzled (GXM's layout).  The PSP's own swizzle (16-byte x
 * 8-row tiles) is undone by copying those tiles.  Returns 1 done, 0 format not handled here, -1 no memory. */
static u32 part1by1(u32 x){ x &= 0xFFFF; x = (x ^ (x << 8)) & 0x00FF00FF; x = (x ^ (x << 4)) & 0x0F0F0F0F; x = (x ^ (x << 2)) & 0x33333333; x = (x ^ (x << 1)) & 0x55555555; return x; }
static u16 rb_swap(u16 v){ return (u16)((v & 0x07E0u) | (v >> 11) | ((v & 31u) << 11)); }
static void bc_color_fix(u8 *cb, int dxt1){
    u16 c0, c1; u32 ix; memcpy(&c0, cb, 2); memcpy(&c1, cb + 2, 2); memcpy(&ix, cb + 4, 4);
    u16 a = rb_swap(c0), b = rb_swap(c1);
    if (dxt1 && ((c0 > c1) != (a > b))) { u16 t = a; a = b; b = t;
        if (c0 > c1) ix ^= 0x55555555u;                                  /* 4-colour block: 0<->1, 2<->3 */
        else ix ^= (~ix >> 1) & 0x55555555u; }                          /* 3-colour block: 0<->1; 2 (middle) and 3 (transparent) stay */
    memcpy(cb, &a, 2); memcpy(cb + 2, &b, 2); memcpy(cb + 4, &ix, 4); }
static int tex_native(tent_t *e, const gtex_key_t *k){
    int f = k->fmt, w = k->w, h = k->h, bw = k->bufw > 0 ? k->bufw : k->w;
    size_t base = GADDR(gfx_vram(k->addr)); if (base >= GMEM_SIZE) return 0;
    const u8 *src = g_mem + base; size_t avail = GMEM_SIZE - base;
    if (f >= 8 && f <= 10) {
        if (w < 4 || h < 4) return 0;
        int bsz = f == 8 ? 8 : 16, nbx = w / 4, nby = h / 4, bpr = (bw + 3) / 4;
        if ((size_t)bpr * (size_t)(nby - 1) * bsz + (size_t)nbx * bsz > avail) return 0;
        long need = (long)nbx * nby * bsz; u8 *m = tex_mem(need); if (!m) return -1;
        int tile = nbx < nby ? nbx : nby; u32 tt = (u32)tile * (u32)tile;
        for (int by = 0; by < nby; by++) for (int bx = 0; bx < nbx; bx++) {
            u32 d = (part1by1((u32)(bx % tile)) << 1 | part1by1((u32)(by % tile))) + (u32)(bx / tile + by / tile) * tt;
            u8 blk[16]; memcpy(blk, src + ((size_t)by * bpr + bx) * bsz, (size_t)bsz);
            bc_color_fix(blk + (f == 8 ? 0 : 8), f == 8);
            memcpy(m + (size_t)d * bsz, blk, (size_t)bsz); }
        e->mem = m; e->bytes = need;
        sceGxmTextureInitSwizzled(&e->tex, m, f == 8 ? SCE_GXM_TEXTURE_FORMAT_UBC1_ABGR : (f == 9 ? SCE_GXM_TEXTURE_FORMAT_UBC2_ABGR : SCE_GXM_TEXTURE_FORMAT_UBC3_ABGR), (unsigned)w, (unsigned)h, 0);
        return 1; }
    int bpp; SceGxmTextureFormat gf;
    switch (f) {
    case 0: bpp = 16; gf = SCE_GXM_TEXTURE_FORMAT_U5U6U5_BGR; break;
    case 1: bpp = 16; gf = SCE_GXM_TEXTURE_FORMAT_U1U5U5U5_ABGR; break;
    case 2: bpp = 16; gf = SCE_GXM_TEXTURE_FORMAT_U4U4U4U4_ABGR; break;
    case 3: bpp = 32; gf = SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR; break;
    case 4: bpp = 4; gf = SCE_GXM_TEXTURE_FORMAT_P4_ABGR; break;
    case 5: bpp = 8; gf = SCE_GXM_TEXTURE_FORMAT_P8_ABGR; break;
    default: return 0; }                                                  /* 16/32-bit CLUT indices: decoded by ge.c */
    if (bpp == 4 && w < 2) return 0;
    size_t srow = (size_t)bw * bpp / 8, rb = (size_t)w * bpp / 8, drow = (size_t)ALIGN(w, 8) * bpp / 8;
    if (srow * (size_t)h > avail || rb > srow) return 0;
    if (k->swz && (srow & 15)) return 0;
    int npal = f == 4 ? 16 : (f == 5 ? 256 : 0); size_t palsz = npal ? ALIGN((size_t)npal * 4, 256) : 0;
    long need = (long)(palsz + drow * (size_t)h); u8 *m = tex_mem(need); if (!m) return -1;
    u8 *dst = m + palsz;
    if (!k->swz) for (int y = 0; y < h; y++) memcpy(dst + (size_t)y * drow, src + (size_t)y * srow, rb);
    else { size_t tiles_row = srow >> 4;
        for (int y = 0; y < h; y++) { const u8 *trow = src + ((size_t)(y >> 3) * tiles_row) * 128 + (size_t)(y & 7) * 16; u8 *d = dst + (size_t)y * drow;
            for (size_t c = 0; c < rb; c += 16) memcpy(d + c, trow + (c >> 4) * 128, rb - c < 16 ? rb - c : 16); } }
    e->mem = m; e->bytes = need;
    sceGxmTextureInitLinear(&e->tex, dst, gf, (unsigned)w, (unsigned)h, 0);
    if (npal) { ge_clut_palette((u32 *)m, npal); sceGxmTextureSetPalette(&e->tex, m); }
    return 1; }

unsigned gfx_tex_acquire(const gtex_key_t *k, const gtex_src_t *src, float uvs[4]){
    uvs[0] = uvs[1] = 1; uvs[2] = uvs[3] = 0;
    if (k->w <= 0 || k->h <= 0 || k->w > 1024 || k->h > 1024) return 0;
    int y0, x0; surf_t *s = surf_for_addr(k->addr, &y0, &x0);
    if (s) { if (s == cur_target && in_scene) return 0; flush_batch(); uvs[0] = (float)k->w / SZ; uvs[1] = (float)k->h / SURF_H; uvs[2] = (float)y0 / SURF_H; uvs[3] = (float)x0 / SZ; return TID_SURF + (unsigned)(s - surfs); }
    tent_t *e = 0, *old = &tc[0];
    for (int i = 0; i < TC_N; i++) { tent_t *t = &tc[i];
        if (t->used && t->k.addr == k->addr && t->k.w == k->w && t->k.h == k->h && t->k.fmt == k->fmt && t->k.swz == k->swz && t->k.bufw == k->bufw && t->k.clut == k->clut) { e = t; break; }
        if (!t->used || t->stamp < old->stamp) old = t; }
    if (e && e->epoch == rs_gfx_epoch) { e->stamp = ++tc_stamp; return (unsigned)(e - tc) + 1; }
    u64 t_h = rs_perf_us(); u32 h = src->hash(src->ud); rs_perf.hash_n++; rs_perf.hash_us += rs_perf_us() - t_h;
    if (e && e->hash == h) { e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp; return (unsigned)(e - tc) + 1; }
    flush_batch();                                     /* a pending batch may still name this entry's old contents */
    if (!e) { if (old->used) tent_free(old); e = old; e->k = *k; }
    else { pool_free_later(e->mem, (u32)e->bytes); tc_bytes -= e->bytes; e->mem = NULL; e->bytes = 0; }   /* new contents: new memory (the GPU may still read the old) */
    e->k = *k; e->epoch = rs_gfx_epoch;                /* not an eviction candidate while tex_mem makes room */
    u64 t_u = rs_perf_us();
    int r = tex_native(e, k);
    if (r < 0) { memset(e, 0, sizeof *e); return 0; }
    if (r == 0) {                                      /* formats GXM cannot read as they are: ge.c decodes them to RGBA8 */
        static unsigned logged; if (!(logged & (1u << (k->fmt & 15)))) { logged |= 1u << (k->fmt & 15); LOGG("texture format %d (%dx%d%s) is decoded on the CPU\n", k->fmt, k->w, k->h, k->swz ? ", swizzled" : ""); }
        int stride = ALIGN(k->w, 8); long need = (long)stride * k->h * 4;
        u8 *m = tex_mem(need); if (!m) { memset(e, 0, sizeof *e); return 0; }
        e->mem = m; e->bytes = need;
        if (stride == k->w) src->decode((u32 *)m, src->ud);
        else { if (!scratch) scratch = malloc(1024 * 1024 * 4); src->decode(scratch, src->ud);
            for (int y = 0; y < k->h; y++) memcpy(m + (size_t)y * stride * 4, scratch + (size_t)y * k->w, (size_t)k->w * 4); }
        sceGxmTextureInitLinear(&e->tex, m, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, (unsigned)k->w, (unsigned)k->h, 0); }
    e->used = 1; tc_bytes += e->bytes; e->hash = h; e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp;
    st_texup++; rs_perf.up_n++; rs_perf.up_us += rs_perf_us() - t_u;
    return (unsigned)(e - tc) + 1; }

/* ------------------------------------------------------------------ state */
static const SceGxmDepthFunc dfunc[8] = {SCE_GXM_DEPTH_FUNC_NEVER, SCE_GXM_DEPTH_FUNC_ALWAYS, SCE_GXM_DEPTH_FUNC_EQUAL, SCE_GXM_DEPTH_FUNC_NOT_EQUAL,
                                         SCE_GXM_DEPTH_FUNC_LESS, SCE_GXM_DEPTH_FUNC_LESS_EQUAL, SCE_GXM_DEPTH_FUNC_GREATER, SCE_GXM_DEPTH_FUNC_GREATER_EQUAL};
static const SceGxmStencilFunc sfunc_t[8] = {SCE_GXM_STENCIL_FUNC_NEVER, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_FUNC_EQUAL, SCE_GXM_STENCIL_FUNC_NOT_EQUAL,
                                             SCE_GXM_STENCIL_FUNC_LESS, SCE_GXM_STENCIL_FUNC_LESS_EQUAL, SCE_GXM_STENCIL_FUNC_GREATER, SCE_GXM_STENCIL_FUNC_GREATER_EQUAL};
static const SceGxmStencilOp sop_t[8] = {SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_ZERO, SCE_GXM_STENCIL_OP_REPLACE, SCE_GXM_STENCIL_OP_INVERT,
                                         SCE_GXM_STENCIL_OP_INCR, SCE_GXM_STENCIL_OP_DECR, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP};
/* depth/stencil state for both faces (two-sided mode is off, the back state is kept identical) */
static void ds_state(SceGxmDepthFunc df, int zwrite, SceGxmStencilFunc sf, SceGxmStencilOp sfail, SceGxmStencilOp zfail, SceGxmStencilOp zpass, u8 cmask, u8 wmask, unsigned ref){
    SceGxmDepthWriteMode w = zwrite ? SCE_GXM_DEPTH_WRITE_ENABLED : SCE_GXM_DEPTH_WRITE_DISABLED;
    sceGxmSetFrontDepthFunc(ctx, df); sceGxmSetBackDepthFunc(ctx, df); sceGxmSetFrontDepthWriteEnable(ctx, w); sceGxmSetBackDepthWriteEnable(ctx, w);
    sceGxmSetFrontStencilFunc(ctx, sf, sfail, zfail, zpass, cmask, wmask); sceGxmSetBackStencilFunc(ctx, sf, sfail, zfail, zpass, cmask, wmask);
    sceGxmSetFrontStencilRef(ctx, ref & 255); sceGxmSetBackStencilRef(ctx, ref & 255); }
#define DS_NONE() ds_state(SCE_GXM_DEPTH_FUNC_ALWAYS, 0, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, 0xFF, 0, 0)
/* PSP blend factor -> GXM factor.  Fixed colours: 0 = none, 1 = fixed, 2 = one minus fixed (handled by the caller) */
static int bfactor(int f, int is_src, u32 fix, int fb565, int *fixed){
    *fixed = 0;
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
        *fixed = 1; return SCE_GXM_BLEND_FACTOR_ONE; } }
static void blend_of(const gfx_state_t *s, SceGxmBlendInfo *bi, float mul[3]){
    memset(bi, 0, sizeof *bi); mul[0] = mul[1] = mul[2] = 1;
    bi->colorMask = (u8)((s->cmr ? SCE_GXM_COLOR_MASK_R : 0) | (s->cmg ? SCE_GXM_COLOR_MASK_G : 0) | (s->cmb ? SCE_GXM_COLOR_MASK_B : 0) | (s->cma ? SCE_GXM_COLOR_MASK_A : 0));
    if (!s->blend) { bi->colorFunc = bi->alphaFunc = SCE_GXM_BLEND_FUNC_NONE; bi->colorSrc = bi->alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bi->colorDst = bi->alphaDst = SCE_GXM_BLEND_FACTOR_ZERO; return; }
    int fb565 = s->fbfmt == 0, fs, fd;
    int sf = bfactor(s->bsrc, 1, s->bfixa, fb565, &fs), df = bfactor(s->bdst, 0, s->bfixb, fb565, &fd);
    if (fs) { u32 k = s->bfixa; mul[0] = (k & 255) / 255.0f; mul[1] = ((k >> 8) & 255) / 255.0f; mul[2] = ((k >> 16) & 255) / 255.0f; sf = SCE_GXM_BLEND_FACTOR_ONE; }
    if (fd) { u32 k = s->bfixb; float l = ((k & 255) + ((k >> 8) & 255) + ((k >> 16) & 255)) / 765.0f; df = l >= 0.5f ? SCE_GXM_BLEND_FACTOR_ONE : SCE_GXM_BLEND_FACTOR_ZERO; }
    int fn = s->beq == 1 ? SCE_GXM_BLEND_FUNC_SUBTRACT : (s->beq == 2 ? SCE_GXM_BLEND_FUNC_REVERSE_SUBTRACT : SCE_GXM_BLEND_FUNC_ADD);
    bi->colorFunc = bi->alphaFunc = (u8)fn; bi->colorSrc = (u8)sf; bi->colorDst = (u8)df;
    bi->alphaSrc = (u8)((sf == SCE_GXM_BLEND_FACTOR_DST_COLOR || sf == SCE_GXM_BLEND_FACTOR_ONE_MINUS_DST_COLOR) ? SCE_GXM_BLEND_FACTOR_ONE : sf);
    bi->alphaDst = (u8)((df == SCE_GXM_BLEND_FACTOR_SRC_COLOR || df == SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_COLOR) ? SCE_GXM_BLEND_FACTOR_ONE : df); }
static void raster_state(const gfx_state_t *s){
    SceGxmDepthFunc df = s->ztest ? dfunc[s->zfunc & 7] : SCE_GXM_DEPTH_FUNC_ALWAYS; int zw = s->ztest && s->zwrite;
    if (s->sten) ds_state(df, zw, sfunc_t[s->sfunc & 7], sop_t[s->sfail & 7], sop_t[s->szfail & 7], sop_t[s->szpass & 7], (u8)s->smask, (u8)s->swmask, (unsigned)s->sref);
    else ds_state(df, zw, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, 0xFF, 0, 0);
    if (s->cull_en) { int ccw = s->cull_mode == 1; if (cull_flip) ccw = !ccw; sceGxmSetCullMode(ctx, ccw ? SCE_GXM_CULL_CCW : SCE_GXM_CULL_CW); }
    else sceGxmSetCullMode(ctx, SCE_GXM_CULL_NONE); }

/* fragment uniforms of FP_MAIN */
static void set_main_fs_uniforms(void *fb, const gfx_state_t *s, const float mul[3]){
    const fprog_t *F = &FP[FP_MAIN]; int use = s->tex && s->texid && tex_of(s->texid);
    float v[4];
    v[0] = use ? 1.0f : 0.0f; v[1] = (float)s->tfunc; v[2] = (float)s->trgba; v[3] = (float)s->tdbl; if (F->cfg0) sceGxmSetUniformDataF(fb, F->cfg0, 0, 4, v);
    v[0] = s->atest ? (float)s->afunc : 1.0f; v[1] = (float)s->aref; v[2] = v[3] = 0; if (F->cfg1) sceGxmSetUniformDataF(fb, F->cfg1, 0, 4, v);
    v[0] = (s->tenv & 255) / 255.0f; v[1] = ((s->tenv >> 8) & 255) / 255.0f; v[2] = ((s->tenv >> 16) & 255) / 255.0f; v[3] = 1; if (F->env) sceGxmSetUniformDataF(fb, F->env, 0, 4, v);
    v[0] = mul[0]; v[1] = mul[1]; v[2] = mul[2]; v[3] = 1; if (F->mul) sceGxmSetUniformDataF(fb, F->mul, 0, 4, v);
    v[0] = (s->fogcol & 255) / 255.0f; v[1] = ((s->fogcol >> 8) & 255) / 255.0f; v[2] = ((s->fogcol >> 16) & 255) / 255.0f; v[3] = s->fog ? 1.0f : 0.0f; if (F->fog) sceGxmSetUniformDataF(fb, F->fog, 0, 4, v);
    int x1 = s->sx1 < 0 ? 0 : s->sx1, y1 = s->sy1 < 0 ? 0 : s->sy1, x2 = s->sx2 > SZ - 1 ? SZ - 1 : s->sx2, y2 = s->sy2 > SZ - 1 ? SZ - 1 : s->sy2;
    if (x1 <= 0 && y1 <= 0 && x2 >= 479 && y2 >= 271) { v[0] = -1; v[1] = -1; v[2] = 1e9f; v[3] = 1e9f; }       /* whole screen: no test */
    else { v[0] = (float)(x1 * RS_S); v[1] = (float)(y1 * RS_S); v[2] = (float)((x2 + 1) * RS_S); v[3] = (float)((y2 + 1) * RS_S); }
    if (F->scis) sceGxmSetUniformDataF(fb, F->scis, 0, 4, v); }
static void bind_texture(const gfx_state_t *s){
    const fprog_t *F = &FP[FP_MAIN]; if (F->tex_unit < 0 || !s->tex || !s->texid) return;
    const SceGxmTexture *t0 = tex_of(s->texid); if (!t0) return;
    SceGxmTexture t = *t0;
    sceGxmTextureSetUAddrMode(&t, s->tclampu ? SCE_GXM_TEXTURE_ADDR_CLAMP : SCE_GXM_TEXTURE_ADDR_REPEAT);
    sceGxmTextureSetVAddrMode(&t, s->tclampv ? SCE_GXM_TEXTURE_ADDR_CLAMP : SCE_GXM_TEXTURE_ADDR_REPEAT);
    SceGxmTextureFilter fl = s->tfilter ? SCE_GXM_TEXTURE_FILTER_LINEAR : SCE_GXM_TEXTURE_FILTER_POINT;
    sceGxmTextureSetMinFilter(&t, fl); sceGxmTextureSetMagFilter(&t, fl);
    sceGxmSetFragmentTexture(ctx, (unsigned)F->tex_unit, &t); }
#define U4(buf, p, src) do { if (p) sceGxmSetUniformDataF((buf), (p), 0, 4, (src)); } while (0)
#define UN(buf, p, src, n) do { if (p) sceGxmSetUniformDataF((buf), (p), 0, (n), (src)); } while (0)
static void set_hw_vs_uniforms(void *vb, const vprog_t *V, const gfx_hw_t *h, const float uvs[4]){
    UN(vb, V->mvp, h->mvp, 16); U4(vb, V->wvz, h->wvz); UN(vb, V->wld, h->wld, 12); U4(vb, V->vp0, h->vp0); U4(vb, V->vp1, h->vp1); U4(vb, V->vp2, h->vp2);
    U4(vb, V->uvt, h->uvt); U4(vb, V->uvs, uvs); U4(vb, V->fogp, h->fogp); U4(vb, V->lfl, h->lfl);
    if (h->skin) UN(vb, V->b, h->bone, 96);
    if (h->lit) { U4(vb, V->mamb, h->mamb); U4(vb, V->mdif, h->mdif); U4(vb, V->memi, h->memi); U4(vb, V->msca, h->msca);
        UN(vb, V->lpos, h->lpos, 16); UN(vb, V->latt, h->latt, 16); UN(vb, V->lspot, h->lspot, 16); UN(vb, V->la, h->la, 16); UN(vb, V->ld, h->ld, 16); } }

/* ------------------------------------------------------------------ batching + draw */
static gfx_vtx_t *bv; static int bn, bcap; static gfx_state_t bst; static int bactive;
static gfx_hvtx_t *bhv; static int bhcap, bkind; static gfx_hw_t bhw;
static void flush_batch(void){
    if (!bactive) return; bactive = 0;
    if (bn <= 0) { bn = 0; return; }
    surf_t *t = target_for(&bst); if (!t) { bn = 0; return; }
    bind(t);
    SceGxmBlendInfo bi; float mul[3]; blend_of(&bst, &bi, mul);
    int vpi = bkind == 1 ? VP_HW0 + (bhw.skin | (bhw.lit << 1)) : VP_MAIN;
    SceGxmFragmentProgram *fp = get_fp(FP_MAIN, VP[vpi].gxp, &bi); if (!fp) { bn = 0; return; }
    size_t vsz = bkind == 1 ? sizeof(gfx_hvtx_t) : sizeof(gfx_vtx_t); const u8 *src = bkind == 1 ? (const u8 *)bhv : (const u8 *)bv;
    u64 t_d = rs_perf_us();
    for (int first = 0; first < bn; first += MAXV) {
        int n = bn - first > MAXV ? MAXV : bn - first;
        void *dst = ring_alloc((u32)(vsz * (size_t)n)); if (!dst) break;
        memcpy(dst, src + vsz * (size_t)first, vsz * (size_t)n);
        raster_state(&bst);                                                     /* after ring_alloc: a fence there restarts the scene */
        sceGxmSetVertexProgram(ctx, VP[vpi].vp); sceGxmSetFragmentProgram(ctx, fp);
        void *vb = NULL, *fb = NULL;
        sceGxmReserveVertexDefaultUniformBuffer(ctx, &vb);
        if (bkind == 1) set_hw_vs_uniforms(vb, &VP[vpi], &bhw, bst.uvs); else U4(vb, VP[VP_MAIN].uvs, bst.uvs);
        sceGxmReserveFragmentDefaultUniformBuffer(ctx, &fb); set_main_fs_uniforms(fb, &bst, mul);
        bind_texture(&bst);
        sceGxmSetVertexStream(ctx, 0, dst);
        sceGxmDraw(ctx, SCE_GXM_PRIMITIVE_TRIANGLES, SCE_GXM_INDEX_FORMAT_U16, idx_buf, (unsigned)n);
        rs_perf.batches++; st_batches++; }
    rs_perf.draw_us += rs_perf_us() - t_d; st_tris += (unsigned)bn / 3;
    bn = 0; }
void gfx_flush(void){ flush_batch(); }

void gfx_draw_hw(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n){
    if (n <= 0) return; st_draws++;
    if (bactive && (bkind != 1 || memcmp(&bst, st, sizeof *st) != 0 || memcmp(&bhw, hw, sizeof *hw) != 0 || bn + n > bhcap)) flush_batch();
    if (!bhv || n > bhcap) { int nc = n > (1 << 16) ? n : (1 << 16); bhv = realloc(bhv, sizeof(gfx_hvtx_t) * (size_t)nc); bhcap = nc; }
    if (!bactive) { bst = *st; bhw = *hw; bactive = 1; bkind = 1; bn = 0; }
    memcpy(&bhv[bn], v, sizeof(gfx_hvtx_t) * (size_t)n); bn += n; }
void gfx_draw(const gfx_state_t *st, const gfx_vtx_t *v, int n){
    if (n <= 0) return; st_draws++;
    if (bactive && (bkind != 0 || memcmp(&bst, st, sizeof *st) != 0 || bn + n > bcap)) flush_batch();
    if (!bv || n > bcap) { int nc = n > (1 << 17) ? n : (1 << 17); bv = realloc(bv, sizeof(gfx_vtx_t) * (size_t)nc); bcap = nc; }
    if (!bactive) { bst = *st; bactive = 1; bkind = 0; bn = 0; }
    memcpy(&bv[bn], v, sizeof(gfx_vtx_t) * (size_t)n); bn += n; }

/* ------------------------------------------------------------------ native 3D draws: PSP vertex buffers read by the GPU as they are
 * One vertex program per PSP vertex type (+ lighting on/off), generated from the vertex type: each PSP vertex component becomes a GXM
 * vertex attribute in the PSP format (s8/s16/f32 positions and normals, u8/u16/f32 texture coordinates and weights, 8888 colours as
 * normalised bytes, 565/5551/4444 colours as one 16-bit value unpacked in the program), with the PSP fixed-point scales applied in the
 * program.  The maths after that is the GE transform/skinning/lighting of HWVS_SRC. */
static const char *NV_UNIFORMS =
    "uniform float4 uMVP[4]; uniform float4 uWVZ; uniform float4 uWld[3]; uniform float4 uB[24];\n"
    "uniform float4 uVP0; uniform float4 uVP1; uniform float4 uVP2; uniform float4 uUVT; uniform float4 uUVS; uniform float4 uFogP; uniform float4 uDefC;\n"
    "uniform float4 uMAmb; uniform float4 uMDif; uniform float4 uMEmi; uniform float4 uMSca; uniform float4 uLFl;\n"
    "uniform float4 uLPos[4]; uniform float4 uLAtt[4]; uniform float4 uLSpot[4]; uniform float4 uLA[4]; uniform float4 uLD[4];\n";
static const char *NV_LIGHT =
    "#define LIGHT(i, ih) if (uLFl.z > ih) { float3 L = uLPos[i].xyz; float att = 1.0; if (uLPos[i].w > 0.5) { L = uLPos[i].xyz - wp; float d = length(L); if (d > 0.000001) L = L / d;"
    " float den = uLAtt[i].x + uLAtt[i].y * d + uLAtt[i].z * d * d; att = (den > 0.000001) ? min(1.0 / den, 1.0) : 1.0;"
    " if (uLPos[i].w > 1.5) { float cs = -dot(L, uLSpot[i].xyz); if (cs < uLSpot[i].w) att = 0.0; else if (uLAtt[i].w > 0.0) att = att * pow(max(cs, 0.0), uLAtt[i].w); } }"
    " float ndl = max(dot(wn, L), 0.0); col += (uLA[i].rgb * amb + ndl * uLD[i].rgb * dif) * att; }\n";
typedef struct { char *p; size_t n, cap; } sbuf_t;
static void sb(sbuf_t *b, const char *fmt, ...){
    va_list ap; va_start(ap, fmt); int l = vsnprintf(NULL, 0, fmt, ap); va_end(ap); if (l < 0) return;
    if (b->n + (size_t)l + 1 > b->cap) { b->cap = (b->n + (size_t)l + 1) * 2; b->p = realloc(b->p, b->cap); }
    va_start(ap, fmt); vsnprintf(b->p + b->n, (size_t)l + 1, fmt, ap); va_end(ap); b->n += (size_t)l; }
static char *native_vs_src(u32 vt, int lit){
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1;
    static const char *sc[4] = {"1.0", "(1.0 / 128.0)", "(1.0 / 32768.0)", "1.0"};          /* PSP 8/16-bit fixed point */
    sbuf_t b = {0}; sb(&b, "%s%s", NV_UNIFORMS, NV_LIGHT);
    sb(&b, "void main(float3 aP");
    if (nf) sb(&b, ", float3 aN");
    if (tf) sb(&b, ", float2 aT");
    if (cf == 7) sb(&b, ", float4 aC"); else if (cf) sb(&b, ", float aC");
    if (wf) { sb(&b, ", float4 aW0"); if (nw > 4) sb(&b, ", float4 aW1"); }
    sb(&b, ",\n  float4 out vPos : POSITION, float2 out vUV : TEXCOORD0, float4 out vCol : TEXCOORD1, float out vFog : TEXCOORD2, float out vCull : TEXCOORD3)\n{\n");
    sb(&b, "  float3 p = aP * %s;\n", sc[pf]);
    if (nf) sb(&b, "  float3 n = aN * %s;\n", sc[nf]); else sb(&b, "  float3 n = float3(0.0, 0.0, 1.0);\n");
    switch (cf) {                                                                  /* as ge.c decode_vertex: 4 = 565, 5 = 5551, 7 = 8888, others 4444 */
    case 0: sb(&b, "  float4 c = uDefC;\n"); break;
    case 7: sb(&b, "  float4 c = aC;\n"); break;
    case 4: sb(&b, "  float v = aC; float q1 = floor(v / 32.0), q2 = floor(v / 2048.0);\n"
                   "  float4 c = float4((v - q1 * 32.0) / 31.0, (q1 - q2 * 64.0) / 63.0, q2 / 31.0, 1.0);\n"); break;
    case 5: sb(&b, "  float v = aC; float q1 = floor(v / 32.0), q2 = floor(v / 1024.0), q3 = floor(v / 32768.0);\n"
                   "  float4 c = float4((v - q1 * 32.0) / 31.0, (q1 - q2 * 32.0) / 31.0, (q2 - q3 * 32.0) / 31.0, q3);\n"); break;
    default: sb(&b, "  float v = aC; float q1 = floor(v / 16.0), q2 = floor(v / 256.0), q3 = floor(v / 4096.0);\n"
                    "  float4 c = float4((v - q1 * 16.0) / 15.0, (q1 - q2 * 16.0) / 15.0, (q2 - q3 * 16.0) / 15.0, q3 / 15.0);\n"); break; }
    if (wf) {
        sb(&b, "  float4 p4 = float4(p, 1.0); float4 n4 = float4(n, 0.0); p = float3(0.0, 0.0, 0.0); n = float3(0.0, 0.0, 0.0); float wt;\n");
        for (int i = 0; i < nw && i < 8; i++)
            sb(&b, "  wt = aW%d.%c * %s; p += wt * float3(dot(p4, uB[%d]), dot(p4, uB[%d]), dot(p4, uB[%d])); n += wt * float3(dot(n4, uB[%d]), dot(n4, uB[%d]), dot(n4, uB[%d]));\n",
               i / 4, "xyzw"[i % 4], sc[wf], i * 3, i * 3 + 1, i * 3 + 2, i * 3, i * 3 + 1, i * 3 + 2); }
    sb(&b, "  float4 q = float4(p, 1.0);\n"
           "  float4 cl = float4(dot(q, uMVP[0]), dot(q, uMVP[1]), dot(q, uMVP[2]), dot(q, uMVP[3])); float w = cl.w;\n"
           "  vPos = float4((cl.x * uVP0.x + uVP1.x * w) * (2.0 / 512.0) - w, (cl.y * uVP0.y + uVP1.y * w) * (2.0 / 512.0) - w, (cl.z * uVP0.z + uVP1.z * w) * (2.0 / 65535.0) - w, w);\n"
           "  float iw = (abs(w) > 0.000001) ? 1.0 / w : 0.0;\n"
           "  float sx = cl.x * iw * uVP0.x + uVP1.x + uVP2.x, sy = cl.y * iw * uVP0.y + uVP1.y + uVP2.y, sz = cl.z * iw * uVP0.z + uVP1.z;\n"
           "  float inz = (w > 0.0 && sz >= 0.0 && sz <= 65535.0) ? 1.0 : 0.0;\n"
           "  float xyout = (sx >= 0.0 && sx < 4096.0 && sy >= 0.0 && sy < 4096.0) ? 0.0 : 1.0;\n"
           "  vCull = ((uVP2.z < 0.5 && inz < 0.5) || ((inz > 0.5 || uVP2.z < 0.5) && xyout > 0.5)) ? 1.0 : 0.0;\n"
           "  vFog = 1.0; if (uFogP.z > 0.5) vFog = clamp((dot(q, uWVZ) + uFogP.x) * uFogP.y, 0.0, 1.0);\n");
    if (tf) sb(&b, "  float2 t = aT * %s;\n", sc[tf]); else sb(&b, "  float2 t = float2(0.0, 0.0);\n");
    sb(&b, "  float2 uv = float2(t.x * uUVT.x + uUVT.z, t.y * uUVT.y + uUVT.w); vUV = float2(uv.x * uUVS.x + uUVS.w, uv.y * uUVS.y + uUVS.z);\n"
           "  vCol = c;\n");
    if (lit) sb(&b,
           "  float3 wp = float3(dot(q, uWld[0]), dot(q, uWld[1]), dot(q, uWld[2]));\n"
           "  float4 nn = float4(n, 0.0); float3 wn = float3(dot(nn, uWld[0]), dot(nn, uWld[1]), dot(nn, uWld[2])); float ln = length(wn); if (ln > 0.0000001) wn = wn / ln;\n"
           "  float3 amb = (uLFl.x > 0.5) ? c.rgb : uMAmb.rgb; float aa = (uLFl.x > 0.5) ? c.a : uMAmb.a; float3 dif = (uLFl.y > 0.5) ? c.rgb : uMDif.rgb;\n"
           "  float3 col = uMEmi.rgb + uMSca.rgb * amb;\n"
           "  LIGHT(0, 0.5) LIGHT(1, 1.5) LIGHT(2, 2.5) LIGHT(3, 3.5)\n"
           "  vCol = float4(clamp(col, float3(0.0, 0.0, 0.0), float3(1.0, 1.0, 1.0)), clamp(aa, 0.0, 1.0));\n");
    sb(&b, "}\n");
    return b.p; }

#define NP_N 192
typedef struct { u32 key; int state; vprog_t v; } nprog_t;               /* state: 1 ready, -1 failed */
static nprog_t np[NP_N]; static int np_n;
static const vprog_t *native_prog(const gfx_native_t *nv, int lit){
    u32 vt = nv->vt, key = (vt & 0x1C7FFu) | ((u32)(lit != 0) << 24) | 0x80000000u;   /* components + weight count; not the index/through/morph bits */
    for (int i = 0; i < np_n; i++) if (np[i].key == key) return np[i].state > 0 ? &np[i].v : NULL;
    if (np_n >= NP_N) return NULL;
    nprog_t *e = &np[np_n++]; memset(e, 0, sizeof *e); e->key = key; e->state = -1;
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1;
    if (!pf || nv->off[4] < 0) return NULL;
    static const SceGxmAttributeFormat sfmt[4] = {SCE_GXM_ATTRIBUTE_FORMAT_F32, SCE_GXM_ATTRIBUTE_FORMAT_S8, SCE_GXM_ATTRIBUTE_FORMAT_S16, SCE_GXM_ATTRIBUTE_FORMAT_F32};
    static const SceGxmAttributeFormat ufmt[4] = {SCE_GXM_ATTRIBUTE_FORMAT_F32, SCE_GXM_ATTRIBUTE_FORMAT_U8, SCE_GXM_ATTRIBUTE_FORMAT_U16, SCE_GXM_ATTRIBUTE_FORMAT_F32};
    static const int fs[4] = {0, 1, 2, 4};
    static const char *const names[6] = {"aP", "aN", "aT", "aC", "aW0", "aW1"};
    int na = 0; const char *nm[6]; u8 cp[6]; u16 of[6]; SceGxmAttributeFormat ff[6];
#define ATTR(i, o, f, c) do { nm[na] = names[i]; of[na] = (u16)(o); ff[na] = (f); cp[na] = (u8)(c); na++; } while (0)
    ATTR(0, nv->off[4], sfmt[pf], 3);
    if (nf && nv->off[3] >= 0) ATTR(1, nv->off[3], sfmt[nf], 3);
    if (tf && nv->off[1] >= 0) ATTR(2, nv->off[1], ufmt[tf], 2);
    if (cf && nv->off[2] >= 0) { if (cf == 7) ATTR(3, nv->off[2], SCE_GXM_ATTRIBUTE_FORMAT_U8N, 4); else ATTR(3, nv->off[2], SCE_GXM_ATTRIBUTE_FORMAT_U16, 1); }
    if (wf && nv->off[0] >= 0) { ATTR(4, nv->off[0], ufmt[wf], nw > 4 ? 4 : nw); if (nw > 4) ATTR(5, nv->off[0] + 4 * fs[wf], ufmt[wf], nw - 4); }
#undef ATTR
    char *src = native_vs_src(vt, lit); if (!src) return NULL;
    char what[48]; snprintf(what, sizeof what, "vertex type %06x%s", (unsigned)(vt & 0x1C7FFu), lit ? " lit" : "");
    int ok = make_vprog_f(&e->v, src, what, nm, cp, of, ff, na, nv->vsz);
    free(src);
    if (!ok) { LOGG("%s: no native program, this vertex type is decoded on the CPU\n", what); return NULL; }
    LOGG("native program for %s (%d bytes per vertex, %d attributes)\n", what, nv->vsz, na);
    e->state = 1; return &e->v; }

static int native_on = 1;
int gfx_draw_native(const gfx_state_t *st, const gfx_hw_t *h, const gfx_native_t *nv){
    if (!native_on || nv->count <= 0 || nv->vsz <= 0) return 0;
    int n = nv->count; if (n < 3) return 1;                                     /* nothing to draw */
    u32 lo = 0, hi = (u32)n - 1;
    if (nv->idxf) {                                                             /* the vertices the indices use */
        lo = 0xFFFFFFFFu; hi = 0;
        if (nv->idxf == 1) { const u8 *ip = nv->idata; for (int i = 0; i < n; i++) { u32 x = ip[i]; if (x < lo) lo = x; if (x > hi) hi = x; } }
        else if (nv->idxf == 2) { const u8 *ip = nv->idata; for (int i = 0; i < n; i++) { u32 x = (u32)ip[i * 2] | (u32)ip[i * 2 + 1] << 8; if (x < lo) lo = x; if (x > hi) hi = x; } }
        else { const u8 *ip = nv->idata; for (int i = 0; i < n; i++) { u32 x; memcpy(&x, ip + i * 4, 4); if (x < lo) lo = x; if (x > hi) hi = x; } }
        if (hi - lo >= 64000u) return 0; }
    else if (n > MAXV) return 0;
    const vprog_t *V = native_prog(nv, h->lit); if (!V) return 0;
    flush_batch();
    surf_t *t = target_for(st); if (!t) return 1;
    bind(t);
    SceGxmBlendInfo bi; float mul[3]; blend_of(st, &bi, mul);
    SceGxmFragmentProgram *fp = get_fp(FP_MAIN, V->gxp, &bi); if (!fp) return 1;
    u64 t_d = rs_perf_us();
    size_t vbytes = (size_t)(hi - lo + 1) * (size_t)nv->vsz;
    void *vd = ring_alloc((u32)vbytes); if (!vd) return 1;
    memcpy(vd, nv->vdata + (size_t)lo * (size_t)nv->vsz, vbytes);              /* the game's vertices, as they are */
    const u16 *ix = idx_buf;
    if (nv->idxf) {                                                             /* indices relative to the copied range (GXM has no 8-bit indices) */
        u16 *o = ring_alloc((u32)n * 2); if (!o) return 1; const u8 *ip = nv->idata;
        if (nv->idxf == 1) for (int i = 0; i < n; i++) o[i] = (u16)(ip[i] - lo);
        else if (nv->idxf == 2) for (int i = 0; i < n; i++) o[i] = (u16)(((u32)ip[i * 2] | (u32)ip[i * 2 + 1] << 8) - lo);
        else for (int i = 0; i < n; i++) { u32 x; memcpy(&x, ip + i * 4, 4); o[i] = (u16)(x - lo); }
        ix = o; }
    raster_state(st);                                                           /* after ring_alloc: a fence there restarts the scene */
    sceGxmSetVertexProgram(ctx, V->vp); sceGxmSetFragmentProgram(ctx, fp);
    void *vb = NULL, *fb = NULL;
    sceGxmReserveVertexDefaultUniformBuffer(ctx, &vb); set_hw_vs_uniforms(vb, V, h, st->uvs); U4(vb, V->defc, nv->defc);
    sceGxmReserveFragmentDefaultUniformBuffer(ctx, &fb); set_main_fs_uniforms(fb, st, mul);
    bind_texture(st);
    sceGxmSetVertexStream(ctx, 0, vd);
    SceGxmPrimitiveType pt = nv->ptype == 3 ? SCE_GXM_PRIMITIVE_TRIANGLES : (nv->ptype == 4 ? SCE_GXM_PRIMITIVE_TRIANGLE_STRIP : SCE_GXM_PRIMITIVE_TRIANGLE_FAN);
    if (nv->ptype == 3) n -= n % 3;
    sceGxmDraw(ctx, pt, SCE_GXM_INDEX_FORMAT_U16, ix, (unsigned)n);
    st_draws++; st_batches++; rs_perf.batches++; st_tris += (unsigned)(nv->ptype == 3 ? n / 3 : n - 2);
    rs_perf.draw_us += rs_perf_us() - t_d;
    return 1; }

/* solid quad in PSP pixel coordinates (x0,y0)-(x1,y1) exclusive, with depth z (0..1): clears */
static void draw_clear_quad(surf_t *t, float x0, float y0, float x1, float y1, float z, const float rgba[4], int cmask, int depth_write, int sten, int sval){
    (void)t;
    float X0 = x0 / SZ * 2 - 1, X1 = x1 / SZ * 2 - 1, Y0 = y0 / SZ * 2 - 1, Y1 = y1 / SZ * 2 - 1, Z = z * 2 - 1;
    float *q = ring_alloc(4 * 3 * sizeof(float)); if (!q) return;
    float v[12] = {X0, Y0, Z, X1, Y0, Z, X0, Y1, Z, X1, Y1, Z}; memcpy(q, v, sizeof v);
    SceGxmBlendInfo bi; memset(&bi, 0, sizeof bi); bi.colorMask = (u8)cmask; bi.colorFunc = bi.alphaFunc = SCE_GXM_BLEND_FUNC_NONE;
    bi.colorSrc = bi.alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bi.colorDst = bi.alphaDst = SCE_GXM_BLEND_FACTOR_ZERO;
    SceGxmFragmentProgram *fp = get_fp(FP_FILL, VP[VP_FILL].gxp, &bi); if (!fp) return;
    sceGxmSetCullMode(ctx, SCE_GXM_CULL_NONE);
    if (sten) ds_state(SCE_GXM_DEPTH_FUNC_ALWAYS, depth_write, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_REPLACE, SCE_GXM_STENCIL_OP_REPLACE, SCE_GXM_STENCIL_OP_REPLACE, 0xFF, 0xFF, (unsigned)sval);
    else ds_state(SCE_GXM_DEPTH_FUNC_ALWAYS, depth_write, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, 0xFF, 0, 0);
    sceGxmSetVertexProgram(ctx, VP[VP_FILL].vp); sceGxmSetFragmentProgram(ctx, fp);
    void *fb = NULL; sceGxmReserveFragmentDefaultUniformBuffer(ctx, &fb); U4(fb, FP[FP_FILL].col, rgba);
    sceGxmSetVertexStream(ctx, 0, q);
    sceGxmDraw(ctx, SCE_GXM_PRIMITIVE_TRIANGLE_STRIP, SCE_GXM_INDEX_FORMAT_U16, idx_buf, 4); }

void gfx_clear(const gfx_state_t *st, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz){
    flush_batch(); surf_t *t = target_for(st); if (!t) return; bind(t); st_clears++;
    if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0; if (x1 > SZ - 1) x1 = SZ - 1; if (y1 > SZ - 1) y1 = SZ - 1;
    int sx1 = st->sx1 > x0 ? st->sx1 : x0, sy1 = st->sy1 > y0 ? st->sy1 : y0, sx2 = st->sx2 < x1 ? st->sx2 : x1, sy2 = st->sy2 < y1 ? st->sy2 : y1;
    if (sx2 < sx1 || sy2 < sy1) return;
    int mask = (cc ? SCE_GXM_COLOR_MASK_R | SCE_GXM_COLOR_MASK_G | SCE_GXM_COLOR_MASK_B : 0) | (ca ? SCE_GXM_COLOR_MASK_A : 0);
    int sv = (int)(rgba[3] * 255.0f + 0.5f); if (sv < 0) sv = 0; if (sv > 255) sv = 255;       /* PSP: the alpha clear IS the stencil clear */
    float d = depth < 0 ? 0 : (depth > 1 ? 1 : depth);
    draw_clear_quad(t, (float)sx1, (float)sy1, (float)(sx2 + 1), (float)(sy2 + 1), d, rgba, mask, cz, ca, sv); }

/* textured quad: dst rect (PSP pixels on the bound surface) <- src rect (normalised coordinates of texture tex) */
static void draw_tex_quad(const SceGxmTexture *tex, int fprog, float dx0, float dy0, float dx1, float dy1, float u0, float v0, float u1, float v1, int linear){
    float X0 = dx0 / SZ * 2 - 1, X1 = dx1 / SZ * 2 - 1, Y0 = dy0 / SZ * 2 - 1, Y1 = dy1 / SZ * 2 - 1;
    float *q = ring_alloc(16 * sizeof(float)); if (!q) return;
    float v[16] = {X0, Y0, u0, v0, X1, Y0, u1, v0, X0, Y1, u0, v1, X1, Y1, u1, v1}; memcpy(q, v, sizeof v);
    SceGxmBlendInfo bi; memset(&bi, 0, sizeof bi); bi.colorMask = SCE_GXM_COLOR_MASK_ALL; bi.colorFunc = bi.alphaFunc = SCE_GXM_BLEND_FUNC_NONE;
    bi.colorSrc = bi.alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bi.colorDst = bi.alphaDst = SCE_GXM_BLEND_FACTOR_ZERO;
    SceGxmFragmentProgram *fp = get_fp(fprog, VP[VP_PRES].gxp, &bi); if (!fp) return;
    DS_NONE(); sceGxmSetCullMode(ctx, SCE_GXM_CULL_NONE);
    sceGxmSetVertexProgram(ctx, VP[VP_PRES].vp); sceGxmSetFragmentProgram(ctx, fp);
    SceGxmTexture t = *tex; SceGxmTextureFilter fl = linear ? SCE_GXM_TEXTURE_FILTER_LINEAR : SCE_GXM_TEXTURE_FILTER_POINT;
    sceGxmTextureSetMinFilter(&t, fl); sceGxmTextureSetMagFilter(&t, fl);
    sceGxmTextureSetUAddrMode(&t, SCE_GXM_TEXTURE_ADDR_CLAMP); sceGxmTextureSetVAddrMode(&t, SCE_GXM_TEXTURE_ADDR_CLAMP);
    if (FP[fprog].tex_unit >= 0) sceGxmSetFragmentTexture(ctx, (unsigned)FP[fprog].tex_unit, &t);
    if (FP[fprog].texel) { void *fb = NULL; sceGxmReserveFragmentDefaultUniformBuffer(ctx, &fb); U4(fb, FP[fprog].texel, pres_texel); }
    sceGxmSetVertexStream(ctx, 0, q);
    sceGxmDraw(ctx, SCE_GXM_PRIMITIVE_TRIANGLE_STRIP, SCE_GXM_INDEX_FORMAT_U16, idx_buf, 4); }
/* a w x h RGBA8 picture as a texture in the ring (valid for the current frame) */
static int ring_texture(SceGxmTexture *t, const u32 *px, int w, int h){
    int stride = ALIGN(w, 8); u8 *m = ring_alloc((u32)(stride * h * 4)); if (!m) return 0;
    for (int y = 0; y < h; y++) memcpy(m + (size_t)y * stride * 4, px + (size_t)y * w, (size_t)w * 4);
    sceGxmTextureInitLinear(t, m, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, (unsigned)w, (unsigned)h, 0); return 1; }

/* ------------------------------------------------------------------ transfers (sceGuCopyImage) */
void gfx_transfer(u32 src, int sbw, int sx, int sy, u32 dst, int dbw, int dx, int dy, int w, int h, int bpp){
    flush_batch();
    int ys = 0, yd = 0, xs = 0, xd = 0; surf_t *ss = surf_for_addr(src, &ys, &xs), *ds = surf_for_addr(dst, &yd, &xd);
    if (w <= 0 || h <= 0 || w > SZ || h > SZ) return;
    u64 t_c = rs_perf_us();
    if (ss) {
        if (!ds) { ds = surf_create(dst, ss->fmt, dbw); if (!ds) return; ds->drawn = 1; yd = xd = 0; ss = surf_for_addr(src, &ys, &xs); if (!ss) return; }
        if (ds == ss) return;
        bind(ds);
        draw_tex_quad(&ss->tex, FP_COPY, (float)(dx + xd), (float)(dy + yd), (float)(dx + xd + w), (float)(dy + yd + h),
                      (float)(sx + xs) / SZ, (float)(sy + ys) / SURF_H, (float)(sx + xs + w) / SZ, (float)(sy + ys + h) / SURF_H, 0);
        ds->stamp = ++surf_stamp; rs_perf.copy_n++;
    } else if (ds) {                                         /* CPU memory -> GPU surface */
        u32 *tmp = malloc((size_t)w * h * 4); if (!tmp) return; int fmt = bpp == 4 ? 3 : (ds->psz == 2 ? ds->fmt : 1);
        for (int y = 0; y < h; y++) for (int x = 0; x < w; x++) tmp[y * w + x] = gfx_px_read(gfx_gp(src + (u32)(((sy + y) * sbw + sx + x) * bpp)), fmt);
        SceGxmTexture t; if (ring_texture(&t, tmp, w, h)) { bind(ds); draw_tex_quad(&t, FP_COPY, (float)(dx + xd), (float)(dy + yd), (float)(dx + xd + w), (float)(dy + yd + h), 0, 0, 1, 1, 0); }
        free(tmp); rs_perf.copy_n++; }
    rs_perf.copy_us += rs_perf_us() - t_c; }

/* ------------------------------------------------------------------ display */
void gfx_get_display(u32 *a, u32 *s, u32 *f){ *a = disp_addr; *s = disp_stride; *f = disp_fmt; }
void gfx_set_display(u32 addr, u32 stride, u32 fmt){ if (addr) { disp_addr = akey(addr); disp_stride = stride ? stride : 512; disp_fmt = fmt & 3; } }
static surf_t *disp_surface(void){ surf_t *s = surf_find(disp_addr); return (s && s->drawn) ? s : 0; }
static void cpu_display(u32 *out){ rs_perf.cpu_disp_n++;
    for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) {
        u32 a = disp_addr + (u32)((y * disp_stride + x) * (disp_fmt == 3 ? 4 : 2)); out[y * 480 + x] = gfx_px_read(g_mem + GADDR(a | 0x04000000u), disp_fmt) | 0xFF000000u; } }
int gfx_read_display(u32 *out){
    if (!disp_addr) return 0;
    flush_batch(); surf_t *s = disp_surface();
    if (!s) { cpu_display(out); return 1; }
    end_scene(NULL); sceGxmFinish(ctx); rs_perf.readback_n++;
    for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) { u32 v; memcpy(&v, s->data + ((size_t)(y * RS_S) * PXW + (size_t)(x * RS_S)) * 4, 4); out[y * 480 + x] = v | 0xFF000000u; }
    return 1; }
u32 *gfx_read_display_full(int *w, int *h){ (void)w; (void)h; return 0; }
u32 *gfx_present_image(int w, int h){ (void)w; (void)h; return 0; }

static int hud_n; static const char *const *hud_lines;
static void hud_draw_now(void);
void gfx_hud(const char *const *lines, int n, int ww, int wh){ (void)ww; (void)wh; hud_lines = lines; hud_n = n; }
static unsigned presents;
void gfx_present(int ww, int wh){
    (void)ww; (void)wh; u64 t = rs_perf_us();
    flush_batch(); end_scene(NULL);
    surf_t *s = disp_surface(); SceGxmTexture tex; int have = 0;
    if (s) { tex = s->tex; have = 1; }
    else if (disp_addr) { static u32 pix[480 * 272]; cpu_display(pix); have = ring_texture(&tex, pix, 480, 272); }
    sceGxmBeginScene(ctx, 0, rt_disp, NULL, NULL, disp_sync[disp_back], &disp_cs[disp_back], NULL); st_scenes++; no_fence = 1;
    sceGxmSetViewport(ctx, DISP_W * 0.5f, DISP_W * 0.5f, DISP_H * 0.5f, DISP_H * 0.5f, 0.5f, 0.5f);
    sceGxmSetRegionClip(ctx, SCE_GXM_REGION_CLIP_OUTSIDE, 0, 0, DISP_W - 1, DISP_H - 1);
    {   /* the display surface (480x272 PSP pixels of a 512x512 surface) scaled to the whole screen; draw_tex_quad works in PSP pixels of a
         * 512 surface, so the screen is addressed as 512 x 512 units here */
        static const float black[4] = {0, 0, 0, 1};
        float *q = ring_alloc(12 * sizeof(float));                  /* background: black */
        if (q) { float v[12] = {-1, -1, 0.5f, 1, -1, 0.5f, -1, 1, 0.5f, 1, 1, 0.5f}; memcpy(q, v, sizeof v);
            SceGxmBlendInfo bi; memset(&bi, 0, sizeof bi); bi.colorMask = SCE_GXM_COLOR_MASK_ALL; bi.colorSrc = bi.alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bi.colorDst = bi.alphaDst = SCE_GXM_BLEND_FACTOR_ZERO;
            SceGxmFragmentProgram *fp = get_fp(FP_FILL, VP[VP_FILL].gxp, &bi);
            if (fp && !have) { DS_NONE(); sceGxmSetCullMode(ctx, SCE_GXM_CULL_NONE);
                sceGxmSetVertexProgram(ctx, VP[VP_FILL].vp); sceGxmSetFragmentProgram(ctx, fp); void *fb = NULL; sceGxmReserveFragmentDefaultUniformBuffer(ctx, &fb); U4(fb, FP[FP_FILL].col, black);
                sceGxmSetVertexStream(ctx, 0, q); sceGxmDraw(ctx, SCE_GXM_PRIMITIVE_TRIANGLE_STRIP, SCE_GXM_INDEX_FORMAT_U16, idx_buf, 4); } }
        if (have) { float um = s ? 480.0f / SZ : 1.0f, vm = s ? 272.0f / SURF_H : 1.0f;
            /* 960x544 from the 480x272 PSP screen at scale S: S = 2 is 1:1, S = 4 is 2x2 supersampling (each display pixel's bilinear
             * sample sits on the corner of 4 internal pixels = their average) */
            int fx = use_fxaa && FP[FP_FXAA].gxp;
            if (fx) { pres_texel[0] = um / DISP_W; pres_texel[1] = vm / DISP_H; pres_texel[2] = um - 0.5f / (s ? PXW : 480); pres_texel[3] = vm - 0.5f / (s ? PXH : 272); }
            draw_tex_quad(&tex, fx ? FP_FXAA : FP_PRES, 0, 0, SZ, SZ, 0, 0, um, vm, 1); } }
    hud_draw_now();
    unsigned id = fence_next++; SceGxmNotification n = {notif, id};
    sceGxmEndScene(ctx, NULL, &n); no_fence = 0; ring_mark(id);
    { extern volatile int rs_dialog_active;
      if (rs_dialog_active) {                                    /* system dialog (on-screen keyboard) over the frame */
        SceCommonDialogUpdateParam up; memset(&up, 0, sizeof up);
        up.renderTarget.colorFormat = SCE_GXM_COLOR_FORMAT_U8U8U8U8_ABGR; up.renderTarget.surfaceType = SCE_GXM_COLOR_SURFACE_LINEAR;
        up.renderTarget.width = DISP_W; up.renderTarget.height = DISP_H; up.renderTarget.strideInPixels = DISP_W;
        up.renderTarget.colorSurfaceData = disp_mem[disp_back]; up.renderTarget.depthSurfaceData = disp_depth;
        up.displaySyncObject = disp_sync[disp_back];
        sceCommonDialogUpdate(&up); } }
    sceGxmPadHeartbeat(&disp_cs[disp_back], disp_sync[disp_back]);
    disp_cb_t cb = {disp_mem[disp_back]}; sceGxmDisplayQueueAddEntry(disp_sync[disp_front], disp_sync[disp_back], &cb);
    disp_front = disp_back; disp_back = (disp_back + 1) % DISP_N;
    pool_collect(); presents++;
    rs_perf.present_n++; rs_perf.present_us += rs_perf_us() - t; }

void gfx_cache_stats(char *buf, int n){ int used = 0; for (int i = 0; i < TC_N; i++) used += tc[i].used; int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used;
    snprintf(buf, (size_t)n, "texture cache %d/%d entries, %.1f of %.1f MB; %d render surfaces; %d fragment programs", used, TC_N, tc_bytes / 1048576.0, pool_size / 1048576.0, ns, fpc_n); }
void gfx_stats(char *buf, int n){ int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used; snprintf(buf, (size_t)n, "draws=%u batches=%u tris=%u clears=%u texture-uploads=%u surfaces=%d scenes=%u", st_draws, st_batches, st_tris, st_clears, st_texup, ns, st_scenes); }
void gfx_shadow_frame(void){}

/* ------------------------------------------------------------------ debug HUD text (drawn into the display buffer by gfx_present) */
static const unsigned char hud_font[64][7] = {{0x00,0x00,0x00,0x00,0x00,0x00,0x00},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x18,0x19,0x02,0x04,0x08,0x13,0x03},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x02,0x04,0x08,0x08,0x08,0x04,0x02},{0x08,0x04,0x02,0x02,0x02,0x04,0x08},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x00,0x04,0x04,0x1f,0x04,0x04,0x00},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x00,0x00,0x00,0x1f,0x00,0x00,0x00},{0x00,0x00,0x00,0x00,0x00,0x0c,0x0c},{0x00,0x01,0x02,0x04,0x08,0x10,0x00},{0x0e,0x11,0x13,0x15,0x19,0x11,0x0e},{0x04,0x0c,0x04,0x04,0x04,0x04,0x0e},{0x0e,0x11,0x01,0x02,0x04,0x08,0x1f},{0x1e,0x01,0x01,0x0e,0x01,0x01,0x1e},{0x02,0x06,0x0a,0x12,0x1f,0x02,0x02},{0x1f,0x10,0x1e,0x01,0x01,0x11,0x0e},{0x06,0x08,0x10,0x1e,0x11,0x11,0x0e},{0x1f,0x01,0x02,0x04,0x08,0x08,0x08},{0x0e,0x11,0x11,0x0e,0x11,0x11,0x0e},{0x0e,0x11,0x11,0x0f,0x01,0x02,0x0c},{0x00,0x0c,0x0c,0x00,0x0c,0x0c,0x00},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x0e,0x11,0x11,0x1f,0x11,0x11,0x11},{0x1e,0x11,0x11,0x1e,0x11,0x11,0x1e},{0x0e,0x11,0x10,0x10,0x10,0x11,0x0e},{0x1c,0x12,0x11,0x11,0x11,0x12,0x1c},{0x1f,0x10,0x10,0x1e,0x10,0x10,0x1f},{0x1f,0x10,0x10,0x1e,0x10,0x10,0x10},{0x0e,0x11,0x10,0x17,0x11,0x11,0x0f},{0x11,0x11,0x11,0x1f,0x11,0x11,0x11},{0x0e,0x04,0x04,0x04,0x04,0x04,0x0e},{0x07,0x02,0x02,0x02,0x02,0x12,0x0c},{0x11,0x12,0x14,0x18,0x14,0x12,0x11},{0x10,0x10,0x10,0x10,0x10,0x10,0x1f},{0x11,0x1b,0x15,0x15,0x11,0x11,0x11},{0x11,0x11,0x19,0x15,0x13,0x11,0x11},{0x0e,0x11,0x11,0x11,0x11,0x11,0x0e},{0x1e,0x11,0x11,0x1e,0x10,0x10,0x10},{0x0e,0x11,0x11,0x11,0x15,0x12,0x0d},{0x1e,0x11,0x11,0x1e,0x14,0x12,0x11},{0x0f,0x10,0x10,0x0e,0x01,0x01,0x1e},{0x1f,0x04,0x04,0x04,0x04,0x04,0x04},{0x11,0x11,0x11,0x11,0x11,0x11,0x0e},{0x11,0x11,0x11,0x11,0x11,0x0a,0x04},{0x11,0x11,0x11,0x15,0x15,0x15,0x0a},{0x11,0x11,0x0a,0x04,0x0a,0x11,0x11},{0x11,0x11,0x11,0x0a,0x04,0x04,0x04},{0x1f,0x01,0x02,0x04,0x08,0x10,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f},{0x1f,0x11,0x11,0x11,0x11,0x11,0x1f}};
static void hud_quads(const float rgba[4], const float *v, int nv, int blend){
    if (nv <= 0) return; float *q = ring_alloc((u32)(nv * 3 * sizeof(float))); if (!q) return;
    for (int i = 0; i < nv; i++) { q[i * 3] = v[i * 2]; q[i * 3 + 1] = v[i * 2 + 1]; q[i * 3 + 2] = 0.5f; }
    SceGxmBlendInfo bi; memset(&bi, 0, sizeof bi); bi.colorMask = SCE_GXM_COLOR_MASK_ALL;
    if (blend) { bi.colorFunc = bi.alphaFunc = SCE_GXM_BLEND_FUNC_ADD; bi.colorSrc = SCE_GXM_BLEND_FACTOR_SRC_ALPHA; bi.colorDst = SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA; bi.alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bi.alphaDst = SCE_GXM_BLEND_FACTOR_ZERO; }
    else { bi.colorSrc = bi.alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bi.colorDst = bi.alphaDst = SCE_GXM_BLEND_FACTOR_ZERO; }
    SceGxmFragmentProgram *fp = get_fp(FP_FILL, VP[VP_FILL].gxp, &bi); if (!fp) return;
    DS_NONE(); sceGxmSetCullMode(ctx, SCE_GXM_CULL_NONE);
    sceGxmSetVertexProgram(ctx, VP[VP_FILL].vp); sceGxmSetFragmentProgram(ctx, fp);
    void *fb = NULL; sceGxmReserveFragmentDefaultUniformBuffer(ctx, &fb); U4(fb, FP[FP_FILL].col, rgba);
    for (int first = 0; first < nv; first += MAXV) { int n = nv - first > MAXV ? MAXV : nv - first; sceGxmSetVertexStream(ctx, 0, q + first * 3);
        if (first) { sceGxmReserveFragmentDefaultUniformBuffer(ctx, &fb); U4(fb, FP[FP_FILL].col, rgba); }
        sceGxmDraw(ctx, SCE_GXM_PRIMITIVE_TRIANGLES, SCE_GXM_INDEX_FORMAT_U16, idx_buf, (unsigned)n); } }
static void hud_draw_now(void){
    int n = hud_n; const char *const *lines = hud_lines; if (n <= 0 || !lines) return;
    static float *v; static int cap; int nv = 0, maxw = 0; const int ww = DISP_W, wh = DISP_H;
    const int S = 2, CW = 6 * S, LH = 9 * S, X0 = 6, Y0 = 6;
    for (int i = 0; i < n; i++) { int l = (int)strlen(lines[i]); if (l > maxw) maxw = l; }
    int need = 6 * 2 * (maxw * 35 * n + 1); if (need > cap) { cap = need; v = realloc(v, sizeof(float) * (size_t)cap); if (!v) { cap = 0; return; } }
    /* display rows grow downwards from clip y = -1 (row 0 = top of the screen) */
#define HQ(x0, y0, x1, y1) do { float a = (x0) * 2.0f / ww - 1, b = (y0) * 2.0f / wh - 1, c = (x1) * 2.0f / ww - 1, d = (y1) * 2.0f / wh - 1; \
        float q6[12] = {a, b, c, b, a, d, c, b, c, d, a, d}; memcpy(v + nv * 2, q6, sizeof q6); nv += 6; } while (0)
    HQ(X0 - 4, Y0 - 4, X0 + maxw * CW + 2, Y0 + n * LH + 2);
    { static const float bg[4] = {0, 0, 0, 0.55f}; hud_quads(bg, v, nv, 1); }
    nv = 0;
    for (int i = 0; i < n; i++) for (int k = 0; lines[i][k]; k++) {
        int ch = (unsigned char)lines[i][k]; if (ch >= 'a' && ch <= 'z') ch -= 32; if (ch < 32 || ch > 95) ch = '?';
        const unsigned char *g = hud_font[ch - 32];
        for (int r = 0; r < 7; r++) for (int c = 0; c < 5; c++) if (g[r] & (16 >> c)) { int x = X0 + k * CW + c * S, y = Y0 + i * LH + r * S; HQ(x, y, x + S, y + S); } }
#undef HQ
    { static const float fg[4] = {1, 1, 0.6f, 1}; hud_quads(fg, v, nv, 0); } }

/* ------------------------------------------------------------------ init */
static void *patcher_host_alloc(void *ud, unsigned int size){ (void)ud; return malloc(size); }
static void patcher_host_free(void *ud, void *mem){ (void)ud; free(mem); }
int gfx_init(void){
    { extern u32 rs_patch_res_scale(void); RS_S = (int)rs_patch_res_scale(); if (RS_S < 1) RS_S = 1; if (RS_S > 4) RS_S = 4;
      SURF_H = RS_S >= 3 ? 272 : 512;                  /* 2048x2048 surfaces would not fit CDRAM; the PSP screen is 272 rows */
      extern u32 rs_patch_fxaa(void); use_fxaa = rs_patch_fxaa() != 0; }
    cull_flip = rs_setting_int("RS_CULL_FLIP", 0); vsync_on = rs_setting_int("RS_VSYNC", 1); native_on = rs_setting_int("RS_NATIVE_GE", 1);
    SceGxmInitializeParams ip; memset(&ip, 0, sizeof ip);
    ip.flags = 0; ip.displayQueueMaxPendingCount = DISP_N - 1; ip.displayQueueCallback = display_cb; ip.displayQueueCallbackDataSize = sizeof(disp_cb_t);
    ip.parameterBufferSize = SCE_GXM_DEFAULT_PARAMETER_BUFFER_SIZE;
    int r = sceGxmInitialize(&ip); if (r < 0) { LOGG("sceGxmInitialize failed 0x%08X\n", (unsigned)r); return -1; }
    notif = sceGxmGetNotificationRegion(); *notif = 0;

    /* context */
    unsigned fu_off = 0;
    void *vdm = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, SCE_GXM_DEFAULT_VDM_RING_BUFFER_SIZE, SCE_GXM_MEMORY_ATTRIB_READ, NULL);
    unsigned vring_sz = 8 * 1024 * 1024, fring_sz = 2 * 1024 * 1024;           /* default uniform buffers: HW T&L draws upload ~1.6 KB each */
    void *vring = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, vring_sz, SCE_GXM_MEMORY_ATTRIB_READ, NULL);
    void *fring = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, fring_sz, SCE_GXM_MEMORY_ATTRIB_READ, NULL);
    void *furing = usse_alloc(1, SCE_GXM_DEFAULT_FRAGMENT_USSE_RING_BUFFER_SIZE, &fu_off);
    if (!vdm || !vring || !fring || !furing) { LOGG("context memory allocation failed\n"); return -1; }
    SceGxmContextParams cp; memset(&cp, 0, sizeof cp);
    cp.hostMem = malloc(SCE_GXM_MINIMUM_CONTEXT_HOST_MEM_SIZE); cp.hostMemSize = SCE_GXM_MINIMUM_CONTEXT_HOST_MEM_SIZE;
    cp.vdmRingBufferMem = vdm; cp.vdmRingBufferMemSize = SCE_GXM_DEFAULT_VDM_RING_BUFFER_SIZE;
    cp.vertexRingBufferMem = vring; cp.vertexRingBufferMemSize = vring_sz;
    cp.fragmentRingBufferMem = fring; cp.fragmentRingBufferMemSize = fring_sz;
    cp.fragmentUsseRingBufferMem = furing; cp.fragmentUsseRingBufferMemSize = SCE_GXM_DEFAULT_FRAGMENT_USSE_RING_BUFFER_SIZE; cp.fragmentUsseRingBufferOffset = fu_off;
    r = sceGxmCreateContext(&cp, &ctx); if (r < 0) { LOGG("sceGxmCreateContext failed 0x%08X\n", (unsigned)r); return -1; }

    /* shader patcher */
    unsigned pbuf_sz = 256 * 1024, pv_sz = 256 * 1024, pf_sz = 256 * 1024, pv_off = 0, pf_off = 0;
    void *pbuf = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, pbuf_sz, SCE_GXM_MEMORY_ATTRIB_READ, NULL);
    void *pv = usse_alloc(0, pv_sz, &pv_off), *pf = usse_alloc(1, pf_sz, &pf_off);
    if (!pbuf || !pv || !pf) { LOGG("shader patcher memory allocation failed\n"); return -1; }
    SceGxmShaderPatcherParams pp; memset(&pp, 0, sizeof pp);
    pp.hostAllocCallback = patcher_host_alloc; pp.hostFreeCallback = patcher_host_free;
    pp.bufferMem = pbuf; pp.bufferMemSize = pbuf_sz;
    pp.vertexUsseMem = pv; pp.vertexUsseMemSize = pv_sz; pp.vertexUsseOffset = pv_off;
    pp.fragmentUsseMem = pf; pp.fragmentUsseMemSize = pf_sz; pp.fragmentUsseOffset = pf_off;
    r = sceGxmShaderPatcherCreate(&pp, &patcher); if (r < 0) { LOGG("sceGxmShaderPatcherCreate failed 0x%08X\n", (unsigned)r); return -1; }

    /* render targets: one for the 512x512 (x scale) surfaces, one for the display */
    SceGxmRenderTargetParams rp; memset(&rp, 0, sizeof rp);
    rp.width = (uint16_t)PXW; rp.height = (uint16_t)PXH; rp.scenesPerFrame = 8; rp.multisampleMode = SCE_GXM_MULTISAMPLE_NONE; rp.driverMemBlock = -1;
    r = sceGxmCreateRenderTarget(&rp, &rt_surf);
    if (r < 0) { rp.scenesPerFrame = 1; r = sceGxmCreateRenderTarget(&rp, &rt_surf); }
    if (r < 0) { LOGG("render target %dx%d failed 0x%08X\n", PXW, PXH, (unsigned)r); return -1; }
    rp.width = DISP_W; rp.height = DISP_H; rp.scenesPerFrame = 1;
    r = sceGxmCreateRenderTarget(&rp, &rt_disp); if (r < 0) { LOGG("display render target failed 0x%08X\n", (unsigned)r); return -1; }

    /* shared depth/stencil (D24S8, tiled), loaded and stored by every scene */
    { unsigned w = ALIGN(PXW, SCE_GXM_TILE_SIZEX), h = ALIGN(PXH, SCE_GXM_TILE_SIZEY);
      void *dm = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, w * h * 4, SCE_GXM_MEMORY_ATTRIB_RW, NULL); if (!dm) return -1;
      sceGxmDepthStencilSurfaceInit(&depth_surf, SCE_GXM_DEPTH_STENCIL_FORMAT_S8D24, SCE_GXM_DEPTH_STENCIL_SURFACE_TILED, w, dm, NULL);
      sceGxmDepthStencilSurfaceSetForceLoadMode(&depth_surf, SCE_GXM_DEPTH_STENCIL_FORCE_LOAD_ENABLED);
      sceGxmDepthStencilSurfaceSetForceStoreMode(&depth_surf, SCE_GXM_DEPTH_STENCIL_FORCE_STORE_ENABLED); }

    /* display buffers */
    for (int i = 0; i < DISP_N; i++) {
        disp_mem[i] = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, DISP_W * DISP_H * 4, SCE_GXM_MEMORY_ATTRIB_RW, NULL); if (!disp_mem[i]) return -1;
        memset(disp_mem[i], 0, DISP_W * DISP_H * 4);
        sceGxmColorSurfaceInit(&disp_cs[i], SCE_GXM_COLOR_FORMAT_U8U8U8U8_ABGR, SCE_GXM_COLOR_SURFACE_LINEAR, SCE_GXM_COLOR_SURFACE_SCALE_NONE, SCE_GXM_OUTPUT_REGISTER_SIZE_32BIT, DISP_W, DISP_H, DISP_W, disp_mem[i]);
        sceGxmSyncObjectCreate(&disp_sync[i]); }
    disp_front = 0; disp_back = 1;
    disp_depth = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, ALIGN(DISP_W, SCE_GXM_TILE_SIZEX) * ALIGN(DISP_H, SCE_GXM_TILE_SIZEY) * 4, SCE_GXM_MEMORY_ATTRIB_RW, NULL);

    /* index buffer, vertex ring, texture pool */
    idx_buf = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, 64000 * 2, SCE_GXM_MEMORY_ATTRIB_READ, NULL); if (!idx_buf) return -1;
    for (int i = 0; i < 64000; i++) idx_buf[i] = (u16)i;
    ring_size = (u32)rs_setting_int("RS_VERTEX_RING_MB", 16) << 20;
    ring = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, ring_size, SCE_GXM_MEMORY_ATTRIB_READ, NULL); if (!ring) return -1;
    pool_size = (u32)rs_setting_int("RS_TEXTURE_POOL_MB", 32) << 20;
    pool = gpu_alloc(SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, pool_size, SCE_GXM_MEMORY_ATTRIB_READ, NULL); if (!pool) return -1;
    pool_release(0, pool_size);

    /* programs */
    { static const char *n[4] = {"aPos", "aUV", "aCol", "aFog"}; static const u8 c[4] = {4, 2, 4, 1}; static const u16 o[4] = {0, 16, 24, 40};
      if (!make_vprog(&VP[VP_MAIN], VS_MAIN, "main", n, c, o, 4, sizeof(gfx_vtx_t))) return -1; }
    { static const char *n[1] = {"aPos"}; static const u8 c[1] = {3}; static const u16 o[1] = {0};
      if (!make_vprog(&VP[VP_FILL], FILLVS_SRC, "fill", n, c, o, 1, 12)) return -1; }
    { static const char *n[2] = {"aPos", "aUV"}; static const u8 c[2] = {2, 2}; static const u16 o[2] = {0, 8};
      if (!make_vprog(&VP[VP_PRES], PVS_SRC, "present", n, c, o, 2, 16)) return -1; }
    if (!make_fprog(&FP[FP_MAIN], FS_MAIN, "main") || !make_fprog(&FP[FP_FILL], FILLFS_SRC, "fill") || !make_fprog(&FP[FP_PRES], PFS_SRC, "present") || !make_fprog(&FP[FP_COPY], CFS_SRC, "copy")) return -1;
    if (use_fxaa && !make_fprog(&FP[FP_FXAA], FFS_SRC, "fxaa")) { LOGG("FXAA program unavailable: presenting without it\n"); FP[FP_FXAA].gxp = NULL; }
    { extern u32 rs_patch_hw_transform(void); hw_ok = rs_patch_hw_transform() != 0;
      static const char *n[6] = {"aP", "aN", "aT", "aC", "aW0", "aW1"}; static const u8 c[6] = {3, 3, 2, 4, 4, 4};
      static const u16 o[6] = {offsetof(gfx_hvtx_t, x), offsetof(gfx_hvtx_t, nx), offsetof(gfx_hvtx_t, u), offsetof(gfx_hvtx_t, r), offsetof(gfx_hvtx_t, w), offsetof(gfx_hvtx_t, w) + 16};
      for (int v = 0; v < 4 && hw_ok; v++) { size_t len = strlen(HWVS_SRC) + 64; char *src = malloc(len);
          snprintf(src, len, "%s%s%s", (v & 1) ? "#define SKIN 1\n" : "", (v & 2) ? "#define LIT 1\n" : "", HWVS_SRC);
          char nm[32]; snprintf(nm, sizeof nm, "hw T&L %d", v);
          if (!make_vprog(&VP[VP_HW0 + v], src, nm, n, c, o, 6, sizeof(gfx_hvtx_t))) hw_ok = 0;
          free(src); }
      LOGG("vertex transform & lighting: %s\n", hw_ok ? "GPU (vertex programs)" : "CPU"); }
    LOGG("renderer ready: %dx%d surfaces (scale %d: the PSP screen is drawn at %dx%d), %u MB vertex ring, %u MB texture pool, FXAA %s\n", PXW, PXH, RS_S, 480 * RS_S, 272 * RS_S, ring_size >> 20, pool_size >> 20, use_fxaa ? "on" : "off");
    return 0; }

/* ------------------------------------------------------------------ frontend entry points (platform/vita/main.c) */
int rs_renderer_start(void){
    int r = shark_init(NULL); if (r < 0) r = shark_init("ur0:data/external/libshacccg.suprx");
    if (r < 0) { LOGG("the Cg shader compiler is not installed: extract ur0:data/libshacccg.suprx with ShaRKF00D (0x%08X)\n", (unsigned)r); return -1; }
    shark_install_log_cb(shark_log);
    return gfx_init(); }
void rs_renderer_present(const char *const *lines, int n){ gfx_hud(lines, n, DISP_W, DISP_H); gfx_present(DISP_W, DISP_H); }

