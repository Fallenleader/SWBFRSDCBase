/* PSP GE command interpreter.  Platform neutral: decodes display lists, vertices, textures and GE state, does the vertex transform and lighting on
 * the CPU, and hands clip-space triangles to the GL ES 2.0 back end (gfx_gl.c).  Everything here runs on the GL thread (see gfx_run).
 * (The old software rasterizer is kept for reference outside the build as work/ge_soft_reference.c.)
 * Not implemented: colour test, logic ops, bezier/spline, morphing, texture-matrix/env-map texgen, mipmaps, specular lighting, points/lines. */
#include "psp_impl.h"
#include "gfx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static u32 R[256];                       /* raw command register file (24-bit data) */
static float M_world[12], M_view[12], M_proj[16], M_bone[8][12];
static int n_world, n_view, n_proj, n_bone;
static u8 clut_buf[4096 + 64]; static u32 clut_hash;
static u32 ge_stats_prims, ge_stats_tris, ge_stats_cmds;
u32 rs_ge_prims(void){ return ge_stats_prims; }
void rs_ge_summary(void){ char b[256]; gfx_stats(b, sizeof b); fprintf(stderr, "[GE] cmds=%u prims=%u tris=%u  %s\n", ge_stats_cmds, ge_stats_prims, ge_stats_tris, b); }

static inline float f24(u32 d){ u32 u = d << 8; float f; memcpy(&f, &u, 4); return f; }
static inline u32 vram_addr(u32 a){ return gfx_vram(a); }
static inline u8 *gp(u32 a){ return gfx_gp(a); }
static inline int pxsize(int fmt){ return fmt == 3 ? 4 : 2; }

/* ------------------------------------------------------------- textures (CPU decode to RGBA8; the back end caches them as GL textures) */
/* ------------------------------------------------------------- textures */
static u32 clut_entry(int idx){
    int fmt = R[0xC5] & 3; int shift = (R[0xC5] >> 2) & 31, mask = (R[0xC5] >> 8) & 255, start = (R[0xC5] >> 16) & 31;
    idx = ((idx >> shift) & mask) | (start << 4);
    if (fmt == 3) { idx &= 255 | 0x300; u32 v; memcpy(&v, clut_buf + ((idx * 4) & 4095), 4); return v; }
    u16 p; memcpy(&p, clut_buf + ((idx * 2) & 4095), 2);
    u32 r, g, b, a;
    switch (fmt) {
    case 0: r = (p & 31) * 255 / 31; g = ((p >> 5) & 63) * 255 / 63; b = ((p >> 11) & 31) * 255 / 31; a = 255; break;
    case 1: r = (p & 31) * 255 / 31; g = ((p >> 5) & 31) * 255 / 31; b = ((p >> 10) & 31) * 255 / 31; a = (p & 0x8000) ? 255 : 0; break;
    default: r = (p & 15) * 17; g = ((p >> 4) & 15) * 17; b = ((p >> 8) & 15) * 17; a = ((p >> 12) & 15) * 17; }
    return r | (g << 8) | (b << 16) | (a << 24); }
void ge_clut_palette(u32 *pal, int n){ for (int i = 0; i < n; i++) pal[i] = clut_entry(i); }
/* back ends without a native draw path (the GL one) */
__attribute__((weak)) int gfx_draw_native(const gfx_state_t *st, const gfx_hw_t *hw, const gfx_native_t *nv){ (void)st; (void)hw; (void)nv; return 0; }
static u32 rgb565(u16 p){ u32 r = (p & 31) * 255 / 31, g = ((p >> 5) & 63) * 255 / 63, b = ((p >> 11) & 31) * 255 / 31; return r | (g << 8) | (b << 16) | 0xFF000000u; }
static u32 dxt_texel(u32 base, int bufw, int x, int y, int kind){
    int bx = x >> 2, by = y >> 2, bpb = kind == 8 ? 8 : 16; int bpr = (bufw + 3) >> 2;
    u8 *b = gp(base + (by * bpr + bx) * bpb); int ix = x & 3, iy = y & 3;
    u8 *cb = b + (kind == 8 ? 0 : 8); u16 c0, c1; memcpy(&c0, cb, 2); memcpy(&c1, cb + 2, 2);
    u32 col[4]; col[0] = rgb565(c0); col[1] = rgb565(c1);
    int r0 = col[0] & 255, g0 = (col[0] >> 8) & 255, b0 = (col[0] >> 16) & 255, r1 = col[1] & 255, g1 = (col[1] >> 8) & 255, b1 = (col[1] >> 16) & 255;
    if (c0 > c1 || kind != 8) { col[2] = (2 * r0 + r1) / 3 | (((2 * g0 + g1) / 3) << 8) | (((2 * b0 + b1) / 3) << 16) | 0xFF000000u; col[3] = (r0 + 2 * r1) / 3 | (((g0 + 2 * g1) / 3) << 8) | (((b0 + 2 * b1) / 3) << 16) | 0xFF000000u; }
    else { col[2] = (r0 + r1) / 2 | (((g0 + g1) / 2) << 8) | (((b0 + b1) / 2) << 16) | 0xFF000000u; col[3] = 0; }
    int sel = (cb[4 + iy] >> (ix * 2)) & 3; u32 c = col[sel];
    if (kind == 9) { int a = (b[iy * 2 + (ix >> 1)] >> ((ix & 1) * 4)) & 15; c = (c & 0xFFFFFF) | ((u32)(a * 17) << 24); }
    else if (kind == 10) {
        int a0 = b[0], a1 = b[1]; u64 bits = 0; for (int i = 0; i < 6; i++) bits |= (u64)b[2 + i] << (8 * i);
        int idx = (int)((bits >> (3 * (iy * 4 + ix))) & 7), a;
        if (idx == 0) a = a0; else if (idx == 1) a = a1;
        else if (a0 > a1) a = ((8 - idx) * a0 + (idx - 1) * a1) / 7;
        else if (idx < 6) a = ((6 - idx) * a0 + (idx - 1) * a1) / 5; else a = idx == 6 ? 0 : 255;
        c = (c & 0xFFFFFF) | ((u32)a << 24); }
    return c; }
static u32 tex_fetch(int x, int y, u32 base, int bufw, int fmt, int swz){
    int bpp = fmt == 3 || fmt == 7 ? 32 : (fmt == 4 ? 4 : (fmt == 5 ? 8 : 16));
    if (fmt >= 8) return dxt_texel(base, bufw, x, y, fmt);
    u32 off;
    if (!swz) off = (u32)((y * bufw + x) * bpp / 8);
    else { int bytes_row = bufw * bpp / 8, bxb = x * bpp / 8; off = ((y >> 3) * (bytes_row >> 4) + (bxb >> 4)) * 128 + (y & 7) * 16 + (bxb & 15); }
    u8 *p = gp(base + off);
    switch (fmt) {
    case 0: { u16 v; memcpy(&v, p, 2); return rgb565(v); }
    case 1: case 2: { u16 v; memcpy(&v, p, 2); u32 r, g, b, a;
        if (fmt == 1) { r = (v & 31) * 255 / 31; g = ((v >> 5) & 31) * 255 / 31; b = ((v >> 10) & 31) * 255 / 31; a = (v & 0x8000) ? 255 : 0; }
        else { r = (v & 15) * 17; g = ((v >> 4) & 15) * 17; b = ((v >> 8) & 15) * 17; a = ((v >> 12) & 15) * 17; }
        return r | (g << 8) | (b << 16) | (a << 24); }
    case 3: { u32 v; memcpy(&v, p, 4); return v; }
    case 4: { int n = (x & 1) ? (*p >> 4) : (*p & 15); return clut_entry(n); }
    case 5: return clut_entry(*p);
    case 6: { u16 v; memcpy(&v, p, 2); return clut_entry(v); }
    default: { u32 v; memcpy(&v, p, 4); return clut_entry((int)v); } } }

static u32 fnv_words(const u32 *p, size_t words, size_t step){ u32 h = 2166136261u; for (size_t i = 0; i < words; i += step) h = (h ^ p[i]) * 16777619u; return h ^ (u32)words; }
static u32 tex_hash_cb(void *ud){
    const gtex_key_t *k = ud; int f = k->fmt; size_t bytes;
    if (f >= 8) bytes = (size_t)((k->bufw + 3) / 4) * ((k->h + 3) / 4) * (f == 8 ? 8 : 16);
    else { int bpp = (f == 3 || f == 7) ? 32 : (f == 4 ? 4 : (f == 5 ? 8 : 16)); bytes = (size_t)k->bufw * k->h * bpp / 8; }
    size_t base = GADDR(vram_addr(k->addr)); if (base >= GMEM_SIZE) return 0; if (bytes > GMEM_SIZE - base) bytes = GMEM_SIZE - base;
    size_t words = bytes / 4; const u32 *p = (const u32 *)(g_mem + base);
    return fnv_words(p, words, words > 4096 ? 7 : 1); }
