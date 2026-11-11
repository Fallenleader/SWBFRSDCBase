/* PS Vita renderer (GXM), 960x544.
 * - Level geometry and textures live in video memory (CDRAM), sub-allocated from one pool per level (CDRAM blocks are 256 KB
 *   granular, so one block per texture would waste most of it).
 * - The game's palette textures are sampled as P8 with their palette in video memory: no expansion to RGBA (4-bit images are
 *   widened to 8-bit indices once at load).
 * - One vertex program and three fragment programs (opaque, cutout, blend layer); uniforms are written once per frame per stage.
 * - Shaders are compiled at first start with the system Cg compiler (ur0:data/libshacccg.suprx, through vitaShaRK) and cached in
 *   ux0:data/Aurek/shaders.
 * - Triple-buffered display, paced by vblank when vsync is on. */
#include "../../render/ak_gfx.h"
#include "../../render/ak_font.h"
#include "../../core/ak_settings.h"
#include "../plat.h"
#include <psp2/gxm.h>
#include <psp2/display.h>
#include <psp2/kernel/sysmem.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/io/fcntl.h>
#include <psp2/io/stat.h>
#include <vitashark.h>
#include <stdio.h>
#include <stdlib.h>

#define W 960
#define H 544
#define STRIDE 960
#define NBUF 3
#define SCRATCH (2u << 20)
#define ALIGN(x, a) (((x) + ((a) - 1)) & ~((size_t)(a) - 1))

struct ak_gfx_buf { void *mem; };
struct ak_gfx_tex { SceGxmTexture tex; u8 *px; };

static SceGxmContext *ctx; static SceGxmRenderTarget *rt; static SceGxmShaderPatcher *patcher;
static SceGxmColorSurface surf[NBUF]; static SceGxmSyncObject *sync_[NBUF]; static void *fb[NBUF];
static SceGxmDepthStencilSurface depth;
static int back, front, frame_no; static volatile unsigned *notif;
static u8 *scratch[NBUF]; static size_t scratch_used; static int scr; static unsigned scr_fence[NBUF];
static char cache_dir[256], name[64];
static bool vsync = true; static int cull_mode;

/* ------------------------------------------------------------------ memory */
static void *block(SceKernelMemBlockType type, size_t size, SceUID *uid)
{
    size = type == SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW ? ALIGN(size, 256 * 1024) : ALIGN(size, 4096);
    *uid = sceKernelAllocMemBlock("aurek", type, size, NULL);
    if (*uid < 0) return NULL;
    void *p = NULL; sceKernelGetMemBlockBase(*uid, &p);
    if (sceGxmMapMemory(p, size, SCE_GXM_MEMORY_ATTRIB_READ | SCE_GXM_MEMORY_ATTRIB_WRITE) < 0) { sceKernelFreeMemBlock(*uid); return NULL; }
    return p;
}
static void *gpu_alloc(size_t size, bool cdram)
{
    SceUID u; void *p = cdram ? block(SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, size, &u) : NULL;
    if (!p) p = block(SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, size, &u);
    return p;
}
static void *usse_alloc(size_t size, bool frag, unsigned *off)
{
    SceUID u; size = ALIGN(size, 4096);
    u = sceKernelAllocMemBlock("aurek_usse", SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, size, NULL);
    if (u < 0) return NULL;
    void *p; sceKernelGetMemBlockBase(u, &p);
    if ((frag ? sceGxmMapFragmentUsseMemory(p, size, off) : sceGxmMapVertexUsseMemory(p, size, off)) < 0) return NULL;
    return p;
}

/* level pool: bump allocation in CDRAM; reset when everything from it has been freed (a level change) */
static u8 *pool; static size_t pool_size, pool_used; static int pool_live;
static void *pool_alloc(size_t size, size_t align)
{
    size_t o = ALIGN(pool_used, align);
    if (o + size > pool_size) { AK_ERROR("gxm", "video memory pool full (%zu + %zu of %zu)", pool_used, size, pool_size); return NULL; }
    pool_used = o + size; pool_live++;
    return pool + o;
}
static void pool_release(void) { if (--pool_live <= 0) { pool_live = 0; pool_used = 0; } }

