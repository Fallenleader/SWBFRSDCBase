/* Aurek - the level script (see ak_script.h for what is traced and where). */
#include "game/ak_script.h"
#include "core/ak_settings.h"
#include "core/ak_core.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

static u32 rnd(ak_script *s)                                             /* the game's generator (08879A50, 08870E0C) */
{
    s->rng[0] = s->rng[0] * 0x10000u + (u32)((s32)s->rng[0] >> 16) + s->rng[1];
    s->rng[1] += s->rng[0];
    return s->rng[0] >> 1;
}
static f32 rd_f(const u8 *p) { f32 f; u32 w = ak_rd32(p); memcpy(&f, &w, 4); return f; }

static ak_snode *find(ak_script *s, u32 id)
{
    u32 lo = 0, hi = s->nnodes;
    while (lo < hi) { u32 m = (lo + hi) / 2; if (s->node[m].id < id) lo = m + 1; else hi = m; }
    return lo < s->nnodes && s->node[lo].id == id ? &s->node[lo] : NULL;
}
const ak_snode *ak_script_node(const ak_script *s, u32 id) { return find((ak_script *)s, id); }

/* ---- loading */
static bool is_node_type(u32 t) { return t == AK_SN_COND || t == AK_SN_USE || t == AK_SN_LOOK || t == AK_SN_REGION || t == AK_SN_TIMER || t == AK_SN_SELECTOR || t == AK_SN_COUNTER || t == AK_SN_FMV || t == AK_SN_MUSIC; }

static u32 wd(const u8 *b, u32 nw, u32 i) { return i < nw ? ak_rd32(b + 4 * i) : 0u; }

