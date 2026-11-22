#include "ak_collision.h"
#include "core/ak_settings.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* PHEN (layout: tools/asura/phen.py): u32 objects, vertices, quads, flag entries, material entries, node units; objects 52 bytes
 * { u32 first quad, first vertex, quads, nodes, f32 bounds[6], u32 first flag, first material, u16 bits (1 one flag, 2 one
 * material), u16 }; vertices f32 x3; quads u16 a, b, c, d (triangles abc, cda; d = 0xFFFF: abc only); features u8 per quad
 * (padded to 4); flags u16 (padded); [chunk flag 1: u32 per material entry]; materials u16 (padded); root; nodes. */
static void sub(const f32 *a, const f32 *b, f32 *o) { o[0] = a[0] - b[0]; o[1] = a[1] - b[1]; o[2] = a[2] - b[2]; }
static void cross(const f32 *a, const f32 *b, f32 *o) { o[0] = a[1] * b[2] - a[2] * b[1]; o[1] = a[2] * b[0] - a[0] * b[2]; o[2] = a[0] * b[1] - a[1] * b[0]; }
static f32 dot(const f32 *a, const f32 *b) { return a[0] * b[0] + a[1] * b[1] + a[2] * b[2]; }

/* ---- BVH build: median split on the longest axis of the centroids, leaves of up to 4 triangles */
typedef struct { f32 mn[3], mx[3]; u32 i; } prim;   /* (the centre: PC(p, k), worked out where used) */
#define PC(p, k) (((p)->mn[k] + (p)->mx[k]) * 0.5f)
static int g_axis;
static int prim_cmp(const void *x, const void *y)
{
    f32 a = PC((const prim *)x, g_axis), b = PC((const prim *)y, g_axis);
    return a < b ? -1 : a > b ? 1 : 0;
}
static u32 build(ak_collision *c, prim *p, u32 n, u32 *next)
{
    u32 id = (*next)++; ak_col_node *nd = &c->node[id];
    for (int k = 0; k < 3; k++) { nd->min[k] = 1e30f; nd->max[k] = -1e30f; }
    f32 cmn[3] = { 1e30f, 1e30f, 1e30f }, cmx[3] = { -1e30f, -1e30f, -1e30f };
    for (u32 i = 0; i < n; i++)
        for (int k = 0; k < 3; k++) {
            nd->min[k] = fminf(nd->min[k], p[i].mn[k]); nd->max[k] = fmaxf(nd->max[k], p[i].mx[k]);
            cmn[k] = fminf(cmn[k], PC(&p[i], k)); cmx[k] = fmaxf(cmx[k], PC(&p[i], k));
        }
    if (n <= 4) { nd->count = n; nd->first_or_right = 0xFFFFFFFFu; return id; }   /* leaf: triangles placed in order below */
    int ax = 0; for (int k = 1; k < 3; k++) if (cmx[k] - cmn[k] > cmx[ax] - cmn[ax]) ax = k;
    g_axis = ax; qsort(p, n, sizeof *p, prim_cmp);
    u32 h = n / 2;
    nd->count = 0;
    build(c, p, h, next);
    u32 r = build(c, p + h, n - h, next);
    c->node[id].first_or_right = r;
    return id;
}
static u32 node_count(u32 n) { return n <= 4 ? 1 : 1 + node_count(n / 2) + node_count(n - n / 2); }   /* build()'s, exactly */
/* leaves keep their primitives in prim order: assign each leaf its first index by walking the tree in the same order */
static void assign(ak_collision *c, u32 id, u32 *cursor)
{
    ak_col_node *nd = &c->node[id];
    if (nd->count) { nd->first_or_right = *cursor; *cursor += nd->count; return; }
    assign(c, id + 1, cursor); assign(c, nd->first_or_right, cursor);
}

