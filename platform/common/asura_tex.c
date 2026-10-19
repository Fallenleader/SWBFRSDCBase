/* Reads one texture from a game container (Asura engine, Rebellion) on the disc, for the platform's own screens.
 * Container: "Asura   " then chunks [4CC, u32 size incl. 16-byte header, u32 version, u32 flags].  An RSCF chunk is an embedded
 * resource: u32 type (2 = texture), u32 ?, u32 data size, NUL-terminated name padded to 4 bytes, data.  Texture data: u16 width,
 * u16 height, u8 0, u8 0, u8 format (4 = 4-bit CLUT, 5 = 8-bit CLUT), u8 extra mip levels, the levels (PSP swizzle: 16-byte x 8-row
 * blocks), then the palette (16 / 256 x RGBA8).  Same format as tools/asura/texture.py. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdint.h>
#include "vfs.h"
#include "asura_tex.h"

static uint32_t rd32(const uint8_t *p){ return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24); }
static int ends_with(const char *s, const char *suf){ size_t a = strlen(s), b = strlen(suf); return a >= b && !strcasecmp(s + a - b, suf); }

/* decode one RSCF texture blob (w, h, ?, fmt 4/5, mips, swizzled texels, palette) to RGBA8; level-0 texels in *px0 / *n0 */
static int decode(const uint8_t *blob, uint32_t dsz, uint32_t **out, int *ow, int *oh, const uint8_t **px0, size_t *n0){
    int w = blob[0] | (blob[1] << 8), h = blob[2] | (blob[3] << 8), fmt = blob[6], bpp = fmt == 4 ? 4 : (fmt == 5 ? 8 : 0);
    size_t lev = (size_t)w * h * bpp / 8; int mips = blob[7];
    size_t all = 0; { int lw = w, lh = h; for (int m = 0; m <= mips; m++) { all += (size_t)lw * lh * bpp / 8; lw = lw > 1 ? lw / 2 : 1; lh = lh > 1 ? lh / 2 : 1; } }
    if (!bpp || w <= 0 || h <= 0 || 8 + all + (4u << bpp) > dsz) return -4;
    const uint8_t *px = blob + 8, *pal = blob + 8 + all; int wb = w * bpp / 8;
    uint8_t *lin = malloc(lev); uint32_t *rgba = malloc((size_t)w * h * 4); if (!lin || !rgba) { free(lin); free(rgba); return -5; }
    if (wb >= 16 && h >= 8) { size_t i = 0; for (int by = 0; by < h / 8; by++) for (int bx = 0; bx < wb / 16; bx++) for (int r = 0; r < 8; r++) { memcpy(lin + (size_t)(by * 8 + r) * wb + bx * 16, px + i, 16); i += 16; } }
    else memcpy(lin, px, lev);
    for (int i = 0; i < w * h; i++) { int idx = bpp == 8 ? lin[i] : ((lin[i >> 1] >> ((i & 1) * 4)) & 15); rgba[i] = rd32(pal + idx * 4); }
    free(lin); *out = rgba; *ow = w; *oh = h; if (px0) *px0 = px; if (n0) *n0 = lev; return 0; }

static uint8_t *read_all(const char *path, long *n){
    FILE *f = vfs_fopen(path, "rb"); if (!f) return NULL;
    fseek(f, 0, SEEK_END); *n = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *d = *n > 16 ? malloc((size_t)*n) : NULL; if (!d || fread(d, 1, (size_t)*n, f) != (size_t)*n) { free(d); fclose(f); return NULL; } fclose(f);
    if (memcmp(d, "Asura   ", 8)) { free(d); return NULL; }
    return d; }

/* the RSCF texture chunks of a container: fn(name, blob, data size) until it returns nonzero */
static int walk(const uint8_t *d, long n, int (*fn)(const char *, const uint8_t *, uint32_t, void *), void *ud){
    for (long p = 8; p + 16 <= n; ) {
        uint32_t size = rd32(d + p + 4); if (size < 16 || p + (long)size > n) break;
        if (!memcmp(d + p, "RSCF", 4) && size > 32) {
            const uint8_t *q = d + p + 16; uint32_t typ = rd32(q), dsz = rd32(q + 8); const char *name = (const char *)q + 12;
            size_t nl = strnlen(name, size - 28); const uint8_t *blob = q + 12 + ((nl + 1 + 3) & ~(size_t)3);
            if (typ == 2 && nl < size - 28 && blob + 8 <= d + p + size && dsz >= 8 && (long)(blob - d) + (long)dsz <= n) { int r = fn(name, blob, dsz, ud); if (r) return r; } }
        p += size; }
    return 0; }

typedef struct { const char *suffix; uint32_t **out; int *w, *h; int rc; } one_t;
static int one(const char *name, const uint8_t *blob, uint32_t dsz, void *ud){
    one_t *o = ud; if (!ends_with(name, o->suffix)) return 0;
    o->rc = decode(blob, dsz, o->out, o->w, o->h, NULL, NULL); return 1; }
int asura_load_texture(const char *path, const char *name_suffix, uint32_t **out, int *ow, int *oh){
    long n; uint8_t *d = read_all(path, &n); if (!d) return -1;
    one_t o = {name_suffix, out, ow, oh, -2}; walk(d, n, one, &o); free(d); return o.rc; }

static uint32_t crc_tab[256];
static uint32_t crc32_(const uint8_t *p, size_t n){
    if (!crc_tab[1]) for (uint32_t i = 0; i < 256; i++) { uint32_t c = i; for (int k = 0; k < 8; k++) c = (c & 1) ? 0xEDB88320u ^ (c >> 1) : c >> 1; crc_tab[i] = c; }
    uint32_t c = 0xFFFFFFFFu; while (n--) c = crc_tab[(c ^ *p++) & 255] ^ (c >> 8); return c ^ 0xFFFFFFFFu; }
typedef struct { void (*cb)(const char *, uint32_t, const uint32_t *, int, int, void *); void *ud; int n; } each_t;
static int each(const char *name, const uint8_t *blob, uint32_t dsz, void *ud){
    each_t *e = ud; uint32_t *rgba; int w, h; const uint8_t *px; size_t ln;
    if (decode(blob, dsz, &rgba, &w, &h, &px, &ln)) return 0;
    e->cb(name, crc32_(px, ln), rgba, w, h, e->ud); free(rgba); e->n++; return 0; }
int asura_each_texture(const char *path, void (*cb)(const char *, uint32_t, const uint32_t *, int, int, void *), void *ud){
    long n; uint8_t *d = read_all(path, &n); if (!d) return -1;
    each_t e = {cb, ud, 0}; walk(d, n, each, &e); free(d); return e.n; }
