#include <stdio.h>
#include "ak_scene.h"
#include <stdlib.h>
#include <math.h>

typedef struct ak_draw_item { u32 key; u32 batch; } ak_draw_item;

bool ak_scene_level_init(ak_scene_level *s, const ak_level *l, ak_arena *a)
{
    memset(s, 0, sizeof *s); s->level = l;
    const ak_level_geom *g = &l->geom;
    s->vb = ak_gfx_vertices(g->vtx, g->nvtx); s->ib = ak_gfx_indices(g->idx, g->nidx);
    s->tex = AK_NEW(a, ak_gfx_tex *, l->ntex ? l->ntex : 1);
    s->items = AK_NEW(a, ak_draw_item, g->nbatch ? g->nbatch : 1); s->nitems_cap = g->nbatch;
    s->obj_visible = AK_NEW(a, u8, g->nobj ? g->nobj : 1);
    if (!s->vb || !s->ib || !s->tex || !s->items || !s->obj_visible) return false;
    for (u32 i = 0; i < l->ntex; i++) { s->tex[i] = ak_gfx_texture(&l->tex[i]); }
    if (l->has_sky) {   /* unit cube faces seen from inside: front -Z, back +Z, left -X, right +X, up +Y; corners TL, TR, BL, BR */
        static const s8 F[5][4][3] = {
            { { -1, 1, -1 }, { 1, 1, -1 }, { -1, -1, -1 }, { 1, -1, -1 } }, { { 1, 1, 1 }, { -1, 1, 1 }, { 1, -1, 1 }, { -1, -1, 1 } },
            { { -1, 1, 1 }, { -1, 1, -1 }, { -1, -1, 1 }, { -1, -1, -1 } }, { { 1, 1, -1 }, { 1, 1, 1 }, { 1, -1, -1 }, { 1, -1, 1 } },
            { { -1, 1, 1 }, { 1, 1, 1 }, { -1, 1, -1 }, { 1, 1, -1 } } };
        ak_vtx v[20]; u32 ix[30]; const f32 e = 1.0f / 512.0f;
        for (int f = 0; f < 5; f++) {
            for (int c = 0; c < 4; c++) {
                ak_vtx *o = &v[f * 4 + c]; memset(o, 0, sizeof *o);
                for (int k = 0; k < 3; k++) o->pos[k] = F[f][c][k];
                o->uv[0] = (c & 1) ? 1 - e : e; o->uv[1] = (c & 2) ? 1 - e : e;
                for (int k = 0; k < 3; k++) { f32 t = l->sky_tint[k] * (128.0f / 255.0f); o->col[k] = (u8)(t > 255 ? 255 : t); }
                o->col[3] = 255;
            }
            u32 b = (u32)f * 4, *q = ix + f * 6;
            q[0] = b; q[1] = b + 2; q[2] = b + 3; q[3] = b; q[4] = b + 3; q[5] = b + 1;      /* TL BL BR, TL BR TR */
        }
        s->sky_vb = ak_gfx_vertices(v, 20); s->sky_ib = ak_gfx_indices(ix, 30);
    }
    for (int k = 0; k < 3; k++) { s->bounds_min[k] = 1e30f; s->bounds_max[k] = -1e30f; }
    for (u32 o = 0; o < g->nobj; o++)
        if (g->obj_bounds[o].min[0] <= g->obj_bounds[o].max[0])
            for (int k = 0; k < 3; k++) {
                if (g->obj_bounds[o].min[k] < s->bounds_min[k]) s->bounds_min[k] = g->obj_bounds[o].min[k];
                if (g->obj_bounds[o].max[k] > s->bounds_max[k]) s->bounds_max[k] = g->obj_bounds[o].max[k];
            }
    return true;
}

