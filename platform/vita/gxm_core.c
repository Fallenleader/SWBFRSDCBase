/* Native GXM device layer (see gxm_core.h). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <psp2/kernel/sysmem.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/display.h>
#include <psp2/common_dialog.h>
#include <psp2/io/fcntl.h>
#include <psp2/io/stat.h>
#include <vitashark.h>
#include "gxm_core.h"
#include "ui_font.h"

#define NBUF 3
#define STRIDE GXM_W
#define ALIGN(x, a) (((x) + ((a) - 1)) & ~((a) - 1))
#define FRAME_SCRATCH (8u * 1024 * 1024)

static char err[200];
const char *gxm_error(void){ return err; }
#define FAIL(...) do { snprintf(err, sizeof err, __VA_ARGS__); return -1; } while (0)

static SceGxmContext *ctx; static SceGxmRenderTarget *rt; static SceGxmShaderPatcher *patcher;
static SceGxmColorSurface surf[NBUF]; static SceGxmSyncObject *sync[NBUF]; static void *fb[NBUF];
static SceGxmDepthStencilSurface depth;
static int back, front;
static uint8_t *scratch[NBUF]; static size_t scratch_used; static int scr;          /* frame scratch in use (rotates at gxm_end_frame) */
static volatile unsigned *notif; static unsigned scr_fence[NBUF];                  /* GPU progress: the display scene that last used each scratch block */
static void *depth_mem; static int dialog_on;
void gxm_set_dialog(int on){ dialog_on = on; }
static char cache_dir[256];

SceGxmContext *gxm_ctx(void){ return ctx; }
SceGxmShaderPatcher *gxm_patcher(void){ return patcher; }
const SceGxmColorSurface *gxm_color_surface(void){ return &surf[back]; }
const SceGxmDepthStencilSurface *gxm_depth_surface(void){ return &depth; }

/* ------------------------------------------------------------------ memory */
typedef struct blk_s { void *p; SceUID uid; struct blk_s *next; } blk_t;
static blk_t *blocks;
static void *mem_block(SceKernelMemBlockType type, size_t size, SceUID *uid){
    size = type == SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW ? ALIGN(size, 256 * 1024) : ALIGN(size, 4 * 1024);
    *uid = sceKernelAllocMemBlock("rs_gxm", type, size, NULL); if (*uid < 0) return NULL;
    void *p = NULL; sceKernelGetMemBlockBase(*uid, &p); return p; }
void *gxm_alloc(size_t size, size_t align, int cdram){
    (void)align;                                                   /* blocks are page aligned, more than any GXM requirement */
    SceUID uid; SceKernelMemBlockType t = cdram ? SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW : SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE;
    void *p = mem_block(t, size, &uid);
    if (!p && cdram) { t = SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE; p = mem_block(t, size, &uid); }   /* video RAM full: main RAM */
    if (!p) return NULL;
    size = t == SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW ? ALIGN(size, 256 * 1024) : ALIGN(size, 4 * 1024);
    if (sceGxmMapMemory(p, size, SCE_GXM_MEMORY_ATTRIB_READ | SCE_GXM_MEMORY_ATTRIB_WRITE) < 0) { sceKernelFreeMemBlock(uid); return NULL; }
    blk_t *b = malloc(sizeof *b); b->p = p; b->uid = uid; b->next = blocks; blocks = b; return p; }
void gxm_free(void *p){
    for (blk_t **q = &blocks; *q; q = &(*q)->next) if ((*q)->p == p) { blk_t *b = *q; *q = b->next; sceGxmUnmapMemory(p); sceKernelFreeMemBlock(b->uid); free(b); return; } }
void *gxm_frame_alloc(size_t size, size_t align){
    size_t o = ALIGN(scratch_used, align ? align : 4); if (o + size > FRAME_SCRATCH) return NULL;
    scratch_used = o + size; return scratch[scr] + o; }