bool ak_collision_load(const ak_level *l, ak_arena *a, ak_collision *out)
{
    memset(out, 0, sizeof *out);
    ak_chunk ch; u32 pos = 8; bool found = false;
    while (ak_asura_next(&l->file, &pos, &ch)) if (ak_chunk_tag(&ch) == AK_TAG('P', 'H', 'E', 'N')) { found = true; break; }
    ak_chunk stub = ch;                                                  /* (a streamed level's: read to count, and again to build) */
    if (!found || !ak_chunk_load(&ch) || ch.size < 24) return false;
    const u8 *b = ch.body;
    u32 nobj = ak_rd32(b), nv = ak_rd32(b + 4), nq = ak_rd32(b + 8), nx = ak_rd32(b + 12), nm = ak_rd32(b + 16);
    size_t o = 24, oo = o; o += 52u * nobj;
    size_t ov = o; o += 12u * nv;
    size_t oq = o; o += 8u * nq;
    o += nq; o += (4 - nq % 4) % 4;
    size_t of = o; o += 2u * nx; o += (4 - (2u * nx) % 4) % 4;
    if (ch.flags & 1) o += 4u * nm;
    size_t om = o; o += 2u * nm;
    if (o > ch.size) { AK_ERROR("col", "PHEN shorter than its counts"); return false; }
    u32 ntri = 0;
    for (u32 i = 0; i < nobj; i++) {
        const u8 *r = b + oo + 52 * i; u32 q0 = ak_rd32(r), n = ak_rd32(r + 8);
        for (u32 k = 0; k < n && q0 + k < nq; k++) ntri += ak_rd16(b + oq + 8 * (q0 + k) + 6) == 0xFFFF ? 1 : 2;
    }
    ak_level_stream_drop();
    out->tri = AK_NEW(a, ak_col_tri, ntri ? ntri : 1); out->nobjects = nobj;
    size_t mark = ak_arena_top_mark(a);                                 /* (the build's own: from the arena's top, given back) */
    prim *p = (prim *)ak_arena_alloc_top(a, sizeof *p * (ntri ? ntri : 1), 16);
    ak_col_tri *tmp = out->tri;                                          /* (built in place, then put in leaf order) */
    if (!out->tri || !p) { ak_arena_top_release(a, mark); return false; }
    ch = stub; if (!ak_chunk_load(&ch)) { ak_arena_top_release(a, mark); return false; }
    b = ch.body;
    u32 t = 0;
    for (u32 i = 0; i < nobj; i++) {
        const u8 *r = b + oo + 52 * i;
        u32 q0 = ak_rd32(r), v0 = ak_rd32(r + 4), n = ak_rd32(r + 8), f0 = ak_rd32(r + 40), m0 = ak_rd32(r + 44); u16 bits = ak_rd16(r + 48);
        for (u32 k = 0; k < n && q0 + k < nq; k++) {
            const u8 *q = b + oq + 8 * (q0 + k);
            u32 qi[4] = { ak_rd16(q), ak_rd16(q + 2), ak_rd16(q + 4), ak_rd16(q + 6) };
            u32 fi = f0 + ((bits & 1) ? 0 : k), mi = m0 + ((bits & 2) ? 0 : k);
            u16 fl = fi < nx ? ak_rd16(b + of + 2 * fi) : 0, mt = mi < nm ? ak_rd16(b + om + 2 * mi) : 0;
            for (int h = 0; h < (qi[3] == 0xFFFF ? 1 : 2); h++) {
                u32 vi[3] = { qi[h ? 2 : 0], qi[h ? 3 : 1], qi[h ? 0 : 2] };
                f32 P[3][3]; bool ok = true;
                for (int c2 = 0; c2 < 3; c2++) {
                    u32 v = v0 + vi[c2];
                    if (v >= nv) { ok = false; break; }
                    f32 g[3] = { ak_rdf32(b + ov + 12 * v), ak_rdf32(b + ov + 12 * v + 4), ak_rdf32(b + ov + 12 * v + 8) };
                    ak_from_game(g, P[c2]);
                }
                if (!ok) continue;
                ak_col_tri *T = &tmp[t]; memset(T, 0, sizeof *T);
                memcpy(T->a, P[0], 12); sub(P[1], P[0], T->e1); sub(P[2], P[0], T->e2); cross(T->e1, T->e2, T->n);
                f32 len = sqrtf(dot(T->n, T->n)); if (len < 1e-12f) continue;
                for (int k2 = 0; k2 < 3; k2++) T->n[k2] /= len;
                T->flags = fl; T->material = mt; T->object = (u16)i;
                prim *pp = &p[t]; pp->i = t;
                for (int k2 = 0; k2 < 3; k2++) {
                    pp->mn[k2] = fminf(P[0][k2], fminf(P[1][k2], P[2][k2])); pp->mx[k2] = fmaxf(P[0][k2], fmaxf(P[1][k2], P[2][k2]));
                }
                t++;
            }
        }
    }
    out->ntri = t;
    ak_level_stream_drop();                                              /* (the PHEN data: done with) */
    ak_arena_trim(a, out->tri, sizeof(ak_col_tri) * (ntri ? ntri : 1), sizeof(ak_col_tri) * (t ? t : 1));   /* (degenerate ones left out) */
    u32 nn = t ? node_count(t) : 1;
    out->node = AK_NEW(a, ak_col_node, nn);
    if (!out->node) { ak_arena_top_release(a, mark); return false; }
    u32 next = 0;
    if (t) { build(out, p, t, &next); u32 cur = 0; assign(out, 0, &cur); }
    out->nnode = next;
    if (t && next != nn) AK_WARN("col", "%u nodes built, %u counted", next, nn);
    for (u32 s = 0; s < t; s++) {                                       /* triangles in leaf order: tri[i] = the old tri[p[i].i] (cycles) */
        if (p[s].i == ~0u) continue;
        ak_col_tri x = out->tri[s]; u32 j = s;
        for (;;) { u32 k = p[j].i; p[j].i = ~0u; if (k == s) { out->tri[j] = x; break; } out->tri[j] = out->tri[k]; j = k; }
    }
    ak_arena_top_release(a, mark);
    return true;
}