void ak_scene_level_free(ak_scene_level *s)
{
    ak_gfx_wait_idle();
    for (u32 i = 0; s->level && i < s->level->ntex; i++) ak_gfx_free_tex(s->tex[i]);
    ak_gfx_free_buf(s->vb); ak_gfx_free_buf(s->ib);
    if (s->sky_vb) { ak_gfx_free_buf(s->sky_vb); ak_gfx_free_buf(s->sky_ib); }
    memset(s, 0, sizeof *s);
}

void ak_scene_sky_draw(ak_scene_level *s, const ak_m4 *proj, const ak_m4 *view, f32 radius)
{
    if (!s->sky_vb) return;
    const ak_level *l = s->level;
    ak_m4 rv = *view; rv.m[12] = rv.m[13] = rv.m[14] = 0;                 /* rotation only: the sky stays around the camera */
    f32 c = cosf(l->sky_angle), sn = sinf(l->sky_angle);
    ak_m4 w; memset(&w, 0, sizeof w);
    w.m[0] = c * radius; w.m[2] = -sn * radius; w.m[5] = radius; w.m[8] = sn * radius; w.m[10] = c * radius; w.m[15] = 1;
    ak_m4 pv = ak_m4_mul(proj, &rv), mvp = ak_m4_mul(&pv, &w);
    ak_gfx_set_transform(&mvp);
    for (int f = 0; f < 5; f++)
        if (l->sky_tex[f] >= 0) ak_gfx_draw(AK_PIPE_OPAQUE, s->tex[l->sky_tex[f]], s->sky_vb, s->sky_ib, (u32)f * 6, 6);
    ak_gfx_set_transform(NULL);
    ak_gfx_set_cull(true);
}

static s32 batch_texture(const ak_level *l, const ak_batch *bt)
{
    if (bt->material >= l->nmat) return -1;
    const ak_material *m = &l->mat[bt->material];
    return bt->layer && m->texture2 >= 0 ? m->texture2 : m->texture;
}

static int item_cmp(const void *x, const void *y)
{
    const ak_draw_item *a = (const ak_draw_item *)x, *b = (const ak_draw_item *)y;
    if (a->key != b->key) return a->key < b->key ? -1 : 1;
    return a->batch < b->batch ? -1 : a->batch > b->batch ? 1 : 0;
}

void ak_scene_level_draw(ak_scene_level *s, const ak_m4 *vp, ak_scene_stats *st)
{
    const ak_level *l = s->level; const ak_level_geom *g = &l->geom;
    ak_frustum f = ak_frustum_from(vp);
    memset(st, 0, sizeof *st); st->objects = g->nobj;
    for (u32 o = 0; o < g->nobj; o++) {
        const ak_aabb *b = &g->obj_bounds[o];
        s->obj_visible[o] = b->min[0] <= b->max[0] && ak_frustum_aabb(&f, b->min, b->max);
        st->objects_visible += s->obj_visible[o];
    }
    u32 n = 0;
    for (u32 i = 0; i < g->nbatch; i++) {
        const ak_batch *bt = &g->batch[i];
        if (!s->obj_visible[bt->object]) continue;
        const ak_material *m = bt->material < l->nmat ? &l->mat[bt->material] : NULL;
        s32 ti = m ? (bt->layer && m->texture2 >= 0 ? m->texture2 : m->texture) : -1;
        u32 pipe = bt->layer ? AK_PIPE_LAYER
                 : bt->overlay && !(m && (m->flags & (AK_MAT_ADDITIVE | AK_MAT_BLENDED))) ? AK_PIPE_OVERLAY
                 : m && (m->flags & AK_MAT_ADDITIVE) ? AK_PIPE_ADD
                 : m && (m->flags & AK_MAT_BLENDED) ? AK_PIPE_BLEND
                 : (m && (m->flags & AK_MAT_ALPHA_TEST)) ? AK_PIPE_CUTOUT : AK_PIPE_OPAQUE;
        /* key: pipeline (3 bits) | texture (13 bits).  Blended pipelines keep the game's order (the batch index breaks ties). */
        u32 key = (pipe << 29) | (pipe >= AK_PIPE_OVERLAY ? 0 : ((u32)(ti + 1) & 0x1FFF) << 16);
        s->items[n].key = key; s->items[n].batch = i; n++;
    }
    qsort(s->items, n, sizeof *s->items, item_cmp);
    for (u32 k = 0; k < n;) {                 /* neighbouring batches with the same state and adjoining index ranges: one draw */
        const ak_batch *bt = &g->batch[s->items[k].batch];
        s32 ti = batch_texture(l, bt);
        u32 first = bt->first, count = bt->count, key = s->items[k].key;
        for (k++; k < n && s->items[k].key == key; k++) {
            const ak_batch *nb = &g->batch[s->items[k].batch];
            s32 nt = batch_texture(l, nb);
            if (nb->first != first + count || nt != ti) break;
            count += nb->count;
        }
        ak_gfx_draw((ak_pipe)(key >> 29), ti >= 0 ? s->tex[ti] : NULL, s->vb, s->ib, first, count);
        st->tris += count / 3; st->draws++;
    }
}

