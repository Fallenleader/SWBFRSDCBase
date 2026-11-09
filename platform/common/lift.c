/* Lifted game functions: hot functions of the decompiled game rewritten as plain native C (hooked by tools/dc/hooks.py, 'replace').
 *
 * Each one does exactly what the decompiled function does, written from its decompiled body (same comparisons, same order of float
 * operations, NaN behaviour included: the PSP's ordered compares are C's  <  and  <=), without the register-by-register form: values
 * stay in CPU registers, the per-call scratch on the emulated stack becomes locals.  RS_LIFT=0 in settings.txt turns them all off
 * (the original code runs), to compare.
 *
 *  - func_08833F0C  ray against an axis-aligned box (slab test): the inner test of the collision ray casts
 *  - func_08833440  ray cast through a box tree whose child boxes are stored as signed bytes relative to the parent: walks the tree,
 *                   calls the hit callback for every leaf the ray reaches, nearest first (the callback may shorten the ray) */
#include <string.h>
#include "../../src/game/game.h"

extern int rs_setting_int(const char *, int);
static int lift_on = -1;
static inline int on(void){ if (lift_on < 0) lift_on = rs_setting_int("RS_LIFT", 1) != 0; return lift_on; }
static inline float KF(u32 addr){ return BITSF(LD32(addr)); }

/* ---------------------------------------------------------------- 08833F0C: ray / box
 * o, d: the ray's origin and direction (3 floats); b: the box as min.x, max.x, min.y, max.y, min.z, max.z; *t: in, the ray's length;
 * out (on a hit), where it enters the box (0 from inside). */
typedef struct { float k0, k1, k2, k3, k20, keq; } lift_k_t;
static inline void lift_consts(lift_k_t *k){
    k->k0 = KF(D_08AEB768); k->k1 = KF(D_08AEB764); k->k2 = KF(D_08AEB76C); k->k3 = KF(D_08AEB770); k->k20 = KF(D_08AEB75C); k->keq = KF(D_08AEB758); }
static inline int raybox(const float *o, const float *d, const float *b, float *t, const lift_k_t *k){
    float best = k->k1; int axis = -1;
    for (int i = 0; i < 3; i++) {
        float mn = b[2 * i], mx = b[2 * i + 1], c;
        if (o[i] < mn) { if (d[i] <= k->k0) return 0; float r = k->k2 / d[i]; c = (mn - o[i]) * r; }
        else if (mx < o[i]) { if (k->k3 <= d[i]) return 0; float r = k->k2 / d[i]; c = (mx - o[i]) * r; }
        else c = k->k1;
        if (best < c) { best = c; axis = i; } }
    if (axis < 0) { *t = 0.0f; return 1; }
    if (*t < best) return 0;
    int j = axis + 1 == 3 ? 0 : axis + 1;
    float p = o[j] + best * d[j];
    if (p < b[2 * j] || b[2 * j + 1] < p) return 0;
    j = j + 1 == 3 ? 0 : j + 1;
    p = o[j] + best * d[j];
    if (p < b[2 * j] || b[2 * j + 1] < p) return 0;
    *t = best; return 1; }
int rs_lift_raybox(u32 o, u32 d, u32 box, u32 t, void *rv){
    rv_t *r = (rv_t *)rv;
    if (!on()) return 0;
    lift_k_t k; lift_consts(&k);
    float b[6]; const float *s = (const float *)PTR(box); for (int i = 0; i < 6; i++) b[i] = s[i];
    r->v0 = (u32)raybox((const float *)PTR(o), (const float *)PTR(d), b, (float *)PTR(t), &k); r->v1 = 0; r->f0 = 0;
    return 1; }

/* ---------------------------------------------------------------- 08833440: ray cast through the box tree
 * tree: +0 the number of inner nodes n (children numbered past n are leaves: the callback gets child - n), +4 the root box,
 * +28 the child boxes: per node 12 signed bytes, 6 per child, each moving one face of the parent box by byte x extent x k20.
 * The original keeps its stack of boxes to visit in a game array per caller slot (32 entries); here it is local. */
typedef struct { u32 node; float b[6]; } lift_ent_t;
#define LIFT_STACK 96
static inline void callback(u32 cb, u32 leaf){ ((ifn_t)PTR(cb))(leaf, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); }
int rs_lift_boxtree(u32 tree, u32 org, u32 dir, u32 tmaxp, u32 cb, void *rv){
    rv_t *r = (rv_t *)rv;
    if (!on()) return 0;
    lift_k_t k; lift_consts(&k);
    if (LD32(tree) == 0) return 0;                                     /* a single box: the original's own path */
    if (FCMP(KF(dir + 4), k.keq, 2)) return 0;                          /* a ray with that y direction: the original's other walk */
    const float *o = (const float *)PTR(org), *d = (const float *)PTR(dir); float *tm = (float *)PTR(tmaxp);
    const s8 *qs = (const s8 *)PTR(LD32(tree + 28));
    lift_ent_t st[LIFT_STACK]; int i = 0;
    st[0].node = 0; memcpy(st[0].b, PTR(tree + 4), 24);
    for (;;) {
        u32 node = st[i].node; float *A = st[i].b, B[6]; memcpy(B, A, 24);
        const s8 *q = qs + (node >> 1) * 12 + (node & 1) * 6;
        float ex = (A[1] - A[0]) * k.k20, ey = (A[3] - A[2]) * k.k20, ez = (A[5] - A[4]) * k.k20;
        A[q[0] < 0] += (float)q[0] * ex; A[2 + (q[1] < 0)] += (float)q[1] * ey; A[4 + (q[2] < 0)] += (float)q[2] * ez;
        B[q[3] < 0] += (float)q[3] * ex; B[2 + (q[4] < 0)] += (float)q[4] * ey; B[4 + (q[5] < 0)] += (float)q[5] * ez;
        float tA = *tm; int hA = raybox(o, d, A, &tA, &k);
        float tB = *tm; int hB = raybox(o, d, B, &tB, &k);
        u32 cA = node * 2 + 1, cB = node * 2 + 2; int nearA = 0;
        if (hA && hB && tA < tB) {                                      /* both hit, A nearer: A is visited first */
            nearA = 1;
            if (!(cA < LD32(tree))) { hA = 0; callback(cb, cA - LD32(tree)); if (!(tB < *tm)) hB = 0; } }
        if (hB && !(cB < LD32(tree))) { hB = 0; callback(cb, cB - LD32(tree)); if (!(tA < *tm)) hA = 0; }
        if (hA && !nearA) {
            if (!(cA < LD32(tree))) { callback(cb, cA - LD32(tree)); goto next; }
            st[i].node = cA; if (i + 1 < LIFT_STACK) i++; }
        if (hB && i + 2 < LIFT_STACK) { memcpy(st[i + 1].b, st[i].b, 24); st[i].node = cB; memcpy(st[i].b, B, 24); i++; }
        if (hA && nearA) { st[i].node = cA; if (i + 1 < LIFT_STACK) i++; }
    next:
        if (i == 0) break;
        i--; }
    r->v0 = 0; r->v1 = 0; r->f0 = 0; return 1; }
