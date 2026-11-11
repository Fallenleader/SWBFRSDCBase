#include "ak_nav.h"
#include <math.h>
#include <stdlib.h>

bool ak_nav_load(const ak_level *l, ak_arena *a, ak_nav *out)
{
    memset(out, 0, sizeof *out);
    ak_chunk c; u32 pos = 8; bool found = false;
    while (ak_asura_next(&l->file, &pos, &c)) if (ak_chunk_tag(&c) == AK_TAG('N', 'A', 'V', '1')) { found = true; break; }
    if (!found || c.size < 12) return false;
    const u8 *b = c.body;
    u32 nn = ak_rd32(b), o = 8;
    if ((size_t)o + 20u * nn + 4 > c.size) return false;
    out->node = AK_NEW(a, ak_nav_node, nn ? nn : 1); out->nnode = nn;
    if (!out->node) return false;
    u32 lk = 0;
    for (u32 i = 0; i < nn; i++) {
        const u8 *r = b + o + 20 * i; ak_nav_node *d = &out->node[i];
        f32 g[3] = { ak_rdf32(r), ak_rdf32(r + 4), ak_rdf32(r + 8) };
        ak_from_game(g, d->pos); d->radius = ak_rdf32(r + 12);
        u32 w = ak_rd32(r + 16); d->nlinks = (u16)(w & 0xFF); d->flags = (u16)(w >> 16); d->first_link = lk; lk += d->nlinks;
    }
    o += 20 * nn;
    u32 nl = ak_rd32(b + o); o += 4;
    if (nl != lk || (size_t)o + 8u * nl > c.size) { AK_ERROR("nav", "link count %u does not match the nodes' %u", nl, lk); return false; }
    out->link = AK_NEW(a, ak_nav_link, nl ? nl : 1); out->nlink = nl;
    if (!out->link) return false;
    for (u32 i = 0; i < nl; i++) { const u8 *r = b + o + 8 * i; out->link[i].to = ak_rd16(r); out->link[i].flags = ak_rd16(r + 2); out->link[i].cost = ak_rdf32(r + 4); }
    /* grid: about 8 m cells over the nodes' x/z extent */
    f32 mn[2] = { 1e30f, 1e30f }, mx[2] = { -1e30f, -1e30f };
    for (u32 i = 0; i < nn; i++) { mn[0] = fminf(mn[0], out->node[i].pos[0]); mx[0] = fmaxf(mx[0], out->node[i].pos[0]); mn[1] = fminf(mn[1], out->node[i].pos[2]); mx[1] = fmaxf(mx[1], out->node[i].pos[2]); }
    if (!nn) return true;
    out->cell = 8.0f; out->gmin[0] = mn[0]; out->gmin[1] = mn[1];
    out->gw = (u32)((mx[0] - mn[0]) / out->cell) + 1; out->gh = (u32)((mx[1] - mn[1]) / out->cell) + 1;
    if ((u64)out->gw * out->gh > 4u << 20) { out->cell = sqrtf((mx[0] - mn[0]) * (mx[1] - mn[1]) / (4u << 20)) + 1; out->gw = (u32)((mx[0] - mn[0]) / out->cell) + 1; out->gh = (u32)((mx[1] - mn[1]) / out->cell) + 1; }
    u32 nc = out->gw * out->gh;
    out->cell_first = AK_NEW(a, u32, nc + 1); out->cell_items = AK_NEW(a, u32, nn);
    if (!out->cell_first || !out->cell_items) return false;
    u32 *cellof = (u32 *)malloc(4u * nn);
    for (u32 i = 0; i < nn; i++) {
        u32 cx = (u32)((out->node[i].pos[0] - mn[0]) / out->cell), cz = (u32)((out->node[i].pos[2] - mn[1]) / out->cell);
        cellof[i] = cz * out->gw + cx; out->cell_first[cellof[i] + 1]++;
    }
    for (u32 k = 0; k < nc; k++) out->cell_first[k + 1] += out->cell_first[k];
    u32 *fill = (u32 *)calloc(nc, 4);
    for (u32 i = 0; i < nn; i++) out->cell_items[out->cell_first[cellof[i]] + fill[cellof[i]]++] = i;
    free(fill); free(cellof);
    return true;
}