/* ------------------------------------------------------------------ models */
bool ak_scene_models_init(ak_scene_models *s, const ak_model_set *set, const ak_scene_level *level, ak_arena *a)
{
    memset(s, 0, sizeof *s); s->set = set; s->level = level;
    u32 nv = 0, ni = 0;
    for (u32 i = 0; i < set->nmodels; i++) { nv += set->models[i].nvtx; ni += set->models[i].nidx; }
    s->index_base = AK_NEW(a, u32, set->nmodels ? set->nmodels : 1);
    ak_vtx *v = (ak_vtx *)malloc(sizeof *v * (nv ? nv : 1)); u32 *ix = (u32 *)malloc(4u * (ni ? ni : 1));
    if (!s->index_base || !v || !ix) { free(v); free(ix); return false; }
    u32 vo = 0, io = 0;
    for (u32 i = 0; i < set->nmodels; i++) {
        const ak_model *m = &set->models[i];
        memcpy(v + vo, m->vtx, sizeof *v * m->nvtx);
        for (u32 k = 0; k < m->nidx; k++) ix[io + k] = m->idx[k] + vo;
        s->index_base[i] = io; vo += m->nvtx; io += m->nidx;
    }
    s->vb = ak_gfx_vertices(v, nv); s->ib = ak_gfx_indices(ix, ni);
    free(v); free(ix);
    const ak_level *l = level->level;
    s->masked = AK_NEW(a, u8, l->ntex ? l->ntex : 1);
    for (u32 i = 0; s->masked && i < l->ntex; i++) s->masked[i] = ak_texture_has_colour_mask(&l->tex[i]);
    s->cap_variant = 256; s->variant = calloc(s->cap_variant, sizeof *s->variant);
    return s->vb && s->ib && s->masked && s->variant;
}

void ak_scene_models_free(ak_scene_models *s)
{
    ak_gfx_wait_idle();
    for (u32 i = 0; i < s->nvariant; i++) ak_gfx_free_tex(s->variant[i].gt);
    free(s->variant);
    ak_gfx_free_buf(s->vb); ak_gfx_free_buf(s->ib);
    memset(s, 0, sizeof *s);
}


static ak_gfx_tex *coloured(ak_scene_models *s, s32 ti, const ak_model_colours *c)
{
    for (u32 i = 0; i < s->nvariant; i++)
        if (s->variant[i].tex == ti && s->variant[i].c1 == c->colour1 && s->variant[i].c2 == c->colour2) return s->variant[i].gt;
    if (s->nvariant == s->cap_variant) return s->level->tex[ti];                    /* full: as stored */
    const ak_texture *t = &s->level->level->tex[ti]; u32 pal[256];
    ak_texture_recolor(t, c->colour1, c->colour2, pal);
    ak_gfx_tex *g = ak_gfx_texture_palette(s->level->tex[ti], t, pal);
    if (!g) return s->level->tex[ti];
    s->variant[s->nvariant].tex = ti; s->variant[s->nvariant].c1 = c->colour1; s->variant[s->nvariant].c2 = c->colour2; s->variant[s->nvariant].gt = g;
    s->nvariant++;
    return g;
}

