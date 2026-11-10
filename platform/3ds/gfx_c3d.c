/* Nintendo 3DS renderer on citro3d (the PICA200 GPU): implements the platform renderer interface (platform/common/gfx.h) that the
 * native GU (platform/common/gu_native.c) draws through.
 *
 *  - Surfaces: every PSP render target (frame buffers, render-to-texture) is a 512x512 RGBA8 texture that is also a render target, in
 *    video RAM while it lasts (else GPU heap), keyed by its PSP address.  All surfaces share one depth/stencil buffer.  PSP row 0 is the
 *    top of the picture (v = 1: the 3DS's textures run bottom-up).
 *  - Draws: the CPU turns each PSP vertex into one canonical vertex (floats: position, texture coordinate, colour, normal, 8 weights)
 *    and folds the PSP viewport into the clip matrix; one vertex program (psp.v.pica) does skinning, transform and lighting on the GPU.
 *    The texture function is the first texture combiner stage; blending (with the constant colour for fixed factors), alpha test,
 *    depth, stencil and colour masks are the GPU's fixed functions.
 *  - Textures: decoded to RGBA8 by the native GU and stored as RGB565 / RGBA5551 / RGBA4444 (whichever loses nothing of the alpha the
 *    texture uses; RS_TEX_32BIT=1 keeps RGBA8) in the 3DS's tiled layout, in the GPU heap, under RS_TEX_BUDGET_MB.
 *  - Display: the displayed surface is drawn to the 400x240 top screen, filtered.  The bottom screen is the console (main.c).
 *  Not yet: PSP fog, palette lookups of render targets (the bloom's bright pass is skipped), face culling (RS_CULL=1 turns it on),
 *  stereoscopic 3D. */
#include <3ds.h>
#include <citro3d.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "gfx.h"
#include "psp_shbin.h"

volatile unsigned rs_gfx_epoch = 1;
rs_perf_t rs_perf;
u64 rs_perf_us(void){ return svcGetSystemTick() / (SYSCLOCK_ARM11 / 1000000ULL); }
extern int rs_setting_int(const char *, int);
#define SZ 512

/* ===================================================================== frame, vertex memory */
static int in_frame, cull_on;
static u8 *ring[2]; static u32 ring_size, ring_off; static int ring_i;
static unsigned st_draws, st_tris, st_texup, st_clears, st_verts, st_frames;
static C3D_RenderTarget *top;
static void *ring_alloc(u32 n){
    n = (n + 15) & ~15u; if (ring_off + n > ring_size) return NULL;
    void *p = ring[ring_i] + ring_off; ring_off += n; return p; }
#define DEFER_N 512
static struct { C3D_Tex t; unsigned frame; } deferred[DEFER_N]; static int ndef;
static void tex_free_later(C3D_Tex *t){
    if (!t->data) return;
    if (ndef >= DEFER_N) { C3D_TexDelete(&deferred[0].t); memmove(deferred, deferred + 1, sizeof deferred[0] * (DEFER_N - 1)); ndef--; }
    deferred[ndef].t = *t; deferred[ndef].frame = st_frames; ndef++; memset(t, 0, sizeof *t); }
static void collect(void){ int j = 0; for (int i = 0; i < ndef; i++) { if (st_frames - deferred[i].frame >= 2) C3D_TexDelete(&deferred[i].t); else deferred[j++] = deferred[i]; } ndef = j; }
static void ensure_frame(void){
    if (in_frame) return;
    C3D_FrameBegin(C3D_FRAME_SYNCDRAW); in_frame = 1; ring_i ^= 1; ring_off = 0; collect(); }
static void cmd_room(void){ if (C3D_GetCmdBufUsage() > 0.8f) { C3D_FrameSplit(0); } }

/* ===================================================================== surfaces */
#define SURF_N 6
typedef struct { u32 addr, ext; int stride, psz, fmt, used, drawn; unsigned stamp; C3D_Tex tex; C3D_RenderTarget *rt; } surf_t;
static surf_t surfs[SURF_N]; static unsigned surf_stamp; static surf_t *cur;
static void *depth_buf; static u32 disp_addr, disp_stride = 512, disp_fmt;
static u32 akey(u32 a){ return gfx_vram(a) & 0x0FFFFFFFu; }
static surf_t *surf_find(u32 addr){ addr = akey(addr); for (int i = 0; i < SURF_N; i++) if (surfs[i].used && surfs[i].addr == addr) return &surfs[i]; return 0; }
static void set_target(surf_t *s){
    ensure_frame();
    if (cur == s) return;
    C3D_FrameDrawOn(s->rt); C3D_SetViewport(0, 0, SZ, SZ); cur = s; }
static int surf_mem(surf_t *s){
    if (s->rt) return 0;
    if (!C3D_TexInitVRAM(&s->tex, SZ, SZ, GPU_RGBA8) && !C3D_TexInit(&s->tex, SZ, SZ, GPU_RGBA8)) return -1;
    s->rt = C3D_RenderTargetCreateFromTex(&s->tex, GPU_TEXFACE_2D, 0, -1); if (!s->rt) { C3D_TexDelete(&s->tex); return -1; }
    C3D_FrameBufDepth(&s->rt->frameBuf, depth_buf, GPU_RB_DEPTH24_STENCIL8);
    fprintf(stderr, "[C3D] render surface %d in %s\n", (int)(s - surfs), s->tex.data >= (void *)0x1F000000 && s->tex.data < (void *)0x1F600000 ? "video RAM" : "the GPU heap");
    return 0; }
static void clear_rect_internal(surf_t *s, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz, int sval);
static surf_t *surf_create(u32 addr, int fmt, int stride){
    addr = akey(addr); surf_t *s = 0, *old = &surfs[0];
    for (int i = 0; i < SURF_N; i++) { if (!surfs[i].used && (surfs[i].rt || !s)) { s = &surfs[i]; if (surfs[i].rt) break; } else if (surfs[i].used && surfs[i].stamp < old->stamp) old = &surfs[i]; }
    if (!s) s = old;
    if (surf_mem(s)) { fprintf(stderr, "[C3D] out of memory for a render surface\n"); return NULL; }
    s->used = 1; s->ext = 0; s->addr = addr; s->fmt = fmt; s->stride = stride ? stride : 512; s->psz = fmt == 3 ? 4 : 2; s->drawn = 0; s->stamp = ++surf_stamp;
    { float black[4] = {0, 0, 0, 1}; clear_rect_internal(s, 0, 0, SZ - 1, SZ - 1, black, 1.0f, 1, 1, 0, 0); }
    return s; }
static surf_t *surf_for_addr(u32 a, int *y0, int *x0){
    a = akey(a); surf_t *best = 0;
    for (int i = 0; i < SURF_N; i++) { surf_t *s = &surfs[i]; if (!s->used || !s->drawn || a < s->addr) continue;
        u32 off = a - s->addr, rowb = (u32)(s->stride * s->psz); if (off >= (s->ext ? s->ext : rowb * 272u) || (off % rowb) % (u32)s->psz) continue;
        if (!best || s->addr > best->addr) best = s; }
    if (best) { u32 off = a - best->addr, rowb = (u32)(best->stride * best->psz); *y0 = (int)(off / rowb); *x0 = (int)((off % rowb) / (u32)best->psz); }
    return best; }
