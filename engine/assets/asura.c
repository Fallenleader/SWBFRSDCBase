#include "asura.h"
#include "../core/ak_vfs.h"
#include "../platform/plat.h"
#include "../core/ak_settings.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ------------------------------------------------------------------ containers */
bool ak_asura_check(const ak_blob *f) { return f->size >= 8 && memcmp(f->data, "Asura   ", 8) == 0; }

bool ak_asura_next(const ak_blob *f, u32 *pos, ak_chunk *out)
{
    u32 p = *pos;
    if ((size_t)p + 16 > f->size) return false;
    const u8 *h = f->data + p;
    u32 size = ak_rd32(h + 4);
    if (size < 16 || (size_t)p + size > f->size) return false;          /* the files end with a few zero bytes */
    memcpy(out->tag, h, 4); out->tag[4] = 0;
    out->version = ak_rd32(h + 8); out->flags = ak_rd32(h + 12);
    out->body = h + 16; out->size = size - 16; out->offset = p;
    *pos = p + size;
    return true;
}

/* ------------------------------------------------------------------ RSCF */
bool ak_rscf_parse(const ak_chunk *c, ak_rscf *out)
{
    if (ak_chunk_tag(c) != AK_TAG('R', 'S', 'C', 'F') || c->size < 13) return false;
    const u8 *b = c->body;
    out->type = ak_rd32(b); out->sub = ak_rd32(b + 4); out->size = ak_rd32(b + 8);
    const char *name = (const char *)b + 12;
    size_t room = c->size - 12, n = strnlen(name, room);
    if (n == room) return false;
    out->name = name;
    size_t q = 12 + ((n + 1 + 3) & ~(size_t)3);
    out->stub_off = 0;
    if (q + out->size > c->size) {                      /* a streamed level's stub: "AKST", the data's file offset */
        if (q + 8 != c->size || memcmp(b + q, "AKST", 4)) return false;
        out->data = NULL; out->stub_off = ak_rd32(b + q + 4);
        return out->stub_off != 0;
    }
    out->data = b + q;
    return true;
}