/* a weighted (v2) mesh: each vertex moved by its bones' pose x inverse bind, blended by weight, on the CPU into this frame's memory
   (heroes and creatures are few; the soldiers stay rigid parts on the GPU) */
static int g_force_pipe = -1;
void ak_scene_force_pipe(int pipe) { g_force_pipe = pipe; }

static void draw_skinned(ak_scene_models *s, const ak_model *m, const ak_m4 *vw, const f32 (*bones)[12], const ak_model_colours *colours, ak_scene_stats *st)
{
    static f32 K[256][12]; static ak_vtx *sv, *tri; static u32 svcap, tricap;
    const ak_skeleton *sk = &s->set->skels[m->skeleton];
    u32 nb = sk->nbones < 256 ? sk->nbones : 256;
    for (u32 i = 0; i < nb; i++) {                                  /* K = pose x inverse(bind) */
        ak_quat q = sk->world_q[i]; f32 x = q.x, y = q.y, z = q.z, w = q.w, R[9], t[3];
        R[0] = 1 - 2 * (y * y + z * z); R[1] = 2 * (x * y - z * w);     R[2] = 2 * (x * z + y * w);
        R[3] = 2 * (x * y + z * w);     R[4] = 1 - 2 * (x * x + z * z); R[5] = 2 * (y * z - x * w);
        R[6] = 2 * (x * z - y * w);     R[7] = 2 * (y * z + x * w);     R[8] = 1 - 2 * (x * x + y * y);
        for (int r = 0; r < 3; r++) t[r] = -(R[r] * sk->world_t[i][0] + R[3 + r] * sk->world_t[i][1] + R[6 + r] * sk->world_t[i][2]);   /* -R^T t */
        const f32 *P = bones[i];
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) K[i][r * 4 + c] = P[r * 4] * R[c * 3] + P[r * 4 + 1] * R[c * 3 + 1] + P[r * 4 + 2] * R[c * 3 + 2];   /* P R^T */
            K[i][r * 4 + 3] = P[r * 4] * t[0] + P[r * 4 + 1] * t[1] + P[r * 4 + 2] * t[2] + P[r * 4 + 3];
        }
    }
    if (m->nvtx > svcap) { ak_vtx *n = (ak_vtx *)realloc(sv, sizeof *sv * m->nvtx); if (!n) return; sv = n; svcap = m->nvtx; }
    if (m->nidx > tricap) { ak_vtx *n = (ak_vtx *)realloc(tri, sizeof *tri * m->nidx); if (!n) return; tri = n; tricap = m->nidx; }
    for (u32 i = 0; i < m->nvtx; i++) {
        const ak_vtx *v = &m->vtx[i]; const struct ak_skin_w *sw = &m->skin[i]; f32 p[3] = { 0, 0, 0 }, n[3] = { 0, 0, 0 };
        f32 vn[3] = { v->nrm[0] / 127.0f, v->nrm[1] / 127.0f, v->nrm[2] / 127.0f };
        for (int k = 0; k < 4; k++) {
            if (!sw->w[k]) continue;
            const f32 *A = K[sw->bone[k] < nb ? sw->bone[k] : 0]; f32 wt = sw->w[k] * (1.0f / 128.0f);
            for (int r = 0; r < 3; r++) {
                p[r] += wt * (A[r * 4] * v->pos[0] + A[r * 4 + 1] * v->pos[1] + A[r * 4 + 2] * v->pos[2] + A[r * 4 + 3]);
                n[r] += wt * (A[r * 4] * vn[0] + A[r * 4 + 1] * vn[1] + A[r * 4 + 2] * vn[2]);
            }
        }
        sv[i] = *v; memcpy(sv[i].pos, p, 12);
        for (int r = 0; r < 3; r++) { f32 q = n[r] * 127.0f; sv[i].nrm[r] = (s8)(q < -127 ? -127 : q > 127 ? 127 : q); }
    }
    ak_gfx_set_cull(false); ak_gfx_set_transform(vw);
    for (int pass = 0; pass < 2; pass++)
        for (u32 p = 0; p < m->nparts; p++) {
            const ak_model_part *pt = &m->parts[p];
            if (!pt->count) continue;
            ak_pipe pipe = g_force_pipe >= 0 ? (ak_pipe)g_force_pipe : (pt->flags & AK_MAT_ADDITIVE) ? AK_PIPE_ADD : (pt->flags & AK_MAT_BLENDED) ? AK_PIPE_BLEND
                         : ((pt->flags & AK_MAT_ALPHA_TEST)) ? AK_PIPE_CUTOUT : AK_PIPE_OPAQUE;
            if ((pipe >= AK_PIPE_LAYER) != (pass == 1)) continue;
            for (u32 k = 0; k < pt->count; k++) tri[k] = sv[m->idx[pt->first + k]];
            ak_gfx_tex *gt = pt->texture < 0 ? NULL : colours && s->masked[pt->texture] ? coloured(s, pt->texture, colours) : s->level->tex[pt->texture];
            ak_gfx_draw_immediate(pipe, gt, tri, pt->count);
            if (st) { st->draws++; st->tris += pt->count / 3; }
        }
    ak_gfx_set_transform(NULL);
    ak_gfx_set_cull(true);
}