static bool parse_node(const u8 *b, u32 size, ak_arena *a, int mode, ak_snode *n)
{
    u32 nw = size / 4, k;
    #define W(i) wd(b, nw, (i))
    memset(n, 0, sizeof *n);
    n->id = W(0); n->type = (W(1) & 0xFFFF) == AK_SN_COND ? AK_SN_COND : (W(1) & 0xFFFF) == AK_SN_USE ? AK_SN_USE : (u16)(W(1) & 0x7FFF);
    for (int i = 0; i < 5; i++) n->group[i] = -1;
    k = n->type == AK_SN_TIMER ? 3 : 2;                                  /* [assumed] the timers' leading word */
    u32 bver = W(k++);
    if (bver > 2) { k++; k += 1 + W(k); if (bver >= 5) k++; }
    if (k >= nw) return false;
    n->active = (W(k++) & 1) != 0;
    if (n->type == AK_SN_TIMER || n->type == AK_SN_COUNTER || n->type == AK_SN_FMV || n->type == AK_SN_COND || n->type == AK_SN_REGION || n->type == AK_SN_USE || n->type == AK_SN_LOOK) {   /* the node family: its groups */
        u32 v = W(k++), ng = v >= 3 ? 5 : 4; n->node = true;
        if ((k + 3) * 4 > size) return false;
        for (u32 i = 0; i < ng; i++) n->group[i] = (s16)ak_rd16(b + 4 * k + 2 * i);
        k += v >= 3 ? 3 : 2;
        if (v == 1) n->active = W(k++) != 0;
    }
    if (n->type == AK_SN_TIMER) {
        u32 v = W(k++); n->time = rd_f(b + 4 * k); k++;
        if (v >= 1) { n->left = rd_f(b + 4 * k); k++; } else n->left = n->time;
        if (v == 3) { n->tflags = b[4 * k] != 0; k++; } else if (v >= 4) n->tflags = W(k++);   /* (v 3: one byte - the next field realigns [assumed]) */
        if (k + 2 == nw && W(k) == 0 && W(k + 1) && W(k + 1) <= 0x3Fu && !(W(k + 1) >> mode & 1)) n->disabled = true;   /* { 0, mode mask } */
    } else if (n->type == AK_SN_SELECTOR) {
        u32 v = W(k++); n->sflags = W(k++); if (v < 3) n->sflags &= ~3u;
        n->n = W(k++); if (n->n > 256 || k + 2 * n->n > nw) return false;
        n->ent = AK_NEW(a, u32, 2 * n->n + 1);
        bool timed = n->n && (n->sflags & 0x104u) == 4;
        if (timed) n->wait = AK_NEW(a, f32, n->n);
        if (!n->ent || (timed && !n->wait)) return false;
        for (u32 i = 0; i < n->n; i++) {
            n->ent[2 * i] = W(k); n->ent[2 * i + 1] = W(k + 1); k += 2;
            if (v < 2) n->ent[2 * i] &= 0x1FFFFu;
            if (timed) { n->wait[i] = rd_f(b + 4 * k); k++; }
        }
        if (v >= 3) { n->dmin = rd_f(b + 4 * k); n->dmax = rd_f(b + 4 * k + 4); k += 2; }
        if (v >= 4) n->next = W(k++);
    } else if (n->type == AK_SN_COUNTER) {
        u32 v = W(k++);
        if (v < 2) return false;                                         /* (the older one-entry form: none in the data) */
        n->count = (s32)W(k++); n->n = W(k++);
        if (n->n > 256 || k + 3 * n->n > nw) return false;
        n->cnt = AK_NEW(a, u32, 3 * n->n + 1); if (!n->cnt) return false;
        for (u32 i = 0; i < 3 * n->n; i++) n->cnt[i] = W(k + i);
        for (u32 i = 0; i < n->n; i++) { u32 g = n->cnt[3 * i + 2]; n->cnt[3 * i + 2] = (g & 0xFFFFu) | (g >> 16 & 3u) << 16; }
    } else if (n->type == AK_SN_REGION || n->type == AK_SN_USE) {
        u32 v = W(k++); (void)v; k += 2; n->who = W(k++); n->nbox = W(k++);
        if (n->nbox > 16 || k + 10 * n->nbox > nw) return false;
        n->box = AK_NEW(a, f32, 10 * n->nbox + 1); if (!n->box) return false;
        for (u32 i = 0; i < 10 * n->nbox; i++) n->box[i] = rd_f(b + 4 * (k + i));
        k += 10 * n->nbox;
        if (n->type == AK_SN_USE) {                                      /* { 1, spot, turn rows, 999, 0, 0, 999, u32, prompt, 0, 0, modes } */
            if (k + 19 > nw) return false;
            for (int i = 0; i < 3; i++) n->use_pos[i] = rd_f(b + 4 * (k + 1 + i));
            n->use_text = W(k + 18) & 0xFFFFu; k += 21;
            if (k < nw && W(k) && W(k) <= 0x3Fu && !(W(k) >> mode & 1)) n->disabled = true;
        }
        else if (k + 3 <= nw && W(k + 2) && W(k + 2) <= 0x3Fu && !(W(k + 2) >> mode & 1)) n->disabled = true;   /* { 1, 0, mode mask, 0 } */
    } else if (n->type == AK_SN_COND) {
        u32 v = W(k++); n->kind = W(k++); n->param = v >= 1 ? W(k++) : 0xFFFFFFFFu; if (v > 1) k++;
        if (k + 2 <= nw && W(k) == 0 && W(k + 1) && W(k + 1) <= 0x3Fu && !(W(k + 1) >> mode & 1)) n->disabled = true;   /* { 0, mode mask } */
    } else if (n->type == AK_SN_LOOK) {
        if (W(k++) != 0 || k + 18 > nw) return false;                     /* (version 0: the 72 bytes) */
        n->lk_rmax = rd_f(b + 4 * k); n->lk_rmin = rd_f(b + 4 * (k + 1)); n->lk_cmin = rd_f(b + 4 * (k + 2)); n->lk_cmax = rd_f(b + 4 * (k + 3));
        for (int i = 0; i < 3; i++) n->lk_pt[i] = rd_f(b + 4 * (k + 11 + i));
        n->lk_flags = W(k + 17); n->lk_t = 0.1f;                          /* [assumed: the first check halfway through the 0.2 s] */
    } else if (n->type == AK_SN_MUSIC) {
        k++; n->list = W(k++); n->mflags = W(k++);
    }
    #undef W
    return true;
}

