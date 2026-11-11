#include "model.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static ak_quat qmul(ak_quat a, ak_quat b)
{
    ak_quat r = { a.w * b.x + a.x * b.w + a.y * b.z - a.z * b.y, a.w * b.y - a.x * b.z + a.y * b.w + a.z * b.x,
                  a.w * b.z + a.x * b.y - a.y * b.x + a.z * b.w, a.w * b.w - a.x * b.x - a.y * b.y - a.z * b.z };
    return r;
}
static void qrot(ak_quat q, const f32 *v, f32 *o)
{
    f32 ix = q.w * v[0] + q.y * v[2] - q.z * v[1], iy = q.w * v[1] + q.z * v[0] - q.x * v[2];
    f32 iz = q.w * v[2] + q.x * v[1] - q.y * v[0], iw = -q.x * v[0] - q.y * v[1] - q.z * v[2];
    o[0] = ix * q.w - iw * q.x - iy * q.z + iz * q.y;
    o[1] = iy * q.w - iw * q.y - iz * q.x + ix * q.z;
    o[2] = iz * q.w - iw * q.z - ix * q.y + iy * q.x;
}
/* the axis change is a half turn about X (asura.h): a rotation quaternion's axis turns with it */
static ak_quat q_from_game(f32 x, f32 y, f32 z, f32 w) { ak_quat q = { x, -y, -z, w }; return q; }

/* HSKN v8: u32 0, u32 bone count, name (NUL, padded to 4), u32 parent[count] (the root's entry is 0), count x { f32 t[3], q[4] } */
static bool skel_parse(const ak_chunk *c, ak_arena *a, ak_skeleton *s)
{
    const u8 *b = c->body; memset(s, 0, sizeof *s);
    if (c->size < 12) return false;
    u32 n = ak_rd32(b + 4);
    const char *name = (const char *)b + 8; size_t nl = strnlen(name, c->size - 8);
    u32 o = 8 + (u32)((nl + 1 + 3) & ~(size_t)3);
    if (n == 0 || n > 512 || (size_t)o + 4u * n + 28u * n > c->size) return false;
    s->name = name; s->name_hash = ak_hash_name(name); s->nbones = n;
    s->parent = AK_NEW(a, s16, n); s->bind_t = (f32 (*)[3])ak_arena_alloc(a, 12u * n, 4); s->bind_q = AK_NEW(a, ak_quat, n);
    s->world_t = (f32 (*)[3])ak_arena_alloc(a, 12u * n, 4); s->world_q = AK_NEW(a, ak_quat, n);
    if (!s->parent || !s->bind_t || !s->bind_q || !s->world_t || !s->world_q) return false;
    for (u32 i = 0; i < n; i++) { u32 p = ak_rd32(b + o + 4 * i); s->parent[i] = (s16)(i == 0 || p >= i ? -1 : (s32)p); }
    o += 4 * n;
    for (u32 i = 0; i < n; i++) {
        const u8 *r = b + o + 28 * i;
        f32 g[3] = { ak_rdf32(r), ak_rdf32(r + 4), ak_rdf32(r + 8) };
        ak_from_game(g, s->bind_t[i]);
        s->bind_q[i] = q_from_game(ak_rdf32(r + 12), ak_rdf32(r + 16), ak_rdf32(r + 20), ak_rdf32(r + 24));
        if (s->parent[i] < 0) { memcpy(s->world_t[i], s->bind_t[i], 12); s->world_q[i] = s->bind_q[i]; }
        else {
            int p = s->parent[i]; f32 r3[3];
            qrot(s->world_q[p], s->bind_t[i], r3);
            for (int k = 0; k < 3; k++) s->world_t[i][k] = s->world_t[p][k] + r3[k];
            s->world_q[i] = qmul(s->world_q[p], s->bind_q[i]);
        }
    }
    return true;
}

void ak_skeleton_bind_matrices(const ak_skeleton *s, f32 (*m)[12])
{
    for (u32 i = 0; i < s->nbones; i++) {
        ak_quat q = s->world_q[i]; f32 x = q.x, y = q.y, z = q.z, w = q.w;
        f32 *r = m[i];
        r[0] = 1 - 2 * (y * y + z * z); r[1] = 2 * (x * y - z * w);     r[2] = 2 * (x * z + y * w);     r[3] = s->world_t[i][0];
        r[4] = 2 * (x * y + z * w);     r[5] = 1 - 2 * (x * x + z * z); r[6] = 2 * (y * z - x * w);     r[7] = s->world_t[i][1];
        r[8] = 2 * (x * z - y * w);     r[9] = 2 * (y * z + x * w);     r[10] = 1 - 2 * (x * x + y * y); r[11] = s->world_t[i][2];
    }
}

