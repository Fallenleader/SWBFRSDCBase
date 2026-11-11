#include "entity.h"
#include <math.h>

static f32 wf(u32 w) { f32 f; memcpy(&f, &w, 4); return f; }
static bool finite_small(f32 v, f32 lim) { return v == v && fabsf(v) < lim; }
static ak_quat q_game(f32 x, f32 y, f32 z, f32 w) { ak_quat q = { x, -y, -z, w }; return q; }       /* model.c's axis rule */

/* model by name hash (the mesh resource's first word; full-detail meshes only) */
static s32 model_by_hash(const ak_model_set *ms, const ak_level *l, u32 h, const u32 *mesh_hash)
{
    if (!h) return -1;
    for (u32 i = 0; i < ms->nmodels; i++) if (ms->models[i].lod == 0 && mesh_hash[i] == h) return (s32)i;
    (void)l;
    return -1;
}

static ak_quat quat_from_rows(const f32 *m)       /* rows of a rotation matrix (game axes) -> quaternion (game axes) */
{
    f32 tr = m[0] + m[4] + m[8]; ak_quat q;
    if (tr > 0) { f32 s = sqrtf(tr + 1) * 2; q.w = 0.25f * s; q.x = (m[7] - m[5]) / s; q.y = (m[2] - m[6]) / s; q.z = (m[3] - m[1]) / s; }
    else if (m[0] > m[4] && m[0] > m[8]) { f32 s = sqrtf(1 + m[0] - m[4] - m[8]) * 2; q.w = (m[7] - m[5]) / s; q.x = 0.25f * s; q.y = (m[1] + m[3]) / s; q.z = (m[2] + m[6]) / s; }
    else if (m[4] > m[8]) { f32 s = sqrtf(1 + m[4] - m[0] - m[8]) * 2; q.w = (m[2] - m[6]) / s; q.x = (m[1] + m[3]) / s; q.y = 0.25f * s; q.z = (m[5] + m[7]) / s; }
    else { f32 s = sqrtf(1 + m[8] - m[0] - m[4]) * 2; q.w = (m[3] - m[1]) / s; q.x = (m[2] + m[6]) / s; q.y = (m[5] + m[7]) / s; q.z = 0.25f * s; }
    return q;
}
static ak_quat quat_from_euler(f32 x, f32 y, f32 z)  /* game axes, yaw (y) then pitch (x) then roll (z) */
{
    f32 cx = cosf(x / 2), sx = sinf(x / 2), cy = cosf(y / 2), sy = sinf(y / 2), cz = cosf(z / 2), sz = sinf(z / 2);
    ak_quat q = { cy * sx * cz + sy * cx * sz, sy * cx * cz - cy * sx * sz, cy * cx * sz - sy * sx * cz, cy * cx * cz + sy * sx * sz };
    return q;
}

bool ak_entities_load(const ak_level *l, const ak_model_set *ms, ak_arena *a, ak_entity_set *out)
{
    memset(out, 0, sizeof *out);
    u32 *mesh_hash = AK_NEW(a, u32, ms->nmodels ? ms->nmodels : 1);
    if (!mesh_hash) return false;
    for (u32 i = 0; i < ms->nmodels; i++) mesh_hash[i] = ms->models[i].hash;
    ak_chunk c; u32 pos = 8, n = 0;
    while (ak_asura_next(&l->file, &pos, &c)) if (ak_chunk_tag(&c) == AK_TAG('E', 'N', 'T', 'I')) n++;
    out->e = AK_NEW(a, ak_entity, n ? n : 1);
    if (!out->e) return false;
    pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 12) continue;
        u32 nw = c.size / 4; const u8 *b = c.body;
        #define W(i) ((u32)(i) < nw ? ak_rd32(b + 4 * (u32)(i)) : 0u)
        #define F(i) wf(W(i))
        ak_entity *e = &out->e[out->n++]; memset(e, 0, sizeof *e);
        e->id = W(0); e->type = W(1) & 0x7FFF; e->flagged = (W(1) >> 15) & 1; e->model[0] = e->model[1] = -1; e->rot.w = 1;
        f32 gp[3] = { 0, 0, 0 }; ak_quat gq = { 0, 0, 0, 1 }; bool have = false;
        if (e->flagged && e->type == 27 && nw >= 18) {
            e->model[0] = model_by_hash(ms, l, W(9), mesh_hash); e->model[1] = model_by_hash(ms, l, W(10), mesh_hash);
            gp[0] = F(12); gp[1] = F(13); gp[2] = F(14); gq = quat_from_euler(F(15), F(16), F(17)); have = true;
        } else if (e->flagged && e->type == 13 && nw >= 20) {
            e->model[0] = model_by_hash(ms, l, W(7), mesh_hash);
            gp[0] = F(8); gp[1] = F(9); gp[2] = F(10);
            f32 m[9]; for (int k = 0; k < 9; k++) m[k] = F(11 + k);
            gq = quat_from_rows(m); have = true;
        } else {
            for (u32 i = 3; i < nw && e->model[0] < 0; i++) {
                s32 mi = model_by_hash(ms, l, W(i), mesh_hash);
                if (mi < 0) continue;
                e->model[0] = mi;
                for (s32 j = (s32)i - 7; j >= 2 && !have; j--) {           /* position + unit quaternion just before the hash */
                    f32 p[3] = { F(j), F(j + 1), F(j + 2) }, q[4] = { F(j + 3), F(j + 4), F(j + 5), F(j + 6) };
                    bool ok = true;
                    for (int k = 0; k < 3; k++) ok = ok && finite_small(p[k], 20000);
                    for (int k = 0; k < 4; k++) ok = ok && finite_small(q[k], 1.01f);
                    if (!ok || fabsf(q[0] * q[0] + q[1] * q[1] + q[2] * q[2] + q[3] * q[3] - 1) > 1e-3f) continue;
                    if (fabsf(p[0]) + fabsf(p[1]) + fabsf(p[2]) < 0.05f) continue;
                    memcpy(gp, p, 12); gq.x = q[0]; gq.y = q[1]; gq.z = q[2]; gq.w = q[3]; have = true;
                }
            }
        }
        #undef W
        #undef F
        if (have) { ak_from_game(gp, e->pos); e->rot = q_game(gq.x, gq.y, gq.z, gq.w); }
        e->placed = have && (e->model[0] >= 0 || e->model[1] >= 0);
        out->placed += e->placed;
    }
    return true;
}