static void tex_decode_cb(u32 *dst, void *ud){
    const gtex_key_t *k = ud;
    for (int y = 0; y < k->h; y++) for (int x = 0; x < k->w; x++) dst[y * k->w + x] = tex_fetch(x, y, k->addr, k->bufw, k->fmt, k->swz);
    static const char *dd = (const char *)-1; static int nd; if (dd == (const char *)-1) dd = getenv("RS_TEX_DUMP");
    if (dd && nd < 60) { char fn[600]; snprintf(fn, sizeof fn, "%s/tex_%02d_%08x_f%d_%dx%d.ppm", dd, nd++, k->addr, k->fmt, k->w, k->h); FILE *f = fopen(fn, "wb");
        if (f) { fprintf(f, "P6\n%d %d\n255\n", k->w, k->h); for (int i = 0; i < k->w * k->h; i++) { u8 rgb[3] = {dst[i] & 255, (dst[i] >> 8) & 255, (dst[i] >> 16) & 255}; fwrite(rgb, 1, 3, f); } fclose(f); strcat(fn, ".a.pgm"); f = fopen(fn, "wb"); if (f) { fprintf(f, "P5\n%d %d\n255\n", k->w, k->h); for (int i = 0; i < k->w * k->h; i++) fputc(dst[i] >> 24, f); fclose(f); } } } }

/* ------------------------------------------------------------- vertices */
typedef struct { float p[4]; float u, v; float c[4]; float sx, sy, sz, fog; int cull; } gv_t;      /* GL clip pos, uv, colour 0..255, screen-space pos */
typedef struct { float px, py, pz, u, v, col[4], nx, ny, nz, wgt[8]; int hascol; } rawv_t;

/* ------------------------------------------------------------- vertices */

static int vt_size(u32 vt, int *off){
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1;
    int pos = 0, al, sz; static const int fs[4] = {0, 1, 2, 4};
    if (wf) { sz = fs[wf]; al = sz; pos = (pos + al - 1) & ~(al - 1); off[0] = pos; pos += sz * nw; } else off[0] = -1;
    if (tf) { sz = fs[tf] * 2; al = fs[tf]; pos = (pos + al - 1) & ~(al - 1); off[1] = pos; pos += sz; } else off[1] = -1;
    if (cf) { sz = cf == 7 ? 4 : 2; al = sz; pos = (pos + al - 1) & ~(al - 1); off[2] = pos; pos += sz; } else off[2] = -1;
    if (nf) { sz = fs[nf] * 3; al = fs[nf]; pos = (pos + al - 1) & ~(al - 1); off[3] = pos; pos += sz; } else off[3] = -1;
    if (pf) { sz = fs[pf] * 3; al = fs[pf]; pos = (pos + al - 1) & ~(al - 1); off[4] = pos; pos += sz; } else off[4] = -1;
    int maxal = 1; if (wf && fs[wf] > maxal) maxal = fs[wf]; if (tf && fs[tf] > maxal) maxal = fs[tf]; if (cf) { int a = cf == 7 ? 4 : 2; if (a > maxal) maxal = a; }
    if (nf && fs[nf] > maxal) maxal = fs[nf]; if (pf && fs[pf] > maxal) maxal = fs[pf];
    return (pos + maxal - 1) & ~(maxal - 1); }
static float rdc(u8 *p, int fmt, int through, int isuv){
    switch (fmt) {
    case 1: return isuv ? (through ? *p : *p / 128.0f) : (through ? (float)(s8)*p : (s8)*p / 128.0f);
    case 2: { s16 v; memcpy(&v, p, 2); if (isuv) { u16 uv = (u16)v; return through ? uv : uv / 32768.0f; } return through ? (float)v : v / 32768.0f; }
    default: { float f; memcpy(&f, p, 4); return f; } } }
static void decode_vertex(u32 vt, u8 *p, const int *off, rawv_t *o){
    int tf = vt & 3, cf = (vt >> 2) & 7, nf = (vt >> 5) & 3, pf = (vt >> 7) & 3, wf = (vt >> 9) & 3, nw = ((vt >> 14) & 7) + 1, thr = (vt >> 23) & 1;
    static const int fs[4] = {0, 1, 2, 4};
    memset(o, 0, sizeof *o); o->col[0] = o->col[1] = o->col[2] = o->col[3] = 255;
    if (off[0] >= 0) for (int i = 0; i < nw && i < 8; i++) { u8 *q = p + off[0] + i * fs[wf]; if (wf == 1) o->wgt[i] = *q / 128.0f; else if (wf == 2) { u16 v; memcpy(&v, q, 2); o->wgt[i] = v / 32768.0f; } else memcpy(&o->wgt[i], q, 4); }
    if (off[1] >= 0) { o->u = rdc(p + off[1], tf, thr, 1); o->v = rdc(p + off[1] + fs[tf], tf, thr, 1); }
    if (off[2] >= 0) { u8 *q = p + off[2]; o->hascol = 1;
        if (cf == 7) { o->col[0] = q[0]; o->col[1] = q[1]; o->col[2] = q[2]; o->col[3] = q[3]; }
        else { u16 v; memcpy(&v, q, 2);
            if (cf == 4) { o->col[0] = (v & 31) * 255 / 31; o->col[1] = ((v >> 5) & 63) * 255 / 63; o->col[2] = ((v >> 11) & 31) * 255 / 31; o->col[3] = 255; }
            else if (cf == 5) { o->col[0] = (v & 31) * 255 / 31; o->col[1] = ((v >> 5) & 31) * 255 / 31; o->col[2] = ((v >> 10) & 31) * 255 / 31; o->col[3] = (v & 0x8000) ? 255 : 0; }
            else { o->col[0] = (v & 15) * 17; o->col[1] = ((v >> 4) & 15) * 17; o->col[2] = ((v >> 8) & 15) * 17; o->col[3] = ((v >> 12) & 15) * 17; } } }
    if (off[3] >= 0) { o->nx = rdc(p + off[3], nf, 0, 0); o->ny = rdc(p + off[3] + fs[nf], nf, 0, 0); o->nz = rdc(p + off[3] + 2 * fs[nf], nf, 0, 0); }
    if (off[4] >= 0) { o->px = rdc(p + off[4], pf, thr, 0); o->py = rdc(p + off[4] + fs[pf], pf, thr, 0); o->pz = rdc(p + off[4] + 2 * fs[pf], pf, thr, 0);
        if (thr && pf == 2) { u16 z; memcpy(&z, p + off[4] + 4, 2); o->pz = z; } } }

/* ------------------------------------------------------------- transform + lighting */
static void xform(const float *m, int rows, float x, float y, float z, float w, float *o, int cols){
    for (int c = 0; c < cols; c++) { float v = x * m[0 * cols + c] + y * m[1 * cols + c] + z * m[2 * cols + c]; if (rows == 4) v += w * m[3 * cols + c]; o[c] = v; } }
static void rgb24(u32 v, float *o){ o[0] = (v & 255) / 255.0f; o[1] = ((v >> 8) & 255) / 255.0f; o[2] = ((v >> 16) & 255) / 255.0f; }
static float clamp01(float v){ return v < 0 ? 0 : (v > 1 ? 1 : v); }
static void normalize3(float *v){ float l = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]); if (l > 1e-12f) { v[0] /= l; v[1] /= l; v[2] /= l; } }

/* per-vertex lighting (ambient + diffuse, directional/point/spot), in world space.  Output colour 0..255.
 * Everything that only depends on GE registers is decoded once per primitive (lk_t) instead of once per vertex. */
typedef struct { int n, upd; float amb0[3], aa0, dif0[3], emi[3], sca[3];
                 struct { int type; float lp[3], k0, k1, k2, sd[3], cut, ex, la[3], ld[3]; } L[4]; } lk_t;
static lk_t lk;
static void light_consts(void){
    lk.upd = R[0x53] & 7; rgb24(R[0x55], lk.amb0); lk.aa0 = (R[0x58] & 255) / 255.0f; rgb24(R[0x56], lk.dif0); rgb24(R[0x54], lk.emi); rgb24(R[0x5C], lk.sca); lk.n = 0;
    for (int i = 0; i < 4; i++) { if (!(R[0x18 + i] & 1)) continue; typeof(lk.L[0]) *l = &lk.L[lk.n++];
        l->type = (R[0x5F + i] >> 8) & 3; l->lp[0] = f24(R[0x63 + 3 * i]); l->lp[1] = f24(R[0x64 + 3 * i]); l->lp[2] = f24(R[0x65 + 3 * i]);
        if (l->type == 0) normalize3(l->lp);
        l->k0 = f24(R[0x7B + 3 * i]); l->k1 = f24(R[0x7C + 3 * i]); l->k2 = f24(R[0x7D + 3 * i]);
        l->sd[0] = f24(R[0x6F + 3 * i]); l->sd[1] = f24(R[0x70 + 3 * i]); l->sd[2] = f24(R[0x71 + 3 * i]); normalize3(l->sd); l->cut = f24(R[0x8B + i]); l->ex = f24(R[0x87 + i]);
        rgb24(R[0x8F + 3 * i], l->la); rgb24(R[0x90 + 3 * i], l->ld); } }