/* ---- streamed levels: everything but the big texture / mesh resources read once into the arena; those stay on the disc */
static struct { ak_vfs_file *f; u8 *scratch; u32 cap, biggest; u32 reads; u64 bytes; ak_arena *a; size_t mark, scratch_mark, mark_after; } stream;   /* scratch: the arena's top, one read's size */
static const u8 *stream_get(const char *what, u32 off, u32 size)
{
    if (!stream.f) { AK_ERROR("level", "%s: a streamed resource read after the level loaded", what); return NULL; }
    if (size > stream.cap || size + (64u << 10) < stream.cap) {          /* (each read its own size, unless close to the last's) */
        if (stream.scratch && ak_arena_top_mark(stream.a) != stream.mark_after) { AK_ERROR("level", "%s: the scratch is held under another buffer", what); return NULL; }
        if (stream.scratch) ak_arena_top_release(stream.a, stream.scratch_mark);
        stream.cap = 0; stream.scratch_mark = ak_arena_top_mark(stream.a);
        stream.scratch = (u8 *)ak_arena_alloc_top(stream.a, size, 64); if (!stream.scratch) return NULL;
        stream.cap = size; stream.mark_after = ak_arena_top_mark(stream.a); if (size > stream.biggest) stream.biggest = size;
    }
    if (!ak_vfs_fread(stream.f, off, stream.scratch, size)) { AK_ERROR("level", "%s: the read failed", what); return NULL; }
    stream.reads++; stream.bytes += size;
    return stream.scratch;
}
const u8 *ak_rscf_bytes(const ak_rscf *r) { return r->data || !r->stub_off ? r->data : stream_get(r->name, r->stub_off, r->size); }
bool ak_chunk_load(ak_chunk *c)
{
    if (c->size != 12 || memcmp(c->body, "AKST", 4)) return true;
    const u8 *b = stream_get(c->tag, ak_rd32(c->body + 4), ak_rd32(c->body + 8)); if (!b) return false;
    c->size = ak_rd32(c->body + 8); c->body = b;
    return true;
}
void ak_level_stream_drop(void)
{
    if (stream.scratch && ak_arena_top_mark(stream.a) == stream.mark_after) { ak_arena_top_release(stream.a, stream.scratch_mark); stream.scratch = NULL; stream.cap = 0; }
}
void ak_level_stream_close(void)
{
    if (stream.f) AK_INFO("level", "streamed: %u resource reads, %.1f MB (the largest %.1f MB)", stream.reads, stream.bytes / 1048576.0, stream.biggest / 1048576.0);
    ak_vfs_fclose(stream.f); if (stream.a) ak_arena_top_release(stream.a, stream.mark); memset(&stream, 0, sizeof stream);
}
static bool get_bytes(ak_vfs_file *f, u8 *win, u32 *wo, u32 *wn, u32 cap, u32 size, u32 off, void *d, u32 len)
{
    if (len > cap / 2) return ak_vfs_fread(f, off, d, len);
    if (off < *wo || off + len > *wo + *wn) {
        if (off >= size) return false;
        *wo = off; *wn = size - off < cap ? size - off : cap;
        if (!ak_vfs_fread(f, off, win, *wn)) { *wn = 0; return false; }
        if (off + len > *wo + *wn) return false;
    }
    memcpy(d, win + (off - *wo), len); return true;
}
bool ak_level_stream_read(ak_vfs *v, const char *path, ak_arena *a, ak_blob *out)
{
    ak_level_stream_close();
    u32 size = 0; ak_vfs_file *f = ak_vfs_fopen(v, path, &size);
    if (!f) { AK_ERROR("level", "%s: not found", path); return false; }
    /* the kept chunks go straight into the arena's free end (the arena's last allocation, trimmed to what was kept) */
    size_t used0 = a->used, peak0 = a->peak, room = a->size - AK_ALIGN_UP(a->used, 64); u8 *dst = (u8 *)ak_arena_alloc(a, room, 64); u32 n = 0;
    if (room) room--;                                                              /* (the end's 0) */
    enum { WIN = 64u << 10 }; u8 *win = (u8 *)ak_plat_alloc(WIN, 64); u32 wo = 0, wn = 0;   /* a read-ahead window */
    #define GET(off, d, len) get_bytes(f, win, &wo, &wn, WIN, size, (off), (d), (len))
    bool ok = dst && win && size >= 8 && room >= 8 && GET(0, dst, 8) && !memcmp(dst, "Asura   ", 8);
    n = 8; u32 pos = 8, stubs = 0, biggest = 0;
    while (ok && pos + 16 <= size) {
        u8 h[16 + 12 + 256]; if (!GET(pos, h, 16)) { ok = false; break; }
        u32 csz = ak_rd32(h + 4);
        if (csz < 16 || pos + csz > size) break;                                   /* (the files end with a few zero bytes) */
        bool stub = false; u32 keep = csz;
        if (!memcmp(h, "RSCF", 4) && csz > 16 + 12 + 2048) {
            u32 hb = csz - 16 < 12 + 256 ? csz - 16 : 12 + 256;
            if (!GET(pos + 16, h + 16, hb)) { ok = false; break; }
            u32 type = ak_rd32(h + 16), rsz = ak_rd32(h + 24); size_t nl = strnlen((const char *)h + 28, hb - 12);
            u32 q = 12 + (u32)((nl + 1 + 3) & ~(size_t)3);
#ifdef AK_HAS_ARAM
            static int snd = -1; if (snd < 0) snd = ak_setting_int("AK_AUDIO_ADPCM", 1) && ak_setting_int("AK_AUDIO_ARAM", 1);   /* (sounds: to ARAM as the bank loads) */
#else
            const int snd = 0;
#endif
            if ((type == AK_RSCF_TEXTURE || type == AK_RSCF_MESH || (type == AK_RSCF_SOUND && snd)) && nl < hb - 12 && q + rsz <= csz - 16) { stub = true; keep = 16 + q + 8; if (rsz > biggest) biggest = rsz; }
            if (stub) {
                if (n + keep > room) { ok = false; break; }
                memcpy(dst + n, h, 16 + q); ak_wr32(dst + n + 4, keep); memcpy(dst + n + 16 + q, "AKST", 4); ak_wr32(dst + n + 16 + q + 4, pos + 16 + q);
                n += keep; stubs++;
            }
        }
        if (!stub && (!memcmp(h, "PHEN", 4) || !memcmp(h, "NAV1", 4) || !memcmp(h, "HCAN", 4) || !memcmp(h, "HSKN", 4)) && csz > 16 + 12) {
            if (n + 28 > room) { ok = false; break; }                              /* (read only while loading: ak_chunk_load) */
            memcpy(dst + n, h, 16); ak_wr32(dst + n + 4, 28); memcpy(dst + n + 16, "AKST", 4); ak_wr32(dst + n + 20, pos + 16); ak_wr32(dst + n + 24, csz - 16);
            n += 28; stubs++; stub = true; if (csz - 16 > biggest) biggest = csz - 16;
        }
        if (!stub) { if (n + csz > room || !GET(pos, dst + n, csz)) { ok = false; break; } n += csz; }
        pos += csz;
    }
    #undef GET
    ak_plat_free(win);
    if (!ok) { AK_ERROR("level", "%s: the streamed read failed (%.1f MB room)", path, room / 1048576.0); ak_vfs_fclose(f); a->used = used0; a->peak = peak0; return false; }
    dst[n] = 0; a->used = (size_t)(dst - a->base) + n + 1; a->peak = peak0 > a->used ? peak0 : a->used;   /* (trimmed) */
    out->data = dst; out->size = n;
    stream.a = a; stream.mark = ak_arena_top_mark(a); (void)biggest;
    stream.f = f;
    AK_INFO("level", "%s: %.1f MB kept of %.1f MB (%u resources left on the disc)", path, n / 1048576.0, size / 1048576.0, stubs);
    return true;
}

/* ------------------------------------------------------------------ TEXT / MTRL */
bool ak_text_parse(const ak_chunk *c, ak_arena *a, ak_names *out)
{
    if (c->size < 4) return false;
    u32 n = ak_rd32(c->body), q = 4;
    if (n > c->size) return false;
    out->names = AK_NEW(a, const char *, n ? n : 1); out->count = 0;
    if (!out->names) return false;
    for (u32 i = 0; i < n; i++) {
        if (q >= c->size) return false;
        const char *s = (const char *)c->body + q; size_t len = strnlen(s, c->size - q);
        if (q + len >= c->size) return false;
        out->names[out->count++] = s; q += (u32)((len + 1 + 3) & ~(size_t)3);
    }
    return true;
}

