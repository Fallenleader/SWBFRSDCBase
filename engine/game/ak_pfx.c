/* Aurek - particle effects.  See ak_pfx.h; the reading notes are PARITY_TASKS R.6. */
#include "ak_pfx.h"
#include <math.h>
#include <string.h>
#include <strings.h>

/* ---- reading (pfx.py is the same reader in Python) */
typedef struct { const u8 *p, *e; bool bad; } rd;
static u32 r32(rd *r) { if (r->p + 4 > r->e) { r->bad = true; return 0; } u32 v = ak_rd32(r->p); r->p += 4; return v; }
static f32 rf(rd *r) { if (r->p + 4 > r->e) { r->bad = true; return 0; } f32 v = ak_rdf32(r->p); r->p += 4; return v; }
static const char *rstr(rd *r)
{
    const char *s = (const char *)r->p; const u8 *q = r->p;
    while (q < r->e && *q) q++;
    if (q >= r->e) { r->bad = true; return ""; }
    r->p += ((size_t)(q - r->p) / 4 + 1) * 4; return s;
}
static ak_pfx_curve rcurve(rd *r, u8 width)
{
    ak_pfx_curve c = { 0, width, NULL };
    u32 ver = r32(r);
    if (ver < 10002) { r->bad = true; return c; }                 /* (every shipped level is 10003) */
    r32(r); c.n = r32(r);
    if (c.n > 4096 || r->p + (size_t)c.n * width * 4 > r->e) { r->bad = true; c.n = 0; return c; }
    c.v = r->p; r->p += (size_t)c.n * width * 4; return c;
}

/* a curve at t in [0, 1]: index t x (n - 1), linear between samples, clamped (08AABE50) */
static void sample(const ak_pfx_curve *c, f32 t, f32 *out)
{
    if (!c->n) { for (int k = 0; k < c->width; k++) out[k] = 0; return; }
    f32 x = t * (f32)(c->n - 1); s32 i = (s32)x;
    if (x < 0 || i < 0) { for (int k = 0; k < c->width; k++) out[k] = ak_rdf32(c->v + (size_t)k * 4); return; }
    if (i >= (s32)c->n - 1) { for (int k = 0; k < c->width; k++) out[k] = ak_rdf32(c->v + ((size_t)(c->n - 1) * c->width + k) * 4); return; }
    f32 f = x - (f32)i;
    for (int k = 0; k < c->width; k++) {
        f32 a = ak_rdf32(c->v + ((size_t)i * c->width + k) * 4), b = ak_rdf32(c->v + ((size_t)(i + 1) * c->width + k) * 4);
        out[k] = a * (1 - f) + b * f;
    }
}
static f32 sample1(const ak_pfx_curve *c, f32 t) { f32 v; sample(c, t, &v); return v; }