static surf_t *target_for(const gfx_state_t *st){
    surf_t *t = surf_find(st->fbaddr); if (!t) t = surf_create(st->fbaddr, st->fbfmt, st->fbstride); if (!t) return NULL;
    t->stamp = ++surf_stamp; t->drawn = 1; t->fmt = st->fbfmt; t->psz = st->fbfmt == 3 ? 4 : 2; if (st->fbstride) t->stride = st->fbstride;
    { int rows = st->sy2 >= 0 && st->sy2 < 512 ? st->sy2 + 1 : 272; u32 e = (u32)(rows * t->stride * t->psz); if (e > t->ext) t->ext = e; }
    set_target(t); return t; }
/* the scissor: only set when it is smaller than the PSP screen (the 3DS's framebuffer rows run bottom-up) */
static int sc_full = -1;
static void scissor_psp(int x1, int y1, int x2, int y2){
    if (x1 < 0) x1 = 0; if (y1 < 0) y1 = 0; if (x2 > SZ - 1) x2 = SZ - 1; if (y2 > SZ - 1) y2 = SZ - 1;
    if (x1 == 0 && y1 == 0 && x2 >= 479 && y2 >= 271) { if (sc_full != 1) { C3D_SetScissor(GPU_SCISSOR_DISABLE, 0, 0, 0, 0); sc_full = 1; } return; }
    if (x2 < x1 || y2 < y1) { x1 = y1 = 0; x2 = y2 = 0; }
    C3D_SetScissor(GPU_SCISSOR_NORMAL, (u32)x1, (u32)(SZ - 1 - y2), (u32)x2 + 1, (u32)(SZ - y1)); sc_full = 0; }

/* ===================================================================== the vertex program */
static DVLB_s *dvlb; static shaderProgram_s prog;
static int u_clip, u_uvt, u_wld, u_mamb, u_mdif, u_memi, u_msca, u_lsel, u_lpos, u_latt, u_la, u_ld, u_bone, u_nlight, u_skin, u_lit, u_anylight;
static void set4(C3D_FVec *p, float x, float y, float z, float w){ p->x = x; p->y = y; p->z = z; p->w = w; }
static void unif_vecs(int loc, const float *v, int n){ C3D_FVec *p = C3D_FVUnifWritePtr(GPU_VERTEX_SHADER, loc, n); for (int i = 0; i < n; i++) set4(&p[i], v[i * 4], v[i * 4 + 1], v[i * 4 + 2], v[i * 4 + 3]); }
static void clip_identity(void){ C3D_FVec *p = C3D_FVUnifWritePtr(GPU_VERTEX_SHADER, u_clip, 4); set4(&p[0], 1, 0, 0, 0); set4(&p[1], 0, 1, 0, 0); set4(&p[2], 0, 0, 1, 0); set4(&p[3], 0, 0, 0, 1); }
/* texture coordinate: the PSP's (scale, offset), then the texture's place (uvs: scale u, scale v, offset v, offset u), then v flipped */
static void set_uvt(const float *a, const float *s){
    float ax = a ? a[0] : 1, ay = a ? a[1] : 1, az = a ? a[2] : 0, aw = a ? a[3] : 0;
    C3D_FVUnifSet(GPU_VERTEX_SHADER, u_uvt, ax * s[0], -ay * s[1], az * s[0] + s[3], 1.0f - (aw * s[1] + s[2])); }

/* ===================================================================== textures */
#define TC_N 768
typedef struct { gtex_key_t k; u32 hash; unsigned epoch, stamp; int used, hnext, tw, th; long bytes; C3D_Tex tex; } tent_t;
static tent_t tc[TC_N]; static int tc_head[1024]; static unsigned tc_stamp; static long tc_bytes; static u32 *scratch;
static u32 tk_hash(const gtex_key_t *k){ u32 h = k->addr * 2654435761u ^ (u32)k->w * 40503u ^ (u32)k->h * 9973u ^ (u32)k->fmt * 131u ^ (u32)k->swz ^ (u32)k->bufw * 7919u ^ k->clut; return (h ^ (h >> 16)) & 1023; }
static int tk_eq(const gtex_key_t *a, const gtex_key_t *b){ return a->addr == b->addr && a->w == b->w && a->h == b->h && a->fmt == b->fmt && a->swz == b->swz && a->bufw == b->bufw && a->clut == b->clut; }
static void tc_link(tent_t *e){ u32 h = tk_hash(&e->k); e->hnext = tc_head[h]; tc_head[h] = (int)(e - tc) + 1; }
static void tc_unlink(tent_t *e){ u32 h = tk_hash(&e->k); int me = (int)(e - tc) + 1; int *pp = &tc_head[h]; while (*pp && *pp != me) pp = &tc[*pp - 1].hnext; if (*pp) *pp = e->hnext; }
static void tent_free(tent_t *e){ if (!e->used) return; tc_unlink(e); tex_free_later(&e->tex); tc_bytes -= e->bytes; memset(e, 0, sizeof *e); }
void gfx_tex_maps(unsigned *mr, unsigned *nrm, int *hd){ *mr = 0; *nrm = 0; *hd = 0; }
static inline u32 morton8(u32 x, u32 y){ return (x & 1) | ((y & 1) << 1) | ((x & 2) << 1) | ((y & 2) << 2) | ((x & 4) << 2) | ((y & 4) << 3); }
static int pow2_at_least(int v){ int p = 8; while (p < v) p <<= 1; return p; }
/* RGBA8 (0xAABBGGRR, PSP row 0 first) -> a 3DS texture: 8x8 tiles in Morton order, PSP row 0 in the first tile row.
 * (Stored the other way up, every picture the CPU made - textures, the menu background, text - showed upside down within its own
 *  rectangle on hardware, while everything placed by geometry was the right way up: the rows are the GPU's own convention, used the
 *  same way by rendering and sampling, so only the CPU's layout here had to change.  RS_TEX_ROWS_UP=1 restores the old layout.) */
static int tex_store(C3D_Tex *t, const u32 *px, int w, int h, int *tw_out, int *th_out, long *bytes){
    int tw = pow2_at_least(w), th = pow2_at_least(h);
    static int force32 = -1; if (force32 < 0) force32 = rs_setting_int("RS_TEX_32BIT", 0);
    int amin = 255, a1 = 1; for (int i = 0; i < w * h; i++) { int a = (int)(px[i] >> 24); if (a < amin) amin = a; if (a != 0 && a != 255) a1 = 0; }
    GPU_TEXCOLOR f = force32 ? GPU_RGBA8 : (amin == 255 ? GPU_RGB565 : (a1 ? GPU_RGBA5551 : GPU_RGBA4));
    if (!C3D_TexInit(t, (u16)tw, (u16)th, f)) return 0;
    int bpp = f == GPU_RGBA8 ? 4 : 2; u8 *dst = t->data; memset(dst, 0, (size_t)tw * th * bpp);
    static int up = -1; if (up < 0) up = rs_setting_int("RS_TEX_ROWS_UP", 0);
    for (int y = 0; y < h; y++) { int gy = up ? th - 1 - y : y; const u32 *row = px + (size_t)y * w;
        for (int x = 0; x < w; x++) {
            u32 c = row[x], r = c & 255, g = (c >> 8) & 255, b = (c >> 16) & 255, a = c >> 24;
            u32 o = (u32)(((gy >> 3) * (tw >> 3) + (x >> 3)) * 64) + morton8((u32)x & 7, (u32)gy & 7);
            switch (f) {
            case GPU_RGBA8:    ((u32 *)dst)[o] = (r << 24) | (g << 16) | (b << 8) | a; break;
            case GPU_RGB565:   ((u16 *)dst)[o] = (u16)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3)); break;
            case GPU_RGBA5551: ((u16 *)dst)[o] = (u16)(((r >> 3) << 11) | ((g >> 3) << 6) | ((b >> 3) << 1) | (a >> 7)); break;
            default:           ((u16 *)dst)[o] = (u16)(((r >> 4) << 12) | ((g >> 4) << 8) | ((b >> 4) << 4) | (a >> 4)); break; } } }
    C3D_TexFlush(t); *tw_out = tw; *th_out = th; *bytes = (long)tw * th * bpp; return 1; }