bool ak_mtrl_parse(const ak_chunk *c, ak_arena *a, ak_material **out, u32 *count)
{
    if (c->size < 4) return false;
    u32 n = ak_rd32(c->body);
    if ((size_t)n * 36 + 4 > c->size) return false;
    ak_material *m = AK_NEW(a, ak_material, n ? n : 1);
    if (!m) return false;
    for (u32 i = 0; i < n; i++) {
        const u8 *r = c->body + 4 + 36 * i;
        for (int k = 0; k < 6; k++) m[i].tex[k] = (s32)ak_rd32(r + 4 * k);
        m[i].flags = (s32)ak_rd32(r + 24); m[i].mode = (s32)ak_rd32(r + 28); m[i].extra = (s32)ak_rd32(r + 32);
        m[i].texture = m[i].texture2 = -1;
    }
    *out = m; *count = n;
    return true;
}

/* ------------------------------------------------------------------ textures
 * u16 width, u16 height, u8 0, u8 0, u8 format (4 = 4-bit, 5 = 8-bit palette), u8 extra mip levels; the levels, each stored
 * in PSP swizzle order (16-byte x 8-row blocks) when at least 16 bytes wide and 8 rows high; then the palette (RGBA8888). */
bool ak_texture_parse(const ak_rscf *r, ak_arena *a, ak_texture *t)
{
    if (r->type != AK_RSCF_TEXTURE || r->size < 8) return false;
    const u8 *b = ak_rscf_bytes(r); if (!b) return false;
    memset(t, 0, sizeof *t);
    t->width = ak_rd16(b); t->height = ak_rd16(b + 2);
    u8 fmt = b[6], mips = b[7];
    if (fmt == 4) t->bpp = 4; else if (fmt == 5) t->bpp = 8; else return false;
    if (!t->width || !t->height || mips >= AK_ARRAY_LEN(t->pixels)) return false;
    t->levels = (u8)(mips + 1); t->name = r->name; t->name_hash = ak_hash_name(r->name); t->sub = r->sub;
    u32 p = 8, w = t->width, h = t->height;
    /* the levels in one block, each in a slot of ak_texture_slot bytes (room for the GameCube's tiles: GX re-tiles them in place) */
    u32 total = 0; for (u32 l = 0; l < t->levels; l++) total += ak_texture_slot(t, l);
    u8 *blk = (u8 *)ak_arena_alloc(a, total, 32), *dst = blk;
    if (!blk) return false;
    for (u32 l = 0; l < t->levels; l++, dst += ak_texture_slot(t, l - 1)) {
        u32 wb = w * t->bpp / 8, sz = wb * h;
        if (wb == 0) wb = 1, sz = h;
        if (p + sz > r->size) return false;
        const u8 *src = b + p;
        if (wb >= 16 && h >= 8) {                                   /* de-swizzle */
            u32 bw = wb / 16;
            for (u32 by = 0; by < h / 8; by++)
                for (u32 bx = 0; bx < bw; bx++)
                    for (u32 row = 0; row < 8; row++) { memcpy(dst + (by * 8 + row) * wb + bx * 16, src, 16); src += 16; }
        } else memcpy(dst, src, sz);
        t->pixels[l] = dst; p += sz;
        w = w > 1 ? w / 2 : 1; h = h > 1 ? h / 2 : 1;
    }
    u32 ncol = 1u << t->bpp;
    if (p + 4 * ncol > r->size) return false;
    for (u32 i = 0; i < ncol; i++) t->palette[i] = ak_rd32(b + p + 4 * i);
    return true;
}

u32 ak_texture_slot(const ak_texture *t, u32 l)
{
    u32 w = t->width >> l, h = t->height >> l; if (!w) w = 1; if (!h) h = 1;
    return ((w + 7) / 8) * ((h + (t->bpp == 4 ? 7 : 3)) / (t->bpp == 4 ? 8 : 4)) * 32;   /* 8 x 8 texels at 4 bits, 8 x 4 at 8, 32 bytes each */
}
void ak_texture_expand(const ak_texture *t, int level, u32 *rgba)
{
    u32 w = t->width >> level, h = t->height >> level;
    if (!w) w = 1;
    if (!h) h = 1;
    const u8 *px = t->pixels[level];
    if (t->bpp == 8) for (u32 i = 0; i < w * h; i++) rgba[i] = t->palette[px[i]];
    else for (u32 i = 0; i < w * h; i++) rgba[i] = t->palette[(px[i >> 1] >> ((i & 1) * 4)) & 15];
}

const u32 ak_personal_colour1[16] = { 0xe6e6e6, 0x7f7f7f, 0x282828, 0xd4cf4f, 0xcc9848, 0xcc7348, 0xb33333, 0x622f2f,
                                      0xf1b0cf, 0xa771c6, 0x643a76, 0x434aa2, 0x2a797a, 0x357c3c, 0x516244, 0x786f2b };
const u32 ak_personal_colour2[16] = { 0xe6e6e6, 0x7f7f7f, 0x282828, 0x333d58, 0x475578, 0x637195, 0x896060, 0x773d3d,
                                      0x8bb078, 0x60844e, 0x436533, 0x33432b, 0x464328, 0x6f6a40, 0xa29940, 0xc0b972 };