static void light_vertex(const rawv_t *r, const float *wpos, const float *nrm, float *outc){
    int upd = lk.upd; float amb[3], dif[3], aa;
    if (r->hascol && (upd & 1)) { amb[0] = r->col[0] / 255; amb[1] = r->col[1] / 255; amb[2] = r->col[2] / 255; aa = r->col[3] / 255; } else { amb[0] = lk.amb0[0]; amb[1] = lk.amb0[1]; amb[2] = lk.amb0[2]; aa = lk.aa0; }
    if (r->hascol && (upd & 2)) { dif[0] = r->col[0] / 255; dif[1] = r->col[1] / 255; dif[2] = r->col[2] / 255; } else { dif[0] = lk.dif0[0]; dif[1] = lk.dif0[1]; dif[2] = lk.dif0[2]; }
    float col[3]; for (int k = 0; k < 3; k++) col[k] = lk.emi[k] + lk.sca[k] * amb[k];
    for (int i = 0; i < lk.n; i++) { const typeof(lk.L[0]) *l = &lk.L[i]; float L[3], att = 1.0f;
        if (l->type == 0) { L[0] = l->lp[0]; L[1] = l->lp[1]; L[2] = l->lp[2]; }
        else { L[0] = l->lp[0] - wpos[0]; L[1] = l->lp[1] - wpos[1]; L[2] = l->lp[2] - wpos[2]; float d = sqrtf(L[0] * L[0] + L[1] * L[1] + L[2] * L[2]); if (d > 1e-12f) { float id = 1.0f / d; L[0] *= id; L[1] *= id; L[2] *= id; }
            float den = l->k0 + l->k1 * d + l->k2 * d * d; att = den > 1e-6f ? 1.0f / den : 1.0f; if (att > 1) att = 1;
            if (l->type == 2) { float cs = -(L[0] * l->sd[0] + L[1] * l->sd[1] + L[2] * l->sd[2]);
                if (cs < l->cut) att = 0; else if (l->ex > 0) att *= powf(cs > 0 ? cs : 0, l->ex); } }
        float ndl = nrm[0] * L[0] + nrm[1] * L[1] + nrm[2] * L[2]; if (ndl < 0) ndl = 0;
        for (int k = 0; k < 3; k++) col[k] += (l->la[k] * amb[k] + ndl * l->ld[k] * dif[k]) * att; }
    outc[0] = clamp01(col[0]) * 255; outc[1] = clamp01(col[1]) * 255; outc[2] = clamp01(col[2]) * 255; outc[3] = clamp01(aa) * 255; }

/* per-primitive constants: world*view*proj folded into ONE 4x4 (row-vector convention, as xform), the view-z row for fog, viewport */
typedef struct { float mvp[16], wv[16], wvz[4]; float xs, ys, zs, xc, yc, zc, ox, oy, su, sv, ou, ov, fe, fsl; int fog, clamp; } pk_t;
static void to44(const float *m43, float *o){ for (int r = 0; r < 4; r++) { for (int c = 0; c < 3; c++) o[r * 4 + c] = m43[r * 3 + c]; o[r * 4 + 3] = r == 3 ? 1.0f : 0.0f; } }
static void mul44(const float *a, const float *b, float *o){ for (int r = 0; r < 4; r++) for (int c = 0; c < 4; c++) o[r * 4 + c] = a[r * 4] * b[c] + a[r * 4 + 1] * b[4 + c] + a[r * 4 + 2] * b[8 + c] + a[r * 4 + 3] * b[12 + c]; }
static void prim_consts(pk_t *k){
    float w4[16], v4[16], wv[16]; to44(M_world, w4); to44(M_view, v4); mul44(w4, v4, wv); mul44(wv, M_proj, k->mvp); memcpy(k->wv, wv, sizeof wv);
    for (int r = 0; r < 4; r++) k->wvz[r] = wv[r * 4 + 2];
    k->xs = f24(R[0x42]); k->ys = f24(R[0x43]); k->zs = f24(R[0x44]); k->xc = f24(R[0x45]); k->yc = f24(R[0x46]); k->zc = f24(R[0x47]);
    k->ox = (R[0x4C] & 0xFFFF) / 16.0f; k->oy = (R[0x4D] & 0xFFFF) / 16.0f;
    k->su = f24(R[0x48]); k->sv = f24(R[0x49]); k->ou = f24(R[0x4A]); k->ov = f24(R[0x4B]);
    k->fog = R[0x1F] & 1; k->fe = f24(R[0xCD]); k->fsl = f24(R[0xCE]); k->clamp = R[0x1C] & 1; }
static const pk_t *pk;
static void project(const rawv_t *r, int through, int skin, int nw, int lit, gv_t *o){
    o->u = r->u; o->v = r->v; for (int k = 0; k < 4; k++) o->c[k] = r->col[k]; o->fog = 1.0f; o->cull = 0;
    if (through) { o->sx = r->px; o->sy = r->py; o->sz = r->pz < 0 ? 0 : (r->pz > 65535 ? 65535 : r->pz);
        o->p[0] = o->sx * (2.0f / 512) - 1; o->p[1] = o->sy * (2.0f / 512) - 1; o->p[2] = o->sz * (2.0f / 65535) - 1; o->p[3] = 1; return; }
    float px = r->px, py = r->py, pz = r->pz, nx = r->nx, ny = r->ny, nz = r->nz;
    if (skin) { float ax = 0, ay = 0, az = 0, bx = 0, by = 0, bz = 0;
        for (int i = 0; i < nw && i < 8; i++) { float t[3], n3[3]; xform(M_bone[i], 4, px, py, pz, 1, t, 3); xform(M_bone[i], 3, nx, ny, nz, 0, n3, 3);
            ax += t[0] * r->wgt[i]; ay += t[1] * r->wgt[i]; az += t[2] * r->wgt[i]; bx += n3[0] * r->wgt[i]; by += n3[1] * r->wgt[i]; bz += n3[2] * r->wgt[i]; }
        px = ax; py = ay; pz = az; nx = bx; ny = by; nz = bz; }
    const pk_t *k = pk;
    if (lit) { float wv[3], wn[3]; xform(M_world, 4, px, py, pz, 1, wv, 3); xform(M_world, 3, nx, ny, nz, 0, wn, 3); normalize3(wn); light_vertex(r, wv, wn, o->c); }
    if (k->fog) { float vz = px * k->wvz[0] + py * k->wvz[1] + pz * k->wvz[2] + k->wvz[3]; float f = (vz + k->fe) * k->fsl;   /* PSP fog: (viewZ + end) * slope, 1 = clear, 0 = fog colour */
        o->fog = (f != f) ? 1.0f : (f < 0 ? 0 : (f > 1 ? 1 : f)); }
    const float *m = k->mvp; float cl[4];
    cl[0] = px * m[0] + py * m[4] + pz * m[8] + m[12]; cl[1] = px * m[1] + py * m[5] + pz * m[9] + m[13];
    cl[2] = px * m[2] + py * m[6] + pz * m[10] + m[14]; cl[3] = px * m[3] + py * m[7] + pz * m[11] + m[15];
    float xs = k->xs, ys = k->ys, zs = k->zs, xc = k->xc, yc = k->yc, zc = k->zc, ox = k->ox, oy = k->oy, w = cl[3];
    /* GL clip coordinates that reproduce the PSP viewport transform exactly (linear in clip space, so the GPU clips and interpolates correctly) */
    o->p[0] = (cl[0] * xs + (xc - ox) * w) * (2.0f / 512) - w;
    o->p[1] = (cl[1] * ys + (yc - oy) * w) * (2.0f / 512) - w;
    o->p[2] = (cl[2] * zs + zc * w) * (2.0f / 65535) - w;
    o->p[3] = w;
    float iw = fabsf(w) > 1e-6f ? 1.0f / w : 0; o->sx = cl[0] * iw * xs + xc - ox; o->sy = cl[1] * iw * ys + yc - oy; o->sz = cl[2] * iw * zs + zc;
    /* PSP vertex range culling (as PPSSPP): a vertex inside the depth range but outside the 4096x4096 drawing guard band kills its primitive;
     * with CLIPENABLE off (no depth clamp) a vertex outside the depth range kills it too.  With CLIPENABLE on, the near plane is clipped (GL does it). */
    { int clamp = k->clamp; int inz = w > 0 && o->sz >= 0.0f && o->sz <= 65535.0f;
      int xyout = !(o->sx + ox >= 0.0f && o->sx + ox < 4096.0f && o->sy + oy >= 0.0f && o->sy + oy < 4096.0f);
      o->cull = (!clamp && !inz) || ((inz || !clamp) && xyout); }
    o->u = r->u * k->su + k->ou; o->v = r->v * k->sv + k->ov; }