static bool ray_box(const f32 *o, const f32 *inv, const f32 *mn, const f32 *mx, f32 tmax)
{
    f32 t0 = 0, t1 = tmax;
    for (int k = 0; k < 3; k++) {
        f32 a = (mn[k] - o[k]) * inv[k], b = (mx[k] - o[k]) * inv[k];
        if (a > b) { f32 x = a; a = b; b = x; }
        t0 = a > t0 ? a : t0; t1 = b < t1 ? b : t1;
        if (t0 > t1) return false;
    }
    return true;
}

bool ak_col_raycast(const ak_collision *c, const f32 *o, const f32 *d, f32 max_t, u16 ignore, ak_col_hit *hit)
{
    if (!c->ntri) return false;
    f32 inv[3]; for (int k = 0; k < 3; k++) inv[k] = 1.0f / (fabsf(d[k]) > 1e-20f ? d[k] : (d[k] < 0 ? -1e-20f : 1e-20f));
    u32 stack[64], sp = 0; stack[sp++] = 0;
    f32 best = max_t; s32 bi = -1;
    while (sp) {
        u32 id = stack[--sp]; const ak_col_node *nd = &c->node[id];
        if (!ray_box(o, inv, nd->min, nd->max, best)) continue;
        if (nd->count) {
            for (u32 i = nd->first_or_right; i < nd->first_or_right + nd->count; i++) {
                const ak_col_tri *T = &c->tri[i];
                if (T->flags & ignore) continue;
                f32 dn = dot(d, T->n);
                if (dn >= 0 && !(T->flags & AK_COL_TWO_SIDED)) continue;     /* hit one-sided triangles from the front only */
                f32 pv[3]; cross(d, T->e2, pv); f32 det = dot(T->e1, pv);
                if (fabsf(det) < 1e-12f) continue;
                f32 id2 = 1.0f / det, tv[3]; sub(o, T->a, tv);
                f32 u = dot(tv, pv) * id2; if (u < 0 || u > 1) continue;
                f32 qv[3]; cross(tv, T->e1, qv);
                f32 v = dot(d, qv) * id2; if (v < 0 || u + v > 1) continue;
                f32 tt = dot(T->e2, qv) * id2;
                if (tt > 1e-5f && tt < best) { best = tt; bi = (s32)i; }
            }
        } else if (sp + 2 <= 64) { stack[sp++] = nd->first_or_right; stack[sp++] = id + 1; }
    }
    if (bi < 0) return false;
    const ak_col_tri *T = &c->tri[bi];
    hit->t = best; hit->tri = (u32)bi; hit->flags = T->flags; hit->material = T->material;
    for (int k = 0; k < 3; k++) { hit->pos[k] = o[k] + d[k] * best; hit->normal[k] = T->n[k]; }
    return true;
}