static int cmp_id(const void *x, const void *y) { u32 a = ((const ak_snode *)x)->id, b = ((const ak_snode *)y)->id; return a < b ? -1 : a > b; }

bool ak_script_load(const ak_level *l, int mode, u32 seed, ak_arena *a, ak_script *out)
{
    memset(out, 0, sizeof *out);
    out->rng[0] = seed ? seed : 0x12345678u; out->rng[1] = 0x9E3779B9u;     /* [assumed] the game's start values are not traced */
    u32 pos = 8, n = 0; ak_chunk c;
    while (ak_asura_next(&l->file, &pos, &c))
        if (ak_chunk_tag(&c) == AK_TAG('E', 'N', 'T', 'I') && c.size >= 12 && ((ak_rd32(c.body + 4) & 0xFFFFu) == AK_SN_COND || (ak_rd32(c.body + 4) & 0xFFFFu) == AK_SN_USE || (!(ak_rd32(c.body + 4) & 0x8000u) && is_node_type(ak_rd32(c.body + 4) & 0xFFFFu)))) n++;
    out->node = AK_NEW(a, ak_snode, n ? n : 1); if (!out->node) return false;
    pos = 8;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) == AK_TAG('E', 'N', 'T', 'I') && c.size >= 12 && ((ak_rd32(c.body + 4) & 0xFFFFu) == AK_SN_COND || (ak_rd32(c.body + 4) & 0xFFFFu) == AK_SN_USE || (!(ak_rd32(c.body + 4) & 0x8000u) && is_node_type(ak_rd32(c.body + 4) & 0xFFFFu)))) {
            if (parse_node(c.body, c.size, a, mode, &out->node[out->nnodes])) out->nnodes++;
            else AK_WARN("script", "node %x (type %u) not read", ak_rd32(c.body), ak_rd32(c.body + 4) & 0xFFFFu);
            continue;
        }
        if (ak_chunk_tag(&c) != AK_TAG('S', 'M', 'S', 'G') || c.size < 8) continue;
        u32 ver = c.version & 0xFFFF, ng = ak_rd32(c.body), p = 4, side = 0;
        if (ver >= 2) { side = ak_rd32(c.body + 4); p = 8; }
        if (side > 1 || ng > 30000 || p + ng > c.size) continue;
        const u8 *cnt = c.body + p; p += ng; u32 nm = 0;
        for (u32 g = 0; g < ng; g++) nm += cnt[g];
        ak_smsg *msg = AK_NEW(a, ak_smsg, nm ? nm : 1); u32 *first = AK_NEW(a, u32, ng ? ng : 1);
        if (!msg || !first) return false;
        u32 k = 0;
        for (u32 g = 0; g < ng; g++) {
            first[g] = k;
            for (u32 m = 0; m < cnt[g]; m++, k++) {
                ak_smsg *s = &msg[k]; s->prob = 1.0f;
                if (p + 8 > c.size) return false;
                s->type = ak_rd16(c.body + p); s->nextra = ak_rd16(c.body + p + 2); s->target = ak_rd32(c.body + p + 4); p += 8;
                if (ver >= 3) { s->delay = rd_f(c.body + p); p += 4; }
                if (ver > 4) { s->prob = rd_f(c.body + p); p += 4; }
                if (ver > 5) p += 4;
                if ((c.flags & 1) && ver >= 4) p += 4;
                u32 eb = (s->nextra + 3u) & ~3u;
                if (p + eb > c.size) return false;
                s->extra = s->nextra ? c.body + p : NULL; p += eb;
            }
        }
        out->side[side].msg = msg; out->side[side].first = first; out->side[side].count = (u8 *)cnt; out->side[side].ngroups = ng;
    }
    if (out->nnodes > 1) qsort(out->node, out->nnodes, sizeof *out->node, cmp_id);
    return true;
}