bool ak_pfx_lib_load(const ak_blob *level, ak_arena *a, ak_pfx_lib *out)
{
    memset(out, 0, sizeof *out);
    u32 nt = 0, ns = 0, ne = 0, pos = 8; ak_chunk c;
    while (ak_asura_next(level, &pos, &c)) {
        u32 t = ak_chunk_tag(&c);
        if (t == AK_TAG('F', 'X', 'P', 'T')) nt++; else if (t == AK_TAG('F', 'X', 'S', 'T')) ns++; else if (t == AK_TAG('F', 'X', 'E', 'T')) ne++;
    }
    if (!ne) return false;
    out->type = AK_NEW(a, ak_pfx_type, nt); out->sys = AK_NEW(a, ak_pfx_system, ns); out->fx = AK_NEW(a, ak_pfx_effect, ne);
    if (!out->type || !out->sys || !out->fx) return false;
    pos = 8;
    while (ak_asura_next(level, &pos, &c)) {
        u32 t = ak_chunk_tag(&c);
        rd r = { c.body, c.body + c.size, false };
        if (t == AK_TAG('F', 'X', 'P', 'T')) {                      /* 0882A2E0 -> 0882A430 */
            ak_pfx_type *y = &out->type[out->ntype];
            y->hash = r32(&r); y->name = rstr(&r);
            y->colour = rcurve(&r, 4); y->size = rcurve(&r, 1); y->spin = rcurve(&r, 1); y->size_rand = rcurve(&r, 1);
            u32 nf = r32(&r);
            for (u32 i = 0; i < nf && !r.bad; i++) { f32 cell[5]; for (int k = 0; k < 5; k++) cell[k] = rf(&r); if (!i) memcpy(y->uv, cell, 16); }
            u32 w[9]; for (int k = 0; k < 9; k++) w[k] = r32(&r);
            y->flags = r32(&r);
            y->kind = (s32)w[0]; memcpy(&y->life, &w[1], 4); memcpy(&y->life_spread, &w[2], 4);
            if (!r.bad && y->life > 0) out->ntype++;
        } else if (t == AK_TAG('F', 'X', 'S', 'T')) {               /* 0882A350 -> 0882A890 */
            ak_pfx_system *s = &out->sys[out->nsys];
            s->hash = r32(&r); s->name = rstr(&r);
            s->a = rcurve(&r, 1); s->b = rcurve(&r, 3); s->c = rcurve(&r, 1); s->d = rcurve(&r, 3);
            s->e = rcurve(&r, 1); s->f = rcurve(&r, 1); s->g = rcurve(&r, 1); s->h = rcurve(&r, 1);
            for (int k = 0; k < 3; k++) s->grav[k] = rf(&r);
            u32 w[13]; for (int k = 0; k < 13; k++) w[k] = r32(&r);
            if (c.version >= 5) r32(&r);                             /* +0xE0: a parent system (-1 none) */
            s->flags = r32(&r);
            memcpy(&s->duration, &w[1], 4); memcpy(&s->drag, &w[2], 4); memcpy(&s->time_scale, &w[6], 4);
            memcpy(&s->inherit, &w[7], 4); memcpy(&s->noise, &w[8], 4); s->limit = w[12];
            if (s->limit > 512) s->limit = 512;
            if (!r.bad && s->duration > 0) out->nsys++;
        } else if (t == AK_TAG('F', 'X', 'E', 'T')) {               /* 0882A3C0 -> 0882ACE0 */
            ak_pfx_effect *e = &out->fx[out->nfx];
            e->hash = r32(&r); e->name = rstr(&r);
            rcurve(&r, 4); rcurve(&r, 1);                            /* the effect's light: colour and radius (not drawn yet) */
            if (c.version >= 13) r32(&r);
            u32 n = r32(&r); if (n > 64) { r.bad = true; n = 0; }
            e->em = AK_NEW(a, ak_pfx_emitter_def, n ? n : 1);
            for (u32 i = 0; i < n && !r.bad; i++) {
                ak_pfx_emitter_def *d = &e->em[e->nem];
                u32 sh = r32(&r);
                for (int k = 0; k < 3; k++) d->pos[k] = rf(&r);
                for (int k = 0; k < 9; k++) d->m[k] = rf(&r);
                for (int k = 0; k < 3; k++) rf(&r);                  /* a vec3 (not used yet) */
                r32(&r);
                d->shape = r32(&r); d->shape_flags = r32(&r);
                u32 nsh = d->shape == 1 ? 6 : d->shape == 2 ? 1 : d->shape == 3 ? 3 : 0;   /* 088EA38C */
                for (u32 k = 0; k < nsh; k++) d->sh[k] = rf(&r);
                r32(&r);
                d->sys = NULL;
                for (u32 k = 0; k < out->nsys; k++) if (out->sys[k].hash == sh) { d->sys = &out->sys[k]; break; }
                if (d->sys) e->nem++;
            }
            if (!r.bad && e->nem) out->nfx++;
        }
    }
    for (u32 i = 0; i < out->nsys; i++)                              /* a system and its particle type share the name's hash */
        for (u32 k = 0; k < out->ntype; k++) if (out->type[k].hash == out->sys[i].hash) { out->sys[i].type = &out->type[k]; break; }
    for (u32 i = 0; i < out->nfx; i++) {                             /* drop emitters whose type is missing */
        ak_pfx_effect *e = &out->fx[i]; u32 w = 0;
        for (u32 k = 0; k < e->nem; k++) if (e->em[k].sys->type) e->em[w++] = e->em[k];
        e->nem = w;
    }
    return out->nfx > 0;
}