/* closest point on triangle a, a+e1, a+e2 to p (Ericson, Real-Time Collision Detection 5.1.5) */
static void closest_on_tri(const ak_col_tri *T, const f32 *p, f32 *out)
{
    f32 a[3], b[3], c[3], ab[3], ac[3], ap[3];
    for (int k = 0; k < 3; k++) { a[k] = T->a[k]; b[k] = a[k] + T->e1[k]; c[k] = a[k] + T->e2[k]; ab[k] = T->e1[k]; ac[k] = T->e2[k]; ap[k] = p[k] - a[k]; }
    f32 d1 = dot(ab, ap), d2 = dot(ac, ap);
    if (d1 <= 0 && d2 <= 0) { memcpy(out, a, 12); return; }
    f32 bp[3]; sub(p, b, bp); f32 d3 = dot(ab, bp), d4 = dot(ac, bp);
    if (d3 >= 0 && d4 <= d3) { memcpy(out, b, 12); return; }
    f32 vc = d1 * d4 - d3 * d2;
    if (vc <= 0 && d1 >= 0 && d3 <= 0) { f32 v = d1 / (d1 - d3); for (int k = 0; k < 3; k++) out[k] = a[k] + v * ab[k]; return; }
    f32 cp[3]; sub(p, c, cp); f32 d5 = dot(ab, cp), d6 = dot(ac, cp);
    if (d6 >= 0 && d5 <= d6) { memcpy(out, c, 12); return; }
    f32 vb = d5 * d2 - d1 * d6;
    if (vb <= 0 && d2 >= 0 && d6 <= 0) { f32 w = d2 / (d2 - d6); for (int k = 0; k < 3; k++) out[k] = a[k] + w * ac[k]; return; }
    f32 va = d3 * d6 - d5 * d4;
    if (va <= 0 && (d4 - d3) >= 0 && (d5 - d6) >= 0) { f32 w = (d4 - d3) / ((d4 - d3) + (d5 - d6)); for (int k = 0; k < 3; k++) out[k] = b[k] + w * (c[k] - b[k]); return; }
    f32 den = 1.0f / (va + vb + vc), v = vb * den, w = vc * den;
    for (int k = 0; k < 3; k++) out[k] = a[k] + ab[k] * v + ac[k] * w;
}

u32 ak_col_sphere_resolve(const ak_collision *c, f32 *p, f32 r, u16 ignore, bool horizontal, f32 *wall)
{
    if (wall) wall[0] = wall[1] = wall[2] = 0;
    if (!c->ntri) return 0;
    u32 pushes = 0;
    for (int pass = 0; pass < 3; pass++) {
        u32 stack[64], sp = 0, here = 0; stack[sp++] = 0;
        while (sp) {
            u32 id = stack[--sp]; const ak_col_node *nd = &c->node[id];
            if (p[0] + r < nd->min[0] || p[0] - r > nd->max[0] || p[1] + r < nd->min[1] || p[1] - r > nd->max[1] ||
                p[2] + r < nd->min[2] || p[2] - r > nd->max[2]) continue;
            if (!nd->count) { if (sp + 2 <= 64) { stack[sp++] = nd->first_or_right; stack[sp++] = id + 1; } continue; }
            for (u32 i = nd->first_or_right; i < nd->first_or_right + nd->count; i++) {
                const ak_col_tri *T = &c->tri[i];
                if (T->flags & ignore) continue;
                f32 rel[3]; sub(p, T->a, rel);
                f32 side = dot(rel, T->n);
                if (!(T->flags & AK_COL_TWO_SIDED) && side < 0) continue;            /* behind a one-sided surface */
                if (side > r || side < -r) continue;
                f32 q[3], dlt[3]; closest_on_tri(T, p, q); sub(p, q, dlt);
                f32 d2 = dot(dlt, dlt);
                if (d2 >= r * r) continue;
                f32 d = sqrtf(d2), n[3];
                if (d > 1e-6f) for (int k = 0; k < 3; k++) n[k] = dlt[k] / d;
                else for (int k = 0; k < 3; k++) n[k] = side >= 0 ? T->n[k] : -T->n[k];
                if (horizontal) {
                    n[1] = 0; f32 l = sqrtf(n[0] * n[0] + n[2] * n[2]);
                    if (l < 0.2f) continue;                                          /* a floor or ceiling: not a wall */
                    n[0] /= l; n[2] /= l;
                    f32 depth = (r - d) / l; if (depth > r) depth = r;
                    p[0] += n[0] * depth; p[2] += n[2] * depth;
                } else { f32 depth = r - d; for (int k = 0; k < 3; k++) p[k] += n[k] * depth; }
                if (wall) for (int k = 0; k < 3; k++) wall[k] += n[k];
                pushes++; here++;
            }
        }
        if (!here) break;
    }
    return pushes;
}