static int iabs(int x) { return x < 0 ? -x : x; }
void ak_texture_recolor(const ak_texture *t, u32 c1, u32 c2, u32 *out)
{
    u32 n = 1u << t->bpp;
    for (u32 i = 0; i < n; i++) {
        u32 e = t->palette[i]; int a = (int)(e >> 24);
        out[i] = e;
        u32 c;
        if (iabs(a - 127) < 11) c = c1; else if (iabs(a) < 11) c = c2; else continue;
        u32 r = e & 255, g = (e >> 8) & 255, b = (e >> 16) & 255, m = r > g ? (r > b ? r : b) : (g > b ? g : b);
        f32 k = (f32)m / 255.0f;
        u32 cr = (u32)((f32)((c >> 16) & 255) * k + 0.5f), cg = (u32)((f32)((c >> 8) & 255) * k + 0.5f), cb = (u32)((f32)(c & 255) * k + 0.5f);
        out[i] = 0xFF000000u | cb << 16 | cg << 8 | cr;
    }
}
bool ak_texture_has_colour_mask(const ak_texture *t)
{
    u32 n = 1u << t->bpp;
    for (u32 i = 0; i < n; i++) { int a = (int)(t->palette[i] >> 24); if (iabs(a - 127) < 11 || a < 11) return true; }
    return false;
}

/* ------------------------------------------------------------------ level geometry
 * header u32 materials, u32 opaque strips, u32 blend-layer strips, u32 vertices, u32 0;
 * strips { u32 (vertex type << 16) | count, u32 first vertex, u32 first vertex, u32 material, u32 object };
 * vertices 24 bytes { s16 u, v (1/256), u16 colour (RGB565 opaque, RGBA4444 blend layer), s16 normal xyz (1/32768), f32 xyz }. */
typedef struct { u32 key, ord; u32 a, b, c; } tri_rec;  /* ord keeps the game's order within a batch (blend layer) */
static int tri_cmp(const void *x, const void *y)
{
    const tri_rec *p = (const tri_rec *)x, *q = (const tri_rec *)y;
    if (p->key != q->key) return p->key < q->key ? -1 : 1;
    return p->ord < q->ord ? -1 : p->ord > q->ord ? 1 : 0;
}
/* Coplanar overlays.  Some surfaces are painted over others in the same plane (hangar floor markings over floor tiles, signs on
 * walls).  The PSP draws them after their base and lets equal depth pass; with draws reordered for the GPU they fight for the
 * same depth.  A triangle that lies in the plane of an earlier triangle (the game's order) of another material and overlaps it with
 * real area (not just a shared edge) is marked as an overlay: it is drawn after the base surfaces with a small depth bias. */
typedef struct { s32 k[4]; u32 tri; } plane_rec;
static int plane_cmp(const void *x, const void *y)
{
    const plane_rec *p = (const plane_rec *)x, *q = (const plane_rec *)y;
    for (int i = 0; i < 4; i++) if (p->k[i] != q->k[i]) return p->k[i] < q->k[i] ? -1 : 1;
    return p->tri < q->tri ? -1 : p->tri > q->tri ? 1 : 0;
}
static void proj2(const f32 *p, int ax, f32 *o) { o[0] = p[ax == 0 ? 1 : 0]; o[1] = p[ax == 2 ? 1 : 2]; }
static bool sep_axis(const f32 (*a)[2], const f32 (*b)[2], f32 eps)
{
    for (int t = 0; t < 2; t++) {
        const f32 (*P)[2] = t ? b : a;
        for (int e = 0; e < 3; e++) {
            f32 nx = P[(e + 1) % 3][1] - P[e][1], ny = P[e][0] - P[(e + 1) % 3][0];
            f32 l = sqrtf(nx * nx + ny * ny); if (l < 1e-9f) continue; nx /= l; ny /= l;
            f32 amin = 1e30f, amax = -1e30f, bmin = 1e30f, bmax = -1e30f;
            for (int k = 0; k < 3; k++) {
                f32 da = a[k][0] * nx + a[k][1] * ny, db = b[k][0] * nx + b[k][1] * ny;
                amin = fminf(amin, da); amax = fmaxf(amax, da); bmin = fminf(bmin, db); bmax = fmaxf(bmax, db);
            }
            if (amax <= bmin + eps || bmax <= amin + eps) return true;      /* separated, or only touching */
        }
    }
    return false;
}
/* the level geometry's working arrays: from the arena's top (given back when ak_env_parse returns): no heap needed */
static ak_arena *tmp_a;
static void *tmp_alloc(size_t n) { return ak_arena_alloc_top(tmp_a, n ? n : 1, 16); }
static void *tmp_zalloc(size_t n) { void *q = tmp_alloc(n); if (q) memset(q, 0, n ? n : 1); return q; }
static u32 mark_overlays(const ak_vtx *V, const u32 (*tri)[3], const u32 *mat, const u8 *lay, u8 *overlay, u32 nt)
{
    plane_rec *pr = (plane_rec *)tmp_alloc(sizeof *pr * (nt ? nt : 1)); u32 np = 0, marked = 0;
    if (!pr) return 0;
    for (u32 i = 0; i < nt; i++) {
        if (lay[i]) continue;
        const f32 *p0 = V[tri[i][0]].pos, *p1 = V[tri[i][1]].pos, *p2 = V[tri[i][2]].pos;
        f32 e1[3] = { p1[0] - p0[0], p1[1] - p0[1], p1[2] - p0[2] }, e2[3] = { p2[0] - p0[0], p2[1] - p0[1], p2[2] - p0[2] };
        f32 n[3] = { e1[1] * e2[2] - e1[2] * e2[1], e1[2] * e2[0] - e1[0] * e2[2], e1[0] * e2[1] - e1[1] * e2[0] };
        f32 l = sqrtf(n[0] * n[0] + n[1] * n[1] + n[2] * n[2]);
        if (l < 1e-6f) continue;
        n[0] /= l; n[1] /= l; n[2] /= l;
        pr[np].k[0] = (s32)lrintf(n[0] * 50); pr[np].k[1] = (s32)lrintf(n[1] * 50); pr[np].k[2] = (s32)lrintf(n[2] * 50);
        pr[np].k[3] = (s32)lrintf((n[0] * p0[0] + n[1] * p0[1] + n[2] * p0[2]) * 25);      /* 4 cm planes */
        pr[np].tri = i; np++;
    }
    qsort(pr, np, sizeof *pr, plane_cmp);
    for (u32 g0 = 0; g0 < np;) {
        u32 g1 = g0 + 1;
        while (g1 < np && !memcmp(pr[g1].k, pr[g0].k, sizeof pr[g0].k)) g1++;
        if (g1 - g0 > 1 && g1 - g0 < 4096) {
            for (u32 j = g0 + 1; j < g1; j++) {               /* later triangle j over an earlier triangle i of another material */
                u32 tj = pr[j].tri;
                f32 nrm[3] = { (f32)pr[j].k[0], (f32)pr[j].k[1], (f32)pr[j].k[2] };
                int ax = fabsf(nrm[0]) > fabsf(nrm[1]) ? (fabsf(nrm[0]) > fabsf(nrm[2]) ? 0 : 2) : (fabsf(nrm[1]) > fabsf(nrm[2]) ? 1 : 2);
                f32 B[3][2]; for (int k = 0; k < 3; k++) proj2(V[tri[tj][k]].pos, ax, B[k]);
                for (u32 i = g0; i < j && !overlay[tj]; i++) {
                    u32 ti = pr[i].tri;
                    if (mat[ti] == mat[tj] || overlay[ti]) continue;
                    f32 A[3][2]; for (int k = 0; k < 3; k++) proj2(V[tri[ti][k]].pos, ax, A[k]);
                    if (!sep_axis((const f32 (*)[2])A, (const f32 (*)[2])B, 0.01f)) { overlay[tj] = 1; marked++; }
                }
            }
        }
        g0 = g1;
    }
        return marked;
}