/* ------------------------------------------------------------- draw */
static void build_state(gfx_state_t *s, int through, int clear){
    memset(s, 0, sizeof *s);
    s->fbfmt = R[0xD2] & 3; s->fbstride = R[0x9D] & 0xFFFF; if (!s->fbstride) s->fbstride = 512;
    s->fbaddr = vram_addr((R[0x9C] & 0xFFFFFF) | ((R[0x9D] & 0xFF0000) << 8));
    s->sx1 = R[0xD4] & 0x3FF; s->sy1 = (R[0xD4] >> 10) & 0x3FF; s->sx2 = R[0xD5] & 0x3FF; s->sy2 = (R[0xD5] >> 10) & 0x3FF;
    s->cmr = (R[0xE8] & 0xFF) != 0xFF; s->cmg = ((R[0xE8] >> 8) & 0xFF) != 0xFF; s->cmb = ((R[0xE8] >> 16) & 0xFF) != 0xFF; s->cma = (R[0xE9] & 0xFF) != 0xFF;
    s->cull_en = (R[0x1D] & 1) && !through && !clear; s->cull_mode = R[0x9B] & 1;
    s->ztest = R[0x23] & 1; s->zfunc = R[0xDE] & 7; s->zwrite = !(R[0xE7] & 1);
    s->blend = R[0x21] & 1; s->bsrc = R[0xDF] & 15; s->bdst = (R[0xDF] >> 4) & 15; s->beq = (R[0xDF] >> 8) & 7; s->bfixa = R[0xE0] & 0xFFFFFF; s->bfixb = R[0xE1] & 0xFFFFFF;
    s->atest = R[0x22] & 1; s->afunc = R[0xDB] & 7; s->aref = (R[0xDB] >> 8) & 255;
    s->fog = (R[0x1F] & 1) && !through && !clear; s->fogcol = R[0xCF] & 0xFFFFFF;
    if ((R[0x24] & 1) && !clear) { s->sten = 1; s->sfunc = R[0xDC] & 7; s->sref = (R[0xDC] >> 8) & 255; s->smask = (R[0xDC] >> 16) & 255;
        s->sfail = R[0xDD] & 7; s->szfail = (R[0xDD] >> 8) & 7; s->szpass = (R[0xDD] >> 16) & 7; s->swmask = ~R[0xE9] & 255; }
    s->uvs[0] = s->uvs[1] = 1;
    if ((R[0x1E] & 1) && !clear) {
        static gtex_key_t key; memset(&key, 0, sizeof key);
        key.fmt = R[0xC3] & 15; key.w = 1 << (R[0xB8] & 15); key.h = 1 << ((R[0xB8] >> 8) & 15); key.swz = R[0xC2] & 1;
        key.addr = vram_addr((R[0xA0] & 0xFFFFFF) | ((R[0xA8] & 0xFF0000) << 8)); key.bufw = R[0xA8] & 0xFFFF; if (!key.bufw) key.bufw = key.w;
        key.clut = (key.fmt >= 4 && key.fmt <= 7) ? (clut_hash ^ (R[0xC5] * 2654435761u)) : 0;
        gtex_src_t src = {tex_hash_cb, tex_decode_cb, &key};
        s->texid = gfx_tex_acquire(&key, &src, s->uvs);
        s->tex = s->texid != 0;
        if (s->tex) gfx_tex_maps(&s->texmr, &s->texn, &s->texhd);
        s->tfunc = R[0xC9] & 7; s->trgba = (R[0xC9] >> 8) & 1; s->tdbl = (R[0xC9] >> 16) & 1; s->tclampu = R[0xC7] & 1; s->tclampv = (R[0xC7] >> 8) & 1;
        s->tfilter = (R[0xC6] & 1) || ((R[0xC6] >> 8) & 1); s->tenv = R[0xCA] & 0xFFFFFF; }
}

static void emit(gfx_vtx_t *o, const gv_t *v){ o->x = v->p[0]; o->y = v->p[1]; o->z = v->p[2]; o->w = v->p[3]; o->u = v->u; o->v = v->v; o->r = v->c[0] / 255.0f; o->g = v->c[1] / 255.0f; o->b = v->c[2] / 255.0f; o->a = v->c[3] / 255.0f; o->f = v->fog; }
static void emit_scr(gfx_vtx_t *o, const gv_t *proto, float sx, float sy, float sz, float u, float v){            /* sprite corner from screen coords */
    o->x = sx * (2.0f / 512) - 1; o->y = sy * (2.0f / 512) - 1; o->z = sz * (2.0f / 65535) - 1; o->w = 1; o->u = u; o->v = v;
    o->r = proto->c[0] / 255.0f; o->g = proto->c[1] / 255.0f; o->b = proto->c[2] / 255.0f; o->a = proto->c[3] / 255.0f; o->f = proto->fog; }

int rs_ge_dump_cur;
/* PSP GE: a primitive with any range-culled vertex (see project()) is discarded whole. */
static int zbad(const gv_t *v){ return v->cull; }
static int zcull;                       /* set per prim: apply the rule (non-through draws with CLIPENABLE) */
#define TRI_OK(a, b, c) (!zcull || !(zbad(a) || zbad(b) || zbad(c)))
/* Vertex/index addresses are resolved when VADDR/IADDR execute: ((BASE<<8)&0x0F000000 | data) + OFFSET, exactly like JUMP/CALL targets.
 * OFFSET comes from OFFSETADDR (0x13: data<<8) or ORIGIN (0x14: address of the ORIGIN command itself). */