/* ------------------------------------------------------------------ swept box (ak_col_box_sweep) */
/* The game's body step sweeps the box's corners (body +0x118, its 8 corners, 088C4CF4 at 0x088C6354): each corner moving along the
 * step against the triangle's face; here also each vertex of a steep triangle against the box's faces (so a wall's corner stops
 * the box's flat side).  No edge-against-edge test: a corner passes over a seam between ground pieces instead of catching on it. */
static bool ray_tri(const ak_col_tri *T, const f32 *o, const f32 *d, f32 *t)
{
    f32 p[3], q[3], s[3]; cross(d, T->e2, p);
    f32 det = dot(T->e1, p);
    if (fabsf(det) < 1e-12f) return false;
    f32 inv = 1.0f / det; sub(o, T->a, s);
    f32 u = dot(s, p) * inv; if (u < 0 || u > 1) return false;
    cross(s, T->e1, q);
    f32 v = dot(d, q) * inv; if (v < 0 || u + v > 1) return false;
    *t = dot(T->e2, q) * inv;
    return *t >= 0 && *t <= 1;
}

static bool box_tri_sweep(const ak_col_tri *T, const f32 *c0, const f32 (*ax)[3], const f32 *h, const f32 *mv, f32 *t_out, f32 *n_out)
{
    bool hit = false; f32 best = 2.0f;
    f32 dn = dot(mv, T->n), eps = 1e-5f * sqrtf(dot(mv, mv));               /* (a move along the face is not into it) */
    bool two = (T->flags & AK_COL_TWO_SIDED) != 0;
    if (dn < -eps || (two && dn > eps)) {                                     /* corners against the face */
        for (int i = 0; i < 8; i++) {
            f32 o[3]; for (int k = 0; k < 3; k++) o[k] = c0[k] + ax[0][k] * h[0] * ((i & 1) ? 1 : -1) + ax[1][k] * h[1] * ((i & 2) ? 1 : -1) + ax[2][k] * h[2] * ((i & 4) ? 1 : -1);
            f32 sg = dn < 0 ? 1.0f : -1.0f, t;
            f32 rel[3]; sub(o, T->a, rel); f32 sd = dot(rel, T->n) * sg;     /* the corner's height over the face, on the side it comes from */
            if (sd < 0 && sd > -0.02f) {                                       /* just behind it already (resting on it, or placed on it): */
                f32 pr[3] = { o[0] - T->n[0] * sg * sd, o[1] - T->n[1] * sg * sd, o[2] - T->n[2] * sg * sd }, up[3] = { T->n[0] * sg, T->n[1] * sg, T->n[2] * sg };
                f32 pr2[3] = { pr[0] + up[0] * 0.01f, pr[1] + up[1] * 0.01f, pr[2] + up[2] * 0.01f }, dn2[3] = { -up[0] * 0.02f, -up[1] * 0.02f, -up[2] * 0.02f }, tt;
                if (ray_tri(T, pr2, dn2, &tt)) t = 0; else continue;           /* touching now, if it is over the triangle */
            } else if (!ray_tri(T, o, mv, &t)) continue;
            if (t < best) { best = t; hit = true; for (int k = 0; k < 3; k++) n_out[k] = T->n[k] * sg; }
        }
    }
    if (T->n[1] < 0.70710678f && T->n[1] > -0.70710678f) {                  /* a wall's vertices against the box's faces */
        f32 P[3][3];
        for (int k = 0; k < 3; k++) { P[0][k] = T->a[k]; P[1][k] = T->a[k] + T->e1[k]; P[2][k] = T->a[k] + T->e2[k]; }
        for (int j = 0; j < 3; j++) {
            f32 rel[3]; sub(P[j], c0, rel);
            f32 lo = 0, hi = 1; int face = -1; f32 fs = 0; bool ok = true;
            for (int k = 0; k < 3 && ok; k++) {                               /* slab test in the box's axes: the vertex moves by -mv */
                f32 o = dot(rel, ax[k]), d = -dot(mv, ax[k]);
                if (fabsf(d) < 1e-12f) { if (o < -h[k] || o > h[k]) ok = false; continue; }
                f32 t0 = (-h[k] - o) / d, t1 = (h[k] - o) / d, sg = -1;
                if (t0 > t1) { f32 x = t0; t0 = t1; t1 = x; sg = 1; }
                if (t0 > lo) { lo = t0; face = k; fs = sg; }
                if (t1 < hi) hi = t1;
                if (lo > hi) ok = false;
            }
            if (!ok || face < 0 || lo > 1 || lo >= best) continue;            /* (face < 0: the vertex starts inside the box) */
            best = lo; hit = true;
            for (int k = 0; k < 3; k++) n_out[k] = ax[face][k] * fs;        /* the box face it meets, facing back into the box */
            /* fs: the side the vertex enters from is -sign(d) of that axis; the push goes the other way */
            f32 dd = -dot(mv, ax[face]); if ((dd > 0) == (fs > 0)) for (int k = 0; k < 3; k++) n_out[k] = -n_out[k];
            if (dot(n_out, mv) > 0) for (int k = 0; k < 3; k++) n_out[k] = -n_out[k];
        }
    }
    if (hit) *t_out = best;
    return hit;
}