/* ------------------------------------------------------------------ shaders */
static u64 fnv64(const char *s) { u64 h = 14695981039346656037ull; for (; *s; s++) { h ^= (u8)*s; h *= 1099511628211ull; } return h; }
static bool shark_on;
typedef struct { const char *src; int frag; void *prog; u32 size; } cjob;
static int compile_thread(SceSize n, void *a)
{
    cjob *j = *(cjob **)a; u32 size = (u32)strlen(j->src);
    SceGxmProgram *p = shark_compile_shader_extended(j->src, &size, j->frag ? SHARK_FRAGMENT_SHADER : SHARK_VERTEX_SHADER, SHARK_OPT_FAST, SHARK_ENABLE, SHARK_ENABLE, SHARK_ENABLE);
    if (p && size) { j->prog = malloc(size); if (j->prog) { memcpy(j->prog, p, size); j->size = size; } }
    else {
        const SceShaccCgCompileOutput *o = shark_get_internal_compile_output();
        for (int i = 0; o && i < o->diagnosticCount; i++)
            AK_ERROR("gxm", "shader %d:%d: %s", o->diagnostics[i].location ? (int)o->diagnostics[i].location->lineNumber : 0,
                     o->diagnostics[i].location ? (int)o->diagnostics[i].location->columnNumber : 0, o->diagnostics[i].message ? o->diagnostics[i].message : "?");
    }
    shark_clear_output();
    return sceKernelExitDeleteThread(0);
}
static const SceGxmProgram *shader(const char *src, int frag)
{
    char path[320]; snprintf(path, sizeof path, "%s/ak_%016llx_%d.gxp", cache_dir, (unsigned long long)fnv64(src), frag);
    SceUID fd = sceIoOpen(path, SCE_O_RDONLY, 0);
    if (fd >= 0) {
        int n = (int)sceIoLseek(fd, 0, SCE_SEEK_END); sceIoLseek(fd, 0, SCE_SEEK_SET);
        void *b = n > 0 ? malloc((size_t)n) : NULL; int r = b ? sceIoRead(fd, b, (SceSize)n) : -1; sceIoClose(fd);
        if (b && r == n && sceGxmProgramCheck((const SceGxmProgram *)b) >= 0) return (const SceGxmProgram *)b;
        free(b);
    }
    if (!shark_on) {
        if (shark_init(NULL) < 0) { AK_ERROR("gxm", "cannot start the shader compiler: is ur0:data/libshacccg.suprx installed?"); return NULL; }
        shark_on = true;
    }
    cjob *j = (cjob *)calloc(1, sizeof *j); j->src = src; j->frag = frag;
    SceUID th = sceKernelCreateThread("shacccg", compile_thread, 0x10000100, 4 << 20, 0, 0, NULL);   /* the compiler recurses deeply */
    sceKernelStartThread(th, sizeof j, &j); sceKernelWaitThreadEnd(th, NULL, NULL);
    void *p = j->prog; u32 size = j->size; free(j);
    if (!p || sceGxmProgramCheck((const SceGxmProgram *)p) < 0) { AK_ERROR("gxm", "%s shader failed to compile:\n%s", frag ? "fragment" : "vertex", src); free(p); return NULL; }
    sceIoMkdir(cache_dir, 0777);
    fd = sceIoOpen(path, SCE_O_WRONLY | SCE_O_CREAT | SCE_O_TRUNC, 0666);
    if (fd >= 0) { sceIoWrite(fd, p, size); sceIoClose(fd); }
    return (const SceGxmProgram *)p;
}

/* level geometry: colour = texture x vertex colour x scale, fog by view depth.  Colours travel as TEXCOORD (not COLOR) so a scale
 * above 1 is not clamped before the multiply. */
static const char *vs_src =
    "void main(float3 aPos, float2 aUv, float4 aCol, uniform float4 uVP[4], uniform float3 uFogRange,\n"
    "  out float4 vPos : POSITION, out float2 vUv : TEXCOORD0, out half4 vCol : TEXCOORD1, out half vFog : TEXCOORD2)\n"
    "{ float4 q = float4(aPos, 1.0); float4 p = float4(dot(q, uVP[0]), dot(q, uVP[1]), dot(q, uVP[2]), dot(q, uVP[3])); vPos = p; vUv = aUv; vCol = half4(aCol.rgb * uFogRange.z, aCol.a);\n"
    "  vFog = uFogRange.y > uFogRange.x ? saturate((p.w - uFogRange.x) / (uFogRange.y - uFogRange.x)) : 0.0; }\n";
static const char *fs_opaque =
    "half4 main(float2 vUv : TEXCOORD0, half4 vCol : TEXCOORD1, half vFog : TEXCOORD2, uniform sampler2D uTex, uniform half3 uFog)\n"
    "{ half4 t = tex2D(uTex, vUv); return half4(lerp(t.rgb * vCol.rgb, uFog, vFog), 1.0); }\n";
static const char *fs_cutout =
    "half4 main(float2 vUv : TEXCOORD0, half4 vCol : TEXCOORD1, half vFog : TEXCOORD2, uniform sampler2D uTex, uniform half3 uFog)\n"
    "{ half4 t = tex2D(uTex, vUv); if (t.a < 0.5) discard; return half4(lerp(t.rgb * vCol.rgb, uFog, vFog), 1.0); }\n";