static void *usse_alloc(size_t size, int fragment, unsigned *offset){
    SceUID uid; void *p = mem_block(SCE_KERNEL_MEMBLOCK_TYPE_USER_RW_UNCACHE, size, &uid); if (!p) return NULL;
    size = ALIGN(size, 4 * 1024);
    if ((fragment ? sceGxmMapFragmentUsseMemory(p, size, offset) : sceGxmMapVertexUsseMemory(p, size, offset)) < 0) return NULL;
    return p; }
static void *patcher_host_alloc(void *ud, unsigned size){ (void)ud; return malloc(size); }
static void patcher_host_free(void *ud, void *m){ (void)ud; free(m); }

/* ------------------------------------------------------------------ display */
typedef struct { void *addr; } disp_t;
static void disp_cb(const void *data){
    const disp_t *d = data; SceDisplayFrameBuf f; memset(&f, 0, sizeof f);
    f.size = sizeof f; f.base = d->addr; f.pitch = STRIDE; f.pixelformat = SCE_DISPLAY_PIXELFORMAT_A8B8G8R8; f.width = GXM_W; f.height = GXM_H;
    sceDisplaySetFrameBuf(&f, SCE_DISPLAY_SETBUF_NEXTFRAME); sceDisplayWaitVblankStart(); }

/* ------------------------------------------------------------------ shaders */
static uint64_t fnv64(const void *p, size_t n, uint64_t h){ const uint8_t *b = p; for (size_t i = 0; i < n; i++) { h ^= b[i]; h *= 1099511628211ull; } return h; }
/* The runtime compiler (ur0:data/libshacccg.suprx, through vitaShaRK).  vitaShaRK takes the source's length in *size (0 = an empty
 * program, which the compiler reports as "fatal internal error").  The compiler is started once and never unloaded (reloading
 * libshacccg in a running process crashes in its module start).  Compiling runs on its own thread with a 4 MB stack (the compiler is
 * deeply recursive); a failure writes every diagnostic (line:column) and the source to the log and to <cache>/failed_<hash>.cg. */
static int shark_mode;                                   /* 0: not started; 1: started */
static int shark_start(void){
    int r = shark_init(NULL); if (r < 0) r = shark_init_simple(NULL);
    fprintf(stderr, "[GXM] shader compiler started: %d\n", r);
    if (r >= 0) shark_mode = 1; return r; }
typedef struct { const char *src; int frag; void *prog; uint32_t size; char diag[1024]; } cjob_t;
static int compile_thread(SceSize n, void *a){
    cjob_t *j = *(cjob_t **)a; uint32_t size = (uint32_t)strlen(j->src); j->prog = NULL; j->size = 0; j->diag[0] = 0;
    SceGxmProgram *p = shark_compile_shader_extended(j->src, &size, j->frag ? SHARK_FRAGMENT_SHADER : SHARK_VERTEX_SHADER, SHARK_OPT_DEFAULT, SHARK_ENABLE, SHARK_ENABLE, SHARK_ENABLE);
    const SceShaccCgCompileOutput *o = shark_get_internal_compile_output(); size_t k = 0;
    for (int i = 0; o && i < o->diagnosticCount && k + 8 < sizeof j->diag; i++) {
        const SceShaccCgDiagnosticMessage *d = &o->diagnostics[i];
        k += (size_t)snprintf(j->diag + k, sizeof j->diag - k, "%s%s %u:%u: %s", k ? "; " : "", d->level == SCE_SHACCCG_DIAGNOSTIC_LEVEL_ERROR ? "error" : d->level == SCE_SHACCCG_DIAGNOSTIC_LEVEL_WARNING ? "warning" : "info",
                              d->location ? (unsigned)d->location->lineNumber : 0u, d->location ? (unsigned)d->location->columnNumber : 0u, d->message ? d->message : "?");
        if (k >= sizeof j->diag) k = sizeof j->diag - 1; }
    if (p && size) { j->prog = malloc(size); if (j->prog) { memcpy(j->prog, p, size); j->size = size; } }
    shark_clear_output(); return sceKernelExitDeleteThread(0); }