static u32 g_vaddr, g_iaddr, g_offset;
static u32 rel_addr(u32 data){ return ((((R[0x10] << 8) & 0x0F000000u) | (data & 0xFFFFFF)) + g_offset) & 0x0FFFFFFF; }
static void do_prim(u32 data){
    int ptype = (data >> 16) & 7, count = data & 0xFFFF; if (!count) return;
    u32 vt = R[0x12]; int through = (vt >> 23) & 1; int off[5]; int vsz = vt_size(vt, off); int idxf = (vt >> 11) & 3;
    u32 vb = g_vaddr, ib = g_iaddr;
    { static int al = -1; if (al < 0) al = getenv("RS_GE_ADDRLOG") != 0; if (al) fprintf(stderr, "[ADDR] t=%d n=%d vt=%06x vb=%08x ib=%08x uvs=%g,%g,%g,%g tex=%08x w=%d h=%d fmt=%d\n", (data >> 16) & 7, data & 0xFFFF, R[0x12], vb, ib, f24(R[0x48]), f24(R[0x49]), f24(R[0x4A]), f24(R[0x4B]),
        (R[0xA0] & 0xFFFFFF) | ((R[0xA8] & 0xFF0000) << 8), 1 << (R[0xB8] & 15), 1 << ((R[0xB8] >> 8) & 15), R[0xC3] & 15); }
    { static int seen[4], tml = -1; if (tml < 0) tml = getenv("RS_GE_TMLOG") != 0; int tm = R[0xC0] & 3; if (tml && seen[tm]++ < 3) fprintf(stderr, "[TM] prim %d texmap mode %d src %d C1=%06x vt=%06x\n", rs_ge_dump_cur, tm, (R[0xC0] >> 8) & 3, R[0xC1], R[0x12]); }
    if (!vb || vsz <= 0 || ptype < 3) return;                 /* count <= 65535 (16 bits): modded models may use long strips */
    { static int pn, lo = -2, hi; if (lo == -2) { const char *a = getenv("RS_GE_PRIMS"); lo = -1; hi = 1 << 30; if (a) sscanf(a, "%d-%d", &lo, &hi); } int me = pn++; rs_ge_dump_cur = me; static int pl = -1; if (pl < 0) pl = getenv("RS_GE_PRIMLOG") != 0; if (pl) fprintf(stderr, "[P] %d t=%d n=%d vt=%06x thr=%d light=%d tex=%d blend=%d\n", me, ptype, count, vt, through, R[0x17] & 1, R[0x1E] & 1, R[0x21] & 1); if (lo >= 0 && (me < lo || me > hi)) { if (!(R[0xD3] & 1)) { if (!idxf) g_vaddr += (u32)(count * vsz); else g_iaddr += (u32)(count * (idxf == 1 ? 1 : (idxf == 2 ? 2 : 4))); return; } } }
    int clear = R[0xD3] & 1;
    /* the GE advances its vertex / index pointers after every PRIM; games chain several PRIMs over one buffer without reloading them */
    if (!idxf) g_vaddr += (u32)(count * vsz);
    else g_iaddr += (u32)(count * (idxf == 1 ? 1 : (idxf == 2 ? 2 : 4)));
    int nw = ((vt >> 14) & 7) + 1, skin = ((vt >> 9) & 3) != 0, lit = (R[0x17] & 1) && !through && off[3] >= 0;
    static gv_t *vtx; static int cap; static gfx_vtx_t *out; static int ocap;
    if (cap < count) { cap = count + 64; vtx = realloc(vtx, cap * sizeof(gv_t)); }
    if (ocap < count * 3 + 6) { ocap = count * 3 + 64; out = realloc(out, ocap * sizeof(gfx_vtx_t)); }
    float defc[4] = {(R[0x55] & 255), ((R[0x55] >> 8) & 255), ((R[0x55] >> 16) & 255), (R[0x58] & 255)};
    u64 t_v = rs_perf_us(); rs_perf.prims++; rs_perf.verts += (u64)count;
    if (!through && !(R[0xD3] & 1) && ptype >= 3 && ptype <= 5 && gfx_hw_ok()) {       /* GPU transform & lighting */
        pk_t k; prim_consts(&k); static gfx_hw_t h; memset(&h, 0, sizeof h); h.skin = skin; h.lit = lit;
        for (int r = 0; r < 4; r++) for (int c = 0; c < 4; c++) h.mvp[c * 4 + r] = k.mvp[r * 4 + c];
        memcpy(h.wvz, k.wvz, sizeof h.wvz);
        for (int r = 0; r < 4; r++) for (int c = 0; c < 3; c++) h.wld[c * 4 + r] = M_world[r * 3 + c];
        h.vp0[0] = k.xs; h.vp0[1] = k.ys; h.vp0[2] = k.zs; h.vp1[0] = k.xc - k.ox; h.vp1[1] = k.yc - k.oy; h.vp1[2] = k.zc; h.vp2[0] = k.ox; h.vp2[1] = k.oy; h.vp2[2] = (float)k.clamp;
        for (int r = 0; r < 4; r++) for (int c = 0; c < 3; c++) h.wv[c * 4 + r] = k.wv[r * 4 + c];
        memcpy(h.view, M_view, sizeof h.view);
        h.lfl[3] = off[3] >= 0 ? 1.0f : 0.0f;
        h.uvt[0] = k.su; h.uvt[1] = k.sv; h.uvt[2] = k.ou; h.uvt[3] = k.ov; h.fogp[0] = k.fe; h.fogp[1] = k.fsl; h.fogp[2] = (float)k.fog;
        if (skin) for (int b = 0; b < nw && b < 8; b++) for (int r = 0; r < 4; r++) for (int c = 0; c < 3; c++) h.bone[(b * 3 + c) * 4 + r] = M_bone[b][r * 3 + c];
        if (lit) { light_consts(); int hc = off[2] >= 0;
            { static int ll = -1, nl; if (ll < 0) ll = getenv("RS_LIGHT_LOG") != 0; if (ll && nl++ < 12) { fprintf(stderr, "[LIGHT] prim vt=%06x n=%d upd=%d amb=(%.2f %.2f %.2f) sca=(%.2f %.2f %.2f)", vt, lk.n, lk.upd, lk.amb0[0], lk.amb0[1], lk.amb0[2], lk.sca[0], lk.sca[1], lk.sca[2]);
                for (int j = 0; j < lk.n; j++) fprintf(stderr, " | L%d type %d p=(%.2f %.2f %.2f) dif=(%.2f %.2f %.2f) amb=(%.2f %.2f %.2f)", j, lk.L[j].type, lk.L[j].lp[0], lk.L[j].lp[1], lk.L[j].lp[2], lk.L[j].ld[0], lk.L[j].ld[1], lk.L[j].ld[2], lk.L[j].la[0], lk.L[j].la[1], lk.L[j].la[2]);
                fprintf(stderr, "\n"); } }
            memcpy(h.mamb, lk.amb0, 12); h.mamb[3] = lk.aa0; memcpy(h.mdif, lk.dif0, 12); memcpy(h.memi, lk.emi, 12); memcpy(h.msca, lk.sca, 12);
            h.lfl[0] = (hc && (lk.upd & 1)) ? 1.0f : 0.0f; h.lfl[1] = (hc && (lk.upd & 2)) ? 1.0f : 0.0f; h.lfl[2] = (float)lk.n;
            for (int j = 0; j < lk.n; j++) { const typeof(lk.L[0]) *l = &lk.L[j];
                memcpy(&h.lpos[j * 4], l->lp, 12); h.lpos[j * 4 + 3] = (float)l->type; h.latt[j * 4] = l->k0; h.latt[j * 4 + 1] = l->k1; h.latt[j * 4 + 2] = l->k2; h.latt[j * 4 + 3] = l->ex;
                memcpy(&h.lspot[j * 4], l->sd, 12); h.lspot[j * 4 + 3] = l->cut; memcpy(&h.la[j * 4], l->la, 12); memcpy(&h.ld[j * 4], l->ld, 12); } }
        gfx_state_t hst; build_state(&hst, 0, 0);
        {   /* native: the raw PSP vertices go to the GPU, which reads the PSP vertex formats itself (Vita GXM back end) */
            gfx_native_t nv = {vt, vsz, count, ptype, idxf, g_mem + GADDR(vb), idxf ? g_mem + GADDR(ib) : 0, {defc[0] / 255.0f, defc[1] / 255.0f, defc[2] / 255.0f, defc[3] / 255.0f}, {off[0], off[1], off[2], off[3], off[4]}};
            if (gfx_draw_native(&hst, &h, &nv)) { rs_perf.vtx_us += rs_perf_us() - t_v; ge_stats_prims++; ge_stats_tris += (u32)(ptype == 3 ? count / 3 : (count > 2 ? count - 2 : 0)); return; } }
        static gfx_hvtx_t *hv, *ho; static int hcap, hocap;
        if (hcap < count) { hcap = count + 64; hv = realloc(hv, (size_t)hcap * sizeof *hv); }
        if (hocap < count * 3 + 6) { hocap = count * 3 + 64; ho = realloc(ho, (size_t)hocap * sizeof *ho); }
        for (int i = 0; i < count; i++) {
            u32 idx = i; if (idxf) { u8 *ip = g_mem + GADDR(ib) + (idxf == 1 ? i : (idxf == 2 ? i * 2 : i * 4)); idx = idxf == 1 ? *ip : (idxf == 2 ? (u32)(ip[0] | ip[1] << 8) : (u32)(ip[0] | ip[1] << 8 | ip[2] << 16 | (u32)ip[3] << 24)); }
            rawv_t rv; decode_vertex(vt, g_mem + GADDR(vb) + (size_t)idx * vsz, off, &rv);
            if (!rv.hascol) { for (int k = 0; k < 4; k++) rv.col[k] = defc[k]; }
            gfx_hvtx_t *o = &hv[i]; o->x = rv.px; o->y = rv.py; o->z = rv.pz; o->nx = rv.nx; o->ny = rv.ny; o->nz = rv.nz; o->u = rv.u; o->v = rv.v;
            o->r = rv.col[0] / 255.0f; o->g = rv.col[1] / 255.0f; o->b = rv.col[2] / 255.0f; o->a = rv.col[3] / 255.0f; memcpy(o->w, rv.wgt, sizeof o->w); }
        rs_perf.vtx_us += rs_perf_us() - t_v; ge_stats_prims++;
        int n = 0;
        switch (ptype) {
        case 3: for (int i = 0; i + 2 < count; i += 3) { ho[n++] = hv[i]; ho[n++] = hv[i + 1]; ho[n++] = hv[i + 2]; } break;
        case 4: for (int i = 0; i + 2 < count; i++) { if (i & 1) { ho[n++] = hv[i + 1]; ho[n++] = hv[i]; } else { ho[n++] = hv[i]; ho[n++] = hv[i + 1]; } ho[n++] = hv[i + 2]; } break;
        default: for (int i = 1; i + 1 < count; i++) { ho[n++] = hv[0]; ho[n++] = hv[i]; ho[n++] = hv[i + 1]; } break; }
        ge_stats_tris += n / 3;
        if (hst.texn) for (int i = 0; i + 2 < n; i += 3) {          /* mod normal map: per-triangle tangent (object space, follows skinning in the shader) */
            gfx_hvtx_t *a = &ho[i], *b2 = &ho[i + 1], *c = &ho[i + 2];
            float e1[3] = {b2->x - a->x, b2->y - a->y, b2->z - a->z}, e2[3] = {c->x - a->x, c->y - a->y, c->z - a->z};
            float du1 = b2->u - a->u, dv1 = b2->v - a->v, du2 = c->u - a->u, dv2 = c->v - a->v, det = du1 * dv2 - du2 * dv1;
            float t[3] = {1, 0, 0};
            if (fabsf(det) > 1e-12f) { float r = 1.0f / det; for (int j = 0; j < 3; j++) t[j] = (e1[j] * dv2 - e2[j] * dv1) * r; }
            for (int j = 0; j < 3; j++) { gfx_hvtx_t *o = &ho[i + j]; o->tx = t[0]; o->ty = t[1]; o->tz = t[2]; } }
        gfx_draw_hw(&hst, &h, ho, n); return; }
    pk_t pkc; if (!through) { prim_consts(&pkc); pk = &pkc; if (lit) light_consts(); }
    for (int i = 0; i < count; i++) {
        u32 idx = i; if (idxf) { u8 *ip = g_mem + GADDR(ib) + (idxf == 1 ? i : (idxf == 2 ? i * 2 : i * 4)); idx = idxf == 1 ? *ip : (idxf == 2 ? (u32)(ip[0] | ip[1] << 8) : (u32)(ip[0] | ip[1] << 8 | ip[2] << 16 | (u32)ip[3] << 24)); }
        rawv_t rv; decode_vertex(vt, g_mem + GADDR(vb) + (size_t)idx * vsz, off, &rv);
        { static int dp2 = -2; if (dp2 == -2) dp2 = getenv("RS_GE_DUMPRAW") ? atoi(getenv("RS_GE_DUMPRAW")) : -1; extern int rs_ge_dump_cur; if (dp2 >= 0 && dp2 == rs_ge_dump_cur && i < 16) fprintf(stderr, "[RAW] i=%d idx=%u pos=(%.4f,%.4f,%.4f) n=(%.3f,%.3f,%.3f) uv=(%.3f,%.3f) hascol=%d\n", i, idx, rv.px, rv.py, rv.pz, rv.nx, rv.ny, rv.nz, rv.u, rv.v, rv.hascol); }
        if (!rv.hascol) { for (int k = 0; k < 4; k++) rv.col[k] = defc[k]; }
        project(&rv, through, skin, nw, lit, &vtx[i]); }
    rs_perf.vtx_us += rs_perf_us() - t_v;
    ge_stats_prims++;
    { static int dp = -2; if (dp == -2) dp = getenv("RS_GE_DUMPPRIM") ? atoi(getenv("RS_GE_DUMPPRIM")) : -1; static int cnt; if (dp >= 0 && cnt++ == dp) { fprintf(stderr, "[DUMP] prim %d count=%d vt=%06x\nworld:", dp, count, vt); for (int i = 0; i < 12; i++) fprintf(stderr, " %.3f", M_world[i]); fprintf(stderr, "\nview:"); for (int i = 0; i < 12; i++) fprintf(stderr, " %.3f", M_view[i]); fprintf(stderr, "\nproj:"); for (int i = 0; i < 16; i++) fprintf(stderr, " %.3f", M_proj[i]); fprintf(stderr, "\nstate: cmask=%06x amask=%02x zmask=%x ztest=%x zfunc=%x blend=%x bfunc=%06x atest=%x stencil_en=%x stest=%06x sop=%06x cull=%x/%x clipen=%x fog=%x lighting=%x lights=%x%x%x%x tex=%x tfunc=%06x fbmask..\n", R[0xE8], R[0xE9] & 255, R[0xE7], R[0x23], R[0xDE], R[0x21], R[0xDF], R[0x22], R[0x24], R[0xDC], R[0xDD], R[0x1D], R[0x9B], R[0x1C], R[0x1F], R[0x17], R[0x18], R[0x19], R[0x1A], R[0x1B], R[0x1E], R[0xC9]); fprintf(stderr, "tex addr=%08x fmt=%d %dx%d bufw=%d clutfmt=%06x\n", (R[0xA0] & 0xFFFFFF) | ((R[0xA8] & 0xFF0000) << 8), R[0xC3] & 15, 1 << (R[0xB8] & 15), 1 << ((R[0xB8] >> 8) & 15), R[0xA8] & 0xFFFF, R[0xC5]); fprintf(stderr, "viewport %.1f %.1f %.1f %.1f %.1f %.1f\n", f24(R[0x42]), f24(R[0x43]), f24(R[0x44]), f24(R[0x45]), f24(R[0x46]), f24(R[0x47]));
        for (int i = 0; i < count && i < 24; i++) fprintf(stderr, "  v%d scr=(%.1f,%.1f,%.1f) clip=(%.2f,%.2f,%.2f,%.2f) uv=(%.2f,%.2f) col=%.0f,%.0f,%.0f\n", i, vtx[i].sx, vtx[i].sy, vtx[i].sz, vtx[i].p[0], vtx[i].p[1], vtx[i].p[2], vtx[i].p[3], vtx[i].u, vtx[i].v, vtx[i].c[0], vtx[i].c[1], vtx[i].c[2]); } }
    { static int lg = -1, nlog; static u32 seen[256]; if (lg < 0) lg = getenv("RS_GE_LOG") != 0;
      if (lg && !through && nlog < 120) { u32 key = (vt * 2654435761u) ^ (ptype * 97u) ^ ((R[0x17] & 1) << 3) ^ ((R[0x1E] & 1) << 4) ^ ((R[0x21] & 1) << 5) ^ (R[0xC3] << 8) ^ (R[0xA0] * 31u); int dup = 0; for (int i = 0; i < nlog; i++) if (seen[i] == key) dup = 1;
        static int ltl; if (!dup && vt == 0x1d2 && ltl++ < 2) { fprintf(stderr, "[GE] LIGHTS scene-amb(5C)=%06x en=%d%d%d%d type=%03x %03x %03x %03x lmode=%x  L0 pos=(%.2f,%.2f,%.2f) dir=(%.2f,%.2f,%.2f) amb=%06x dif=%06x  L1 pos=(%.2f,%.2f,%.2f) amb=%06x dif=%06x emissive=%06x\n", R[0x5C], R[0x18] & 1, R[0x19] & 1, R[0x1A] & 1, R[0x1B] & 1, R[0x5F], R[0x60], R[0x61], R[0x62], R[0x5E], f24(R[0x63]), f24(R[0x64]), f24(R[0x65]), f24(R[0x6F]), f24(R[0x70]), f24(R[0x71]), R[0x8F], R[0x90], f24(R[0x66]), f24(R[0x67]), f24(R[0x68]), R[0x92], R[0x93], R[0x54]); }
        if (!dup) { seen[nlog++] = key; fprintf(stderr, "[GE] prim t=%d n=%d vt=%06x light=%d tex=%d(%08x f%d %dx%d) blend=%d z=%d/%d cull=%d atest=%d amb=%06x mat=%x/%x/%x pos0=(%.2f,%.2f,%.2f)->clip(%.1f,%.1f,%.1f,%.1f)\n", ptype, count, vt, R[0x17] & 1, R[0x1E] & 1, R[0xA0], R[0xC3] & 15, 1 << (R[0xB8] & 15), 1 << ((R[0xB8] >> 8) & 15), R[0x21] & 1, R[0x23] & 1, R[0xDE] & 7, R[0x1D] & 1, R[0x22] & 1, R[0x55], R[0x53], R[0x56], R[0x54], 0.f, 0.f, 0.f, vtx[0].p[0], vtx[0].p[1], vtx[0].p[2], vtx[0].p[3]); } } }
    gfx_state_t st; int ntex = 0;
    if (clear) {
        if (count < 2) return;
        build_state(&st, through, 1);
        /* sceGuClear(GU_FAST_CLEAR_BIT) sends the screen as a row of narrow sprites: clear EVERY pair (other primitive types: their bounding box) */
        int step = ptype == 6 ? 2 : count, last = ptype == 6 ? count - 1 : count - 1;
        for (int i = 0; i + 1 <= last; i += step) {
            int a = i, b = ptype == 6 ? i + 1 : last;
            float x0 = vtx[a].sx, x1 = vtx[a].sx, y0 = vtx[a].sy, y1 = vtx[a].sy;
            for (int k = a; k <= b; k++) { x0 = fminf(x0, vtx[k].sx); x1 = fmaxf(x1, vtx[k].sx); y0 = fminf(y0, vtx[k].sy); y1 = fmaxf(y1, vtx[k].sy); }
            float col[4] = {vtx[b].c[0] / 255, vtx[b].c[1] / 255, vtx[b].c[2] / 255, vtx[b].c[3] / 255};
            gfx_clear(&st, (int)floorf(x0 + 0.5f), (int)floorf(y0 + 0.5f), (int)floorf(x1 + 0.5f) - 1, (int)floorf(y1 + 0.5f) - 1, col, vtx[b].sz / 65535.0f, (R[0xD3] >> 8) & 1, (R[0xD3] >> 9) & 1, (R[0xD3] >> 10) & 1); }
        return; }
    build_state(&st, through, 0); (void)ntex;
    if (through && st.tex) { float iw = 1.0f / (1 << (R[0xB8] & 15)), ih = 1.0f / (1 << ((R[0xB8] >> 8) & 15)); for (int i = 0; i < count; i++) { vtx[i].u *= iw; vtx[i].v *= ih; } }
    int n = 0; zcull = !through;
    switch (ptype) {
    case 3: for (int i = 0; i + 2 < count; i += 3) { if (!TRI_OK(&vtx[i], &vtx[i + 1], &vtx[i + 2])) continue; emit(&out[n++], &vtx[i]); emit(&out[n++], &vtx[i + 1]); emit(&out[n++], &vtx[i + 2]); } break;
    case 4: for (int i = 0; i + 2 < count; i++) { if (!TRI_OK(&vtx[i], &vtx[i + 1], &vtx[i + 2])) continue; { extern int rs_ge_dump_cur; static int dtp = -2; if (dtp == -2) dtp = getenv("RS_GE_DUMPTRI") ? atoi(getenv("RS_GE_DUMPTRI")) : -1; if (dtp == rs_ge_dump_cur) fprintf(stderr, "[TRI] i=%d s0=(%.0f,%.0f,%.0f w=%.3f) s1=(%.0f,%.0f,%.0f w=%.3f) s2=(%.0f,%.0f,%.0f w=%.3f)\n", i, vtx[i].sx, vtx[i].sy, vtx[i].sz, vtx[i].p[3], vtx[i+1].sx, vtx[i+1].sy, vtx[i+1].sz, vtx[i+1].p[3], vtx[i+2].sx, vtx[i+2].sy, vtx[i+2].sz, vtx[i+2].p[3]); } if (i & 1) { emit(&out[n++], &vtx[i + 1]); emit(&out[n++], &vtx[i]); } else { emit(&out[n++], &vtx[i]); emit(&out[n++], &vtx[i + 1]); } emit(&out[n++], &vtx[i + 2]); } break;
    case 5: for (int i = 1; i + 1 < count; i++) { if (!TRI_OK(&vtx[0], &vtx[i], &vtx[i + 1])) continue; emit(&out[n++], &vtx[0]); emit(&out[n++], &vtx[i]); emit(&out[n++], &vtx[i + 1]); } break;
    case 6: for (int i = 0; i + 1 < count; i += 2) { const gv_t *a = &vtx[i], *b = &vtx[i + 1]; gfx_vtx_t A, B, C, D;
            emit_scr(&A, b, a->sx, a->sy, b->sz, a->u, a->v); emit_scr(&B, b, b->sx, a->sy, b->sz, b->u, a->v); emit_scr(&C, b, a->sx, b->sy, b->sz, a->u, b->v); emit_scr(&D, b, b->sx, b->sy, b->sz, b->u, b->v);
            out[n++] = A; out[n++] = B; out[n++] = C; out[n++] = B; out[n++] = D; out[n++] = C; } break;
    default: break; }
    ge_stats_tris += n / 3;
    gfx_draw(&st, out, n); }