static const char *fs_alpha =      /* layer, blend, add: one shader, three blend states */
    "half4 main(float2 vUv : TEXCOORD0, half4 vCol : TEXCOORD1, half vFog : TEXCOORD2, uniform sampler2D uTex, uniform half3 uFog)\n"
    "{ half4 t = tex2D(uTex, vUv); return half4(lerp(t.rgb * vCol.rgb, uFog, vFog), t.a * vCol.a); }\n";
static const char *ui_vs =
    "void main(float2 aPos, float2 aUv, float4 aCol, uniform float2 uScale,\n"
    "  out float4 vPos : POSITION, out float2 vUv : TEXCOORD0, out half4 vCol : TEXCOORD1)\n"
    "{ vPos = float4(aPos.x * uScale.x - 1.0, 1.0 - aPos.y * uScale.y, 0.5, 1.0); vUv = aUv; vCol = aCol; }\n";
static const char *ui_fs =
    "half4 main(float2 vUv : TEXCOORD0, half4 vCol : TEXCOORD1, uniform sampler2D uTex) { return tex2D(uTex, vUv) * vCol; }\n";

static SceGxmVertexProgram *vp3d, *vpui; static SceGxmFragmentProgram *fp3d[AK_PIPE_COUNT], *fpui;
static const SceGxmProgramParameter *p_vp, *p_fogr, *p_fog[AK_PIPE_COUNT], *p_uiscale;
static SceGxmTexture font_tex, white_tex;

static bool make_programs(void)
{
    const SceGxmProgram *v = shader(vs_src, 0), *u = shader(ui_vs, 0), *uf = shader(ui_fs, 1);
    if (!v || !u || !uf) return false;
    SceGxmShaderPatcherId vid, uid, ufid;
    sceGxmShaderPatcherRegisterProgram(patcher, v, &vid); sceGxmShaderPatcherRegisterProgram(patcher, u, &uid); sceGxmShaderPatcherRegisterProgram(patcher, uf, &ufid);
    const SceGxmProgramParameter *pa = sceGxmProgramFindParameterByName(v, "aPos"), *pu = sceGxmProgramFindParameterByName(v, "aUv"), *pc = sceGxmProgramFindParameterByName(v, "aCol");
    p_vp = sceGxmProgramFindParameterByName(v, "uVP"); p_fogr = sceGxmProgramFindParameterByName(v, "uFogRange");
    if (!pa || !pu || !pc || !p_vp || !p_fogr) { AK_ERROR("gxm", "level shader parameters missing"); return false; }
    SceGxmVertexAttribute at[3]; memset(at, 0, sizeof at);
    at[0].offset = offsetof(ak_vtx, pos); at[0].format = SCE_GXM_ATTRIBUTE_FORMAT_F32; at[0].componentCount = 3; at[0].regIndex = sceGxmProgramParameterGetResourceIndex(pa);
    at[1].offset = offsetof(ak_vtx, uv);  at[1].format = SCE_GXM_ATTRIBUTE_FORMAT_F32; at[1].componentCount = 2; at[1].regIndex = sceGxmProgramParameterGetResourceIndex(pu);
    at[2].offset = offsetof(ak_vtx, col); at[2].format = SCE_GXM_ATTRIBUTE_FORMAT_U8N; at[2].componentCount = 4; at[2].regIndex = sceGxmProgramParameterGetResourceIndex(pc);
    SceGxmVertexStream vs = { sizeof(ak_vtx), SCE_GXM_INDEX_SOURCE_INDEX_32BIT };
    if (sceGxmShaderPatcherCreateVertexProgram(patcher, vid, at, 3, &vs, 1, &vp3d) < 0) { AK_ERROR("gxm", "level vertex program"); return false; }
    SceGxmBlendInfo bl; memset(&bl, 0, sizeof bl);
    bl.colorMask = SCE_GXM_COLOR_MASK_ALL; bl.colorFunc = bl.alphaFunc = SCE_GXM_BLEND_FUNC_ADD;
    bl.colorSrc = SCE_GXM_BLEND_FACTOR_SRC_ALPHA; bl.colorDst = SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    bl.alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bl.alphaDst = SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    SceGxmBlendInfo add = bl; add.colorDst = SCE_GXM_BLEND_FACTOR_ONE; add.alphaDst = SCE_GXM_BLEND_FACTOR_ONE;
    for (int i = 0; i < AK_PIPE_COUNT; i++) {
        const char *src = i == AK_PIPE_OPAQUE ? fs_opaque : (i == AK_PIPE_CUTOUT || i == AK_PIPE_OVERLAY) ? fs_cutout : fs_alpha;
        const SceGxmBlendInfo *b = i == AK_PIPE_ADD ? &add : i >= AK_PIPE_LAYER ? &bl : NULL;
        const SceGxmProgram *f = shader(src, 1); SceGxmShaderPatcherId fid;
        if (!f) return false;
        sceGxmShaderPatcherRegisterProgram(patcher, f, &fid);         /* the same program registered twice gives the same id */
        p_fog[i] = sceGxmProgramFindParameterByName(f, "uFog");
        if (sceGxmShaderPatcherCreateFragmentProgram(patcher, fid, SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4, SCE_GXM_MULTISAMPLE_NONE,
                                                     b, v, &fp3d[i]) < 0) { AK_ERROR("gxm", "fragment program %d", i); return false; }
    }
    pa = sceGxmProgramFindParameterByName(u, "aPos"); pu = sceGxmProgramFindParameterByName(u, "aUv"); pc = sceGxmProgramFindParameterByName(u, "aCol");
    p_uiscale = sceGxmProgramFindParameterByName(u, "uScale");
    if (!pa || !pu || !pc || !p_uiscale) { AK_ERROR("gxm", "UI shader parameters missing"); return false; }
    at[0].offset = 0;  at[0].format = SCE_GXM_ATTRIBUTE_FORMAT_F32; at[0].componentCount = 2; at[0].regIndex = sceGxmProgramParameterGetResourceIndex(pa);
    at[1].offset = 8;  at[1].format = SCE_GXM_ATTRIBUTE_FORMAT_F32; at[1].componentCount = 2; at[1].regIndex = sceGxmProgramParameterGetResourceIndex(pu);
    at[2].offset = 16; at[2].format = SCE_GXM_ATTRIBUTE_FORMAT_U8N; at[2].componentCount = 4; at[2].regIndex = sceGxmProgramParameterGetResourceIndex(pc);
    SceGxmVertexStream us = { 20, SCE_GXM_INDEX_SOURCE_INDEX_16BIT };
    if (sceGxmShaderPatcherCreateVertexProgram(patcher, uid, at, 3, &us, 1, &vpui) < 0) return false;
    if (sceGxmShaderPatcherCreateFragmentProgram(patcher, ufid, SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4, SCE_GXM_MULTISAMPLE_NONE, &bl, u, &fpui) < 0) return false;
    return true;
}

