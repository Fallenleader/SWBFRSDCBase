#include "ak_collision.h"
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
typedef struct { f32 c[3]; f32 mn[3], mx[3]; u32 i; } prim;
static int g_axis;
static int prim_cmp(const void *x, const void *y)
{
    f32 a = ((const prim *)x)->c[g_axis], b = ((const prim *)y)->c[g_axis];
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
            cmn[k] = fminf(cmn[k], p[i].c[k]); cmx[k] = fmaxf(cmx[k], p[i].c[k]);
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
    if (!found || ch.size < 24) return false;
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
    out->tri = AK_NEW(a, ak_col_tri, ntri ? ntri : 1); out->nobjects = nobj;
    prim *p = (prim *)malloc(sizeof *p * (ntri ? ntri : 1));
    ak_col_tri *tmp = (ak_col_tri *)malloc(sizeof *tmp * (ntri ? ntri : 1));
    if (!out->tri || !p || !tmp) { free(p); free(tmp); return false; }
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
                    pp->c[k2] = (pp->mn[k2] + pp->mx[k2]) * 0.5f;
                }
                t++;
            }
        }
    }
    out->ntri = t;
    out->node = AK_NEW(a, ak_col_node, t ? 2 * t : 1);
    if (!out->node) { free(p); free(tmp); return false; }
    u32 next = 0;
    if (t) { build(out, p, t, &next); u32 cur = 0; assign(out, 0, &cur); }
    out->nnode = next;
    for (u32 i = 0; i < t; i++) out->tri[i] = tmp[p[i].i];          /* triangles in leaf order */
    free(p); free(tmp);
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
