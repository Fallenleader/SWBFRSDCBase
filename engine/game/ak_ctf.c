/* Aurek - capture the flag (see ak_ctf.h) */
#include <math.h>
#include <string.h>
#include "assets/entity.h"
#include "core/ak_settings.h"
#include "game/ak_ctf.h"

static f32 wf(const u8 *p) { u32 w = ak_rd32(p); f32 f; memcpy(&f, &w, 4); return f; }

/* the record's position: the first position + unit quaternion (words 7..13 in the shipped levels) */
static bool rec_pos(const u8 *b, u32 nw, f32 g[3])
{
    for (u32 j = 3; j + 7 <= nw; j++) {
        f32 q[4] = { wf(b + 4 * (j + 3)), wf(b + 4 * (j + 4)), wf(b + 4 * (j + 5)), wf(b + 4 * (j + 6)) };
        f32 p[3] = { wf(b + 4 * j), wf(b + 4 * (j + 1)), wf(b + 4 * (j + 2)) };
        bool ok = true;
        for (int k = 0; k < 3; k++) ok = ok && isfinite(p[k]) && fabsf(p[k]) < 20000;
        for (int k = 0; k < 4; k++) ok = ok && isfinite(q[k]) && fabsf(q[k]) <= 1.01f;
        if (!ok || fabsf(q[0] * q[0] + q[1] * q[1] + q[2] * q[2] + q[3] * q[3] - 1) > 1e-3f) continue;
        if (fabsf(p[0]) + fabsf(p[1]) + fabsf(p[2]) < 0.05f) continue;
        memcpy(g, p, 12); return true;
    }
    return false;
}

/* the word index of the mode mask (see ak_enti_modes), or 0 */
static u32 mask_at(const u8 *b, u32 nw)
{
    for (u32 i = 8; i + 5 < nw; i++) {
        if (ak_rd32(b + 4 * i) != 999) continue;
        f32 hp = wf(b + 4 * (i + 3)); u32 m = ak_rd32(b + 4 * (i + 5));
        if (ak_rd32(b + 4 * (i + 4)) == 0 && hp > 0 && hp < 1e6f && m && m <= 0x3Fu) return i + 5;
    }
    return 0;
}

bool ak_ctf_load(const ak_level *l, int mode, ak_ctf_map *out)
{
    memset(out, 0, sizeof *out); out->drop_raise = 0.1f;
    if (mode < 1 || mode > 3) return false;
    ak_chunk c; u32 pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 30 * 4) continue;
        const u8 *b = c.body; u32 nw = c.size / 4, type = ak_rd32(b + 4) & 0xFFFF;
        if ((type != 0x8019 && type != 0x8017) || !ak_enti_active(b, c.size)) continue;
        u32 m = mask_at(b, nw); f32 g[3];
        if (!m || m + 3 >= nw || !rec_pos(b, nw, g)) continue;
        u32 side = ak_rd32(b + 4 * (m + 2));
        if (type == 0x8019 && out->nflags < AK_CTF_MAX) {                  /* 089F01A8: +0x58 side, +0x5C, +0x60, +0x64 bots may carry */
            ak_ctf_flag_def *f = &out->flag[out->nflags++];
            f->id = ak_rd32(b); f->side = side <= 1 ? (int)side : 2; f->bots = m + 5 < nw ? (b[4 * (m + 5)] != 0) : true;
            g[1] -= 0.5f;                                                   /* 089F0064: home is 0.5 m up (the game's y is down) */
            ak_from_game(g, f->home);
        } else if (type == 0x8017 && out->nbases < AK_CTF_MAX) {           /* +0x54 side, +0x58 radius */
            ak_ctf_base_def *bs = &out->base[out->nbases++];
            bs->id = ak_rd32(b); bs->side = side <= 1 ? (int)side : 2; bs->radius = wf(b + 4 * (m + 3));
            if (!(bs->radius > 0 && bs->radius < 1000)) bs->radius = 5.0f;   /* (the class default, DAT_08AEF378) */
            ak_from_game(g, bs->pos);
        }
    }
    return out->nflags > 0 && out->nbases > 0;
}

void ak_ctf_start(const ak_ctf_map *m, ak_ctf *s)
{
    memset(s, 0, sizeof *s);
    s32 lim = ak_setting_int("AK_CTF_CAPTURES", 5);                       /* option +428 (0897782C), its range 3..20 */
    s->limit = lim < 3 ? 3 : lim > 20 ? 20 : lim;
    s->time_limit = ak_setting_float("AK_TIME_LIMIT", 60.0f) * 60.0f;     /* option +392 (08979DB4), minutes */
    s->winner = -1; s->last_side = -1; s->last_capturer = -1;
    for (u32 i = 0; i < m->nflags; i++) { s->flag[i].present = true; memcpy(s->flag[i].pos, m->flag[i].home, 12); s->flag[i].carrier = -1; }
}