/* ------------------------------------------------------------------ display */
typedef struct { void *addr; } disp_data;
static void disp_cb(const void *d)
{
    SceDisplayFrameBuf f; memset(&f, 0, sizeof f);
    f.size = sizeof f; f.base = ((const disp_data *)d)->addr; f.pitch = STRIDE; f.pixelformat = SCE_DISPLAY_PIXELFORMAT_A8B8G8R8; f.width = W; f.height = H;
    sceDisplaySetFrameBuf(&f, SCE_DISPLAY_SETBUF_NEXTFRAME);
    if (vsync) sceDisplayWaitVblankStart();
}
static void *patcher_alloc(void *u, unsigned n) { (void)u; return malloc(n); }
static void patcher_free(void *u, void *m) { (void)u; free(m); }

#define UI_MAXQ 2048
typedef struct { f32 x, y, u, v; u32 c; } uiv;
static uiv ui_v[UI_MAXQ * 4]; static int ui_n; static u16 *quad_idx;

static bool tex_linear(SceGxmTexture *t, const void *px, int w, int h, int bpp, SceGxmTextureFormat fmt, bool lin)
{
    int stride = (int)ALIGN(w, 8);
    u8 *m = (u8 *)gpu_alloc((size_t)stride * h * bpp, true);
    if (!m) return false;
    for (int y = 0; y < h; y++) memcpy(m + (size_t)y * stride * bpp, (const u8 *)px + (size_t)y * w * bpp, (size_t)w * bpp);
    sceGxmTextureInitLinear(t, m, fmt, (unsigned)w, (unsigned)h, 0);
    sceGxmTextureSetMinFilter(t, lin ? SCE_GXM_TEXTURE_FILTER_LINEAR : SCE_GXM_TEXTURE_FILTER_POINT);
    sceGxmTextureSetMagFilter(t, lin ? SCE_GXM_TEXTURE_FILTER_LINEAR : SCE_GXM_TEXTURE_FILTER_POINT);
    return true;
}