static void do_transfer(void){
    u32 src = vram_addr((R[0xB2] & 0xFFFFFF) | ((R[0xB3] & 0xFF0000) << 8)), dst = vram_addr((R[0xB4] & 0xFFFFFF) | ((R[0xB5] & 0xFF0000) << 8));
    int sw = R[0xB3] & 0x7FF, dw = R[0xB5] & 0x7FF, sx = R[0xEB] & 0x3FF, sy = (R[0xEB] >> 10) & 0x3FF, dx = R[0xEC] & 0x3FF, dy = (R[0xEC] >> 10) & 0x3FF;
    int w = (R[0xEE] & 0x3FF) + 1, h = ((R[0xEE] >> 10) & 0x3FF) + 1, bpp = (R[0xEA] & 1) ? 4 : 2;
    gfx_flush();
    gfx_transfer(src, sw, sx, sy, dst, dw, dx, dy, w, h, bpp);                      /* GPU surfaces */
    for (int y = 0; y < h; y++) memmove(gp(dst + (u32)(((dy + y) * dw + dx) * bpp)), gp(src + (u32)(((sy + y) * sw + sx) * bpp)), (size_t)w * bpp);   /* guest memory copy */
    rs_gfx_epoch++; }

/* ------------------------------------------------------------- command interpreter */
typedef struct { int used; u32 pc, stall; int done; u32 stack[64]; int sp; u32 origin; } ge_list_t;
static ge_list_t lists[64];
u32 rs_ge_cb_finish_func, rs_ge_cb_finish_arg;
void rs_ge_finish_hook(int id);       /* implemented in hle.c: runs the guest finish callback (on the calling guest thread) */