/* The game's box sweep (088B3784), read from the code: a moving box against a still triangle by separating axes, over 13 axes - the
 * 9 crosses of the box's axes with the triangle's edges, the 3 box axes and the triangle's normal (an axis shorter than sqrt(0.001)
 * is skipped).  Each axis is turned to point from the triangle toward the box; the box's interval (centre +- radius) and the
 * triangle's are compared along it, with the move's component v: apart for the whole move -> no hit; otherwise the entry and exit
 * times, the latest entry (from -0.0001) and earliest exit kept.  No entering axis at all (overlapping and still): -1, "inside".
 * The axis of the latest entry is the contact normal; the hit is "an edge" when the triangle's unnormalised normal (edge cross
 * product) projects below 0.999 on it.  The body step passes the triangle's front only (a move not into the face is skipped). */
static f32 box_tri_sweep_game(const ak_col_tri *T, const f32 *C, const f32 (*A)[3], const f32 *h, const f32 *mv, f32 tmax, f32 *n_out, bool *edge)
{
    f32 V[3][3], e[3][3], N[3];
    for (int k = 0; k < 3; k++) { V[0][k] = T->a[k]; V[1][k] = T->a[k] + T->e1[k]; V[2][k] = T->a[k] + T->e2[k]; }
    sub(V[1], V[0], e[0]); sub(V[2], V[1], e[1]); sub(V[0], V[2], e[2]);
    cross(e[0], T->e2, N);                                                    /* (v1 - v0) x (v2 - v0), not normalised */
    *edge = false;
    if (dot(N, mv) >= 0) return 2.0f;                                         /* the front only */
    f32 L[13][3];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cross(A[i], e[j], L[i * 3 + j]);
    for (int i = 0; i < 3; i++) memcpy(L[9 + i], A[i], 12);
    memcpy(L[12], N, 12);
    f32 d[3] = { (V[0][0] + V[1][0] + V[2][0]) / 3.0f - C[0], (V[0][1] + V[1][1] + V[2][1]) / 3.0f - C[1], (V[0][2] + V[1][2] + V[2][2]) / 3.0f - C[2] };
    f32 enter = -1e-4f, exit = tmax, face_near = -1e30f; int axis = 13;
    for (int a = 0; a < 13; a++) {
        f32 *l = L[a], ll = dot(l, l);
        if (ll < 0.001f) continue;
        if (dot(l, d) > 0) { l[0] = -l[0]; l[1] = -l[1]; l[2] = -l[2]; }       /* from the triangle toward the box */
        f32 inv = 1.0f / sqrtf(ll); l[0] *= inv; l[1] *= inv; l[2] *= inv;
        f32 r = fabsf(dot(l, A[0])) * h[0] + fabsf(dot(l, A[1])) * h[1] + fabsf(dot(l, A[2])) * h[2];
        f32 p0 = dot(l, V[0]), p1 = dot(l, V[1]), p2 = dot(l, V[2]);
        f32 lo = p0 < p1 ? p0 : p1, hi = p0 < p1 ? p1 : p0; if (p2 < lo) lo = p2; if (p2 > hi) hi = p2;
        f32 mid = (lo + hi) * 0.5f, hw = hi - mid, off = dot(l, C) - mid, v = dot(l, mv);
        f32 far = off + r + hw, near = off - r - hw;                          /* the box's far and near side past the triangle's */
        if (a == 12 && dot(l, N) > 0) face_near = near;
        if (near + (v < 0 ? v : 0) > 0) return 2.0f;                         /* apart along this axis for the whole move */
        if (far + (v > 0 ? v : 0) < 0) return 2.0f;
        if (fabsf(v) > 1e-7f) {
            f32 ta = -far / v, tb = -near / v, t0 = ta < tb ? ta : tb, t1 = ta < tb ? tb : ta;
            if (t0 > enter) { enter = t0; axis = a; }
            if (t1 < exit) exit = t1;
        }
        if (exit < enter) return 2.0f;
        if (exit <= 0) return 2.0f;
    }
    if (axis >= 13) {                                                         /* inside */
        /* [PARITY(1.3b)] what the body step does with "inside" (088B6510) is not read yet; a box sunk at most 2 cm into the face it is
           moving into (placed on the ground, rounding) is taken as touching it now */
        if (face_near < 0 && face_near > -0.02f) { f32 inv = 1.0f / sqrtf(dot(N, N)); for (int k = 0; k < 3; k++) n_out[k] = N[k] * inv; return 0.0f; }
        return -1.0f; }
    memcpy(n_out, L[axis], 12);
    if (enter >= 1.0f) return 2.0f;
    if (enter >= 0) *edge = dot(N, n_out) < 0.999f;
    return enter;
}