s32 ak_pfx_find(const ak_pfx_lib *l, const char *name)
{
    if (!l || !name || !*name) return -1;
    for (u32 i = 0; i < l->nfx; i++) if (!strcasecmp(l->fx[i].name, name)) return (s32)i;
    return -1;
}

/* ---- running */
static f32 rnd(ak_pfx_world *w)                                       /* 0..1 (the game's generator: 08B25AC0) */
{
    u32 a = w->rng[0] * 0x10000u + (u32)((s32)w->rng[0] >> 16) + w->rng[1];
    w->rng[1] += a; w->rng[0] = a;
    return (f32)(a >> 1) * 4.656612873e-10f;
}

void ak_pfx_world_init(ak_pfx_world *w, const ak_pfx_lib *lib)
{
    memset(w, 0, sizeof *w); w->lib = lib; w->rng[0] = 0x12345u; w->rng[1] = 0x6789Au;
    for (u32 i = 0; i < AK_PFX_MAX_EMITTERS; i++) w->em[i].effect = -1;
}

s32 ak_pfx_play(ak_pfx_world *w, s32 fx, const f32 *pos, const f32 *fwd)
{
    if (!w->lib || fx < 0 || (u32)fx >= w->lib->nfx) return -1;
    const ak_pfx_effect *e = &w->lib->fx[fx];
    s32 slot = -1;
    for (u32 i = 0; i < AK_PFX_MAX_EFFECTS; i++) if (!w->fx[i].alive) { slot = (s32)i; break; }
    if (slot < 0) { w->dropped++; return -1; }
    u32 first = 0, run = 0;                                           /* nem free emitter slots in a row */
    for (u32 i = 0; i < AK_PFX_MAX_EMITTERS && run < e->nem; i++) { if (w->em[i].effect < 0) { if (!run) first = i; run++; } else run = 0; }
    if (run < e->nem) { w->dropped++; return -1; }
    ak_pfx_instance *in = &w->fx[slot];
    memset(in, 0, sizeof *in); in->fx = e; in->alive = true; in->scale = 1; in->first_em = (u16)first; in->nem = (u16)e->nem;
    /* the frame in game axes: column 2 (+Z, the way emitters fire) = fwd; identity when none */
    f32 z[3] = { 0, 0, 1 }, x[3] = { 1, 0, 0 }, y[3] = { 0, 1, 0 };
    if (fwd) {
        f32 g[3] = { fwd[0], -fwd[1], -fwd[2] }, l = sqrtf(g[0] * g[0] + g[1] * g[1] + g[2] * g[2]);
        if (l > 1e-6f) {
            for (int k = 0; k < 3; k++) z[k] = g[k] / l;
            f32 up[3] = { 0, -1, 0 }; if (fabsf(z[1]) > 0.98f) { up[0] = 1; up[1] = 0; }
            x[0] = up[1] * z[2] - up[2] * z[1]; x[1] = up[2] * z[0] - up[0] * z[2]; x[2] = up[0] * z[1] - up[1] * z[0];
            f32 xl = sqrtf(x[0] * x[0] + x[1] * x[1] + x[2] * x[2]); for (int k = 0; k < 3; k++) x[k] /= xl;
            y[0] = z[1] * x[2] - z[2] * x[1]; y[1] = z[2] * x[0] - z[0] * x[2]; y[2] = z[0] * x[1] - z[1] * x[0];
        }
    }
    for (int r = 0; r < 3; r++) { in->M[r * 4] = x[r]; in->M[r * 4 + 1] = y[r]; in->M[r * 4 + 2] = z[r]; }
    in->M[3] = pos[0]; in->M[7] = -pos[1]; in->M[11] = -pos[2];
    for (u32 i = 0; i < e->nem; i++) {
        ak_pfx_emitter *m = &w->em[first + i]; memset(m, 0, sizeof *m);
        m->effect = (s16)slot; m->def = &e->em[i];
    }
    w->played++;
    return slot;
}