/* ---- sending */
static void post(ak_script *s, const ak_smsg *m, u32 sender)
{
    if (s->nnow < sizeof s->now / sizeof s->now[0]) { s->now[s->nnow].m = m; s->now[s->nnow].sender = sender; s->nnow++; }
    else s->dropped++;
}

static const ak_smsg *group_msg(const ak_script *s, u32 group, u32 i, u32 *nmsg)
{
    u32 sd = group >= 30000 ? 1 : 0, g = group - sd * 30000;
    if (sd > 1 || g >= s->side[sd].ngroups) { *nmsg = 0; return NULL; }
    *nmsg = s->side[sd].count[g];
    return i < *nmsg ? &s->side[sd].msg[s->side[sd].first[g] + i] : NULL;
}

static void fire(ak_script *s, s32 group, u32 sender)                    /* 08879DB8 */
{
    if (group < 0 || group > 59999) return;
    {   static int dg = -1; if (dg < 0) dg = ak_setting_int("AK_DEBUG_GROUPS", 0);   /* tests: every group fired, as the harness's RS_FIRE_LOG */
        if (dg) AK_INFO("script", "group %d (sender %x)", (int)group, sender); }
    u32 nm = 0; group_msg(s, (u32)group, 0, &nm);
    for (u32 i = 0; i < nm; i++) {
        const ak_smsg *m = group_msg(s, (u32)group, i, &nm);
        if (m->prob != 1.0f && m->prob < (f32)rnd(s) * 4.656612873077393e-10f) continue;
        if (m->delay > 0) {                                              /* 08879F28 */
            if (s->nq < AK_SCRIPT_QUEUE) { s->q[s->nq].group = (u16)group; s->q[s->nq].msg = (u16)i; s->q[s->nq].t = m->delay; s->q[s->nq].sender = sender; s->nq++; continue; }
            u32 soon = 0; for (u32 k = 1; k < s->nq; k++) if (s->q[k].t < s->q[soon].t) soon = k;
            if (s->q[soon].t < m->delay) {                               /* full: the one due first goes now, the new one takes its place */
                u32 n2; post(s, group_msg(s, s->q[soon].group, s->q[soon].msg, &n2), s->q[soon].sender);
                s->q[soon].group = (u16)group; s->q[soon].msg = (u16)i; s->q[soon].t = m->delay; s->q[soon].sender = sender;
                continue;
            }
        }
        post(s, m, sender);
    }
}

static void node_fire(ak_script *s, ak_snode *n, int slot) { if (n->group[slot] != -1) fire(s, n->group[slot], n->id); }

static void sel_entry(ak_script *s, ak_snode *n, u32 i, bool delayed)   /* 08871050 */
{
    f32 d = 0;
    if (delayed) d = n->dmin + (f32)rnd(s) * 4.656612873077393e-10f * (n->dmax - n->dmin);
    if (d != 0 && !(n->sflags & 0x100u) && n->wait) { if (n->wait[i] <= 0 || d < n->wait[i]) n->wait[i] = d; return; }
    fire(s, (s16)(n->ent[2 * i] & 0xFFFFu), n->id);
    if (n->sflags & 2u) n->ent[2 * i] &= ~0x10000u;
}

static void sel_pick(ak_script *s, ak_snode *n)                          /* 08870E0C */
{
    bool dl = (n->sflags & 4u) != 0;
    if (n->sflags & 8u) {                                                /* in turn */
        for (u32 t = 0; t < n->n; t++) {
            if (n->next >= n->n) n->next = 0;
            u32 i = n->next++;
            if (n->ent[2 * i] & 0x10000u) { sel_entry(s, n, i, dl); return; }
        }
    } else if (n->sflags & 1u) {                                         /* weighted random */
        u32 total = 0; for (u32 i = 0; i < n->n; i++) if (n->ent[2 * i] & 0x10000u) total += n->ent[2 * i + 1];
        if (!total) return;
        u32 r = rnd(s) % total;
        for (u32 i = 0; i < n->n; i++) {
            if (!(n->ent[2 * i] & 0x10000u)) continue;
            if (r < n->ent[2 * i + 1]) { sel_entry(s, n, i, dl); return; }
            r -= n->ent[2 * i + 1];
        }
    } else for (u32 i = 0; i < n->n; i++) if (n->ent[2 * i] & 0x10000u) sel_entry(s, n, i, dl);
}