static int surf_to_memory(void){ return 0; }   /* (palette lookups of a render target need a GPU read-back: not done here yet) */
static unsigned scene_surf_dummy;
unsigned gfx_tex_acquire(const gtex_key_t *k, const gtex_src_t *src, float uvs[4]){
    (void)scene_surf_dummy;
    uvs[0] = uvs[1] = 1; uvs[2] = uvs[3] = 0;
    if (k->w <= 0 || k->h <= 0 || k->w > 1024 || k->h > 1024) return 0;
    int y0, x0; surf_t *s = surf_for_addr(k->addr, &y0, &x0);
    if (s && k->fmt >= 4 && k->fmt <= 7 && !surf_to_memory()) { uvs[0] = -1; return 0; }
    if (s) { if (s == cur && akey(rs_gfx_next_fb) == s->addr) return 0;
        uvs[0] = (float)k->w / SZ; uvs[1] = (float)k->h / SZ; uvs[2] = (float)y0 / SZ; uvs[3] = (float)x0 / SZ; return 0x10000u + (unsigned)(s - surfs); }
    tent_t *e = 0, *old = &tc[0];
    for (int i = tc_head[tk_hash(k)]; i; i = tc[i - 1].hnext) if (tk_eq(&tc[i - 1].k, k)) { e = &tc[i - 1]; break; }
    if (!e) for (int i = 0; i < TC_N; i++) { tent_t *t = &tc[i]; if (!t->used) { old = t; break; } if (t->stamp < old->stamp) old = t; }
    if (e && e->epoch == rs_gfx_epoch) { e->stamp = ++tc_stamp; goto found; }
    { u64 t_h = rs_perf_us(); u32 h = src->hash(src->ud); rs_perf.hash_n++; rs_perf.hash_us += rs_perf_us() - t_h;
      if (e && e->hash == h && e->tex.data) { e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp; goto found; }
      if (!e) {
          static long budget = -1; if (budget < 0) budget = (long)rs_setting_int("RS_TEX_BUDGET_MB", 6) * 1048576L;
          while (tc_bytes + (long)k->w * k->h * 2 > budget) { tent_t *v = 0; for (int i = 0; i < TC_N; i++) if (tc[i].used && tc[i].epoch != rs_gfx_epoch && (!v || tc[i].stamp < v->stamp)) v = &tc[i];
              if (!v) break; tent_free(v); old = v; }
          e = old; tent_free(e); e->k = *k; e->used = 1; tc_link(e); }
      else { tex_free_later(&e->tex); tc_bytes -= e->bytes; e->bytes = 0; }
      e->hash = h; e->epoch = rs_gfx_epoch; e->stamp = ++tc_stamp;
      u64 t_u = rs_perf_us();
      { static size_t cap; size_t need = (size_t)k->w * k->h * 4; if (need > cap) { free(scratch); scratch = malloc(need); cap = scratch ? need : 0; } if (!scratch) return 0; }
      src->decode(scratch, src->ud);
      if (!tex_store(&e->tex, scratch, k->w, k->h, &e->tw, &e->th, &e->bytes)) {
          /* the GPU heap is full before the budget is: free the least recently used textures (not in this frame) until it fits */
          for (int tries = 0; tries < 2 && !e->tex.data; tries++) { collect(); tex_store(&e->tex, scratch, k->w, k->h, &e->tw, &e->th, &e->bytes); }
          while (!e->tex.data) { tent_t *v = 0; for (int i = 0; i < TC_N; i++) if (&tc[i] != e && tc[i].used && tc[i].tex.data && tc[i].epoch + 2 <= rs_gfx_epoch && (!v || tc[i].stamp < v->stamp)) v = &tc[i];
              if (!v) break; C3D_TexDelete(&v->tex); memset(&v->tex, 0, sizeof v->tex); tent_free(v);      /* unused for 2 frames: freed now */ tex_store(&e->tex, scratch, k->w, k->h, &e->tw, &e->th, &e->bytes); }
          if (!e->tex.data) { static int w; if (!w++) fprintf(stderr, "[C3D] out of GPU memory for textures (%dx%d)\n", k->w, k->h); tent_free(e); return 0; } }
      tc_bytes += e->bytes; st_texup++; rs_perf.up_n++; rs_perf.up_us += rs_perf_us() - t_u; }
found:
    uvs[0] = (float)k->w / e->tw; uvs[1] = (float)k->h / e->th;
    return (unsigned)(e - tc) + 1; }
static C3D_Tex *tex_of(unsigned id){
    if (id >= 0x10000u) { unsigned i = id - 0x10000u; return i < SURF_N && surfs[i].used ? &surfs[i].tex : NULL; }
    return id && id <= TC_N && tc[id - 1].used ? &tc[id - 1].tex : NULL; }

/* ===================================================================== state */
static const GPU_TESTFUNC tfun[8] = {GPU_NEVER, GPU_ALWAYS, GPU_EQUAL, GPU_NOTEQUAL, GPU_LESS, GPU_LEQUAL, GPU_GREATER, GPU_GEQUAL};
static const GPU_STENCILOP sop[8] = {GPU_STENCIL_KEEP, GPU_STENCIL_ZERO, GPU_STENCIL_REPLACE, GPU_STENCIL_INVERT, GPU_STENCIL_INCR, GPU_STENCIL_DECR, GPU_STENCIL_KEEP, GPU_STENCIL_KEEP};
static GPU_BLENDFACTOR bfac(int f, int is_src, u32 fix, int fb565, u32 *konst, int *kused){
    switch (f) {
    case 0: return is_src ? GPU_DST_COLOR : GPU_SRC_COLOR;
    case 1: return is_src ? GPU_ONE_MINUS_DST_COLOR : GPU_ONE_MINUS_SRC_COLOR;
    case 2: case 6: return GPU_SRC_ALPHA;
    case 3: case 7: return GPU_ONE_MINUS_SRC_ALPHA;
    case 4: case 8: return fb565 ? GPU_ONE : GPU_DST_ALPHA;
    case 5: case 9: return fb565 ? GPU_ZERO : GPU_ONE_MINUS_DST_ALPHA;
    default:
        if ((fix & 0xFFFFFF) == 0) return GPU_ZERO;
        if ((fix & 0xFFFFFF) == 0xFFFFFF) return GPU_ONE;
        if (!*kused || (*konst & 0xFFFFFF) == (fix & 0xFFFFFF)) { *konst = (fix & 0xFFFFFF) | 0xFF000000u; *kused = 1; return GPU_CONSTANT_COLOR; }
        { u32 l = (fix & 255) + ((fix >> 8) & 255) + ((fix >> 16) & 255); return l >= 383 ? GPU_ONE : GPU_ZERO; } } }   /* a second fixed colour: approximated */
static void tev_flat(void){
    C3D_TexEnv *e = C3D_GetTexEnv(0); C3D_TexEnvInit(e); C3D_TexEnvSrc(e, C3D_Both, GPU_PRIMARY_COLOR, 0, 0); C3D_TexEnvFunc(e, C3D_Both, GPU_REPLACE); }
static void tev_copy(void){
    C3D_TexEnv *e = C3D_GetTexEnv(0); C3D_TexEnvInit(e); C3D_TexEnvSrc(e, C3D_Both, GPU_TEXTURE0, 0, 0); C3D_TexEnvFunc(e, C3D_Both, GPU_REPLACE); }
