/* Lifted game functions: hot functions of the decompiled game rewritten as plain native C (hooked by tools/dc/hooks.py, 'replace').
 *
 * Each one does exactly what the decompiled function does, written from its decompiled body (same comparisons, same order of float
 * operations, NaN behaviour included: the PSP's ordered compares are C's  <  and  <=), without the register-by-register form: values
 * stay in CPU registers, the per-call scratch on the emulated stack becomes locals.  Settings (settings.txt):
 *   RS_LIFT=0         all off (the original code runs), to compare
 *   RS_LIFT_MASK=<n>  which ones: bit 0 ray / box, bit 1 box-tree walk
 *   RS_LIFT_CHECK=1   verification: the original runs and the lifted version is run beside it, results compared in the log
 *                     ([LIFT] ... mismatches).  Checked on the desktop build: 1.9 million tree walks, 200,000 ray / box tests, 0 mismatches.
 *
 *  - func_08833F0C  ray against an axis-aligned box (slab test): the inner test of the collision ray casts
 *  - func_08833440  ray cast through a box tree whose child boxes are stored as signed bytes relative to the parent: walks the tree,
 *                   calls the hit callback for every leaf the ray reaches, nearest first (the callback may shorten the ray) */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../src/game/game.h"

extern int rs_setting_int(const char *, int);
static int lift_on = -1;
static inline int on_m(int bit){ if (lift_on < 0) { lift_on = rs_setting_int("RS_LIFT", 1) != 0 ? rs_setting_int("RS_LIFT_MASK", -1) : 0; } return (lift_on & bit) != 0; }
#define on() on_m(LIFT_BIT)
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
#define LIFT_BIT 1
int rs_lift_raybox(u32 o, u32 d, u32 box, u32 t, void *rv){
    rv_t *r = (rv_t *)rv;
    if (!on()) return 0;
    lift_k_t k; lift_consts(&k);
    float b[6]; const float *s = (const float *)PTR(box); for (int i = 0; i < 6; i++) b[i] = s[i];
    static int chk = -1; if (chk < 0) chk = rs_setting_int("RS_LIFT_CHECK", 0);
    if (chk) { static __thread int in; if (in) return 0;                /* check mode: the original runs too, results compared */
        float tl = *(float *)PTR(t); int hl = raybox((const float *)PTR(o), (const float *)PTR(d), b, &tl, &k);
        in = 1; extern rv_t func_08833F0C(u32, u32, u32, u32); rv_t ro = func_08833F0C(o, d, box, t); in = 0;
        float to = *(float *)PTR(t); static unsigned n, bad;
        if ((u32)hl != ro.v0 || (hl && FBITS(tl) != FBITS(to))) { if (bad++ < 20) fprintf(stderr, "[LIFT] raybox mismatch: lifted %d %g, original %u %g\n", hl, tl, ro.v0, to); }
        if (++n % 200000 == 0) fprintf(stderr, "[LIFT] raybox checked %u, mismatches %u\n", n, bad);
        *r = ro; return 1; }
    r->v0 = (u32)raybox((const float *)PTR(o), (const float *)PTR(d), b, (float *)PTR(t), &k); r->v1 = 0; r->f0 = 0;
    return 1; }

/* check mode (RS_LIFT_CHECK=1): the decompiled original, its leaf calls recorded instead of made, against the lifted walk */
#define REC_MAX 512
static __thread u32 rec_buf[REC_MAX]; static __thread int rec_n;
static void rec_leaf(u32 leaf){ if (rec_n < REC_MAX) rec_buf[rec_n] = leaf; rec_n++; }
extern rv_t func_088338F8(u32, u32, u32, u32, u32, float, float, float, float, float, float, float, float);
extern rv_t func_08833F0C(u32, u32, u32, u32);
static rv_t ref_boxtree(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
    u8 trav_[896] __attribute__((aligned(16)));
L_08833440:;
    sp = sp - 128;
    fp = a1 + 0;
    s7 = a2 + 0;
    s6 = a3 + 0;
    s5 = a0 + 0;
    v0 = LD32(a0);
    ST32(sp+44, t0);
    cnd_ = v0 == 0;
    t0 = t1 + 0;
    if (cnd_) { goto L_088338C0; }
    goto L_08833490;
L_08833490:;
    v0 = D_08AEB758 - (-18600);
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(v0-18600));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v1 = t1 << 3;
    if (cnd_) { goto L_088338AC; }
    goto L_088334AC;