static s8 snorm8(s16 v) { int r = (v * 127 + (v >= 0 ? 16384 : -16384)) / 32768; return (s8)(r < -127 ? -127 : r > 127 ? 127 : r); }

static bool env_parse(const ak_rscf *r, const u8 *b, ak_arena *a, ak_level_geom *g);
bool ak_env_parse(const ak_rscf *r, ak_arena *a, ak_level_geom *g)
{
    const u8 *b = ak_rscf_bytes(r); memset(g, 0, sizeof *g); if (!b) return false;   /* (first: a streamed one's scratch sits under the working arrays) */
    ak_arena *keep = tmp_a; tmp_a = a; size_t mark = ak_arena_top_mark(a);
    bool ok = env_parse(r, b, a, g);
    ak_arena_top_release(a, mark); tmp_a = keep;
    return ok;
}
static bool env_parse(const ak_rscf *r, const u8 *b, ak_arena *a, ak_level_geom *g)
{
    if (r->size < 20) return false;
    u32 nopq = ak_rd32(b + 4), nlay = ak_rd32(b + 8), nv = ak_rd32(b + 12), ns = nopq + nlay;
    u32 vo = 20 + 20 * ns;
    if ((size_t)vo + (size_t)nv * 24 > r->size) return false;
    g->src_strips = ns; g->src_verts = nv;

    /* vertices: native layout, engine axes.  A strip's vertex type picks the colour format, so vertices are converted per strip
     * (the game never shares a vertex between the two layers). */
    g->vtx = (ak_vtx *)ak_arena_zalloc(a, sizeof(ak_vtx) * (nv ? nv : 1), 32); g->nvtx = nv;   /* (32: GX draws from it in place) */
    u8 *seen = (u8 *)tmp_zalloc((size_t)(nv ? nv : 1) * (1));
    u32 maxtri = 0, maxobj = 0;
    if (!g->vtx || !seen) { return false; }
    for (u32 s = 0; s < ns; s++) {
        const u8 *sr = b + 20 + 20 * s;
        u32 w = ak_rd32(sr), n = w & 0xFFFF, vt = w >> 16, v0 = ak_rd32(sr + 4), obj = ak_rd32(sr + 16);
        if ((size_t)v0 + n > nv || (vt != 0x1D2 && vt != 0x1DA)) { AK_ERROR("env", "strip %u: bad range or vertex type %x", s, vt); return false; }
        if (n >= 3) maxtri += n - 2;
        if (obj + 1 > maxobj) maxobj = obj + 1;
        for (u32 i = v0; i < v0 + n; i++) {
            if (seen[i]) continue;
            seen[i] = 1;
            const u8 *v = b + vo + 24 * i; ak_vtx *o = &g->vtx[i];
            s16 u = (s16)ak_rd16(v), vv = (s16)ak_rd16(v + 2); u16 c = ak_rd16(v + 4);
            f32 gp[3] = { ak_rdf32(v + 12), ak_rdf32(v + 16), ak_rdf32(v + 20) };
            ak_from_game(gp, o->pos);
            o->uv[0] = u / 256.0f; o->uv[1] = vv / 256.0f;
            o->nrm[0] = snorm8((s16)ak_rd16(v + 6)); o->nrm[1] = (s8)-snorm8((s16)ak_rd16(v + 8)); o->nrm[2] = (s8)-snorm8((s16)ak_rd16(v + 10)); o->nrm[3] = 0;
            if (vt == 0x1DA) { o->col[0] = (u8)((c & 15) * 17); o->col[1] = (u8)(((c >> 4) & 15) * 17); o->col[2] = (u8)(((c >> 8) & 15) * 17); o->col[3] = (u8)((c >> 12) * 17); }
            else { o->col[0] = (u8)((c & 31) * 255 / 31); o->col[1] = (u8)(((c >> 5) & 63) * 255 / 63); o->col[2] = (u8)((c >> 11) * 255 / 31); o->col[3] = 255; }
        }
    }
        if (maxobj > 0xFFFF) return false;

    /* strips -> triangles (degenerate joins dropped; the strip's alternate triangles flipped to keep one winding), then grouped */
    tri_rec *tr = (tri_rec *)tmp_alloc(sizeof(tri_rec) * (maxtri ? maxtri : 1)); u32 nt = 0;
    if (!tr) return false;
    u32 nmat_seen = 0;
    for (u32 s = 0; s < ns; s++) {
        const u8 *sr = b + 20 + 20 * s;
        u32 n = ak_rd32(sr) & 0xFFFF, v0 = ak_rd32(sr + 4), mat = ak_rd32(sr + 12), obj = ak_rd32(sr + 16), layer = s >= nopq;
        if (mat != 0xFFFFFFFF && mat + 1 > nmat_seen) nmat_seen = mat + 1;
        for (u32 k = 0; k + 2 < n; k++) {
            u32 x = v0 + k, y = v0 + k + 1, z = v0 + k + 2;
            if (k & 1) { u32 t = x; x = y; y = t; }
            const f32 *px = g->vtx[x].pos, *py = g->vtx[y].pos, *pz = g->vtx[z].pos;
            if (!memcmp(px, py, 12) || !memcmp(py, pz, 12) || !memcmp(px, pz, 12)) continue;
            /* key: layer (1 bit) | object (16 bits) | overlay (1 bit, set below) | material (14 bits; 0x3FFF = none) */
            u32 mk = mat == 0xFFFFFFFF ? 0x3FFF : (mat & 0x3FFF);
            tr[nt].key = (layer << 31) | (obj << 15) | mk; tr[nt].ord = nt; tr[nt].a = x; tr[nt].b = y; tr[nt].c = z; nt++;
        }
    }
    {   /* overlays (see mark_overlays): the key's bit 14 */
        u32 (*tv)[3] = (u32 (*)[3])tmp_alloc(12u * (nt ? nt : 1)); u32 *tm = (u32 *)tmp_alloc(4u * (nt ? nt : 1));
        u8 *tl = (u8 *)tmp_alloc(nt ? nt : 1), *ov = (u8 *)tmp_zalloc((size_t)(nt ? nt : 1) * (1));
        if (tv && tm && tl && ov) {
            for (u32 i = 0; i < nt; i++) { tv[i][0] = tr[i].a; tv[i][1] = tr[i].b; tv[i][2] = tr[i].c; tm[i] = tr[i].key & 0x3FFF; tl[i] = (u8)(tr[i].key >> 31); }
            g->overlay_tris = mark_overlays(g->vtx, (const u32 (*)[3])tv, tm, tl, ov, nt);
            for (u32 i = 0; i < nt; i++) if (ov[i]) tr[i].key |= 1u << 14;
        }
            }
    qsort(tr, nt, sizeof *tr, tri_cmp);
    g->idx = AK_NEW(a, u32, nt ? nt * 3 : 1); g->nidx = nt * 3;
    u32 nb = 0;
    for (u32 i = 0; i < nt; i++) if (i == 0 || tr[i].key != tr[i - 1].key) nb++;
    g->batch = AK_NEW(a, ak_batch, nb ? nb : 1); g->nobj = maxobj;
    g->obj_bounds = AK_NEW(a, ak_aabb, maxobj ? maxobj : 1);
    if (!g->idx || !g->batch || !g->obj_bounds) { return false; }
    for (u32 o = 0; o < maxobj; o++) for (int k = 0; k < 3; k++) { g->obj_bounds[o].min[k] = 1e30f; g->obj_bounds[o].max[k] = -1e30f; }
    for (u32 i = 0; i < nt; i++) {
        if (i == 0 || tr[i].key != tr[i - 1].key) {
            ak_batch *bt = &g->batch[g->nbatch++];
            u32 k = tr[i].key, mk = k & 0x3FFF;
            bt->layer = (u8)(k >> 31); bt->object = (u16)((k >> 15) & 0xFFFF); bt->material = mk == 0x3FFF ? 0xFFFFFFFFu : mk;
            bt->overlay = (u8)((k >> 14) & 1);
            bt->first = i * 3; bt->count = 0;
        }
        ak_batch *bt = &g->batch[g->nbatch - 1];
        u32 *ix = g->idx + i * 3; ix[0] = tr[i].a; ix[1] = tr[i].b; ix[2] = tr[i].c; bt->count += 3;
        ak_aabb *bb = &g->obj_bounds[bt->object];
        for (int j = 0; j < 3; j++) for (int k = 0; k < 3; k++) {
            f32 v = g->vtx[ix[j]].pos[k];
            if (v < bb->min[k]) bb->min[k] = v;
            if (v > bb->max[k]) bb->max[k] = v;
        }
    }
        (void)nmat_seen;
    return true;
}

