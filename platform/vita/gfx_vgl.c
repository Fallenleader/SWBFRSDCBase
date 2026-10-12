/* PS Vita renderer: the GL ES 2.0 back end (platform/linux_test/gfx_gl.c, Cg shader sources on the Vita) on top of vitaGL. */
#include <stdio.h>
#include <string.h>
#include <vitaGL.h>
#include <vitashark.h>
#include <psp2/io/stat.h>

static void *vita_getproc(const char *name){
#define X(r, n, a) if (!strcmp(name, #n)) return RS_VITA_PROC(n);
#define RS_VITA_PROC(n) RS_VITA_PROC_##n
#include "rs_vita_procs.h"
#include "rs_gl_funcs.h"
#undef X
    if (!strcmp(name, "glClearDepthf")) return (void *)glClearDepthf;
    return 0; }
int rs_gl_load(void *(*getproc)(const char *name));
int gfx_init(void);
void gfx_present(int ww, int wh);
void gfx_hud(const char *const *lines, int n, int ww, int wh);

int rs_renderer_start(void){
    vglInitExtended(0, 960, 544, 0x1800000, SCE_GXM_MULTISAMPLE_NONE);
    { extern int rs_setting_int(const char *, int); vglWaitVblankStart(rs_setting_int("RS_VSYNC", 1) ? GL_TRUE : GL_FALSE); }
    if (rs_gl_load(vita_getproc) != 0) { fprintf(stderr, "[GL] vitaGL is missing required entry points\n"); return -1; }
    glClearColor(0, 0, 0, 1); glClear(GL_COLOR_BUFFER_BIT); vglSwapBuffers(GL_FALSE);
    return gfx_init(); }
void rs_renderer_present(const char *const *lines, int n){
    extern volatile int rs_dialog_active;
    gfx_present(960, 544); if (lines && n > 0) gfx_hud(lines, n, 960, 544); vglSwapBuffers(rs_dialog_active ? GL_TRUE : GL_FALSE); }

/* ---- native texture upload (called by gfx_gl.c's texture cache) ----
 * The PSP texel data goes into the GL texture in a GXM format that reads it as it is, through vitaGL's hooks for setting a texture's
 * GXM descriptor and memory (vglGetGxmTexture, vglOverloadTexDataPointer; the memory comes from vitaGL's pools, so vitaGL frees it
 * with the texture).  565 / 5551 / 4444 / 8888 have the same bit layout as GXM's U5U6U5_BGR / U1U5U5U5_ABGR / U4U4U4U4_ABGR /
 * U8U8U8U8_ABGR (red in the low bits; vitaGL itself maps GL's red-high 565 to U5U6U5_RGB).  4- and 8-bit CLUT textures become P4 / P8
 * textures with the CLUT as their palette (P4: first texel in the low nibble, as on the PSP; vitaGL swaps the nibbles of GL's
 * high-nibble-first data for the same format).  DXT1/3/5 become BC1/2/3: same blocks, but the PSP stores the 565 end points with red
 * in the low bits and standard BC with red in the high bits, so each block's two end points get red and blue exchanged (DXT1: and are
 * put back in the order that keeps the block's 3- or 4-colour mode); BC textures are block-swizzled the way vitaGL swizzles them.  The
 * PSP's own swizzle (16-byte x 8-row tiles) is undone by copying those tiles.  Returns 1 if done, 0 if this format is left to the
 * caller (RGBA8 decode). */
#include "gfx.h"
#define RS_ALIGN(x, a) (((x) + ((a) - 1)) & ~((a) - 1))
static u32 part1by1(u32 x){ x &= 0xFFFF; x = (x ^ (x << 8)) & 0x00FF00FF; x = (x ^ (x << 4)) & 0x0F0F0F0F; x = (x ^ (x << 2)) & 0x33333333; x = (x ^ (x << 1)) & 0x55555555; return x; }
static u16 rb_swap(u16 v){ return (u16)((v & 0x07E0u) | (v >> 11) | ((v & 31u) << 11)); }
static void bc_color_fix(u8 *cb, int dxt1){
    u16 c0, c1; u32 ix; memcpy(&c0, cb, 2); memcpy(&c1, cb + 2, 2); memcpy(&ix, cb + 4, 4);
    u16 a = rb_swap(c0), b = rb_swap(c1);
    if (dxt1 && ((c0 > c1) != (a > b))) { u16 t = a; a = b; b = t;
        if (c0 > c1) ix ^= 0x55555555u;                                  /* 4-colour block: 0<->1, 2<->3 */
        else ix ^= (~ix >> 1) & 0x55555555u; }                          /* 3-colour block: 0<->1; 2 (middle) and 3 (transparent) stay */
    memcpy(cb, &a, 2); memcpy(cb + 2, &b, 2); memcpy(cb + 4, &ix, 4); }