static void *compile_once(const char *src, int frag, uint32_t *size, char *diag, size_t dn){
    cjob_t *j = calloc(1, sizeof *j); if (!j) { snprintf(diag, dn, "out of memory"); return NULL; }
    j->src = src; j->frag = frag;
    SceUID th = sceKernelCreateThread("shacccg", compile_thread, 0x10000100, 4 * 1024 * 1024, 0, 0, NULL);
    if (th < 0) { snprintf(diag, dn, "cannot create the compiler thread (%08x)", (unsigned)th); free(j); return NULL; }
    sceKernelStartThread(th, sizeof j, &j); sceKernelWaitThreadEnd(th, NULL, NULL);
    void *p = j->prog; *size = j->size; snprintf(diag, dn, "%s", j->diag); free(j); return p; }
const SceGxmProgram *gxm_shader(const char *src, int fragment){
    uint64_t h = fnv64(src, strlen(src), 14695981039346656037ull ^ (uint64_t)(fragment + 1));
    char path[320]; snprintf(path, sizeof path, "%s/gxm_%016llx.gxp", cache_dir, (unsigned long long)h);
    SceUID fd = sceIoOpen(path, SCE_O_RDONLY, 0);
    if (fd >= 0) { int n = (int)sceIoLseek(fd, 0, SCE_SEEK_END); sceIoLseek(fd, 0, SCE_SEEK_SET);
        void *b = n > 0 ? malloc((size_t)n) : NULL; int r = b ? sceIoRead(fd, b, (SceSize)n) : -1; sceIoClose(fd);
        if (b && r == n && sceGxmProgramCheck((const SceGxmProgram *)b) >= 0) return (const SceGxmProgram *)b;
        free(b); }
    if (!shark_mode && shark_start() < 0) { snprintf(err, sizeof err, "cannot load the shader compiler (ur0:data/libshacccg.suprx)"); return NULL; }
    static char diag[1024]; uint32_t size = 0;
    void *b = compile_once(src, fragment, &size, diag, sizeof diag);
    if (b && sceGxmProgramCheck((const SceGxmProgram *)b) < 0) { free(b); b = NULL; snprintf(diag + strlen(diag), sizeof diag - strlen(diag), "%sinvalid program", diag[0] ? "; " : ""); }
    if (!b) {
        char fp[320]; snprintf(fp, sizeof fp, "%s/failed_%016llx.cg", cache_dir, (unsigned long long)h); sceIoMkdir(cache_dir, 0777);
        fd = sceIoOpen(fp, SCE_O_WRONLY | SCE_O_CREAT | SCE_O_TRUNC, 0666); if (fd >= 0) { sceIoWrite(fd, src, strlen(src)); sceIoClose(fd); }
        fprintf(stderr, "[GXM] %s shader %016llx failed: %s\n[GXM] its source (also %s):\n%s\n", fragment ? "fragment" : "vertex", (unsigned long long)h, diag[0] ? diag : "no diagnostics", fp, src);
        snprintf(err, sizeof err, "%s shader %016llx: compile failed: %.120s", fragment ? "fragment" : "vertex", (unsigned long long)h, diag[0] ? diag : "no diagnostics");
        return NULL; }
    sceIoMkdir(cache_dir, 0777);
    fd = sceIoOpen(path, SCE_O_WRONLY | SCE_O_CREAT | SCE_O_TRUNC, 0666); if (fd >= 0) { sceIoWrite(fd, b, size); sceIoClose(fd); }
    return (const SceGxmProgram *)b; }

/* ------------------------------------------------------------------ 2D pipeline */
static const char *ui_vs =
    "void main(float2 aPos, float2 aUv, float4 aCol, uniform float4 uScale,\n"
    "  out float4 vPos : POSITION, out float2 vUv : TEXCOORD0, out float4 vCol : COLOR)\n"
    "{ vPos = float4(aPos.x * uScale.x - 1.0, 1.0 - aPos.y * uScale.y, 0.5, 1.0); vUv = aUv; vCol = aCol; }\n";
