#include "ak_scene.h"
#include <stdlib.h>

typedef struct ak_draw_item { u32 key; u32 batch; } ak_draw_item;

static bool texture_has_cutout(const ak_texture *t)
{
    u32 n = 1u << t->bpp; u8 used[256] = { 0 };
    u32 w = t->width, h = t->height;
    const u8 *px = t->pixels[0];
    if (t->bpp == 8) for (u32 i = 0; i < w * h; i++) used[px[i]] = 1;
    else for (u32 i = 0; i < w * h; i++) used[(px[i >> 1] >> ((i & 1) * 4)) & 15] = 1;
    for (u32 i = 0; i < n; i++) if (used[i] && (t->palette[i] >> 24) < 128) return true;
    return false;
}

bool ak_scene_level_init(ak_scene_level *s, const ak_level *l, ak_arena *a)
{
    memset(s, 0, sizeof *s); s->level = l;
    const ak_level_geom *g = &l->geom;
    s->vb = ak_gfx_vertices(g->vtx, g->nvtx); s->ib = ak_gfx_indices(g->idx, g->nidx);
    s->tex = AK_NEW(a, ak_gfx_tex *, l->ntex ? l->ntex : 1); s->tex_cutout = AK_NEW(a, u8, l->ntex ? l->ntex : 1);
    s->items = AK_NEW(a, ak_draw_item, g->nbatch ? g->nbatch : 1); s->nitems_cap = g->nbatch;
    s->obj_visible = AK_NEW(a, u8, g->nobj ? g->nobj : 1);
    if (!s->vb || !s->ib || !s->tex || !s->items || !s->obj_visible) return false;
    for (u32 i = 0; i < l->ntex; i++) { s->tex[i] = ak_gfx_texture(&l->tex[i]); s->tex_cutout[i] = texture_has_cutout(&l->tex[i]); }
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
    memset(s, 0, sizeof *s);
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
                 : (m && (m->flags & AK_MAT_ALPHA_TEST)) || (ti >= 0 && s->tex_cutout[ti]) ? AK_PIPE_CUTOUT : AK_PIPE_OPAQUE;
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