static void ge_run(int id){
    ge_list_t *L = &lists[id]; int guard = 0;
    while (!L->done) {
        if (L->stall && (L->pc & 0x0FFFFFFF) == (L->stall & 0x0FFFFFFF)) return;
        u32 w = LW(L->pc); u32 cmd = w >> 24, data = w & 0xFFFFFF; L->pc += 4; ge_stats_cmds++;
        if (++guard > 20000000) { L->done = 1; return; }
        { static int cl = -1, clo, chi; if (cl < 0) { const char *e = getenv("RS_GE_CMDLOG"); cl = e != 0; if (e && sscanf(e, "%d-%d", &clo, &chi) != 2) { clo = 0; chi = 1 << 30; } } extern int rs_ge_dump_cur; if (cl && rs_ge_dump_cur >= clo && rs_ge_dump_cur <= chi) fprintf(stderr, "[C] p%d %02x %06x\n", rs_ge_dump_cur, cmd, data); }
        switch (cmd) {
        case 0x0C: L->done = 1; return;
        case 0x0F: R[cmd] = data; break;
        case 0x01: R[cmd] = data; g_vaddr = rel_addr(data); break;
        case 0x02: R[cmd] = data; g_iaddr = rel_addr(data); break;
        case 0x13: R[cmd] = data; g_offset = data << 8; break;
        case 0x14: R[cmd] = data; g_offset = L->pc - 4; break;
        case 0x08: L->pc = rel_addr(data & 0xFFFFFC); break;
        case 0x0A: if (L->sp < 63) { L->stack[L->sp++] = L->pc; L->stack[L->sp++] = g_offset; } L->pc = rel_addr(data & 0xFFFFFC); break;
        case 0x0B: if (L->sp >= 2) { g_offset = L->stack[--L->sp]; L->pc = L->stack[--L->sp]; } break;
        case 0x04: R[cmd] = data; do_prim(data); break;
        case 0x2A: n_bone = data & 0x7F; break;
        case 0x2B: { int i = n_bone++; if (i < 96) M_bone[i / 12][i % 12] = f24(data); } break;
        case 0x3A: n_world = data & 0xF; break;
        case 0x3B: if (n_world < 12) M_world[n_world++] = f24(data); break;
        case 0x3C: n_view = data & 0xF; break;
        case 0x3D: if (n_view < 12) M_view[n_view++] = f24(data); break;
        case 0x3E: n_proj = data & 0xF; break;
        case 0x3F: if (n_proj < 16) M_proj[n_proj++] = f24(data); break;
        case 0xC4: { u32 ca = vram_addr((R[0xB0] & 0xFFFFFF) | ((R[0xB1] & 0xFF0000) << 8)); int n = (data & 0x3F) * 32; if (n > 4096) n = 4096; memcpy(clut_buf, gp(ca), n); clut_hash = fnv_words((const u32 *)clut_buf, n / 4, 1); } break;
        case 0xEA: R[cmd] = data; do_transfer(); break;
        default: R[cmd & 255] = data; }
    } }

/* ---- one-frame capture / offline replay (debug): RS_GE_CAPTURE=<frame> RS_CAPTURE_DIR=<dir>  then  rsvita_host --replay <dir> ---- */
typedef struct { u32 R[256]; float Mw[12], Mv[12], Mp[16], Mb[8][12]; int nw, nv, np, nb; u8 clut[4096 + 64]; u32 chash; u32 disp[3]; } ge_state_t;
typedef struct { int op, rid; u32 list, stall; } cap_ev_t;
extern volatile int g_frames;
static int cap_frame = -2, cap_state; static cap_ev_t cap_ev[8192]; static int cap_n; static char cap_dir[512];
static void cap_save_state(const char *path){ ge_state_t *st = calloc(1, sizeof *st); memcpy(st->R, R, sizeof R); memcpy(st->Mw, M_world, sizeof M_world); memcpy(st->Mv, M_view, sizeof M_view); memcpy(st->Mp, M_proj, sizeof M_proj); memcpy(st->Mb, M_bone, sizeof M_bone);
    st->nw = n_world; st->nv = n_view; st->np = n_proj; st->nb = n_bone; memcpy(st->clut, clut_buf, sizeof clut_buf); st->chash = clut_hash; gfx_get_display(&st->disp[0], &st->disp[1], &st->disp[2]);
    FILE *f = fopen(path, "wb"); if (f) { fwrite(st, sizeof *st, 1, f); fclose(f); } free(st); }
static void cap_live(void *unused){ (void)unused; char p[700]; FILE *f;
        { u32 da, ds, df; gfx_get_display(&da, &ds, &df); gfx_set_display(vram_addr((R[0x9C] & 0xFFFFFF) | ((R[0x9D] & 0xFF0000) << 8)), R[0x9D] & 0xFFFF, R[0xD2] & 3);
          static u32 pix[480 * 272]; if (gfx_read_display(pix)) { snprintf(p, sizeof p, "%s/live.ppm", cap_dir); f = fopen(p, "wb");
            if (f) { fprintf(f, "P6\n480 272\n255\n"); for (int i = 0; i < 480 * 272; i++) { u8 rgb[3] = {pix[i] & 255, (pix[i] >> 8) & 255, (pix[i] >> 16) & 255}; fwrite(rgb, 1, 3, f); } fclose(f); } }
          gfx_set_display(da, ds, df); }
}
/* on-device capture (Vita: hold L + R + SELECT): records the next frame into <base>/capN for offline replay on PC */
static volatile int cap_req;
void rs_capture_request(void){ if (cap_state != 1) cap_req = 1; }
#ifdef __vita__
#include <psp2/io/stat.h>
static const char *CAP_BASE = "ux0:data/RS";
#else
static const char *CAP_BASE = ".";
#endif
static void cap_hook(int op, int rid, u32 list, u32 stall){
    if (cap_req) { static int ncap; cap_req = 0; snprintf(cap_dir, sizeof cap_dir, "%s/cap%d", CAP_BASE, ncap++);
#ifdef __vita__
        sceIoMkdir(cap_dir, 0777);
#else
        { char cmd[600]; snprintf(cmd, sizeof cmd, "mkdir -p '%s'", cap_dir); if (system(cmd)) {} }
#endif
        cap_frame = g_frames + 1; cap_state = 0; fprintf(stderr, "[CAP] capture requested -> %s\n", cap_dir); }
    if (cap_frame == -2) { const char *e = getenv("RS_GE_CAPTURE"), *d = getenv("RS_CAPTURE_DIR"); cap_frame = (e && d) ? atoi(e) : -1; if (d) snprintf(cap_dir, sizeof cap_dir, "%s", d); }
    if (cap_frame < 0 || cap_state == 2) return;
    char p[700];
    if (cap_state == 0 && g_frames >= cap_frame) { snprintf(p, sizeof p, "%s/ge_state.bin", cap_dir); cap_save_state(p); cap_state = 1; cap_n = 0; fprintf(stderr, "[CAP] recording GE frame %d\n", g_frames); }
    if (cap_state == 1 && g_frames > cap_frame) {
        snprintf(p, sizeof p, "%s/mem.bin", cap_dir); FILE *f = fopen(p, "wb"); if (f) { fwrite(g_mem, 1, GMEM_SIZE, f); fclose(f); }
        snprintf(p, sizeof p, "%s/events.bin", cap_dir); f = fopen(p, "wb"); if (f) { fwrite(&cap_n, 4, 1, f); fwrite(cap_ev, sizeof(cap_ev_t), cap_n, f); fclose(f); }
        gfx_run(cap_live, 0);
        cap_state = 2; fprintf(stderr, "[CAP] saved %d GE events to %s (+ live.ppm = the live draw buffer)\n", cap_n, cap_dir); return; }
    if (cap_state == 1 && cap_n < 8192) cap_ev[cap_n++] = (cap_ev_t){op, rid, list, stall}; }

/* ---- entry points: called on guest threads, executed on the GL thread ----
 * Asynchronous like the PSP's GPU (RS_GE_ASYNC=1, the default): the game queues a list and goes on; sceGeListSync / sceGeDrawSync
 * wait for the queue, and a list's finish callback runs on hle.c's GE interrupt thread when the list completes.  RS_GE_ASYNC=0: the
 * guest thread waits for every list (the validated behaviour of the first builds). */
typedef struct { int op; int id; u32 list, stall; int fin; u32 *out; int ret; } ge_job_t;
extern int rs_bench_active;
static volatile unsigned ge_posted, ge_done;                    /* asynchronous list jobs queued / executed */
void rs_ge_signal_finish(int id);                               /* hle.c: deliver a finish callback (GE interrupt thread) */
static int ge_async(void){ static int a = -1; if (a < 0) { extern int rs_setting_int(const char *, int); a = rs_setting_int("RS_GE_ASYNC", 1); } return a && !rs_bench_active && cap_state != 1; }
static void ge_job(void *p){
    ge_job_t *j = p;
    switch (j->op) {
    case 0: { int id = j->id;
        if (id < 0) { id = -1; for (int i = 0; i < 64; i++) if (!lists[i].used || lists[i].done) { id = i; break; } if (id < 0) id = 0; }
        lists[id] = (ge_list_t){1, j->list, j->stall, 0, {0}, 0, 0}; g_offset = 0; j->id = id; ge_run(id); j->fin = lists[id].done; } break;
    case 1: { int id = j->id; if (id < 0 || id >= 64 || !lists[id].used) break; int was = lists[id].done; lists[id].stall = j->stall; ge_run(id); j->fin = !was && lists[id].done; } break;
    case 2: j->ret = gfx_read_display(j->out); break;
    case 3: gfx_set_display(j->list, j->stall, (u32)j->ret); rs_gfx_epoch++; gfx_frame_ready(); break; } }