/* ------------------------------------------------------------------ level file */
s32 ak_level_find_texture(const ak_level *l, const char *name)
{
    u32 h = ak_hash_name(name);
    for (u32 i = 0; i < l->ntex; i++) if (l->tex[i].name_hash == h) return (s32)i;
    return -1;
}

bool ak_level_load(const char *path, ak_arena *a, ak_level *l)
{
    ak_blob b;
    if (!ak_file_read(path, a, &b)) return false;
    return ak_level_parse(&b, a, l);
}

bool ak_level_parse(const ak_blob *file, ak_arena *a, ak_level *l)
{
    memset(l, 0, sizeof *l); l->file = *file;
    if (!ak_asura_check(&l->file)) { AK_ERROR("level", "not a level file"); return false; }
    ak_chunk c; u32 pos = 8, ntexres = 0;
    while (ak_asura_next(&l->file, &pos, &c)) {                  /* pass 1: counts */
        ak_rscf r; l->nchunks++;
        if (ak_rscf_parse(&c, &r) && r.type == AK_RSCF_TEXTURE) ntexres++;
    }
    l->tex = AK_NEW(a, ak_texture, ntexres ? ntexres : 1);
    if (!l->tex) return false;
    /* pass 2.  The environment's material list is the first MTRL with more than 8 entries that follows a TEXT list naming
     * \environments\ textures (the same rule as tools/asura/maptool.py). */
    ak_names last_text = { 0 }; bool have_env_mtrl = false, have_env = false;
    pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        u32 tag = ak_chunk_tag(&c); ak_rscf r;
        if (tag == AK_TAG('T', 'E', 'X', 'T')) ak_text_parse(&c, a, &last_text);
        else if (tag == AK_TAG('M', 'T', 'R', 'L') && !have_env_mtrl && last_text.count) {
            bool envs = false;
            for (u32 i = 0; i < last_text.count && !envs; i++) envs = strstr(last_text.names[i], "environments") != NULL;
            ak_material *m; u32 n;
            if (envs && ak_mtrl_parse(&c, a, &m, &n)) {
                if (n > 8) { l->mat = m; l->nmat = n; l->env_names = last_text; have_env_mtrl = true; }
                else if (!l->nmat && n) { l->mat = m; l->nmat = n; l->env_names = last_text; }   /* a fallback: GC.PSP's one-material Env (grey.tga) */
            }
        } else if (tag == AK_TAG('S', 'K', 'Y', 'B') && c.size >= 24 && ((const char *)c.body)[20] == '\\') {
            l->has_sky = true;
            for (int k = 0; k < 3; k++) l->sky_tint[k] = ak_rdf32(c.body + 4 * k);
            l->sky_angle = ak_rdf32(c.body + 12);
            u32 q = 20;
            for (int k = 0; k < 5; k++) {
                const char *nm = (const char *)c.body + q; size_t n = q < c.size ? strnlen(nm, c.size - q) : 0;
                l->sky_names[k] = n ? nm : NULL; q += (u32)((n + 1 + 3) & ~(size_t)3);
            }
        } else if (ak_rscf_parse(&c, &r)) {
            if (r.type == AK_RSCF_TEXTURE) {
                if (ak_texture_parse(&r, a, &l->tex[l->ntex])) l->ntex++; else l->tex_unsupported++;
            } else if (c.version == 1 && r.type == AK_RSCF_MESH && !strcmp(r.name, "Env") && !have_env) {
                have_env = ak_env_parse(&r, a, &l->geom);
                if (!have_env) AK_ERROR("level", "level geometry did not parse");
            }
        }
    }
    for (int k = 0; k < 5; k++) {
        l->sky_tex[k] = -1;
        if (l->has_sky && l->sky_names[k]) { char nm[512]; snprintf(nm, sizeof nm, "\\graphics%s", l->sky_names[k]); l->sky_tex[k] = ak_level_find_texture(l, nm); }
    }
    for (u32 i = 0; i < l->nmat; i++) {                            /* materials -> textures ("\graphics" + the TEXT name) */
        for (int slot = 0; slot < 2; slot++) {
            s32 ti = l->mat[i].tex[slot ? 3 : 0];
            if (ti < 0 || (u32)ti >= l->env_names.count) continue;
            char nm[512]; snprintf(nm, sizeof nm, "\\graphics%s", l->env_names.names[ti]);
            *(slot ? &l->mat[i].texture2 : &l->mat[i].texture) = ak_level_find_texture(l, nm);
        }
    }
    /* self-lit surfaces (consoles, windows, lights: AK_MAT_SELF_LIT) glow: the game draws them unlit, so their vertex colours (the baked
       lighting) do not darken them - full brightness (128) */
    if (have_env && have_env_mtrl && ak_setting_int("AK_SELF_LIT", 1))
        for (u32 b = 0; b < l->geom.nbatch; b++) {
            const ak_batch *bt = &l->geom.batch[b];
            if (bt->material >= l->nmat || !(l->mat[bt->material].flags & AK_MAT_SELF_LIT)) continue;
            for (u32 k = 0; k < bt->count; k++) { ak_vtx *v = &l->geom.vtx[l->geom.idx[bt->first + k]]; if (v->col[0] < 128) v->col[0] = 128; if (v->col[1] < 128) v->col[1] = 128; if (v->col[2] < 128) v->col[2] = 128; }
        }
    /* GC.PSP (the Galactic Conquest map) has a 44-triangle Env with a one-entry material list: it loads with that */
    return have_env && (have_env_mtrl || l->nmat > 0);
}