/* the emitter's frame in the world: effect M x (emitter m, pos) */
static void emitter_frame(const ak_pfx_instance *in, const ak_pfx_emitter_def *d, f32 R[9], f32 o[3])
{
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) R[r * 3 + c] = in->M[r * 4] * d->m[c] + in->M[r * 4 + 1] * d->m[3 + c] + in->M[r * 4 + 2] * d->m[6 + c];
        o[r] = in->M[r * 4] * d->pos[0] + in->M[r * 4 + 1] * d->pos[1] + in->M[r * 4 + 2] * d->pos[2] + in->M[r * 4 + 3];
    }
}

/* a random point of the emission shape (088EA81C) */
static void shape_point(ak_pfx_world *w, const ak_pfx_emitter_def *d, f32 p[3])
{
    p[0] = p[1] = p[2] = 0;
    if (d->shape == 1) {
        if (d->shape_flags & 1) {                                     /* on a face: one axis at an end */
            u32 face = (u32)(rnd(w) * 6.0f) % 6;
            for (int k = 0; k < 3; k++) p[k] = face == (u32)k * 2 ? d->sh[k * 2] : face == (u32)k * 2 + 1 ? d->sh[k * 2 + 1] : d->sh[k * 2] + rnd(w) * (d->sh[k * 2 + 1] - d->sh[k * 2]);
        } else for (int k = 0; k < 3; k++) p[k] = d->sh[k * 2] + rnd(w) * (d->sh[k * 2 + 1] - d->sh[k * 2]);
    } else if (d->shape == 2 || d->shape == 3) {
        f32 v[3], l2;
        for (int tries = 0; tries < 32; tries++) {
            for (int k = 0; k < 3; k++) v[k] = rnd(w) * 2 - 1;
            l2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
            if (l2 > 1) continue;
            if ((d->shape_flags & 1) && l2 < 0.01f) continue;          /* on the surface: pushed out to it */
            if (d->shape_flags & 1) { f32 s = 1.0f / sqrtf(l2); for (int k = 0; k < 3; k++) v[k] *= s; }
            for (int k = 0; k < 3; k++) p[k] = v[k] * (d->shape == 2 ? d->sh[0] : d->sh[k]);
            return;
        }
    }
}

static void spawn(ak_pfx_world *w, ak_pfx_emitter *m, u32 ei)
{
    if (w->np >= AK_PFX_MAX_PARTICLES) { w->dropped_particles++; return; }
    const ak_pfx_instance *in = &w->fx[m->effect]; const ak_pfx_system *s = m->def->sys; const ak_pfx_type *y = s->type;
    f32 R[9], o[3], sp[3]; emitter_frame(in, m->def, R, o);
    ak_pfx_particle *p = &w->p[w->np++]; memset(p, 0, sizeof *p);
    shape_point(w, m->def, sp);
    for (int r = 0; r < 3; r++) p->pos[r] = o[r] + R[r * 3] * sp[0] + R[r * 3 + 1] * sp[1] + R[r * 3 + 2] * sp[2];
    /* the velocity (088E6E9C): speed a(t) x (1 - c(t) x random) along +Z, turned by angles b(t) x pi + d(t) x (a random in
       -pi..pi) about x and y (one quaternion) and z (a second), then by the emitter's frame */
    f32 t = m->t, b[3], dd[3]; sample(&s->b, t, b); sample(&s->d, t, dd);
    f32 speed = sample1(&s->a, t) * (1.0f - sample1(&s->c, t) * rnd(w));
    if (s->flags & 0x8000) speed *= in->scale;
    f32 ang[3]; for (int k = 0; k < 3; k++) ang[k] = b[k] * 3.14159265f + dd[k] * (rnd(w) * 6.2831853f - 3.14159265f);
    f32 cx = cosf(ang[0] * 0.5f), sx = sinf(ang[0] * 0.5f), cy = cosf(ang[1] * 0.5f), sy = sinf(ang[1] * 0.5f);
    f32 cz = cosf(ang[2] * 0.5f), sz = sinf(ang[2] * 0.5f);
    f32 q1[4] = { sx * cy, cx * sy, -sx * sy, cx * cy }, q2[4] = { 0, 0, sz, cz };   /* (x, y, z, w) */
    f32 q[4] = { q1[3] * q2[0] + q1[0] * q2[3] + q1[1] * q2[2] - q1[2] * q2[1],
                 q1[3] * q2[1] - q1[0] * q2[2] + q1[1] * q2[3] + q1[2] * q2[0],
                 q1[3] * q2[2] + q1[0] * q2[1] - q1[1] * q2[0] + q1[2] * q2[3],
                 q1[3] * q2[3] - q1[0] * q2[0] - q1[1] * q2[1] - q1[2] * q2[2] };
    f32 v[3] = { 0, 0, speed }, u[3] = { q[0], q[1], q[2] }, ww = q[3];
    f32 uv = u[0] * v[0] + u[1] * v[1] + u[2] * v[2], uu = u[0] * u[0] + u[1] * u[1] + u[2] * u[2];
    f32 cr[3] = { u[1] * v[2] - u[2] * v[1], u[2] * v[0] - u[0] * v[2], u[0] * v[1] - u[1] * v[0] };
    f32 lv[3]; for (int k = 0; k < 3; k++) lv[k] = 2 * uv * u[k] + (ww * ww - uu) * v[k] + 2 * ww * cr[k];
    for (int r = 0; r < 3; r++) p->vel[r] = R[r * 3] * lv[0] + R[r * 3 + 1] * lv[1] + R[r * 3 + 2] * lv[2];
    if (s->flags & 0x1000) for (int k = 0; k < 3; k++) p->vel[k] += in->vel[k] * s->inherit;
    p->rnd = rnd(w);
    p->life = y->life; if ((y->flags & 0x20000) && y->life_spread > 0) p->life += p->rnd * y->life_spread;
    if (p->life < 1e-3f) p->life = 1e-3f;
    p->em = (u16)ei; p->alive = 1; m->nlive++;
}