static void tev_psp(int tfunc, int trgba, int tdbl, u32 tenv){
    C3D_TexEnv *e = C3D_GetTexEnv(0); C3D_TexEnvInit(e);
    switch (tfunc) {
    case 1:                                                     /* decal */
        if (trgba) { C3D_TexEnvSrc(e, C3D_RGB, GPU_TEXTURE0, GPU_PRIMARY_COLOR, GPU_TEXTURE0); C3D_TexEnvOpRgb(e, GPU_TEVOP_RGB_SRC_COLOR, GPU_TEVOP_RGB_SRC_COLOR, GPU_TEVOP_RGB_SRC_ALPHA); C3D_TexEnvFunc(e, C3D_RGB, GPU_INTERPOLATE); }
        else { C3D_TexEnvSrc(e, C3D_RGB, GPU_TEXTURE0, 0, 0); C3D_TexEnvFunc(e, C3D_RGB, GPU_REPLACE); }
        C3D_TexEnvSrc(e, C3D_Alpha, GPU_PRIMARY_COLOR, 0, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_REPLACE); break;
    case 2:                                                     /* blend: colour -> environment colour by the texture */
        C3D_TexEnvSrc(e, C3D_RGB, GPU_CONSTANT, GPU_PRIMARY_COLOR, GPU_TEXTURE0); C3D_TexEnvFunc(e, C3D_RGB, GPU_INTERPOLATE); C3D_TexEnvColor(e, (tenv & 0xFFFFFF) | 0xFF000000u); break;
    case 3:                                                     /* replace */
        C3D_TexEnvSrc(e, C3D_RGB, GPU_TEXTURE0, 0, 0); C3D_TexEnvFunc(e, C3D_RGB, GPU_REPLACE);
        C3D_TexEnvSrc(e, C3D_Alpha, trgba ? GPU_TEXTURE0 : GPU_PRIMARY_COLOR, 0, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_REPLACE); break;
    case 4:                                                     /* add */
        C3D_TexEnvSrc(e, C3D_RGB, GPU_TEXTURE0, GPU_PRIMARY_COLOR, 0); C3D_TexEnvFunc(e, C3D_RGB, GPU_ADD); break;
    default:                                                    /* modulate */
        C3D_TexEnvSrc(e, C3D_RGB, GPU_TEXTURE0, GPU_PRIMARY_COLOR, 0); C3D_TexEnvFunc(e, C3D_RGB, GPU_MODULATE); break; }
    if (tfunc != 1 && tfunc != 3) {                             /* alpha: texture alpha times the colour's (RGBA textures), else the colour's */
        if (trgba) { C3D_TexEnvSrc(e, C3D_Alpha, GPU_TEXTURE0, GPU_PRIMARY_COLOR, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_MODULATE); }
        else { C3D_TexEnvSrc(e, C3D_Alpha, GPU_PRIMARY_COLOR, 0, 0); C3D_TexEnvFunc(e, C3D_Alpha, GPU_REPLACE); } }
    if (tdbl) C3D_TexEnvScale(e, C3D_RGB, GPU_TEVSCALE_2); }
static int apply_state(const gfx_state_t *s){
    int x1 = s->sx1 < 0 ? 0 : s->sx1, y1 = s->sy1 < 0 ? 0 : s->sy1, x2 = s->sx2 > SZ - 1 ? SZ - 1 : s->sx2, y2 = s->sy2 > SZ - 1 ? SZ - 1 : s->sy2;
    scissor_psp(x1, y1, x2, y2);
    int wm = (s->cmr ? GPU_WRITE_RED : 0) | (s->cmg ? GPU_WRITE_GREEN : 0) | (s->cmb ? GPU_WRITE_BLUE : 0) | (s->cma ? GPU_WRITE_ALPHA : 0) | ((s->ztest && s->zwrite) ? GPU_WRITE_DEPTH : 0);
    C3D_DepthTest(true, s->ztest ? tfun[s->zfunc & 7] : GPU_ALWAYS, (GPU_WRITEMASK)wm);
    /* PSP cull_mode 1 culled what GL called back faces; with the rows flipped twice (PSP -> GL -> 3DS) the winding is as in GL */
    C3D_CullFace(!cull_on || !s->cull_en ? GPU_CULL_NONE : (s->cull_mode == 1 ? GPU_CULL_BACK_CCW : GPU_CULL_FRONT_CCW));
    if (s->sten) { C3D_StencilTest(true, tfun[s->sfunc & 7], s->sref, s->smask, s->swmask); C3D_StencilOp(sop[s->sfail & 7], sop[s->szfail & 7], sop[s->szpass & 7]); }
    else C3D_StencilTest(false, GPU_ALWAYS, 0, 0, 0);
    C3D_AlphaTest(s->atest ? true : false, s->atest ? tfun[s->afunc & 7] : GPU_ALWAYS, s->aref);
    if (s->blend) {
        u32 k = 0; int ku = 0, fb565 = s->fbfmt == 0;
        GPU_BLENDFACTOR sf = bfac(s->bsrc, 1, s->bfixa, fb565, &k, &ku), df = bfac(s->bdst, 0, s->bfixb, fb565, &k, &ku);
        GPU_BLENDFACTOR as = (sf == GPU_DST_COLOR || sf == GPU_ONE_MINUS_DST_COLOR) ? GPU_ONE : sf, ad = (df == GPU_SRC_COLOR || df == GPU_ONE_MINUS_SRC_COLOR) ? GPU_ONE : df;
        if (sf == GPU_CONSTANT_COLOR) as = GPU_ONE; if (df == GPU_CONSTANT_COLOR) ad = GPU_ZERO;
        GPU_BLENDEQUATION eq = s->beq == 1 ? GPU_BLEND_SUBTRACT : (s->beq == 2 ? GPU_BLEND_REVERSE_SUBTRACT : (s->beq == 3 ? GPU_BLEND_MIN : (s->beq == 4 ? GPU_BLEND_MAX : GPU_BLEND_ADD)));
        if (ku) C3D_BlendingColor(k);
        C3D_AlphaBlend(eq, eq, sf, df, as, ad); }
    else C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_ONE, GPU_ZERO, GPU_ONE, GPU_ZERO);
    C3D_Tex *tx = s->tex ? tex_of(s->texid) : NULL;
    if (tx) {
        GPU_TEXTURE_FILTER_PARAM f = (s->tfilter || s->texid >= 0x10000u) ? GPU_LINEAR : GPU_NEAREST;
        C3D_TexSetFilter(tx, f, f);
        C3D_TexSetWrap(tx, s->tclampu ? GPU_CLAMP_TO_EDGE : GPU_REPEAT, s->tclampv ? GPU_CLAMP_TO_EDGE : GPU_REPEAT);
        C3D_TexBind(0, tx); tev_psp(s->tfunc, s->trgba, s->tdbl, s->tenv); }
    else tev_flat();
    return 1; }

