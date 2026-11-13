/* Aurek - the level's paths (see ak_path.h) */
#include <math.h>
#include <string.h>
#include "game/ak_path.h"

static f32 wf(const u8 *p) { f32 f; memcpy(&f, p, 4); return f; }

/* the ENTI record with this id and type (its body and size), or NULL */
static const u8 *find_enti(const ak_level *l, u32 id, u32 type, u32 *size)
{
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 12) continue;
        if (ak_rd32(c.body) == id && (ak_rd32(c.body + 4) & 0x7FFF) == type) { *size = c.size; return c.body; }
    }
    return NULL;
}

bool ak_route_for_unit(const ak_level *l, u32 unit, ak_route *out)
{
    memset(out, 0, sizeof *out);
    u32 sz; const u8 *b = find_enti(l, unit, 13, &sz);
    if (!b || sz < 24) return false;
    u32 extra = ak_rd32(b + 16), o = 82 + 4 * extra;                        /* (word 4: how many words come before the model hash at 6 + it) */
    if (extra > 4 || o + 4 > sz) return false;
    u32 node = (u32)b[o] | (u32)b[o + 1] << 8 | (u32)b[o + 2] << 16 | (u32)b[o + 3] << 24;
    for (int hops = 0; hops < 64 && node != 999; hops++) {
        const u8 *nb = find_enti(l, node, 55, &sz);
        if (!nb || sz < 48) break;
        if (!out->n) { f32 g[3] = { wf(nb + 32), wf(nb + 36), wf(nb + 40) }; ak_from_game(g, out->pt[out->n++]); }
        u32 seg = ak_rd32(nb + 44); if (seg == 999) break;
        const u8 *sb = find_enti(l, seg, 60, &sz);
        if (!sb || sz < 68) break;
        u32 from = ak_rd32(sb + 52), to = ak_rd32(sb + 56), np = ak_rd32(sb + 64);
        if (np < 3 || np > 512 || 68u + (np - 2) * 16u + np * 12u + (np - 2) * 4u > sz) break;
        const u8 *pp = sb + 68 + (np - 2) * 16;                             /* past the quaternions (one per knot: N - 2) */
        bool rev = from != node && to == node;                              /* (a segment walked from its far end) */
        if (rev) to = from;
        for (u32 k = 1; k + 1 < np && out->n < AK_ROUTE_MAX; k++) {           /* the knots (the first and last points are the spline's control ends) */
            u32 i = rev ? np - 1 - k : k;
            f32 g[3] = { wf(pp + 12 * i), wf(pp + 12 * i + 4), wf(pp + 12 * i + 8) }, e[3];
            if (!(fabsf(g[0]) < 1e5f && fabsf(g[1]) < 1e5f && fabsf(g[2]) < 1e5f)) continue;
            ak_from_game(g, e);
            f32 *q = out->pt[out->n - 1]; f32 dx = e[0] - q[0], dy = e[1] - q[1], dz = e[2] - q[2];
            if (dx * dx + dy * dy + dz * dz < 0.25f) continue;              /* (the segment's ends repeat the nodes) */
            memcpy(out->pt[out->n++], e, 12);
        }
        if (to == node) break;
        node = to;
    }
    for (u32 i = 1; i < out->n; i++) {
        f32 dx = out->pt[i][0] - out->pt[i - 1][0], dz = out->pt[i][2] - out->pt[i - 1][2];
        out->length += sqrtf(dx * dx + dz * dz);
    }
    return out->n >= 2;
}

bool ak_route_at(const ak_route *r, f32 dist, f32 pos[3], f32 dir[3])
{
    if (r->n < 2) return false;
    f32 d = dist < 0 ? 0 : dist;
    for (u32 i = 1; i < r->n; i++) {
        f32 dx = r->pt[i][0] - r->pt[i - 1][0], dy = r->pt[i][1] - r->pt[i - 1][1], dz = r->pt[i][2] - r->pt[i - 1][2], L = sqrtf(dx * dx + dz * dz);
        if (d <= L || i == r->n - 1) {
            f32 f = L > 1e-4f ? d / L : 0; if (f > 1) f = 1;
            pos[0] = r->pt[i - 1][0] + dx * f; pos[1] = r->pt[i - 1][1] + dy * f; pos[2] = r->pt[i - 1][2] + dz * f;
            if (L > 1e-4f) { dir[0] = dx / L; dir[1] = 0; dir[2] = dz / L; } else { dir[0] = 0; dir[1] = 0; dir[2] = -1; }
            return dist <= r->length;
        }
        d -= L;
    }
    return false;
}