bool ak_gfx_init(const ak_gfx_config *c)
{
    snprintf(cache_dir, sizeof cache_dir, "%s/shaders", c->cache_dir); vsync = c->vsync;
    cull_mode = ak_setting_int("AK_CULL", 0);
    SceGxmInitializeParams ip; memset(&ip, 0, sizeof ip);
    ip.displayQueueMaxPendingCount = NBUF - 1; ip.displayQueueCallback = disp_cb; ip.displayQueueCallbackDataSize = sizeof(disp_data);
    ip.parameterBufferSize = SCE_GXM_DEFAULT_PARAMETER_BUFFER_SIZE;
    if (sceGxmInitialize(&ip) < 0) { AK_ERROR("gxm", "sceGxmInitialize"); return false; }
    unsigned off;
    void *vdm = gpu_alloc(SCE_GXM_DEFAULT_VDM_RING_BUFFER_SIZE, false), *vr = gpu_alloc(SCE_GXM_DEFAULT_VERTEX_RING_BUFFER_SIZE, false);
    void *fr = gpu_alloc(SCE_GXM_DEFAULT_FRAGMENT_RING_BUFFER_SIZE, false), *fu = usse_alloc(SCE_GXM_DEFAULT_FRAGMENT_USSE_RING_BUFFER_SIZE, true, &off);
    if (!vdm || !vr || !fr || !fu) return false;
    SceGxmContextParams cp; memset(&cp, 0, sizeof cp);
    cp.hostMem = malloc(SCE_GXM_MINIMUM_CONTEXT_HOST_MEM_SIZE); cp.hostMemSize = SCE_GXM_MINIMUM_CONTEXT_HOST_MEM_SIZE;
    cp.vdmRingBufferMem = vdm; cp.vdmRingBufferMemSize = SCE_GXM_DEFAULT_VDM_RING_BUFFER_SIZE;
    cp.vertexRingBufferMem = vr; cp.vertexRingBufferMemSize = SCE_GXM_DEFAULT_VERTEX_RING_BUFFER_SIZE;
    cp.fragmentRingBufferMem = fr; cp.fragmentRingBufferMemSize = SCE_GXM_DEFAULT_FRAGMENT_RING_BUFFER_SIZE;
    cp.fragmentUsseRingBufferMem = fu; cp.fragmentUsseRingBufferMemSize = SCE_GXM_DEFAULT_FRAGMENT_USSE_RING_BUFFER_SIZE; cp.fragmentUsseRingBufferOffset = off;
    if (sceGxmCreateContext(&cp, &ctx) < 0) { AK_ERROR("gxm", "sceGxmCreateContext"); return false; }
    SceGxmRenderTargetParams rp; memset(&rp, 0, sizeof rp);
    rp.width = W; rp.height = H; rp.scenesPerFrame = 1; rp.multisampleMode = SCE_GXM_MULTISAMPLE_NONE; rp.driverMemBlock = -1;
    if (sceGxmCreateRenderTarget(&rp, &rt) < 0) return false;
    for (int i = 0; i < NBUF; i++) {
        fb[i] = gpu_alloc(4u * STRIDE * H, true);
        if (!fb[i]) return false;
        memset(fb[i], 0, 4u * STRIDE * H);
        sceGxmColorSurfaceInit(&surf[i], SCE_GXM_COLOR_FORMAT_A8B8G8R8, SCE_GXM_COLOR_SURFACE_LINEAR, SCE_GXM_COLOR_SURFACE_SCALE_NONE,
                               SCE_GXM_OUTPUT_REGISTER_SIZE_32BIT, W, H, STRIDE, fb[i]);
        sceGxmSyncObjectCreate(&sync_[i]);
        scratch[i] = (u8 *)gpu_alloc(SCRATCH, false);
        if (!scratch[i]) return false;
    }
    unsigned dw = ALIGN(W, SCE_GXM_TILE_SIZEX), dh = ALIGN(H, SCE_GXM_TILE_SIZEY);
    void *dm = gpu_alloc(4u * dw * dh, true);
    if (!dm) return false;
    sceGxmDepthStencilSurfaceInit(&depth, SCE_GXM_DEPTH_STENCIL_FORMAT_S8D24, SCE_GXM_DEPTH_STENCIL_SURFACE_TILED, dw, dm, NULL);
    sceGxmDepthStencilSurfaceSetBackgroundDepth(&depth, 1.0f);           /* each scene starts with a cleared depth buffer */
    notif = sceGxmGetNotificationRegion(); notif[0] = 0;
    unsigned voff, foff;
    void *pb = gpu_alloc(64 * 1024, true), *pv = usse_alloc(64 * 1024, false, &voff), *pf = usse_alloc(64 * 1024, true, &foff);
    SceGxmShaderPatcherParams pp; memset(&pp, 0, sizeof pp);
    pp.hostAllocCallback = patcher_alloc; pp.hostFreeCallback = patcher_free;
    pp.bufferMem = pb; pp.bufferMemSize = 64 * 1024; pp.vertexUsseMem = pv; pp.vertexUsseMemSize = 64 * 1024; pp.vertexUsseOffset = voff;
    pp.fragmentUsseMem = pf; pp.fragmentUsseMemSize = 64 * 1024; pp.fragmentUsseOffset = foff;
    if (sceGxmShaderPatcherCreate(&pp, &patcher) < 0) return false;
    if (!make_programs()) return false;
    quad_idx = (u16 *)gpu_alloc(UI_MAXQ * 6 * 2, false);
    for (int i = 0; i < UI_MAXQ; i++) { u16 b = (u16)(i * 4); u16 *q = quad_idx + i * 6; q[0] = b; q[1] = b + 1; q[2] = b + 2; q[3] = b + 2; q[4] = b + 1; q[5] = b + 3; }
    if (!tex_linear(&font_tex, ak_font_alpha, AK_FONT_W, AK_FONT_H_PX, 1, SCE_GXM_TEXTURE_FORMAT_U8_111R, false)) return false;
    u32 white[64]; for (int i = 0; i < 64; i++) white[i] = 0xFFFFFFFFu;
    if (!tex_linear(&white_tex, white, 8, 8, 4, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, false)) return false;
    pool_size = (size_t)ak_setting_int("AK_VRAM_POOL_MB", 64) << 20;
    pool = (u8 *)gpu_alloc(pool_size, true);
    if (!pool) { AK_ERROR("gxm", "no video memory for the level pool"); return false; }
    snprintf(name, sizeof name, "GXM %dx%d", W, H);
    back = 0; front = NBUF - 1;
    return true;
}
void ak_gfx_shutdown(void) { sceGxmFinish(ctx); }
void ak_gfx_size(int *w, int *h) { *w = W; *h = H; }
const char *ak_gfx_name(void) { return name; }