/* ===================================================================== vertices */
/* canonical vertex: position 3, texture coordinate 2, colour 4 (+ normal 3 when lit, + weights 8 when skinned) */
static void attrs(int lit, int skin, const float defn[4]){
    C3D_AttrInfo *ai = C3D_GetAttrInfo(); AttrInfo_Init(ai);
    AttrInfo_AddLoader(ai, 0, GPU_FLOAT, 3); AttrInfo_AddLoader(ai, 1, GPU_FLOAT, 2); AttrInfo_AddLoader(ai, 2, GPU_FLOAT, 4);
    if (lit) AttrInfo_AddLoader(ai, 3, GPU_FLOAT, 3); else { AttrInfo_AddFixed(ai, 3); C3D_FVec *p = C3D_FixedAttribGetWritePtr(3); set4(p, defn[0], defn[1], defn[2], 0); }
    if (skin) { AttrInfo_AddLoader(ai, 4, GPU_FLOAT, 4); AttrInfo_AddLoader(ai, 5, GPU_FLOAT, 4); }
    else { AttrInfo_AddFixed(ai, 4); set4(C3D_FixedAttribGetWritePtr(4), 0, 0, 0, 0); AttrInfo_AddFixed(ai, 5); set4(C3D_FixedAttribGetWritePtr(5), 0, 0, 0, 0); } }
static void bufinfo(const void *vb, int stride, int n){ C3D_BufInfo *bi = C3D_GetBufInfo(); BufInfo_Init(bi); BufInfo_Add(bi, vb, stride, n, n == 3 ? 0x210 : (n == 4 ? 0x3210 : (n == 5 ? 0x43210 : 0x543210))); }
static float rd_s8(const u8 *p){ return (float)(s8)p[0]; }
static float rd_s16(const u8 *p){ s16 v; memcpy(&v, p, 2); return (float)v; }
static float rd_u16(const u8 *p){ u16 v; memcpy(&v, p, 2); return (float)v; }
static float rd_f(const u8 *p){ float v; memcpy(&v, p, 4); return v; }
static void rd3(const u8 *p, int f, int sgn, float *o){ for (int i = 0; i < 3; i++) o[i] = f == 1 ? (sgn ? rd_s8(p + i) : (float)p[i]) : (f == 2 ? (sgn ? rd_s16(p + 2 * i) : rd_u16(p + 2 * i)) : rd_f(p + 4 * i)); }
static void rd_col(const u8 *p, int cf, float *o){
    u32 c; u16 q;
    switch (cf) {
    case 7: memcpy(&c, p, 4); o[0] = (c & 255) / 255.0f; o[1] = ((c >> 8) & 255) / 255.0f; o[2] = ((c >> 16) & 255) / 255.0f; o[3] = (c >> 24) / 255.0f; return;
    case 4: memcpy(&q, p, 2); o[0] = (q & 31) / 31.0f; o[1] = ((q >> 5) & 63) / 63.0f; o[2] = ((q >> 11) & 31) / 31.0f; o[3] = 1; return;
    case 5: memcpy(&q, p, 2); o[0] = (q & 31) / 31.0f; o[1] = ((q >> 5) & 31) / 31.0f; o[2] = ((q >> 10) & 31) / 31.0f; o[3] = (q >> 15) ? 1.0f : 0.0f; return;
    default: memcpy(&q, p, 2); o[0] = (q & 15) / 15.0f; o[1] = ((q >> 4) & 15) / 15.0f; o[2] = ((q >> 8) & 15) / 15.0f; o[3] = ((q >> 12) & 15) / 15.0f; return; } }
static const float nscale[4] = {1.0f, 1.0f / 128.0f, 1.0f / 32768.0f, 1.0f};

int gfx_draw_native(const gfx_state_t *st, const gfx_hw_t *h, const gfx_native_t *nv){
    if (nv->count <= 0 || nv->vsz <= 0 || nv->off[4] < 0) return 0;
    int n = nv->count; if (n < 3) return 1;
    if (nv->ptype == 3) n -= n % 3;
    u32 vt = nv->vt; int thr = (vt >> 23) & 1;
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1;
    if (!pf) return 0;
    surf_t *t = target_for(st); if (!t) return 1;
    cmd_room();
    u64 t_s = rs_perf_us();
    int lit = !thr && h->lit && nf, skin = !thr && h->skin && wf;
    /* the vertices the draw uses (indices rebased to them) */
    u32 lo = 0, hi = (u32)n - 1; u16 *ix = NULL;
    if (nv->idxf == 2 && nv->nvert > 0) { ix = ring_alloc((u32)n * 2); if (!ix) goto full; memcpy(ix, nv->idata, (size_t)n * 2); hi = (u32)nv->nvert - 1; }   /* already rebased (native GU) */
    else if (nv->idxf) {
        ix = ring_alloc((u32)n * 2); if (!ix) goto full;
        const u8 *ip = nv->idata; lo = 0xFFFFFFFFu; hi = 0;
        for (int i = 0; i < n; i++) { u32 x = nv->idxf == 1 ? ip[i] : (nv->idxf == 2 ? ((u32)ip[i * 2] | (u32)ip[i * 2 + 1] << 8) : ((u32)ip[i * 4] | (u32)ip[i * 4 + 1] << 8 | (u32)ip[i * 4 + 2] << 16 | (u32)ip[i * 4 + 3] << 24));
            if (x < lo) lo = x; if (x > hi) hi = x; ix[i] = (u16)x; }
        if (hi - lo >= 65535u) return 0;
        if (lo) for (int i = 0; i < n; i++) ix[i] = (u16)(ix[i] - lo); }
    int nvert = (int)(hi - lo + 1), fl = 9 + (lit ? 3 : 0) + (skin ? 8 : 0);
    float *vb = ring_alloc((u32)nvert * (u32)fl * 4); if (!vb) goto full;
    {   const u8 *src = nv->vdata + (size_t)lo * nv->vsz; float *o = vb;
        const float ps = thr ? 1.0f : nscale[pf], ts = thr ? 1.0f : nscale[tf], ns = nscale[nf], ws = wf == 3 ? 1.0f : (wf == 2 ? 1.0f / 32768.0f : 1.0f / 128.0f);
        for (int i = 0; i < nvert; i++, src += nv->vsz, o += fl) {
            float p[3]; rd3(src + nv->off[4], pf, 1, p);
            if (thr) {                                              /* screen pixels and 16-bit depth -> clip space */
                if (pf == 2 && p[2] < 0) p[2] += 65536.0f; float z = p[2] < 0 ? 0 : (p[2] > 65535 ? 65535 : p[2]);
                o[0] = p[0] * (2.0f / SZ) - 1.0f; o[1] = 1.0f - p[1] * (2.0f / SZ); o[2] = -z / 65535.0f; }
            else { o[0] = p[0] * ps; o[1] = p[1] * ps; o[2] = p[2] * ps; }
            if (tf && nv->off[1] >= 0) { float u[3]; rd3(src + nv->off[1], tf, 0, u); o[3] = u[0] * ts; o[4] = u[1] * ts; } else o[3] = o[4] = 0;
            if (cf && nv->off[2] >= 0) rd_col(src + nv->off[2], cf, o + 5); else memcpy(o + 5, nv->defc, 16);
            float *q = o + 9;
            if (lit) { float nn[3]; rd3(src + nv->off[3], nf, 1, nn); q[0] = nn[0] * ns; q[1] = nn[1] * ns; q[2] = nn[2] * ns; q += 3; }
            if (skin) { const u8 *w = src + nv->off[0]; int sz = wf == 1 ? 1 : (wf == 2 ? 2 : 4);
                for (int k = 0; k < 8; k++) q[k] = k < nw ? (wf == 1 ? (float)w[k] : (wf == 2 ? rd_u16(w + 2 * k) : rd_f(w + 4 * k))) * ws : 0.0f; (void)sz; } } }
    st_verts += (unsigned)nvert;
    apply_state(st);
    C3D_BindProgram(&prog);
    {   static const float dn[4] = {0, 0, 1, 0}; attrs(lit, skin, dn); bufinfo(vb, fl * 4, 3 + (lit ? 1 : 0) + (skin ? 2 : 0)); }
    if (thr) { clip_identity(); C3D_BoolUnifSet(GPU_VERTEX_SHADER, u_skin, false); C3D_BoolUnifSet(GPU_VERTEX_SHADER, u_lit, false); }
    else {
        const float *m = h->mvp; float ax = h->vp0[0] * (2.0f / SZ), bx = h->vp1[0] * (2.0f / SZ) - 1.0f, ay = -h->vp0[1] * (2.0f / SZ), by = 1.0f - h->vp1[1] * (2.0f / SZ);
        float az = -h->vp0[2] / 65535.0f, bz = -h->vp1[2] / 65535.0f;
        C3D_FVec *p = C3D_FVUnifWritePtr(GPU_VERTEX_SHADER, u_clip, 4);
        set4(&p[0], ax * m[0] + bx * m[12], ax * m[1] + bx * m[13], ax * m[2] + bx * m[14], ax * m[3] + bx * m[15]);
        set4(&p[1], ay * m[4] + by * m[12], ay * m[5] + by * m[13], ay * m[6] + by * m[14], ay * m[7] + by * m[15]);
        set4(&p[2], az * m[8] + bz * m[12], az * m[9] + bz * m[13], az * m[10] + bz * m[14], az * m[11] + bz * m[15]);
        set4(&p[3], m[12], m[13], m[14], m[15]);
        C3D_BoolUnifSet(GPU_VERTEX_SHADER, u_skin, skin);
        if (skin) unif_vecs(u_bone, h->bone, 24);
        C3D_BoolUnifSet(GPU_VERTEX_SHADER, u_lit, lit);
        if (lit) {
            unif_vecs(u_wld, h->wld, 3); unif_vecs(u_mamb, h->mamb, 1); unif_vecs(u_mdif, h->mdif, 1); unif_vecs(u_memi, h->memi, 1); unif_vecs(u_msca, h->msca, 1);
            C3D_FVUnifSet(GPU_VERTEX_SHADER, u_lsel, h->lfl[0] > 0.5f ? 1.0f : 0.0f, h->lfl[1] > 0.5f ? 1.0f : 0.0f, 0, 0);
            int nl = (int)(h->lfl[2] + 0.5f); if (nl > 4) nl = 4;
            C3D_BoolUnifSet(GPU_VERTEX_SHADER, u_anylight, nl > 0);
            if (nl > 0) {
                C3D_IVUnifSet(GPU_VERTEX_SHADER, u_nlight, nl - 1, 0, 1, 0);
                C3D_FVec *lp = C3D_FVUnifWritePtr(GPU_VERTEX_SHADER, u_lpos, 4), *la = C3D_FVUnifWritePtr(GPU_VERTEX_SHADER, u_latt, 4);
                for (int i = 0; i < 4; i++) { const float *q = h->lpos + i * 4, *a = h->latt + i * 4; int point = q[3] > 0.5f;
                    if (point) { set4(&lp[i], q[0], q[1], q[2], 1); set4(&la[i], a[0], a[1], a[2], 0); }
                    else { float l = sqrtf(q[0] * q[0] + q[1] * q[1] + q[2] * q[2]); if (l < 1e-6f) l = 1; set4(&lp[i], q[0] / l, q[1] / l, q[2] / l, 0); set4(&la[i], 1, 0, 0, 0); } }
                unif_vecs(u_la, h->la, 4); unif_vecs(u_ld, h->ld, 4); } } }
    set_uvt(thr ? h->uvt : h->uvt, st->uvs);
    GPU_Primitive_t pt = nv->ptype == 4 ? GPU_TRIANGLE_STRIP : (nv->ptype == 5 ? GPU_TRIANGLE_FAN : GPU_TRIANGLES);
    rs_perf.setup_us += rs_perf_us() - t_s;
    if (ix) C3D_DrawElements(pt, n, C3D_UNSIGNED_SHORT, ix); else C3D_DrawArrays(pt, 0, n);
    rs_perf.batches++; st_draws++; st_tris += (unsigned)(nv->ptype == 3 ? n / 3 : n - 2);
    return 1;
full:
    { static int w; if (!w++) fprintf(stderr, "[C3D] vertex memory full: draws dropped this frame (RS_VTX_MB)\n"); }
    return 1; }