static const char *ui_fs =
    "float4 main(float2 vUv : TEXCOORD0, float4 vCol : COLOR, uniform sampler2D tex) { return tex2D(tex, vUv) * vCol; }\n";
static const char *ui_fs_opaque =
    "float4 main(float2 vUv : TEXCOORD0, float4 vCol : COLOR, uniform sampler2D tex) { return float4(tex2D(tex, vUv).rgb * vCol.rgb, 1.0); }\n";
typedef struct { float x, y, u, v; uint32_t c; } uiv_t;
static SceGxmVertexProgram *ui_vp; static SceGxmFragmentProgram *ui_fp, *ui_fp_op; static const SceGxmProgramParameter *ui_scale;
static uint16_t *quad_idx; static gxm_tex_t white, font;
#define UI_MAXQ 2048
static uiv_t *ui_v; static int ui_n; static const gxm_tex_t *ui_t;

static int ui_init(void){
    const SceGxmProgram *vs = gxm_shader(ui_vs, 0), *fs = gxm_shader(ui_fs, 1); if (!vs || !fs) return -1;
    SceGxmShaderPatcherId vid, fid;
    if (sceGxmShaderPatcherRegisterProgram(patcher, vs, &vid) < 0 || sceGxmShaderPatcherRegisterProgram(patcher, fs, &fid) < 0) FAIL("cannot register the 2D shaders");
    const SceGxmProgramParameter *pa = sceGxmProgramFindParameterByName(vs, "aPos"), *pu = sceGxmProgramFindParameterByName(vs, "aUv"), *pc = sceGxmProgramFindParameterByName(vs, "aCol");
    ui_scale = sceGxmProgramFindParameterByName(vs, "uScale"); if (!pa || !pu || !pc || !ui_scale) FAIL("2D shader parameters missing");
    SceGxmVertexAttribute at[3]; memset(at, 0, sizeof at);
    at[0].streamIndex = 0; at[0].offset = 0;  at[0].format = SCE_GXM_ATTRIBUTE_FORMAT_F32; at[0].componentCount = 2; at[0].regIndex = sceGxmProgramParameterGetResourceIndex(pa);
    at[1].streamIndex = 0; at[1].offset = 8;  at[1].format = SCE_GXM_ATTRIBUTE_FORMAT_F32; at[1].componentCount = 2; at[1].regIndex = sceGxmProgramParameterGetResourceIndex(pu);
    at[2].streamIndex = 0; at[2].offset = 16; at[2].format = SCE_GXM_ATTRIBUTE_FORMAT_U8N; at[2].componentCount = 4; at[2].regIndex = sceGxmProgramParameterGetResourceIndex(pc);
    SceGxmVertexStream vs0; vs0.stride = sizeof(uiv_t); vs0.indexSource = SCE_GXM_INDEX_SOURCE_INDEX_16BIT;
    if (sceGxmShaderPatcherCreateVertexProgram(patcher, vid, at, 3, &vs0, 1, &ui_vp) < 0) FAIL("cannot create the 2D vertex program");
    SceGxmBlendInfo bl; memset(&bl, 0, sizeof bl); bl.colorMask = SCE_GXM_COLOR_MASK_ALL; bl.colorFunc = SCE_GXM_BLEND_FUNC_ADD; bl.alphaFunc = SCE_GXM_BLEND_FUNC_ADD;
    bl.colorSrc = SCE_GXM_BLEND_FACTOR_SRC_ALPHA; bl.colorDst = SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA; bl.alphaSrc = SCE_GXM_BLEND_FACTOR_ONE; bl.alphaDst = SCE_GXM_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    if (sceGxmShaderPatcherCreateFragmentProgram(patcher, fid, SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4, SCE_GXM_MULTISAMPLE_NONE, &bl, vs, &ui_fp) < 0) FAIL("cannot create the 2D fragment program");
    { const SceGxmProgram *fo = gxm_shader(ui_fs_opaque, 1); SceGxmShaderPatcherId oid; if (!fo || sceGxmShaderPatcherRegisterProgram(patcher, fo, &oid) < 0 ||
        sceGxmShaderPatcherCreateFragmentProgram(patcher, oid, SCE_GXM_OUTPUT_REGISTER_FORMAT_UCHAR4, SCE_GXM_MULTISAMPLE_NONE, NULL, vs, &ui_fp_op) < 0) FAIL("cannot create the opaque 2D program"); }
    quad_idx = gxm_alloc(UI_MAXQ * 6 * 2, 16, 0); if (!quad_idx) FAIL("out of GPU memory (2D indices)");
    for (int i = 0; i < UI_MAXQ; i++) { uint16_t b = (uint16_t)(i * 4); uint16_t *q = quad_idx + i * 6; q[0] = b; q[1] = b + 1; q[2] = b + 2; q[3] = b + 2; q[4] = b + 1; q[5] = b + 3; }
    uint32_t w1[64]; for (int i = 0; i < 64; i++) w1[i] = 0xFFFFFFFFu; if (gxm_tex_rgba(&white, w1, 8, 8, 0)) return -1;
    if (gxm_tex_alpha(&font, ui_font_alpha, UI_FONT_W, UI_FONT_H)) return -1;
    return 0; }