bool ak_col_box_sweep(const ak_collision *c, const f32 *c0, const f32 (*ax)[3], const f32 *h, const f32 *mv, u16 ignore,
                      f32 *t_out, f32 *normal, u16 *flags, bool *edge_out)
{
    static int corners = -1; if (corners < 0) corners = ak_setting_int("AK_BOX_SWEEP_CORNERS", 0);   /* (the engine's old sweep, for comparing) */
    if (!c->ntri) return false;
    f32 ext[3], mn[3], mx[3];
    for (int k = 0; k < 3; k++) {
        ext[k] = h[0] * fabsf(ax[0][k]) + h[1] * fabsf(ax[1][k]) + h[2] * fabsf(ax[2][k]);
        f32 a = c0[k], b = c0[k] + mv[k];
        mn[k] = (a < b ? a : b) - ext[k] - 0.01f; mx[k] = (a < b ? b : a) + ext[k] + 0.01f;
    }
    f32 best = 2.0f; bool any = false;
    u32 stack[64], sp = 0; stack[sp++] = 0;
    while (sp) {
        u32 id = stack[--sp]; const ak_col_node *nd = &c->node[id];
        if (mx[0] < nd->min[0] || mn[0] > nd->max[0] || mx[1] < nd->min[1] || mn[1] > nd->max[1] || mx[2] < nd->min[2] || mn[2] > nd->max[2]) continue;
        if (!nd->count) { if (sp + 2 <= 64) { stack[sp++] = nd->first_or_right; stack[sp++] = id + 1; } continue; }
        for (u32 i = nd->first_or_right; i < nd->first_or_right + nd->count; i++) {
            const ak_col_tri *T = &c->tri[i];
            if (T->flags & ignore) continue;
            f32 t, n[3]; bool edge = false;
            if (corners) { if (!box_tri_sweep(T, c0, ax, h, mv, &t, n)) continue; }
            else {
                t = box_tri_sweep_game(T, c0, ax, h, mv, best < 1.0f ? best : 1.0f, n, &edge);
                if (t > 1.0f || t < -0.5f) continue;                          /* no hit, or inside it (-1) [PARITY(1.3b)] */
                if (t == best && any) {                                       /* a tie: the contact that faces the move more (088C6260) */
                    if (!(dot(n, mv) < dot(normal, mv))) continue;
                    memcpy(normal, n, 12); if (flags) *flags = T->flags; if (edge_out) *edge_out = edge; continue; }
            }
            if (t < best) { best = t; memcpy(normal, n, 12); if (flags) *flags = T->flags; if (edge_out) *edge_out = edge; any = true; }
        }
    }
    if (any) *t_out = best;
    return any;
}