/* CPU-made vertices (gfx_vtx_t: clip space of the 512x512 surface, rows downwards, z -1..1): sprites, the overlay */
static void draw_quads_clip(const float *v9, int n, GPU_Primitive_t pt){   /* v9: x y z u v r g b a, already in the 3DS's clip space */
    C3D_BindProgram(&prog); static const float dn[4] = {0, 0, 1, 0}; attrs(0, 0, dn); bufinfo(v9, 36, 3);
    C3D_BoolUnifSet(GPU_VERTEX_SHADER, u_skin, false); C3D_BoolUnifSet(GPU_VERTEX_SHADER, u_lit, false);
    C3D_DrawArrays(pt, 0, n); st_draws++; }
void gfx_draw(const gfx_state_t *st, const gfx_vtx_t *v, int n){
    if (n <= 0) return;
    surf_t *t = target_for(st); if (!t) return;
    cmd_room();
    float *vb = ring_alloc((u32)n * 36); if (!vb) return;
    for (int i = 0; i < n; i++) { const gfx_vtx_t *a = &v[i]; float *o = vb + i * 9; float iw = a->w != 0 ? 1.0f / a->w : 1.0f;
        o[0] = a->x * iw; o[1] = -a->y * iw; o[2] = -(a->z * iw + 1.0f) * 0.5f; o[3] = a->u; o[4] = a->v; o[5] = a->r; o[6] = a->g; o[7] = a->b; o[8] = a->a; }
    apply_state(st); clip_identity(); set_uvt(NULL, st->uvs);
    draw_quads_clip(vb, n, GPU_TRIANGLES); st_tris += (unsigned)(n / 3); }
void gfx_draw_hw(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_hvtx_t *v, int n){ (void)st; (void)hw; (void)v; (void)n; }
void gfx_flush(void){ }
int gfx_hw_ok(void){ return 1; }

/* clears: a rectangle through the colour / alpha / depth masks (the PSP clears alpha and stencil together) */
static void rect_clip(float *o, int x0, int y0, int x1, int y1, float z, const float *rgba, float u0, float v0, float u1, float v1){
    float l = x0 * (2.0f / SZ) - 1, r = (x1 + 1) * (2.0f / SZ) - 1, tp = 1 - y0 * (2.0f / SZ), bt = 1 - (y1 + 1) * (2.0f / SZ);
    float c[4] = {1, 1, 1, 1}; if (rgba) memcpy(c, rgba, 16);
    float q[4][5] = {{l, tp, u0, v0}, {r, tp, u1, v0}, {l, bt, u0, v1}, {r, bt, u1, v1}};
    for (int i = 0; i < 4; i++) { float *d = o + i * 9; d[0] = q[i][0]; d[1] = q[i][1]; d[2] = z; d[3] = q[i][2]; d[4] = q[i][3]; memcpy(d + 5, c, 16); } }