static int ui_opaque;
void ui_flush(void){
    if (!ui_n || !ui_t) { ui_n = 0; return; }
    uiv_t *v = gxm_frame_alloc(sizeof(uiv_t) * 4 * (size_t)ui_n, 16);
    if (v) {
        memcpy(v, ui_v, sizeof(uiv_t) * 4 * (size_t)ui_n);
        sceGxmSetVertexProgram(ctx, ui_vp); sceGxmSetFragmentProgram(ctx, ui_opaque ? ui_fp_op : ui_fp);
        void *ub; sceGxmReserveVertexDefaultUniformBuffer(ctx, &ub); float sc[4] = {2.0f / GXM_W, 2.0f / GXM_H, 0, 0}; sceGxmSetUniformDataF(ub, ui_scale, 0, 4, sc);
        sceGxmSetFragmentTexture(ctx, 0, &ui_t->tex); sceGxmSetVertexStream(ctx, 0, v);
        sceGxmDraw(ctx, SCE_GXM_PRIMITIVE_TRIANGLES, SCE_GXM_INDEX_FORMAT_U16, quad_idx, (unsigned)ui_n * 6); }
    ui_n = 0; }

void ui_quad(const gxm_tex_t *t, float x, float y, float w, float h, float u0, float v0, float u1, float v1, uint32_t c){
    if (t != ui_t || ui_n >= UI_MAXQ) { ui_flush(); ui_t = t; }
    uiv_t *v = ui_v + ui_n * 4; ui_n++;
    v[0] = (uiv_t){x, y, u0, v0, c}; v[1] = (uiv_t){x + w, y, u1, v0, c}; v[2] = (uiv_t){x, y + h, u0, v1, c}; v[3] = (uiv_t){x + w, y + h, u1, v1, c}; }
void ui_quad_opaque(const gxm_tex_t *t, float x, float y, float w, float h, float u0, float v0, float u1, float v1){
    ui_flush(); ui_opaque = 1; ui_quad(t, x, y, w, h, u0, v0, u1, v1, 0xFFFFFFFFu); ui_flush(); ui_opaque = 0; }
void ui_rect(float x, float y, float w, float h, uint32_t c){ ui_quad(&white, x, y, w, h, 0.5f, 0.5f, 0.5f, 0.5f, c); }
float ui_text_width(const char *s, float sc){ float w = 0; for (; *s; s++) { int c = (unsigned char)*s; if (c < 32 || c > 126) c = '?'; w += ui_font_glyphs[c - 32].adv * sc; } return w; }
float ui_text(float x, float y, float sc, uint32_t col, const char *s){
    for (; *s; s++) { int c = (unsigned char)*s; if (c < 32 || c > 126) c = '?'; const ui_glyph_t *g = &ui_font_glyphs[c - 32];
        if (c != ' ') ui_quad(&font, x + g->ox * sc, y + g->oy * sc, g->w * sc, g->h * sc, (float)g->x / UI_FONT_W, (float)g->y / UI_FONT_H,
                              (float)(g->x + g->w) / UI_FONT_W, (float)(g->y + g->h) / UI_FONT_H, col);
        x += g->adv * sc; }
    return x; }