/* the GL texture `id` gets data (need bytes, alignment al) and, optionally, a palette */
static u8 *tex_begin(unsigned id, long need){
    u8 *m = vglMemalign(256, (uint32_t)need); if (!m) return NULL;
    glBindTexture(GL_TEXTURE_2D, id);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 8, 8, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);        /* a valid texture whose memory is replaced below */
    void *old = vglGetTexDataPointer(GL_TEXTURE_2D);
    vglOverloadTexDataPointer(GL_TEXTURE_2D, m);
    if (old && old != m) vglFree(old);
    return m; }
int rs_vgl_tex_native(unsigned id, const gtex_key_t *k, long *bytes){
    int f = k->fmt, w = k->w, h = k->h, bw = k->bufw > 0 ? k->bufw : k->w;
    size_t base = GADDR(gfx_vram(k->addr)); if (base >= GMEM_SIZE) return 0;
    const u8 *src = g_mem + base; size_t avail = GMEM_SIZE - base;
    if (f >= 8 && f <= 10) {
        if (w < 4 || h < 4) return 0;
        int bsz = f == 8 ? 8 : 16, nbx = w / 4, nby = h / 4, bpr = (bw + 3) / 4;
        if ((size_t)bpr * (size_t)(nby - 1) * bsz + (size_t)nbx * bsz > avail) return 0;
        long need = (long)nbx * nby * bsz; u8 *m = tex_begin(id, need); if (!m) return 0;
        int tile = nbx < nby ? nbx : nby; u32 tt = (u32)tile * (u32)tile;
        for (int by = 0; by < nby; by++) for (int bx = 0; bx < nbx; bx++) {
            u32 d = (part1by1((u32)(bx % tile)) << 1 | part1by1((u32)(by % tile))) + (u32)(bx / tile + by / tile) * tt;
            u8 blk[16]; memcpy(blk, src + ((size_t)by * bpr + bx) * bsz, (size_t)bsz);
            bc_color_fix(blk + (f == 8 ? 0 : 8), f == 8);
            memcpy(m + (size_t)d * bsz, blk, (size_t)bsz); }
        sceGxmTextureInitSwizzled(vglGetGxmTexture(GL_TEXTURE_2D), m, f == 8 ? SCE_GXM_TEXTURE_FORMAT_UBC1_ABGR : (f == 9 ? SCE_GXM_TEXTURE_FORMAT_UBC2_ABGR : SCE_GXM_TEXTURE_FORMAT_UBC3_ABGR), (unsigned)w, (unsigned)h, 0);
        *bytes = need; return 1; }
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
    size_t srow = (size_t)bw * bpp / 8, rb = (size_t)w * bpp / 8, drow = (size_t)RS_ALIGN(w, 8) * bpp / 8;
    if (srow * (size_t)h > avail || rb > srow) return 0;
    if (k->swz && (srow & 15)) return 0;
    int npal = f == 4 ? 16 : (f == 5 ? 256 : 0);
    u32 *pal = NULL;
    if (npal) { pal = vglMemalign(64, (uint32_t)npal * 4); if (!pal) return 0; ge_clut_palette(pal, npal); }
    long need = (long)(drow * (size_t)h); u8 *dst = tex_begin(id, need); if (!dst) { if (pal) vglFree(pal); return 0; }
    if (!k->swz) for (int y = 0; y < h; y++) memcpy(dst + (size_t)y * drow, src + (size_t)y * srow, rb);
    else { size_t tiles_row = srow >> 4;
        for (int y = 0; y < h; y++) { const u8 *trow = src + ((size_t)(y >> 3) * tiles_row) * 128 + (size_t)(y & 7) * 16; u8 *d = dst + (size_t)y * drow;
            for (size_t c = 0; c < rb; c += 16) memcpy(d + c, trow + (c >> 4) * 128, rb - c < 16 ? rb - c : 16); } }
    SceGxmTexture *gt = vglGetGxmTexture(GL_TEXTURE_2D);
    sceGxmTextureInitLinear(gt, dst, gf, (unsigned)w, (unsigned)h, 0);
    if (pal) { void *op = vglGetTexPaletteDataPointer(GL_TEXTURE_2D); vglOverloadTexPaletteDataPointer(GL_TEXTURE_2D, pal); if (op && op != pal) vglFree(op); sceGxmTextureSetPalette(gt, pal); }
    *bytes = need + npal * 4; return 1; }