static void clear_rect_internal(surf_t *s, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz, int sval){
    set_target(s); cmd_room();
    float *vb = ring_alloc(4 * 36); if (!vb) return;
    rect_clip(vb, x0, y0, x1, y1, -depth, rgba, 0, 0, 0, 0);
    scissor_psp(x0, y0, x1, y1);
    int wm = (cc ? (GPU_WRITE_RED | GPU_WRITE_GREEN | GPU_WRITE_BLUE) : 0) | (ca ? GPU_WRITE_ALPHA : 0) | (cz ? GPU_WRITE_DEPTH : 0);
    C3D_DepthTest(true, GPU_ALWAYS, (GPU_WRITEMASK)wm); C3D_CullFace(GPU_CULL_NONE); C3D_AlphaTest(false, GPU_ALWAYS, 0);
    if (ca) { C3D_StencilTest(true, GPU_ALWAYS, sval, 0xFF, 0xFF); C3D_StencilOp(GPU_STENCIL_REPLACE, GPU_STENCIL_REPLACE, GPU_STENCIL_REPLACE); }
    else C3D_StencilTest(false, GPU_ALWAYS, 0, 0, 0);
    C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_ONE, GPU_ZERO, GPU_ONE, GPU_ZERO); tev_flat();
    clip_identity(); draw_quads_clip(vb, 4, GPU_TRIANGLE_STRIP); }
void gfx_clear(const gfx_state_t *st, int x0, int y0, int x1, int y1, const float rgba[4], float depth, int cc, int ca, int cz){
    surf_t *t = target_for(st); if (!t) return; st_clears++;
    if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0; if (x1 > SZ - 1) x1 = SZ - 1; if (y1 > SZ - 1) y1 = SZ - 1;
    int sx1 = st->sx1 > x0 ? st->sx1 : x0, sy1 = st->sy1 > y0 ? st->sy1 : y0, sx2 = st->sx2 < x1 ? st->sx2 : x1, sy2 = st->sy2 < y1 ? st->sy2 : y1;
    if (sx2 < sx1 || sy2 < sy1) return;
    int sv = (int)(rgba[3] * 255.0f + 0.5f); if (sv < 0) sv = 0; if (sv > 255) sv = 255;
    clear_rect_internal(t, sx1, sy1, sx2, sy2, rgba, depth < 0 ? 0 : (depth > 1 ? 1 : depth), cc, ca, cz, sv); }

/* image copies between GPU surfaces (or into one from memory) */
static void blit_rect(surf_t *dst, C3D_Tex *src, float su0, float sv0, float su1, float sv1, int dx, int dy, int w, int h){
    set_target(dst); cmd_room();
    float *vb = ring_alloc(4 * 36); if (!vb) return;
    rect_clip(vb, dx, dy, dx + w - 1, dy + h - 1, -0.5f, NULL, su0, sv0, su1, sv1);
    scissor_psp(dx, dy, dx + w - 1, dy + h - 1);
    C3D_DepthTest(true, GPU_ALWAYS, GPU_WRITE_COLOR); C3D_CullFace(GPU_CULL_NONE); C3D_AlphaTest(false, GPU_ALWAYS, 0); C3D_StencilTest(false, GPU_ALWAYS, 0, 0, 0);
    C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_ONE, GPU_ZERO, GPU_ONE, GPU_ZERO);
    C3D_TexSetFilter(src, GPU_NEAREST, GPU_NEAREST); C3D_TexSetWrap(src, GPU_CLAMP_TO_EDGE, GPU_CLAMP_TO_EDGE); C3D_TexBind(0, src); tev_copy();
    clip_identity(); { float id[4] = {1, 1, 0, 0}; C3D_FVUnifSet(GPU_VERTEX_SHADER, u_uvt, id[0], id[1], id[2], id[3]); }
    draw_quads_clip(vb, 4, GPU_TRIANGLE_STRIP); }
void gfx_transfer(u32 src, int sbw, int sx, int sy, u32 dst, int dbw, int dx, int dy, int w, int h, int bpp){
    int ys = 0, yd = 0, xs = 0, xd = 0; surf_t *ss = surf_for_addr(src, &ys, &xs), *ds = surf_for_addr(dst, &yd, &xd);
    if (w <= 0 || h <= 0 || w > SZ || h > SZ) return;
    if (ss) {
        if (!ds) { ds = surf_create(dst, ss->fmt, dbw); if (!ds) return; ds->drawn = 1; yd = xd = 0; ss = surf_for_addr(src, &ys, &xs); if (!ss) return; }
        if (ds == ss) return;
        rs_perf.copy_n++;
        float u0 = (float)(sx + xs) / SZ, u1 = (float)(sx + xs + w) / SZ, v0 = 1.0f - (float)(sy + ys) / SZ, v1 = 1.0f - (float)(sy + ys + h) / SZ;
        blit_rect(ds, &ss->tex, u0, v0, u1, v1, dx + xd, dy + yd, w, h); ds->stamp = ++surf_stamp; }
    else if (ds) {                                             /* memory -> GPU surface: a temporary texture drawn into it */
        int fmt = bpp == 4 ? 3 : (ds->psz == 2 ? ds->fmt : 1);
        u32 *tmp = malloc((size_t)w * h * 4); if (!tmp) return;
        for (int y = 0; y < h; y++) for (int x = 0; x < w; x++) tmp[y * w + x] = gfx_px_read(gfx_gp(src + (u32)(((sy + y) * sbw + sx + x) * bpp)), fmt);
        C3D_Tex t; memset(&t, 0, sizeof t); int tw, th; long by;
        if (tex_store(&t, tmp, w, h, &tw, &th, &by)) { blit_rect(ds, &t, 0, 1, (float)w / tw, 1.0f - (float)h / th, dx + xd, dy + yd, w, h); tex_free_later(&t); }
        free(tmp); } }

/* ===================================================================== display */
void gfx_get_display(u32 *a, u32 *s, u32 *f){ *a = disp_addr; *s = disp_stride; *f = disp_fmt; }
void gfx_set_display(u32 addr, u32 stride, u32 fmt){ if (addr) { disp_addr = akey(addr); disp_stride = stride ? stride : 512; disp_fmt = fmt & 3; } }
static surf_t *disp_surface(void){ surf_t *s = surf_find(disp_addr); return (s && s->drawn) ? s : 0; }
int gfx_read_display(u32 *out){
    if (!disp_addr || disp_surface()) return 0;
    for (int y = 0; y < 272; y++) for (int x = 0; x < 480; x++) out[y * 480 + x] = gfx_px_read(g_mem + GADDR((disp_addr + (u32)((y * disp_stride + x) * (disp_fmt == 3 ? 4 : 2))) | 0x04000000u), disp_fmt) | 0xFF000000u;
    return 1; }
