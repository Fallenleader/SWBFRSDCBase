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

static void mat34(ak_quat q, const f32 *t, f32 *r)
{
    f32 x = q.x, y = q.y, z = q.z, w = q.w;
    r[0] = 1 - 2 * (y * y + z * z); r[1] = 2 * (x * y - z * w);     r[2] = 2 * (x * z + y * w);     r[3] = t[0];
    r[4] = 2 * (x * y + z * w);     r[5] = 1 - 2 * (x * x + z * z); r[6] = 2 * (y * z - x * w);     r[7] = t[1];
    r[8] = 2 * (x * z - y * w);     r[9] = 2 * (y * z + x * w);     r[10] = 1 - 2 * (x * x + y * y); r[11] = t[2];
}

void ak_skeleton_pose_matrices(const ak_skeleton *s, const ak_quat *lq, const f32 (*lt)[3], f32 (*m)[12])
{
    ak_quat wq[512]; f32 wt[512][3];
    for (u32 i = 0; i < s->nbones && i < 512; i++) {
        int p = s->parent[i];
        if (p < 0) { wq[i] = lq[i]; memcpy(wt[i], lt[i], 12); }
        else {
            f32 r3[3]; qrot(wq[p], lt[i], r3);
            for (int k = 0; k < 3; k++) wt[i][k] = wt[p][k] + r3[k];
            wq[i] = qmul(wq[p], lq[i]);
        }
        mat34(wq[i], wt[i], m[i]);
    }
}

void ak_skeleton_pose_matrices_pitch(const ak_skeleton *s, const ak_quat *lq, const f32 (*lt)[3], const f32 *bp, f32 (*m)[12])
{
    ak_quat wq[512]; f32 wt[512][3];
    for (u32 i = 0; i < s->nbones && i < 512; i++) {
        int p = s->parent[i];
        if (p < 0) { wq[i] = lq[i]; memcpy(wt[i], lt[i], 12); }
        else {
            f32 r3[3]; qrot(wq[p], lt[i], r3);
            for (int k = 0; k < 3; k++) wt[i][k] = wt[p][k] + r3[k];
            wq[i] = qmul(wq[p], lq[i]);
        }
        if (bp && bp[i] != 0) { f32 h = bp[i] * 0.5f; ak_quat r = { sinf(h), 0, 0, cosf(h) }; wq[i] = qmul(r, wq[i]); }
        mat34(wq[i], wt[i], m[i]);
    }
}

static ak_quat q_unpack(u32 w)
{
    f32 f[3] = { (f32)((w >> 22) & 1023), (f32)((w >> 12) & 1023), (f32)((w >> 2) & 1023) }, g[4];
    const f32 k = 0.70710678f * 2.0f / 1023.0f;
    for (int i = 0; i < 3; i++) f[i] = f[i] * k - 0.70710678f;
    int d = (int)((w & 3) + 3) & 3;
    for (int i = 0; i < 3; i++) g[(d + 1 + i) & 3] = f[i];
    f32 s2 = 1.0f - f[0] * f[0] - f[1] * f[1] - f[2] * f[2];
    g[d] = s2 > 0 ? sqrtf(s2) : 0.0f;
    return q_from_game(g[0], g[1], g[2], g[3]);
}
static ak_quat q_nlerp(ak_quat a, ak_quat b, f32 t)
{
    f32 dot = a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w, s = dot < 0 ? -1.0f : 1.0f;
    ak_quat r = { a.x + (s * b.x - a.x) * t, a.y + (s * b.y - a.y) * t, a.z + (s * b.z - a.z) * t, a.w + (s * b.w - a.w) * t };
    f32 l = sqrtf(r.x * r.x + r.y * r.y + r.z * r.z + r.w * r.w);
    if (l > 0) { r.x /= l; r.y /= l; r.z /= l; r.w /= l; }
    return r;
}