/* ------------------------------------------------------------------ textures */
static int tex_make(gxm_tex_t *t, const void *src, int w, int h, int bpp, SceGxmTextureFormat fmt, int linear){
    int stride = ALIGN(w, 8); size_t sz = (size_t)stride * (size_t)h * (size_t)bpp;
    void *m = gxm_alloc(sz, SCE_GXM_TEXTURE_ALIGNMENT, 1); if (!m) FAIL("out of GPU memory (texture %dx%d)", w, h);
    for (int y = 0; y < h; y++) memcpy((uint8_t *)m + (size_t)y * stride * bpp, (const uint8_t *)src + (size_t)y * w * bpp, (size_t)w * bpp);
    if (sceGxmTextureInitLinear(&t->tex, m, fmt, (unsigned)w, (unsigned)h, 0) < 0) { gxm_free(m); FAIL("cannot create a texture"); }
    SceGxmTextureFilter f = linear ? SCE_GXM_TEXTURE_FILTER_LINEAR : SCE_GXM_TEXTURE_FILTER_POINT;
    sceGxmTextureSetMinFilter(&t->tex, f); sceGxmTextureSetMagFilter(&t->tex, f);
    sceGxmTextureSetUAddrMode(&t->tex, SCE_GXM_TEXTURE_ADDR_CLAMP); sceGxmTextureSetVAddrMode(&t->tex, SCE_GXM_TEXTURE_ADDR_CLAMP);
    t->mem = m; t->w = w; t->h = h; return 0; }
int gxm_tex_rgba(gxm_tex_t *t, const uint32_t *rgba, int w, int h, int linear){ return tex_make(t, rgba, w, h, 4, SCE_GXM_TEXTURE_FORMAT_U8U8U8U8_ABGR, linear); }
int gxm_tex_alpha(gxm_tex_t *t, const uint8_t *a, int w, int h){ return tex_make(t, a, w, h, 1, SCE_GXM_TEXTURE_FORMAT_U8_111R, 1); }
void gxm_tex_free(gxm_tex_t *t){ if (t->mem) gxm_free(t->mem); memset(t, 0, sizeof *t); }