/* a smooth noise of a position in -1..1 (the game's is 088EF134; this is Aurek's) */
static f32 noise3(f32 x, f32 y, f32 z, u32 axis)
{
    return sinf(x * 1.7f + (f32)axis * 2.1f) * cosf(y * 1.3f - (f32)axis) * sinf(z * 1.1f + (f32)axis * 0.7f + 0.5f);
}

void ak_pfx_update(ak_pfx_world *w, f32 dt)
{
    if (!w->lib || dt <= 0) return;
    /* emitters: time runs at dt / duration (x the time scale with flags 8); while under 1 they emit rate e(t) x the effect's
       scale a second (each whole count a spawn if a random <= f(t), under the limit); flags 0x20 fill to the limit at once */
    for (u32 i = 0; i < AK_PFX_MAX_EMITTERS; i++) {
        ak_pfx_emitter *m = &w->em[i]; if (m->effect < 0) continue;
        const ak_pfx_system *s = m->def->sys;
        if (m->t < 1) {
            if (s->flags & 0x20) {
                if (!m->burst_done) { m->burst_done = true; for (u32 k = 0; k < s->limit; k++) if (rnd(w) <= sample1(&s->f, m->t)) spawn(w, m, i); }
            } else {
                m->acc += sample1(&s->e, m->t) * w->fx[m->effect].scale * dt;
                while (m->acc >= 1) { m->acc -= 1; if (m->nlive < s->limit && rnd(w) <= sample1(&s->f, m->t)) spawn(w, m, i); }
            }
            m->t += dt * ((s->flags & 8) ? s->time_scale : 1.0f) / s->duration;
        }
    }
    /* particles: age 0..1 at dt / life; motion (088E2DDC) */
    for (u32 i = 0; i < w->np; ) {
        ak_pfx_particle *p = &w->p[i]; ak_pfx_emitter *m = &w->em[p->em];
        const ak_pfx_system *s = m->def->sys; const ak_pfx_type *y = s->type;
        p->age += dt / p->life;
        if (p->age > 1) {
            if (y->flags & 0x4000000) p->age = 0;
            else { m->nlive--; w->p[i] = w->p[--w->np]; continue; }
        }
        if (s->flags & 0x400) { f32 g = sample1(&s->g, p->age) * dt; for (int k = 0; k < 3; k++) p->vel[k] += s->grav[k] * g; }
        if (s->flags & 0x80) { f32 h = sample1(&s->h, p->age) * dt; for (u32 k = 0; k < 3; k++) p->vel[k] += h * noise3(p->pos[0] * s->noise, p->pos[1] * s->noise, p->pos[2] * s->noise, k); }
        if (s->flags & 0x200) { f32 f = 1 - s->drag * dt; if (f < 0) f = 0; for (int k = 0; k < 3; k++) p->vel[k] *= f; }
        else if (s->flags & 0x100) { f32 f = 1 - s->drag * sample1(&y->size, p->age) * dt; if (f < 0) f = 0; for (int k = 0; k < 3; k++) p->vel[k] *= f; }
        for (int k = 0; k < 3; k++) p->pos[k] += p->vel[k] * dt;
        i++;
    }
    /* effects end when every emitter is done and has no particles left */
    for (u32 f = 0; f < AK_PFX_MAX_EFFECTS; f++) {
        ak_pfx_instance *in = &w->fx[f]; if (!in->alive) continue;
        bool done = true;
        for (u32 k = 0; k < in->nem; k++) { const ak_pfx_emitter *m = &w->em[in->first_em + k]; if (m->t < 1 || m->nlive) { done = false; break; } }
        if (done) { for (u32 k = 0; k < in->nem; k++) w->em[in->first_em + k].effect = -1; in->alive = false; }
    }
}