void ak_anim_sample(const ak_anim_clip *c, const ak_skeleton *s, f32 t, bool loop, ak_quat *lq, f32 (*lt)[3])
{
    f32 u = c->duration > 0 ? t / c->duration : 0;
    if (loop) u -= floorf(u);
    else u = u < 0 ? 0 : u > 1 ? 1 : u;
    f32 tu = u * 65535.0f;
    for (u32 b = 0; b < s->nbones; b++) {
        lq[b] = s->bind_q[b]; memcpy(lt[b], s->bind_t[b], 12);
        if (b >= c->nbones) continue;
        const ak_anim_channel *ch = &c->chan[b];
        if (!ch->rot_count) continue;
        u32 k0 = 0, k1 = 0; f32 f = 0;
        if (ch->rot_count) {
            const u16 *tm = c->rtime + ch->rot_first; u32 n = ch->rot_count;
            if (n == 1 || tu <= tm[0]) k0 = k1 = 0;
            else if (tu >= tm[n - 1]) k0 = k1 = n - 1;
            else {
                u32 lo = 0, hi = n - 1;
                while (hi - lo > 1) { u32 mid = (lo + hi) / 2; if (tm[mid] <= tu) lo = mid; else hi = mid; }
                k0 = lo; k1 = hi; f = (tu - tm[lo]) / (f32)(tm[hi] - tm[lo] ? tm[hi] - tm[lo] : 1);
            }
            lq[b] = q_nlerp(c->rot[ch->rot_first + k0], c->rot[ch->rot_first + k1], f);
        }
        if (ch->pos_count == 1) memcpy(lt[b], c->pos[ch->pos_first], 12);
        else if (ch->pos_count > 1) {
            u32 p0, p1; f32 pf;
            if (ch->pos_count == ch->rot_count) { p0 = k0; p1 = k1; pf = f; }
            else { f32 x = u * (f32)(ch->pos_count - 1); p0 = (u32)x; p1 = p0 + 1 < ch->pos_count ? p0 + 1 : p0; pf = x - (f32)p0; }
            const f32 *a = c->pos[ch->pos_first + p0], *bq = c->pos[ch->pos_first + p1];
            for (int k = 0; k < 3; k++) lt[b][k] = a[k] + (bq[k] - a[k]) * pf;
        }
    }
}

/* HCAN v5 (layout from the game's reader, func_08827220): header { u32 bones, f32 duration, f32, f32, u32 rotation keys,
 * u32 position keys, u32 extra count }, name (NUL, padded to 4), channel table (u16 x4 per channel, when flag 0x20), packed rotations
 * (u32 x rot keys), key times (u16 x rot keys), positions (f32 x3 x pos keys), per-bone lengths (f32 x bones, flag 0x1),
 * extra (12 x count), box (24, flag 0x8), f32, u32 event count + 8 per event */
static bool clip_parse(const ak_chunk *c, ak_arena *a, ak_anim_clip *k)
{
    const u8 *b = c->body; memset(k, 0, sizeof *k);
    if (c->version != 5 || c->size < 32 || !(c->flags & 0x20)) return false;
    u32 nb = ak_rd32(b), A = ak_rd32(b + 16), B = ak_rd32(b + 20);
    const char *name = (const char *)b + 28; size_t nl = strnlen(name, c->size - 28);
    u32 o = 28 + (u32)((nl + 1 + 3) & ~(size_t)3);
    u32 nch = nb + ((c->flags >> 4) & 1);
    if (nb > 512 || (size_t)o + 8u * nch + 6u * A + 12u * B > c->size) return false;
    k->name = name; k->name_hash = ak_hash_name(name); k->nbones = nb; k->nchannels = nch; k->flags = c->flags;
    k->duration = ak_rdf32(b + 4); k->nrot = A; k->npos = B;
    k->chan = AK_NEW(a, ak_anim_channel, nch ? nch : 1); k->rot = AK_NEW(a, ak_quat, A ? A : 1); k->rtime = AK_NEW(a, u16, A ? A : 1);
    k->pos = (f32 (*)[3])ak_arena_alloc(a, 12u * (B ? B : 1), 4);
    if (!k->chan || !k->rot || !k->rtime || !k->pos) return false;
    for (u32 i = 0; i < nch; i++) {
        const u8 *r = b + o + 8 * i;
        k->chan[i].rot_count = ak_rd16(r); k->chan[i].rot_first = ak_rd16(r + 2); k->chan[i].pos_count = ak_rd16(r + 4); k->chan[i].pos_first = ak_rd16(r + 6);
        /* a channel without rotation keys is not animated by this clip (upper-body overlays such as shooting or reloading leave the
         * other bones' entries unfilled): it keeps the pose underneath */
        if (!k->chan[i].rot_count) { k->chan[i].pos_count = 0; k->chan[i].rot_first = k->chan[i].pos_first = 0; }
        if ((u32)k->chan[i].rot_first + k->chan[i].rot_count > A || (u32)k->chan[i].pos_first + k->chan[i].pos_count > B) return false;
    }
    o += 8 * nch;
    for (u32 i = 0; i < A; i++) k->rot[i] = q_unpack(ak_rd32(b + o + 4 * i));
    o += 4 * A;
    for (u32 i = 0; i < A; i++) k->rtime[i] = ak_rd16(b + o + 2 * i);
    o += 2 * A;
    for (u32 i = 0; i < B; i++) { f32 g[3] = { ak_rdf32(b + o + 12 * i), ak_rdf32(b + o + 12 * i + 4), ak_rdf32(b + o + 12 * i + 8) }; ak_from_game(g, k->pos[i]); }
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
    m->hash = ak_rd32(b); m->nparts = np; m->parts = AK_NEW(a, ak_model_part, np ? np : 1);
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

const ak_marker *ak_model_marker(const ak_model *m, const char *name)
{
    u32 h = ak_hash_name(name);
    for (u32 i = 0; i < m->nmarkers; i++) if (m->markers[i].hash == h) return &m->markers[i];
    return NULL;
}
void ak_marker_matrix(const f32 B[12], const ak_marker *mk, f32 O[12])
{
    const f32 *M = mk->m;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) O[r * 4 + c] = B[r * 4 + 0] * M[c] + B[r * 4 + 1] * M[4 + c] + B[r * 4 + 2] * M[8 + c];
        O[r * 4 + 3] += B[r * 4 + 3];
    }
}
static void markers_parse(const ak_chunk *c, ak_arena *a, ak_model_set *out)
{
    const u8 *b = c->body; u32 n = c->size;
    if (n < 8) return;
    u32 cnt = ak_rd32(b);
    const char *mname = (const char *)b + 4; size_t ml = strnlen(mname, n - 4);
    u32 o = 4 + (u32)((ml + 1 + 3) & ~(size_t)3);
    if (cnt == 0 || cnt > 256 || o > n) return;
    ak_marker *mk = AK_NEW(a, ak_marker, cnt);
    if (!mk) return;
    static const f32 S[3] = { 1, -1, -1 };
    for (u32 k = 0; k < cnt; k++) {
        if (o + 52 > n) return;
        f32 t[3], R[9];
        for (int i = 0; i < 3; i++) t[i] = ak_rdf32(b + o + 4 * i);
        for (int i = 0; i < 9; i++) R[i] = ak_rdf32(b + o + 12 + 4 * i);
        mk[k].bone = (u16)ak_rd32(b + o + 48);
        const char *nm = (const char *)b + o + 52; size_t nl = strnlen(nm, n - o - 52);
        if (o + 52 + nl >= n) return;
        mk[k].name = nm; mk[k].hash = ak_hash_name(nm);
        for (int r = 0; r < 3; r++) { for (int q = 0; q < 3; q++) mk[k].m[r * 4 + q] = S[r] * R[r * 3 + q] * S[q]; mk[k].m[r * 4 + 3] = S[r] * t[r]; }
        o += 52 + (u32)((nl + 1 + 3) & ~(size_t)3);
    }
    u32 h = ak_hash_name(mname);
    for (u32 i = 0; i < out->nmodels; i++)
        if (out->models[i].base_hash == h) { out->models[i].markers = mk; out->models[i].nmarkers = cnt; }
}

