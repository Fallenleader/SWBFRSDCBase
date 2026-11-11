#include "asura.h"
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------------------------------ containers */
bool rs_asura_check(const rs_blob *f) { return f->size >= 8 && memcmp(f->data, "Asura   ", 8) == 0; }

bool rs_asura_next(const rs_blob *f, u32 *pos, rs_chunk *out)
{
    u32 p = *pos;
    if ((size_t)p + 16 > f->size) return false;
    const u8 *h = f->data + p;
    u32 size = rs_rd32(h + 4);
    if (size < 16 || (size_t)p + size > f->size) return false;          /* the files end with a few zero bytes */
    memcpy(out->tag, h, 4); out->tag[4] = 0;
    out->version = rs_rd32(h + 8); out->flags = rs_rd32(h + 12);
    out->body = h + 16; out->size = size - 16; out->offset = p;
    *pos = p + size;
    return true;
}

/* ------------------------------------------------------------------ RSCF */
bool rs_rscf_parse(const rs_chunk *c, rs_rscf *out)
{
    if (rs_chunk_tag(c) != RS_TAG('R', 'S', 'C', 'F') || c->size < 13) return false;
    const u8 *b = c->body;
    out->type = rs_rd32(b); out->sub = rs_rd32(b + 4); out->size = rs_rd32(b + 8);
    const char *name = (const char *)b + 12;
    size_t room = c->size - 12, n = strnlen(name, room);
    if (n == room) return false;
    out->name = name;
    size_t q = 12 + ((n + 1 + 3) & ~(size_t)3);
    if (q + out->size > c->size) return false;
    out->data = b + q;
    return true;
}

/* ------------------------------------------------------------------ TEXT / MTRL */
bool rs_text_parse(const rs_chunk *c, rs_arena *a, rs_names *out)
{
    if (c->size < 4) return false;
    u32 n = rs_rd32(c->body), q = 4;
    if (n > c->size) return false;
    out->names = RS_NEW(a, const char *, n ? n : 1); out->count = 0;
    if (!out->names) return false;
    for (u32 i = 0; i < n; i++) {
        if (q >= c->size) return false;
        const char *s = (const char *)c->body + q; size_t len = strnlen(s, c->size - q);
        if (q + len >= c->size) return false;
        out->names[out->count++] = s; q += (u32)((len + 1 + 3) & ~(size_t)3);
    }
    return true;
}

bool rs_mtrl_parse(const rs_chunk *c, rs_arena *a, rs_material **out, u32 *count)
{
    if (c->size < 4) return false;
    u32 n = rs_rd32(c->body);
    if ((size_t)n * 36 + 4 > c->size) return false;
    rs_material *m = RS_NEW(a, rs_material, n ? n : 1);
    if (!m) return false;
    for (u32 i = 0; i < n; i++) {
        const u8 *r = c->body + 4 + 36 * i;
        for (int k = 0; k < 6; k++) m[i].tex[k] = (s32)rs_rd32(r + 4 * k);
        m[i].flags = (s32)rs_rd32(r + 24); m[i].mode = (s32)rs_rd32(r + 28); m[i].extra = (s32)rs_rd32(r + 32);
        m[i].texture = -1;
    }
    *out = m; *count = n;
    return true;
}

/* ------------------------------------------------------------------ textures
 * u16 width, u16 height, u8 0, u8 0, u8 format (4 = 4-bit, 5 = 8-bit palette), u8 extra mip levels; the levels, each stored
 * in PSP swizzle order (16-byte x 8-row blocks) when at least 16 bytes wide and 8 rows high; then the palette (RGBA8888). */