ak_gfx_buf *ak_gfx_vertices(const ak_vtx *v, u32 n)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b);
    b->mem = pool_alloc(sizeof *v * n, 16);
    if (!b->mem) { free(b); return NULL; }
    memcpy(b->mem, v, sizeof *v * n);
    return b;
}
ak_gfx_buf *ak_gfx_indices(const u32 *i, u32 n)
{
    ak_gfx_buf *b = (ak_gfx_buf *)calloc(1, sizeof *b);
    b->mem = pool_alloc(4u * n, 16);
    if (!b->mem) { free(b); return NULL; }
    memcpy(b->mem, i, 4u * n);
    return b;
}
void ak_gfx_free_buf(ak_gfx_buf *b) { if (b) { pool_release(); free(b); } }

ak_gfx_tex *ak_gfx_texture(const ak_texture *t)
{
    ak_gfx_tex *x = (ak_gfx_tex *)calloc(1, sizeof *x);
    int w = t->width, h = t->height, stride = (int)ALIGN(w, 8);
    u8 *px = (u8 *)pool_alloc((size_t)stride * h, SCE_GXM_TEXTURE_ALIGNMENT);
    u32 *pal = (u32 *)pool_alloc(256 * 4, SCE_GXM_PALETTE_ALIGNMENT);
    if (!px || !pal) { free(x); return NULL; }
    pool_live--;                                                       /* one release frees both blocks */
    for (int y = 0; y < h; y++) {
        u8 *d = px + (size_t)y * stride;
        if (t->bpp == 8) memcpy(d, t->pixels[0] + (size_t)y * w, (size_t)w);
        else for (int i = 0; i < w; i++) { u8 b = t->pixels[0][((size_t)y * w + i) >> 1]; d[i] = (u8)((i & 1) ? b >> 4 : b & 15); }
    }
    memcpy(pal, t->palette, (t->bpp == 8 ? 256 : 16) * 4);
    x->px = px;
    sceGxmTextureInitLinear(&x->tex, px, SCE_GXM_TEXTURE_FORMAT_P8_ABGR, (unsigned)w, (unsigned)h, 0);
    sceGxmTextureSetPalette(&x->tex, pal);
    sceGxmTextureSetMinFilter(&x->tex, SCE_GXM_TEXTURE_FILTER_LINEAR); sceGxmTextureSetMagFilter(&x->tex, SCE_GXM_TEXTURE_FILTER_LINEAR);
    sceGxmTextureSetUAddrMode(&x->tex, SCE_GXM_TEXTURE_ADDR_REPEAT); sceGxmTextureSetVAddrMode(&x->tex, SCE_GXM_TEXTURE_ADDR_REPEAT);
    return x;
}
/* a palette variant: the base's pixels, its own palette (a variant must be freed before its base) */
ak_gfx_tex *ak_gfx_texture_palette(ak_gfx_tex *base, const ak_texture *t, const u32 *palette)
{
    ak_gfx_tex *x = (ak_gfx_tex *)calloc(1, sizeof *x);
    u32 *pal = (u32 *)pool_alloc(256 * 4, SCE_GXM_PALETTE_ALIGNMENT);
    if (!x || !pal) { free(x); return NULL; }
    memcpy(pal, palette, (t->bpp == 8 ? 256 : 16) * 4);
    x->tex = base->tex; x->px = base->px;
    sceGxmTextureSetPalette(&x->tex, pal);
    return x;
}
void ak_gfx_free_tex(ak_gfx_tex *t) { if (t) { pool_release(); free(t); } }
void ak_gfx_wait_idle(void) { sceGxmFinish(ctx); }