bool ak_models_load(const ak_level *l, ak_arena *a, ak_model_set *out)
{
    memset(out, 0, sizeof *out);
    ak_chunk c; u32 pos = 8, nm = 0, ns = 0;
    while (ak_asura_next(&l->file, &pos, &c)) {
        ak_rscf r;
        if (ak_chunk_tag(&c) == AK_TAG('H', 'S', 'K', 'N') && c.version == 8) ns++;
        else if (ak_chunk_tag(&c) == AK_TAG('H', 'C', 'A', 'N')) out->nclips++;
        else if (c.version == 1 && ak_rscf_parse(&c, &r) && r.type == AK_RSCF_MESH && r.sub == 5) nm++;
    }
    u32 ncl = out->nclips; out->nclips = 0;
    out->models = AK_NEW(a, ak_model, nm ? nm : 1); out->skels = AK_NEW(a, ak_skeleton, ns ? ns : 1); out->clips = AK_NEW(a, ak_anim_clip, ncl ? ncl : 1);
    if (!out->models || !out->skels || !out->clips) return false;
    ak_names text = { 0 }; ak_material *mats = NULL; u32 nmats = 0;
    pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        u32 tag = ak_chunk_tag(&c); ak_rscf r;
        if (tag == AK_TAG('T', 'E', 'X', 'T')) ak_text_parse(&c, a, &text);
        else if (tag == AK_TAG('M', 'T', 'R', 'L')) { if (!ak_mtrl_parse(&c, a, &mats, &nmats)) { mats = NULL; nmats = 0; } }
        else if (tag == AK_TAG('H', 'S', 'K', 'N') && c.version == 8) { if (skel_parse(&c, a, &out->skels[out->nskels])) out->nskels++; }
        else if (tag == AK_TAG('H', 'C', 'A', 'N')) { if (clip_parse(&c, a, &out->clips[out->nclips])) out->nclips++; }
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
    pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) if (ak_chunk_tag(&c) == AK_TAG('H', 'M', 'P', 'T') && c.version == 1) markers_parse(&c, a, out);
    for (u32 i = 0; i < out->nmodels; i++) {
        ak_model *m = &out->models[i]; m->lod_next = -1;
        for (u32 j = 0; j < out->nmodels; j++)
            if (out->models[j].base_hash == m->base_hash && out->models[j].lod == m->lod + 1) { m->lod_next = (s32)j; break; }
    }
    return true;
}