/* ------------------------------------------------------------------ init / frame */
int gxm_init(const char *shader_cache_dir){
    snprintf(cache_dir, sizeof cache_dir, "%s", shader_cache_dir);
    SceGxmInitializeParams ip; memset(&ip, 0, sizeof ip);
    ip.displayQueueMaxPendingCount = NBUF - 1; ip.displayQueueCallback = disp_cb; ip.displayQueueCallbackDataSize = sizeof(disp_t); ip.parameterBufferSize = SCE_GXM_DEFAULT_PARAMETER_BUFFER_SIZE;
    if (sceGxmInitialize(&ip) < 0) FAIL("sceGxmInitialize failed");

    SceUID u; unsigned off;
    void *vdm = gxm_alloc(SCE_GXM_DEFAULT_VDM_RING_BUFFER_SIZE, 4, 0), *vr = gxm_alloc(SCE_GXM_DEFAULT_VERTEX_RING_BUFFER_SIZE, 4, 0), *fr = gxm_alloc(SCE_GXM_DEFAULT_FRAGMENT_RING_BUFFER_SIZE, 4, 0);
    void *fu = usse_alloc(SCE_GXM_DEFAULT_FRAGMENT_USSE_RING_BUFFER_SIZE, 1, &off);
    if (!vdm || !vr || !fr || !fu) FAIL("out of GPU memory (context)");
    SceGxmContextParams cp; memset(&cp, 0, sizeof cp);
    cp.hostMem = malloc(SCE_GXM_MINIMUM_CONTEXT_HOST_MEM_SIZE); cp.hostMemSize = SCE_GXM_MINIMUM_CONTEXT_HOST_MEM_SIZE;
    cp.vdmRingBufferMem = vdm; cp.vdmRingBufferMemSize = SCE_GXM_DEFAULT_VDM_RING_BUFFER_SIZE;
    cp.vertexRingBufferMem = vr; cp.vertexRingBufferMemSize = SCE_GXM_DEFAULT_VERTEX_RING_BUFFER_SIZE;
    cp.fragmentRingBufferMem = fr; cp.fragmentRingBufferMemSize = SCE_GXM_DEFAULT_FRAGMENT_RING_BUFFER_SIZE;
    cp.fragmentUsseRingBufferMem = fu; cp.fragmentUsseRingBufferMemSize = SCE_GXM_DEFAULT_FRAGMENT_USSE_RING_BUFFER_SIZE; cp.fragmentUsseRingBufferOffset = off;
    if (sceGxmCreateContext(&cp, &ctx) < 0) FAIL("sceGxmCreateContext failed");

    SceGxmRenderTargetParams rp; memset(&rp, 0, sizeof rp);
    rp.width = GXM_W; rp.height = GXM_H; rp.scenesPerFrame = 1; rp.multisampleMode = SCE_GXM_MULTISAMPLE_NONE; rp.driverMemBlock = -1;
    if (sceGxmCreateRenderTarget(&rp, &rt) < 0) FAIL("sceGxmCreateRenderTarget failed");

    for (int i = 0; i < NBUF; i++) {
        fb[i] = gxm_alloc(4u * STRIDE * GXM_H, SCE_GXM_COLOR_SURFACE_ALIGNMENT, 1); if (!fb[i]) FAIL("out of video memory (display buffers)");
        memset(fb[i], 0, 4u * STRIDE * GXM_H);
        if (sceGxmColorSurfaceInit(&surf[i], SCE_GXM_COLOR_FORMAT_A8B8G8R8, SCE_GXM_COLOR_SURFACE_LINEAR, SCE_GXM_COLOR_SURFACE_SCALE_NONE,
                                   SCE_GXM_OUTPUT_REGISTER_SIZE_32BIT, GXM_W, GXM_H, STRIDE, fb[i]) < 0) FAIL("sceGxmColorSurfaceInit failed");
        if (sceGxmSyncObjectCreate(&sync[i]) < 0) FAIL("sceGxmSyncObjectCreate failed");
        scratch[i] = gxm_alloc(FRAME_SCRATCH, 16, 0); if (!scratch[i]) FAIL("out of GPU memory (frame scratch)"); }
    unsigned dw = ALIGN(GXM_W, SCE_GXM_TILE_SIZEX), dh = ALIGN(GXM_H, SCE_GXM_TILE_SIZEY);
    void *dmem = gxm_alloc(4u * dw * dh, SCE_GXM_DEPTHSTENCIL_SURFACE_ALIGNMENT, 1); if (!dmem) FAIL("out of video memory (depth buffer)"); depth_mem = dmem;
    notif = sceGxmGetNotificationRegion(); notif[0] = 0;
    if (sceGxmDepthStencilSurfaceInit(&depth, SCE_GXM_DEPTH_STENCIL_FORMAT_S8D24, SCE_GXM_DEPTH_STENCIL_SURFACE_TILED, dw, dmem, NULL) < 0) FAIL("sceGxmDepthStencilSurfaceInit failed");

    const unsigned pbuf = 64 * 1024, pvu = 64 * 1024, pfu = 64 * 1024; unsigned voff, foff;
    void *pb = gxm_alloc(pbuf, 4, 1), *pv = usse_alloc(pvu, 0, &voff), *pf = usse_alloc(pfu, 1, &foff); (void)u;
    if (!pb || !pv || !pf) FAIL("out of GPU memory (shader patcher)");
    SceGxmShaderPatcherParams pp; memset(&pp, 0, sizeof pp);
    pp.hostAllocCallback = patcher_host_alloc; pp.hostFreeCallback = patcher_host_free;
    pp.bufferMem = pb; pp.bufferMemSize = pbuf; pp.vertexUsseMem = pv; pp.vertexUsseMemSize = pvu; pp.vertexUsseOffset = voff;
    pp.fragmentUsseMem = pf; pp.fragmentUsseMemSize = pfu; pp.fragmentUsseOffset = foff;
    if (sceGxmShaderPatcherCreate(&pp, &patcher) < 0) FAIL("sceGxmShaderPatcherCreate failed");

    ui_v = malloc(sizeof(uiv_t) * 4 * UI_MAXQ);
    if (ui_init()) return -1;
    back = 0; front = NBUF - 1;
    return 0; }