static f32 dist(const f32 *a, const f32 *b) { f32 x = a[0] - b[0], y = a[1] - b[1], z = a[2] - b[2]; return sqrtf(x * x + y * y + z * z); }

static void go_home(const ak_ctf_map *m, ak_ctf *s, u32 f)
{
    /* the flag object goes (089F73C0 / 088744F8); the spawner's next update makes a new one at home (089EFF44 -> 089F0064) */
    s->flag[f].present = true; s->flag[f].carrier = -1; s->flag[f].return_t = 0; memcpy(s->flag[f].pos, m->flag[f].home, 12);
}

void ak_ctf_update(const ak_ctf_map *m, ak_ctf *s, int mode, bool space, const ak_ctf_soldier *sol, u32 n, f32 dt)
{
    s->events = 0;
    if (s->winner >= 0) return;
    s->time += dt;
    for (u32 f = 0; f < m->nflags; f++) {
        ak_ctf_flag *fl = &s->flag[f];
        if (fl->return_t > 0 && s->time >= fl->return_t) { go_home(m, s, f); s->events |= AK_CTF_EV_RETURN; s->last_side = m->flag[f].side; }
        if (fl->carrier < 0) {
            /* pickup (089F708C): the first soldier in range who may carry it and carries nothing yet */
            f32 r = space ? 400.0f : 4.0f;                                  /* DAT_08AEF460 / 08AEF464 */
            for (u32 i = 0; i < n; i++) {
                const ak_ctf_soldier *c = &sol[i];
                if (!c->alive || !c->on_foot || (c->bot && !m->flag[f].bots)) continue;
                if (mode != 3 && c->side == m->flag[f].side) continue;      /* 089F7D9C */
                bool busy = false; for (u32 k = 0; k < m->nflags; k++) busy = busy || s->flag[k].carrier == (s32)i;
                if (busy || dist(c->pos, fl->pos) > r) continue;
                fl->carrier = (s32)i; fl->return_t = 0;                     /* 089F79A0 */
                s->events |= AK_CTF_EV_PICKUP; s->last_side = c->side;
                break;
            }
        } else {
            const ak_ctf_soldier *c = &sol[fl->carrier];
            if ((u32)fl->carrier >= n || !c->alive) {
                /* drop (089F7B4C): at the carrier's feet; back home in 30 s (the campaign: never) */
                fl->carrier = -1; fl->return_t = mode == 5 ? 0 : s->time + 30.0f;   /* DAT_08AEF470 */
                fl->pos[1] += m->drop_raise;
                s->events |= AK_CTF_EV_DROP; s->last_side = m->flag[f].side;
            } else memcpy(fl->pos, c->pos, 12);
        }
    }
    /* the bases (089EF220) */
    for (u32 b = 0; b < m->nbases; b++) {
        const ak_ctf_base_def *bs = &m->base[b];
        for (u32 f = 0; f < m->nflags; f++) {
            ak_ctf_flag *fl = &s->flag[f]; if (fl->carrier < 0) continue;
            int fs = m->flag[f].side, cs = sol[fl->carrier].side, bsd = bs->side;
            if (dist(fl->pos, bs->pos) > bs->radius) continue;
            if (mode == 3 && fs == bsd && fs == cs) { go_home(m, s, f); s->events |= AK_CTF_EV_RETURN; continue; }   /* 089F7894 */
            if ((fs == 2 || fs != bsd) && (mode != 1 || bsd == cs) && fs != cs) {
                if (bsd == 0 || bsd == 1) s->score[bsd]++;                  /* 08973830 */
                s->events |= AK_CTF_EV_CAPTURE; s->last_side = bsd; s->last_capturer = fl->carrier;
                go_home(m, s, f);
                if (bsd <= 1 && s->limit > 0 && s->score[bsd] >= s->limit) { s->winner = bsd; return; }
            }
        }
    }
    /* the time limit (08972964): more captures wins; tickets being unlimited, a tie is a draw */
    if (s->time_limit > 0 && s->time >= s->time_limit) s->winner = s->score[0] > s->score[1] ? 0 : s->score[1] > s->score[0] ? 1 : 2;
}