static void counter_to(ak_script *s, ak_snode *n, s32 from, s32 to)     /* 0886CAB4 */
{
    if (!n->active || from >= to) return;
    for (u32 i = 0; i < n->n; i++) {
        u32 *e = &n->cnt[3 * i]; s32 th = (s32)e[1];
        if (!(e[2] & 0x10000u) || !(from < th && th <= to)) continue;
        if (!(e[2] & 0x20000u)) e[2] &= ~0x10000u;
        if ((s16)(e[2] & 0xFFFFu) != -1) fire(s, (s16)(e[2] & 0xFFFFu), n->id);
    }
}

static void report(const ak_snode *n, u16 type, ak_script_sink sink, void *user)
{
    if (!sink) return;
    ak_script_msg o = { type, n->id, n->id, NULL, 0, n }; sink(user, &o);
}

static void succeed(ak_script *s, ak_snode *n, ak_script_sink sink, void *user)
{
    switch (n->type) {
    case AK_SN_SELECTOR: sel_pick(s, n); break;
    case AK_SN_COUNTER: { s32 o = n->count++; counter_to(s, n, o, n->count); break; }
    case AK_SN_MUSIC: report(n, 5, sink, user); break;
    case AK_SN_FMV: report(n, 5, sink, user); node_fire(s, n, 2); break;
    default: node_fire(s, n, 2);
    }
}

static void activate(ak_script *s, ak_snode *n)
{
    n->active = true;
    if (n->node) { node_fire(s, n, 0); if (n->type == AK_SN_TIMER) n->left = n->time; }
}
static void deactivate(ak_script *s, ak_snode *n)
{
    if (n->type == AK_SN_SELECTOR && n->wait) for (u32 i = 0; i < n->n; i++) n->wait[i] = 0;
    n->active = false;
    if (n->node) node_fire(s, n, 1);
}