static s8 snorm8f(f32 v) { int r = (int)lrintf(v * 127.0f); return (s8)(r < -127 ? -127 : r > 127 ? 127 : r); }

/* mesh (RSCF type 0 sub 5): u32 name hash, u32 parts, u32 vertices, u32 indices; parts { u32 material, u32 triangles (strip),
 * u32 first vertex, u32 first index }; vertices 32 bytes { f32 u, v, nx, ny, nz, x, y, z }; u16 strip indices relative to the part's
 * first vertex */
static bool mesh_parse(const ak_rscf *r, ak_arena *a, ak_model *m, const ak_level *l, const ak_names *tex_names,
                       const ak_material *mats, u32 nmats, const ak_skeleton *sk)
{
    const u8 *b = r->data;
    if (r->size < 16) return false;
    u32 np = ak_rd32(b + 4), nv = ak_rd32(b + 8), ni = ak_rd32(b + 12);
    u32 vo = 16 + 16 * np, io = vo + 32 * nv;
    if (np > 256 || (size_t)io + 2u * ni > r->size) return false;
    m->nparts = np; m->parts = AK_NEW(a, ak_model_part, np ? np : 1);
    m->vtx = AK_NEW(a, ak_vtx, nv ? nv : 1); m->nvtx = nv;
    u32 tris_total = 0;                                                     /* strips -> lists: three indices per triangle */
    for (u32 pi = 0; pi < np; pi++) tris_total += ak_rd32(b + 16 + 16 * pi + 4);
    if (tris_total > 4u * ni + 16) return false;
    m->idx = AK_NEW(a, u32, tris_total ? 3 * tris_total : 1);
    if (!m->parts || !m->vtx || !m->idx) return false;
    for (u32 i = 0; i < nv; i++) {
        const u8 *v = b + vo + 32 * i; ak_vtx *o = &m->vtx[i];
        f32 n[3] = { ak_rdf32(v + 8), ak_rdf32(v + 12), ak_rdf32(v + 16) }, p[3] = { ak_rdf32(v + 20), ak_rdf32(v + 24), ak_rdf32(v + 28) }, e[3];
        ak_from_game(p, o->pos); ak_from_game(n, e);
        o->uv[0] = ak_rdf32(v); o->uv[1] = ak_rdf32(v + 4);
        o->nrm[0] = snorm8f(e[0]); o->nrm[1] = snorm8f(e[1]); o->nrm[2] = snorm8f(e[2]); o->nrm[3] = 0;
        o->col[0] = o->col[1] = o->col[2] = 128; o->col[3] = 255;          /* 128 = full brightness (the level's convention) */
    }
    for (int k = 0; k < 3; k++) { m->bmin[k] = 1e30f; m->bmax[k] = -1e30f; }
    f32 r2 = 0;
    for (u32 pi = 0; pi < np; pi++) {
        const u8 *pr = b + 16 + 16 * pi;
        u32 mat = ak_rd32(pr), nt = ak_rd32(pr + 4), v0 = ak_rd32(pr + 8), i0 = ak_rd32(pr + 12);
        u32 v1 = pi + 1 < np ? ak_rd32(pr + 16 + 8) : nv;
        ak_model_part *pt = &m->parts[pi];
        pt->bone = (u16)(sk && pi < sk->nbones ? pi : 0); pt->texture = -1; pt->flags = 0;
        if (mat != 0xFFFFFFFFu && mat < nmats) {
            pt->flags = mats[mat].flags;
            s32 ti = mats[mat].tex[0];
            if (ti >= 0 && tex_names && (u32)ti < tex_names->count) {
                char nm[512]; snprintf(nm, sizeof nm, "\\graphics%s", tex_names->names[ti]);
                pt->texture = (s16)ak_level_find_texture(l, nm);
            }
        }
        pt->first = m->nidx;
        if ((nt && (size_t)i0 + nt + 2 > ni) || v1 > nv || v0 > v1) return false;
        for (u32 k = 0; k < nt; k++) {
            u32 x = v0 + ak_rd16(b + io + 2 * (i0 + k)), y = v0 + ak_rd16(b + io + 2 * (i0 + k + 1)), z = v0 + ak_rd16(b + io + 2 * (i0 + k + 2));
            if (x == y || y == z || x == z || x >= nv || y >= nv || z >= nv) continue;
            if (k & 1) { u32 t = x; x = y; y = t; }
            m->idx[m->nidx++] = x; m->idx[m->nidx++] = y; m->idx[m->nidx++] = z;
        }
        pt->count = m->nidx - pt->first;
        if (mat == 0xFFFFFFFFu) pt->count = 0;                               /* invisible helpers (seats, invisible_skin) */
        /* bounds of the bind pose */
        ak_quat q = { 0, 0, 0, 1 }; f32 t[3] = { 0, 0, 0 };
        if (sk && pi < sk->nbones) { q = sk->world_q[pi]; memcpy(t, sk->world_t[pi], 12); }
        for (u32 i = v0; i < v1; i++) {
            f32 w[3]; qrot(q, m->vtx[i].pos, w);
            for (int k = 0; k < 3; k++) { w[k] += t[k]; if (w[k] < m->bmin[k]) m->bmin[k] = w[k]; if (w[k] > m->bmax[k]) m->bmax[k] = w[k]; }
            f32 d = w[0] * w[0] + w[1] * w[1] + w[2] * w[2]; if (d > r2) r2 = d;
        }
    }
    m->radius = sqrtf(r2);
    return true;
}