void ak_scene_models_draw(ak_scene_models *s, u32 mi, const ak_m4 *vp, const ak_m4 *world, const f32 (*bones)[12],
                          const ak_model_colours *colours, ak_scene_stats *st)
{
    const ak_model *m = &s->set->models[mi];
    ak_m4 vw = ak_m4_mul(vp, world);
    if (m->skin && bones && m->skeleton >= 0) { draw_skinned(s, m, &vw, bones, colours, st); return; }
    ak_gfx_set_cull(false);
    for (int pass = 0; pass < 2; pass++)                      /* opaque and cutout parts first, blended after */
        for (u32 p = 0; p < m->nparts; p++) {
            const ak_model_part *pt = &m->parts[p];
            if (!pt->count) continue;
            ak_pipe pipe = g_force_pipe >= 0 ? (ak_pipe)g_force_pipe : (pt->flags & AK_MAT_ADDITIVE) ? AK_PIPE_ADD : (pt->flags & AK_MAT_BLENDED) ? AK_PIPE_BLEND
                         : ((pt->flags & AK_MAT_ALPHA_TEST)) ? AK_PIPE_CUTOUT : AK_PIPE_OPAQUE;
            if ((pipe >= AK_PIPE_LAYER) != (pass == 1)) continue;
            ak_m4 bm;
            if (bones) {
                const f32 *r = bones[pt->bone];
                f32 c[16] = { r[0], r[4], r[8], 0, r[1], r[5], r[9], 0, r[2], r[6], r[10], 0, r[3], r[7], r[11], 1 };
                memcpy(bm.m, c, sizeof c);
            } else { memset(&bm, 0, sizeof bm); bm.m[0] = bm.m[5] = bm.m[10] = bm.m[15] = 1; }
            ak_m4 mvp = ak_m4_mul(&vw, &bm);
            ak_gfx_set_transform(&mvp);
            ak_gfx_tex *gt = pt->texture < 0 ? NULL : colours && s->masked[pt->texture] ? coloured(s, pt->texture, colours) : s->level->tex[pt->texture];
            ak_gfx_draw(pipe, gt, s->vb, s->ib, s->index_base[mi] + pt->first, pt->count);
            if (st) { st->draws++; st->tris += pt->count / 3; }
        }
    ak_gfx_set_transform(NULL);
    ak_gfx_set_cull(true);
}