static void deliver(ak_script *s, const ak_smsg *m, u32 sender, ak_script_sink sink, void *user)
{
    ak_snode *n = find(s, m->target);
    s->sent++;
    if (!n) {
        if (sink) { ak_script_msg o = { m->type, m->target, sender, m->extra, m->nextra, NULL }; sink(user, &o); }
        return;
    }
    {   static int dg = -1; if (dg < 0) dg = ak_setting_int("AK_DEBUG_GROUPS", 0);
        if (dg > 1) AK_INFO("script", "  %x -> node %x (type %u, active %d, disabled %d)", m->type, n->id, n->type, n->active, n->disabled); }
    if (n->disabled) return;
    u32 x0 = m->nextra >= 4 && m->extra ? ak_rd32(m->extra) : 0;
    if (n->type == AK_SN_TIMER) switch (m->type) {                       /* 08872230 */
        case 0x0E: n->left = n->time; /* fall through */
        case 0x2F: n->active = true; return;
        case 0x2E: n->active = false; return;
        case 0x2B: if (m->nextra >= 4) n->left = n->time - rd_f(m->extra); return;
        case 0x2C: if (m->nextra >= 4) { f32 t = rd_f(m->extra); n->left = t - (n->time - n->left); n->time = t; } return;
        default: break;
    }
    if (n->type == AK_SN_COUNTER) switch (m->type) {                     /* 0886C8F0 */
        case 0x0E: n->count = 0; return;
        case 0x30: { s32 o = n->count; n->count = (s32)x0; counter_to(s, n, o, n->count); return; }
        case 0x56: { s32 o = n->count; n->count += (s32)x0; if (n->count < 0) n->count = 0; counter_to(s, n, o, n->count); return; }
        case 0x31: case 0x32:
            for (u32 i = 0; i < n->n; i++) if (n->cnt[3 * i] == x0) { if (m->type == 0x31) n->cnt[3 * i + 2] |= 0x10000u; else n->cnt[3 * i + 2] &= ~0x10000u; break; }
            return;
        case 0x33:
            for (u32 i = 0; i < n->n && m->nextra >= 8; i++) if (n->cnt[3 * i] == x0) {
                s32 old = (s32)n->cnt[3 * i + 1], nt = (s32)ak_rd32(m->extra + 4); n->cnt[3 * i + 1] = (u32)nt;
                if (n->active && (n->cnt[3 * i + 2] & 0x10000u) && nt <= n->count && n->count < old) {   /* 0886CBBC */
                    if (!(n->cnt[3 * i + 2] & 0x20000u)) n->cnt[3 * i + 2] &= ~0x10000u;
                    if ((s16)(n->cnt[3 * i + 2] & 0xFFFFu) != -1) fire(s, (s16)(n->cnt[3 * i + 2] & 0xFFFFu), n->id);
                }
                break;
            }
            return;
        default: break;
    }
    if (n->type == AK_SN_SELECTOR && (m->type == 6 || m->type == 7)) {     /* 08870D50 */
        if (x0 < n->n) {
            if (m->type == 6) n->ent[2 * x0] |= 0x10000u; else n->ent[2 * x0] &= ~0x10000u;
            if (n->wait && !(n->ent[2 * x0] & 0x10000u)) n->wait[x0] = 0;
        }
        return;
    }
    switch (m->type) {                                                   /* the base, 08869FCC */
    case 2: if (n->node) node_fire(s, n, 3); n->active = false; break;
    case 3: if (!n->active) activate(s, n); break;
    case 4: if (n->active) deactivate(s, n); break;
    case 5: if (n->active) succeed(s, n, sink, user); break;
    case 10: if (n->active) { if (n->type == AK_SN_COUNTER) { n->count--; if (n->count < 0) n->count = 0; } else if (n->node) node_fire(s, n, 4); } break;
    default: break;
    }
}

static void drain(ak_script *s, ak_script_sink sink, void *user)
{
    if (s->depth++) { s->depth--; return; }                              /* (sent from a handler: the outer loop takes it) */
    while (s->head < s->nnow) { u32 i = s->head++; deliver(s, s->now[i].m, s->now[i].sender, sink, user); }
    s->head = s->nnow = 0; s->depth = 0;
}

void ak_script_fire(ak_script *s, s32 group, u32 sender, ak_script_sink sink, void *user) { fire(s, group, sender); drain(s, sink, user); }

void ak_script_send(ak_script *s, u16 type, u32 target, const u8 *extra, u32 nextra, ak_script_sink sink, void *user)
{
    ak_smsg m = { type, (u16)nextra, target, 0, 1.0f, extra };
    drain(s, sink, user); s->depth++; deliver(s, &m, 0, sink, user); s->depth--; drain(s, sink, user);
}

static int cmp_due(const void *x, const void *y) { f32 a = *(const f32 *)x, b = *(const f32 *)y; return a < b ? -1 : a > b; }