s32 ak_models_find(const ak_model_set *s, const char *name)
{
    u32 h = ak_hash_name(name);
    for (u32 i = 0; i < s->nmodels; i++) if (s->models[i].lod == 0 && s->models[i].base_hash == h) return (s32)i;
    return -1;
}

bool ak_models_load(const ak_level *l, ak_arena *a, ak_model_set *out)
{
    memset(out, 0, sizeof *out);
    ak_chunk c; u32 pos = 8, nm = 0, ns = 0;
    while (ak_asura_next(&l->file, &pos, &c)) {
        ak_rscf r;
        if (ak_chunk_tag(&c) == AK_TAG('H', 'S', 'K', 'N') && c.version == 8) ns++;
        else if (c.version == 1 && ak_rscf_parse(&c, &r) && r.type == AK_RSCF_MESH && r.sub == 5) nm++;
    }
    out->models = AK_NEW(a, ak_model, nm ? nm : 1); out->skels = AK_NEW(a, ak_skeleton, ns ? ns : 1);
    if (!out->models || !out->skels) return false;
    ak_names text = { 0 }; ak_material *mats = NULL; u32 nmats = 0;
    pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        u32 tag = ak_chunk_tag(&c); ak_rscf r;
        if (tag == AK_TAG('T', 'E', 'X', 'T')) ak_text_parse(&c, a, &text);
        else if (tag == AK_TAG('M', 'T', 'R', 'L')) { if (!ak_mtrl_parse(&c, a, &mats, &nmats)) { mats = NULL; nmats = 0; } }
        else if (tag == AK_TAG('H', 'S', 'K', 'N') && c.version == 8) { if (skel_parse(&c, a, &out->skels[out->nskels])) out->nskels++; }
        else if (c.version == 1 && ak_rscf_parse(&c, &r) && r.type == AK_RSCF_MESH && r.sub == 5) {
            ak_model *m = &out->models[out->nmodels]; memset(m, 0, sizeof *m);
            const char *base = r.name; m->lod = 0;
            if (base[0] == 'L' && base[1] >= '1' && base[1] <= '9' && base[2] == '#') { m->lod = (u8)(base[1] - '0'); base += 3; }
            m->name = r.name; m->base_hash = ak_hash_name(base); m->skeleton = -1;
            u32 bh = m->base_hash;
            for (u32 i = out->nskels; i-- > 0;) if (out->skels[i].name_hash == bh) { m->skeleton = (s32)i; break; }
            if (mesh_parse(&r, a, m, l, &text, mats, nmats, m->skeleton >= 0 ? &out->skels[m->skeleton] : NULL)) out->nmodels++;
            else AK_WARN("model", "%s did not parse", r.name);
        }
    }
    return true;
}