L_088334AC:;
    a0 = LD32(a0+4);
    v1 = v1 - t1;
    v0 = RS_GADDR(trav_) - (12940);
    v1 = v1 << 7;
    v0 = v0 + 12940;
    s0 = v1 + v0;
    ST32(s0+4, a0);
    t0 = s0 + 0;
    a0 = LD32(s5+8);
    ST32(s0, 0);
    ST32(s0+8, a0);
    v0 = LD32(s5+12);
    ST32(s0+12, v0);
    v1 = LD32(s5+16);
    ST32(s0+16, v1);
    v0 = LD32(s5+20);
    ST32(s0+20, v0);
    v1 = LD32(s5+24);
    ST32(s0+24, v1);
    s0 = s0 + 28;
    cnd_ = s0 == t0;
    v0 = D_08AEB75C - (-18596);
    if (cnd_) { goto L_0883380C; }
    goto L_08833504;
L_08833504:;
    f20 = BITSF(LD32(v0-18596));
    ST32(sp+48, t0);
    s0 = s0 - 28;
    goto L_08833510;
L_08833510:;
    a0 = LD32(s0);
    t2 = LD32(s0+16);
    t3 = LD32(s0+20);
    t4 = LD32(s0+24);
    a1 = LD32(s0+4);
    a2 = LD32(s0+8);
    a3 = LD32(s0+12);
    v1 = a0 >> 1;
    t1 = LD32(s5+28);
    a0 = a0 & 0x1;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = a0 << 1;
    ST32(sp+12, t2);
    v1 = v1 + a0;
    v0 = v0 << 2;
    ST32(sp+16, t3);
    t1 = t1 + v0;
    v1 = v1 << 1;
    ST32(sp+20, t4);
    t1 = t1 + v1;
    t0 = s0 + 4;
    ST32(sp, a1);
    a0 = fp + 0;
    a1 = s7 + 0;
    ST32(sp+4, a2);
    a2 = t0 + 0;
    ST32(sp+8, a3);
    a3 = sp + 36;
    ST32(sp+52, 0);
    v0 = LD_U8(t1);
    f6 = BITSF(LD32(t0+4));
    f1 = BITSF(LD32(s0+4));
    v1 = (u32)(s32)(s8)v0;
    f0 = BITSF(v1);
    f6 = f6 - f1;
    v0 = (v0 >> 7) & 0x1;
    f1 = (float)(s32)FBITS(f0);
    v0 = v0 << 2;
    f6 = f6 * f20;
    v0 = v0 + t0;
    f0 = BITSF(LD32(v0));
    v1 = (u32)(s32)LD_S8(t1+1);
    f1 = f1 * f6;
    f2 = BITSF(LD32(t0+8));
    f7 = BITSF(LD32(t0+12));
    f8 = BITSF(LD32(t0+16));
    f0 = f0 + f1;
    f4 = BITSF(LD32(t0+20));
    f3 = BITSF(v1);
    f7 = f7 - f2;
    v1 = (u32)(s32)LD_S8(t1+2);
    ST32(v0, FBITS(f0));
    f1 = (float)(s32)FBITS(f3);
    f5 = BITSF(v1);
    v1 = LD_U8(t1+1);
    f7 = f7 * f20;
    f4 = f4 - f8;
    v1 = v1 >> 7;
    v1 = v1 << 2;
    v1 = v1 + t0;
    f1 = f1 * f7;
    f0 = BITSF(LD32(v1+8));
    f4 = f4 * f20;
    f2 = (float)(s32)FBITS(f5);
    f0 = f0 + f1;
    f2 = f2 * f4;
    ST32(v1+8, FBITS(f0));
    v0 = LD_U8(t1+2);
    v0 = v0 >> 7;
    v0 = v0 << 2;
    v0 = v0 + t0;
    f0 = BITSF(LD32(v0+16));
    f0 = f0 + f2;
    ST32(v0+16, FBITS(f0));
    t0 = LD_U8(t1+3);
    v0 = (u32)(s32)LD_S8(t1+4);
    v1 = (u32)(s32)LD_S8(t1+5);
    f5 = BITSF(v0);
    v0 = (u32)(s32)(s8)t0;
    f0 = BITSF(v0);
    t0 = (t0 >> 7) & 0x1;
    t0 = t0 << 2;
    f1 = (float)(s32)FBITS(f0);
    t0 = t0 + sp;
    f0 = BITSF(LD32(t0));
    f8 = BITSF(v1);
    f1 = f1 * f6;
    f2 = (float)(s32)FBITS(f5);
    f3 = (float)(s32)FBITS(f8);
    f0 = f0 + f1;
    f2 = f2 * f7;
    f3 = f3 * f4;
    ST32(t0, FBITS(f0));
    v1 = LD_U8(t1+4);
    f1 = BITSF(LD32(s6));
    v1 = v1 >> 7;
    v1 = v1 << 2;
    v1 = v1 + sp;
    f0 = BITSF(LD32(v1+8));
    f0 = f0 + f2;
    ST32(v1+8, FBITS(f0));
    v0 = LD_U8(t1+5);
    v0 = v0 >> 7;
    v0 = v0 << 2;
    v0 = v0 + sp;
    f0 = BITSF(LD32(v0+16));
    f0 = f0 + f3;
    ST32(v0+16, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { rv_t r_ = func_08833F0C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088336CC;
L_088336CC:;
    a0 = fp + 0;
    f0 = BITSF(LD32(s6));
    a1 = s7 + 0;
    a2 = sp + 0;
    a3 = sp + 40;
    s2 = v0 + 0;
    ST32(sp+40, FBITS(f0));
    { rv_t r_ = func_08833F0C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088336EC;
L_088336EC:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v0 = v0 << 1;
    s3 = v0 + 2;
    cnd_ = s2 == 0;
    s4 = v0 + 1;
    if (cnd_) { goto L_08833734; }
    goto L_08833704;
L_08833704:;
    cnd_ = s1 == 0;
    f1 = BITSF(LD32(sp+36));
    if (cnd_) { goto L_0883374C; }
    goto L_0883370C;
L_0883370C:;
    f0 = BITSF(LD32(sp+40));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08833734; }
    goto L_08833720;
L_08833720:;
    v1 = LD32(s5);
    ST32(sp+52, v0);
    v0 = s4 < v1;
    cnd_ = v0 == 0;
    a0 = s4 - v1;
    if (cnd_) { goto L_0883387C; }
    goto L_08833734;
L_08833734:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0883374C; }
    goto L_0883373C;
L_0883373C:;
    v1 = LD32(s5);
    v0 = s3 < v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08833850; }
    goto L_0883374C;