void ak_script_update(ak_script *s, f32 dt, bool paused, ak_script_sink sink, void *user)
{
    for (u32 i = 0; i < s->nnodes; i++) {
        ak_snode *n = &s->node[i];
        if (n->disabled || !n->active) continue;
        if (n->type == AK_SN_TIMER) {                                    /* 08871FA4, 08872000 */
            if (!(n->tflags & 2u) || !paused) n->left -= dt;
            { static int dg = -1; if (dg < 0) dg = ak_setting_int("AK_DEBUG_GROUPS", 0); if (dg > 2 && fmodf(n->left, 10.0f) < dt) AK_INFO("script", "timer %x: %.1f s left", n->id, n->left); }
            if (n->left <= 0) {
                if (!(n->tflags & 1u)) { n->active = false; n->left = n->time; }
                else n->left = n->time > 0 ? n->time + fmodf(n->left, n->time) : 0;
                node_fire(s, n, 2);
            }
        } else if (n->type == AK_SN_SELECTOR && n->wait) {               /* 08870C84 */
            for (u32 k = 0; k < n->n; k++) if (n->wait[k] > 0 && (n->wait[k] -= dt) < 0) { n->wait[k] = 0; sel_entry(s, n, k, false); }
        }
    }
    /* the queue (08879BE4): count down, then send the expired ones in the order they fall due */
    struct { f32 t; u16 group, msg; u32 sender; } due[AK_SCRIPT_QUEUE]; u32 nd = 0;
    for (u32 i = 0; i < s->nq;) {
        s->q[i].t -= dt;
        if (s->q[i].t <= 0) { due[nd].t = s->q[i].t; due[nd].group = s->q[i].group; due[nd].msg = s->q[i].msg; due[nd].sender = s->q[i].sender; nd++; s->q[i] = s->q[--s->nq]; }
        else i++;
    }
    if (nd > 1) qsort(due, nd, sizeof due[0], cmp_due);
    for (u32 i = 0; i < nd; i++) { u32 nm; const ak_smsg *m = group_msg(s, due[i].group, due[i].msg, &nm); if (m) post(s, m, due[i].sender); }
    drain(s, sink, user);
}

u32 ak_script_events(const ak_level *l, u32 id, u32 at, u32 *out, u32 max)
{
    u32 pos = 8; ak_chunk c;
    while (ak_asura_next(&l->file, &pos, &c)) {
        if (ak_chunk_tag(&c) != AK_TAG('E', 'N', 'T', 'I') || c.size < 8 || ak_rd32(c.body) != id) continue;
        u32 nw = c.size / 4, n = 0;
        if (at + 3 > nw || wd(c.body, nw, at) <= 2) return 0;
        u32 cnt = wd(c.body, nw, at + 2);
        if (cnt > 64 || at + 3 + cnt > nw) return 0;
        for (u32 i = 0; i < cnt && n < max; i++) out[n++] = wd(c.body, nw, at + 3 + i);
        return n;
    }
    return 0;
}

void ak_script_raise(ak_script *s, const u32 *ev, u32 nev, u32 event, u32 sender, ak_script_sink sink, void *user)   /* 0887514C */
{
    for (u32 i = 0; i < nev; i++) if ((ev[i] & 0xFFFFu) == event && (ev[i] >> 16) != 0xFFFFu) fire(s, (s32)(ev[i] >> 16), sender);
    drain(s, sink, user);
}

void ak_script_cond(ak_script *s, ak_script_test test, ak_script_sink sink, void *user)
{
    for (u32 i = 0; i < s->nnodes; i++) {
        ak_snode *n = &s->node[i];
        if (n->type != AK_SN_COND || n->disabled) continue;
        /* the node's tip [measured, harness route cmpn: while Yavin's training waits on node 18baf (param 0x88) the tip box shows
           STDTEXT 0x88 "Move forward and hold L to sprint", then 0x89 "Tap L to jump" for 18bb0]: given to the game as 0x801D on the
           node's start; it stays after the node succeeds (seen: the jump tip still up after the jump) until another tip or the script's
           0x801E - the showing code is not traced */
        if (n->active != n->shown) {
            n->shown = n->active;
            if (n->active && n->param != 0xFFFFFFFFu) { u8 ex[8]; u32 z = 0; memcpy(ex, &z, 4); memcpy(ex + 4, &n->param, 4);
                ak_script_msg m = { 0x801D, 0x3E8, n->id, ex, 8, NULL }; sink(user, &m); }
        }
        if (!n->active) { n->was = false; continue; }
        bool t = test(user, n->kind, n->param);
        if (t && !n->was) ak_script_send(s, 5, n->id, NULL, 0, sink, user);
        n->was = t;
    }
}