static bool cull_on = true; static int cull_state = -1;
static ak_m4 vp_t, frame_vp_t; static ak_gfx_env env_; static bool vp_dirty; static int cur_pipe; static ak_gfx_tex *cur_tex; static ak_gfx_buf *cur_vb;
static ak_gfx_stats st; static u64 t_begin;

static void *frame_alloc(size_t n, size_t a)
{
    size_t o = ALIGN(scratch_used, a);
    if (o + n > SCRATCH) return NULL;
    scratch_used = o + n;
    return scratch[scr] + o;
}
static void ui_draw_quads(const uiv *v, int n, const SceGxmTexture *t)
{
    uiv *g = (uiv *)frame_alloc(sizeof(uiv) * 4 * (size_t)n, 16);
    if (!g) return;
    memcpy(g, v, sizeof(uiv) * 4 * (size_t)n);
    sceGxmSetVertexProgram(ctx, vpui); sceGxmSetFragmentProgram(ctx, fpui);
    void *ub; sceGxmReserveVertexDefaultUniformBuffer(ctx, &ub);
    f32 sc[2] = { 2.0f / W, 2.0f / H }; sceGxmSetUniformDataF(ub, p_uiscale, 0, 2, sc);
    sceGxmSetFragmentTexture(ctx, 0, t); sceGxmSetVertexStream(ctx, 0, g);
    sceGxmDraw(ctx, SCE_GXM_PRIMITIVE_TRIANGLES, SCE_GXM_INDEX_FORMAT_U16, quad_idx, (unsigned)n * 6);
    cur_pipe = -1; cur_tex = NULL; cur_vb = NULL;
}

void ak_gfx_begin(u32 clear, const ak_m4 *vp, const ak_gfx_env *env)
{
    t_begin = ak_plat_time_us(); memset(&st, 0, sizeof st);
    back = (front + 1) % NBUF;
    sceGxmBeginScene(ctx, 0, rt, NULL, NULL, sync_[back], &surf[back], &depth);
    sceGxmSetViewport(ctx, W / 2.0f, W / 2.0f, H / 2.0f, -H / 2.0f, 0.5f, 0.5f);
    sceGxmSetRegionClip(ctx, SCE_GXM_REGION_CLIP_OUTSIDE, 0, 0, W - 1, H - 1);
    /* clear: one screen quad, no depth */
    sceGxmSetFrontDepthFunc(ctx, SCE_GXM_DEPTH_FUNC_ALWAYS); sceGxmSetFrontDepthWriteEnable(ctx, SCE_GXM_DEPTH_WRITE_DISABLED);
    sceGxmSetCullMode(ctx, SCE_GXM_CULL_NONE);
    u32 c = clear | 0xFF000000u; uiv q[4] = { { 0, 0, 0.5f, 0.5f, c }, { W, 0, 0.5f, 0.5f, c }, { 0, H, 0.5f, 0.5f, c }, { W, H, 0.5f, 0.5f, c } };
    ui_draw_quads(q, 1, &white_tex);
    /* 3D state.  The viewport flips Y, so triangles that face the camera (counter-clockwise in clip space) arrive clockwise. */
    sceGxmSetFrontDepthFunc(ctx, SCE_GXM_DEPTH_FUNC_LESS_EQUAL);
    cull_on = true; cull_state = -1;
    /* the shader takes the matrix as four rows (explicit dot products: no dependence on Cg's matrix layout) */
    for (int r = 0; r < 4; r++) for (int c2 = 0; c2 < 4; c2++) vp_t.m[r * 4 + c2] = vp->m[c2 * 4 + r];
    frame_vp_t = vp_t; vp_dirty = false;
    env_ = *env; cur_pipe = -1; cur_tex = NULL; cur_vb = NULL;
}

void ak_gfx_set_cull(bool on) { cull_on = on; }
void ak_gfx_set_transform(const ak_m4 *mvp)
{
    if (mvp) for (int r = 0; r < 4; r++) for (int c = 0; c < 4; c++) vp_t.m[r * 4 + c] = mvp->m[c * 4 + r];
    else vp_t = frame_vp_t;
    vp_dirty = true;
}

static void upload_vertex_uniforms(void)
{
    void *ub; sceGxmReserveVertexDefaultUniformBuffer(ctx, &ub);
    sceGxmSetUniformDataF(ub, p_vp, 0, 16, vp_t.m);
    f32 fr[3] = { env_.fog_start, env_.fog_end, env_.colour_scale }; sceGxmSetUniformDataF(ub, p_fogr, 0, 3, fr);
    vp_dirty = false;
}