u32 ak_level_tex_anims(const ak_level *l, ak_arena *a, ak_tex_anim **out)
{
    *out = NULL; u32 n = 0, cap = 0; ak_tex_anim *v = NULL;
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('T', 'X', 'A', 'N') || c.version != 2 || c.size < 8) continue;
        u32 e = (u32)strnlen((const char *)c.body, c.size), p = (e + 4) & ~3u;
        if (p + 16 > c.size) continue;
        /* (the first word is the number of states, each {f32 period, u32 interpolation, u32 n, n x {u, v, t, flags, 0}}: kind 1 is one
           scroll; two states are a material with a switch - Yavin's / the Ion Cannon's visible_console_* (state 0 shown, 1 hidden by
           flag 0x80000) and destroyed_console_* (the reverse), Tatooine's lasergate, Sullust's lighting_strike_*, Endor's at_at_*;
           level entities of type 43 drive them (class 08850E80: +28 the animation's hash, +32 its state, +36 its speed, read from the
           record - state 0 on every level; message 26 (0885110C) sets the state (payload flag 1) and the speed (flag 2); 08851184
           passes them on as message 125).  Aurek keeps state 0, the records' state; its keys' flag 0x80000 hides the material.
           [not built: the script messages 26 that switch them] */
        u32 kind = ak_rd32(c.body + p), nk = ak_rd32(c.body + p + 12); f32 period = ak_rdf32(c.body + p + 4);
        if (kind < 1 || kind > 8 || nk < 1 || nk > 16 || p + 16 + nk * 20 > c.size || period <= 0) continue;
        u32 h = 0; for (u32 k = 0; k < e; k++) { u8 ch = c.body[k]; if (ch >= 'A' && ch <= 'Z') ch = (u8)(ch + 32); h = h * 31u + ch; }
        if (n == cap) { u32 nc = cap ? cap * 2 : 8; ak_tex_anim *nv = (ak_tex_anim *)ak_arena_alloc(a, sizeof *nv * nc, 8); if (!nv) break; if (v) memcpy(nv, v, sizeof *v * n); v = nv; cap = nc; }
        ak_tex_anim *t = &v[n++]; t->hash = h; t->period = period; t->nkeys = nk;
        for (u32 k = 0; k < nk; k++) for (int j = 0; j < 3; j++) t->key[k][j] = ak_rdf32(c.body + p + 16 + k * 20 + j * 4);
        t->hidden = false; for (u32 k = 0; k < nk; k++) if (ak_rd32(c.body + p + 16 + k * 20 + 12) & 0x80000u) t->hidden = true;
    }
    *out = v; return n;
}
void ak_tex_anim_uv(const ak_tex_anim *t, f32 time, f32 uv[2])
{
    f32 f = fmodf(time / t->period, 1.0f); if (f < 0) f += 1.0f;
    uv[0] = t->key[0][0]; uv[1] = t->key[0][1];
    for (u32 k = 1; k < t->nkeys; k++) {
        f32 t0 = t->key[k - 1][2], t1 = t->key[k][2];
        if (f <= t1 || k == t->nkeys - 1) { f32 w = t1 > t0 ? (f - t0) / (t1 - t0) : 1; if (w < 0) w = 0; if (w > 1) w = 1;
            uv[0] = t->key[k - 1][0] + (t->key[k][0] - t->key[k - 1][0]) * w; uv[1] = t->key[k - 1][1] + (t->key[k][1] - t->key[k - 1][1]) * w; return; }
    }
}

