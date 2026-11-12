/* Aurek - command posts, team spawns and capture regions (see ak_conquest.h) */
#include <math.h>
#include <string.h>
#include "game/ak_conquest.h"

static f32 wf(const u8 *p) { f32 f; memcpy(&f, p, 4); return f; }
static bool finite_small(f32 v) { return v == v && fabsf(v) < 1e5f; }

/* position + unit quaternion followed by 100.0 (posts and spawns) */
static bool find_pos_quat(const ak_chunk *c, f32 *pos, f32 *q)
{
    u32 n = c->size / 4;
    for (u32 j = 3; j + 8 <= n; j++) {
        const u8 *b = c->body + 4 * j; f32 v[8];
        for (int k = 0; k < 8; k++) v[k] = wf(b + 4 * k);
        bool ok = true; for (int k = 0; k < 7; k++) ok &= finite_small(v[k]);
        if (!ok || fabsf(v[3] * v[3] + v[4] * v[4] + v[5] * v[5] + v[6] * v[6] - 1) > 1e-3f || fabsf(v[7] - 100.0f) > 1e-3f) continue;
        memcpy(pos, v, 12); memcpy(q, v + 3, 16); return true;
    }
    return false;
}
/* position + a 3x3 matrix whose first row is a unit vector (regions) */
static bool find_pos_mat(const ak_chunk *c, f32 *pos)
{
    u32 n = c->size / 4;
    for (u32 j = 3; j + 12 <= n; j++) {
        const u8 *b = c->body + 4 * j; f32 v[12];
        for (int k = 0; k < 12; k++) v[k] = wf(b + 4 * k);
        bool ok = finite_small(v[0]) && finite_small(v[1]) && finite_small(v[2]);
        for (int k = 3; k < 12 && ok; k++) ok = v[k] == v[k] && fabsf(v[k]) <= 1.0001f;
        if (!ok || fabsf(v[3] * v[3] + v[4] * v[4] + v[5] * v[5] - 1) > 1e-2f) continue;
        memcpy(pos, v, 12); return true;
    }
    return false;
}
/* the facing (engine yaw, 0 = -z) of a game-axes quaternion */
static f32 yaw_of(const f32 *gq)
{
    f32 x = gq[0], y = -gq[1], z = -gq[2], w = gq[3];                       /* to engine axes */
    f32 fx = -(2 * (x * z + w * y)), fz = -(1 - 2 * (x * x + y * y));       /* the rotated -z */
    return atan2f(-fx, -fz);
}

bool ak_conquest_load(const ak_level *l, ak_conquest_map *out)
{
    memset(out, 0, sizeof *out);
    f32 sp[2][64][4]; u32 nsp[2] = { 0, 0 }; f32 rg[64][3]; u32 nrg = 0;
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 12) continue;
        u32 type = ak_rd32(c.body + 4);
        if (!(type & 0x8000)) continue;
        type &= 0x7FFF;
        f32 gp[3], gq[4];
        if (type == 8 && out->nposts < AK_MAX_POSTS && find_pos_quat(&c, gp, gq)) {
            ak_post *p = &out->post[out->nposts++]; ak_from_game(gp, p->pos); p->yaw = yaw_of(gq);
        } else if ((type == 15 || type == 16) && find_pos_quat(&c, gp, gq)) {
            int t = type == 16; if (nsp[t] < 64) { ak_from_game(gp, sp[t][nsp[t]]); sp[t][nsp[t]][3] = yaw_of(gq); nsp[t]++; }
        } else if (type == 37 && nrg < 64 && find_pos_mat(&c, gp)) ak_from_game(gp, rg[nrg++]);
    }
    out->nregions = nrg;
    /* each spawn and region belongs to the nearest post */
    for (int t = 0; t < 2; t++)
        for (u32 i = 0; i < nsp[t]; i++) {
            s32 best = -1; f32 bd = 1e30f;
            for (u32 k = 0; k < out->nposts; k++) {
                f32 dx = sp[t][i][0] - out->post[k].pos[0], dz = sp[t][i][2] - out->post[k].pos[2], d = dx * dx + dz * dz;
                if (d < bd && !out->post[k].has_spawn[t]) { bd = d; best = (s32)k; }
            }
            if (best >= 0) { ak_post *p = &out->post[best]; memcpy(p->spawn[t], sp[t][i], 12); p->spawn_yaw[t] = sp[t][i][3]; p->has_spawn[t] = true; }
        }
    for (u32 i = 0; i < nrg; i++)
        for (u32 k = 0; k < out->nposts; k++) {
            f32 dx = rg[i][0] - out->post[k].pos[0], dz = rg[i][2] - out->post[k].pos[2];
            if (dx * dx + dz * dz < 25.0f && !out->post[k].has_region) { memcpy(out->post[k].region, rg[i], 12); out->post[k].has_region = true; }
        }
    return out->nposts > 0;
}