static void ge_job_async(void *p){ ge_job_t *j = p; ge_job(j); if (j->op <= 1 && j->fin) rs_ge_signal_finish(j->id); __sync_synchronize(); ge_done++; }
void rs_big_unlock(void); void rs_big_lock(void);     /* hle.c: other guest threads run while the GL thread processes the list (the real GE is asynchronous too) */
extern int rs_bench_active;
int rs_ge_enqueue(u32 list, u32 stall){ if (rs_bench_active) { static int bid; int id = (bid++) & 63; rs_ge_finish_hook(id); return id; }
    if (ge_async()) { static int next_id; ge_job_t j = {0, next_id, list, stall, 0, 0, 0}; next_id = (next_id + 1) & 63; ge_posted++; gfx_post(ge_job_async, &j, sizeof j); return j.id; }
    ge_job_t j = {0, -1, list, stall, 0, 0, 0}; cap_hook(0, -1, list, stall); rs_big_unlock(); gfx_run(ge_job, &j); rs_big_lock(); if (cap_state == 1 && cap_n > 0 && cap_ev[cap_n - 1].op == 0 && cap_ev[cap_n - 1].list == list) cap_ev[cap_n - 1].rid = j.id; if (j.fin) rs_ge_finish_hook(j.id); return j.id; }
void rs_ge_update_stall(int id, u32 stall){ if (rs_bench_active) return;
    if (ge_async()) { ge_job_t j = {1, id, 0, stall, 0, 0, 0}; ge_posted++; gfx_post(ge_job_async, &j, sizeof j); return; }
    cap_hook(1, id, 0, stall); ge_job_t j = {1, id, 0, stall, 0, 0, 0}; rs_big_unlock(); gfx_run(ge_job, &j); rs_big_lock(); if (j.fin) rs_ge_finish_hook(id); }
/* sceGeListSync / sceGeDrawSync: wait (mode 0) or ask (mode 1) whether the queued lists are done */
static void ge_noop(void *p){ (void)p; }
int rs_ge_busy(void){ return ge_async() && ge_done != ge_posted; }
void rs_ge_wait_idle(void){ if (!ge_async()) return; rs_big_unlock(); gfx_run(ge_noop, 0); rs_big_lock(); }
void rs_ge_reset(void){ memset(R, 0, sizeof R); float I3[12] = {1,0,0,0,1,0,0,0,1,0,0,0}; memcpy(M_world, I3, sizeof I3); memcpy(M_view, I3, sizeof I3); memset(M_proj, 0, sizeof M_proj); }

/* ------------------------------------------------------------- display */
/* the display flip goes through the queue too, so the frame is shown after its lists have been drawn */
void rs_display_set(u32 addr, u32 stride, u32 fmt){
    if (ge_async()) { ge_job_t j = {3, 0, addr, stride, 0, 0, (int)fmt}; gfx_post(ge_job_async, &j, sizeof j); return; }
    gfx_set_display(addr, stride, fmt); rs_gfx_epoch++; gfx_frame_ready(); }
/* current display buffer as 480x272 RGBA8 (bytes R,G,B,A; row 0 = top).  Returns 0 if nothing displayed yet. */
int rs_display_read(u32 *out){ ge_job_t j = {2, 0, 0, 0, 0, out, 0}; gfx_run(ge_job, &j); return j.ret; }

static char full_path[700];
static void shadow_frame_cb(void *u){ (void)u; gfx_shadow_frame(); }
static void write_full(void *unused){ (void)unused; int w, h; u32 *b = gfx_read_display_full(&w, &h); if (!b) return; FILE *f = fopen(full_path, "wb"); if (!f) { free(b); return; }
    fprintf(f, "P6\n%d %d\n255\n", w, h); for (int i = 0; i < w * h; i++) { u8 rgb[3] = {b[i] & 255, (b[i] >> 8) & 255, (b[i] >> 16) & 255}; fwrite(rgb, 1, 3, f); } fclose(f); free(b);
    fprintf(stderr, "[replay] wrote %s (%dx%d internal resolution)\n", full_path, w, h); }
static void write_present(void *unused){ (void)unused; int w = 960, h = 544; u32 *b = gfx_present_image(w, h); if (!b) return; FILE *f = fopen(full_path, "wb"); if (!f) { free(b); return; }
    fprintf(f, "P6\n%d %d\n255\n", w, h); for (int y = h - 1; y >= 0; y--) for (int x = 0; x < w; x++) { u32 c = b[y * w + x]; u8 rgb[3] = {c & 255, (c >> 8) & 255, (c >> 16) & 255}; fwrite(rgb, 1, 3, f); } fclose(f); free(b);
    fprintf(stderr, "[replay] wrote %s (final 960x544 picture as presented)\n", full_path); }
/* offline replay: load a capture directory, run the recorded GE events once, write replay.ppm.  Runs on the guest-side thread. */
int rs_ge_replay(const char *dir){
    char p[700]; snprintf(p, sizeof p, "%s/mem.bin", dir); FILE *f = fopen(p, "rb"); if (!f) { perror(p); return 1; }
    g_mem = calloc(1, GMEM_SIZE + 4096); if (fread(g_mem, 1, GMEM_SIZE, f) != GMEM_SIZE) { fprintf(stderr, "short mem.bin\n"); return 1; } fclose(f);
    snprintf(p, sizeof p, "%s/ge_state.bin", dir); f = fopen(p, "rb"); if (!f) { perror(p); return 1; }
    ge_state_t *st = calloc(1, sizeof *st); if (fread(st, sizeof *st, 1, f) != 1) return 1; fclose(f);
    memcpy(R, st->R, sizeof R); memcpy(M_world, st->Mw, sizeof M_world); memcpy(M_view, st->Mv, sizeof M_view); memcpy(M_proj, st->Mp, sizeof M_proj); memcpy(M_bone, st->Mb, sizeof M_bone);
    g_vaddr = ((R[0x10] << 8) & 0x0F000000u) | (R[0x01] & 0xFFFFFF); g_iaddr = ((R[0x10] << 8) & 0x0F000000u) | (R[0x02] & 0xFFFFFF); n_world = st->nw; n_view = st->nv; n_proj = st->np; n_bone = st->nb; memcpy(clut_buf, st->clut, sizeof clut_buf); clut_hash = st->chash; rs_display_set(st->disp[0], st->disp[1], st->disp[2]);
    snprintf(p, sizeof p, "%s/events.bin", dir); f = fopen(p, "rb"); if (!f) { perror(p); return 1; }
    int n = 0; if (fread(&n, 4, 1, f) != 1) return 1; cap_ev_t *ev = malloc(sizeof(cap_ev_t) * (size_t)(n + 1)); if (fread(ev, sizeof(cap_ev_t), n, f) != (size_t)n) return 1; fclose(f);
    int idmap[64]; for (int i = 0; i < 64; i++) idmap[i] = -1; int frames = getenv("RS_REPLAY_FRAMES") ? atoi(getenv("RS_REPLAY_FRAMES")) : 1;
    for (int fr = 0; fr < frames; fr++) {
        ge_job_t jb;
        for (int i = 0; i < n; i++) { cap_ev_t *e = &ev[i];
            if (e->op == 0) { jb = (ge_job_t){0, -1, e->list, e->stall, 0, 0, 0}; gfx_run(ge_job, &jb); if (e->rid >= 0 && e->rid < 64) idmap[e->rid] = jb.id; }
            else { int id = (e->rid >= 0 && e->rid < 64) ? idmap[e->rid] : -1; if (id < 0) continue; jb = (ge_job_t){1, id, 0, e->stall, 0, 0, 0}; gfx_run(ge_job, &jb); } }
        rs_gfx_epoch++; if (fr + 1 < frames) gfx_run(shadow_frame_cb, 0); }
    rs_display_set(vram_addr((R[0x9C] & 0xFFFFFF) | ((R[0x9D] & 0xFF0000) << 8)), R[0x9D] & 0xFFFF, R[0xD2] & 3);      /* show the buffer the frame was drawn into */
    static u32 buf[480 * 272]; if (!rs_display_read(buf)) { fprintf(stderr, "[replay] nothing displayed\n"); return 1; }
    snprintf(p, sizeof p, "%s/replay.ppm", dir); f = fopen(p, "wb"); fprintf(f, "P6\n480 272\n255\n"); for (int i = 0; i < 480 * 272; i++) { u8 rgb[3] = {buf[i] & 255, (buf[i] >> 8) & 255, (buf[i] >> 16) & 255}; fwrite(rgb, 1, 3, f); } fclose(f);
    rs_ge_summary(); fprintf(stderr, "[replay] wrote %s\n", p);
    snprintf(full_path, sizeof full_path, "%s/replay_full.ppm", dir); gfx_run(write_full, 0);
    snprintf(full_path, sizeof full_path, "%s/replay_present.ppm", dir); gfx_run(write_present, 0); return 0; }