u32 ak_level_light_samples(const ak_level *l, ak_arena *a, ak_light_sample **out)
{
    *out = NULL;
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('G', 'I', 'S', 'N') || c.version != 3 || c.size < 104) continue;
        u32 n = ak_rd32(c.body); if (n > 65536 || 104 + (u64)n * 24 > c.size) return 0;
        f32 base[12], scale[12];
        for (int k = 0; k < 12; k++) { base[k] = ak_rdf32(c.body + 4 + 4 * k); scale[k] = ak_rdf32(c.body + 52 + 4 * k); }
        ak_light_sample *s = (ak_light_sample *)ak_arena_alloc(a, sizeof *s * (n ? n : 1), 8); if (!s) return 0;
        u32 m = 0;
        for (u32 i = 0; i < n; i++) {
            const u8 *q = c.body + 104 + 24 * i; f32 g[3] = { ak_rdf32(q), ak_rdf32(q + 4), ak_rdf32(q + 8) };
            if (!q[12] && !q[13] && !q[14] && !q[15] && g[0] == 0 && g[1] == 0 && g[2] == 0) continue;   /* (the first entry is empty) */
            ak_light_sample *o = &s[m++]; ak_from_game(g, o->pos);
            for (int ch = 0; ch < 3; ch++) {
                const u8 *w = q + 12 + 4 * ch; f32 v[4];
                for (int k = 0; k < 4; k++) v[k] = base[ch * 4 + k] + (f32)w[3 - k] * scale[ch * 4 + k];
                o->amb[ch] = v[0]; f32 dg[3] = { v[1], v[2], v[3] }; ak_from_game(dg, o->dir[ch]);
            }
        }
        *out = s; return m;
    }
    return 0;
}

bool ak_level_fog_read(const ak_level *l, ak_level_fog *out)
{
    memset(out, 0, sizeof *out);
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('F', 'O', 'G', ' ') || c.version != 1 || c.size < 24) continue;
        out->on = (c.flags & 1) != 0;
        for (int k = 0; k < 3; k++) out->rgb[k] = ak_rdf32(c.body + 4 * k);
        out->start = ak_rdf32(c.body + 16); out->end = ak_rdf32(c.body + 20); out->sky = c.size >= 32 ? ak_rdf32(c.body + 28) : 1.0f;
        return true;
    }
    return false;
}