u32 *gfx_read_display_full(int *w, int *h){ (void)w; (void)h; return NULL; }
u32 *gfx_present_image(int w, int h){ (void)w; (void)h; return NULL; }
void gfx_present(int ww, int wh){ (void)ww; (void)wh; }
void gfx_hud(const char *const *lines, int n, int ww, int wh){ (void)lines; (void)n; (void)ww; (void)wh; }
static C3D_Tex cpu_disp; static float gpu_ms;
/* the displayed PSP picture (480x272) to the top screen (400x240), filtered; then the frame goes to the GPU */
void gfx_c3d_present(void){
    u64 t = rs_perf_us();
    ensure_frame();
    surf_t *s = disp_surface(); C3D_Tex *tx = NULL; float um = 480.0f / SZ, vb = 1.0f - 272.0f / SZ;
    if (s) tx = &s->tex;
    else if (disp_addr) {                                          /* the game wrote the frame buffer with the CPU (no GPU surface) */
        static u32 *pix; if (!pix) pix = malloc(480 * 272 * 4);
        if (pix && gfx_read_display(pix)) { tex_free_later(&cpu_disp); int tw, th; long by; if (tex_store(&cpu_disp, pix, 480, 272, &tw, &th, &by)) { tx = &cpu_disp; um = 480.0f / tw; vb = 1.0f - 272.0f / th; } } }
    C3D_RenderTargetClear(top, C3D_CLEAR_ALL, 0x000000FF, 0);
    C3D_FrameDrawOn(top); cur = NULL; sc_full = -1;
    C3D_SetScissor(GPU_SCISSOR_DISABLE, 0, 0, 0, 0);
    if (tx) {
        float *v = ring_alloc(4 * 36);
        if (v) {
            C3D_Mtx proj; Mtx_OrthoTilt(&proj, 0.0f, 400.0f, 240.0f, 0.0f, 1.0f, -1.0f, true);
            C3D_FVUnifMtx4x4(GPU_VERTEX_SHADER, u_clip, &proj);
            /* surfaces are drawn and read in the GPU's own convention (row 0 at v = 1); flipping the whole picture here (RS_FLIP_DISPLAY=1)
             * only hid that the CPU-made pictures were stored upside down (tex_store): it turned the menus upside down on hardware */
            static int fl = -1; if (fl < 0) fl = rs_setting_int("RS_FLIP_DISPLAY", 0);
            float vt = 1.0f, vbm = vb; if (s && fl) { vt = vb; vbm = 1.0f; }
            float q[4][4] = {{0, 0, 0, vt}, {400, 0, um, vt}, {0, 240, 0, vbm}, {400, 240, um, vbm}};
            for (int i = 0; i < 4; i++) { float *d = v + i * 9; d[0] = q[i][0]; d[1] = q[i][1]; d[2] = 0; d[3] = q[i][2]; d[4] = q[i][3]; d[5] = d[6] = d[7] = d[8] = 1; }
            C3D_DepthTest(false, GPU_ALWAYS, GPU_WRITE_COLOR); C3D_CullFace(GPU_CULL_NONE); C3D_AlphaTest(false, GPU_ALWAYS, 0); C3D_StencilTest(false, GPU_ALWAYS, 0, 0, 0);
            C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_ONE, GPU_ZERO, GPU_ONE, GPU_ZERO);
            C3D_TexSetFilter(tx, GPU_LINEAR, GPU_LINEAR); C3D_TexSetWrap(tx, GPU_CLAMP_TO_EDGE, GPU_CLAMP_TO_EDGE); C3D_TexBind(0, tx); tev_copy();
            C3D_FVUnifSet(GPU_VERTEX_SHADER, u_uvt, 1, 1, 0, 0);
            draw_quads_clip(v, 4, GPU_TRIANGLE_STRIP); } }
    C3D_FrameEnd(0); in_frame = 0; cur = NULL; st_frames++;
    gpu_ms = C3D_GetDrawingTime();
    rs_perf.present_n++; rs_perf.present_us += rs_perf_us() - t; }
void gfx_c3d_counters(unsigned *draws, unsigned *uploads, unsigned *verts, float *gms){ *draws = st_draws; *uploads = st_texup; *verts = st_verts; *gms = gpu_ms; }
void gfx_cache_stats(char *buf, int n){ int used = 0; for (int i = 0; i < TC_N; i++) used += tc[i].used; snprintf(buf, (size_t)n, "texture cache %d/%d entries, %.1f MB", used, TC_N, tc_bytes / 1048576.0); }
void gfx_stats(char *buf, int n){ int ns = 0; for (int i = 0; i < SURF_N; i++) ns += surfs[i].used; snprintf(buf, (size_t)n, "draws=%u tris=%u clears=%u texture-uploads=%u surfaces=%d", st_draws, st_tris, st_clears, st_texup, ns); }
void gfx_shadow_frame(void){ }
void gfx_before_job(void){ }

/* ===================================================================== init */
int gfx_init(void){
    if (!C3D_Init((size_t)rs_setting_int("RS_CMDBUF_KB", 1024) * 1024)) { fprintf(stderr, "[C3D] C3D_Init failed\n"); return -1; }
    top = C3D_RenderTargetCreate(240, 400, GPU_RB_RGBA8, -1); if (!top) { fprintf(stderr, "[C3D] no top-screen target\n"); return -1; }
    C3D_RenderTargetSetOutput(top, GFX_TOP, GFX_LEFT, GX_TRANSFER_FLIP_VERT(0) | GX_TRANSFER_OUT_TILED(0) | GX_TRANSFER_RAW_COPY(0) |
                              GX_TRANSFER_IN_FORMAT(GX_TRANSFER_FMT_RGBA8) | GX_TRANSFER_OUT_FORMAT(GX_TRANSFER_FMT_RGB8) | GX_TRANSFER_SCALING(GX_TRANSFER_SCALE_NO));
    depth_buf = vramAlloc(SZ * SZ * 4); if (!depth_buf) depth_buf = linearAlloc(SZ * SZ * 4);
    if (!depth_buf) { fprintf(stderr, "[C3D] no memory for the depth buffer\n"); return -1; }
    for (int i = 0; i < 3; i++) surf_mem(&surfs[i]);              /* the first surfaces get the video RAM */
    ring_size = (u32)rs_setting_int("RS_VTX_MB", 2) << 20;
    ring[0] = linearAlloc(ring_size); ring[1] = linearAlloc(ring_size);
    if (!ring[0] || !ring[1]) { fprintf(stderr, "[C3D] no memory for vertices\n"); return -1; }
    dvlb = DVLB_ParseFile((u32 *)psp_shbin, psp_shbin_size); shaderProgramInit(&prog); shaderProgramSetVsh(&prog, &dvlb->DVLE[0]);
    shaderInstance_s *vi = prog.vertexShader;
    u_clip = shaderInstanceGetUniformLocation(vi, "clip"); u_uvt = shaderInstanceGetUniformLocation(vi, "uvt"); u_wld = shaderInstanceGetUniformLocation(vi, "wld");
    u_mamb = shaderInstanceGetUniformLocation(vi, "mamb"); u_mdif = shaderInstanceGetUniformLocation(vi, "mdif"); u_memi = shaderInstanceGetUniformLocation(vi, "memi");
    u_msca = shaderInstanceGetUniformLocation(vi, "msca"); u_lsel = shaderInstanceGetUniformLocation(vi, "lsel"); u_lpos = shaderInstanceGetUniformLocation(vi, "lpos");
    u_latt = shaderInstanceGetUniformLocation(vi, "latt"); u_la = shaderInstanceGetUniformLocation(vi, "la"); u_ld = shaderInstanceGetUniformLocation(vi, "ld");
    u_bone = shaderInstanceGetUniformLocation(vi, "bone"); u_nlight = shaderInstanceGetUniformLocation(vi, "nlight");
    u_skin = shaderInstanceGetUniformLocation(vi, "skin"); u_lit = shaderInstanceGetUniformLocation(vi, "lit"); u_anylight = shaderInstanceGetUniformLocation(vi, "anylight");
    C3D_BindProgram(&prog);
    for (int i = 1; i < 6; i++) { C3D_TexEnv *e = C3D_GetTexEnv(i); C3D_TexEnvInit(e); }   /* stages 1-5 pass the first stage's result through */
    C3D_DepthMap(true, -1.0f, 0.0f);
    cull_on = rs_setting_int("RS_CULL", 0);
    fprintf(stderr, "[C3D] renderer ready: %d MB of vertex memory x2, texture budget %d MB, VRAM %lu KB free, GPU heap %lu KB free\n",
            (int)(ring_size >> 20), rs_setting_int("RS_TEX_BUDGET_MB", 6), (unsigned long)(vramSpaceFree() >> 10), (unsigned long)(linearSpaceFree() >> 10));
    return 0; }