bool rs_texture_parse(const rs_rscf *r, rs_arena *a, rs_texture *t)
{
    if (r->type != RS_RSCF_TEXTURE || r->size < 8) return false;
    const u8 *b = r->data;
    memset(t, 0, sizeof *t);
    t->width = rs_rd16(b); t->height = rs_rd16(b + 2);
    u8 fmt = b[6], mips = b[7];
    if (fmt == 4) t->bpp = 4; else if (fmt == 5) t->bpp = 8; else return false;
    if (!t->width || !t->height || mips >= RS_ARRAY_LEN(t->pixels)) return false;
    t->levels = (u8)(mips + 1); t->name = r->name; t->name_hash = rs_hash_name(r->name); t->sub = r->sub;
    u32 p = 8, w = t->width, h = t->height;
    for (u32 l = 0; l < t->levels; l++) {
        u32 wb = w * t->bpp / 8, sz = wb * h;
        if (wb == 0) wb = 1, sz = h;
        if (p + sz > r->size) return false;
        u8 *dst = (u8 *)rs_arena_alloc(a, sz, 16);
        if (!dst) return false;
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
    for (u32 i = 0; i < ncol; i++) t->palette[i] = rs_rd32(b + p + 4 * i);
    return true;
}

void rs_texture_expand(const rs_texture *t, int level, u32 *rgba)
{
    u32 w = t->width >> level, h = t->height >> level;
    if (!w) w = 1;
    if (!h) h = 1;
    const u8 *px = t->pixels[level];
    if (t->bpp == 8) for (u32 i = 0; i < w * h; i++) rgba[i] = t->palette[px[i]];
    else for (u32 i = 0; i < w * h; i++) rgba[i] = t->palette[(px[i >> 1] >> ((i & 1) * 4)) & 15];
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
static s8 snorm8(s16 v) { int r = (v * 127 + (v >= 0 ? 16384 : -16384)) / 32768; return (s8)(r < -127 ? -127 : r > 127 ? 127 : r); }

bool rs_env_parse(const rs_rscf *r, rs_arena *a, rs_level_geom *g)
{
    const u8 *b = r->data; memset(g, 0, sizeof *g);
    if (r->size < 20) return false;
    u32 nopq = rs_rd32(b + 4), nlay = rs_rd32(b + 8), nv = rs_rd32(b + 12), ns = nopq + nlay;
    u32 vo = 20 + 20 * ns;
    if ((size_t)vo + (size_t)nv * 24 > r->size) return false;
    g->src_strips = ns; g->src_verts = nv;

    /* vertices: native layout, engine axes.  A strip's vertex type picks the colour format, so vertices are converted per strip
     * (the game never shares a vertex between the two layers). */
    g->vtx = RS_NEW(a, rs_vtx, nv ? nv : 1); g->nvtx = nv;
    u8 *seen = (u8 *)calloc(nv ? nv : 1, 1);
    u32 maxtri = 0, maxobj = 0;
    if (!g->vtx || !seen) { free(seen); return false; }
    for (u32 s = 0; s < ns; s++) {
        const u8 *sr = b + 20 + 20 * s;
        u32 w = rs_rd32(sr), n = w & 0xFFFF, vt = w >> 16, v0 = rs_rd32(sr + 4), obj = rs_rd32(sr + 16);
        if ((size_t)v0 + n > nv || (vt != 0x1D2 && vt != 0x1DA)) { free(seen); RS_ERROR("env", "strip %u: bad range or vertex type %x", s, vt); return false; }
        if (n >= 3) maxtri += n - 2;
        if (obj + 1 > maxobj) maxobj = obj + 1;
        for (u32 i = v0; i < v0 + n; i++) {
            if (seen[i]) continue;
            seen[i] = 1;
            const u8 *v = b + vo + 24 * i; rs_vtx *o = &g->vtx[i];
            s16 u = (s16)rs_rd16(v), vv = (s16)rs_rd16(v + 2); u16 c = rs_rd16(v + 4);
            f32 gp[3] = { rs_rdf32(v + 12), rs_rdf32(v + 16), rs_rdf32(v + 20) };
            rs_from_game(gp, o->pos);
            o->uv[0] = u / 256.0f; o->uv[1] = vv / 256.0f;
            o->nrm[0] = snorm8((s16)rs_rd16(v + 6)); o->nrm[1] = (s8)-snorm8((s16)rs_rd16(v + 8)); o->nrm[2] = snorm8((s16)rs_rd16(v + 10)); o->nrm[3] = 0;
            if (vt == 0x1DA) { o->col[0] = (u8)((c & 15) * 17); o->col[1] = (u8)(((c >> 4) & 15) * 17); o->col[2] = (u8)(((c >> 8) & 15) * 17); o->col[3] = (u8)((c >> 12) * 17); }
            else { o->col[0] = (u8)((c & 31) * 255 / 31); o->col[1] = (u8)(((c >> 5) & 63) * 255 / 63); o->col[2] = (u8)((c >> 11) * 255 / 31); o->col[3] = 255; }
        }
    }
    free(seen);
    if (maxobj > 0xFFFF) return false;

    /* strips -> triangles (degenerate joins dropped), winding reversed for the mirrored axes, then grouped */
    tri_rec *tr = (tri_rec *)malloc(sizeof(tri_rec) * (maxtri ? maxtri : 1)); u32 nt = 0;
    if (!tr) return false;
    u32 nmat_seen = 0;
    for (u32 s = 0; s < ns; s++) {
        const u8 *sr = b + 20 + 20 * s;
        u32 n = rs_rd32(sr) & 0xFFFF, v0 = rs_rd32(sr + 4), mat = rs_rd32(sr + 12), obj = rs_rd32(sr + 16), layer = s >= nopq;
        if (mat != 0xFFFFFFFF && mat + 1 > nmat_seen) nmat_seen = mat + 1;
        for (u32 k = 0; k + 2 < n; k++) {
            u32 x = v0 + k, y = v0 + k + 1, z = v0 + k + 2;
            if (k & 1) { u32 t = x; x = y; y = t; }
            const f32 *px = g->vtx[x].pos, *py = g->vtx[y].pos, *pz = g->vtx[z].pos;
            if (!memcmp(px, py, 12) || !memcmp(py, pz, 12) || !memcmp(px, pz, 12)) continue;
            /* key: layer (1 bit) | object (16 bits) | material (15 bits; 0x7FFF = none) */
            u32 mk = mat == 0xFFFFFFFF ? 0x7FFF : (mat & 0x7FFF);
            tr[nt].key = (layer << 31) | (obj << 15) | mk; tr[nt].ord = nt; tr[nt].a = x; tr[nt].b = z; tr[nt].c = y; nt++;
        }
    }
    qsort(tr, nt, sizeof *tr, tri_cmp);
    g->idx = RS_NEW(a, u32, nt ? nt * 3 : 1); g->nidx = nt * 3;
    u32 nb = 0;
    for (u32 i = 0; i < nt; i++) if (i == 0 || tr[i].key != tr[i - 1].key) nb++;
    g->batch = RS_NEW(a, rs_batch, nb ? nb : 1); g->nobj = maxobj;
    g->obj_bounds = RS_NEW(a, rs_aabb, maxobj ? maxobj : 1);
    if (!g->idx || !g->batch || !g->obj_bounds) { free(tr); return false; }
    for (u32 o = 0; o < maxobj; o++) for (int k = 0; k < 3; k++) { g->obj_bounds[o].min[k] = 1e30f; g->obj_bounds[o].max[k] = -1e30f; }
    for (u32 i = 0; i < nt; i++) {
        if (i == 0 || tr[i].key != tr[i - 1].key) {
            rs_batch *bt = &g->batch[g->nbatch++];
            u32 k = tr[i].key, mk = k & 0x7FFF;
            bt->layer = (u8)(k >> 31); bt->object = (u16)((k >> 15) & 0xFFFF); bt->material = mk == 0x7FFF ? 0xFFFFFFFFu : mk;
            bt->first = i * 3; bt->count = 0;
        }
        rs_batch *bt = &g->batch[g->nbatch - 1];
        u32 *ix = g->idx + i * 3; ix[0] = tr[i].a; ix[1] = tr[i].b; ix[2] = tr[i].c; bt->count += 3;
        rs_aabb *bb = &g->obj_bounds[bt->object];
        for (int j = 0; j < 3; j++) for (int k = 0; k < 3; k++) {
            f32 v = g->vtx[ix[j]].pos[k];
            if (v < bb->min[k]) bb->min[k] = v;
            if (v > bb->max[k]) bb->max[k] = v;
        }
    }
    free(tr);
    (void)nmat_seen;
    return true;
}

/* ------------------------------------------------------------------ level file */
s32 rs_level_find_texture(const rs_level *l, const char *name)
{
    u32 h = rs_hash_name(name);
    for (u32 i = 0; i < l->ntex; i++) if (l->tex[i].name_hash == h) return (s32)i;
    return -1;
}

bool rs_level_load(const char *path, rs_arena *a, rs_level *l)
{
    memset(l, 0, sizeof *l);
    if (!rs_file_read(path, a, &l->file) || !rs_asura_check(&l->file)) { RS_ERROR("level", "%s is not a level file", path); return false; }
    rs_chunk c; u32 pos = 8, ntexres = 0;
    while (rs_asura_next(&l->file, &pos, &c)) {                  /* pass 1: counts */
        rs_rscf r; l->nchunks++;
        if (rs_rscf_parse(&c, &r) && r.type == RS_RSCF_TEXTURE) ntexres++;
    }
    l->tex = RS_NEW(a, rs_texture, ntexres ? ntexres : 1);
    if (!l->tex) return false;
    /* pass 2.  The environment's material list is the first MTRL with more than 8 entries that follows a TEXT list naming
     * \environments\ textures (the same rule as tools/asura/maptool.py). */
    rs_names last_text = { 0 }; bool have_env_mtrl = false, have_env = false;
    pos = 8;
    while (rs_asura_next(&l->file, &pos, &c)) {
        u32 tag = rs_chunk_tag(&c); rs_rscf r;
        if (tag == RS_TAG('T', 'E', 'X', 'T')) rs_text_parse(&c, a, &last_text);
        else if (tag == RS_TAG('M', 'T', 'R', 'L') && !have_env_mtrl && last_text.count) {
            bool envs = false;
            for (u32 i = 0; i < last_text.count && !envs; i++) envs = strstr(last_text.names[i], "environments") != NULL;
            rs_material *m; u32 n;
            if (envs && rs_mtrl_parse(&c, a, &m, &n) && n > 8) { l->mat = m; l->nmat = n; l->env_names = last_text; have_env_mtrl = true; }
        } else if (rs_rscf_parse(&c, &r)) {
            if (r.type == RS_RSCF_TEXTURE) {
                if (rs_texture_parse(&r, a, &l->tex[l->ntex])) l->ntex++; else l->tex_unsupported++;
            } else if (c.version == 1 && r.type == RS_RSCF_MESH && !strcmp(r.name, "Env") && !have_env) {
                have_env = rs_env_parse(&r, a, &l->geom);
                if (!have_env) RS_ERROR("level", "level geometry did not parse");
            }
        }
    }
    for (u32 i = 0; i < l->nmat; i++) {                            /* materials -> textures ("\graphics" + the TEXT name) */
        s32 ti = l->mat[i].tex[0];
        if (ti < 0 || (u32)ti >= l->env_names.count) continue;
        char nm[512]; snprintf(nm, sizeof nm, "\\graphics%s", l->env_names.names[ti]);
        l->mat[i].texture = rs_level_find_texture(l, nm);
    }
    return have_env && have_env_mtrl;
}