void ak_gfx_draw(ak_pipe p, ak_gfx_tex *t, ak_gfx_buf *vb, ak_gfx_buf *ib, u32 first, u32 count)
{
    if (vp_dirty && (int)p == cur_pipe) upload_vertex_uniforms();
    if ((int)p != cur_pipe) {
        sceGxmSetVertexProgram(ctx, vp3d); sceGxmSetFragmentProgram(ctx, fp3d[p]);
        upload_vertex_uniforms();
        if (p_fog[p]) { void *fb_; sceGxmReserveFragmentDefaultUniformBuffer(ctx, &fb_); sceGxmSetUniformDataF(fb_, p_fog[p], 0, 3, env_.fog_rgb); }
        sceGxmSetFrontDepthWriteEnable(ctx, p >= AK_PIPE_LAYER ? SCE_GXM_DEPTH_WRITE_DISABLED : SCE_GXM_DEPTH_WRITE_ENABLED);
        if (p == AK_PIPE_OVERLAY || p == AK_PIPE_BLEND) sceGxmSetFrontDepthBias(ctx, -1, -2); else sceGxmSetFrontDepthBias(ctx, 0, 0);
        cur_pipe = (int)p; cur_tex = NULL; cur_vb = NULL;
    }
    {   /* the viewport flips Y, so faces toward the camera (counter-clockwise in clip space) arrive clockwise */
        int want = cull_mode && cull_on && (p == AK_PIPE_OPAQUE || p == AK_PIPE_OVERLAY) ? cull_mode : 0;
        if (want != cull_state) { sceGxmSetCullMode(ctx, want == 1 ? SCE_GXM_CULL_CW : want == 2 ? SCE_GXM_CULL_CCW : SCE_GXM_CULL_NONE); cull_state = want; } }
    if (t != cur_tex) { sceGxmSetFragmentTexture(ctx, 0, t ? &t->tex : &white_tex); cur_tex = t; }
    if (vb != cur_vb) { sceGxmSetVertexStream(ctx, 0, vb->mem); cur_vb = vb; }
    sceGxmDraw(ctx, SCE_GXM_PRIMITIVE_TRIANGLES, SCE_GXM_INDEX_FORMAT_U32, (const u32 *)ib->mem + first, count);
    st.draws++; st.tris += count / 3;
}

void ak_gfx_text(f32 x, f32 y, u32 c, const char *s)
{
    for (; *s && ui_n < UI_MAXQ; s++, x += AK_FONT_CW) {
        int ch = (u8)*s; if (ch < 32 || ch > 126) ch = '?';
        if (ch == ' ') continue;
        int i = ch - 32; f32 u0 = (f32)((i % 16) * AK_FONT_CW) / AK_FONT_W, v0 = (f32)((i / 16) * AK_FONT_CH) / AK_FONT_H_PX;
        f32 u1 = u0 + (f32)AK_FONT_CW / AK_FONT_W, v1 = v0 + (f32)AK_FONT_CH / AK_FONT_H_PX;
        uiv *v = ui_v + ui_n * 4; ui_n++;
        v[0] = (uiv){ x, y, u0, v0, c }; v[1] = (uiv){ x + AK_FONT_CW, y, u1, v0, c }; v[2] = (uiv){ x, y + AK_FONT_CH, u0, v1, c }; v[3] = (uiv){ x + AK_FONT_CW, y + AK_FONT_CH, u1, v1, c };
    }
}

void ak_gfx_end(ak_gfx_stats *out)
{
    if (ui_n) {
        sceGxmSetFrontDepthFunc(ctx, SCE_GXM_DEPTH_FUNC_ALWAYS); sceGxmSetFrontDepthWriteEnable(ctx, SCE_GXM_DEPTH_WRITE_DISABLED);
        sceGxmSetCullMode(ctx, SCE_GXM_CULL_NONE); cull_state = 0;
        ui_draw_quads(ui_v, ui_n, &font_tex); ui_n = 0;
    }
    frame_no++;
    SceGxmNotification n; n.address = (volatile unsigned int *)notif; n.value = (unsigned)frame_no;
    sceGxmEndScene(ctx, NULL, &n);
    sceGxmPadHeartbeat(&surf[back], sync_[back]);
    disp_data d = { fb[back] }; sceGxmDisplayQueueAddEntry(sync_[front], sync_[back], &d);
    front = back;
    st.cpu_submit_ms = (ak_plat_time_us() - t_begin) / 1000.0f;
    /* the next frame's scratch block: wait until the GPU has finished the frame that used it last (the GPU-bound measure) */
    scr_fence[scr] = (unsigned)frame_no; scr = (scr + 1) % NBUF; scratch_used = 0;
    u64 t0 = ak_plat_time_us();
    while (scr_fence[scr] && (int)(*notif - scr_fence[scr]) < 0) sceKernelDelayThread(100);
    st.gpu_wait_ms = (ak_plat_time_us() - t0) / 1000.0f;
    if (out) *out = st;
}
bool ak_gfx_screenshot(const char *path) { (void)path; return false; }
