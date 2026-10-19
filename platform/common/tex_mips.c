/* Mip chains for the renderers' anisotropic filtering (RS_ANISO; see tex_mips.h).
 *
 * The PSP game uploads one level per texture; for filtering at a distance the renderers build the smaller levels themselves from the
 * decoded RGBA8 texels: a 2x2 box filter per level, gamma-naive (as the PSP's own hardware mips would be).  Cut-out textures (alpha
 * tested: foliage, fences, grilles) would thin out and vanish at a distance as the box filter averages their alpha down, so for
 * textures whose alpha is mostly 0 or 255 each level's alpha is rescaled to keep the share of texels at or above one half the same
 * as in the full-size texture (alpha-coverage preservation). */
#include <stdlib.h>
#include <string.h>
#include "tex_mips.h"

int rs_aniso_level(void){
    extern int rs_setting_int(const char *, int);
    static int a = -1;
    if (a < 0) { a = rs_setting_int("RS_ANISO", 4); a = a >= 8 ? 8 : a >= 4 ? 4 : a >= 2 ? 2 : 1; }
    return a; }

int rs_mip_levels(int w, int h){
    if (w < 8 || h < 8 || (w & (w - 1)) || (h & (h - 1))) return 1;      /* power-of-two sizes only (the PSP's own) */
    int n = 1; while (w > 1 && h > 1) { w >>= 1; h >>= 1; n++; }
    return n; }

static size_t row_texels(int w, int align){ return (size_t)((w + align - 1) / align * align); }
size_t rs_mip_bytes(int w, int h, int levels, int align){
    size_t n = 0; for (int i = 0; i < levels; i++) { n += row_texels(w, align) * (size_t)h * 4; w = w > 1 ? w >> 1 : 1; h = h > 1 ? h >> 1 : 1; }
    return n; }

static int coverage(const uint8_t *p, int w, int h, size_t stride, int scale){   /* texels with alpha*scale/256 >= 128 */
    int c = 0;
    for (int y = 0; y < h; y++) { const uint8_t *r = p + (size_t)y * stride * 4 + 3; for (int x = 0; x < w; x++) if (r[x * 4] * scale >= 128 * 256) c++; }
    return c; }

size_t rs_mip_build(const uint32_t *src, int w, int h, int levels, int align, uint8_t *dst){
    /* level 0 */
    size_t s0 = row_texels(w, align);
    for (int y = 0; y < h; y++) memcpy(dst + (size_t)y * s0 * 4, src + (size_t)y * w, (size_t)w * 4);
    /* cut-out texture?  (alpha mostly fully on or fully off, and some of each) */
    int n0 = 0, n255 = 0, total = w * h; const uint8_t *b = (const uint8_t *)src;
    for (int i = 0; i < total; i++) { uint8_t a = b[i * 4 + 3]; if (a == 0) n0++; else if (a == 255) n255++; }
    int cutout = n0 > 0 && n255 > 0 && (n0 + n255) >= total * 9 / 10;
    double cov0 = cutout ? (double)coverage(dst, w, h, s0, 256) / total : 0;
    uint8_t *prev = dst; int pw = w, ph = h; size_t ps = s0, off = s0 * (size_t)h * 4;
    for (int l = 1; l < levels; l++) {
        int cw = pw > 1 ? pw >> 1 : 1, ch = ph > 1 ? ph >> 1 : 1; size_t cs = row_texels(cw, align); uint8_t *cur = dst + off;
        for (int y = 0; y < ch; y++) for (int x = 0; x < cw; x++) {
            const uint8_t *a = prev + ((size_t)(2 * y) * ps + 2 * x) * 4, *c = a + ps * 4; uint8_t *o = cur + ((size_t)y * cs + x) * 4;
            for (int k = 0; k < 4; k++) o[k] = (uint8_t)((a[k] + a[k + 4] + c[k] + c[k + 4] + 2) >> 2); }
        if (cutout) {                                    /* scale this level's alpha (x/256) so its coverage matches level 0 */
            int want = (int)(cov0 * cw * ch + 0.5), lo = 256, hi = 256 * 16;
            if (coverage(cur, cw, ch, cs, 256) < want) {
                while (lo < hi) { int mid = (lo + hi) / 2; if (coverage(cur, cw, ch, cs, mid) >= want) hi = mid; else lo = mid + 1; }
                for (int y = 0; y < ch; y++) { uint8_t *r = cur + (size_t)y * cs * 4 + 3; for (int x = 0; x < cw; x++) { int v = r[x * 4] * lo / 256; r[x * 4] = (uint8_t)(v > 255 ? 255 : v); } } } }
        prev = cur; pw = cw; ph = ch; ps = cs; off += cs * (size_t)ch * 4; }
    return off; }

static uint32_t ck[4096], cv[4096];                  /* colour -> nearest entry, for the palette of the texture being built */
static int nearest(const uint8_t *c, const uint32_t *pal, int npal){
    /* nearest palette entry; alpha weighs double (a wrong cut-out is worse than a slightly wrong colour) */
    uint32_t col = (uint32_t)c[0] | (uint32_t)c[1] << 8 | (uint32_t)c[2] << 16 | (uint32_t)c[3] << 24;
    uint32_t hsh = (col * 2654435761u) >> 20; if ((cv[hsh] & 0x10000u) && ck[hsh] == col) return (int)(cv[hsh] & 0xFFFF);   /* colours repeat: a small cache */
    int best = 0; long bd = 0x7FFFFFFF;
    for (int i = 0; i < npal; i++) { const uint8_t *p = (const uint8_t *)&pal[i];
        long dr = c[0] - p[0], dg = c[1] - p[1], db = c[2] - p[2], da = c[3] - p[3], d = dr * dr + dg * dg + db * db + 2 * da * da;
        if (d < bd) { bd = d; best = i; if (!d) break; } }
    ck[hsh] = col; cv[hsh] = 0x10000u | (uint32_t)best; return best; }

size_t rs_mip_build_pal(const uint8_t *idx, const uint32_t *rgba, const uint32_t *pal, int npal, int w, int h, int levels, int align, uint8_t *dst){
    size_t cbytes = rs_mip_bytes(w, h, levels, 1); uint8_t *c = malloc(cbytes); if (!c) return 0;
    rs_mip_build(rgba, w, h, levels, 1, c);                  /* the filtered colours (unpadded) */
    memset(cv, 0, sizeof cv);
    size_t o = 0, co = 0;
    for (int l = 0; l < levels; l++) {
        size_t s = row_texels(w, align);
        for (int y = 0; y < h; y++) {
            uint8_t *d = dst + o + (size_t)y * s;
            if (!l) memcpy(d, idx + (size_t)y * w, (size_t)w);
            else for (int x = 0; x < w; x++) d[x] = (uint8_t)nearest(c + co + ((size_t)y * w + x) * 4, pal, npal); }
        o += s * (size_t)h; co += (size_t)w * h * 4; w = w > 1 ? w >> 1 : 1; h = h > 1 ? h >> 1 : 1; }
    free(c); return o; }
