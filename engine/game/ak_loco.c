#include "game/ak_loco.h"
#include <math.h>
#include <string.h>

ak_root_track *ak_root_tracks_make(const ak_model_set *m, ak_arena *a)
{
    ak_root_track *tr = AK_NEW(a, ak_root_track, m->nclips ? m->nclips : 1);
    if (!tr) return NULL;
    memset(tr, 0, sizeof *tr * (m->nclips ? m->nclips : 1));
    for (u32 i = 0; i < m->nclips; i++) {
        const ak_anim_clip *c = &m->clips[i];
        if (c->nchannels <= c->nbones || c->duration <= 0) continue;
        const ak_anim_channel *ch = &c->chan[c->nchannels - 1];
        u32 n = ch->pos_count;
        if (n < 2) continue;
        f32 *t = AK_NEW(a, f32, n); f32 (*v)[2] = (f32 (*)[2])ak_arena_alloc(a, sizeof(f32) * 2 * n, 4);
        if (!t || !v) continue;
        for (u32 k = 0; k < n; k++)                                           /* the key times: the rotation keys' when the counts match */
            t[k] = ch->pos_count == ch->rot_count ? c->rtime[ch->rot_first + k] / 65535.0f * c->duration : (f32)k / (f32)(n - 1) * c->duration;
        bool moves = false;
        for (u32 k = 0; k + 1 < n; k++) {
            const f32 *p0 = c->pos[ch->pos_first + k], *p1 = c->pos[ch->pos_first + k + 1];
            f32 d = t[k + 1] - t[k];
            if (d <= 1e-6f) { v[k][0] = v[k][1] = 0; continue; }
            v[k][0] = -(p1[2] - p0[2]) / d; v[k][1] = (p1[0] - p0[0]) / d;   /* model space: -z forward, +x right */
            if (fabsf(v[k][0]) + fabsf(v[k][1]) > 1e-3f) moves = true;
        }
        v[n - 1][0] = v[n - 1][1] = 0;
        if (!moves) continue;                                                /* (idles: no root motion worth carrying) */
        tr[i].n = n; tr[i].dur = c->duration; tr[i].t = t; tr[i].v = v;
    }
    return tr;
}

void ak_root_track_vel(const ak_root_track *tr, f32 t, f32 out[2])
{
    out[0] = out[1] = 0;
    if (!tr || tr->n < 2) return;
    t = fmodf(t, tr->dur); if (t < 0) t += tr->dur;
    u32 lo = 0, hi = tr->n - 1;                                              /* the segment holding t */
    while (hi - lo > 1) { u32 mid = (lo + hi) / 2; if (tr->t[mid] <= t) lo = mid; else hi = mid; }
    out[0] = tr->v[lo][0]; out[1] = tr->v[lo][1];
}

void ak_loco_reset(ak_loco *l, s32 clip) { l->cur = clip; l->prev = -1; l->t = l->prev_t = 0; l->w = 1; }

void ak_loco_play(ak_loco *l, s32 clip)
{
    if (clip == l->cur) return;
    l->prev = l->cur; l->prev_t = l->t; l->cur = clip; l->t = 0; l->w = 0;
}

void ak_loco_advance(ak_loco *l, f32 dt, f32 rate)
{
    l->t += dt * rate; l->prev_t += dt * rate;
    l->w += dt / AK_LOCO_FADE; if (l->w >= 1) { l->w = 1; l->prev = -1; }
}

void ak_loco_vel(const ak_loco *l, const ak_root_track *tracks, f32 out[2])
{
    f32 a[2] = { 0, 0 }, b[2] = { 0, 0 };
    if (l->cur >= 0) ak_root_track_vel(&tracks[l->cur], l->t, a);
    if (l->prev >= 0 && l->w < 1) ak_root_track_vel(&tracks[l->prev], l->prev_t, b);
    f32 w = l->prev >= 0 ? l->w : 1;
    out[0] = a[0] * w + b[0] * (1 - w); out[1] = a[1] * w + b[1] * (1 - w);
}

f32 ak_loco_stick_axis(f32 v)
{
    f32 m = fabsf(v);
    if (m <= 0.25f) return 0;
    m = (m - 0.25f) / 0.75f; if (m > 1) m = 1;
    return v < 0 ? -m : m;
}

int ak_loco_gait(f32 magnitude) { return magnitude < 0.35f ? 0 : magnitude < 0.56f ? 1 : 2; }