static bool in_boxes(const ak_snode *n, const f32 *pos)
{
    for (u32 b = 0; b < n->nbox; b++) {
        const f32 *x = n->box + 10 * b;
        f32 c[3] = { (x[0] + x[1]) * 0.5f, (x[2] + x[3]) * 0.5f, (x[4] + x[5]) * 0.5f }, d[3] = { pos[0] - c[0], pos[1] - c[1], pos[2] - c[2] };
        f32 qx = -x[6], qy = -x[7], qz = -x[8], qw = x[9];                 /* the point into the box's frame: the inverse turn */
        f32 tx = 2 * (qy * d[2] - qz * d[1]), ty = 2 * (qz * d[0] - qx * d[2]), tz = 2 * (qx * d[1] - qy * d[0]);
        f32 l[3] = { d[0] + qw * tx + qy * tz - qz * ty, d[1] + qw * ty + qz * tx - qx * tz, d[2] + qw * tz + qx * ty - qy * tx };
        if (fabsf(l[0]) <= (x[1] - x[0]) * 0.5f && fabsf(l[1]) <= (x[3] - x[2]) * 0.5f && fabsf(l[2]) <= (x[5] - x[4]) * 0.5f) return true;
    }
    return false;
}
u32 ak_script_use(ak_script *s, const f32 *pos, bool use, ak_script_sink sink, void *user)
{
    u32 prompt = 0;
    for (u32 i = 0; i < s->nnodes && pos; i++) {
        ak_snode *n = &s->node[i];
        if (n->type != AK_SN_USE || n->disabled || !n->active || !in_boxes(n, pos)) continue;
        prompt = n->use_text ? n->use_text : 0x47;
        if (use) { ak_script_send(s, 5, n->id, NULL, 0, sink, user); use = false; n->active = false; }   /* (used: off until started again [assumed]) */
    }
    return prompt;
}
void ak_script_look(ak_script *s, f32 dt, const f32 *pos, const f32 *fwd, bool (*clear)(void *user, const f32 *a, const f32 *b), ak_script_sink sink, void *user)
{
    for (u32 i = 0; i < s->nnodes; i++) {
        ak_snode *n = &s->node[i];
        if (n->type != AK_SN_LOOK || n->disabled || !n->active) continue;
        if ((n->lk_t -= dt) > 0) continue;
        n->lk_t += 0.2f;                                                  /* (D_08AEBF90) */
        if (!pos || !fwd) continue;
        f32 d[3] = { n->lk_pt[0] - pos[0], n->lk_pt[1] - pos[1], n->lk_pt[2] - pos[2] }, l = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
        if (l > n->lk_rmax || l < n->lk_rmin) continue;
        f32 c = l > 1e-6f ? (d[0] * fwd[0] + d[1] * fwd[1] + d[2] * fwd[2]) / l : 1;
        if (c < n->lk_cmin || c > n->lk_cmax) continue;
        if ((n->lk_flags & 2) && clear && !clear(user, pos, n->lk_pt)) continue;
        ak_script_send(s, 5, n->id, NULL, 0, sink, user);
    }
}
void ak_script_regions_who(ak_script *s, ak_script_where where, ak_script_sink sink, void *user)
{
    for (u32 i = 0; i < s->nnodes; i++) {
        ak_snode *n = &s->node[i];
        if (n->type != AK_SN_REGION || n->disabled) continue;
        f32 pos[3];
        if (!n->active || !where(user, n->who, pos)) { n->was = false; continue; }
        bool in = in_boxes(n, pos);
        if (in && !n->was) ak_script_send(s, 5, n->id, NULL, 0, sink, user);
        n->was = in;
    }
}

void ak_script_regions(ak_script *s, const f32 *pos, ak_script_sink sink, void *user)
{
    for (u32 i = 0; i < s->nnodes; i++) {
        ak_snode *n = &s->node[i];
        if (n->type != AK_SN_REGION || n->disabled) continue;
        if (!n->active || !pos) { n->was = false; continue; }
        bool in = in_boxes(n, pos);
        if (in && !n->was) ak_script_send(s, 5, n->id, NULL, 0, sink, user);
        n->was = in;
    }
}