L_0883374C:;
    cnd_ = s2 == 0;
    v1 = LD32(sp+52);
    if (cnd_) { goto L_08833774; }
    goto L_08833754;
L_08833754:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08833774; }
    goto L_0883375C;
L_0883375C:;
    a0 = LD32(s5);
    v0 = s4 < a0;
    cnd_ = v0 == 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_08833840; }
    goto L_0883376C;
L_0883376C:;
    ST32(s0, s4);
    s0 = s0 + 28;
    goto L_08833774;
L_08833774:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088337E4; }
    goto L_0883377C;
L_0883377C:;
    v0 = LD32(s0+4);
    v1 = LD32(s0+8);
    a0 = LD32(s0+12);
    a1 = LD32(s0+16);
    a2 = LD32(s0+20);
    a3 = LD32(s0+24);
    ST32(s0+32, v0);
    ST32(s0+36, v1);
    ST32(s0+40, a0);
    ST32(s0+44, a1);
    ST32(s0+48, a2);
    ST32(s0+52, a3);
    v0 = LD32(sp);
    ST32(s0, s3);
    ST32(s0+4, v0);
    v1 = LD32(sp+4);
    ST32(s0+8, v1);
    v0 = LD32(sp+8);
    ST32(s0+12, v0);
    v1 = LD32(sp+12);
    ST32(s0+16, v1);
    v0 = LD32(sp+16);
    ST32(s0+20, v0);
    v1 = LD32(sp+20);
    ST32(s0+24, v1);
    s0 = s0 + 28;
    goto L_088337E4;
L_088337E4:;
    cnd_ = s2 == 0;
    v0 = LD32(sp+48);
    if (cnd_) { goto L_08833804; }
    goto L_088337EC;
L_088337EC:;
    v1 = LD32(sp+52);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08833804; }
    goto L_088337F8;
L_088337F8:;
    ST32(s0, s4);
    s0 = s0 + 28;
    v0 = LD32(sp+48);
    goto L_08833804;