u32 ak_pfx_live(const ak_pfx_world *w) { return w->np; }

u32 ak_pfx_vertices(const ak_pfx_world *w, bool additive, const f32 *right, const f32 *up, ak_vtx *out, u32 cap)
{
    u32 n = 0;
    for (u32 i = 0; i < w->np && n + 6 <= cap; i++) {
        const ak_pfx_particle *p = &w->p[i]; const ak_pfx_type *y = w->em[p->em].def->sys->type;
        if ((y->kind != 1) != additive) continue;                     /* kind 1 alpha-blended, the rest additive (0890D108) */
        f32 c[4]; sample(&y->colour, p->age, c);
        if (c[3] <= 0) continue;                                      /* (0891589C skips a particle with no alpha) */
        /* the size: c1 at the age x (1 - the particle's random x c3 at the age) - a half-width [assumed] */
        f32 hw = sample1(&y->size, p->age) * (1.0f - p->rnd * sample1(&y->size_rand, p->age));
        if (hw <= 0) continue;
        f32 ang = 0;                                                  /* the turn: c2 at the age (none with flags 0x8000 or 2 without 0x200) */
        if (!(y->flags & 0x8000) && (y->flags & 0x202) != 2) {
            ang = (y->flags & 4) ? p->rnd * 6.2831853f : sample1(&y->spin, p->age) * 6.2831853f;   /* [assumed] turns */
            if ((y->flags & 0x400) && (((u32)(p->rnd * 65536.0f)) & 1)) ang = -ang;
        }
        f32 ca = cosf(ang) * hw, sa = sinf(ang) * hw;
        f32 ax[3], ay[3];
        for (int k = 0; k < 3; k++) { ax[k] = right[k] * ca + up[k] * sa; ay[k] = -right[k] * sa + up[k] * ca; }
        f32 e[3] = { p->pos[0], -p->pos[1], -p->pos[2] };               /* to engine axes */
        static const f32 qs[4][2] = { { -1, -1 }, { 1, -1 }, { 1, 1 }, { -1, 1 } };
        static const int tri[6] = { 0, 1, 2, 0, 2, 3 };
        u8 col[4];
        for (int k = 0; k < 3; k++) { f32 v = c[k] * 128.0f; col[k] = (u8)(v > 255 ? 255 : v < 0 ? 0 : v); }   /* 128 = full (x2 in the shader) */
        { f32 v = c[3] * 255.0f; col[3] = (u8)(v > 255 ? 255 : v); }
        for (int t = 0; t < 6; t++) {
            const f32 *q = qs[tri[t]]; ak_vtx *o = &out[n + t];
            for (int k = 0; k < 3; k++) o->pos[k] = e[k] + ax[k] * q[0] + ay[k] * q[1];
            o->uv[0] = q[0] < 0 ? y->uv[0] : y->uv[2]; o->uv[1] = q[1] > 0 ? y->uv[1] : y->uv[3];
            o->nrm[0] = o->nrm[1] = o->nrm[2] = o->nrm[3] = 0; memcpy(o->col, col, 4);
        }
        n += 6;
    }
    return n;
}