void gxm_begin_frame(uint32_t clear_abgr){
    back = (front + 1) % NBUF;
    sceGxmBeginScene(ctx, 0, rt, NULL, NULL, sync[back], &surf[back], &depth);
    sceGxmSetFrontDepthFunc(ctx, SCE_GXM_DEPTH_FUNC_ALWAYS); sceGxmSetFrontDepthWriteEnable(ctx, SCE_GXM_DEPTH_WRITE_DISABLED);
    sceGxmSetFrontStencilFunc(ctx, SCE_GXM_STENCIL_FUNC_ALWAYS, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, SCE_GXM_STENCIL_OP_KEEP, 0, 0);
    sceGxmSetTwoSidedEnable(ctx, SCE_GXM_TWO_SIDED_DISABLED);
    sceGxmSetRegionClip(ctx, SCE_GXM_REGION_CLIP_OUTSIDE, 0, 0, GXM_W - 1, GXM_H - 1);
    sceGxmSetViewport(ctx, GXM_W / 2.0f, GXM_W / 2.0f, GXM_H / 2.0f, -GXM_H / 2.0f, 0.5f, 0.5f);
    sceGxmSetCullMode(ctx, SCE_GXM_CULL_NONE);
    ui_rect(0, 0, GXM_W, GXM_H, clear_abgr | 0xFF000000u); }

static int frame_counter;
int gxm_frame_index(void){ return frame_counter; }
void gxm_end_frame(void){
    frame_counter++;
    ui_flush();
    SceGxmNotification n; n.address = (volatile unsigned int *)notif; n.value = (unsigned)frame_counter;
    sceGxmEndScene(ctx, NULL, &n);                     /* scenes complete in order: this one done = everything before it done */
    if (dialog_on) {                                   /* system dialogs (on-screen keyboard) draw over the finished frame */
        SceCommonDialogUpdateParam up; memset(&up, 0, sizeof up);
        up.renderTarget.colorFormat = SCE_GXM_COLOR_FORMAT_A8B8G8R8; up.renderTarget.surfaceType = SCE_GXM_COLOR_SURFACE_LINEAR;
        up.renderTarget.width = GXM_W; up.renderTarget.height = GXM_H; up.renderTarget.strideInPixels = STRIDE;
        up.renderTarget.colorSurfaceData = fb[back]; up.renderTarget.depthSurfaceData = depth_mem; up.displaySyncObject = sync[back];
        sceCommonDialogUpdate(&up); }
    sceGxmPadHeartbeat(&surf[back], sync[back]);
    disp_t d = {fb[back]}; sceGxmDisplayQueueAddEntry(sync[front], sync[back], &d);
    front = back;
    /* next frame's scratch block: wait until the GPU has finished the frame that used it last */
    scr_fence[scr] = (unsigned)frame_counter; scr = (scr + 1) % NBUF; scratch_used = 0;
    while (scr_fence[scr] && (int)(*notif - scr_fence[scr]) < 0) sceKernelDelayThread(100); }