L_08833804:;
    cnd_ = s0 != v0;
    s0 = s0 - 28;
    if (cnd_) { goto L_08833510; }
    goto L_0883380C;
L_0883380C:;
    goto L_08833810;
L_08833810:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08833840:;
    t_ = v0;
    a0 = s4 - a0;
    { rec_leaf(a0); v0 = 0; v1 = 0; f0 = 0; }
    goto L_08833848;
L_08833848:;
    v0 = LD32(sp+48);
    goto L_08833804;
L_08833850:;
    a0 = s3 - v1;
    t_ = v0;
    s1 = 0 + 0;
    { rec_leaf(a0); v0 = 0; v1 = 0; f0 = 0; }
    goto L_0883385C;
L_0883385C:;
    f1 = BITSF(LD32(s6));
    f0 = BITSF(LD32(sp+36));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    s2 = s2 & 0x1;
    if (cnd_) { goto L_0883374C; }
    goto L_08833874;
L_08833874:;
    s2 = 0 + 0;
    goto L_0883374C;
L_0883387C:;
    v1 = LD32(sp+44);
    s2 = 0 + 0;
    t_ = v1;
    s1 = s1 & 0x1;
    { rec_leaf(a0); v0 = 0; v1 = 0; f0 = 0; }
    goto L_0883388C;