s32 ak_nav_nearest(const ak_nav *n, const f32 *p, f32 max_dist)
{
    if (!n->nnode) return -1;
    s32 best = -1; f32 bd = max_dist * max_dist;
    s32 cx = (s32)floorf((p[0] - n->gmin[0]) / n->cell), cz = (s32)floorf((p[2] - n->gmin[1]) / n->cell);
    s32 rmax = (s32)(max_dist / n->cell) + 1;
    for (s32 r = 0; r <= rmax; r++) {
        for (s32 z = cz - r; z <= cz + r; z++)
            for (s32 x = cx - r; x <= cx + r; x++) {
                if (r && x != cx - r && x != cx + r && z != cz - r && z != cz + r) continue;      /* ring r only */
                if (x < 0 || z < 0 || x >= (s32)n->gw || z >= (s32)n->gh) continue;
                u32 cell = (u32)z * n->gw + (u32)x;
                for (u32 k = n->cell_first[cell]; k < n->cell_first[cell + 1]; k++) {
                    const ak_nav_node *d = &n->node[n->cell_items[k]];
                    f32 dx = d->pos[0] - p[0], dy = d->pos[1] - p[1], dz = d->pos[2] - p[2], dd = dx * dx + dy * dy * 4 + dz * dz;   /* height counts more */
                    if (dd < bd) { bd = dd; best = (s32)n->cell_items[k]; }
                }
            }
        if (best >= 0 && (f32)(r - 1) * n->cell > sqrtf(bd)) break;          /* nothing in a further ring can be closer */
    }
    return best;
}

/* A*: binary heap on f = g + straight-line distance */
typedef struct { f32 f; u32 node; } heap_item;
u32 ak_nav_path(const ak_nav *n, u32 start, u32 goal, u16 closed, u32 *out, u32 max_out, f32 *cost, ak_arena *scratch)
{
    if (start >= n->nnode || goal >= n->nnode) return 0;
    size_t mark = scratch->used;
    f32 *g = (f32 *)ak_arena_alloc(scratch, 4u * n->nnode, 4); u32 *from = (u32 *)ak_arena_alloc(scratch, 4u * n->nnode, 4);
    u8 *done = (u8 *)ak_arena_zalloc(scratch, n->nnode, 1); heap_item *h = (heap_item *)ak_arena_alloc(scratch, sizeof *h * (n->nlink + 2), 4);
    if (!g || !from || !done || !h) { scratch->used = mark; return 0; }
    for (u32 i = 0; i < n->nnode; i++) { g[i] = 1e30f; from[i] = 0xFFFFFFFFu; }
    const f32 *gp = n->node[goal].pos;
    #define HEUR(i) sqrtf((n->node[i].pos[0] - gp[0]) * (n->node[i].pos[0] - gp[0]) + (n->node[i].pos[1] - gp[1]) * (n->node[i].pos[1] - gp[1]) + (n->node[i].pos[2] - gp[2]) * (n->node[i].pos[2] - gp[2]))
    u32 hn = 0; g[start] = 0; h[hn++] = (heap_item){ HEUR(start), start };
    bool found = false;
    while (hn) {
        heap_item top = h[0]; h[0] = h[--hn];
        for (u32 i = 0;;) { u32 l2 = 2 * i + 1, r = l2 + 1, m = i; if (l2 < hn && h[l2].f < h[m].f) m = l2; if (r < hn && h[r].f < h[m].f) m = r; if (m == i) break; heap_item t = h[i]; h[i] = h[m]; h[m] = t; i = m; }
        u32 u = top.node;
        if (done[u]) continue;
        done[u] = 1;
        if (u == goal) { found = true; break; }
        const ak_nav_node *nd = &n->node[u];
        for (u32 k = nd->first_link; k < nd->first_link + nd->nlinks; k++) {
            const ak_nav_link *lk = &n->link[k];
            if (lk->to >= n->nnode || (lk->flags & closed) || (n->node[lk->to].flags & closed) || done[lk->to]) continue;
            f32 ng = g[u] + lk->cost;
            if (ng < g[lk->to] && hn < n->nlink + 2) {
                g[lk->to] = ng; from[lk->to] = u;
                u32 i = hn++; h[i] = (heap_item){ ng + HEUR(lk->to), lk->to };
                while (i && h[(i - 1) / 2].f > h[i].f) { heap_item t = h[i]; h[i] = h[(i - 1) / 2]; h[(i - 1) / 2] = t; i = (i - 1) / 2; }
            }
        }
    }
    #undef HEUR
    u32 count = 0;
    if (found) {
        for (u32 v = goal; v != 0xFFFFFFFFu; v = from[v]) count++;
        if (count <= max_out) { u32 k = count; for (u32 v = goal; v != 0xFFFFFFFFu; v = from[v]) out[--k] = v; }
        else count = 0;
        if (cost) *cost = g[goal];
    }
    scratch->used = mark;
    return count;
}