L_0883388C:;
    f1 = BITSF(LD32(s6));
    f0 = BITSF(LD32(sp+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { s1 = 0 + 0; goto L_08833734; }
    goto L_088338A4;
L_088338A4:;
    goto L_08833734;
L_088338AC:;
    a2 = a3 + 0;
    a3 = LD32(sp+44);
    { rv_t r_ = func_088338F8(a0, a1, a2, a3, t0, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088338B8;
L_088338B8:;
    goto L_08833810;
L_088338C0:;
    f0 = BITSF(LD32(a3));
    a2 = a0 + 4;
    a3 = sp + 32;
    a0 = a1 + 0;
    a1 = s7 + 0;
    ST32(sp+32, FBITS(f0));
    { rv_t r_ = func_08833F0C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088338DC;
L_088338DC:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08833810; }
    goto L_088338E4;
L_088338E4:;
    v0 = LD32(sp+44);
    t_ = v0;
    a0 = 0 + 0;
    { rec_leaf(a0); v0 = 0; v1 = 0; f0 = 0; }
    goto L_088338F0;
L_088338F0:;
    goto L_08833810;
}

/* ---------------------------------------------------------------- 08833440: ray cast through the box tree
 * tree: +0 the number of inner nodes n (children numbered past n are leaves: the callback gets child - n), +4 the root box,
 * +28 the child boxes: per node 12 signed bytes, 6 per child, each moving one face of the parent box by byte x extent x k20.
 * The original keeps its stack of boxes to visit in a game array per caller slot (32 entries); here it is local. */
typedef struct { u32 node; float b[6]; } lift_ent_t;
#define LIFT_STACK 96
static __thread int rec_mode;
static int lift_walk(u32 tree, u32 org, u32 dir, u32 tmaxp, u32 cb, void *rv);
static inline void callback(u32 cb, u32 leaf){ if (rec_mode) { rec_leaf(leaf); return; } ((ifn_t)RS_FPTR(cb))(leaf, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); }
#undef LIFT_BIT
#define LIFT_BIT 2
int rs_lift_boxtree(u32 tree, u32 org, u32 dir, u32 tmaxp, u32 cb, void *rv){
    rv_t *r = (rv_t *)rv;
    if (!on()) return 0;
    lift_k_t k; lift_consts(&k);
    if (LD32(tree) == 0) return 0;                                     /* a single box: the original's own path */
    if (FCMP(KF(dir + 4), k.keq, 2)) return 0;                          /* a ray with that y direction: the original's other walk */
    { static int chk = -1; if (chk < 0) chk = rs_setting_int("RS_LIFT_CHECK", 0);
      if (chk) { static unsigned n, bad; float t1 = *(float *)PTR(tmaxp), t2 = t1; u32 ref[REC_MAX]; int nref;
        rec_n = 0; ref_boxtree(tree, org, dir, RS_GADDR(&t1), cb, 0, 0, 0, 0, 0, 0, 0, 0, 0); nref = rec_n; memcpy(ref, rec_buf, sizeof ref);
        rec_n = 0; rec_mode = 1; rv_t dummy; rec_mode = 1; lift_walk(tree, org, dir, RS_GADDR(&t2), cb, &dummy); rec_mode = 0;
        int same = nref == rec_n; for (int i = 0; same && i < nref && i < REC_MAX; i++) same = ref[i] == rec_buf[i];
        if (!same && bad++ < 20) { fprintf(stderr, "[LIFT] boxtree mismatch: original %d leaves (", nref); for (int i = 0; i < nref && i < 12; i++) fprintf(stderr, "%u ", ref[i]);
            fprintf(stderr, ") lifted %d (", rec_n); for (int i = 0; i < rec_n && i < 12; i++) fprintf(stderr, "%u ", rec_buf[i]); fprintf(stderr, ")\n"); }
        if (++n % 100000 == 0) fprintf(stderr, "[LIFT] boxtree checked %u, mismatches %u\n", n, bad);
        return 0; } }                                                     /* the original runs */
    return lift_walk(tree, org, dir, tmaxp, cb, rv); }
static int lift_walk(u32 tree, u32 org, u32 dir, u32 tmaxp, u32 cb, void *rv){
    rv_t *r = (rv_t *)rv; lift_k_t k; lift_consts(&k);
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

/* RS_UPDATE_CENSUS=1 (settings.txt): the world's per-object update (08923E30: every registered object's update method, slot 5 of its
 * vtable, called with the frame time) run here instead, the same calls in the same order, with each call timed by the method it
 * reached.  Every 600 frames the log lists the costliest methods (ms per frame, calls per frame): the object types worth running on
 * the other cores or rewriting natively.  Off (the default), the game's own code runs. */
typedef struct { u32 fn; u32 n; u64 us; } cen_t;
#define CEN_N 256
static cen_t cen[CEN_N], cen2[CEN_N]; static u64 cen_loop_us, cen_tail_us, cen_tail3[3], cen_tree_us; static int cen_frames, cen_on = -1, cen_depth; static double cen_dt, cen_dt_min = 1e9, cen_dt_max, cen_real, cen_real_max; static u64 cen_last;
static void cen_put(cen_t *cen, u32 fn, u64 us){
    unsigned h = (fn >> 2) * 2654435761u >> 24;
    for (int k = 0; k < CEN_N; k++) { cen_t *e = &cen[(h + k) & (CEN_N - 1)]; if (e->fn == fn || !e->fn) { e->fn = fn; e->n++; e->us += us; return; } } }
#define cen_add(f, u) cen_put(cen, f, u)
static int cen_cmp(const void *a, const void *b){ const cen_t *x = a, *y = b; return x->us < y->us ? 1 : x->us > y->us ? -1 : 0; }
#define CEN_SUBS 11
static const char *cen_sub_name[CEN_SUBS] = {"089702D0","08877504","08901774","088D189C","089FA30C","088AFEF0","088B84B0","08A03E78","089DAC88","08AC6F88","0880688C"};
static u64 cen_sub_us[CEN_SUBS], cen_sub_t0[CEN_SUBS]; static int cen_sub_d[CEN_SUBS];
static int cen_enabled(void);
void rs_cen_in(int i){ if (!cen_enabled()) return; u64 rs_perf_us(void); if (!cen_sub_d[i]++) cen_sub_t0[i] = rs_perf_us(); }
void rs_cen_out(int i){ if (cen_on <= 0 || cen_sub_d[i] <= 0) return; u64 rs_perf_us(void); if (!--cen_sub_d[i]) cen_sub_us[i] += rs_perf_us() - cen_sub_t0[i]; }
static u32 cen_nobj, cen_nnode; u32 rs_cen_dmg;      /* objects updated, behaviour nodes run, damage events (game_patches.c) */
/* RS_UPDATE_CENSUS=2: also one line per frame in ux0:data/SWBFRS/frames.txt (the console: frames.txt beside log.txt):
 *   F frame real_ms dt_ms loop_ms trees_ms queue1_ms queue2_ms tail3_ms parts_ms[CEN_SUBS] objects nodes damage
 *   S segment            (a new match: the profiler's segment too) */
typedef struct { u64 loop, tree, t3[3], sub[CEN_SUBS]; u32 nobj, nnode, dmg; } cen_snap_t;
static cen_snap_t cen_prev; static FILE *cen_ff; static unsigned cen_fn;
static void cen_snap(cen_snap_t *s){ s->loop = cen_loop_us; s->tree = cen_tree_us; memcpy(s->t3, cen_tail3, sizeof s->t3); memcpy(s->sub, cen_sub_us, sizeof s->sub);
    s->nobj = cen_nobj; s->nnode = cen_nnode; s->dmg = rs_cen_dmg; }
static void cen_line(double real_ms, double dt_ms){
    if (cen_on < 2) return;
    if (!cen_ff) { extern const char *rs_platform_data_dir(void); char fp[512]; snprintf(fp, sizeof fp, "%s/frames.txt", rs_platform_data_dir()); cen_ff = fopen(fp, "w"); if (!cen_ff) { cen_on = 1; return; }
        setvbuf(cen_ff, NULL, _IOFBF, 256 * 1024);
        fprintf(cen_ff, "# F frame real_ms dt_ms loop_ms trees_ms queue1_ms queue2_ms tail3_ms"); for (int i = 0; i < CEN_SUBS; i++) fprintf(cen_ff, " %s", cen_sub_name[i]);
        fprintf(cen_ff, " objects nodes damage\n"); }
    cen_snap_t s; cen_snap(&s); cen_snap_t *p = &cen_prev;
    fprintf(cen_ff, "F %u %.1f %.1f %.2f %.2f %.2f %.2f %.2f", cen_fn++, real_ms, dt_ms, (s.loop - p->loop) / 1000.0, (s.tree - p->tree) / 1000.0,
            (s.t3[0] - p->t3[0]) / 1000.0, (s.t3[1] - p->t3[1]) / 1000.0, (s.t3[2] - p->t3[2]) / 1000.0);
    for (int i = 0; i < CEN_SUBS; i++) fprintf(cen_ff, " %.2f", (s.sub[i] - p->sub[i]) / 1000.0);
    fprintf(cen_ff, " %u %u %u\n", s.nobj - p->nobj, s.nnode - p->nnode, s.dmg - p->dmg); *p = s; }
void rs_cen_segment(int n){ if (cen_ff) { fprintf(cen_ff, "S %d\n", n); fflush(cen_ff); } }
static void cen_report(void){
    cen_t s[CEN_N]; double F = cen_frames;
    memcpy(s, cen, sizeof s); qsort(s, CEN_N, sizeof s[0], cen_cmp);
    fprintf(stderr, "[CENSUS] object updates per frame: %.2f ms in the loop (behaviour trees %.2f ms), %.2f ms after it (%.2f + %.2f + %.2f); costliest:",
            cen_loop_us / 1000.0 / F, cen_tree_us / 1000.0 / F, cen_tail_us / 1000.0 / F, cen_tail3[0] / 1000.0 / F, cen_tail3[1] / 1000.0 / F, cen_tail3[2] / 1000.0 / F);
    for (int i = 0; i < 24 && s[i].fn; i++) fprintf(stderr, " %08x %.2f ms x%.1f;", s[i].fn, s[i].us / 1000.0 / F, s[i].n / F);
    memcpy(s, cen2, sizeof s); qsort(s, CEN_N, sizeof s[0], cen_cmp);
    fprintf(stderr, "\n[CENSUS] behaviour nodes (own time, children apart):");
    for (int i = 0; i < 32 && s[i].fn; i++) fprintf(stderr, " %08x %.2f ms x%.1f;", s[i].fn, s[i].us / 1000.0 / F, s[i].n / F);
    fprintf(stderr, "\n[CENSUS] the two time-sliced job queues after the loop: budgets %.2f ms and %.2f ms (+0), +72 %.3f / %.3f, +76 %.3f / %.3f",
            1000.0 * BITSF(LD32(D_08C25220)), 1000.0 * BITSF(LD32(D_08C25280)), BITSF(LD32(D_08C25220 + 72)), BITSF(LD32(D_08C25280 + 72)),
            BITSF(LD32(D_08C25220 + 76)), BITSF(LD32(D_08C25280 + 76)));
    fprintf(stderr, "\n[CENSUS] parts of the frame (ms per frame, nested ones included in their callers):");
    for (int i = 0; i < CEN_SUBS; i++) { fprintf(stderr, " %s %.2f;", cen_sub_name[i], cen_sub_us[i] / 1000.0 / F); cen_sub_us[i] = 0; }
    fprintf(stderr, "\n[CENSUS] game frame time (the update's dt): %.1f ms average, %.1f..%.1f ms; real time between updates %.1f ms average, %.1f ms longest\n",
            1000.0 * cen_dt / F, 1000.0 * cen_dt_min, 1000.0 * cen_dt_max, cen_real / 1000.0 / F, cen_real_max / 1000.0);
    cen_dt = cen_dt_max = cen_real = cen_real_max = 0; cen_dt_min = 1e9;
    memset(cen, 0, sizeof cen); memset(cen2, 0, sizeof cen2); cen_loop_us = cen_tail_us = cen_tree_us = 0; memset(cen_tail3, 0, sizeof cen_tail3); cen_frames = 0; cen_snap(&cen_prev); if (cen_ff) fflush(cen_ff); }
static int cen_enabled(void){
    if (cen_on < 0) { extern int rs_setting_int(const char *, int); cen_on = rs_setting_int("RS_UPDATE_CENSUS", 0); if (cen_on < 0) cen_on = 0; if (cen_on) fprintf(stderr, "[CENSUS] object update census on\n"); }
    return cen_on; }
int rs_census_node(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19, void *rv){
    if (!cen_enabled()) return 0;
    u64 rs_perf_us(void);
    u32 fl = LD32(a0 + 8); rv_t r = {fl & 1, fl, 0};
    if (!(fl & 1)) { *(rv_t *)rv = r; return 1; }
    if (fl & 2) { r.v0 = fl & 2; *(rv_t *)rv = r; return 1; }
    u64 t_in = cen_depth++ ? 0 : rs_perf_us();
    for (u32 c = LD32(a0 + 16); c; c = LD32(c + 12)) r = func_089221E0(c, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    u32 fn = LD32(LD32(a0) + 36); u64 t = rs_perf_us();
    r = ((ifn_t)RS_FPTR(fn))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    u64 t2_ = rs_perf_us(); cen_put(cen2, fn, t2_ - t); cen_nnode++;
    if (!--cen_depth) cen_tree_us += t2_ - t_in;
    *(rv_t *)rv = r; return 1; }
int rs_update_census(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19, void *rv){
    if (!cen_enabled()) return 0;
    u64 rs_perf_us(void);
    u8 stack_[16] __attribute__((aligned(16))); u32 sp = RS_GADDR(stack_);       /* the list iterator lives on the guest stack, as in the game */
    float dt = BITSF(LD32(D_08B285A0)); u32 node = LD32(D_08C2520C); rv_t r = {0, 0, 0};
    ST32(sp, D_08C2520C); ST32(sp + 4, node);
    u64 t_loop = rs_perf_us();
    cen_dt += dt; if (dt < cen_dt_min) cen_dt_min = dt; if (dt > cen_dt_max) cen_dt_max = dt;
    if (cen_last) { double g = (double)(t_loop - cen_last); cen_real += g; if (g > cen_real_max) cen_real_max = g; cen_line(g / 1000.0, 1000.0 * dt); } cen_last = t_loop;
    while (node) {
        u32 obj = LD32(node), fn = LD32(LD32(obj) + 20); u64 t = rs_perf_us();
        r = ((ifn_t)RS_FPTR(fn))(obj, a1, a2, a3, t0, t1, t2, t3, dt, f13, f14, f15, f16, f17, f18, f19);
        cen_add(fn, rs_perf_us() - t); cen_nobj++;
        func_08ABBDB0(sp); node = LD32(sp + 4); }
    u64 t_tail = rs_perf_us(); cen_loop_us += t_tail - t_loop;
    r = func_08836CA4(D_08C25220, a1, a2, a3, t0, t1, t2, t3);
    u64 t1_ = rs_perf_us(); cen_tail3[0] += t1_ - t_tail;
    r = func_08836CA4(D_08C25280, 0, 0, 0, 0, 0, 0, 0);
    u64 t2_ = rs_perf_us(); cen_tail3[1] += t2_ - t1_;
    { u32 o = LD32(D_08C25208); if (o) { u32 fn = LD32(LD32(o) + 12); r = ((ifn_t)RS_FPTR(fn))(o, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); } }
    u64 t3_ = rs_perf_us(); cen_tail3[2] += t3_ - t2_; cen_tail_us += t3_ - t_tail;
    if (++cen_frames >= 600) cen_report();
    *(rv_t *)rv = r; return 1; }
