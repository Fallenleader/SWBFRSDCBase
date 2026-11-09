#include "game.h"

/* 0885F9B4 */
rv_t func_0885F9B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_0885F9B4:;
    sp = sp - 176;
    s1 = a1 + 0;
    a1 = sp + 144;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F9D8;
L_0885F9D8:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F9E4;
L_0885F9E4:;
    a1 = s0 + 8;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F9F0;
L_0885F9F0:;
    a1 = s0 + 12;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F9FC;
L_0885F9FC:;
    a1 = s0 + 16;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA08;
L_0885FA08:;
    a1 = s0 + 20;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA14;
L_0885FA14:;
    a1 = s0 + 24;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA20;
L_0885FA20:;
    a1 = s0 + 28;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA2C;
L_0885FA2C:;
    a1 = s0 + 32;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA38;
L_0885FA38:;
    a1 = s0 + 36;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA44;
L_0885FA44:;
    a1 = s0 + 40;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA50;
L_0885FA50:;
    a1 = s0 + 44;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA5C;
L_0885FA5C:;
    a1 = s0 + 48;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA68;
L_0885FA68:;
    a1 = s0 + 52;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA74;
L_0885FA74:;
    a1 = s0 + 56;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA80;
L_0885FA80:;
    a1 = s0 + 60;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA8C;
L_0885FA8C:;
    a1 = s0 + 64;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FA98;
L_0885FA98:;
    a1 = s0 + 68;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FAA4;
L_0885FAA4:;
    a1 = s0 + 72;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FAB0;
L_0885FAB0:;
    a1 = s0 + 76;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FABC;
L_0885FABC:;
    a1 = s0 + 80;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FAC8;
L_0885FAC8:;
    a1 = s0 + 84;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FAD4;
L_0885FAD4:;
    a1 = s0 + 88;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FAE0;
L_0885FAE0:;
    a1 = s0 + 92;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FAEC;
L_0885FAEC:;
    a1 = s0 + 96;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FAF8;
L_0885FAF8:;
    a1 = s0 + 100;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FB04;
L_0885FB04:;
    a1 = s0 + 104;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FB10;
L_0885FB10:;
    a1 = s0 + 108;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FB1C;
L_0885FB1C:;
    a1 = s0 + 112;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FB28;
L_0885FB28:;
    v1 = LD32(sp+144);
    v1 = (s32)v1 < 3;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0885FC60; }
    goto L_0885FB38;
L_0885FB38:;
    v1 = D_08AEBE10 - (-16880);
    f2 = BITSF(LD32(s0+20));
    f0 = BITSF(LD32(v1-16880));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(s0+32)); goto L_0885FBA4; }
    goto L_0885FB54;
L_0885FB54:;
    f3 = BITSF(LD32(s0+24));
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(s0+32)); goto L_0885FBA4; }
    goto L_0885FB68;
L_0885FB68:;
    f1 = BITSF(LD32(s0+28));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(s0+32)); goto L_0885FBA4; }
    goto L_0885FB7C;
L_0885FB7C:;
    v0 = D_08AEBE14 - (-16876);
    f0 = BITSF(LD32(v0-16876));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f0 = f3 * f0;
    ST32(s0+28, FBITS(f1));
    ST32(s0+20, FBITS(f2));
    ST32(s0+24, FBITS(f0));
    f0 = BITSF(LD32(v1-16880));
    f2 = BITSF(LD32(s0+32));
    goto L_0885FBA4;
L_0885FBA4:;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    a1 = sp + 112;
    if (cnd_) { goto L_0885FBFC; }
    goto L_0885FBB4;
L_0885FBB4:;
    f3 = BITSF(LD32(s0+36));
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885FBFC; }
    goto L_0885FBC8;
L_0885FBC8:;
    f1 = BITSF(LD32(s0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = D_08AEBE14 - (-16876);
    if (cnd_) { goto L_0885FBFC; }
    goto L_0885FBDC;
L_0885FBDC:;
    f0 = BITSF(LD32(v0-16876));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f0 = f3 * f0;
    ST32(s0+40, FBITS(f1));
    ST32(s0+32, FBITS(f2));
    ST32(s0+36, FBITS(f0));
    a1 = sp + 112;
    goto L_0885FBFC;
L_0885FBFC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FC04;
L_0885FC04:;
    a0 = LD32(sp+112);
    v0 = LD32(s0+116);
    a1 = s0 + 120;
    v1 = a0 & 0x1;
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    a2 = (a0 >> 1) & 0x1;
    v1 = (a0 >> 2) & 0x1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a0 = (a0 >> 3) & 0x1;
    v0 = v0 | a2;
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    v0 = (v0 & ~(0x1u << 3)) | ((a0 & 0x1) << 3);
    ST32(s0+116, v0);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FC40;
L_0885FC40:;
    a1 = s0 + 124;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FC4C;
L_0885FC4C:;
    v1 = LD32(sp+144);
    v1 = (s32)v1 < 4;
    cnd_ = v1 == 0;
    a1 = s0 + 136;
    if (cnd_) { goto L_0885FC84; }
    goto L_0885FC5C;
L_0885FC5C:;
    v0 = LD32(s0);
    goto L_0885FC60;
L_0885FC60:;
    a1 = s1 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08860870(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FC70;
L_0885FC70:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_0885FC84:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FC8C;
L_0885FC8C:;
    v0 = LD32(s0);
    goto L_0885FC60;
}

/* 0885FC94 */
rv_t func_0885FC94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0885FC94:;
    sp = sp - 64;
    v0 = D_08AF0EE8 - (3816);
    a2 = a1 + 0;
    a3 = LD32(a1);
    v1 = (u32)-1;
    v0 = v0 + 3816;
    a1 = sp + 0;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a3);
    ST32(sp+32, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    ST8(sp+40, 0);
    { rv_t r_ = func_0885F7E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FCE4;
L_0885FCE4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 0885FCF0 */
rv_t func_0885FCF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0885FCF0:;
    sp = sp - 64;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    a3 = LD32(a1);
    a2 = a1 + 0;
    v1 = (u32)-1;
    ST32(sp, v0);
    a1 = sp + 0;
    v0 = 1;
    ST32(sp+12, v1);
    ST32(sp+28, a3);
    ST32(sp+32, a2);
    ST8(sp+40, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    { rv_t r_ = func_0885F9B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FD44;
L_0885FD44:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 0885FD50 */
rv_t func_0885FD50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0885FD50:;
    sp = sp - 16;
    a2 = a0 + 0;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885FD90; }
    goto L_0885FD64;
L_0885FD64:;
    v1 = LD_U16(a1+16);
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+116); goto L_0885FDD0; }
    goto L_0885FD74;
L_0885FD74:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    v0 = 93;
    if (cnd_) { goto L_0885FDB0; }
    goto L_0885FD80;
L_0885FD80:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+116); goto L_0885FDA0; }
    goto L_0885FD8C;
L_0885FD8C:;
    v1 = 0 + 0;
    goto L_0885FD90;
L_0885FD90:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885FDA0:;
    v1 = 1;
    v0 = v0 | 0x8;
    goto L_0885FDA8;
L_0885FDA8:;
    ST32(a2+116, v0);
    goto L_0885FD90;
L_0885FDB0:;
    cnd_ = v1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_0885FD90; }
    goto L_0885FDB8;
L_0885FDB8:;
    v0 = LD32(a0);
    v1 = LD32(v0+40);
    t_ = v1;
    a1 = LD32(a1+4);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FDC8;
L_0885FDC8:;
    v1 = 1;
    goto L_0885FD90;
L_0885FDD0:;
    v1 = 1;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    goto L_0885FDA8;
}

/* 0885FDDC */
rv_t func_0885FDDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_0885FDDC:;
    sp = sp - 192;
    v0 = 999;
    a2 = LD32(a0+120);
    cnd_ = a2 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0885FFC8; }
    goto L_0885FDFC;
L_0885FDFC:;
    a0 = D_08B28EF4 - (-28940);
    v1 = a0 - 28940;
    v0 = LD32(v1+4);
    a1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0885FE54; }
    goto L_0885FE28;
L_0885FE28:;
    a0 = LD32(a1);
    goto L_0885FE2C;
L_0885FE2C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08860030; }
    goto L_0885FE44;
L_0885FE44:;
    a1 = LD32(a1+4);
    goto L_0885FE48;
L_0885FE48:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0885FE2C; }
    goto L_0885FE50;
L_0885FE50:;
    s0 = 0 + 0;
    goto L_0885FE54;
L_0885FE54:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0885FFCC; }
    goto L_0885FE5C;
L_0885FE5C:;
    v0 = LD32(s1+116);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_0885FFDC; }
    goto L_0885FE6C;
L_0885FE6C:;
    v0 = s1 + 124;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s1+124));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    a0 = s0 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    v1 = LD32(s0);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+24);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FEA8;
L_0885FEA8:;
    {u32 a_=sp+(160);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(64);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(96);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(48);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(80);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+8);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    {v0=FBITS(v[17]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    v1 = LD32(s0);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FF78;
L_0885FF78:;
    f2 = BITSF(LD32(v0));
    v1 = LD32(s1);
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(v0+4));
    a0 = LD32(v1-20);
    f2 = f2 + f0;
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    a0 = s1 + a0;
    f3 = f3 + f1;
    f4 = f4 + f0;
    v1 = LD32(a0);
    a1 = sp + 32;
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    goto L_0885FFB8;
L_0885FFB8:;
    ST32(sp+40, FBITS(f4));
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FFC8;
L_0885FFC8:;
    goto L_0885FFCC;
L_0885FFCC:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_0885FFDC:;
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885FFE8;
L_0885FFE8:;
    a1 = s1 + 124;
    v1 = LD32(s1);
    f3 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s1+124));
    f5 = BITSF(LD32(a1+8));
    a0 = LD32(v1-20);
    f4 = BITSF(LD32(v0+8));
    f0 = f0 + f2;
    f1 = f1 + f3;
    a0 = s1 + a0;
    f4 = f4 + f5;
    v1 = LD32(a0);
    ST32(sp+32, FBITS(f0));
    a1 = sp + 32;
    ST32(sp+36, FBITS(f1));
    goto L_0885FFB8;
L_08860030:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0885FE44; }
    goto L_0886003C;
L_0886003C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0885FE48; }
    goto L_08860048;
L_08860048:;
    goto L_0885FE54;
}

/* 08860050 */
rv_t func_08860050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08860050:;
    sp = sp - 16;
    a1 = 124;
    a3 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-24);
    v1 = s0 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08860088;
L_08860088:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088600F4; }
    goto L_08860090;
L_08860090:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088600DC; }
    goto L_0886009C;
L_0886009C:;
    v0 = LD32(s0);
    a1 = LD32(v0-12);
    a1 = s0 + a1;
    func_08860B18(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088600AC;
L_088600AC:;
    f1 = BITSF(LD32(s1+28));
    f0 = BITSF(0);
    v0 = LD32(s0+116);
    v1 = LD32(s1+120);
    fcc = FCMP(f1, f0, 2);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 8)) | ((v0 & 0x1) << 8);
    cnd_ = !fcc;
    ST32(s1+120, v1);
    if (cnd_) { goto L_088600DC; }
    goto L_088600D0;
L_088600D0:;
    v0 = LD32(s2+28);
    v0 = v0 | 0x1;
    ST32(s2+28, v0);
    goto L_088600DC;
L_088600DC:;
    v0 = LD32(s0);
    a1 = s2 + 0;
    a2 = 2;
    a0 = LD32(v0-24);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088600F4;
L_088600F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886010C */
rv_t func_0886010C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886010C:;
    sp = sp - 16;
    a3 = 0 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a1 = 260;
    v0 = LD32(a0);
    a0 = 108;
    v1 = LD32(v0-24);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08860148;
L_08860148:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08860184; }
    goto L_08860154;
L_08860154:;
    a0 = LD32(v0+24);
    func_08AAD898(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0886015C;
L_0886015C:;
    v0 = 2;
    ST32(s0, v0);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v1 = LD32(s1);
    v0 = LD32(v1-24);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    { rv_t r_ = func_088ACA44(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860184;
L_08860184:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886019C */
void func_0886019C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886019C:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088601C0;
L_088601C0:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 28;
    t0 = 124;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_088601DC;
L_088601DC:;
    a0 = s2 + 0;
    func_08860204(a0);
    goto L_088601E4;
L_088601E4:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_088601EC;
L_088601EC:;
    sp = sp + 16;
    return;
}

/* 08860204 */
void func_08860204(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f12 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08860204:;
    sp = sp - 144;
    s0 = a0 + 0;
    func_08860CE0(a0);
    goto L_08860218;
L_08860218:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 121;
    t0 = 8;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_0886023C;
L_0886023C:;
    sp = sp + 144;
    return;
}

/* 0886024C */
rv_t func_0886024C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886024C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088602CC; }
    goto L_08860280;
L_08860280:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088602A4; }
    goto L_08860294;
L_08860294:;
    v0 = D_08B28EB4 - (-29004);
    a0 = LD32(v0-29004);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088602BC; }
    goto L_088602A4;
L_088602A4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088602BC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088602C4;
L_088602C4:;
    goto L_088602A4;
L_088602CC:;
    s3 = D_08B28EB4 - (-29004);
    s0 = s3 - 29004;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088602E4;
L_088602E4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29004, v0);
    if (cnd_) { goto L_08860310; }
    goto L_088602F4;
L_088602F4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088602FC;
L_088602FC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088602FC; }
    goto L_08860310;
L_08860310:;
    v0 = s3 - 29004;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08860280;
}

/* 08860320 */
rv_t func_08860320(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08860320:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0886024C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860334;
L_08860334:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08860340 */
rv_t func_08860340(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08860340:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0886024C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860354;
L_08860354:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08860360 */
void func_08860360(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08860360:;
    sp = sp - 32;
    s3 = D_08B28EC4 - (-28988);
    s2 = s3 - 28988;
    s0 = a0 + 0;
    v0 = LD32(a1);
    ST32(a0, v0);
    v1 = LD32(v0-12);
    a0 = LD32(a1+4);
    v0 = D_08AEBE1C - (-16868);
    v1 = s0 + v1;
    ST32(v1, a0);
    v1 = D_08AEBE20 - (-16864);
    a0 = LD32(s0);
    f1 = BITSF(LD32(v0-16868));
    a2 = LD32(a1+8);
    v0 = LD32(a0-16);
    f2 = BITSF(LD32(v1-16864));
    v0 = s0 + v0;
    ST32(v0, a2);
    f12 = f2;
    v1 = LD32(s0);
    a0 = LD32(a1+12);
    v0 = LD32(v1-20);
    v0 = s0 + v0;
    ST32(v0, a0);
    v0 = D_08AEBE18 - (-16872);
    a1 = LD32(s0);
    f0 = BITSF(LD32(v0-16872));
    v0 = 9;
    v1 = LD32(a1-20);
    ST32(s0+16, FBITS(f1));
    v1 = s0 + v1;
    ST32(s0+8, FBITS(f1));
    ST32(s0+12, FBITS(f1));
    ST32(s0+20, FBITS(f2));
    ST32(s0+4, FBITS(f0));
    ST16(v1+8, v0);
    a0 = LD32(s0);
    v1 = LD32(a0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+64);
    v0 = v0 | 0x1;
    ST32(v1+64, v0);
    a1 = LD32(s0);
    ST32(s0+56, 0);
    a0 = LD32(a1-16);
    a0 = s0 + a0;
    func_0886422C(a0, f12);
    goto L_08860434;
L_08860434:;
    v1 = LD32(s0+56);
    v0 = D_08AEBE24 - (-16860);
    a1 = LD32(s0);
    f0 = BITSF(LD32(v0-16860));
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+56, v1);
    a0 = 12;
    ST32(s0+48, FBITS(f0));
    ST32(s0+52, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    ST32(s0+36, 0);
    ST32(s0+40, 0);
    ST32(s0+44, 0);
    v0 = LD32(a1-20);
    v1 = LD32(s2+4);
    v0 = s0 + v0;
    s1 = LD32(v0+4);
    v1 = v1 - 1;
    s1 = s1 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886048C;
L_0886048C:;
    a0 = LD32(s3-28988);
    s1 = s1 << 2;
    v1 = LD32(s2+12);
    s1 = s1 + a0;
    a3 = LD32(s1);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    a1 = 0 + 0;
    a2 = 1;
    ST32(v0+4, a3);
    ST32(v0, s0);
    ST32(s1, v0);
    ST8(v0+8, 0);
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08866188(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088604D0;
L_088604D0:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-16);
    s0 = s0 + v0;
    v1 = LD32(s0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08860508; }
    goto L_088604EC;
L_088604EC:;
    goto L_088604F0;
L_088604F0:;
    sp = sp + 32;
    return;
L_08860508:;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08860510;
L_08860510:;
    goto L_088604F0;
}

/* 08860518 */
void func_08860518(u32 a0, u32 a1, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08860518:;
    sp = sp - 16;
    t1 = a0 + 0;
    t0 = D_08B28EC4 - (-28988);
    s0 = t0 - 28988;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a0 = LD32(a0);
    v1 = LD32(a1+8);
    v0 = LD32(a0-16);
    v0 = t1 + v0;
    ST32(v0, v1);
    a2 = LD32(t1);
    a3 = LD32(a1+12);
    a0 = LD32(s0+4);
    v0 = LD32(a2-20);
    a1 = LD32(t0-28988);
    a0 = a0 - 1;
    v0 = t1 + v0;
    ST32(v0, a3);
    v1 = LD32(t1);
    v0 = LD32(v1-20);
    v0 = t1 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a0;
    a2 = v1 << 2;
    a1 = a2 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088605C0; }
    goto L_088605A4;
L_088605A4:;
    v0 = LD32(a0);
    goto L_088605A8;
L_088605A8:;
    cnd_ = v0 == t1;
    if (cnd_) { v0 = LD32(s0+8); goto L_088605D0; }
    goto L_088605B0;
L_088605B0:;
    t2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088605A8; }
    goto L_088605C0;
L_088605C0:;
    sp = sp + 16;
    return;
L_088605D0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088605E0; }
    goto L_088605D8;
L_088605D8:;
    ST8(a0+8, v0);
    goto L_088605C0;
L_088605E0:;
    cnd_ = t2 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08860608; }
    goto L_088605E8;
L_088605E8:;
    v0 = LD32(a0+4);
    ST32(t2+4, v0);
    goto L_088605F0;
L_088605F0:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088605F8;
L_088605F8:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_088605C0;
L_08860608:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_088605F0;
}

/* 08860618 */
rv_t func_08860618(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08860618:;
    v0 = D_08AF44DC - (17628);
    sp = sp - 32;
    v0 = v0 + 17628;
    a2 = v0 + 480;
    v1 = v0 + 96;
    s1 = a0 + 0;
    a0 = v0 + 276;
    ST32(s1+60, v1);
    a1 = s1 + 0;
    ST32(s1+144, a2);
    ST32(s1+68, a0);
    a0 = D_08B28EC4 - (-28988);
    a0 = a0 - 28988;
    ST32(s1, v0);
    s0 = D_08AF4708 - (18184);
    s0 = s0 + 18184;
    s2 = s1 + 60;
    func_08AADDC4(a0, a1, t1, t2, t3);
    goto L_08860674;
L_08860674:;
    s3 = s1 + 68;
    a1 = s0 + 16;
    a0 = s2 + 0;
    s0 = s0 + 28;
    func_088658E8(a0, a1, 0);
    goto L_08860688;
L_08860688:;
    s1 = s1 + 144;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08860698;
L_08860698:;
    a0 = s1 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088606A0;
L_088606A0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088606BC */
rv_t func_088606BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088606BC:;
    v0 = D_08AF44DC - (17628);
    sp = sp - 32;
    v0 = v0 + 17628;
    a2 = v0 + 480;
    v1 = v0 + 96;
    s1 = a0 + 0;
    a0 = v0 + 276;
    ST32(s1+60, v1);
    a1 = s1 + 0;
    ST32(s1+144, a2);
    ST32(s1+68, a0);
    a0 = D_08B28EC4 - (-28988);
    a0 = a0 - 28988;
    ST32(s1, v0);
    s0 = D_08AF4708 - (18184);
    s0 = s0 + 18184;
    s2 = s1 + 60;
    s4 = s1 + 144;
    func_08AADDC4(a0, a1, t1, t2, t3);
    goto L_08860720;
L_08860720:;
    s3 = s1 + 68;
    a1 = s0 + 16;
    a0 = s2 + 0;
    s0 = s0 + 28;
    func_088658E8(a0, a1, 0);
    goto L_08860734;
L_08860734:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08860740;
L_08860740:;
    a0 = s4 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08860748;
L_08860748:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08860750;
L_08860750:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08860770 */
rv_t func_08860770(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08860770:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 5;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860794;
L_08860794:;
    a0 = s0 + 0;
    f12 = BITSF(LD32(s1+8));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088607A0;
L_088607A0:;
    f12 = BITSF(LD32(s1+12));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088607AC;
L_088607AC:;
    f12 = BITSF(LD32(s1+16));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088607B8;
L_088607B8:;
    f12 = BITSF(LD32(s1+4));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088607C4;
L_088607C4:;
    f12 = BITSF(LD32(s1+20));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088607D0;
L_088607D0:;
    a1 = s1 + 24;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088607DC;
L_088607DC:;
    f12 = BITSF(LD32(s1+48));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088607E8;
L_088607E8:;
    a1 = LD32(s1+52);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088607F4;
L_088607F4:;
    a1 = LD32(s1+56);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860800;
L_08860800:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08860814 */
rv_t func_08860814(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08860814:;
    sp = sp - 64;
    v0 = D_08AF0EE8 - (3816);
    a2 = a1 + 0;
    a3 = LD32(a1);
    v1 = (u32)-1;
    v0 = v0 + 3816;
    a1 = sp + 0;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a3);
    ST32(sp+32, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    ST8(sp+40, 0);
    { rv_t r_ = func_08860770(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860864;
L_08860864:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08860870 */
rv_t func_08860870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08860870:;
    sp = sp - 96;
    s0 = a1 + 0;
    a1 = sp + 64;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860894;
L_08860894:;
    a0 = s0 + 0;
    v0 = LD32(sp+64);
    v0 = v0 - 4;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08860904; }
    goto L_088608AC;
L_088608AC:;
    a0 = LD32(s1);
    a1 = 0 + 0;
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    v1 = LD32(v0+16);
    cnd_ = v1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088608CC; }
    goto L_088608C8;
L_088608C8:;
    a2 = LD32(v0+12);
    goto L_088608CC;
L_088608CC:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = 1; goto L_088608E0; }
    goto L_088608D4;
L_088608D4:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(a0-16); goto L_088608E4; }
    goto L_088608DC;
L_088608DC:;
    a1 = 1;
    goto L_088608E0;
L_088608E0:;
    a0 = LD32(a0-16);
    goto L_088608E4;
L_088608E4:;
    a1 = a1 ^ 0x1;
    a0 = s1 + a0;
    { rv_t r_ = func_08864234(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088608F0;
L_088608F0:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08860904:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886090C;
L_0886090C:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860918;
L_08860918:;
    a1 = sp + 8;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860924;
L_08860924:;
    a1 = sp + 12;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860930;
L_08860930:;
    a1 = sp + 16;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886093C;
L_0886093C:;
    a1 = sp + 20;
    a0 = s0 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08860948;
L_08860948:;
    a1 = sp + 44;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860954;
L_08860954:;
    a1 = sp + 48;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860960;
L_08860960:;
    a0 = s0 + 0;
    a1 = sp + 52;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886096C;
L_0886096C:;
    a0 = LD32(sp+52);
    v0 = LD32(s1+56);
    f1 = BITSF(LD32(sp+4));
    v1 = a0 & 0x1;
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    v1 = (a0 >> 1) & 0x1;
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    v1 = LD32(sp+64);
    f2 = BITSF(LD32(sp+8));
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+12));
    a2 = LD32(sp+20);
    a3 = LD32(sp+24);
    t0 = LD32(sp+28);
    t1 = LD32(sp+32);
    t2 = LD32(sp+36);
    t3 = LD32(sp+40);
    f0 = BITSF(LD32(sp));
    a1 = (a0 >> 3) & 0x1;
    a0 = (a0 >> 2) & 0x1;
    v0 = (v0 & ~(0x1u << 2)) | ((a0 & 0x1) << 2);
    v1 = (s32)v1 < 5;
    f5 = BITSF(LD32(sp+44));
    a0 = v0 + 0;
    ST32(s1+8, FBITS(f0));
    a0 = (a0 & ~(0x1u << 3)) | ((a1 & 0x1) << 3);
    ST32(s1+12, FBITS(f1));
    ST32(s1+16, FBITS(f2));
    ST32(s1+20, FBITS(f3));
    ST32(s1+4, FBITS(f4));
    ST32(s1+24, a2);
    ST32(s1+28, a3);
    ST32(s1+32, t0);
    ST32(s1+36, t1);
    ST32(s1+40, t2);
    ST32(s1+44, t3);
    cnd_ = v1 != 0;
    ST32(s1+56, v0);
    if (cnd_) { goto L_08860A08; }
    goto L_08860A04;
L_08860A04:;
    ST32(s1+56, a0);
    goto L_08860A08;
L_08860A08:;
    ST32(s1+48, FBITS(f5));
    v0 = LD32(sp+48);
    ST32(s1+52, v0);
    goto L_088608AC;
}

/* 08860A18 */
rv_t func_08860A18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08860A18:;
    sp = sp - 64;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    a3 = LD32(a1);
    a2 = a1 + 0;
    v1 = (u32)-1;
    ST32(sp, v0);
    a1 = sp + 0;
    v0 = 1;
    ST32(sp+12, v1);
    ST32(sp+28, a3);
    ST32(sp+32, a2);
    ST8(sp+40, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    { rv_t r_ = func_08860870(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860A6C;
L_08860A6C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08860A78 */
rv_t func_08860A78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08860A78:;
    sp = sp - 16;
    s2 = a0 + 0;
    a1 = 124;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-20);
    v1 = s2 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08860AB0;
L_08860AB0:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08860B00; }
    goto L_08860ABC;
L_08860ABC:;
    s0 = LD32(v0+24);
    a0 = s0 + 0;
    func_08860B18(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08860AC8;
L_08860AC8:;
    f1 = BITSF(LD32(s0+28));
    f0 = BITSF(0);
    a1 = s1 + 0;
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    a2 = 2;
    if (cnd_) { goto L_08860AF0; }
    goto L_08860AE4;
L_08860AE4:;
    v0 = LD32(s1+28);
    v0 = v0 | 0x1;
    ST32(s1+28, v0);
    goto L_08860AF0;
L_08860AF0:;
    v0 = LD32(s2);
    a0 = LD32(v0-20);
    a0 = s2 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860B00;
L_08860B00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08860B18 */
void func_08860B18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08860B18:;
    sp = sp - 32;
    s3 = a1 + 0;
    s1 = a0 + 0;
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08860B4C; }
    goto L_08860B40;
L_08860B40:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    a0 = a1 + v1;
    goto L_08860B4C;
L_08860B4C:;
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08860B60; }
    goto L_08860B54;
L_08860B54:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    s2 = a0 + v1;
    goto L_08860B60;
L_08860B60:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    s0 = s1 + 16;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860B74;
L_08860B74:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860B80;
L_08860B80:;
    v1 = LD32(s2);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860B90;
L_08860B90:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    ST32(s1+16, FBITS(f2));
    f0 = BITSF(LD32(s2+40));
    ST32(s1+28, FBITS(f0));
    v0 = LD32(s2+8);
    ST32(s1+52, v0);
    v0 = LD32(s2+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+12); goto L_08860BC4; }
    goto L_08860BC4;
L_08860BC4:;
    ST32(s1+32, v0);
    v1 = LD32(s2+20);
    ST32(s1+36, v1);
    v0 = LD32(s2+20);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08860BE0; }
    goto L_08860BDC;
L_08860BDC:;
    a0 = LD32(s2+28);
    goto L_08860BE0;
L_08860BE0:;
    ST32(s1+40, a0);
    a1 = s3 + 24;
    f1 = BITSF(LD32(s2+32));
    a0 = LD32(s1+120);
    ST32(s1+44, FBITS(f1));
    f0 = BITSF(LD32(s2+36));
    ST32(s1+48, FBITS(f0));
    v0 = LD32(s2+48);
    ST32(s1+56, v0);
    v1 = LD32(s2+52);
    ST32(s1+60, v1);
    v0 = (u32)(s32)LD_S16(s2+60);
    ST16(s1+64, v0);
    v1 = LD_U8(s2+62);
    ST8(s1+66, v1);
    f0 = BITSF(LD32(s3+4));
    ST32(s1+68, FBITS(f0));
    f1 = BITSF(LD32(s3+8));
    ST32(s1+72, FBITS(f1));
    f0 = BITSF(LD32(s3+12));
    ST32(s1+76, FBITS(f0));
    f1 = BITSF(LD32(s3+16));
    ST32(s1+80, FBITS(f1));
    v0 = LD32(s3+56);
    v0 = v0 & 0x1;
    a0 = (a0 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s1+120, a0);
    f0 = BITSF(LD32(s3+20));
    ST32(s1+84, FBITS(f0));
    v0 = LD32(s3+24);
    ST32(s1+88, v0);
    v1 = LD32(a1+4);
    ST32(s1+92, v1);
    v0 = LD32(a1+8);
    ST32(s1+96, v0);
    v1 = LD32(a1+12);
    ST32(s1+100, v1);
    v0 = LD32(a1+16);
    ST32(s1+104, v0);
    v1 = LD32(a1+20);
    ST32(s1+108, v1);
    v0 = LD32(s3+56);
    v0 = (v0 >> 1) & 0x1;
    a0 = (a0 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s1+120, a0);
    f0 = BITSF(LD32(s3+48));
    ST32(s1+112, FBITS(f0));
    v1 = LD32(s3+52);
    ST32(s1+116, v1);
    v0 = LD32(s3+56);
    v0 = (v0 >> 2) & 0x1;
    a0 = (a0 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s1+120, a0);
    v0 = LD32(s3+56);
    v0 = (v0 >> 3) & 0x1;
    a0 = (a0 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s1+120, a0);
    sp = sp + 32;
    return;
}

/* 08860CE0 */
void func_08860CE0(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f12 = 0, f20 = 0;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08860CE0:;
    sp = sp - 160;
    f20 = BITSF(0);
    s0 = a0 + 0;
    func_08864D34(a0);
    goto L_08860CFC;
L_08860CFC:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 68;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860D20;
L_08860D20:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 72;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860D44;
L_08860D44:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 76;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860D68;
L_08860D68:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 80;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860D8C;
L_08860D8C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 84;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860DB0;
L_08860DB0:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 88;
    t0 = 32;
    t1 = 6;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860DD4;
L_08860DD4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 112;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860DF8;
L_08860DF8:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 116;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860E1C;
L_08860E1C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 120;
    t0 = 8;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08860E40;
L_08860E40:;
    sp = sp + 160;
    return;
}

/* 08860E54 */
rv_t func_08860E54(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08860E54:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08860ED4; }
    goto L_08860E88;
L_08860E88:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08860EAC; }
    goto L_08860E9C;
L_08860E9C:;
    v0 = D_08B28EC4 - (-28988);
    a0 = LD32(v0-28988);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08860EC4; }
    goto L_08860EAC;
L_08860EAC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08860EC4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08860ECC;
L_08860ECC:;
    goto L_08860EAC;
L_08860ED4:;
    s3 = D_08B28EC4 - (-28988);
    s0 = s3 - 28988;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860EEC;
L_08860EEC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28988, v0);
    if (cnd_) { goto L_08860F18; }
    goto L_08860EFC;
L_08860EFC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08860F04;
L_08860F04:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08860F04; }
    goto L_08860F18;
L_08860F18:;
    v0 = s3 - 28988;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08860E88;
}

/* 08860F28 */
rv_t func_08860F28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08860F28:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08860E54(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860F3C;
L_08860F3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08860F48 */
rv_t func_08860F48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08860F48:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08860E54(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860F5C;
L_08860F5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08860F68 */
void func_08860F68(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08860F68:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = 3;
    s2 = s3 + 4;
    s1 = s3 + 16;
    a2 = LD32(a1);
    ST32(s3, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    v0 = s3 + v0;
    ST32(v0, v1);
    a2 = LD32(s3);
    a3 = LD32(a1+8);
    v0 = LD32(a2-16);
    v0 = s3 + v0;
    ST32(v0, a3);
    v1 = LD32(s3);
    s0 = LD32(v1-12);
    { rv_t r_ = func_088BA110(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08860FC8;
L_08860FC8:;
    v1 = D_08AEBE40 - (-16832);
    s0 = s3 + s0;
    ST32(s0+4, v0);
    a0 = LD32(s3);
    f0 = BITSF(LD32(v1-16832));
    v1 = 19;
    v0 = LD32(a0-16);
    v0 = s3 + v0;
    ST16(v0+8, v1);
    v0 = 128;
    a0 = LD32(s3);
    ST32(s3+28, FBITS(f0));
    v1 = LD32(a0-12);
    ST32(s3+32, FBITS(f0));
    v1 = s3 + v1;
    ST32(s3+76, v0);
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861010;
L_08861010:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0));
    ST32(s1+8, FBITS(f0));
    v1 = s3 + 36;
    a0 = 8;
    ST32(s1+4, FBITS(f1));
    ST32(s2+8, FBITS(f0));
    ST32(s2+4, FBITS(f1));
    v0 = LD32(s3+76);
    ST32(s3+4, FBITS(f2));
    v0 = v0 | 0x10;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s3+76, v0);
    ST32(s3+16, FBITS(f2));
    ST32(s3+72, 0);
    goto L_08861050;
L_08861050:;
    a0 = a0 - 1;
    ST32(v1, 0);
    cnd_ = (s32)a0 >= 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08861050; }
    goto L_08861060;
L_08861060:;
    v0 = LD32(s3);
    a1 = 1;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    { rv_t r_ = func_088642DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861074;
L_08861074:;
    sp = sp + 32;
    return;
}

/* 08861090 */
void func_08861090(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08861090:;
    v1 = LD32(a1);
    sp = sp - 16;
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a2 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, a2);
    v1 = LD32(a0);
    a2 = LD32(a1+8);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    ST32(v0, a2);
    v1 = LD32(a0+72);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088610DC; }
    goto L_088610D0;
L_088610D0:;
    goto L_088610D4;
L_088610D4:;
    sp = sp + 16;
    return;
L_088610DC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088610E4;
L_088610E4:;
    goto L_088610D4;
}

/* 088610EC */
rv_t func_088610EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088610EC:;
    sp = sp - 16;
    v1 = D_08AF4AD8 - (19160);
    v1 = v1 + 19160;
    a1 = a0 + 0;
    a2 = v1 + 392;
    v0 = v1 + 188;
    s0 = a1 + 80;
    a3 = LD32(a0+72);
    s1 = a1 + 156;
    ST32(a1+80, v0);
    a0 = a3 + 0;
    ST32(a1+156, a2);
    cnd_ = a3 != 0;
    ST32(a1, v1);
    if (cnd_) { goto L_08861160; }
    goto L_08861130;
L_08861130:;
    a1 = D_08AF4CA8 - (19624);
    goto L_08861134;
L_08861134:;
    a1 = a1 + 19624;
    a0 = s0 + 0;
    a1 = a1 + 12;
    func_088629DC(a0, a1, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08861144;
L_08861144:;
    a0 = s1 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886114C;
L_0886114C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08861160:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08861168;
L_08861168:;
    a1 = D_08AF4CA8 - (19624);
    goto L_08861134;
}

/* 08861170 */
rv_t func_08861170(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08861170:;
    sp = sp - 16;
    v1 = D_08AF4AD8 - (19160);
    v1 = v1 + 19160;
    a1 = v1 + 392;
    v0 = v1 + 188;
    s0 = a0 + 0;
    s1 = s0 + 80;
    s2 = s0 + 156;
    a2 = LD32(a0+72);
    ST32(s0, v1);
    a0 = a2 + 0;
    ST32(s0+80, v0);
    cnd_ = a2 != 0;
    ST32(s0+156, a1);
    if (cnd_) { goto L_088611F4; }
    goto L_088611B8;
L_088611B8:;
    a1 = D_08AF4CA8 - (19624);
    goto L_088611BC;
L_088611BC:;
    a1 = a1 + 19624;
    a1 = a1 + 12;
    a0 = s1 + 0;
    func_088629DC(a0, a1, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088611CC;
L_088611CC:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088611D4;
L_088611D4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088611DC;
L_088611DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088611F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088611FC;
L_088611FC:;
    a1 = D_08AF4CA8 - (19624);
    goto L_088611BC;
}

/* 08861204 */
rv_t func_08861204(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 240);
L_08861204:;
    sp = sp - 240;
    a1 = LD32(a0+76);
    v0 = a1 & 0x4;
    cnd_ = v0 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_088618A4; }
    goto L_08861244;
L_08861244:;
    s7 = a0 + 4;
    s6 = a0 + 16;
    f5 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+16));
    f4 = BITSF(LD32(s7+4));
    f1 = BITSF(LD32(s6+4));
    f2 = BITSF(LD32(s7+8));
    f0 = BITSF(LD32(s6+8));
    f5 = f5 - f3;
    f1 = f4 - f1;
    f2 = f2 - f0;
    a0 = a1 & 0x2;
    v0 = FBITS(f5);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = FBITS(f1);
    {v[4]=BITSF(v0);}
    ST32(sp, FBITS(f5));
    v0 = FBITS(f2);
    {v[5]=BITSF(v1);}
    ST32(sp+4, FBITS(f1));
    {v[6]=BITSF(v0);}
    fp = 0 + 0;
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+8, FBITS(f2));
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    cnd_ = a0 == 0;
    v0 = a1 & 0x40;
    if (cnd_) { goto L_08861514; }
    goto L_088612B4;
L_088612B4:;
    f0 = BITSF(FBITS(f5) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    goto L_088612D8;
L_088612D8:;
    v0 = D_08B285A0 - (-31328);
    goto L_088612DC;
L_088612DC:;
    f0 = BITSF(LD32(s3+32));
    f2 = BITSF(LD32(v0-31328));
    f3 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp));
    f2 = f2 * f0;
    f0 = BITSF(LD32(sp+4));
    f3 = f3 * f2;
    f1 = f1 * f2;
    f0 = f0 * f2;
    ST32(sp+8, FBITS(f3));
    ST32(sp, FBITS(f1));
    cnd_ = fp != 0;
    ST32(sp+4, FBITS(f0));
    if (cnd_) { goto L_088614FC; }
    goto L_08861310;
L_08861310:;
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861324;
L_08861324:;
    f2 = BITSF(LD32(v0));
    v1 = LD32(s3);
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    a0 = LD32(v1-12);
    f3 = BITSF(LD32(v0+4));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    a0 = s3 + a0;
    f3 = f3 + f1;
    f4 = f4 + f0;
    v1 = LD32(a0);
    a1 = sp + 16;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    goto L_08861368;
L_08861368:;
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861374;
L_08861374:;
    v0 = LD32(s3+76);
    f5 = BITSF(LD32(s6+8));
    f4 = BITSF(LD32(s7+8));
    f2 = BITSF(LD32(s3+16));
    f3 = BITSF(LD32(s6+4));
    f0 = BITSF(LD32(s3+4));
    f1 = BITSF(LD32(s7+4));
    v0 = v0 & 0x2;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    cnd_ = v0 == 0;
    ST32(sp+120, FBITS(f4));
    if (cnd_) { goto L_088613C8; }
    goto L_088613B0;
L_088613B0:;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f4));
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, FBITS(f3));
    ST32(sp+120, FBITS(f5));
    goto L_088613C8;
L_088613C8:;
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a0 = LD32(v0+4);
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088613DC;
L_088613DC:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v1 = FBITS(f3);
    a0 = FBITS(f4);
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    {v[1]=BITSF(v1);}
    {v[6]=BITSF(a0);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+128, FBITS(f2));
    fcc = FCMP(f20, f0, 12);
    ST32(sp+132, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+136, FBITS(f4));
    if (cnd_) { goto L_08861480; }
    goto L_0886144C;
L_0886144C:;
    goto L_08861450;
L_08861450:;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_08861480:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v0 = LD32(a0);
    v1 = LD32(v0+44);
    t_ = v1;
    a1 = sp + 112;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886149C;
L_0886149C:;
    v0 = LD32(s3+76);
    v1 = v0 & 0x2;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    cnd_ = v1 == 0;
    ST32(s3+76, v0);
    if (cnd_) { goto L_088614CC; }
    goto L_088614B0;
L_088614B0:;
    v0 = LD32(s3);
    a1 = 6;
    a0 = LD32(v0-16);
    a0 = s3 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088614C4;
L_088614C4:;
    goto L_08861450;
L_088614CC:;
    v0 = LD32(s3);
    a1 = 8;
    a0 = LD32(v0-16);
    a0 = s3 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088614E0;
L_088614E0:;
    v1 = LD32(s3);
    a0 = s3 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088614F4;
L_088614F4:;
    goto L_08861450;
L_088614FC:;
    v0 = LD32(s3);
    a1 = s6 + 0;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    goto L_08861368;
L_08861514:;
    cnd_ = v0 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_088612DC; }
    goto L_0886151C;
L_0886151C:;
    a1 = D_08B28EA4 - (-29020);
    v0 = a1 - 29020;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+32, v0);
    v1 = v1 + 1;
    s1 = sp + 32;
    ST32(v0+8, v1);
    ST32(sp+40, 0);
    cnd_ = a0 == 0;
    ST32(sp+36, 0);
    if (cnd_) { goto L_08861594; }
    goto L_08861548;
L_08861548:;
    a1 = LD32(a1-29020);
    a2 = a0 + 0;
    goto L_08861550;
L_08861550:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08861584; }
    goto L_08861568;
L_08861568:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+40);
    if (cnd_) { goto L_08861598; }
    goto L_08861578;
L_08861578:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08861568; }
    goto L_08861584;
L_08861584:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08861550; }
    goto L_08861594;
L_08861594:;
    v0 = LD32(sp+40);
    goto L_08861598;
L_08861598:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp+32); goto L_088615FC; }
    goto L_088615A0;
L_088615A0:;
    s2 = D_08B45A9C - (23196);
    s4 = s2 + 23196;
    s0 = LD32(v0);
    goto L_088615AC;
L_088615AC:;
    a0 = s1 + 0;
    a1 = 1;
    func_08AAE2A8(a0, a1);
    goto L_088615B8;
L_088615B8:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+40);
    if (cnd_) { goto L_088615E8; }
    goto L_088615C0;
L_088615C0:;
    v0 = LD32(s0);
    f0 = BITSF(0);
    v1 = LD32(v0-12);
    a0 = s0 + v1;
    f1 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a0); goto L_088616A0; }
    goto L_088615E4;
L_088615E4:;
    v0 = LD32(sp+40);
    goto L_088615E8;
L_088615E8:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp+32); goto L_088615FC; }
    goto L_088615F0;
L_088615F0:;
    cnd_ = fp == 0;
    if (cnd_) { s0 = LD32(v0); goto L_088615AC; }
    goto L_088615F8;
L_088615F8:;
    s1 = LD32(sp+32);
    goto L_088615FC;
L_088615FC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_088612D8; }
    goto L_0886160C;
L_0886160C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088612D8; }
    goto L_08861618;
L_08861618:;
    v0 = LD32(s1);
    goto L_0886161C;
L_0886161C:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08861670; }
    goto L_08861630;
L_08861630:;
    v0 = LD_U8(s0+8);
    goto L_08861634;
L_08861634:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08861698; }
    goto L_0886163C;
L_0886163C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08861688; }
    goto L_08861644;
L_08861644:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0886164C;
L_0886164C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08861658;
L_08861658:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08861664;
L_08861664:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08861634; }
    goto L_0886166C;
L_0886166C:;
    v1 = LD32(s1+4);
    goto L_08861670;
L_08861670:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0886161C; }
    goto L_08861680;
L_08861680:;
    v0 = D_08B285A0 - (-31328);
    goto L_088612DC;
L_08861688:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_0886164C;
L_08861698:;
    s0 = LD32(s0+4);
    goto L_08861664;
L_088616A0:;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088616AC;
L_088616AC:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+24, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088616E0; }
    goto L_088616DC;
L_088616DC:;
    a2 = LD32(v0+16);
    goto L_088616E0;
L_088616E0:;
    v1 = LD32(s3);
    a0 = 0 < a2;
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    a1 = LD32(v0+4);
    v1 = LD32(a1+16);
    v1 = 0 < v1;
    a0 = a0 & v1;
    cnd_ = a0 == 0;
    v0 = LD32(sp+40);
    if (cnd_) { goto L_088615E8; }
    goto L_08861708;
L_08861708:;
    v0 = LD32(a2+4);
    v1 = a2 + 4;
    f1 = BITSF(LD32(sp+16));
    ST32(sp+48, v0);
    a0 = a1 + 0;
    v0 = LD32(v1+4);
    f4 = BITSF(LD32(sp+48));
    f5 = BITSF(LD32(sp+20));
    ST32(sp+52, v0);
    f4 = f4 + f1;
    v0 = LD32(v1+8);
    f0 = BITSF(LD32(sp+52));
    f6 = BITSF(LD32(sp+24));
    ST32(sp+56, v0);
    f0 = f0 + f1;
    v0 = LD32(v1+12);
    f3 = BITSF(LD32(sp+56));
    ST32(sp+60, v0);
    f3 = f3 + f5;
    v0 = LD32(v1+16);
    f2 = BITSF(LD32(sp+60));
    ST32(sp+64, v0);
    f2 = f2 + f5;
    v0 = LD32(v1+20);
    f1 = BITSF(LD32(sp+64));
    ST32(sp+52, FBITS(f0));
    f1 = f1 + f6;
    ST32(sp+68, v0);
    f0 = BITSF(LD32(sp+68));
    ST32(sp+48, FBITS(f4));
    f0 = f0 + f6;
    ST32(sp+60, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    ST32(sp+68, FBITS(f0));
    ST32(sp+64, FBITS(f1));
    v0 = func_088BAA98(a0);
    goto L_08861798;
L_08861798:;
    a0 = LD32(v0);
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    ST32(sp+80, a0);
    v1 = LD32(v0+4);
    f0 = BITSF(LD32(sp+80));
    f4 = BITSF(LD32(sp+8));
    ST32(sp+84, v1);
    f5 = f0 + f2;
    v1 = LD32(v0+8);
    f1 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+48));
    ST32(sp+88, v1);
    f1 = f1 + f2;
    v1 = LD32(v0+12);
    fcc = FCMP(f0, f1, 14);
    ST32(sp+92, v1);
    v1 = LD32(v0+16);
    f0 = BITSF(LD32(sp+88));
    ST32(sp+96, v1);
    f6 = f0 + f3;
    v1 = LD32(v0+20);
    f0 = BITSF(LD32(sp+92));
    ST32(sp+84, FBITS(f1));
    f2 = f0 + f3;
    ST32(sp+100, v1);
    f0 = BITSF(LD32(sp+96));
    ST32(sp+80, FBITS(f5));
    f3 = f0 + f4;
    f0 = BITSF(LD32(sp+100));
    ST32(sp+92, FBITS(f2));
    f1 = f0 + f4;
    ST32(sp+88, FBITS(f6));
    ST32(sp+100, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+96, FBITS(f3));
    if (cnd_) { goto L_088615E4; }
    goto L_08861828;
L_08861828:;
    f0 = BITSF(LD32(sp+52));
    fcc = FCMP(f5, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(sp+40); goto L_088615E8; }
    goto L_0886183C;
L_0886183C:;
    f0 = BITSF(LD32(sp+56));
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    v0 = LD32(sp+40);
    if (cnd_) { goto L_088615E8; }
    goto L_08861850;
L_08861850:;
    f0 = BITSF(LD32(sp+60));
    fcc = FCMP(f6, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088615E8; }
    goto L_08861864;
L_08861864:;
    f0 = BITSF(LD32(sp+64));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+68));
    if (cnd_) { goto L_088615E8; }
    goto L_08861878;
L_08861878:;
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s2+23196));
    if (cnd_) { goto L_088615E8; }
    goto L_08861888;
L_08861888:;
    f1 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4+8));
    ST32(sp, FBITS(f0));
    fp = 1;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    goto L_088615E4;
L_088618A4:;
    v0 = a1 & 0x80;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08861450; }
    goto L_088618B0;
L_088618B0:;
    v0 = a1 & 0x2;
    cnd_ = v0 == 0;
    v0 = LD32(a0);
    if (cnd_) { goto L_08861904; }
    goto L_088618BC;
L_088618BC:;
    s0 = a0 + 16;
    goto L_088618C0;
L_088618C0:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088618D8;
L_088618D8:;
    v1 = LD32(s3);
    a0 = LD32(v1-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088618F4;
L_088618F4:;
    v0 = LD32(s3+76);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s3+76, v0);
    goto L_0886144C;
L_08861904:;
    s0 = a0 + 4;
    goto L_088618C0;
}

/* 0886190C */
rv_t func_0886190C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0886190C:;
    a1 = a1 & 0xffff;
    v1 = a1 - 3;
    v0 = a1 ^ 0xb;
    v1 = v1 < 0x2u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08861940; }
    goto L_0886192C;
L_0886192C:;
    v0 = 12;
    cnd_ = a1 == v0;
    if (cnd_) { a0 = 1; goto L_08861938; }
    goto L_08861938;
L_08861938:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
L_08861940:;
    a0 = 1;
    goto L_08861938;
}

/* 08861948 */
rv_t func_08861948(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08861948:;
    sp = sp - 32;
    s1 = a1 + 0;
    v0 = LD32(a1+28);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08861B2C; }
    goto L_08861974;
L_08861974:;
    v1 = LD_U16(s1+16);
    goto L_08861978;
L_08861978:;
    v0 = 11;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 12;
    if (cnd_) { goto L_08861AD0; }
    goto L_08861984;
L_08861984:;
    cnd_ = v0 == 0;
    v0 = 12;
    if (cnd_) { goto L_08861A70; }
    goto L_0886198C;
L_0886198C:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08861A04; }
    goto L_08861998;
L_08861998:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s0+76); goto L_088619C4; }
    goto L_088619A0;
L_088619A0:;
    v1 = 0 + 0;
    goto L_088619A4;
L_088619A4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088619C4:;
    v0 = a0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_088619E4; }
    goto L_088619D0;
L_088619D0:;
    v0 = a0 | 0x80;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v1 = 1;
    ST32(s0+76, v0);
    goto L_088619A4;
L_088619E4:;
    v0 = a0 | 0x4;
    ST32(s0+76, v0);
    a1 = 7;
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088619FC;
L_088619FC:;
    a0 = LD32(s0+76);
    goto L_088619D0;
L_08861A04:;
    a0 = LD32(s0+76);
    v0 = a0 & 0x1;
    cnd_ = v0 != 0;
    v0 = a0 | 0x8;
    if (cnd_) { goto L_08861A68; }
    goto L_08861A14;
L_08861A14:;
    v0 = a0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08861A48; }
    goto L_08861A20;
L_08861A20:;
    v0 = a0 | 0x80;
    ST32(s0+76, v0);
    goto L_08861A28;
L_08861A28:;
    v0 = LD32(s0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    v1 = LD32(v0+8);
    goto L_08861A38;
L_08861A38:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861A40;
L_08861A40:;
    v1 = 1;
    goto L_088619A4;
L_08861A48:;
    v0 = a0 | 0x6;
    ST32(s0+76, v0);
    a1 = 5;
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861A60;
L_08861A60:;
    a0 = LD32(s0+76);
    goto L_08861A20;
L_08861A68:;
    ST32(s0+76, v0);
    goto L_08861A40;
L_08861A70:;
    cnd_ = v1 == v0;
    v0 = 93;
    if (cnd_) { goto L_08861A94; }
    goto L_08861A78;
L_08861A78:;
    cnd_ = v1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_088619A4; }
    goto L_08861A80;
L_08861A80:;
    v0 = LD32(s0);
    a1 = LD32(s1+4);
    a0 = s0 + 0;
    v1 = LD32(v0+48);
    goto L_08861A38;
L_08861A94:;
    v1 = LD32(s0);
    v0 = LD32(s0+76);
    a1 = 10;
    a0 = LD32(v1-16);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+76, v0);
    a0 = s0 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861AB4;
L_08861AB4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861AC8;
L_08861AC8:;
    v1 = 1;
    goto L_088619A4;
L_08861AD0:;
    v0 = LD32(s0+76);
    v1 = LD32(s0);
    a1 = 9;
    v0 = v0 | 0x1;
    a0 = LD32(v1-16);
    ST32(s0+76, v0);
    a0 = s0 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861AF0;
L_08861AF0:;
    a0 = LD32(s0+76);
    v0 = a0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08861B0C; }
    goto L_08861B00;
L_08861B00:;
    a0 = (a0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+76, a0);
    goto L_08861A28;
L_08861B0C:;
    v0 = a0 | 0x84;
    ST32(s0+76, v0);
    a1 = 7;
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861B24;
L_08861B24:;
    a0 = LD32(s0+76);
    goto L_08861B00;
L_08861B2C:;
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    a1 = LD_U16(a1+16);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861B3C;
L_08861B3C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U16(s1+16); goto L_08861978; }
    goto L_08861B44;
L_08861B44:;
    a0 = LD32(s0+72);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08861BA8; }
    goto L_08861B50;
L_08861B50:;
    v1 = LD32(a0);
    v0 = 999;
    cnd_ = v1 == v0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08861BA4; }
    goto L_08861B60;
L_08861B60:;
    a1 = 0 + 0;
    s3 = 999;
    v0 = a1 + a0;
    goto L_08861B6C;
L_08861B6C:;
    a1 = LD32(v0);
    a0 = s1 + 0;
    a2 = 999;
    a3 = 0 + 0;
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861B80;
L_08861B80:;
    v0 = LD32(s0+72);
    s2 = s2 + 1;
    v1 = s2 << 2;
    a0 = v0 + 0;
    v0 = v1 + v0;
    a1 = v1 + 0;
    v1 = LD32(v0);
    cnd_ = v1 != s3;
    v0 = a1 + a0;
    if (cnd_) { goto L_08861B6C; }
    goto L_08861BA4;
L_08861BA4:;
    v0 = LD32(s0);
    goto L_08861BA8;
L_08861BA8:;
    a0 = s1 + 0;
    a2 = 999;
    v1 = LD32(v0-16);
    a3 = 0 + 0;
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861BC4;
L_08861BC4:;
    v1 = 1;
    goto L_088619A4;
}

/* 08861BCC */
u32 func_08861BCC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08861BCC:;
    v1 = LD32(a0+76);
    a1 = 0 + 0;
    v0 = v1 & 0x8;
    cnd_ = v0 == 0;
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    if (cnd_) { goto L_08861BE8; }
    goto L_08861BE0;
L_08861BE0:;
    ST32(a0+76, v1);
    a1 = 1;
    goto L_08861BE8;
L_08861BE8:;
    v0 = a1 + 0;
    return v0;
}

/* 08861BF0 */
rv_t func_08861BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08861BF0:;
    v0 = a1 + 0;
    sp = sp - 16;
    v0 = v0 & 0xff;
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08861C34; }
    goto L_08861C0C;
L_08861C0C:;
    v1 = LD32(a0+76);
    a1 = 1;
    v0 = v1 & 0x30;
    cnd_ = v0 == 0;
    a0 = v1 & 0x1;
    if (cnd_) { goto L_08861C34; }
    goto L_08861C20;
L_08861C20:;
    a1 = 1;
    cnd_ = a0 != 0;
    v0 = v1 & 0x22;
    if (cnd_) { goto L_08861C34; }
    goto L_08861C2C;
L_08861C2C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a2); goto L_08861C5C; }
    goto L_08861C34;
L_08861C34:;
    v0 = LD32(a2);
    goto L_08861C38;
L_08861C38:;
    a0 = LD32(v0-12);
    a0 = a2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+116);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861C50;
L_08861C50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08861C5C:;
    a1 = 0 + 0;
    goto L_08861C38;
}

/* 08861C64 */
rv_t func_08861C64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08861C64:;
    a1 = LD32(a0+72);
    a2 = 0 + 0;
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08861CA0; }
    goto L_08861C74;
L_08861C74:;
    v1 = LD32(a1);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08861CA0; }
    goto L_08861C84;
L_08861C84:;
    v1 = a1 + 0;
    a1 = 999;
    goto L_08861C8C;
L_08861C8C:;
    v1 = v1 + 4;
    v0 = LD32(v1);
    a0 = a0 + 1;
    cnd_ = v0 != a1;
    a2 = a0 << 2;
    if (cnd_) { goto L_08861C8C; }
    goto L_08861CA0;
L_08861CA0:;
    v0 = a2 + 76;
    return (rv_t){ v0, v1, f0 };
}

/* 08861CA8 */
rv_t func_08861CA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 224);
L_08861CA8:;
    sp = sp - 224;
    a2 = sp + 192;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a1 = 0 + 0;
    goto L_08861CCC;
L_08861CCC:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08861CCC; }
    goto L_08861CF0;
L_08861CF0:;
    v1 = LD32(sp+192);
    v0 = 7;
    cnd_ = v1 == v0;
    v0 = 6;
    if (cnd_) { goto L_08862044; }
    goto L_08861D00;
L_08861D00:;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = sp + 80; goto L_08861FA8; }
    goto L_08861D08;
L_08861D08:;
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { a2 = sp + 160; goto L_08861F30; }
    goto L_08861D10;
L_08861D10:;
    v0 = LD32(s2+76);
    goto L_08861D14;
L_08861D14:;
    a2 = sp + 196;
    a1 = 0 + 0;
    v0 = v0 | 0x80;
    ST32(s2+76, v0);
    goto L_08861D24;
L_08861D24:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08861D24; }
    goto L_08861D48;
L_08861D48:;
    a0 = LD32(sp+196);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = a0 + 1; goto L_08861EB4; }
    goto L_08861D54;
L_08861D54:;
    ST32(s2+72, 0);
    goto L_08861D58;
L_08861D58:;
    v1 = LD32(sp+192);
    v0 = v1 - 4;
    v0 = v0 < 0x3u;
    cnd_ = v0 == 0;
    v0 = (s32)v1 < 6;
    if (cnd_) { goto L_08861DC0; }
    goto L_08861D6C;
L_08861D6C:;
    a2 = sp + 200;
    a1 = 0 + 0;
    goto L_08861D74;
L_08861D74:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08861D74; }
    goto L_08861D98;
L_08861D98:;
    v0 = LD32(sp+200);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_08861E1C; }
    goto L_08861DA4;
L_08861DA4:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    goto L_08861DAC;
L_08861DAC:;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861DB8;
L_08861DB8:;
    v1 = LD32(sp+192);
    v0 = (s32)v1 < 6;
    goto L_08861DC0;
L_08861DC0:;
    cnd_ = v0 == 0;
    v0 = D_08AEBE48 - (-16824);
    if (cnd_) { goto L_08861DE0; }
    goto L_08861DC8;
L_08861DC8:;
    v1 = LD32(s2+76);
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    v0 = D_08AEBE48 - (-16824);
    if (cnd_) { goto L_08861DE0; }
    goto L_08861DD8;
L_08861DD8:;
    v1 = (v1 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s2+76, v1);
    goto L_08861DE0;
L_08861DE0:;
    f1 = BITSF(LD32(s2+28));
    f0 = BITSF(LD32(v0-16824));
    v1 = LD32(s2);
    a1 = 0 + 0;
    f0 = f0 / f1;
    a0 = LD32(v1-12);
    a0 = s2 + a0;
    ST32(s2+32, FBITS(f0));
    { rv_t r_ = func_0886426C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861E04;
L_08861E04:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_08861E1C:;
    v0 = LD32(v1-12);
    v1 = LD_U8(sp+200);
    v0 = s2 + v0;
    ST8(v0+68, v1);
    a0 = LD32(s2);
    s0 = LD32(a0-12);
    s0 = s2 + s0;
    a0 = LD_U8(s0+68);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861E44;
L_08861E44:;
    ST32(s0+72, v0);
    v0 = LD32(sp+200);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08861DA4; }
    goto L_08861E54;
L_08861E54:;
    v1 = LD32(s2);
    goto L_08861E58;
L_08861E58:;
    a0 = a3 << 2;
    a2 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    v1 = LD32(v0+72);
    a1 = v1 + a0;
    goto L_08861E70;
L_08861E70:;
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08861E70; }
    goto L_08861E98;
L_08861E98:;
    v0 = LD32(sp+200);
    a3 = a3 + 1;
    v0 = a3 < v0;
    cnd_ = v0 != 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_08861E58; }
    goto L_08861EAC;
L_08861EAC:;
    a0 = s2 + 0;
    goto L_08861DAC;
L_08861EB4:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08861EBC;
L_08861EBC:;
    v1 = LD32(sp+196);
    a3 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s2+72, v0);
    if (cnd_) { goto L_08861F18; }
    goto L_08861ECC;
L_08861ECC:;
    v1 = LD32(s2+72);
    goto L_08861ED0;
L_08861ED0:;
    v0 = a3 << 2;
    a2 = 0 + 0;
    a1 = v1 + v0;
    goto L_08861EDC;
L_08861EDC:;
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08861EDC; }
    goto L_08861F04;
L_08861F04:;
    v1 = LD32(sp+196);
    a3 = a3 + 1;
    v0 = a3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+72); goto L_08861ED0; }
    goto L_08861F18;
L_08861F18:;
    v0 = LD32(s2+72);
    v1 = v1 << 2;
    a0 = 999;
    v1 = v1 + v0;
    ST32(v1, a0);
    goto L_08861D58;
L_08861F30:;
    a1 = 0 + 0;
    goto L_08861F34;
L_08861F34:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x20u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08861F34; }
    goto L_08861F58;
L_08861F58:;
    f1 = BITSF(LD32(sp+180));
    f0 = BITSF(LD32(sp+168));
    v1 = LD32(sp+188);
    v0 = s2 + 4;
    a0 = s2 + 16;
    f3 = BITSF(LD32(sp+184));
    f4 = BITSF(LD32(sp+172));
    f2 = BITSF(LD32(sp+176));
    ST32(v0+8, FBITS(f0));
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    f0 = BITSF(LD32(sp+164));
    ST32(a0+8, FBITS(f1));
    f1 = BITSF(LD32(sp+160));
    ST32(v0+4, FBITS(f0));
    ST32(s2+4, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    ST32(s2+16, FBITS(f4));
    ST32(s2+28, FBITS(f3));
    ST32(s2+76, v1);
    goto L_08861D10;
L_08861FA8:;
    a1 = 0 + 0;
    goto L_08861FAC;
L_08861FAC:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x44u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08861FAC; }
    goto L_08861FD0;
L_08861FD0:;
    f0 = BITSF(LD32(sp+88));
    v0 = s2 + 4;
    f4 = BITSF(LD32(sp+104));
    f1 = BITSF(LD32(sp+100));
    ST32(v0+8, FBITS(f0));
    v1 = s2 + 16;
    a1 = 0 + 0;
    f0 = BITSF(LD32(sp+84));
    f3 = BITSF(LD32(sp+92));
    f2 = BITSF(LD32(sp+96));
    ST32(v1+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(sp+80));
    v0 = LD32(sp+108);
    ST32(v1+4, FBITS(f2));
    ST32(s2+4, FBITS(f1));
    ST32(s2+16, FBITS(f3));
    ST32(s2+76, v0);
    ST32(s2+28, FBITS(f4));
    goto L_0886201C;
L_0886201C:;
    v1 = a1 << 2;
    v0 = v1 + sp;
    a0 = LD32(v0+112);
    a1 = a1 + 1;
    v1 = v1 + s2;
    v0 = (s32)a1 < 9;
    cnd_ = v0 != 0;
    ST32(v1+36, a0);
    if (cnd_) { goto L_0886201C; }
    goto L_0886203C;
L_0886203C:;
    v0 = LD32(s2+76);
    goto L_08861D14;
L_08862044:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0886204C;
L_0886204C:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x44u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886204C; }
    goto L_08862070;
L_08862070:;
    f0 = BITSF(LD32(sp+8));
    v0 = s2 + 4;
    f4 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+20));
    ST32(v0+8, FBITS(f0));
    v1 = s2 + 16;
    a1 = 0 + 0;
    f0 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+12));
    f2 = BITSF(LD32(sp+16));
    ST32(v1+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(sp));
    v0 = LD32(sp+28);
    ST32(v1+4, FBITS(f2));
    ST32(s2+4, FBITS(f1));
    ST32(s2+16, FBITS(f3));
    ST32(s2+76, v0);
    ST32(s2+28, FBITS(f4));
    goto L_088620BC;
L_088620BC:;
    v1 = a1 << 2;
    v0 = v1 + sp;
    a0 = LD32(v0+32);
    a1 = a1 + 1;
    v1 = v1 + s2;
    v0 = (s32)a1 < 9;
    cnd_ = v0 != 0;
    ST32(v1+36, a0);
    if (cnd_) { goto L_088620BC; }
    goto L_088620DC;
L_088620DC:;
    v0 = LD32(s2+76);
    goto L_08861D14;
}

/* 088620E4 */
rv_t func_088620E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_088620E4:;
    sp = sp - 192;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = (u32)-1;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08864BB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862110;
L_08862110:;
    v0 = 7;
    ST32(sp+160, v0);
    a2 = sp + 160;
    a1 = 0 + 0;
    goto L_08862120;
L_08862120:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08862120; }
    goto L_08862148;
L_08862148:;
    v0 = s1 + 4;
    v1 = s1 + 16;
    f4 = BITSF(LD32(s1+28));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f6 = BITSF(LD32(v1+8));
    v0 = LD32(s1+76);
    f0 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+16));
    f3 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f0));
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f5));
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f6));
    ST32(sp+28, v0);
    ST32(sp+24, FBITS(f4));
    goto L_08862194;
L_08862194:;
    v1 = a1 << 2;
    v0 = v1 + s1;
    a0 = LD32(v0+36);
    a1 = a1 + 1;
    v1 = v1 + sp;
    v0 = (s32)a1 < 9;
    cnd_ = v0 != 0;
    ST32(v1+32, a0);
    if (cnd_) { goto L_08862194; }
    goto L_088621B4;
L_088621B4:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+12));
    v0 = LD32(sp+28);
    ST32(sp+80, FBITS(f0));
    a3 = sp + 112;
    a2 = sp + 32;
    f0 = BITSF(LD32(sp+4));
    ST32(sp+92, FBITS(f1));
    t0 = sp + 64;
    ST32(sp+84, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp+20));
    ST32(sp+108, v0);
    ST32(sp+88, FBITS(f0));
    f0 = BITSF(LD32(sp+16));
    ST32(sp+100, FBITS(f1));
    ST32(sp+96, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    ST32(sp+104, FBITS(f0));
    goto L_08862200;
L_08862200:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(a3, v0);
    a2 = a2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, v1);
    ST32(a3-8, a0);
    cnd_ = a2 != t0;
    ST32(a3-4, a1);
    if (cnd_) { goto L_08862200; }
    goto L_0886222C;
L_0886222C:;
    v0 = LD32(a2);
    ST32(a3, v0);
    a2 = sp + 80;
    a1 = 0 + 0;
    goto L_0886223C;
L_0886223C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x44u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886223C; }
    goto L_08862264;
L_08862264:;
    a0 = LD32(s1+72);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08862294; }
    goto L_08862270;
L_08862270:;
    v1 = LD32(a0);
    v0 = 999;
    cnd_ = v1 == v0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08862294; }
    goto L_08862280;
L_08862280:;
    a0 = 999;
    goto L_08862284;
L_08862284:;
    v1 = v1 + 4;
    v0 = LD32(v1);
    cnd_ = v0 != a0;
    t0 = t0 + 1;
    if (cnd_) { goto L_08862284; }
    goto L_08862294;
L_08862294:;
    ST32(sp+164, t0);
    a2 = sp + 164;
    a1 = 0 + 0;
    goto L_088622A0;
L_088622A0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088622A0; }
    goto L_088622C8;
L_088622C8:;
    cnd_ = t0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08862328; }
    goto L_088622D0;
L_088622D0:;
    t1 = sp + 168;
    v0 = LD32(s1+72);
    goto L_088622D8;
L_088622D8:;
    v1 = a3 << 2;
    a2 = t1 + 0;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = 0 + 0;
    ST32(sp+168, a0);
    goto L_088622F0;
L_088622F0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088622F0; }
    goto L_08862318;
L_08862318:;
    a3 = a3 + 1;
    v0 = a3 < t0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+72); goto L_088622D8; }
    goto L_08862328;
L_08862328:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
}

/* 0886233C */
rv_t func_0886233C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0886233C:;
    sp = sp - 48;
    s2 = a1 + 0;
    a1 = sp + 0;
    s3 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862368;
L_08862368:;
    v0 = 7;
    v1 = LD32(sp);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08862390; }
    goto L_08862378;
L_08862378:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08862390:;
    a1 = s3 + 4;
    a0 = s2 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886239C;
L_0886239C:;
    a1 = s3 + 16;
    a0 = s2 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088623A8;
L_088623A8:;
    a1 = s3 + 28;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088623B4;
L_088623B4:;
    a1 = s3 + 76;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088623C0;
L_088623C0:;
    s0 = s3 + 36;
    s1 = 8;
    goto L_088623C8;
L_088623C8:;
    a0 = s2 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088623D4;
L_088623D4:;
    v0 = LD32(sp+4);
    s1 = s1 - 1;
    ST32(s0, v0);
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088623C8; }
    goto L_088623E8;
L_088623E8:;
    a0 = s2 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088623F4;
L_088623F4:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08862440; }
    goto L_08862400;
L_08862400:;
    ST32(s3+72, 0);
    goto L_08862404;
L_08862404:;
    v0 = D_08AEBE4C - (-16820);
    f1 = BITSF(LD32(s3+28));
    f0 = BITSF(LD32(v0-16820));
    a1 = LD32(s3);
    v1 = LD32(s3+76);
    f0 = f0 / f1;
    a0 = LD32(a1-12);
    v1 = v1 | 0x80;
    ST32(s3+76, v1);
    a0 = s3 + a0;
    a1 = 0 + 0;
    ST32(s3+32, FBITS(f0));
    { rv_t r_ = func_0886426C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862438;
L_08862438:;
    goto L_08862378;
L_08862440:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862448;
L_08862448:;
    v1 = LD32(sp+8);
    s0 = 0 + 0;
    cnd_ = v1 != 0;
    ST32(s3+72, v0);
    if (cnd_) { goto L_08862470; }
    goto L_08862458;
L_08862458:;
    v0 = LD32(s3+72);
    goto L_0886245C;
L_0886245C:;
    v1 = v1 << 2;
    a0 = 999;
    v1 = v1 + v0;
    ST32(v1, a0);
    goto L_08862404;
L_08862470:;
    a1 = LD32(s3+72);
    goto L_08862474;
L_08862474:;
    v0 = s0 << 2;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862484;
L_08862484:;
    v1 = LD32(sp+8);
    s0 = s0 + 1;
    v0 = s0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s3+72); goto L_08862474; }
    goto L_08862498;
L_08862498:;
    v0 = LD32(s3+72);
    goto L_0886245C;
}

/* 088624A0 */
rv_t func_088624A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088624A0:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = 8;
    s1 = a1 + 0;
    a1 = (u32)-1;
    s0 = s3 + 36;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    { rv_t r_ = func_08864BB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088624DC;
L_088624DC:;
    a0 = s1 + 0;
    a1 = 7;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088624E8;
L_088624E8:;
    a1 = s3 + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088624F4;
L_088624F4:;
    a1 = s3 + 16;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862500;
L_08862500:;
    f12 = BITSF(LD32(s3+28));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886250C;
L_0886250C:;
    a1 = LD32(s3+76);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862518;
L_08862518:;
    a1 = LD32(s0);
    a0 = s1 + 0;
    s2 = s2 - 1;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862528;
L_08862528:;
    cnd_ = (s32)s2 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08862518; }
    goto L_08862530;
L_08862530:;
    a0 = LD32(s3+72);
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08862560; }
    goto L_0886253C;
L_0886253C:;
    v1 = LD32(a0);
    v0 = 999;
    cnd_ = v1 == v0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08862560; }
    goto L_0886254C;
L_0886254C:;
    a0 = 999;
    goto L_08862550;
L_08862550:;
    v1 = v1 + 4;
    v0 = LD32(v1);
    cnd_ = v0 != a0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08862550; }
    goto L_08862560;
L_08862560:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886256C;
L_0886256C:;
    cnd_ = s2 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08862590; }
    goto L_08862574;
L_08862574:;
    goto L_08862578;
L_08862578:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08862590:;
    v0 = LD32(s3+72);
    goto L_08862594;
L_08862594:;
    v1 = s0 << 2;
    a0 = s1 + 0;
    v1 = v1 + v0;
    a1 = LD32(v1);
    s0 = s0 + 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088625AC;
L_088625AC:;
    v1 = s0 < s2;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s3+72); goto L_08862594; }
    goto L_088625B8;
L_088625B8:;
    goto L_08862578;
}

/* 088625C0 */
rv_t func_088625C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088625C0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a3 = 0 + 0;
    a1 = 72;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088625F4;
L_088625F4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0886262C; }
    goto L_088625FC;
L_088625FC:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08862640; }
    goto L_0886260C;
L_0886260C:;
    a0 = v0 + 0;
    func_08AAE154(a0, a1);
    goto L_08862614;
L_08862614:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886262C;
L_0886262C:;
    goto L_08862630;
L_08862630:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08862640:;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862648;
L_08862648:;
    goto L_08862630;
}

/* 08862650 */
rv_t func_08862650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08862650:;
    sp = sp - 16;
    a3 = 0 + 0;
    s2 = a1 + 0;
    a1 = 108;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = 109;
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886268C;
L_0886268C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088626F4; }
    goto L_08862694;
L_08862694:;
    a2 = LD32(v0+24);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088626CC; }
    goto L_088626A0;
L_088626A0:;
    v1 = a1 << 2;
    v0 = v1 + s0;
    a0 = LD32(v0+36);
    a1 = a1 + 1;
    v1 = v1 + a2;
    v0 = (s32)a1 < 9;
    cnd_ = v0 != 0;
    ST32(v1+72, a0);
    if (cnd_) { goto L_088626A0; }
    goto L_088626C0;
L_088626C0:;
    a0 = a2 + 0;
    a1 = s0 + 0;
    func_08AAE154(a0, a1);
    goto L_088626CC;
L_088626CC:;
    v0 = 2;
    ST32(s1, v0);
    a0 = s1 + 0;
    a1 = s2 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s1+4, v1);
    { rv_t r_ = func_088ACA44(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088626F4;
L_088626F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886270C */
void func_0886270C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886270C:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862730;
L_08862730:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 14;
    t0 = 72;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_0886274C;
L_0886274C:;
    a0 = s2 + 0;
    func_08862774(a0);
    goto L_08862754;
L_08862754:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_0886275C;
L_0886275C:;
    sp = sp + 16;
    return;
}

/* 08862774 */
void func_08862774(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08862774:;
    sp = sp - 96;
    s0 = a0 + 0;
    func_08864D34(a0);
    goto L_08862788;
L_08862788:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 68;
    t0 = 32;
    t1 = 3;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_088627AC;
L_088627AC:;
    sp = sp + 96;
    return;
}

/* 088627BC */
rv_t func_088627BC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088627BC:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886283C; }
    goto L_088627F0;
L_088627F0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08862814; }
    goto L_08862804;
L_08862804:;
    v0 = D_08B28ED4 - (-28972);
    a0 = LD32(v0-28972);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0886282C; }
    goto L_08862814;
L_08862814:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886282C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862834;
L_08862834:;
    goto L_08862814;
L_0886283C:;
    s3 = D_08B28ED4 - (-28972);
    s0 = s3 - 28972;
    a0 = 128;
    v0 = 32;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862854;
L_08862854:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28972, v0);
    if (cnd_) { goto L_08862880; }
    goto L_08862864;
L_08862864:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0886286C;
L_0886286C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0886286C; }
    goto L_08862880;
L_08862880:;
    v0 = s3 - 28972;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088627F0;
}

/* 08862890 */
rv_t func_08862890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08862890:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088627BC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088628A4;
L_088628A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088628B0 */
rv_t func_088628B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088628B0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088627BC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088628C4;
L_088628C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088628D0 */
void func_088628D0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088628D0:;
    sp = sp - 32;
    s3 = D_08B28EF4 - (-28940);
    s2 = s3 - 28940;
    s1 = a0 + 0;
    a3 = LD32(a1);
    ST32(a0, a3);
    v0 = LD32(a3-12);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    v0 = 1;
    v1 = 2;
    ST32(a0+28, v0);
    v0 = D_08AEBE6C - (-16788);
    a1 = LD32(a0);
    f0 = BITSF(LD32(v0-16788));
    v0 = 999;
    ST32(s1+48, v0);
    v0 = 100;
    ST32(a0+36, FBITS(f0));
    a0 = 12;
    ST32(s1+44, a2);
    ST16(s1+60, v0);
    ST32(s1+56, v1);
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    ST32(s1+12, 0);
    ST32(s1+16, 0);
    ST32(s1+20, 0);
    ST32(s1+24, 0);
    ST32(s1+32, 0);
    ST32(s1+40, 0);
    ST32(s1+52, 0);
    ST8(s1+62, 0);
    ST32(s1+64, 0);
    ST8(s1+68, 0);
    ST32(s1+72, 0);
    v0 = LD32(a1-12);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862994;
L_08862994:;
    a0 = LD32(s3-28940);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 088629DC */
void func_088629DC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088629DC:;
    sp = sp - 16;
    a3 = D_08B28EF4 - (-28940);
    s1 = a3 - 28940;
    s0 = a0 + 0;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    a1 = LD32(s1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a1 = a1 - 1;
    v1 = LD32(a0);
    a0 = LD32(a3-28940);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a1;
    a1 = v1 << 2;
    a0 = a1 + a0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08862A60; }
    goto L_08862A44;
L_08862A44:;
    v0 = LD32(a0);
    goto L_08862A48;
L_08862A48:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08862AB8; }
    goto L_08862A50;
L_08862A50:;
    t0 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08862A48; }
    goto L_08862A60;
L_08862A60:;
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08862AA8; }
    goto L_08862A6C;
L_08862A6C:;
    a0 = s0 + 0;
    goto L_08862A70;
L_08862A70:;
    a1 = 1;
    { rv_t r_ = func_08864894(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862A78;
L_08862A78:;
    a0 = LD32(s0+72);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08862A98; }
    goto L_08862A84;
L_08862A84:;
    goto L_08862A88;
L_08862A88:;
    sp = sp + 16;
    return;
L_08862A98:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862AA0;
L_08862AA0:;
    goto L_08862A88;
L_08862AA8:;
    { rv_t r_ = func_088BA7D8(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862AB0;
L_08862AB0:;
    a0 = s0 + 0;
    goto L_08862A70;
L_08862AB8:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08862AC8; }
    goto L_08862AC0;
L_08862AC0:;
    ST8(a0+8, v0);
    goto L_08862A60;
L_08862AC8:;
    cnd_ = t0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08862AF0; }
    goto L_08862AD0;
L_08862AD0:;
    v0 = LD32(a0+4);
    ST32(t0+4, v0);
    goto L_08862AD8;
L_08862AD8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862AE0;
L_08862AE0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08862A60;
L_08862AF0:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_08862AD8;
}

/* 08862B00 */
rv_t func_08862B00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08862B00:;
    v0 = D_08AF4E64 - (20068);
    v0 = v0 + 20068;
    v1 = v0 + 204;
    sp = sp - 16;
    ST32(a0+76, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    a1 = s0 + 0;
    s1 = s0 + 76;
    func_08AAE490(a0, a1, t1, t2, t3);
    goto L_08862B3C;
L_08862B3C:;
    v1 = LD32(s0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08862B8C; }
    goto L_08862B48;
L_08862B48:;
    a0 = s0 + 0;
    goto L_08862B4C;
L_08862B4C:;
    a1 = 1;
    { rv_t r_ = func_08864894(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862B54;
L_08862B54:;
    v0 = LD32(s0+72);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08862B7C; }
    goto L_08862B60;
L_08862B60:;
    a0 = s1 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862B68;
L_08862B68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08862B7C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862B84;
L_08862B84:;
    goto L_08862B60;
L_08862B8C:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862B94;
L_08862B94:;
    a0 = s0 + 0;
    goto L_08862B4C;
}

/* 08862B9C */
rv_t func_08862B9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08862B9C:;
    v0 = D_08AF4E64 - (20068);
    v0 = v0 + 20068;
    v1 = v0 + 204;
    sp = sp - 16;
    ST32(a0+76, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    a1 = s0 + 0;
    s1 = s0 + 76;
    func_08AAE490(a0, a1, t1, t2, t3);
    goto L_08862BD8;
L_08862BD8:;
    v1 = LD32(s0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08862C30; }
    goto L_08862BE4;
L_08862BE4:;
    a0 = s0 + 0;
    goto L_08862BE8;
L_08862BE8:;
    a1 = 1;
    { rv_t r_ = func_08864894(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862BF0;
L_08862BF0:;
    v0 = LD32(s0+72);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08862C20; }
    goto L_08862BFC;
L_08862BFC:;
    a0 = s1 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862C04;
L_08862C04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862C0C;
L_08862C0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08862C20:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862C28;
L_08862C28:;
    goto L_08862BFC;
L_08862C30:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862C38;
L_08862C38:;
    a0 = s0 + 0;
    goto L_08862BE8;
}

/* 08862C40 */
rv_t func_08862C40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08862C40:;
    sp = sp - 16;
    v0 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08862CAC; }
    goto L_08862C60;
L_08862C60:;
    a1 = LD_U16(a1+16);
    v1 = a1 & 0xffff;
    v0 = v1 < 0x86u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08862E48; }
    goto L_08862C74;
L_08862C74:;
    v0 = v1 << 2;
    v1 = D_08AD47B8 - (18360);
    v1 = v1 + 18360;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08862C90u: goto L_08862C90; case 0x08862CC0u: goto L_08862CC0; case 0x08862CECu: goto L_08862CEC; case 0x08862D84u: goto L_08862D84; case 0x08862DB8u: goto L_08862DB8; case 0x08862DE4u: goto L_08862DE4; case 0x08862DF0u: goto L_08862DF0; case 0x08862E10u: goto L_08862E10; case 0x08862E20u: goto L_08862E20; case 0x08862E44u: goto L_08862E44; case 0x08862E60u: goto L_08862E60; case 0x08862E8Cu: goto L_08862E8C; case 0x08862EACu: goto L_08862EAC; case 0x08862EDCu: goto L_08862EDC; case 0x08862F00u: goto L_08862F00; default: rs_break(0, 0x08862c88); }
L_08862C90:;
    a0 = s1 + 0;
    { rv_t r_ = func_08864AB8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862C98;
L_08862C98:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862CA8;
L_08862CA8:;
    v0 = 1;
    goto L_08862CAC;
L_08862CAC:;
    goto L_08862CB0;
L_08862CB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08862CC0:;
    v0 = LD32(s0+24);
    a0 = s1 + 0;
    f14 = BITSF(LD32(v0+20));
    a1 = LD32(v0);
    a2 = LD32(v0+4);
    a3 = LD32(v0+8);
    f12 = BITSF(LD32(v0+12));
    f13 = BITSF(LD32(v0+16));
    { rv_t r_ = func_088649F4(a0, a1, a2, a3, t2, t3, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862CE4;
L_08862CE4:;
    v0 = 1;
    goto L_08862CAC;
L_08862CEC:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x2;
    if (cnd_) { goto L_08862D10; }
    goto L_08862D00;
L_08862D00:;
    v0 = LD_U8(a0+4);
    ST8(s1+62, v0);
    v1 = LD32(a0);
    v0 = v1 & 0x2;
    goto L_08862D10;
L_08862D10:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08862D54; }
    goto L_08862D18;
L_08862D18:;
    v0 = D_08AEBE74 - (-16780);
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v0-16780));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEBE78 - (-16776);
    if (cnd_) { goto L_08862D78; }
    goto L_08862D3C;
L_08862D3C:;
    f0 = BITSF(LD32(v0-16776));
    f0 = f2 + f0;
    goto L_08862D44;
L_08862D44:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    ST16(s1+60, v0);
    v0 = LD32(s1);
    goto L_08862D54;
L_08862D54:;
    a0 = s0 + 0;
    a1 = 2;
    goto L_08862D5C;
L_08862D5C:;
    v1 = LD32(v0-12);
    a3 = 0 + 0;
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862D70;
L_08862D70:;
    v0 = 1;
    goto L_08862CAC;
L_08862D78:;
    f0 = BITSF(LD32(v0-16776));
    f0 = f2 - f0;
    goto L_08862D44;
L_08862D84:;
    v1 = a1 & 0xffff;
    v0 = 27;
    cnd_ = v1 == v0;
    a1 = LD32(s1+8);
    if (cnd_) { goto L_08862DAC; }
    goto L_08862D94;
L_08862D94:;
    a0 = s1 + 0;
    a1 = (a1 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    goto L_08862D9C;
L_08862D9C:;
    { rv_t r_ = func_08864108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862DA4;
L_08862DA4:;
    v0 = LD32(s1);
    goto L_08862D54;
L_08862DAC:;
    a0 = s1 + 0;
    a1 = a1 | 0x40;
    goto L_08862D9C;
L_08862DB8:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    goto L_08862DC0;
L_08862DC0:;
    { rv_t r_ = func_08864234(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862DC8;
L_08862DC8:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862DDC;
L_08862DDC:;
    v0 = 1;
    goto L_08862CAC;
L_08862DE4:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_08862DC0;
L_08862DF0:;
    a0 = LD32(s0+24);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08862CAC; }
    goto L_08862DFC;
L_08862DFC:;
    v1 = LD_U8(a0);
    v0 = LD32(s1+64);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s1+64, v0);
    goto L_08862CA8;
L_08862E10:;
    v0 = LD32(s1);
    a0 = s0 + 0;
    a1 = 8;
    goto L_08862D5C;
L_08862E20:;
    v0 = LD32(s0+24);
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = LD_U8(v0);
    a2 = LD32(v1+124);
    t_ = a2;
    a1 = 0 < a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862E3C;
L_08862E3C:;
    v0 = 1;
    goto L_08862CAC;
L_08862E44:;
    v0 = LD32(s1);
    goto L_08862E48;
L_08862E48:;
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862E58;
L_08862E58:;
    goto L_08862CB0;
L_08862E60:;
    v0 = LD32(s0+24);
    v1 = LD32(s1);
    a0 = s1 + 0;
    a2 = LD32(v0+4);
    a1 = LD32(v0);
    v0 = LD32(v1+96);
    a3 = 0 + 0;
    goto L_08862E7C;
L_08862E7C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862E84;
L_08862E84:;
    v0 = 1;
    goto L_08862CAC;
L_08862E8C:;
    v0 = LD32(s0+24);
    v1 = LD32(s1);
    a0 = s1 + 0;
    a2 = LD32(v0+4);
    a1 = LD32(v0);
    v0 = LD32(v1+96);
    a3 = 1;
    goto L_08862E7C;
L_08862EAC:;
    a3 = LD32(s0+24);
    v1 = LD32(s1);
    a0 = s1 + 0;
    t0 = LD32(a3+4);
    a1 = LD32(a3);
    v0 = LD32(v1+100);
    a2 = a3 + 8;
    a3 = a3 + 20;
    goto L_08862ECC;
L_08862ECC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862ED4;
L_08862ED4:;
    v0 = 1;
    goto L_08862CAC;
L_08862EDC:;
    v1 = LD32(s1);
    t0 = LD32(s0+24);
    a0 = s1 + 0;
    v0 = LD32(v1+104);
    a1 = LD32(t0);
    a2 = LD32(t0+4);
    a3 = LD32(t0+8);
    t0 = t0 + 12;
    goto L_08862ECC;
L_08862F00:;
    v1 = LD32(s1);
    v0 = LD32(v1+108);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862F10;
L_08862F10:;
    v0 = 1;
    goto L_08862CAC;
}

/* 08862F18 */
rv_t func_08862F18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08862F18:;
    sp = sp - 16;
    v0 = LD32(a0+20);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08862F48; }
    goto L_08862F34;
L_08862F34:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+32));
    f0 = f0 + f1;
    ST32(a0+32, FBITS(f0));
    goto L_08862F48;
L_08862F48:;
    v0 = LD32(s0+48);
    s1 = 999;
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(s0); goto L_08862FFC; }
    goto L_08862F58;
L_08862F58:;
    a0 = LD32(s0+4);
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08862F60;
L_08862F60:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08862FFC; }
    goto L_08862F68;
L_08862F68:;
    a3 = LD32(s0+48);
    v1 = D_08B28EF4 - (-28940);
    cnd_ = a3 == s1;
    v0 = v1 - 28940;
    if (cnd_) { goto L_08862FF8; }
    goto L_08862F78;
L_08862F78:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-28940);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08862FCC; }
    goto L_08862F9C;
L_08862F9C:;
    v0 = LD32(a1);
    goto L_08862FA0;
L_08862FA0:;
    a0 = LD32(v0);
    a2 = v0 + 0;
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    cnd_ = a0 == a3;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_0886301C; }
    goto L_08862FBC;
L_08862FBC:;
    a1 = LD32(a1+4);
    goto L_08862FC0;
L_08862FC0:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08862FA0; }
    goto L_08862FC8;
L_08862FC8:;
    a2 = 0 + 0;
    goto L_08862FCC;
L_08862FCC:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08862FFC; }
    goto L_08862FD4;
L_08862FD4:;
    v1 = LD32(a2);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862FE4;
L_08862FE4:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08862FF8;
L_08862FF8:;
    v0 = LD32(s0);
    goto L_08862FFC;
L_08862FFC:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873E44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863008;
L_08863008:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886301C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08862FC0; }
    goto L_08863024;
L_08863024:;
    goto L_08862FCC;
}

/* 0886302C */
rv_t func_0886302C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0886302C:;
    sp = sp - 64;
    s2 = a1 + 0;
    a1 = 16;
    s1 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863058;
L_08863058:;
    a1 = s2 + 0;
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886306C;
L_0886306C:;
    v1 = LD32(s1);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886307C;
L_0886307C:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863088;
L_08863088:;
    v1 = LD32(s1);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863098;
L_08863098:;
    a1 = v0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088630A4;
L_088630A4:;
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    {v[13]=BITSF(v1);}
    v0 = LD32(sp+8);
    v1 = LD32(sp+12);
    {v[14]=BITSF(v0);}
    {v[15]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[12];float t1=v[13];float t2=v[14];float t3=v[15];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a1 = sp + 0;
    if (cnd_) { goto L_08863144; }
    goto L_088630E4;
L_088630E4:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;v[3]=s3*t0;}
    {v0=FBITS(v[3]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f2 = BITSF(v0);
    ST32(sp, FBITS(f3));
    {v0=FBITS(v[2]);}
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, v0);
    v1 = LD32(sp+4);
    v0 = LD32(sp);
    ST32(sp+12, FBITS(f4));
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = LD32(sp+8);
    v1 = LD32(sp+12);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    a1 = sp + 0;
    goto L_08863144;
L_08863144:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DCBC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886314C;
L_0886314C:;
    f12 = BITSF(LD32(s1+40));
    a0 = s2 + 0;
    s3 = 0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886315C;
L_0886315C:;
    a1 = LD32(s1+12);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863168;
L_08863168:;
    a1 = LD32(s1+16);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863174;
L_08863174:;
    a1 = LD32(s1+20);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863180;
L_08863180:;
    a1 = LD32(s1+24);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886318C;
L_0886318C:;
    a1 = LD32(s1+28);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863198;
L_08863198:;
    a1 = LD32(s1+44);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088631A4;
L_088631A4:;
    a1 = LD32(s1+64);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088631B0;
L_088631B0:;
    a1 = LD32(s1+8);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088631BC;
L_088631BC:;
    f12 = BITSF(LD32(s1+32));
    a0 = s2 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088631C8;
L_088631C8:;
    a1 = (u32)(s32)LD_S16(s1+60);
    a0 = s2 + 0;
    func_0882D9E8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088631D4;
L_088631D4:;
    a1 = LD_U8(s1+62);
    a0 = s2 + 0;
    { rv_t r_ = func_0882DB10(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088631E0;
L_088631E0:;
    a1 = LD_U8(s1+68);
    a0 = s2 + 0;
    { rv_t r_ = func_0882DB10(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088631EC;
L_088631EC:;
    f12 = BITSF(LD32(s1+36));
    a0 = s2 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088631F8;
L_088631F8:;
    a1 = LD32(s2+20);
    v0 = D_08B23100 - (12544);
    a2 = LD_U8(v0+12544);
    a1 = 0 - a1;
    a1 = a1 & 0x3;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D7B8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863214;
L_08863214:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08863238; }
    goto L_08863220;
L_08863220:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08863238:;
    v0 = LD32(s1+72);
    goto L_0886323C;
L_0886323C:;
    s0 = s3 << 2;
    a0 = s2 + 0;
    v0 = s0 + v0;
    a1 = LD_U16(v0);
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863250;
L_08863250:;
    v1 = LD32(s1+72);
    a0 = s2 + 0;
    s0 = s0 + v1;
    a1 = LD_U16(s0+2);
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863264;
L_08863264:;
    v1 = LD_U8(s1+68);
    v0 = s3 + 1;
    s3 = v0 & 0xff;
    v1 = s3 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+72); goto L_0886323C; }
    goto L_0886327C;
L_0886327C:;
    goto L_08863220;
}

/* 08863284 */
rv_t func_08863284(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08863284:;
    sp = sp - 128;
    s2 = a1 + 0;
    a1 = sp + 80;
    s1 = a0 + 0;
    a0 = s2 + 0;
    s4 = sp + 16;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088632B8;
L_088632B8:;
    a1 = s2 + 0;
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088632CC;
L_088632CC:;
    a0 = s2 + 0;
    a1 = s4 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088632D8;
L_088632D8:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088632E4;
L_088632E4:;
    a1 = s1 + 40;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088632F0;
L_088632F0:;
    a1 = s1 + 12;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088632FC;
L_088632FC:;
    a1 = s1 + 16;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863308;
L_08863308:;
    a1 = s1 + 20;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863314;
L_08863314:;
    a1 = s1 + 24;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863320;
L_08863320:;
    a1 = s1 + 28;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886332C;
L_0886332C:;
    a1 = s1 + 44;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863338;
L_08863338:;
    a1 = LD32(s1+44);
    a0 = s1 + 0;
    { rv_t r_ = func_08864BB0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863344;
L_08863344:;
    a1 = s1 + 64;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863350;
L_08863350:;
    v1 = LD32(s1+64);
    a1 = s1 + 8;
    a0 = s2 + 0;
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s1+64, v1);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863368;
L_08863368:;
    a1 = s1 + 32;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863374;
L_08863374:;
    a1 = s1 + 60;
    a0 = s2 + 0;
    func_0882D9B0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08863380;
L_08863380:;
    a1 = s1 + 62;
    a0 = s2 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0886338C;
L_0886338C:;
    a1 = s1 + 68;
    a0 = s2 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08863398;
L_08863398:;
    a1 = s1 + 36;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088633A4;
L_088633A4:;
    a1 = LD32(s2+20);
    a0 = s2 + 0;
    a1 = 0 - a1;
    a1 = a1 & 0x3;
    { rv_t r_ = func_0882D824(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088633B8;
L_088633B8:;
    a0 = LD32(s1+72);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088634F4; }
    goto L_088633C4;
L_088633C4:;
    a0 = LD_U8(s1+68);
    goto L_088633C8;
L_088633C8:;
    s3 = 0 + 0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088633D4;
L_088633D4:;
    v1 = LD_U8(s1+68);
    cnd_ = v1 != 0;
    ST32(s1+72, v0);
    if (cnd_) { goto L_088634AC; }
    goto L_088633E0;
L_088633E0:;
    a1 = s4 + 0;
    goto L_088633E4;
L_088633E4:;
    a0 = s1 + 0;
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=BITSF(LD32(sp+(12)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;v[96]=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=v[96];float t0=v[90];float d0=s0-t0;v[96]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(sp+(32),FBITS(v[96]));}
    {ST32(sp+(36),FBITS(v[97]));}
    {ST32(sp+(40),FBITS(v[98]));}
    {ST32(sp+(44),FBITS(v[100]));}
    {ST32(sp+(48),FBITS(v[101]));}
    {ST32(sp+(52),FBITS(v[102]));}
    {ST32(sp+(56),FBITS(v[104]));}
    {ST32(sp+(60),FBITS(v[105]));}
    {ST32(sp+(64),FBITS(v[106]));}
    func_08865558(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08863464;
L_08863464:;
    v0 = LD32(s1);
    a1 = sp + 32;
    v1 = LD32(v0+48);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863478;
L_08863478:;
    a2 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(a2+16);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886348C;
L_0886348C:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_088634AC:;
    a1 = LD32(s1+72);
    goto L_088634B0;
L_088634B0:;
    s0 = s3 << 2;
    a0 = s2 + 0;
    a1 = a1 + s0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088634C0;
L_088634C0:;
    a1 = LD32(s1+72);
    a0 = s2 + 0;
    a1 = a1 + s0;
    a1 = a1 + 2;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088634D4;
L_088634D4:;
    v1 = LD_U8(s1+68);
    v0 = s3 + 1;
    s3 = v0 & 0xff;
    v1 = s3 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+72); goto L_088634B0; }
    goto L_088634EC;
L_088634EC:;
    a1 = s4 + 0;
    goto L_088633E4;
L_088634F4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088634FC;
L_088634FC:;
    a0 = LD_U8(s1+68);
    goto L_088633C8;
}

/* 08863504 */
rv_t func_08863504(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 240);
L_08863504:;
    sp = sp - 240;
    a2 = 76;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08863530;
L_08863530:;
    v1 = 16;
    ST32(sp+208, v1);
    a2 = sp + 208;
    a1 = 0 + 0;
    goto L_08863540;
L_08863540:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08863540; }
    goto L_08863568;
L_08863568:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08874EDC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886357C;
L_0886357C:;
    v1 = LD32(s1);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886358C;
L_0886358C:;
    f0 = BITSF(LD32(v0));
    v1 = LD32(s1);
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+4, FBITS(f1));
    v0 = LD32(v1+24);
    t_ = v0;
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088635B4;
L_088635B4:;
    a1 = v0 + 0;
    a0 = sp + 12;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088635C0;
L_088635C0:;
    v0 = LD32(sp+12);
    v1 = LD32(sp+16);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    {v[13]=BITSF(v1);}
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    {v[14]=BITSF(v0);}
    {v[15]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[12];float t1=v[13];float t2=v[14];float t3=v[15];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    s2 = LD32(sp+12);
    if (cnd_) { goto L_088637E4; }
    goto L_08863600;
L_08863600:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;v[3]=s3*t0;}
    {a0=FBITS(v[3]);}
    {a1=FBITS(v[0]);}
    {t1=FBITS(v[1]);}
    {v0=FBITS(v[2]);}
    ST32(sp+12, a1);
    ST32(sp+16, t1);
    ST32(sp+20, v0);
    ST32(sp+24, a0);
    s2 = LD32(sp+12);
    t8 = LD32(sp+16);
    t9 = LD32(sp+20);
    t7 = LD32(sp+24);
    ST32(sp+80, s2);
    ST32(sp+84, t8);
    ST32(sp+88, t9);
    ST32(sp+92, t7);
    goto L_08863650;
L_08863650:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(s1+40));
    v0 = LD32(s1+12);
    v1 = LD32(s1+16);
    a0 = LD32(s1+20);
    a1 = LD32(s1+24);
    a2 = LD32(s1+28);
    a3 = LD32(s1+44);
    t0 = LD32(s1+64);
    t1 = LD32(s1+8);
    f2 = BITSF(LD32(s1+32));
    t2 = LD_U16(s1+60);
    t3 = LD_U8(s1+62);
    t4 = LD_U8(s1+68);
    f3 = BITSF(LD32(s1+36));
    ST32(sp+96, FBITS(f0));
    t6 = sp + 96;
    t5 = 0 + 0;
    f0 = BITSF(LD32(sp+4));
    ST32(sp+28, FBITS(f1));
    ST32(sp+100, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, a0);
    ST32(sp+44, a1);
    ST32(sp+48, a2);
    ST32(sp+52, a3);
    ST32(sp+56, t0);
    ST32(sp+60, t1);
    ST32(sp+64, FBITS(f2));
    ST16(sp+68, t2);
    ST8(sp+70, t3);
    ST8(sp+71, t4);
    ST32(sp+72, FBITS(f3));
    ST32(sp+104, FBITS(f0));
    ST32(sp+108, s2);
    ST32(sp+112, t8);
    ST32(sp+116, t9);
    ST32(sp+120, t7);
    ST32(sp+124, FBITS(f1));
    ST32(sp+128, v0);
    ST32(sp+132, v1);
    ST32(sp+136, a0);
    ST32(sp+140, a1);
    ST32(sp+144, a2);
    ST32(sp+148, a3);
    ST32(sp+152, t0);
    ST32(sp+156, t1);
    ST32(sp+160, FBITS(f2));
    ST16(sp+164, t2);
    ST8(sp+166, t3);
    ST8(sp+167, t4);
    ST32(sp+168, FBITS(f3));
    goto L_08863728;
L_08863728:;
    v0 = LD_U8(t6);
    v1 = LD32(s0);
    t5 = t5 + 1;
    a0 = t5 < 0x4cu;
    ST8(v1, v0);
    t6 = t6 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08863728; }
    goto L_08863750;
L_08863750:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088637CC; }
    goto L_0886375C;
L_0886375C:;
    t0 = sp + 192;
    v0 = LD32(s1+72);
    goto L_08863764;
L_08863764:;
    v1 = a3 << 2;
    a2 = t0 + 0;
    v1 = v1 + v0;
    a0 = LDU32(v1);
    STU32(sp+176, a0);
    a1 = 0 + 0;
    v0 = LD32(sp+176);
    ST32(sp+192, v0);
    goto L_0886378C;
L_0886378C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886378C; }
    goto L_088637B4;
L_088637B4:;
    v0 = LD_U8(s1+68);
    v1 = a3 + 1;
    a3 = v1 & 0xff;
    v0 = a3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+72); goto L_08863764; }
    goto L_088637CC;
L_088637CC:;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_088637E4:;
    t8 = LD32(sp+16);
    t9 = LD32(sp+20);
    t7 = LD32(sp+24);
    goto L_08863650;
}

/* 088637F4 */
rv_t func_088637F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[416] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 416);
L_088637F4:;
    sp = sp - 416;
    a2 = sp + 384;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08863814;
L_08863814:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08863814; }
    goto L_08863838;
L_08863838:;
    a0 = LD32(sp+384);
    v0 = (s32)a0 < 15;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08863F40; }
    goto L_08863848;
L_08863848:;
    v0 = a0 - 13;
    v0 = v0 < 0x4u;
    cnd_ = v0 == 0;
    v0 = 12;
    if (cnd_) { goto L_08863B68; }
    goto L_08863858;
L_08863858:;
    v0 = 13;
    a2 = sp + 0;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08863B3C; }
    goto L_08863868;
L_08863868:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4cu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08863868; }
    goto L_0886388C;
L_0886388C:;
    v0 = LD32(sp+32);
    goto L_08863890;
L_08863890:;
    v1 = LD32(sp+36);
    a0 = LD32(sp+40);
    a1 = LD32(sp+44);
    a2 = LD32(sp+48);
    a3 = LD32(sp+60);
    f0 = BITSF(LD32(sp+28));
    ST32(s1+12, v0);
    v0 = 15;
    ST32(s1+40, FBITS(f0));
    ST32(s1+16, v1);
    ST32(s1+20, a0);
    ST32(s1+24, a1);
    ST32(s1+28, a2);
    ST32(s1+8, a3);
    v1 = LD32(sp+384);
    cnd_ = v1 == v0;
    v0 = a3 & 0x2;
    if (cnd_) { goto L_08863B0C; }
    goto L_088638D4;
L_088638D4:;
    a1 = LD32(sp+52);
    goto L_088638D8;
L_088638D8:;
    a0 = s1 + 0;
    { rv_t r_ = func_08864BB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088638E0;
L_088638E0:;
    v0 = LD32(sp+56);
    a0 = LD32(sp+384);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v1 = (s32)a0 < 15;
    cnd_ = v1 != 0;
    ST32(s1+64, v0);
    if (cnd_) { goto L_08863AF0; }
    goto L_088638F8;
L_088638F8:;
    f0 = BITSF(LD32(sp+64));
    v0 = (s32)a0 < 14;
    cnd_ = v0 != 0;
    ST32(s1+32, FBITS(f0));
    if (cnd_) { goto L_08863910; }
    goto L_08863908;
L_08863908:;
    f0 = BITSF(LD32(sp+72));
    ST32(s1+36, FBITS(f0));
    goto L_08863910;
L_08863910:;
    a0 = LD_U8(sp+70);
    v1 = LD_U8(sp+71);
    v0 = LD_U16(sp+68);
    ST8(s1+62, a0);
    ST16(s1+60, v0);
    cnd_ = v1 == 0;
    ST8(s1+68, v1);
    if (cnd_) { goto L_088639A4; }
    goto L_0886392C;
L_0886392C:;
    a0 = LD32(s1+72);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08863AE0; }
    goto L_08863938;
L_08863938:;
    a0 = LD_U8(s1+68);
    goto L_0886393C;
L_0886393C:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863944;
L_08863944:;
    v1 = LD_U8(s1+68);
    ST32(s1+72, v0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088639A4; }
    goto L_08863954;
L_08863954:;
    v1 = LD32(s1+72);
    goto L_08863958;
L_08863958:;
    v0 = a3 << 2;
    a2 = 0 + 0;
    a1 = v1 + v0;
    goto L_08863964;
L_08863964:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08863964; }
    goto L_0886398C;
L_0886398C:;
    v0 = LD_U8(s1+68);
    v1 = a3 + 1;
    a3 = v1 & 0xff;
    v0 = a3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+72); goto L_08863958; }
    goto L_088639A4;
L_088639A4:;
    a0 = s1 + 0;
    a1 = sp + 0;
    {v[112]=BITSF(LD32(sp+(12)));}
    {v[113]=BITSF(LD32(sp+(16)));}
    {v[114]=BITSF(LD32(sp+(20)));}
    {v[115]=BITSF(LD32(sp+(24)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;v[96]=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=v[96];float t0=v[90];float d0=s0-t0;v[96]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    {ST32(sp+(92),FBITS(v[100]));}
    {ST32(sp+(96),FBITS(v[101]));}
    {ST32(sp+(100),FBITS(v[102]));}
    {ST32(sp+(104),FBITS(v[104]));}
    {ST32(sp+(108),FBITS(v[105]));}
    {ST32(sp+(112),FBITS(v[106]));}
    func_08865558(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08863A28;
L_08863A28:;
    v0 = LD32(s1);
    a1 = sp + 80;
    v1 = LD32(v0+48);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863A3C;
L_08863A3C:;
    a0 = LD32(sp+384);
    goto L_08863A40;
L_08863A40:;
    v0 = LD32(s1+64);
    goto L_08863A44;
L_08863A44:;
    v1 = (s32)a0 < 10;
    v0 = v0 & 0x3;
    cnd_ = v1 == 0;
    ST32(s1+64, v0);
    if (cnd_) { goto L_08863A6C; }
    goto L_08863A54;
L_08863A54:;
    v0 = LD32(s1+8);
    v1 = v0 & 0xff;
    v0 = (v0 & ~(0xffu << 0)) | ((0 & 0xff) << 0);
    v0 = v0 << 8;
    v1 = v1 | v0;
    ST32(s1+8, v1);
    goto L_08863A6C;
L_08863A6C:;
    v0 = (s32)a0 < 7;
    cnd_ = v0 == 0;
    v0 = (s32)a0 < 8;
    if (cnd_) { goto L_08863A88; }
    goto L_08863A78;
L_08863A78:;
    v0 = LD32(s1+8);
    v0 = v0 | 0x1;
    ST32(s1+8, v0);
    v0 = (s32)a0 < 8;
    goto L_08863A88;
L_08863A88:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_08863AA0; }
    goto L_08863A90;
L_08863A90:;
    v0 = LD32(s1+8);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s1+8, v0);
    v0 = LD32(s1+16);
    goto L_08863AA0;
L_08863AA0:;
    cnd_ = v0 == 0;
    v0 = LD32(s1+8);
    if (cnd_) { goto L_08863AD8; }
    goto L_08863AA8;
L_08863AA8:;
    v0 = v0 | 0x400;
    goto L_08863AAC;
L_08863AAC:;
    v1 = LD32(s1);
    ST32(s1+8, v0);
    a0 = s1 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863AC4;
L_08863AC4:;
    sp = sp + 416;
    return (rv_t){ v0, v1, f0 };
L_08863AD8:;
    v0 = (v0 & ~(0x1u << 10)) | ((0 & 0x1) << 10);
    goto L_08863AAC;
L_08863AE0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08863AE8;
L_08863AE8:;
    a0 = LD_U8(s1+68);
    goto L_0886393C;
L_08863AF0:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08874D30(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863B04;
L_08863B04:;
    a0 = LD32(sp+384);
    goto L_088638F8;
L_08863B0C:;
    cnd_ = v0 != 0;
    v0 = a3 | 0x2000;
    if (cnd_) { goto L_08863B34; }
    goto L_08863B14;
L_08863B14:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v1 = 19;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 != v1;
    a1 = LD32(sp+52);
    if (cnd_) { goto L_088638D8; }
    goto L_08863B30;
L_08863B30:;
    v0 = a3 | 0x2000;
    goto L_08863B34;
L_08863B34:;
    ST32(s1+8, v0);
    goto L_088638D4;
L_08863B3C:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x48u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08863B3C; }
    goto L_08863B60;
L_08863B60:;
    v0 = LD32(sp+32);
    goto L_08863890;
L_08863B68:;
    cnd_ = a0 == v0;
    v0 = 11;
    if (cnd_) { goto L_08863E08; }
    goto L_08863B70;
L_08863B70:;
    cnd_ = a0 == v0;
    v0 = a0 - 9;
    if (cnd_) { goto L_08863CC4; }
    goto L_08863B78;
L_08863B78:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+64); goto L_08863A44; }
    goto L_08863B84;
L_08863B84:;
    a1 = sp + 304;
    a3 = a1 + 0;
    a2 = 0 + 0;
    goto L_08863B90;
L_08863B90:;
    v0 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x48u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08863B90; }
    goto L_08863BB4;
L_08863BB4:;
    a0 = s1 + 0;
    {v[112]=BITSF(LD32(sp+(316)));}
    {v[113]=BITSF(LD32(sp+(320)));}
    {v[114]=BITSF(LD32(sp+(324)));}
    {v[115]=BITSF(LD32(sp+(328)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;v[96]=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=v[96];float t0=v[90];float d0=s0-t0;v[96]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    {ST32(sp+(92),FBITS(v[100]));}
    {ST32(sp+(96),FBITS(v[101]));}
    {ST32(sp+(100),FBITS(v[102]));}
    {ST32(sp+(104),FBITS(v[104]));}
    {ST32(sp+(108),FBITS(v[105]));}
    {ST32(sp+(112),FBITS(v[106]));}
    func_08865558(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08863C34;
L_08863C34:;
    v0 = LD32(s1);
    a1 = sp + 80;
    v1 = LD32(v0+48);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863C48;
L_08863C48:;
    f0 = BITSF(LD32(sp+332));
    v0 = LD32(sp+336);
    v1 = LD32(sp+340);
    a1 = LD32(sp+344);
    a2 = LD32(sp+348);
    a3 = LD32(sp+352);
    t0 = LD32(sp+364);
    ST32(s1+40, FBITS(f0));
    a0 = s1 + 0;
    ST32(s1+12, v0);
    ST32(s1+16, v1);
    ST32(s1+24, a2);
    ST32(s1+28, a3);
    ST32(s1+8, t0);
    ST32(s1+20, a1);
    a1 = LD32(sp+356);
    { rv_t r_ = func_08864BB0(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863C8C;
L_08863C8C:;
    v1 = LD32(s1);
    v0 = LD32(sp+360);
    a1 = s0 + 0;
    a0 = LD32(v1-12);
    ST32(s1+64, v0);
    a0 = s1 + a0;
    { rv_t r_ = func_08874D30(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863CA8;
L_08863CA8:;
    v0 = LD_U16(sp+372);
    v1 = LD_U8(sp+374);
    f0 = BITSF(LD32(sp+368));
    ST16(s1+60, v0);
    ST32(s1+32, FBITS(f0));
    ST8(s1+62, v1);
    goto L_08863A3C;
L_08863CC4:;
    a1 = sp + 208;
    a3 = a1 + 0;
    a2 = 0 + 0;
    goto L_08863CD0;
L_08863CD0:;
    v0 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x54u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08863CD0; }
    goto L_08863CF4;
L_08863CF4:;
    a0 = s1 + 0;
    {v[112]=BITSF(LD32(sp+(220)));}
    {v[113]=BITSF(LD32(sp+(224)));}
    {v[114]=BITSF(LD32(sp+(228)));}
    {v[115]=BITSF(LD32(sp+(232)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;v[96]=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=v[96];float t0=v[90];float d0=s0-t0;v[96]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    {ST32(sp+(92),FBITS(v[100]));}
    {ST32(sp+(96),FBITS(v[101]));}
    {ST32(sp+(100),FBITS(v[102]));}
    {ST32(sp+(104),FBITS(v[104]));}
    {ST32(sp+(108),FBITS(v[105]));}
    {ST32(sp+(112),FBITS(v[106]));}
    func_08865558(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08863D74;
L_08863D74:;
    v0 = LD32(s1);
    a1 = sp + 80;
    v1 = LD32(v0+48);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863D88;
L_08863D88:;
    f0 = BITSF(LD32(sp+236));
    v0 = LD32(sp+240);
    v1 = LD32(sp+244);
    a1 = LD32(sp+248);
    a2 = LD32(sp+252);
    a3 = LD32(sp+256);
    t0 = LD32(sp+268);
    ST32(s1+40, FBITS(f0));
    a0 = s1 + 0;
    ST32(s1+12, v0);
    ST32(s1+16, v1);
    ST32(s1+24, a2);
    ST32(s1+28, a3);
    ST32(s1+8, t0);
    ST32(s1+20, a1);
    a1 = LD32(sp+260);
    { rv_t r_ = func_08864BB0(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863DCC;
L_08863DCC:;
    v1 = LD32(s1);
    v0 = LD32(sp+264);
    a1 = s0 + 0;
    a0 = LD32(v1-12);
    ST32(s1+64, v0);
    a0 = s1 + a0;
    { rv_t r_ = func_08874D30(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863DE8;
L_08863DE8:;
    v0 = LD_U16(sp+276);
    v1 = LD_U8(sp+278);
    a0 = LD32(sp+384);
    f0 = BITSF(LD32(sp+272));
    goto L_08863DF8;
L_08863DF8:;
    ST32(s1+32, FBITS(f0));
    ST16(s1+60, v0);
    ST8(s1+62, v1);
    goto L_08863A40;
L_08863E08:;
    a1 = sp + 128;
    a3 = a1 + 0;
    a2 = 0 + 0;
    goto L_08863E14;
L_08863E14:;
    v0 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x48u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08863E14; }
    goto L_08863E38;
L_08863E38:;
    a0 = s1 + 0;
    {v[112]=BITSF(LD32(sp+(140)));}
    {v[113]=BITSF(LD32(sp+(144)));}
    {v[114]=BITSF(LD32(sp+(148)));}
    {v[115]=BITSF(LD32(sp+(152)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;v[96]=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=v[96];float t0=v[90];float d0=s0-t0;v[96]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    {ST32(sp+(92),FBITS(v[100]));}
    {ST32(sp+(96),FBITS(v[101]));}
    {ST32(sp+(100),FBITS(v[102]));}
    {ST32(sp+(104),FBITS(v[104]));}
    {ST32(sp+(108),FBITS(v[105]));}
    {ST32(sp+(112),FBITS(v[106]));}
    func_08865558(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08863EB8;
L_08863EB8:;
    v0 = LD32(s1);
    a1 = sp + 80;
    v1 = LD32(v0+48);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863ECC;
L_08863ECC:;
    f0 = BITSF(LD32(sp+156));
    v0 = LD32(sp+160);
    v1 = LD32(sp+164);
    a1 = LD32(sp+168);
    a2 = LD32(sp+172);
    a3 = LD32(sp+176);
    t0 = LD32(sp+188);
    ST32(s1+40, FBITS(f0));
    a0 = s1 + 0;
    ST32(s1+12, v0);
    ST32(s1+16, v1);
    ST32(s1+24, a2);
    ST32(s1+28, a3);
    ST32(s1+8, t0);
    ST32(s1+20, a1);
    a1 = LD32(sp+180);
    { rv_t r_ = func_08864BB0(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863F10;
L_08863F10:;
    v1 = LD32(s1);
    v0 = LD32(sp+184);
    a1 = s0 + 0;
    a0 = LD32(v1-12);
    ST32(s1+64, v0);
    a0 = s1 + a0;
    { rv_t r_ = func_08874D30(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863F2C;
L_08863F2C:;
    v0 = LD_U16(sp+196);
    v1 = LD_U8(sp+198);
    a0 = LD32(sp+384);
    f0 = BITSF(LD32(sp+192));
    goto L_08863DF8;
L_08863F40:;
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08874CE4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863F50;
L_08863F50:;
    a0 = LD32(sp+384);
    goto L_08863848;
}

/* 08863F58 */
rv_t func_08863F58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08863F58:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08874CD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863F78;
L_08863F78:;
    v1 = LD_U8(s0+68);
    v1 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 + 80;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08863F98 */
rv_t func_08863F98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08863F98:;
    ST32(a0+40, 0);
    sp = sp - 16;
    { rv_t r_ = func_08864AB8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08863FAC;
L_08863FAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08863FB8 */
rv_t func_08863FB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08863FB8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v1 = 6;
    v0 = a0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) {  goto L_088640DC; }
    goto L_08863FE4;
L_08863FE4:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088640DC; }
    goto L_08863FF0;
L_08863FF0:;
    v0 = LD32(s0+16);
    v1 = 0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08864004; }
    goto L_08864000;
L_08864000:;
    a1 = LD32(s0+12);
    goto L_08864004;
L_08864004:;
    cnd_ = a1 == 0;
    if (cnd_) { a1 = LD32(s0+8); goto L_08864068; }
    goto L_0886400C;
L_0886400C:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08864018; }
    goto L_08864014;
L_08864014:;
    a1 = LD32(s0+12);
    goto L_08864018;
L_08864018:;
    v0 = D_08B3071C - (1820);
    v1 = LD32(v0+1820);
    cnd_ = v1 == 0;
    t0 = v0 + 1820;
    if (cnd_) { goto L_08864054; }
    goto L_08864028;
L_08864028:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08864030;
L_08864030:;
    a0 = v0 + 40;
    a2 = v0 + 36;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08864060; }
    goto L_08864048;
L_08864048:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08864030; }
    goto L_08864054;
L_08864054:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088640F8; }
    goto L_08864060;
L_08864060:;
    v1 = a3 + 0;
    a1 = LD32(s0+8);
    goto L_08864068;
L_08864068:;
    v0 = (a1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088640E8; }
    goto L_08864074;
L_08864074:;
    v0 = (a1 >> 7) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088640E8; }
    goto L_08864080;
L_08864080:;
    cnd_ = v1 == 0;
    v0 = (a1 >> 2) & 0x1;
    if (cnd_) { goto L_0886409C; }
    goto L_08864088;
L_08864088:;
    v0 = LD32(v1+4);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088640E8; }
    goto L_08864098;
L_08864098:;
    v0 = (a1 >> 2) & 0x1;
    goto L_0886409C;
L_0886409C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088640E8; }
    goto L_088640A4;
L_088640A4:;
    v0 = LD32(s0+16);
    goto L_088640A8;
L_088640A8:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088640B4; }
    goto L_088640B0;
L_088640B0:;
    a1 = LD32(s0+12);
    goto L_088640B4;
L_088640B4:;
    v1 = LD32(s0);
    a0 = LD32(s0+44);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    v0 = func_0885EF6C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088640CC;
L_088640CC:;
    a0 = LD32(s0+4);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAEB8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088640D8;
L_088640D8:;
    goto L_088640DC;
L_088640DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088640E8:;
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088640F0;
L_088640F0:;
    v0 = LD32(s0+16);
    goto L_088640A8;
L_088640F8:;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08864100;
L_08864100:;
    a3 = v0 + 0;
    goto L_08864060;
}

/* 08864108 */
rv_t func_08864108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864108:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v1 = LD32(a0+16);
    ST32(a0+8, a1);
    cnd_ = v1 == 0;
    s1 = v0 ^ a1;
    if (cnd_) { goto L_08864220; }
    goto L_08864130;
L_08864130:;
    v0 = a1 | 0x400;
    ST32(a0+8, v0);
    goto L_08864138;
L_08864138:;
    v0 = s1 & 0x4;
    cnd_ = v0 == 0;
    v0 = s1 & 0x80;
    if (cnd_) { goto L_088641D4; }
    goto L_08864144;
L_08864144:;
    a0 = LD32(s0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088641D4; }
    goto L_08864150;
L_08864150:;
    a1 = LD32(s0+8);
    v0 = (a1 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_088641C8; }
    goto L_08864160;
L_08864160:;
    a0 = 0 + 0;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08864170; }
    goto L_0886416C;
L_0886416C:;
    v0 = LD32(s0+12);
    goto L_08864170;
L_08864170:;
    cnd_ = v0 == 0;
    v0 = (a1 >> 4) & 0x1;
    if (cnd_) { goto L_088641A0; }
    goto L_08864178;
L_08864178:;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08864184; }
    goto L_08864180;
L_08864180:;
    a1 = LD32(s0+12);
    goto L_08864184;
L_08864184:;
    a0 = D_08B3071C - (1820);
    a0 = a0 + 1820;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08864194;
L_08864194:;
    a1 = LD32(s0+8);
    a0 = v0 + 0;
    v0 = (a1 >> 4) & 0x1;
    goto L_088641A0;
L_088641A0:;
    cnd_ = v0 != 0;
    v0 = s1 & 0x80;
    if (cnd_) { goto L_088641D4; }
    goto L_088641A8;
L_088641A8:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088641C4; }
    goto L_088641B0;
L_088641B0:;
    v0 = LD32(a0+4);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    v0 = s1 & 0x80;
    if (cnd_) { goto L_088641D4; }
    goto L_088641C0;
L_088641C0:;
    a0 = LD32(s0+4);
    goto L_088641C4;
L_088641C4:;
    a1 = 0 + 0;
    goto L_088641C8;
L_088641C8:;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088641D0;
L_088641D0:;
    v0 = s1 & 0x80;
    goto L_088641D4;
L_088641D4:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_088641F0; }
    goto L_088641DC;
L_088641DC:;
    goto L_088641E0;
L_088641E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088641F0:;
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088641FC;
L_088641FC:;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+68);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864218;
L_08864218:;
    goto L_088641E0;
L_08864220:;
    a1 = (a1 & ~(0x1u << 10)) | ((0 & 0x1) << 10);
    ST32(a0+8, a1);
    goto L_08864138;
}

/* 0886422C */
void func_0886422C(u32 a0, float f12)
{
L_0886422C:;
    ST32(a0+40, FBITS(f12));
    return;
}

/* 08864234 */
rv_t func_08864234(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864234:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08864260; }
    goto L_08864244;
L_08864244:;
    a1 = LD32(a0+8);
    a1 = a1 | 0x4;
    goto L_0886424C;
L_0886424C:;
    { rv_t r_ = func_08864108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864254;
L_08864254:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08864260:;
    a1 = LD32(a0+8);
    a1 = (a1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    goto L_0886424C;
}

/* 0886426C */
rv_t func_0886426C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886426C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08864298; }
    goto L_0886427C;
L_0886427C:;
    a1 = LD32(a0+8);
    a1 = a1 | 0x2000;
    goto L_08864284;
L_08864284:;
    { rv_t r_ = func_08864108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886428C;
L_0886428C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08864298:;
    a1 = LD32(a0+8);
    a1 = (a1 & ~(0x1u << 13)) | ((0 & 0x1) << 13);
    goto L_08864284;
}

/* 088642A4 */
void func_088642A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088642A4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088642D0; }
    goto L_088642B4;
L_088642B4:;
    a1 = LD32(a0+8);
    a1 = a1 | 0x4000;
    goto L_088642BC;
L_088642BC:;
    { rv_t r_ = func_08864108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088642C4;
L_088642C4:;
    sp = sp + 16;
    return;
L_088642D0:;
    a1 = LD32(a0+8);
    a1 = (a1 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    goto L_088642BC;
}

/* 088642DC */
rv_t func_088642DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088642DC:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08864308; }
    goto L_088642EC;
L_088642EC:;
    a1 = LD32(a0+8);
    a1 = a1 | 0x200;
    goto L_088642F4;
L_088642F4:;
    { rv_t r_ = func_08864108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088642FC;
L_088642FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08864308:;
    a1 = LD32(a0+8);
    a1 = (a1 & ~(0x1u << 9)) | ((0 & 0x1) << 9);
    goto L_088642F4;
}

/* 08864314 */
rv_t func_08864314(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08864314:;
    sp = sp - 32;
    s1 = D_08B28EF0 - (-28944);
    a1 = a1 & 0xff;
    v1 = 0 + 0;
    v0 = LD32(s1-28944);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08864374; }
    goto L_08864348;
L_08864348:;
    v0 = LD32(a0+8);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 != 0;
    v0 = LD_U8(a0+68);
    if (cnd_) { goto L_088643A8; }
    goto L_08864358;
L_08864358:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08864378; }
    goto L_08864360;
L_08864360:;
    a0 = LD32(a0+72);
    cnd_ = a0 != 0;
    ST8(s0+68, 0);
    if (cnd_) { goto L_08864398; }
    goto L_0886436C;
L_0886436C:;
    v1 = 1;
    goto L_08864370;
L_08864370:;
    ST32(s0+72, 0);
    goto L_08864374;
L_08864374:;
    goto L_08864378;
L_08864378:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08864398:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088643A0;
L_088643A0:;
    v1 = 1;
    goto L_08864370;
L_088643A8:;
    cnd_ = v0 == 0;
    s4 = D_08B28EEC - (-28948);
    if (cnd_) { goto L_088643BC; }
    goto L_088643B0;
L_088643B0:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08864374; }
    goto L_088643B8;
L_088643B8:;
    s4 = D_08B28EEC - (-28948);
    goto L_088643BC;
L_088643BC:;
    s2 = LD32(s0+72);
    ST8(s0+68, 0);
    s3 = v0 & 0xff;
    v0 = D_08B28EE4 - (-28956);
    ST32(s0+72, 0);
    ST8(s4-28948, 0);
    a0 = LD32(s0+4);
    ST16(v0-28956, 0);
    v0 = func_088BAA98(a0);
    goto L_088643E0;
L_088643E0:;
    a2 = RS_FADDR(func_08864848, 0x08864848u) - (18504);
    a0 = D_08B20494 - (1172);
    a1 = v0 + 0;
    a2 = a2 + 18504;
    a0 = a0 + 1172;
    func_08804918(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088643F8;
L_088643F8:;
    a0 = s0 + 0;
    { rv_t r_ = func_088644C8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864400;
L_08864400:;
    v0 = LD_U8(s4-28948);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+68, v0); goto L_0886449C; }
    goto L_0886440C;
L_0886440C:;
    v0 = LD_U8(s0+68);
    goto L_08864410;
L_08864410:;
    cnd_ = s3 == v0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08864430; }
    goto L_08864418;
L_08864418:;
    cnd_ = s2 == 0;
    if (cnd_) { v1 = 1; goto L_08864374; }
    goto L_08864420;
L_08864420:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08864428;
L_08864428:;
    v1 = 1;
    goto L_08864374;
L_08864430:;
    cnd_ = s3 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0886447C; }
    goto L_08864438;
L_08864438:;
    t2 = LD32(s0+72);
    t1 = s3 + 0;
    v0 = t0 << 2;
    goto L_08864444;
L_08864444:;
    a1 = s2 + v0;
    a3 = t2 + v0;
    a0 = LD_U16(a1);
    v0 = LD_U16(a3);
    v1 = t0 + 1;
    t0 = v1 & 0xff;
    cnd_ = a0 != v0;
    a2 = t0 < t1;
    if (cnd_) { goto L_08864494; }
    goto L_08864464;
L_08864464:;
    v1 = LD_U16(a1+2);
    v0 = LD_U16(a3+2);
    cnd_ = v1 != v0;
    if (cnd_) { s1 = 1; goto L_0886447C; }
    goto L_08864474;
L_08864474:;
    cnd_ = a2 != 0;
    v0 = t0 << 2;
    if (cnd_) { goto L_08864444; }
    goto L_0886447C;
L_0886447C:;
    cnd_ = s2 == 0;
    if (cnd_) { v1 = s1 + 0; goto L_08864374; }
    goto L_08864484;
L_08864484:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886448C;
L_0886448C:;
    v1 = s1 + 0;
    goto L_08864374;
L_08864494:;
    s1 = 1;
    goto L_0886447C;
L_0886449C:;
    a0 = LD_U8(s4-28948);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088644A8;
L_088644A8:;
    a2 = LD_U8(s4-28948);
    a1 = LD32(s1-28944);
    ST32(s0+72, v0);
    a2 = a2 << 2;
    a0 = v0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088644C0;
L_088644C0:;
    v0 = LD_U8(s0+68);
    goto L_08864410;
}

/* 088644C8 */
rv_t func_088644C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_088644C8:;
    v1 = D_08B28EE4 - (-28956);
    v0 = LD_U16(v1-28956);
    sp = sp - 128;
    s6 = a0 + 0;
    a0 = D_08B28EEC - (-28948);
    ST8(a0-28948, 0);
    cnd_ = v0 == 0;
    ST32(sp+36, 0);
    if (cnd_) { goto L_088646FC; }
    goto L_08864520;
L_08864520:;
    a1 = D_08B28EE8 - (-28952);
    a0 = LD32(sp+36);
    v0 = LD32(a1-28952);
    a1 = D_08B20494 - (1172);
    v1 = a0 << 1;
    a1 = a1 + 1172;
    v1 = v1 + v0;
    a0 = LD_U16(a1+10);
    s7 = LD_U16(v1);
    a0 = s7 < a0;
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08864564; }
    goto L_08864550;
L_08864550:;
    v0 = s7 << 1;
    v1 = LD32(a1+12);
    v0 = v0 + s7;
    v0 = v0 << 3;
    s0 = v1 + v0;
    goto L_08864564;
L_08864564:;
    a1 = LD_U8(s0+20);
    cnd_ = a1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_088646DC; }
    goto L_08864570;
L_08864570:;
    v0 = D_08AEBE7C - (-16772);
    f23 = BITSF(LD32(v0-16772));
    v1 = D_08B20494 - (1172);
    fp = v1 + 1172;
    v0 = LD32(s0+16);
    goto L_08864584;
L_08864584:;
    v1 = s5 << 3;
    a0 = LD_U16(fp+10);
    v1 = v1 + v0;
    s2 = LD_U16(v1);
    a0 = s2 < a0;
    cnd_ = a0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088645B4; }
    goto L_088645A0;
L_088645A0:;
    v0 = s2 << 1;
    v1 = LD32(fp+12);
    v0 = v0 + s2;
    v0 = v0 << 3;
    s1 = v1 + v0;
    goto L_088645B4;
L_088645B4:;
    f21 = BITSF(0);
    fcc = FCMP(f21, f23, 12);
    cnd_ = !fcc;
    v0 = D_08AEBE84 - (-16764);
    if (cnd_) { goto L_088646C4; }
    goto L_088645C8;
L_088645C8:;
    f22 = BITSF(LD32(v0-16764));
    s4 = sp + 16;
    s3 = D_08AEBE80 - (-16768);
    f0 = BITSF(LD32(s0+4));
    goto L_088645D8;
L_088645D8:;
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 - f21;
    ST32(sp, FBITS(f1));
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f21 = f21 + f22;
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    f4 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s0+4));
    f5 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s1+8));
    f4 = f4 - f5;
    f3 = f3 - f2;
    f1 = f1 - f0;
    f2 = BITSF(LD32(s3-16768));
    v0 = FBITS(f4);
    v1 = FBITS(f3);
    a0 = FBITS(f1);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    a0 = LD32(s6+4);
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {a1=FBITS(vr0);}
    f0 = BITSF(a1);
    f20 = BITSF(a1);
    f2 = f2 / f0;
    f1 = f1 * f2;
    f4 = f4 * f2;
    f3 = f3 * f2;
    ST32(sp+24, FBITS(f1));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    v0 = func_088BAA98(a0);
    goto L_08864678;
L_08864678:;
    a2 = v0 + 0;
    a0 = sp + 0;
    a1 = s4 + 0;
    a3 = sp + 32;
    t0 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_08834B8C(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864698;
L_08864698:;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+32));
    if (cnd_) { goto L_088646B0; }
    goto L_088646A0;
L_088646A0:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = D_08B28EEC - (-28948);
    if (cnd_) { goto L_0886473C; }
    goto L_088646B0;
L_088646B0:;
    fcc = FCMP(f21, f23, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+4)); goto L_088645D8; }
    goto L_088646C0;
L_088646C0:;
    a1 = LD_U8(s0+20);
    goto L_088646C4;
L_088646C4:;
    v1 = s5 + 1;
    s5 = v1 & 0xff;
    v0 = a1 & 0xff;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08864584; }
    goto L_088646DC;
L_088646DC:;
    a0 = LD32(sp+36);
    v1 = D_08B28EE4 - (-28956);
    v0 = LD_U16(v1-28956);
    v1 = a0 + 1;
    v1 = v1 & 0xffff;
    v0 = v1 < v0;
    cnd_ = v0 != 0;
    ST32(sp+36, v1);
    if (cnd_) { goto L_08864520; }
    goto L_088646FC;
L_088646FC:;
    sp = sp + 128;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
L_0886473C:;
    a0 = LD_U8(v0-28948);
    v0 = 255;
    v1 = a0 & 0xff;
    cnd_ = v1 == v0;
    a1 = D_08B28EF0 - (-28944);
    if (cnd_) { goto L_08864770; }
    goto L_08864750;
L_08864750:;
    v0 = LD32(a1-28944);
    v1 = v1 << 2;
    a0 = a0 + 1;
    v1 = v1 + v0;
    v0 = D_08B28EEC - (-28948);
    ST16(v1+2, s5);
    ST16(v1, s7);
    ST8(v0-28948, a0);
    goto L_08864770;
L_08864770:;
    v1 = D_08B28EE4 - (-28956);
    v0 = LD_U16(v1-28956);
    a1 = 1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088647CC; }
    goto L_08864784;
L_08864784:;
    a0 = D_08B28EE8 - (-28952);
    a3 = LD32(a0-28952);
    a2 = v0 + 0;
    v0 = v1 << 1;
    goto L_08864794;
L_08864794:;
    v0 = v0 + a3;
    a0 = LD_U16(v0);
    v1 = v1 + 1;
    v1 = v1 & 0xffff;
    a0 = s2 ^ a0;
    v0 = v1 < a2;
    cnd_ = v0 == 0;
    if (a0 == 0) a1 = 0;
    if (cnd_) { goto L_088647C4; }
    goto L_088647B4;
L_088647B4:;
    cnd_ = a1 != 0;
    v0 = v1 << 1;
    if (cnd_) { goto L_08864794; }
    goto L_088647BC;
L_088647BC:;
    a1 = LD_U8(s0+20);
    goto L_088646C4;
L_088647C4:;
    cnd_ = a1 == 0;
    if (cnd_) { a1 = LD_U8(s0+20); goto L_088646C4; }
    goto L_088647CC;
L_088647CC:;
    v0 = LD_U8(s1+20);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088646C0; }
    goto L_088647D8;
L_088647D8:;
    v1 = D_08B28EF0 - (-28944);
    a3 = LD32(s1+16);
    t0 = LD32(v1-28944);
    a2 = v0 + 0;
    v0 = a1 << 3;
    goto L_088647EC;
L_088647EC:;
    v0 = v0 + a3;
    v1 = LD_U16(v0);
    cnd_ = v1 == s7;
    a0 = a1 + 1;
    if (cnd_) { goto L_08864814; }
    goto L_088647FC;
L_088647FC:;
    a1 = a0 & 0xff;
    v0 = a1 < a2;
    cnd_ = v0 != 0;
    v0 = a1 << 3;
    if (cnd_) { goto L_088647EC; }
    goto L_0886480C;
L_0886480C:;
    a1 = LD_U8(s0+20);
    goto L_088646C4;
L_08864814:;
    a0 = D_08B28EEC - (-28948);
    v1 = LD_U8(a0-28948);
    v0 = 255;
    a0 = v1 & 0xff;
    cnd_ = a0 == v0;
    v0 = a0 << 2;
    if (cnd_) { goto L_088646C0; }
    goto L_0886482C;
L_0886482C:;
    v0 = v0 + t0;
    ST16(v0+2, a1);
    v1 = v1 + 1;
    a1 = D_08B28EEC - (-28948);
    ST16(v0, s2);
    ST8(a1-28948, v1);
    goto L_088646C0;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08864848 */
rv_t func_08864848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08864848:;
    t0 = D_08B28EE4 - (-28956);
    v0 = LD_U16(t0-28956);
    v1 = D_08B15B90 - (23440);
    a1 = LD32(v1+23440);
    a2 = v0 + 1;
    v0 = v0 & 0xffff;
    a3 = v0 << 1;
    v0 = v0 < a1;
    a0 = a0 & 0xffff;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0886488C; }
    goto L_08864874;
L_08864874:;
    v0 = D_08B28EE8 - (-28952);
    v1 = LD32(v0-28952);
    ST16(t0-28956, a2);
    a1 = 1;
    v1 = a3 + v1;
    ST16(v1, a0);
    goto L_0886488C;
L_0886488C:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08864894 */
rv_t func_08864894(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864894:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = a0 + 0;
    cnd_ = a1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088648C0; }
    goto L_088648AC;
L_088648AC:;
    v0 = LD32(a0+8);
    a1 = (v0 >> 2) & 0x1;
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a1 < 0x1u; goto L_088648C0; }
    goto L_088648C0;
L_088648C0:;
    v1 = LD32(v1);
    v0 = LD32(v1+116);
    t_ = v0;
    a1 = a2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088648D0;
L_088648D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088648DC */
rv_t func_088648DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088648DC:;
    sp = sp - 64;
    s2 = a1 & 0xff;
    v1 = LD32(a0+64);
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 == s2;
    s1 = a0 + 0;
    if (cnd_) { goto L_08864974; }
    goto L_08864908;
L_08864908:;
    v0 = LD_U8(a0+68);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08864968; }
    goto L_08864914;
L_08864914:;
    s3 = D_08B20494 - (1172);
    v1 = LD32(s1+72);
    goto L_0886491C;
L_0886491C:;
    v0 = s0 << 2;
    a0 = s3 + 1172;
    v0 = v0 + v1;
    v1 = LDU32(v0);
    STU32(sp, v1);
    a2 = s2 + 0;
    v0 = LD32(sp);
    a1 = v0 + 0;
    ST32(sp+16, v0);
    func_08804950(a0, a1, a2);
    goto L_0886494C;
L_0886494C:;
    v1 = s0 + 1;
    v0 = LD_U8(s1+68);
    s0 = v1 & 0xff;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+72); goto L_0886491C; }
    goto L_08864964;
L_08864964:;
    v1 = LD32(s1+64);
    goto L_08864968;
L_08864968:;
    v0 = v1 + 0;
    v0 = (v0 & ~(0x1u << 1)) | ((s2 & 0x1) << 1);
    ST32(s1+64, v0);
    goto L_08864974;
L_08864974:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08864990 */
u64 func_08864990(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864990:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD_U8(a0+68);
    v1 = LD32(a0+72);
    s1 = 0 < v0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088649E4; }
    goto L_088649B8;
L_088649B8:;
    v1 = LD32(s0+64);
    goto L_088649BC;
L_088649BC:;
    v0 = s1 + 0;
    ST32(s0+72, 0);
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST8(s0+68, 0);
    ST32(s0+64, v1);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088649E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088649EC;
L_088649EC:;
    v1 = LD32(s0+64);
    goto L_088649BC;
}

/* 088649F4 */
rv_t func_088649F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088649F4:;
    sp = sp - 48;
    s0 = a0 + 0;
    a0 = 8;
    ST32(s0+20, a1);
    ST32(s0+28, a3);
    ST32(s0+32, 0);
    ST32(s0+36, FBITS(f14));
    s3 = a2 + 0;
    a2 = 0 + 0;
    s2 = a3 + 0;
    a3 = 0 + 0;
    s1 = a1 + 0;
    a1 = 24;
    f22 = f12;
    f21 = f14;
    f20 = f13;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08864A58;
L_08864A58:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_08864A90; }
    goto L_08864A64;
L_08864A64:;
    v0 = LD32(v0+24);
    ST32(v0+20, FBITS(f21));
    ST32(v0, s1);
    ST32(v0+4, s3);
    ST32(v0+8, s2);
    ST32(v0+12, FBITS(f22));
    ST32(v0+16, FBITS(f20));
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864A90;
L_08864A90:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08864AB8 */
rv_t func_08864AB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864AB8:;
    sp = sp - 16;
    a1 = 3;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864AD4;
L_08864AD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08864AE0 */
u32 func_08864AE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864AE0:;
    sp = sp - 16;
    v0 = 0 + 0;
    v1 = LD32(a0+16);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08864B00; }
    goto L_08864AFC;
L_08864AFC:;
    v0 = LD32(a0+12);
    goto L_08864B00;
L_08864B00:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08864B44; }
    goto L_08864B08;
L_08864B08:;
    v0 = LD32(s0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08864B48; }
    goto L_08864B18;
L_08864B18:;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s0+12); goto L_08864B20; }
    goto L_08864B20;
L_08864B20:;
    a0 = D_08B3071C - (1820);
    a0 = a0 + 1820;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08864B30;
L_08864B30:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08864B44; }
    goto L_08864B38;
L_08864B38:;
    a0 = LD32(v0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08864B58; }
    goto L_08864B44;
L_08864B44:;
    goto L_08864B48;
L_08864B48:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08864B58:;
    v0 = func_088EDEC4(a0, 0, 0, 0);
    goto L_08864B60;
L_08864B60:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08864B44; }
    goto L_08864B6C;
L_08864B6C:;
    v0 = LD32(s0+8);
    ST32(s0+12, v1);
    v0 = (v0 & ~(0x1u << 10)) | ((0 & 0x1) << 10);
    ST32(s0+8, v0);
    ST32(s0+16, 0);
    v0 = LD32(s0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    v1 = LD32(v0+120);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864B98;
L_08864B98:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0887424C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864BA8;
L_08864BA8:;
    a1 = 1;
    goto L_08864B44;
}

/* 08864BB0 */
rv_t func_08864BB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864BB0:;
    sp = sp - 16;
    ST32(a0+44, a1);
    v0 = LD32(a0);
    v1 = LD32(v0+120);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864BCC;
L_08864BCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08864BD8 */
rv_t func_08864BD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08864BD8:;
    sp = sp - 32;
    s4 = a2 + 0;
    a2 = 0 + 0;
    s3 = a1 + 0;
    a3 = LD32(a0);
    v0 = LD32(a1+36);
    v1 = LD32(a3-12);
    v1 = a0 + v1;
    a1 = LD32(v1+4);
    cnd_ = v0 == a1;
    s1 = a0 + 0;
    if (cnd_) { goto L_08864CA8; }
    goto L_08864C1C;
L_08864C1C:;
    v0 = LD32(a0+8);
    v1 = (v0 >> 12) & 0x1;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08864CAC; }
    goto L_08864C30;
L_08864C30:;
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_08864CB0; }
    goto L_08864C38;
L_08864C38:;
    v0 = LD32(a0+4);
    s2 = LD32(v0+16);
    cnd_ = s2 == 0;
    if (cnd_) {  goto L_08864CB0; }
    goto L_08864C48;
L_08864C48:;
    v0 = LD32(a3+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864C54;
L_08864C54:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864C68;
L_08864C68:;
    v1 = LD32(s2);
    a2 = v0 + 0;
    a0 = s2 + 0;
    v0 = LD32(v1+4);
    a1 = s0 + 0;
    a3 = s3 + 0;
    t_ = v0;
    t0 = s4 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864C88;
L_08864C88:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08864CA8; }
    goto L_08864C90;
L_08864C90:;
    v0 = LD32(s1);
    a2 = 1;
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    ST32(s4+4, v0);
    goto L_08864CA8;
L_08864CA8:;
    goto L_08864CAC;
L_08864CAC:;
    goto L_08864CB0;
L_08864CB0:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08864CCC */
void func_08864CCC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864CCC:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864CF0;
L_08864CF0:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 13;
    t0 = 68;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08864D0C;
L_08864D0C:;
    a0 = s2 + 0;
    func_08864D34(a0);
    goto L_08864D14;
L_08864D14:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_08864D1C;
L_08864D1C:;
    sp = sp + 16;
    return;
}

/* 08864D34 */
void func_08864D34(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08864D34:;
    sp = sp - 112;
    v0 = D_08AEBE88 - (-16760);
    a1 = 0 + 0;
    a2 = 15;
    a3 = 0 + 0;
    t0 = 128;
    t1 = 1;
    t2 = 2;
    s0 = a0 + 0;
    f20 = BITSF(0);
    f12 = BITSF(LD32(v0-16760));
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864D74;
L_08864D74:;
    v0 = D_08AEBE8C - (-16756);
    f21 = BITSF(LD32(v0-16756));
    a0 = s0 + 0;
    a1 = 0 + 0;
    f12 = f21;
    a2 = 11;
    a3 = 16;
    t0 = 96;
    t1 = 1;
    t2 = 2;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864DA0;
L_08864DA0:;
    v0 = D_08AEBE90 - (-16752);
    f13 = BITSF(LD32(v0-16752));
    f14 = f21;
    t3 = 2;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 28;
    t0 = 32;
    t1 = 8;
    t2 = 1;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_08864DD4;
L_08864DD4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 32;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864DF8;
L_08864DF8:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 36;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864E1C;
L_08864E1C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 4;
    a3 = 40;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864E40;
L_08864E40:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 44;
    t0 = 32;
    t1 = 1;
    t2 = 0 + 0;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864E64;
L_08864E64:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 48;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864E88;
L_08864E88:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 52;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864EAC;
L_08864EAC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 56;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864ED0;
L_08864ED0:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 60;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864EF4;
L_08864EF4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 2;
    a3 = 64;
    t0 = 16;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864F18;
L_08864F18:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 66;
    t0 = 8;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08864F3C;
L_08864F3C:;
    sp = sp + 112;
    return;
}

/* 08864F54 */
rv_t func_08864F54(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08864F54:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 102;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08864F80;
L_08864F80:;
    s1 = s1 & 0xff;
    a0 = LD32(v0+24);
    v1 = 0 < s1;
    a2 = 1;
    ST8(a0, v1);
    v1 = 2;
    a0 = v0 + 0;
    ST32(v0, v1);
    a1 = 1;
    a3 = LD32(s0);
    v1 = LD32(a3-12);
    v1 = s0 + v1;
    a3 = LD32(v1+4);
    ST32(v0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864FBC;
L_08864FBC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+124);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08864FD0;
L_08864FD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08864FE4 */
rv_t func_08864FE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08864FE4:;
    sp = sp - 32;
    v0 = 999;
    s5 = a2 + 0;
    s3 = a1 + 0;
    s1 = a3 & 0xff;
    s0 = a0 + 0;
    v1 = LD32(a0+48);
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0886504C; }
    goto L_08865024;
L_08865024:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886504C:;
    v0 = 129;
    a0 = 130;
    if (s1 == 0) a0 = v0;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865068;
L_08865068:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08865024; }
    goto L_08865074;
L_08865074:;
    s4 = LD32(v0+24);
    cnd_ = s4 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08865024; }
    goto L_08865080;
L_08865080:;
    ST32(s0+48, s3);
    a0 = s0 + 0;
    ST32(s0+52, s5);
    func_088642A4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08865090;
L_08865090:;
    cnd_ = s1 == 0;
    a0 = LD32(s0+4);
    if (cnd_) { goto L_08865110; }
    goto L_08865098;
L_08865098:;
    a1 = 3;
    v0 = LD32(a0);
    ST32(s0+56, v0);
    { rv_t r_ = func_088BA5D4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088650A8;
L_088650A8:;
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    a1 = s3 + 0;
    a2 = 1;
    { u64 r_ = func_08AAAC7C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088650BC;
L_088650BC:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s4+4, s5); goto L_088650E0; }
    goto L_088650C4;
L_088650C4:;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_088650D4; }
    goto L_088650D0;
L_088650D0:;
    a1 = LD32(v0+8);
    goto L_088650D4;
L_088650D4:;
    a0 = LD32(s0+4);
    func_088BAEAC(a0, a1);
    goto L_088650DC;
L_088650DC:;
    ST32(s4+4, s5);
    goto L_088650E0;
L_088650E0:;
    a1 = s2 + 0;
    a2 = 2;
    ST32(s4, s3);
    v0 = LD32(s2+28);
    v0 = v0 | 0x1;
    ST32(s2+28, v0);
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865108;
L_08865108:;
    a0 = 1;
    goto L_08865024;
L_08865110:;
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865118;
L_08865118:;
    ST32(s4+4, s5);
    goto L_088650E0;
}

/* 08865120 */
rv_t func_08865120(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08865120:;
    sp = sp - 32;
    v0 = 999;
    s6 = t0 + 0;
    t0 = 0 + 0;
    s4 = a1 + 0;
    a1 = 36;
    s3 = a3 + 0;
    a3 = 0 + 0;
    s2 = a0 + 0;
    s0 = a2 + 0;
    a2 = 0 + 0;
    v1 = LD32(a0+48);
    cnd_ = v1 == v0;
    a0 = 131;
    if (cnd_) { goto L_088651A4; }
    goto L_08865178;
L_08865178:;
    v0 = t0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088651A4:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088651AC;
L_088651AC:;
    s5 = v0 + 0;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08865178; }
    goto L_088651B8;
L_088651B8:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08865178; }
    goto L_088651C4;
L_088651C4:;
    a0 = LD32(s2+4);
    ST32(s2+48, s4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088651D0;
L_088651D0:;
    f0 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    v0 = s1 + 8;
    ST32(v0+8, FBITS(f0));
    a1 = s5 + 0;
    a2 = 2;
    ST32(v0+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    v0 = LD32(s3);
    ST32(s1, s4);
    ST32(s1+20, v0);
    v1 = LD32(s3+4);
    ST32(s1+4, s6);
    ST32(s1+24, v1);
    v0 = LD32(s3+8);
    ST32(s1+28, v0);
    v1 = LD32(s3+12);
    ST32(s1+32, v1);
    v0 = LD32(s5+28);
    v0 = v0 | 0x1;
    ST32(s5+28, v0);
    v1 = LD32(s2);
    a0 = LD32(v1-12);
    a0 = s2 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865238;
L_08865238:;
    t0 = 1;
    goto L_08865178;
}

/* 08865240 */
rv_t func_08865240(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08865240:;
    sp = sp - 32;
    v0 = 999;
    s6 = a2 + 0;
    a2 = 0 + 0;
    s5 = a1 + 0;
    a1 = 24;
    s4 = a3 + 0;
    a3 = 0 + 0;
    s1 = t0 + 0;
    t0 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+48);
    cnd_ = v1 == v0;
    a0 = 132;
    if (cnd_) { goto L_088652C4; }
    goto L_08865298;
L_08865298:;
    v0 = t0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088652C4:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088652CC;
L_088652CC:;
    s3 = v0 + 0;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08865298; }
    goto L_088652D8;
L_088652D8:;
    s2 = LD32(v0+24);
    cnd_ = s2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08865298; }
    goto L_088652E4;
L_088652E4:;
    a0 = LD32(s0+4);
    ST32(s0+48, s5);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088652F0;
L_088652F0:;
    f1 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    v1 = s2 + 12;
    ST32(s2+12, FBITS(f0));
    a1 = s3 + 0;
    a2 = 2;
    ST32(v1+8, FBITS(f1));
    ST32(s2, s5);
    ST32(s2+4, s6);
    ST32(s2+8, s4);
    ST32(v1+4, FBITS(f2));
    v0 = LD32(s3+28);
    v0 = v0 | 0x1;
    ST32(s3+28, v0);
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886533C;
L_0886533C:;
    t0 = 1;
    goto L_08865298;
}

/* 08865344 */
rv_t func_08865344(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08865344:;
    sp = sp - 64;
    s1 = 999;
    v1 = 0 + 0;
    v0 = LD32(a0+48);
    cnd_ = v0 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_08865508; }
    goto L_0886536C;
L_0886536C:;
    a0 = 133;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865380;
L_08865380:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08865508; }
    goto L_0886538C;
L_0886538C:;
    t0 = LD32(s0);
    v1 = D_08B28E68 - (-29080);
    v0 = LD32(t0-12);
    v0 = s0 + v0;
    a3 = LD32(v0+4);
    cnd_ = a3 == s1;
    a0 = v1 - 29080;
    if (cnd_) { goto L_088654A4; }
    goto L_088653A8;
L_088653A8:;
    v0 = LD32(a0+4);
    v1 = LD32(v1-29080);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088653F8; }
    goto L_088653CC;
L_088653CC:;
    a0 = LD32(a2);
    goto L_088653D0;
L_088653D0:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08865538; }
    goto L_088653E8;
L_088653E8:;
    a2 = LD32(a2+4);
    goto L_088653EC;
L_088653EC:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_088653D0; }
    goto L_088653F4;
L_088653F4:;
    a1 = 0 + 0;
    goto L_088653F8;
L_088653F8:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s0+8); goto L_088654A8; }
    goto L_08865400;
L_08865400:;
    v1 = LD32(a1+100);
    cnd_ = v1 == 0;
    a1 = v1 + 280;
    if (cnd_) { goto L_088654A4; }
    goto L_0886540C;
L_0886540C:;
    v0 = LD32(t0+44);
    a0 = s0 + 0;
    {v[112]=BITSF(LD32(v1+(292)));}
    {v[113]=BITSF(LD32(v1+(296)));}
    {v[114]=BITSF(LD32(v1+(300)));}
    {v[115]=BITSF(LD32(v1+(304)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;v[96]=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=v[96];float t0=v[90];float d0=s0-t0;v[96]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    t_ = v0;
    {ST32(sp+(32),FBITS(v[106]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865490;
L_08865490:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088654A4;
L_088654A4:;
    v1 = LD32(s0+8);
    goto L_088654A8;
L_088654A8:;
    v0 = 999;
    ST32(s0+48, v0);
    v1 = (v1 >> 14) & 0x1;
    cnd_ = v1 == 0;
    ST32(s0+52, 0);
    if (cnd_) { goto L_08865524; }
    goto L_088654BC;
L_088654BC:;
    a0 = LD32(s0+4);
    a1 = LD32(s0+56);
    { rv_t r_ = func_088BA5D4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088654C8;
L_088654C8:;
    a0 = LD32(s0+4);
    a1 = (u32)-1;
    func_088BAEAC(a0, a1);
    goto L_088654D4;
L_088654D4:;
    a0 = s0 + 0;
    goto L_088654D8;
L_088654D8:;
    a1 = 0 + 0;
    func_088642A4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088654E0;
L_088654E0:;
    v0 = LD32(s2+28);
    a1 = s2 + 0;
    a2 = 2;
    v0 = v0 | 0x1;
    ST32(s2+28, v0);
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865504;
L_08865504:;
    v1 = 1;
    goto L_08865508;
L_08865508:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08865524:;
    a0 = LD32(s0+4);
    a1 = 0 + 0;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865530;
L_08865530:;
    a0 = s0 + 0;
    goto L_088654D8;
L_08865538:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088653E8; }
    goto L_08865544;
L_08865544:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_088653EC; }
    goto L_08865550;
L_08865550:;
    goto L_088653F8;
}

/* 08865558 */
void func_08865558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08865558:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088655A4; }
    goto L_0886557C;
L_0886557C:;
    v1 = LD32(s0);
    goto L_08865580;
L_08865580:;
    a0 = s0 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865590;
L_08865590:;
    sp = sp + 16;
    return;
L_088655A4:;
    { rv_t r_ = func_088BAB18(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088655AC;
L_088655AC:;
    v1 = LD32(s0);
    goto L_08865580;
}

/* 088655B4 */
rv_t func_088655B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088655B4:;
    sp = sp - 48;
    s4 = a2 + 0;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s0 = a3 & 0xff;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088656BC; }
    goto L_088655EC;
L_088655EC:;
    a2 = 0 + 0;
    goto L_088655F0;
L_088655F0:;
    a3 = 0 + 0;
    a0 = 135;
    cnd_ = s0 != 0;
    a1 = 28;
    if (cnd_) { goto L_08865620; }
    goto L_08865600;
L_08865600:;
    goto L_08865604;
L_08865604:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08865620:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865628;
L_08865628:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08865600; }
    goto L_08865630;
L_08865630:;
    s0 = LD32(v0+24);
    a1 = s4 + 0;
    cnd_ = s0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08865600; }
    goto L_08865640;
L_08865640:;
    f2 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    ST32(s0+8, FBITS(f2));
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886565C;
L_0886565C:;
    v0 = LD32(sp);
    a0 = s1 + 0;
    a1 = 1;
    ST32(s0+12, v0);
    a2 = 1;
    v0 = LD32(sp+4);
    ST32(s0+16, v0);
    v1 = LD32(sp+8);
    ST32(s0+20, v1);
    v0 = LD32(sp+12);
    ST32(s0+24, v0);
    v1 = LD32(s3);
    a3 = LD32(s1+28);
    v0 = LD32(v1-12);
    a3 = a3 | 0x1;
    v1 = 2;
    v0 = s3 + v0;
    t0 = LD32(v0+4);
    ST32(s1, v1);
    ST32(s1+4, t0);
    ST32(s1+28, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088656B4;
L_088656B4:;
    goto L_08865604;
L_088656BC:;
    { rv_t r_ = func_088BAB18(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088656C4;
L_088656C4:;
    a0 = LD32(s3+4);
    a1 = s4 + 0;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088656D0;
L_088656D0:;
    a2 = 0 + 0;
    goto L_088655F0;
}

/* 088656D8 */
rv_t func_088656D8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088656D8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08865758; }
    goto L_0886570C;
L_0886570C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08865730; }
    goto L_08865720;
L_08865720:;
    v0 = D_08B28EF4 - (-28940);
    a0 = LD32(v0-28940);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08865748; }
    goto L_08865730;
L_08865730:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08865748:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865750;
L_08865750:;
    goto L_08865730;
L_08865758:;
    s3 = D_08B28EF4 - (-28940);
    s0 = s3 - 28940;
    a0 = 128;
    v0 = 32;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865770;
L_08865770:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28940, v0);
    if (cnd_) { goto L_0886579C; }
    goto L_08865780;
L_08865780:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08865788;
L_08865788:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08865788; }
    goto L_0886579C;
L_0886579C:;
    v0 = s3 - 28940;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0886570C;
}

/* 088657AC */
rv_t func_088657AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088657AC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088656D8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088657C0;
L_088657C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088657CC */
rv_t func_088657CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088657CC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088656D8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088657E0;
L_088657E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088657EC */
void func_088657EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088657EC:;
    sp = sp - 32;
    s3 = D_08B28F04 - (-28924);
    s2 = s3 - 28924;
    s1 = a0 + 0;
    a2 = LD32(a1);
    ST32(a0, a2);
    a0 = 12;
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    v0 = s1 + v0;
    ST32(v0, v1);
    a2 = LD32(s1);
    t0 = LD32(a1+8);
    a3 = LD32(s2+4);
    v0 = LD32(a2-16);
    a3 = a3 - 1;
    v0 = s1 + v0;
    ST32(v0, t0);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 7;
    v0 = s1 + v0;
    ST16(v0+8, v1);
    a1 = LD32(s1);
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & a3;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865874;
L_08865874:;
    a0 = LD32(s3-28924);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    v0 = LD32(s1);
    ST8(s1+4, 0);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+8);
    v0 = v0 | 0x1;
    ST32(v1+8, v0);
    a0 = LD32(s1);
    v0 = LD32(a0-12);
    s1 = s1 + v0;
    ST32(s1+4, 0);
    sp = sp + 32;
    return;
}

/* 088658E8 */
void func_088658E8(u32 a0, u32 a1, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088658E8:;
    sp = sp - 16;
    t1 = a0 + 0;
    t0 = D_08B28F04 - (-28924);
    s0 = t0 - 28924;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a2 = LD32(a0);
    a3 = LD32(a1+8);
    a0 = LD32(s0+4);
    v0 = LD32(a2-16);
    a1 = LD32(t0-28924);
    a0 = a0 - 1;
    v0 = t1 + v0;
    ST32(v0, a3);
    v1 = LD32(t1);
    v0 = LD32(v1-16);
    v0 = t1 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a0;
    a2 = v1 << 2;
    a1 = a2 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_0886597C; }
    goto L_08865960;
L_08865960:;
    v0 = LD32(a0);
    goto L_08865964;
L_08865964:;
    cnd_ = v0 == t1;
    if (cnd_) { v0 = LD32(s0+8); goto L_0886598C; }
    goto L_0886596C;
L_0886596C:;
    t2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08865964; }
    goto L_0886597C;
L_0886597C:;
    sp = sp + 16;
    return;
L_0886598C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0886599C; }
    goto L_08865994;
L_08865994:;
    ST8(a0+8, v0);
    goto L_0886597C;
L_0886599C:;
    cnd_ = t2 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_088659C4; }
    goto L_088659A4;
L_088659A4:;
    v0 = LD32(a0+4);
    ST32(t2+4, v0);
    goto L_088659AC;
L_088659AC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088659B4;
L_088659B4:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_0886597C;
L_088659C4:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_088659AC;
}

/* 088659D4 */
rv_t func_088659D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088659D4:;
    v1 = D_08AF4F88 - (20360);
    sp = sp - 16;
    v1 = v1 + 20360;
    v0 = v1 + 180;
    s0 = a0 + 0;
    a0 = v1 + 384;
    ST32(s0, v1);
    a1 = s0 + 0;
    ST32(s0+84, a0);
    a0 = D_08B28F04 - (-28924);
    a0 = a0 - 28924;
    ST32(s0+8, v0);
    func_08AAE768(a0, a1, t1, t2, t3);
    goto L_08865A14;
L_08865A14:;
    a1 = D_08AF5150 - (20816);
    s1 = s0 + 8;
    a1 = a1 + 20816;
    a0 = s1 + 0;
    a1 = a1 + 12;
    s0 = s0 + 84;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08865A30;
L_08865A30:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865A38;
L_08865A38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08865A4C */
rv_t func_08865A4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08865A4C:;
    v1 = D_08AF4F88 - (20360);
    sp = sp - 16;
    v1 = v1 + 20360;
    v0 = v1 + 180;
    s0 = a0 + 0;
    a0 = v1 + 384;
    ST32(s0, v1);
    a1 = s0 + 0;
    ST32(s0+84, a0);
    a0 = D_08B28F04 - (-28924);
    a0 = a0 - 28924;
    ST32(s0+8, v0);
    s2 = s0 + 84;
    func_08AAE768(a0, a1, t1, t2, t3);
    goto L_08865A94;
L_08865A94:;
    a1 = D_08AF5150 - (20816);
    s1 = s0 + 8;
    a1 = a1 + 20816;
    a1 = a1 + 12;
    a0 = s1 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08865AAC;
L_08865AAC:;
    a0 = s2 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865AB4;
L_08865AB4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08865ABC;
L_08865ABC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08865AD4 */
rv_t func_08865AD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08865AD4:;
    sp = sp - 64;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a2 = LD32(a0);
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    cnd_ = a1 == 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08865CF4; }
    goto L_08865B24;
L_08865B24:;
    s2 = LD32(a1);
    goto L_08865B28;
L_08865B28:;
    v0 = LD32(a0-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08865CE0; }
    goto L_08865B3C;
L_08865B3C:;
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v0 = D_08AEBE9C - (-16740);
    if (cnd_) { goto L_08865CCC; }
    goto L_08865B50;
L_08865B50:;
    f25 = BITSF(LD32(v0-16740));
    goto L_08865B54;
L_08865B54:;
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v0 = D_08AEBE9C - (-16740);
    if (cnd_) { goto L_08865CB8; }
    goto L_08865B68;
L_08865B68:;
    f24 = BITSF(LD32(v0-16740));
    goto L_08865B6C;
L_08865B6C:;
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v0 = D_08AEBEA0 - (-16736);
    if (cnd_) { goto L_08865CA4; }
    goto L_08865B80;
L_08865B80:;
    f23 = BITSF(LD32(v0-16736));
    goto L_08865B84;
L_08865B84:;
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v0 = D_08AEBEA4 - (-16732);
    if (cnd_) { goto L_08865C90; }
    goto L_08865B98;
L_08865B98:;
    f22 = BITSF(LD32(v0-16732));
    goto L_08865B9C;
L_08865B9C:;
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v0 = D_08AEBE9C - (-16740);
    if (cnd_) { goto L_08865C7C; }
    goto L_08865BB0;
L_08865BB0:;
    f21 = BITSF(LD32(v0-16740));
    goto L_08865BB4;
L_08865BB4:;
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    v0 = D_08AEBEA8 - (-16728);
    if (cnd_) { goto L_08865C6C; }
    goto L_08865BC8;
L_08865BC8:;
    f20 = BITSF(LD32(v0-16728));
    goto L_08865BCC;
L_08865BCC:;
    a0 = s1 + 0;
    a1 = 5;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865BD8;
L_08865BD8:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865BE4;
L_08865BE4:;
    a1 = s3 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865BF0;
L_08865BF0:;
    a0 = s1 + 0;
    f12 = f25;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865BFC;
L_08865BFC:;
    a0 = s1 + 0;
    f12 = f24;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865C08;
L_08865C08:;
    a0 = s1 + 0;
    f12 = f23;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865C14;
L_08865C14:;
    a0 = s1 + 0;
    f12 = f22;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865C20;
L_08865C20:;
    a0 = s1 + 0;
    f12 = f21;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865C2C;
L_08865C2C:;
    a0 = s1 + 0;
    f12 = f20;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865C38;
L_08865C38:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08865C6C:;
    f0 = func_088BB3A0(a0);
    goto L_08865C74;
L_08865C74:;
    f20 = f0;
    goto L_08865BCC;
L_08865C7C:;
    a1 = 0 + 0;
    f0 = func_088BB524(a0, a1);
    goto L_08865C84;
L_08865C84:;
    a2 = LD32(s0);
    f21 = f0;
    goto L_08865BB4;
L_08865C90:;
    f0 = func_088BB34C(a0);
    goto L_08865C98;
L_08865C98:;
    a2 = LD32(s0);
    f22 = f0;
    goto L_08865B9C;
L_08865CA4:;
    f0 = func_088BB3F4(a0);
    goto L_08865CAC;
L_08865CAC:;
    a2 = LD32(s0);
    f23 = f0;
    goto L_08865B84;
L_08865CB8:;
    f0 = func_088BB308(a0);
    goto L_08865CC0;
L_08865CC0:;
    a2 = LD32(s0);
    f24 = f0;
    goto L_08865B6C;
L_08865CCC:;
    f0 = func_088BB2D0(a0);
    goto L_08865CD4;
L_08865CD4:;
    a2 = LD32(s0);
    f25 = f0;
    goto L_08865B54;
L_08865CE0:;
    v0 = func_088BAFE0(a0);
    goto L_08865CE8;
L_08865CE8:;
    a2 = LD32(s0);
    s3 = v0 + 0;
    goto L_08865B3C;
L_08865CF4:;
    v0 = LD32(v0+8);
    v1 = 2;
    s2 = 0 + 0;
    v0 = (v0 >> 1) & 0x1;
    if (v0 == 0) s2 = v1;
    goto L_08865B28;
}

/* 08865D0C */
rv_t func_08865D0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08865D0C:;
    sp = sp - 64;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865D34;
L_08865D34:;
    v1 = LD32(sp);
    v0 = v1 < 0x2u;
    cnd_ = v0 != 0;
    s2 = v1 < 0x1u;
    if (cnd_) { goto L_08865F14; }
    goto L_08865D44;
L_08865D44:;
    v0 = v1 < 0x5u;
    cnd_ = v0 != 0;
    a1 = sp + 8;
    if (cnd_) { goto L_08865EFC; }
    goto L_08865D50;
L_08865D50:;
    a1 = sp + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865D5C;
L_08865D5C:;
    a1 = LD32(sp+4);
    goto L_08865D60;
L_08865D60:;
    a2 = s2 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08866188(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865D6C;
L_08865D6C:;
    v0 = LD32(sp);
    v0 = v0 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_08865D94; }
    goto L_08865D7C;
L_08865D7C:;
    goto L_08865D80;
L_08865D80:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08865D94:;
    a1 = sp + 12;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865D9C;
L_08865D9C:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    a1 = LD32(sp+12);
    if (cnd_) { goto L_08865EEC; }
    goto L_08865DB4;
L_08865DB4:;
    a1 = sp + 16;
    goto L_08865DB8;
L_08865DB8:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865DC0;
L_08865DC0:;
    a0 = s1 + 0;
    a1 = sp + 20;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865DCC;
L_08865DCC:;
    a0 = s1 + 0;
    a1 = sp + 24;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865DD8;
L_08865DD8:;
    a0 = s1 + 0;
    a1 = sp + 28;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865DE4;
L_08865DE4:;
    a0 = s1 + 0;
    a1 = sp + 32;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865DF0;
L_08865DF0:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    f12 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_08865EDC; }
    goto L_08865E08;
L_08865E08:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    f12 = BITSF(LD32(sp+20));
    if (cnd_) { goto L_08865ECC; }
    goto L_08865E1C;
L_08865E1C:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    f12 = BITSF(LD32(sp+24));
    if (cnd_) { goto L_08865EBC; }
    goto L_08865E30;
L_08865E30:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    f12 = BITSF(LD32(sp+28));
    if (cnd_) { goto L_08865EAC; }
    goto L_08865E44;
L_08865E44:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    f12 = BITSF(LD32(sp+32));
    if (cnd_) { goto L_08865E9C; }
    goto L_08865E58;
L_08865E58:;
    v0 = LD32(sp);
    goto L_08865E5C;
L_08865E5C:;
    v0 = v0 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08865D80; }
    goto L_08865E68;
L_08865E68:;
    a0 = s1 + 0;
    a1 = sp + 36;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865E74;
L_08865E74:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 == 0;
    f12 = BITSF(LD32(sp+36));
    if (cnd_) { goto L_08865D7C; }
    goto L_08865E8C;
L_08865E8C:;
    { rv_t r_ = func_088BB3B8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865E94;
L_08865E94:;
    goto L_08865D80;
L_08865E9C:;
    { rv_t r_ = func_088BB550(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865EA4;
L_08865EA4:;
    v0 = LD32(sp);
    goto L_08865E5C;
L_08865EAC:;
    f0 = func_088BB364(a0, f12);
    goto L_08865EB4;
L_08865EB4:;
    v1 = LD32(s0);
    goto L_08865E44;
L_08865EBC:;
    f0 = func_088BB400(a0, f12);
    goto L_08865EC4;
L_08865EC4:;
    v1 = LD32(s0);
    goto L_08865E30;
L_08865ECC:;
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865ED4;
L_08865ED4:;
    v1 = LD32(s0);
    goto L_08865E1C;
L_08865EDC:;
    func_088BB2EC(a0, f12);
    goto L_08865EE4;
L_08865EE4:;
    v1 = LD32(s0);
    goto L_08865E08;
L_08865EEC:;
    func_088BAFEC(a0, a1);
    goto L_08865EF4;
L_08865EF4:;
    a1 = sp + 16;
    goto L_08865DB8;
L_08865EFC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865F04;
L_08865F04:;
    v0 = LD32(sp+8);
    a1 = 2;
    if (v0 != 0) a1 = 0;
    goto L_08865D60;
L_08865F14:;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08866188(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865F24;
L_08865F24:;
    goto L_08865D80;
}

/* 08865F2C */
rv_t func_08865F2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08865F2C:;
    sp = sp - 64;
    v0 = D_08AF0EE8 - (3816);
    a2 = a1 + 0;
    a3 = LD32(a1);
    v1 = (u32)-1;
    v0 = v0 + 3816;
    a1 = sp + 0;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a3);
    ST32(sp+32, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    ST8(sp+40, 0);
    { rv_t r_ = func_08865AD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865F7C;
L_08865F7C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08865F88 */
rv_t func_08865F88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08865F88:;
    v0 = 76;
    return (rv_t){ v0, v1, f0 };
}

/* 08865F90 */
rv_t func_08865F90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08865F90:;
    sp = sp - 64;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    a3 = LD32(a1);
    a2 = a1 + 0;
    v1 = (u32)-1;
    ST32(sp, v0);
    a1 = sp + 0;
    v0 = 1;
    ST32(sp+12, v1);
    ST32(sp+28, a3);
    ST32(sp+32, a2);
    ST8(sp+40, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    { rv_t r_ = func_08865D0C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08865FE4;
L_08865FE4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08865FF0 */
rv_t func_08865FF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08865FF0:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = LD32(a0);
    v1 = LD32(a0-12);
    v1 = s3 + v1;
    v0 = LD32(v1+8);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0-16); goto L_08866064; }
    goto L_0886602C;
L_0886602C:;
    f1 = BITSF(LD32(v1+40));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a0-16); goto L_08866064; }
    goto L_08866044;
L_08866044:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0-16); goto L_08866064; }
    goto L_08866054;
L_08866054:;
    v0 = LD_U8(s3+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886616C; }
    goto L_08866060;
L_08866060:;
    v0 = LD32(a0-16);
    goto L_08866064;
L_08866064:;
    a1 = 68;
    a0 = 90;
    v0 = s3 + v0;
    a2 = LD_U16(v0+8);
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886607C;
L_0886607C:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08866168; }
    goto L_08866084;
L_08866084:;
    a0 = LD32(s3);
    v0 = 1;
    ST8(s3+4, v0);
    v1 = LD32(a0-12);
    s2 = LD32(s4+24);
    s1 = s3 + v1;
    a1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(a1+24);
    t_ = v0;
    s0 = s2 + 16;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088660B0;
L_088660B0:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088660BC;
L_088660BC:;
    v1 = LD32(s1);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088660CC;
L_088660CC:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    ST32(s2+16, FBITS(f2));
    f0 = BITSF(LD32(s1+40));
    ST32(s2+28, FBITS(f0));
    v0 = LD32(s1+8);
    ST32(s2+52, v0);
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+12); goto L_08866100; }
    goto L_08866100;
L_08866100:;
    ST32(s2+32, v0);
    v1 = LD32(s1+20);
    ST32(s2+36, v1);
    v0 = LD32(s1+20);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0886611C; }
    goto L_08866118;
L_08866118:;
    a0 = LD32(s1+28);
    goto L_0886611C;
L_0886611C:;
    ST32(s2+40, a0);
    a1 = s4 + 0;
    a2 = 2;
    f0 = BITSF(LD32(s1+32));
    ST32(s2+44, FBITS(f0));
    f1 = BITSF(LD32(s1+36));
    ST32(s2+48, FBITS(f1));
    v0 = LD32(s1+48);
    ST32(s2+56, v0);
    v1 = LD32(s1+52);
    ST32(s2+60, v1);
    v0 = (u32)(s32)LD_S16(s1+60);
    ST16(s2+64, v0);
    v1 = LD_U8(s1+62);
    ST8(s2+66, v1);
    v0 = LD32(s3);
    a0 = LD32(v0-16);
    a0 = s3 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866168;
L_08866168:;
    goto L_0886616C;
L_0886616C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08866188 */
rv_t func_08866188(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08866188:;
    sp = sp - 32;
    s3 = a2 & 0xff;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_088661CC; }
    goto L_088661C0;
L_088661C0:;
    v0 = LD32(v0);
    v0 = a1 ^ v0;
    a0 = 0 < v0;
    goto L_088661CC;
L_088661CC:;
    cnd_ = a0 == 0;
    s2 = a1 < 0x1u;
    if (cnd_) { goto L_0886622C; }
    goto L_088661D4;
L_088661D4:;
    v0 = LD32(v1-12);
    s1 = s0 + v0;
    a0 = LD32(s1+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0886629C; }
    goto L_088661E8;
L_088661E8:;
    { rv_t r_ = func_088BA5D4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088661F0;
L_088661F0:;
    a0 = LD32(s0);
    v0 = LD32(a0-16);
    v1 = LD32(a0-12);
    v0 = s0 + v0;
    v1 = s0 + v1;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    func_088BB2C4(a0, a1);
    goto L_08866210;
L_08866210:;
    cnd_ = s2 != 0;
    v0 = LD32(s0);
    if (cnd_) { goto L_08866268; }
    goto L_08866218;
L_08866218:;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+8);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v1+8, v0);
    goto L_0886622C;
L_0886622C:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08866250; }
    goto L_08866234;
L_08866234:;
    goto L_08866238;
L_08866238:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08866250:;
    a1 = s2 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_088642DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866260;
L_08866260:;
    goto L_08866238;
L_08866268:;
    a1 = 1;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+8);
    v0 = v0 | 0x2;
    ST32(v1+8, v0);
    a2 = LD32(s0);
    ST8(s0+4, 0);
    a0 = LD32(a2-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0886426C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866294;
L_08866294:;
    goto L_0886622C;
L_0886629C:;
    a0 = a1 + 0;
    { rv_t r_ = func_088BA110(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088662A4;
L_088662A4:;
    ST32(s1+4, v0);
    goto L_088661F0;
}

/* 088662AC */
rv_t func_088662AC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088662AC:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886632C; }
    goto L_088662E0;
L_088662E0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08866304; }
    goto L_088662F4;
L_088662F4:;
    v0 = D_08B28F04 - (-28924);
    a0 = LD32(v0-28924);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0886631C; }
    goto L_08866304;
L_08866304:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886631C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08866324;
L_08866324:;
    goto L_08866304;
L_0886632C:;
    s3 = D_08B28F04 - (-28924);
    s0 = s3 - 28924;
    a0 = 128;
    v0 = 32;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866344;
L_08866344:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28924, v0);
    if (cnd_) { goto L_08866370; }
    goto L_08866354;
L_08866354:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0886635C;
L_0886635C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0886635C; }
    goto L_08866370;
L_08866370:;
    v0 = s3 - 28924;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088662E0;
}

/* 08866380 */
rv_t func_08866380(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08866380:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088662AC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866394;
L_08866394:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088663A0 */
rv_t func_088663A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088663A0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088662AC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088663B4;
L_088663B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088663C0 */
void func_088663C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088663C0:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088663E4;
L_088663E4:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 14;
    t0 = 72;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08866400;
L_08866400:;
    a0 = s2 + 0;
    func_08866428(a0);
    goto L_08866408;
L_08866408:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_08866410;
L_08866410:;
    sp = sp + 16;
    return;
}

/* 08866428 */
void func_08866428(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f12 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08866428:;
    sp = sp - 96;
    s0 = a0 + 0;
    func_08864D34(a0);
    goto L_0886643C;
L_0886643C:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 68;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08866460;
L_08866460:;
    sp = sp + 96;
    return;
}

/* 08866470 */
void func_08866470(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08866470:;
    a3 = LD32(a1);
    sp = sp - 16;
    a2 = a0 + 0;
    f0 = BITSF(0);
    t0 = a0 + 8;
    t1 = a0 + 20;
    ST32(a0, a3);
    v0 = LD32(a3-12);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a0 = 2;
    v1 = LD32(a2);
    a3 = LD32(a1+8);
    v0 = LD32(v1-16);
    v1 = 999;
    v0 = a2 + v0;
    ST32(v0, a3);
    ST32(a2+4, v1);
    ST32(t0+8, FBITS(f0));
    ST32(t0+4, FBITS(f0));
    ST32(t1+8, FBITS(f0));
    ST32(t1+4, FBITS(f0));
    v0 = LD32(a2);
    ST32(a2+32, FBITS(f0));
    s0 = LD32(v0-12);
    ST32(a2+8, FBITS(f0));
    s0 = a2 + s0;
    ST32(a2+20, FBITS(f0));
    { rv_t r_ = func_088BA110(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088664F0;
L_088664F0:;
    ST32(s0+4, v0);
    sp = sp + 16;
    return;
}

/* 08866504 */
rv_t func_08866504(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08866504:;
    sp = sp - 112;
    s2 = sp + 8;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(a0);
    a0 = LD32(a0+4);
    v0 = LD32(v1-12);
    ST32(sp+4, a0);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    v0 = D_08B45A9C - (23196);
    ST32(sp, 0);
    cnd_ = a0 != 0;
    v0 = v0 + 23196;
    if (cnd_) { goto L_08866640; }
    goto L_0886654C;
L_0886654C:;
    f1 = BITSF(LD32(v0));
    goto L_08866550;
L_08866550:;
    v1 = LD32(s1+12);
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    v0 = LD32(s1+8);
    ST32(s2, FBITS(f1));
    a3 = sp + 48;
    a2 = 0 + 0;
    ST32(s2+8, FBITS(f0));
    ST32(s2+4, FBITS(f2));
    f0 = BITSF(LD32(sp+8));
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    f1 = BITSF(LD32(sp+12));
    f2 = BITSF(LD32(s1+32));
    v0 = LD32(s1+16);
    v1 = LD32(s1+20);
    a0 = LD32(s1+24);
    a1 = LD32(s1+28);
    ST32(sp+56, FBITS(f0));
    f0 = BITSF(LD32(sp+16));
    ST32(sp+28, v0);
    ST32(sp+32, v1);
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    ST32(sp+60, FBITS(f1));
    ST32(sp+64, FBITS(f0));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    ST32(sp+36, a0);
    ST32(sp+68, FBITS(f1));
    ST32(sp+40, a1);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+44, FBITS(f2));
    ST32(sp+72, FBITS(f0));
    f1 = BITSF(LD32(sp+28));
    f0 = BITSF(LD32(sp+32));
    ST32(sp+92, FBITS(f2));
    ST32(sp+76, FBITS(f1));
    ST32(sp+80, FBITS(f0));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    goto L_08866600;
L_08866600:;
    v0 = LD_U8(a3);
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x30u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08866600; }
    goto L_08866628;
L_08866628:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08866640:;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866648;
L_08866648:;
    f1 = BITSF(LD32(v0));
    goto L_08866550;
}

/* 08866650 */
rv_t func_08866650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08866650:;
    sp = sp - 64;
    t3 = a0 + 0;
    a3 = sp + 0;
    a2 = 0 + 0;
    goto L_08866664;
L_08866664:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x30u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(a1, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08866664; }
    goto L_08866688;
L_08866688:;
    a0 = LD32(t3);
    a1 = LD32(sp+20);
    a2 = LD32(sp+24);
    a3 = LD32(sp+28);
    t0 = LD32(sp+32);
    t1 = LD32(sp+36);
    t2 = LD32(sp+40);
    f0 = BITSF(LD32(sp+44));
    v0 = LD32(sp+4);
    v1 = LD32(a0-12);
    ST32(t3+8, a1);
    v1 = t3 + v1;
    ST32(t3+4, v0);
    ST32(t3+12, a2);
    ST32(t3+16, a3);
    ST32(t3+20, t0);
    ST32(t3+24, t1);
    ST32(t3+28, t2);
    ST32(t3+32, FBITS(f0));
    a0 = LD32(v1+4);
    cnd_ = a0 != 0;
    a1 = sp + 8;
    if (cnd_) { goto L_088666EC; }
    goto L_088666E0;
L_088666E0:;
    goto L_088666E4;
L_088666E4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088666EC:;
    a2 = 1;
    { rv_t r_ = func_088BB040(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088666F4;
L_088666F4:;
    goto L_088666E4;
}

/* 088666FC */
void func_088666FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088666FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08866734; }
    goto L_08866724;
L_08866724:;
    goto L_08866728;
L_08866728:;
    sp = sp + 16;
    return;
L_08866734:;
    { rv_t r_ = func_088BA884(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886673C;
L_0886673C:;
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[116]=BITSF(LD32(v0+(12)));}
    {v[117]=BITSF(LD32(v0+(16)));}
    {v[118]=BITSF(LD32(v0+(20)));}
    {v[120]=BITSF(LD32(v0+(24)));}
    {v[121]=BITSF(LD32(v0+(28)));}
    {v[122]=BITSF(LD32(v0+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088669BC; }
    goto L_08866778;
L_08866778:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088668FC; }
    goto L_08866788;
L_08866788:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08866820; }
    goto L_088667B0;
L_088667B0:;
    {float s0=v[64];float s1=v[65];float d0=fabsf(s0);float d1=fabsf(s1);v[64]=d0;v[65]=d1;}
    {float s0=v[65];float t0=v[64];float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[64];float s1=v[65];float t0=v[68];float t1=v[69];float d0=s0*t0;float d1=s1*t1;v[64]=d0;v[65]=d1;}
    {float s0=v[65];float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=v[64];float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;v[77]=d0;}
    {float s0=v[77];float t0=v[73];float d0=s0+t0;v[77]=d0;}
    {float s0=v[77];float d0=1.0f/sqrtf(s0);v[77]=d0;}
    {float s0=v[76];float t0=v[77];float d0=s0*t0;v[77]=d0;}
    {float s0=v[77];float d0=asinf(s0)*0.63661977236f;v[78]=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088667FC; }
    goto L_088667EC;
L_088667EC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_088667FC;
L_088667FC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08866840; }
    goto L_0886680C;
L_0886680C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08866840; }
    goto L_0886681C;
L_0886681C:;
    goto L_08866820;
L_08866820:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08866840; }
    goto L_08866834;
L_08866834:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08866840;
L_08866840:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088668D0; }
    goto L_08866860;
L_08866860:;
    {float s0=v[64];float s1=v[65];float d0=fabsf(s0);float d1=fabsf(s1);v[64]=d0;v[65]=d1;}
    {float s0=v[65];float t0=v[64];float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[64];float s1=v[65];float t0=v[68];float t1=v[69];float d0=s0*t0;float d1=s1*t1;v[64]=d0;v[65]=d1;}
    {float s0=v[65];float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=v[64];float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;v[77]=d0;}
    {float s0=v[77];float t0=v[73];float d0=s0+t0;v[77]=d0;}
    {float s0=v[77];float d0=1.0f/sqrtf(s0);v[77]=d0;}
    {float s0=v[76];float t0=v[77];float d0=s0*t0;v[77]=d0;}
    {float s0=v[77];float d0=asinf(s0)*0.63661977236f;v[78]=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088668AC; }
    goto L_0886689C;
L_0886689C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_088668AC;
L_088668AC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088668F0; }
    goto L_088668BC;
L_088668BC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_088668F0; }
    goto L_088668CC;
L_088668CC:;
    goto L_088668D0;
L_088668D0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088668F0; }
    goto L_088668E4;
L_088668E4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_088668F0;
L_088668F0:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08866A74; }
    goto L_088668F8;
L_088668F8:;
    goto L_088668FC;
L_088668FC:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08866990; }
    goto L_08866920;
L_08866920:;
    {float s0=v[64];float s1=v[65];float d0=fabsf(s0);float d1=fabsf(s1);v[64]=d0;v[65]=d1;}
    {float s0=v[65];float t0=v[64];float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[64];float s1=v[65];float t0=v[68];float t1=v[69];float d0=s0*t0;float d1=s1*t1;v[64]=d0;v[65]=d1;}
    {float s0=v[65];float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=v[64];float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;v[77]=d0;}
    {float s0=v[77];float t0=v[73];float d0=s0+t0;v[77]=d0;}
    {float s0=v[77];float d0=1.0f/sqrtf(s0);v[77]=d0;}
    {float s0=v[76];float t0=v[77];float d0=s0*t0;v[77]=d0;}
    {float s0=v[77];float d0=asinf(s0)*0.63661977236f;v[78]=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886696C; }
    goto L_0886695C;
L_0886695C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0886696C;
L_0886696C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088669B0; }
    goto L_0886697C;
L_0886697C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_088669B0; }
    goto L_0886698C;
L_0886698C:;
    goto L_08866990;
L_08866990:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088669B0; }
    goto L_088669A4;
L_088669A4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_088669B0;
L_088669B0:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08866A74; }
    goto L_088669B8;
L_088669B8:;
    goto L_088669BC;
L_088669BC:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08866A50; }
    goto L_088669E0;
L_088669E0:;
    {float s0=v[64];float s1=v[65];float d0=fabsf(s0);float d1=fabsf(s1);v[64]=d0;v[65]=d1;}
    {float s0=v[65];float t0=v[64];float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[64];float s1=v[65];float t0=v[68];float t1=v[69];float d0=s0*t0;float d1=s1*t1;v[64]=d0;v[65]=d1;}
    {float s0=v[65];float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=v[64];float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;v[77]=d0;}
    {float s0=v[77];float t0=v[73];float d0=s0+t0;v[77]=d0;}
    {float s0=v[77];float d0=1.0f/sqrtf(s0);v[77]=d0;}
    {float s0=v[76];float t0=v[77];float d0=s0*t0;v[77]=d0;}
    {float s0=v[77];float d0=asinf(s0)*0.63661977236f;v[78]=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08866A2C; }
    goto L_08866A1C;
L_08866A1C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08866A2C;
L_08866A2C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08866A70; }
    goto L_08866A3C;
L_08866A3C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08866A70; }
    goto L_08866A4C;
L_08866A4C:;
    goto L_08866A50;
L_08866A50:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08866A70; }
    goto L_08866A64;
L_08866A64:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08866A70;
L_08866A70:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_08866A74;
L_08866A74:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s0+(20),FBITS(v[96]));}
    {ST32(s0+(24),FBITS(v[97]));}
    {ST32(s0+(28),FBITS(v[98]));}
    goto L_08866728;
}

/* 08866A8C */
rv_t func_08866A8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08866A8C:;
    sp = sp - 80;
    f1 = BITSF(0);
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    f4 = BITSF(LD32(a0+8));
    fcc = FCMP(f4, f1, 2);
    cnd_ = !fcc;
    f20 = BITSF(LD32(v0-31328));
    if (cnd_) { goto L_08866AE4; }
    goto L_08866ABC;
L_08866ABC:;
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(s0+12)); goto L_08866AE8; }
    goto L_08866AD0;
L_08866AD0:;
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08866BC4; }
    goto L_08866AE4;
L_08866AE4:;
    f2 = BITSF(LD32(s0+12));
    goto L_08866AE8;
L_08866AE8:;
    f3 = BITSF(LD32(s0+16));
    f5 = f20 * f4;
    f2 = f20 * f2;
    f3 = f20 * f3;
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(s0+24));
    f4 = BITSF(LD32(s0+28));
    v1 = LD32(s0);
    f0 = f0 + f5;
    f1 = f1 + f2;
    f4 = f4 + f3;
    v0 = LD32(v1-12);
    ST32(s0+20, FBITS(f0));
    v0 = s0 + v0;
    ST32(s0+24, FBITS(f1));
    ST32(s0+28, FBITS(f4));
    {v[112]=BITSF(LD32(s0+(20)));}
    {v[113]=BITSF(LD32(s0+(24)));}
    {v[114]=BITSF(LD32(s0+(28)));}
    {v[115]=0.63661977236f;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[115];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);v[116]=d0;v[117]=d1;v[118]=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[120];float t0=v[121];float d0=s0*t0;v[115]=d0;}
    {float s0=v[115];float t0=v[122];float d0=s0*t0;v[123]=d0;}
    {float s0=v[117];float t0=v[118];float d0=s0*t0;v[127]=d0;}
    {float s0=v[123];float s1=v[127];float t=0;t+=s0;t+=s1;v[96]=t;}
    {float s0=v[115];float t0=v[118];float d0=s0*t0;v[123]=d0;}
    {float s0=v[117];float t0=v[122];float d0=s0*t0;v[127]=d0;}
    {float s0=v[121];float t0=v[118];float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=v[127];float d0=-s0;float d1=-s1;v[126]=d0;v[127]=d1;}
    {float s0=v[123];float s1=v[127];float t=0;t+=s0;t+=s1;v[97]=t;}
    {float s0=v[116];float t0=v[121];float d0=s0*t0;v[98]=d0;}
    {float s0=v[116];float t0=v[122];float d0=s0*t0;v[100]=d0;}
    {float s0=v[116];float t0=v[118];float d0=s0*t0;v[101]=d0;}
    {float s0=v[120];float d0=-s0;v[102]=d0;}
    {float s0=v[120];float t0=v[117];float d0=s0*t0;v[124]=d0;}
    {float s0=v[124];float t0=v[122];float d0=s0*t0;v[127]=d0;}
    {float s0=v[126];float s1=v[127];float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=v[124];float t0=v[118];float d0=s0*t0;v[127]=d0;}
    {float s0=v[121];float t0=v[122];float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=v[127];float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=v[116];float t0=v[117];float d0=s0*t0;v[106]=d0;}
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08866C8C; }
    goto L_08866BC4;
L_08866BC4:;
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(v1-12); goto L_08866BF4; }
    goto L_08866BDC;
L_08866BDC:;
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s0+32, FBITS(f0));
    if (cnd_) { goto L_08866C74; }
    goto L_08866BF0;
L_08866BF0:;
    v0 = LD32(v1-12);
    goto L_08866BF4;
L_08866BF4:;
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08866C14; }
    goto L_08866C04;
L_08866C04:;
    goto L_08866C08;
L_08866C08:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08866C14:;
    { u64 r_ = func_088BB430(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08866C1C;
L_08866C1C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08866C04; }
    goto L_08866C24;
L_08866C24:;
    a0 = LD32(s0);
    v0 = LD32(a0-16);
    v0 = s0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_08866C08; }
    goto L_08866C40;
L_08866C40:;
    v0 = LD32(a0-12);
    f0 = BITSF(0);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_08866C08; }
    goto L_08866C60;
L_08866C60:;
    v0 = LD32(a0+32);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866C6C;
L_08866C6C:;
    goto L_08866C04;
L_08866C74:;
    ST32(s0+32, FBITS(f1));
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866C84;
L_08866C84:;
    v1 = LD32(s0);
    goto L_08866BF0;
L_08866C8C:;
    a1 = sp + 0;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866C94;
L_08866C94:;
    v1 = LD32(s0);
    goto L_08866BC4;
}

/* 08866C9C */
void func_08866C9C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08866C9C:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866CC0;
L_08866CC0:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 15;
    t0 = 76;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08866CDC;
L_08866CDC:;
    a0 = s2 + 0;
    func_08866D04(a0);
    goto L_08866CE4;
L_08866CE4:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_08866CEC;
L_08866CEC:;
    sp = sp + 16;
    return;
}

/* 08866D04 */
void func_08866D04(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f12 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08866D04:;
    sp = sp - 96;
    s0 = a0 + 0;
    func_08864D34(a0);
    goto L_08866D18;
L_08866D18:;
    v0 = D_08AEBED8 - (-16680);
    f12 = BITSF(LD32(v0-16680));
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 68;
    t0 = 32;
    t1 = 1;
    t2 = 2;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08866D40;
L_08866D40:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 72;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08866D64;
L_08866D64:;
    sp = sp + 96;
    return;
}

/* 08866D74 */
rv_t func_08866D74(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08866D74:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08866DF4; }
    goto L_08866DA8;
L_08866DA8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08866DCC; }
    goto L_08866DBC;
L_08866DBC:;
    v0 = D_08B28F14 - (-28908);
    a0 = LD32(v0-28908);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08866DE4; }
    goto L_08866DCC;
L_08866DCC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08866DE4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08866DEC;
L_08866DEC:;
    goto L_08866DCC;
L_08866DF4:;
    s3 = D_08B28F14 - (-28908);
    s0 = s3 - 28908;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866E0C;
L_08866E0C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28908, v0);
    if (cnd_) { goto L_08866E38; }
    goto L_08866E1C;
L_08866E1C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08866E24;
L_08866E24:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08866E24; }
    goto L_08866E38;
L_08866E38:;
    v0 = s3 - 28908;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08866DA8;
}

/* 08866E48 */
rv_t func_08866E48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08866E48:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08866D74(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866E5C;
L_08866E5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08866E68 */
rv_t func_08866E68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08866E68:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08866D74(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866E7C;
L_08866E7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08866E88 */
void func_08866E88(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08866E88:;
    sp = sp - 32;
    s4 = a0 + 56;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08B28F24 - (-28892);
    s2 = s3 - 28892;
    s0 = a1 + 0;
    func_08873BF8(a0);
    goto L_08866EC0;
L_08866EC0:;
    a1 = D_08AF56E8 - (22248);
    a1 = a1 + 22248;
    a2 = s0 + 0;
    a0 = s1 + 0;
    a1 = a1 + 4;
    func_088747D4(a0, a1, a2);
    goto L_08866ED8;
L_08866ED8:;
    a0 = D_08AF569C - (22172);
    a0 = a0 + 22172;
    ST32(s1, a0);
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    a1 = s1 + 4;
    a0 = a0 + 48;
    ST32(a1+8, FBITS(f0));
    a2 = D_08B45AA8 - (23208);
    v0 = a2 + 23208;
    ST32(a1+4, FBITS(f1));
    v1 = s1 + 16;
    ST32(s1+56, a0);
    a0 = 12;
    ST32(s1+4, FBITS(f2));
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f8 = BITSF(LD32(a2+23208));
    ST32(v1+4, FBITS(f1));
    ST32(v1+32, FBITS(f0));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    v1 = 41;
    ST32(s1+52, 0);
    ST32(s1+16, FBITS(f8));
    ST16(s4+8, v1);
    v0 = LD32(s1+52);
    a1 = LD32(s1);
    v0 = v0 | 0x1;
    ST32(s1+52, v0);
    v1 = LD32(a1-12);
    v0 = LD32(s2+4);
    v1 = s1 + v1;
    s0 = LD32(v1+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08866FA0;
L_08866FA0:;
    a0 = LD32(s3-28892);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 08866FEC */
rv_t func_08866FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08866FEC:;
    v0 = D_08AF569C - (22172);
    v0 = v0 + 22172;
    v1 = v0 + 48;
    sp = sp - 16;
    ST32(a0+56, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F24 - (-28892);
    a1 = s0 + 0;
    a0 = a0 - 28892;
    func_08AAEB70(a0, a1, t1, t2, t3);
    goto L_08867020;
L_08867020:;
    a1 = D_08AF56E8 - (22248);
    a1 = a1 + 22248;
    a0 = s0 + 0;
    a1 = a1 + 4;
    s0 = s0 + 56;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08867038;
L_08867038:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08867040;
L_08867040:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867050 */
rv_t func_08867050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867050:;
    v0 = D_08AF569C - (22172);
    v0 = v0 + 22172;
    v1 = v0 + 48;
    sp = sp - 16;
    ST32(a0+56, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F24 - (-28892);
    a1 = s0 + 0;
    a0 = a0 - 28892;
    func_08AAEB70(a0, a1, t1, t2, t3);
    goto L_08867088;
L_08867088:;
    a1 = D_08AF56E8 - (22248);
    a1 = a1 + 22248;
    a1 = a1 + 4;
    s1 = s0 + 56;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_088670A0;
L_088670A0:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088670A8;
L_088670A8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088670B0;
L_088670B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088670C4 */
void func_088670C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088670C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 76;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088670E8;
L_088670E8:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08866E88(a0, a1);
    goto L_088670F8;
L_088670F8:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0886711C; }
    goto L_08867104;
L_08867104:;
    goto L_08867108;
L_08867108:;
    sp = sp + 16;
    return;
L_0886711C:;
    v0 = LD32(s2);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886712C;
L_0886712C:;
    goto L_08867108;
}

/* 08867134 */
rv_t func_08867134(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08867134:;
    sp = sp - 32;
    s0 = a1 + 0;
    v0 = (u32)-1;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, v0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867160;
L_08867160:;
    a1 = sp + 4;
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08867188; }
    goto L_08867170;
L_08867170:;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867178;
L_08867178:;
    a0 = s0 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867184;
L_08867184:;
    v0 = LD32(sp);
    goto L_08867188;
L_08867188:;
    v0 = v0 < 0x2u;
    a1 = s1 + 4;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088671AC; }
    goto L_08867198;
L_08867198:;
    goto L_0886719C;
L_0886719C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088671AC:;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088671B4;
L_088671B4:;
    a0 = s0 + 0;
    a1 = s1 + 16;
    { rv_t r_ = func_0882E0F4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088671C0;
L_088671C0:;
    a1 = s1 + 52;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088671CC;
L_088671CC:;
    goto L_0886719C;
}

/* 088671D4 */
rv_t func_088671D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088671D4:;
    v1 = LD_U16(a1+16);
    v0 = 3;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08867208; }
    goto L_088671E4;
L_088671E4:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+52); goto L_088671FC; }
    goto L_088671F0;
L_088671F0:;
    a1 = 0 + 0;
    goto L_088671F4;
L_088671F4:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
L_088671FC:;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_08867200;
L_08867200:;
    ST32(a0+52, v0);
    goto L_088671F4;
L_08867208:;
    v0 = LD32(a0+52);
    v0 = v0 | 0x1;
    goto L_08867200;
}

/* 08867214 */
rv_t func_08867214(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08867214:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08867294; }
    goto L_08867248;
L_08867248:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0886726C; }
    goto L_0886725C;
L_0886725C:;
    v0 = D_08B28F24 - (-28892);
    a0 = LD32(v0-28892);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08867284; }
    goto L_0886726C;
L_0886726C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08867284:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886728C;
L_0886728C:;
    goto L_0886726C;
L_08867294:;
    s3 = D_08B28F24 - (-28892);
    s0 = s3 - 28892;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088672AC;
L_088672AC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28892, v0);
    if (cnd_) { goto L_088672D8; }
    goto L_088672BC;
L_088672BC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088672C4;
L_088672C4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088672C4; }
    goto L_088672D8;
L_088672D8:;
    v0 = s3 - 28892;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08867248;
}

/* 088672E8 */
rv_t func_088672E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088672E8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08867214(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088672FC;
L_088672FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867308 */
rv_t func_08867308(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867308:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08867214(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886731C;
L_0886731C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867328 */
rv_t func_08867328(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08867328:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088673A8; }
    goto L_0886735C;
L_0886735C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08867380; }
    goto L_08867370;
L_08867370:;
    v0 = D_08B28F34 - (-28876);
    a0 = LD32(v0-28876);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08867398; }
    goto L_08867380;
L_08867380:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08867398:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088673A0;
L_088673A0:;
    goto L_08867380;
L_088673A8:;
    s3 = D_08B28F34 - (-28876);
    s0 = s3 - 28876;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088673C0;
L_088673C0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28876, v0);
    if (cnd_) { goto L_088673EC; }
    goto L_088673D0;
L_088673D0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088673D8;
L_088673D8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088673D8; }
    goto L_088673EC;
L_088673EC:;
    v0 = s3 - 28876;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0886735C;
}

/* 088673FC */
rv_t func_088673FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088673FC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08867328(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867410;
L_08867410:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886741C */
rv_t func_0886741C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886741C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08867328(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867430;
L_08867430:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886743C */
void func_0886743C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886743C:;
    sp = sp - 32;
    s3 = D_08B28F44 - (-28860);
    s2 = s3 - 28860;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08867464;
L_08867464:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v0+23196));
    v0 = s1 + 28;
    ST32(v0+8, FBITS(f0));
    a2 = D_08B45AA8 - (23208);
    v1 = a2 + 23208;
    ST32(v0+4, FBITS(f1));
    v0 = D_08AF5760 - (22368);
    v0 = v0 + 22368;
    ST32(s1, v0);
    a1 = s1 + 40;
    v0 = 41;
    ST32(s1+28, FBITS(f2));
    a0 = s1 + 0;
    f0 = BITSF(LD32(v1+32));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+12));
    f4 = BITSF(LD32(v1+16));
    f5 = BITSF(LD32(v1+20));
    f6 = BITSF(LD32(v1+24));
    f7 = BITSF(LD32(v1+28));
    f8 = BITSF(LD32(a2+23208));
    ST32(a1+32, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    ST32(a1+12, FBITS(f3));
    ST32(a1+16, FBITS(f4));
    ST32(a1+20, FBITS(f5));
    ST32(a1+24, FBITS(f6));
    ST32(a1+28, FBITS(f7));
    ST32(s1+40, FBITS(f8));
    ST16(s1+8, v0);
    ST32(s1+76, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088674FC;
L_088674FC:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867508;
L_08867508:;
    v1 = LD32(s1+76);
    s0 = LD32(s1+4);
    a0 = 12;
    v1 = v1 | 0x1;
    ST32(s1+76, v1);
    v0 = LD32(s2+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886752C;
L_0886752C:;
    a0 = LD32(s3-28860);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 08867574 */
rv_t func_08867574(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867574:;
    v0 = D_08AF5760 - (22368);
    v0 = v0 + 22368;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F44 - (-28860);
    a1 = s0 + 0;
    a0 = a0 - 28860;
    func_08AAEC3C(a0, a1, t1, t2, t3);
    goto L_088675A0;
L_088675A0:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088675A8;
L_088675A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088675B8 */
rv_t func_088675B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088675B8:;
    v0 = D_08AF5760 - (22368);
    v0 = v0 + 22368;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F44 - (-28860);
    a1 = s0 + 0;
    a0 = a0 - 28860;
    func_08AAEC3C(a0, a1, t1, t2, t3);
    goto L_088675E4;
L_088675E4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088675EC;
L_088675EC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088675F4;
L_088675F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867604 */
void func_08867604(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867604:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 80;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867628;
L_08867628:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_0886743C(a0, a1);
    goto L_08867638;
L_08867638:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0886765C; }
    goto L_08867644;
L_08867644:;
    goto L_08867648;
L_08867648:;
    sp = sp + 16;
    return;
L_0886765C:;
    v0 = LD32(s2);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886766C;
L_0886766C:;
    goto L_08867648;
}

/* 08867674 */
rv_t func_08867674(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867674:;
    sp = sp - 16;
    { rv_t r_ = func_08874CD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867684;
L_08867684:;
    v0 = v0 + 56;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867694 */
rv_t func_08867694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08867694:;
    sp = sp - 160;
    v0 = 1;
    a2 = sp + 128;
    ST32(sp+128, v0);
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_088676BC;
L_088676BC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088676BC; }
    goto L_088676E4;
L_088676E4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08874EDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088676F0;
L_088676F0:;
    a0 = sp + 0;
    a1 = 0 + 0;
    a2 = 52;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08867700;
L_08867700:;
    v1 = LD32(s1+76);
    v0 = s1 + 40;
    a0 = s1 + 28;
    f6 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(s1+28));
    f4 = BITSF(LD32(a0+4));
    f11 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0+16));
    f8 = BITSF(LD32(v0+20));
    f9 = BITSF(LD32(v0+24));
    f10 = BITSF(LD32(v0+28));
    f0 = BITSF(LD32(s1+40));
    f5 = BITSF(LD32(v0+12));
    v1 = v1 & 0x1;
    v0 = LD32(sp+48);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(sp+64, FBITS(f3));
    a2 = sp + 64;
    a1 = 0 + 0;
    ST32(sp+68, FBITS(f4));
    ST32(sp+72, FBITS(f6));
    ST32(sp+76, FBITS(f0));
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f2));
    ST32(sp+12, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    ST32(sp+36, FBITS(f9));
    ST32(sp+40, FBITS(f10));
    ST32(sp+44, FBITS(f11));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f6));
    ST32(sp+48, v0);
    ST32(sp+88, FBITS(f5));
    ST32(sp+92, FBITS(f7));
    ST32(sp+96, FBITS(f8));
    ST32(sp+100, FBITS(f9));
    ST32(sp+104, FBITS(f10));
    ST32(sp+108, FBITS(f11));
    ST32(sp+112, v0);
    goto L_088677B8;
L_088677B8:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x34u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088677B8; }
    goto L_088677E0;
L_088677E0:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
}

/* 088677F4 */
rv_t func_088677F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088677F4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867818;
L_08867818:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867824;
L_08867824:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867830;
L_08867830:;
    a1 = s1 + 40;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E164(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886783C;
L_0886783C:;
    a1 = LD32(s1+76);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867848;
L_08867848:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886785C */
rv_t func_0886785C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0886785C:;
    sp = sp - 96;
    v0 = (u32)-1;
    a2 = sp + 64;
    ST32(sp+64, v0);
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08867884;
L_08867884:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08867884; }
    goto L_088678A8;
L_088678A8:;
    v0 = LD32(sp+64);
    cnd_ = (s32)v0 <= 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088678C0; }
    goto L_088678B4;
L_088678B4:;
    a1 = s0 + 0;
    { rv_t r_ = func_08874CE4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088678BC;
L_088678BC:;
    v0 = LD32(sp+64);
    goto L_088678C0;
L_088678C0:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08867978; }
    goto L_088678CC;
L_088678CC:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_088678D4;
L_088678D4:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x34u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_088678D4; }
    goto L_088678F8;
L_088678F8:;
    f0 = BITSF(LD32(sp+8));
    v1 = s1 + 28;
    a0 = LD32(sp+48);
    f1 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    f6 = BITSF(LD32(sp+28));
    f7 = BITSF(LD32(sp+32));
    f8 = BITSF(LD32(sp+36));
    f9 = BITSF(LD32(sp+40));
    f2 = BITSF(LD32(sp+44));
    ST32(v1+8, FBITS(f0));
    v0 = s1 + 40;
    a0 = a0 & 0x1;
    f0 = BITSF(LD32(sp+4));
    ST32(s1+28, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(v0+32, FBITS(f2));
    ST32(v0+4, FBITS(f3));
    ST32(v0+8, FBITS(f4));
    ST32(v0+12, FBITS(f5));
    ST32(v0+16, FBITS(f6));
    ST32(v0+20, FBITS(f7));
    ST32(v0+24, FBITS(f8));
    ST32(v0+28, FBITS(f9));
    f0 = BITSF(LD32(sp+12));
    v0 = LD32(s1+76);
    v0 = (v0 & ~(0x1u << 0)) | ((a0 & 0x1) << 0);
    ST32(s1+76, v0);
    ST32(s1+40, FBITS(f0));
    goto L_08867978;
L_08867978:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 08867988 */
rv_t func_08867988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867988:;
    sp = sp - 16;
    v0 = a1 + 0;
    t0 = a0 + 0;
    v1 = LD_U16(a1+16);
    a0 = v0 + 0;
    a1 = 2;
    a2 = v1 ^ 0x3;
    v1 = v1 - 3;
    v1 = v1 < 0x2u;
    a3 = 0 + 0;
    t1 = a2 < 0x1u;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088679CC; }
    goto L_088679C0;
L_088679C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088679CC:;
    v0 = LD32(t0+76);
    v0 = (v0 & ~(0x1u << 0)) | ((t1 & 0x1) << 0);
    ST32(t0+76, v0);
    a2 = LD32(t0+4);
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088679E0;
L_088679E0:;
    v0 = 1;
    goto L_088679C0;
}

/* 088679E8 */
rv_t func_088679E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088679E8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08867A68; }
    goto L_08867A1C;
L_08867A1C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08867A40; }
    goto L_08867A30;
L_08867A30:;
    v0 = D_08B28F44 - (-28860);
    a0 = LD32(v0-28860);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08867A58; }
    goto L_08867A40;
L_08867A40:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08867A58:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08867A60;
L_08867A60:;
    goto L_08867A40;
L_08867A68:;
    s3 = D_08B28F44 - (-28860);
    s0 = s3 - 28860;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867A80;
L_08867A80:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28860, v0);
    if (cnd_) { goto L_08867AAC; }
    goto L_08867A90;
L_08867A90:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08867A98;
L_08867A98:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08867A98; }
    goto L_08867AAC;
L_08867AAC:;
    v0 = s3 - 28860;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08867A1C;
}

/* 08867ABC */
rv_t func_08867ABC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867ABC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088679E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867AD0;
L_08867AD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867ADC */
rv_t func_08867ADC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867ADC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088679E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867AF0;
L_08867AF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867AFC */
void func_08867AFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08867AFC:;
    sp = sp - 32;
    s3 = D_08B28F54 - (-28844);
    s2 = s3 - 28844;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08867B24;
L_08867B24:;
    v0 = D_08AF57B0 - (22448);
    v0 = v0 + 22448;
    ST32(s1, v0);
    v0 = 69;
    a0 = s1 + 0;
    ST16(s1+8, v0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08867B40;
L_08867B40:;
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867B58;
L_08867B58:;
    a0 = LD32(s3-28844);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 08867BA0 */
rv_t func_08867BA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867BA0:;
    v0 = D_08AF57B0 - (22448);
    v0 = v0 + 22448;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F54 - (-28844);
    a1 = s0 + 0;
    a0 = a0 - 28844;
    func_08AAECF4(a0, a1, t1, t2, t3);
    goto L_08867BCC;
L_08867BCC:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08867BD4;
L_08867BD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867BE4 */
rv_t func_08867BE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867BE4:;
    v0 = D_08AF57B0 - (22448);
    v0 = v0 + 22448;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F54 - (-28844);
    a1 = s0 + 0;
    a0 = a0 - 28844;
    func_08AAECF4(a0, a1, t1, t2, t3);
    goto L_08867C10;
L_08867C10:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08867C18;
L_08867C18:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08867C20;
L_08867C20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867C30 */
u32 func_08867C30(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867C30:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867C4C;
L_08867C4C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08867AFC(a0, a1);
    goto L_08867C5C;
L_08867C5C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08867C74 */
rv_t func_08867C74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08867C74:;
    sp = sp - 32;
    s0 = a1 + 0;
    v0 = 1;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867CA0;
L_08867CA0:;
    a1 = s1 + 28;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08867CC4; }
    goto L_08867CB0;
L_08867CB0:;
    goto L_08867CB4;
L_08867CB4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08867CC4:;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867CCC;
L_08867CCC:;
    a1 = s1 + 40;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867CD8;
L_08867CD8:;
    goto L_08867CB4;
}

/* 08867CE0 */
rv_t func_08867CE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867CE0:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867D04;
L_08867D04:;
    a1 = s0 + 28;
    a0 = s1 + 0;
    s0 = s0 + 40;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867D14;
L_08867D14:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882DCBC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867D20;
L_08867D20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867D34 */
rv_t func_08867D34(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08867D34:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08867DB4; }
    goto L_08867D68;
L_08867D68:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08867D8C; }
    goto L_08867D7C;
L_08867D7C:;
    v0 = D_08B28F54 - (-28844);
    a0 = LD32(v0-28844);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08867DA4; }
    goto L_08867D8C;
L_08867D8C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08867DA4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08867DAC;
L_08867DAC:;
    goto L_08867D8C;
L_08867DB4:;
    s3 = D_08B28F54 - (-28844);
    s0 = s3 - 28844;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867DCC;
L_08867DCC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28844, v0);
    if (cnd_) { goto L_08867DF8; }
    goto L_08867DDC;
L_08867DDC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08867DE4;
L_08867DE4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08867DE4; }
    goto L_08867DF8;
L_08867DF8:;
    v0 = s3 - 28844;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08867D68;
}

/* 08867E08 */
rv_t func_08867E08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867E08:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08867D34(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867E1C;
L_08867E1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867E28 */
rv_t func_08867E28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867E28:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08867D34(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867E3C;
L_08867E3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08867E48 */
void func_08867E48(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08867E48:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s2 = a0 + 0;
    s1 = a3 + 0;
    func_088747D4(a0, a1, a2);
    goto L_08867E70;
L_08867E70:;
    a2 = sp + 0;
    a0 = LD32(s0);
    a1 = 0 + 0;
    ST32(s2, a0);
    v0 = LD32(a0-12);
    v1 = LD32(s0+12);
    v0 = s2 + v0;
    ST32(v0, v1);
    goto L_08867E90;
L_08867E90:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08867E90; }
    goto L_08867EB4;
L_08867EB4:;
    v0 = LD32(sp);
    v0 = (s32)v0 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08867F1C; }
    goto L_08867EC4;
L_08867EC4:;
    a2 = sp + 4;
    goto L_08867EC8;
L_08867EC8:;
    a1 = 0 + 0;
    goto L_08867ECC;
L_08867ECC:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08867ECC; }
    goto L_08867EF0;
L_08867EF0:;
    v0 = LD32(sp+4);
    v1 = LD32(s2+4);
    v0 = 0 < v0;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s2+4, v1);
    sp = sp + 32;
    return;
L_08867F1C:;
    a0 = s1 + 0;
    func_08874E18(a0);
    goto L_08867F24;
L_08867F24:;
    a2 = sp + 4;
    goto L_08867EC8;
}

/* 08867F2C */
rv_t func_08867F2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08867F2C:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867F50;
L_08867F50:;
    v0 = LD32(sp);
    v0 = (s32)v0 < 3;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08867F94; }
    goto L_08867F60;
L_08867F60:;
    a0 = s0 + 0;
    goto L_08867F64;
L_08867F64:;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08867F6C;
L_08867F6C:;
    v0 = LD32(sp+4);
    v1 = LD32(s1+4);
    v0 = 0 < v0;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s1+4, v1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08867F94:;
    func_08874E90(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08867F9C;
L_08867F9C:;
    a0 = s0 + 0;
    goto L_08867F64;
}

/* 08867FA4 */
rv_t func_08867FA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08867FA4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = LD32(a0);
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    a0 = 1;
    if (cnd_) { goto L_0886801C; }
    goto L_08867FD0;
L_08867FD0:;
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0886801C; }
    goto L_08867FD8;
L_08867FD8:;
    a1 = LD_U16(a1+16);
    v0 = a1 < 0xbu;
    cnd_ = v0 == 0;
    v1 = D_08AD4A00 - (18944);
    if (cnd_) { goto L_0886801C; }
    goto L_08867FE8;
L_08867FE8:;
    v0 = a1 << 2;
    v1 = v1 + 18944;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08868000u: goto L_08868000; case 0x08868030u: goto L_08868030; case 0x08868060u: goto L_08868060; case 0x08868088u: goto L_08868088; case 0x088680ACu: goto L_088680AC; case 0x088680B4u: goto L_088680B4; default: rs_break(0, 0x08867ff8); }
L_08868000:;
    v1 = LD32(a2+36);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886800C;
L_0886800C:;
    v0 = LD32(s0+4);
    a0 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+4, v0);
    goto L_0886801C;
L_0886801C:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08868030:;
    v0 = LD32(s0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a2+20); goto L_08868048; }
    goto L_08868040;
L_08868040:;
    a0 = 1;
    goto L_0886801C;
L_08868048:;
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868050;
L_08868050:;
    v0 = LD32(s0+4);
    v0 = v0 | 0x1;
    goto L_08868058;
L_08868058:;
    ST32(s0+4, v0);
    goto L_08868040;
L_08868060:;
    v0 = LD32(s0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 1; goto L_0886801C; }
    goto L_08868070;
L_08868070:;
    v1 = LD32(a2+24);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886807C;
L_0886807C:;
    v0 = LD32(s0+4);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_08868058;
L_08868088:;
    v0 = LD32(s0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 1; goto L_0886801C; }
    goto L_08868098;
L_08868098:;
    v0 = LD32(a2+28);
    goto L_0886809C;
L_0886809C:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088680A4;
L_088680A4:;
    a0 = 1;
    goto L_0886801C;
L_088680AC:;
    a0 = 0 + 0;
    goto L_0886801C;
L_088680B4:;
    v0 = LD32(s0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 1; goto L_0886801C; }
    goto L_088680C4;
L_088680C4:;
    v0 = LD32(a2+32);
    goto L_0886809C;
}

/* 088680CC */
rv_t func_088680CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088680CC:;
    sp = sp - 16;
    v1 = LD32(a0);
    a1 = LD32(v1+8);
    t_ = a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088680E4;
L_088680E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088680F0 */
void func_088680F0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088680F0:;
    sp = sp - 48;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s2 = a0 + 0;
    s1 = a3 + 0;
    func_08869748(a0, a1, a2, a3);
    goto L_08868118;
L_08868118:;
    a2 = sp + 16;
    a0 = LD32(s0);
    a1 = 0 + 0;
    ST32(s2, a0);
    v0 = LD32(a0-12);
    v1 = LD32(s0+28);
    v0 = s2 + v0;
    ST32(v0, v1);
    ST32(s2+24, 0);
    ST32(s2+28, 0);
    goto L_08868140;
L_08868140:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08868140; }
    goto L_08868164;
L_08868164:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0886816C;
L_0886816C:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x10u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886816C; }
    goto L_08868190;
L_08868190:;
    s0 = LD32(sp+12);
    v1 = LD32(sp+4);
    a1 = LD32(sp+8);
    v0 = LD32(sp);
    a0 = s0 << 2;
    ST32(s2+32, v1);
    a0 = a0 + s0;
    a0 = a0 << 3;
    ST32(s2+16, v0);
    ST32(s2+20, a1);
    ST32(s2+24, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088681C0;
L_088681C0:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_088681DC; }
    goto L_088681CC;
L_088681CC:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_088681D4;
L_088681D4:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_088681D4; }
    goto L_088681DC;
L_088681DC:;
    v0 = LD32(s2+24);
    ST32(s2+28, a0);
    cnd_ = (s32)v0 <= 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08868278; }
    goto L_088681EC;
L_088681EC:;
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_088681F4;
L_088681F4:;
    v0 = LD32(s2+28);
    a2 = 0 + 0;
    a1 = v0 + a3;
    goto L_08868200;
L_08868200:;
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x18u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08868200; }
    goto L_08868228;
L_08868228:;
    v0 = LD32(s2+28);
    a2 = 0 + 0;
    v0 = v0 + t0;
    a1 = v0 + 24;
    goto L_08868238;
L_08868238:;
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x10u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08868238; }
    goto L_08868260;
L_08868260:;
    v0 = LD32(s2+24);
    t1 = t1 + 1;
    a3 = a3 + 40;
    v0 = (s32)t1 < (s32)v0;
    cnd_ = v0 != 0;
    t0 = t0 + 40;
    if (cnd_) { goto L_088681F4; }
    goto L_08868278;
L_08868278:;
    v0 = LD32(sp+16);
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08868294; }
    goto L_08868288;
L_08868288:;
    v0 = LD32(s2+32);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s2+32, v0);
    goto L_08868294;
L_08868294:;
    sp = sp + 48;
    return;
}

/* 088682A8 */
void func_088682A8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088682A8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a0 = LD32(a1+28);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0+28);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08868304; }
    goto L_088682E4;
L_088682E4:;
    a1 = s1 + 4;
    goto L_088682E8;
L_088682E8:;
    a0 = s0 + 0;
    func_0886989C(a0, a1, t1, t2, t3);
    goto L_088682F0;
L_088682F0:;
    sp = sp + 16;
    return;
L_08868304:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886830C;
L_0886830C:;
    a1 = s1 + 4;
    goto L_088682E8;
}

/* 08868314 */
rv_t func_08868314(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08868314:;
    sp = sp - 16;
    v1 = D_08AF58D4 - (22740);
    v1 = v1 + 22740;
    a1 = v1 + 92;
    s0 = a0 + 0;
    s1 = s0 + 36;
    v0 = LD32(a0+28);
    ST32(s0, v1);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s0+36, a1);
    if (cnd_) { goto L_0886837C; }
    goto L_0886834C;
L_0886834C:;
    a1 = D_08AF5948 - (22856);
    goto L_08868350;
L_08868350:;
    a1 = a1 + 22856;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_0886989C(a0, a1, t1, t2, t3);
    goto L_08868360;
L_08868360:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868368;
L_08868368:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886837C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868384;
L_08868384:;
    a1 = D_08AF5948 - (22856);
    goto L_08868350;
}

/* 0886838C */
rv_t func_0886838C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886838C:;
    sp = sp - 16;
    v1 = D_08AF58D4 - (22740);
    v1 = v1 + 22740;
    a1 = v1 + 92;
    s0 = a0 + 0;
    s1 = s0 + 36;
    v0 = LD32(a0+28);
    ST32(s0, v1);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s0+36, a1);
    if (cnd_) { goto L_088683FC; }
    goto L_088683C4;
L_088683C4:;
    a1 = D_08AF5948 - (22856);
    goto L_088683C8;
L_088683C8:;
    a1 = a1 + 22856;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_0886989C(a0, a1, t1, t2, t3);
    goto L_088683D8;
L_088683D8:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088683E0;
L_088683E0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088683E8;
L_088683E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088683FC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868404;
L_08868404:;
    a1 = D_08AF5948 - (22856);
    goto L_088683C8;
}

/* 0886840C */
rv_t func_0886840C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886840C:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = LD32(a0+32);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08868440; }
    goto L_0886842C;
L_0886842C:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08868440:;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868450;
L_08868450:;
    v1 = LD32(s0+32);
    a0 = v1 | 0x1;
    v1 = (v1 >> 2) & 0x1;
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_0886842C; }
    goto L_08868464;
L_08868464:;
    ST32(s0+32, a0);
    a1 = 1;
    goto L_0886842C;
}

/* 08868470 */
rv_t func_08868470(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08868470:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = LD32(a0+32);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088684A4; }
    goto L_08868490;
L_08868490:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088684A4:;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088684B4;
L_088684B4:;
    a0 = LD32(s0+32);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    v1 = (a0 >> 2) & 0x1;
    a1 = 0 + 0;
    cnd_ = v0 != v1;
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_08868490; }
    goto L_088684D0;
L_088684D0:;
    ST32(s0+32, a0);
    a1 = 1;
    goto L_08868490;
}

/* 088684DC */
rv_t func_088684DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088684DC:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = 0 + 0;
    v0 = LD32(a0+24);
    cnd_ = (s32)v0 <= 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886853C; }
    goto L_08868508;
L_08868508:;
    s1 = 0 + 0;
    a0 = LD32(s0+28);
    goto L_08868510;
L_08868510:;
    a1 = s3 + 0;
    s2 = s2 + 1;
    a0 = a0 + s1;
    { rv_t r_ = func_08836448(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868520;
L_08868520:;
    s1 = s1 + 40;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08868540; }
    goto L_0886852C;
L_0886852C:;
    v0 = LD32(s0+24);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_08868510; }
    goto L_0886853C;
L_0886853C:;
    v1 = 0 + 0;
    goto L_08868540;
L_08868540:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08868560 */
rv_t func_08868560(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08868560:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08869B40(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868574;
L_08868574:;
    v0 = LD32(s0+32);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08868598; }
    goto L_08868584;
L_08868584:;
    v0 = LD32(s0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088685A4; }
    goto L_08868594;
L_08868594:;
    goto L_08868598;
L_08868598:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088685A4:;
    v0 = LD32(s0);
    v1 = LD32(v0+24);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088685B4;
L_088685B4:;
    v0 = LD32(s0+4);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+4, v0);
    goto L_08868594;
}

/* 088685C4 */
void func_088685C4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088685C4:;
    sp = sp - 48;
    s2 = a0 + 36;
    s0 = a0 + 0;
    a0 = s2 + 0;
    s3 = a2 + 0;
    s1 = a1 + 0;
    func_08873BF8(a0);
    goto L_088685F4;
L_088685F4:;
    a1 = D_08AF5B18 - (23320);
    a1 = a1 + 23320;
    a1 = a1 + 4;
    a2 = s1 + 0;
    a0 = s0 + 0;
    a3 = s3 + 0;
    func_088680F0(a0, a1, a2, a3);
    goto L_08868610;
L_08868610:;
    v1 = D_08AF5AA4 - (23204);
    v1 = v1 + 23204;
    v0 = v1 + 92;
    ST32(s0+36, v0);
    v0 = 40;
    a2 = sp + 0;
    ST32(s0, v1);
    a1 = 0 + 0;
    ST16(s2+8, v0);
    goto L_08868634;
L_08868634:;
    v0 = LD32(s3);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s3, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08868634; }
    goto L_08868658;
L_08868658:;
    sp = sp + 48;
    return;
}

/* 08868674 */
rv_t func_08868674(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08868674:;
    sp = sp - 48;
    s7 = D_08B15A00 - (23040);
    v0 = LD32(s7+23040);
    s5 = a0 + 0;
    s0 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08868724; }
    goto L_088686B4;
L_088686B4:;
    v1 = D_08B22E88 - (11912);
    s2 = v1 + 11912;
    s4 = D_08B15A04 - (23044);
    s3 = D_08B159FC - (23036);
    fp = D_08B230A8 - (12456);
    s1 = 1;
    s6 = D_08B15A0C - (23052);
    v0 = LD32(s4+23044);
    goto L_088686D4;
L_088686D4:;
    a0 = s5 + 0;
    cnd_ = s0 == v0;
    v1 = s1 << (s0 & 31);
    if (cnd_) { goto L_088686FC; }
    goto L_088686E0;
L_088686E0:;
    v0 = D_08B230AC - (12460);
    v0 = v0 + 12460;
    ST8(fp+12456, v1);
    ST8(s6+23052, s1);
    ST32(s3+23036, s2);
    ST32(s4+23044, s0);
    ST8(v0+4, s1);
    goto L_088686FC;
L_088686FC:;
    v1 = LD32(s3+23036);
    s0 = s0 + 1;
    s2 = s2 + 136;
    v0 = LD_U8(v1+132);
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0886875C; }
    goto L_08868714;
L_08868714:;
    v0 = LD32(s7+23040);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    v0 = LD32(s4+23044);
    if (cnd_) { goto L_088686D4; }
    goto L_08868724;
L_08868724:;
    v1 = 0 + 0;
    goto L_0886872C;
L_0886872C:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0886875C:;
    { rv_t r_ = func_088684DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868764;
L_08868764:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08868714; }
    goto L_0886876C;
L_0886876C:;
    goto L_0886872C;
}

/* 08868774 */
rv_t func_08868774(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08868774:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08869A0C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868788;
L_08868788:;
    v1 = LD32(s0+32);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088687B0; }
    goto L_08868798;
L_08868798:;
    v0 = LD32(s0+4);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088687BC; }
    goto L_088687AC;
L_088687AC:;
    goto L_088687B0;
L_088687B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088687BC:;
    ST32(s0+32, v1);
    v0 = LD32(s0);
    v1 = LD32(v0+32);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088687D0;
L_088687D0:;
    goto L_088687B0;
}

/* 088687D8 */
float func_088687D8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088687D8:;
    sp = sp - 16;
    s1 = a0 + 80;
    s0 = a0 + 0;
    a0 = s1 + 0;
    s2 = a1 + 0;
    func_08873BF8(a0);
    goto L_08868800;
L_08868800:;
    a1 = D_08AF5D48 - (23880);
    a1 = a1 + 23880;
    a2 = s2 + 0;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_088747D4(a0, a1, a2);
    goto L_08868818;
L_08868818:;
    v0 = D_08AEBF24 - (-16604);
    f0 = BITSF(LD32(v0-16604));
    v1 = D_08AF5CFC - (23804);
    v1 = v1 + 23804;
    a1 = v1 + 48;
    v0 = 35;
    ST32(s0+72, FBITS(f0));
    a0 = s0 + 0;
    ST32(s0, v1);
    ST32(s0+80, a1);
    ST32(s0+68, 0);
    ST8(s0+76, 0);
    ST16(s1+8, v0);
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868850;
L_08868850:;
    a3 = 0 + 0;
    a0 = 93;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868864;
L_08868864:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868874;
L_08868874:;
    sp = sp + 16;
    return f0;
}

/* 0886888C */
rv_t func_0886888C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886888C:;
    v0 = D_08AF5CFC - (23804);
    v0 = v0 + 23804;
    v1 = v0 + 48;
    ST32(a0+80, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s1 = a0 + 80;
    s0 = a0 + 0;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_088688C0;
L_088688C0:;
    a1 = D_08AF5D48 - (23880);
    a1 = a1 + 23880;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_088688D4;
L_088688D4:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088688DC;
L_088688DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088688F0 */
rv_t func_088688F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088688F0:;
    v0 = D_08AF5CFC - (23804);
    v0 = v0 + 23804;
    v1 = v0 + 48;
    ST32(a0+80, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s1 = a0 + 80;
    s0 = a0 + 0;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_08868924;
L_08868924:;
    a1 = D_08AF5D48 - (23880);
    a1 = a1 + 23880;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08868938;
L_08868938:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868940;
L_08868940:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868948;
L_08868948:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886895C */
rv_t func_0886895C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_0886895C:;
    sp = sp - 304;
    v0 = LD_U8(a0+76);
    cnd_ = v0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08868A58; }
    goto L_088689A4;
L_088689A4:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+72));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(a0+72, FBITS(f0));
    if (cnd_) { goto L_08868A18; }
    goto L_088689C8;
L_088689C8:;
    v0 = LD32(s3);
    goto L_088689CC;
L_088689CC:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    { rv_t r_ = func_08873E44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088689D8;
L_088689D8:;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
L_08868A18:;
    v0 = D_08AEBF28 - (-16600);
    f0 = BITSF(LD32(v0-16600));
    a0 = 93;
    a1 = 0 + 0;
    ST32(s3+72, FBITS(f0));
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868A38;
L_08868A38:;
    v1 = LD32(s3);
    a1 = v0 + 0;
    a0 = LD32(v1-12);
    a0 = s3 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868A50;
L_08868A50:;
    v0 = LD32(s3);
    goto L_088689CC;
L_08868A58:;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_088689CC; }
    goto L_08868A64;
L_08868A64:;
    v1 = LD32(a0+40);
    v0 = (u32)-2;
    cnd_ = v1 == v0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_088689C8; }
    goto L_08868A74;
L_08868A74:;
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+72));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(a0+72, FBITS(f0));
    if (cnd_) { goto L_088689C8; }
    goto L_08868A94;
L_08868A94:;
    v0 = D_08AEBF2C - (-16596);
    f0 = BITSF(LD32(v0-16596));
    fp = LD32(a0+68);
    ST32(a0+68, 0);
    a2 = D_08B2BBFC - (-17412);
    v1 = a2 - 17412;
    ST32(a0+72, FBITS(f0));
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08868B20; }
    goto L_08868AD4;
L_08868AD4:;
    a2 = LD32(a2-17412);
    a3 = a1 + 0;
    goto L_08868ADC;
L_08868ADC:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08868B10; }
    goto L_08868AF4;
L_08868AF4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08868B24; }
    goto L_08868B04;
L_08868B04:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08868AF4; }
    goto L_08868B10;
L_08868B10:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08868ADC; }
    goto L_08868B20;
L_08868B20:;
    a0 = LD32(sp+8);
    goto L_08868B24;
L_08868B24:;
    s5 = D_08B15A04 - (23044);
    s1 = 0 + 0;
    cnd_ = a0 == 0;
    s4 = LD32(s5+23044);
    if (cnd_) { goto L_08868BCC; }
    goto L_08868B34;
L_08868B34:;
    v0 = D_08AEBF30 - (-16592);
    f23 = BITSF(LD32(v0-16592));
    v0 = D_08AEBF34 - (-16588);
    f22 = BITSF(LD32(v0-16588));
    v0 = D_08B22E88 - (11912);
    v1 = D_08AEBF28 - (-16600);
    s2 = v0 + 11912;
    v0 = s3 + 56;
    f21 = BITSF(LD32(v1-16600));
    ST32(sp+192, v0);
    s6 = D_08B15A00 - (23040);
    s7 = 1;
    goto L_08868B64;
L_08868B64:;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08868B7C; }
    goto L_08868B70;
L_08868B70:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    s0 = a0 + v1;
    goto L_08868B7C;
L_08868B7C:;
    a0 = sp + 0;
    a1 = 1;
    func_08AAF0EC(a0, a1);
    goto L_08868B88;
L_08868B88:;
    v0 = LD32(s6+23040);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08868BC0; }
    goto L_08868B98;
L_08868B98:;
    cnd_ = s0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08868BC4; }
    goto L_08868BA0;
L_08868BA0:;
    a0 = LD32(s3+40);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v0 = a0 + 1000;
    if (cnd_) { goto L_08868D10; }
    goto L_08868BB0;
L_08868BB0:;
    v1 = LD32(s0+4);
    cnd_ = v1 == v0;
    v0 = LD32(s5+23044);
    if (cnd_) { goto L_08868D14; }
    goto L_08868BBC;
L_08868BBC:;
    a0 = LD32(sp+8);
    goto L_08868BC0;
L_08868BC0:;
    s1 = s1 + 1;
    goto L_08868BC4;
L_08868BC4:;
    cnd_ = a0 != 0;
    s2 = s2 + 136;
    if (cnd_) { goto L_08868B64; }
    goto L_08868BCC;
L_08868BCC:;
    v0 = LD32(s5+23044);
    cnd_ = s4 == v0;
    v1 = s4 << 4;
    if (cnd_) { goto L_08868C18; }
    goto L_08868BD8;
L_08868BD8:;
    v1 = v1 + s4;
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    v1 = v1 << 3;
    v1 = v1 + v0;
    v0 = D_08B159FC - (23036);
    a1 = 1;
    ST32(v0+23036, v1);
    v0 = D_08B230B0 - (12464);
    a2 = a1 << (s4 & 31);
    a0 = D_08B230A8 - (12456);
    ST8(v0+12464, a1);
    v0 = D_08B15A0C - (23052);
    ST8(a0+12456, a2);
    ST32(s5+23044, s4);
    ST8(v0+23052, a1);
    goto L_08868C18;
L_08868C18:;
    v0 = LD32(s3+68);
    cnd_ = fp == v0;
    a1 = 8;
    if (cnd_) { goto L_08868C68; }
    goto L_08868C24;
L_08868C24:;
    a0 = 122;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868C34;
L_08868C34:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08868C68; }
    goto L_08868C3C;
L_08868C3C:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_08868C58; }
    goto L_08868C48;
L_08868C48:;
    v0 = LD32(s3+68);
    ST32(v1, fp);
    ST32(v1+4, v0);
    v0 = LD32(s3);
    goto L_08868C58;
L_08868C58:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868C68;
L_08868C68:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_088689C8; }
    goto L_08868C7C;
L_08868C7C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088689C8; }
    goto L_08868C88;
L_08868C88:;
    v0 = LD32(s1);
    goto L_08868C8C;
L_08868C8C:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08868CE0; }
    goto L_08868CA0;
L_08868CA0:;
    v0 = LD_U8(s0+8);
    goto L_08868CA4;
L_08868CA4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08868D08; }
    goto L_08868CAC;
L_08868CAC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08868CF8; }
    goto L_08868CB4;
L_08868CB4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08868CBC;
L_08868CBC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08868CC8;
L_08868CC8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08868CD4;
L_08868CD4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08868CA4; }
    goto L_08868CDC;
L_08868CDC:;
    v1 = LD32(s1+4);
    goto L_08868CE0;
L_08868CE0:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08868C8C; }
    goto L_08868CF0;
L_08868CF0:;
    v0 = LD32(s3);
    goto L_088689CC;
L_08868CF8:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_08868CBC;
L_08868D08:;
    s0 = LD32(s0+4);
    goto L_08868CD4;
L_08868D10:;
    v0 = LD32(s5+23044);
    goto L_08868D14;
L_08868D14:;
    cnd_ = s1 == v0;
    a0 = D_08B159FC - (23036);
    if (cnd_) { goto L_08868D44; }
    goto L_08868D1C;
L_08868D1C:;
    v1 = D_08B230A8 - (12456);
    v0 = s7 << (s1 & 31);
    a1 = D_08B230AC - (12460);
    ST8(v1+12456, v0);
    a1 = a1 + 12460;
    v1 = D_08B15A0C - (23052);
    ST8(v1+23052, s7);
    ST32(a0+23036, s2);
    ST32(s5+23044, s1);
    ST8(a1+4, s7);
    goto L_08868D44;
L_08868D44:;
    v0 = LD32(a0+23036);
    f6 = BITSF(LD32(s3+44));
    v1 = s3 + 44;
    f4 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    ST32(sp+16, FBITS(f4));
    f4 = f6 - f4;
    f20 = BITSF(0);
    ST32(sp+24, FBITS(f5));
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a1 = FBITS(f4);
    ST32(sp+20, FBITS(f1));
    {v[12]=BITSF(a1);}
    f0 = BITSF(LD32(v0+20));
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v1+8));
    ST32(sp+32, FBITS(f0));
    f2 = f2 - f1;
    f3 = f3 - f5;
    f0 = BITSF(LD32(v0+32));
    a1 = FBITS(f2);
    ST32(sp+36, FBITS(f0));
    {v[13]=BITSF(a1);}
    a1 = FBITS(f3);
    {v[14]=BITSF(a1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    fcc = FCMP(f0, f20, 2);
    f0 = BITSF(LD32(v0+44));
    ST32(sp+48, FBITS(f4));
    ST32(sp+40, FBITS(f0));
    ST32(sp+52, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f3));
    if (cnd_) { goto L_08868E14; }
    goto L_08868DD4;
L_08868DD4:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f20 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a1=FBITS(v[2]);}
    f3 = BITSF(a1);
    {v0=FBITS(v[0]);}
    {a1=FBITS(v[1]);}
    ST32(sp+64, v0);
    ST32(sp+68, a1);
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, v0);
    ST32(sp+52, a1);
    ST32(sp+56, FBITS(f3));
    goto L_08868E14;
L_08868E14:;
    v0 = LD_U8(s3+36);
    f1 = BITSF(LD32(s3+8));
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s3+12));
    if (cnd_) { goto L_08868E40; }
    goto L_08868E24;
L_08868E24:;
    v0 = LD32(a0+23036);
    f0 = BITSF(LD32(v0+92));
    f0 = f0 + f0;
    f0 = f0 * f23;
    f0 = f21 / f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    goto L_08868E40;
L_08868E40:;
    fcc = FCMP(f20, f1, 14);
    cnd_ = !fcc;
    s0 = 0 + 0;
    if (cnd_) { goto L_08868F70; }
    goto L_08868E50;
L_08868E50:;
    fcc = FCMP(f2, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s3+29); goto L_08868F74; }
    goto L_08868E60;
L_08868E60:;
    v0 = LD_U8(s3+16);
    cnd_ = v0 != 0;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_08868FBC; }
    goto L_08868E6C;
L_08868E6C:;
    v1 = LD32(sp+36);
    f1 = BITSF(LD32(s3+20));
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+48);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {a1=FBITS(v[4]);}
    f0 = BITSF(a1);
    f2 = BITSF(a1);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s3+29); goto L_08868F74; }
    goto L_08868EC4;
L_08868EC4:;
    f0 = BITSF(LD32(s3+24));
    fcc = FCMP(f2, f0, 14);
    goto L_08868ED0;
L_08868ED0:;
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s3+29); goto L_08868F74; }
    goto L_08868ED8;
L_08868ED8:;
    f5 = BITSF(LD32(s3+32));
    goto L_08868EDC;
L_08868EDC:;
    fcc = FCMP(f21, f5, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s3+28); goto L_08868F64; }
    goto L_08868EEC;
L_08868EEC:;
    f4 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(sp+52));
    f3 = BITSF(LD32(sp+56));
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    {u32 a_=sp+(224);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(s3+56);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+192);
    v1 = FBITS(f2);
    a1 = FBITS(f3);
    {v[5]=BITSF(v1);}
    v1 = LD32(v0+4);
    {v[6]=BITSF(a1);}
    {v[1]=BITSF(v1);}
    v0 = LD32(v0+8);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+64, FBITS(f4));
    fcc = FCMP(f5, f0, 14);
    ST32(sp+68, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f3));
    if (cnd_) { goto L_08868F70; }
    goto L_08868F60;
L_08868F60:;
    v0 = LD_U8(s3+28);
    goto L_08868F64;
L_08868F64:;
    cnd_ = v0 != 0;
    f12 = f20;
    if (cnd_) { goto L_08868F8C; }
    goto L_08868F6C;
L_08868F6C:;
    s0 = 1;
    goto L_08868F70;
L_08868F70:;
    v0 = LD_U8(s3+29);
    goto L_08868F74;
L_08868F74:;
    cnd_ = s0 == v0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08868BC0; }
    goto L_08868F7C;
L_08868F7C:;
    v0 = LD32(s3+68);
    v0 = v0 + 1;
    ST32(s3+68, v0);
    goto L_08868BBC;
L_08868F8C:;
    a1 = sp + 16;
    a2 = sp + 48;
    a3 = 999;
    a0 = sp + 80;
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_08868FA0;
L_08868FA0:;
    a0 = sp + 80;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868FA8;
L_08868FA8:;
    v1 = LD_U8(v0+32);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD_U8(s3+29); goto L_08868F74; }
    goto L_08868FB4;
L_08868FB4:;
    s0 = 1;
    goto L_08868F70;
L_08868FBC:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    a0 = sp + 64;
    a1 = 0 + 0;
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f1));
    ST32(sp+64, FBITS(f6));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08868FDC;
L_08868FDC:;
    f0 = BITSF(0);
    f1 = BITSF(LD32(sp+72));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s3+29); goto L_08868F74; }
    goto L_08868FF4;
L_08868FF4:;
    f0 = BITSF(LD32(sp+64));
    f2 = BITSF(LD32(s3+20));
    f1 = BITSF(LD32(sp+68));
    f3 = f0 - f22;
    f2 = f21 - f2;
    f4 = f1 - f22;
    f0 = BITSF(LD32(s3+24));
    v0 = FBITS(f3);
    f2 = f2 * f22;
    v1 = FBITS(f4);
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = BITSF(v0);
    v1 = (v1 >> 0) & 0x7fffffff;
    fcc = FCMP(f3, f2, 14);
    f4 = BITSF(v1);
    cnd_ = !fcc;
    f0 = f0 * f22;
    if (cnd_) { goto L_08868F70; }
    goto L_08869038;
L_08869038:;
    fcc = FCMP(f4, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s3+29); goto L_08868F74; }
    goto L_08869048;
L_08869048:;
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    if (cnd_) { f5 = BITSF(LD32(s3+32)); goto L_08868EDC; }
    goto L_08869058;
L_08869058:;
    fcc = FCMP(f0, f4, 14);
    goto L_08868ED0;
}

/* 08869064 */
rv_t func_08869064(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869064:;
    sp = sp - 16;
    v0 = 90;
    t3 = 1;
    a3 = LD_U16(a1+16);
    cnd_ = a3 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_088691AC; }
    goto L_08869080;
L_08869080:;
    t0 = D_08B25AC8 - (23240);
    v0 = 121;
    cnd_ = a3 == v0;
    t4 = t0 + 23240;
    if (cnd_) { goto L_088690B4; }
    goto L_08869090;
L_08869090:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = a2 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088690A0;
L_088690A0:;
    t3 = v0 + 0;
    goto L_088690A4;
L_088690A4:;
    goto L_088690A8;
L_088690A8:;
    v0 = t3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088690B4:;
    a1 = LD32(a1+24);
    t1 = a0 + 44;
    t2 = a0 + 56;
    a3 = a1 + 52;
    cnd_ = a1 == 0;
    a0 = a1 + 40;
    if (cnd_) { goto L_08869154; }
    goto L_088690CC;
L_088690CC:;
    v0 = LD_U8(a1);
    ST8(a2+4, v0);
    f0 = BITSF(LD32(a1+4));
    ST32(a2+8, FBITS(f0));
    f1 = BITSF(LD32(a1+8));
    ST32(a2+12, FBITS(f1));
    v0 = LD_U8(a1+12);
    ST8(a2+16, v0);
    f0 = BITSF(LD32(a1+16));
    ST32(a2+20, FBITS(f0));
    f1 = BITSF(LD32(a1+20));
    ST32(a2+24, FBITS(f1));
    v0 = LD_U8(a1+24);
    ST8(a2+28, v0);
    v1 = LD_U8(a1+25);
    ST8(a2+29, v1);
    f0 = BITSF(LD32(a1+28));
    ST32(a2+32, FBITS(f0));
    v0 = LD_U8(a1+32);
    ST8(a2+36, v0);
    v1 = LD32(a1+36);
    ST32(a2+40, v1);
    f0 = BITSF(LD32(a1+40));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(a2+44, FBITS(f0));
    ST32(t1+4, FBITS(f1));
    f0 = BITSF(LD32(a1+52));
    ST32(t1+8, FBITS(f2));
    f1 = BITSF(LD32(a3+4));
    ST32(a2+56, FBITS(f0));
    f0 = BITSF(LD32(a3+8));
    ST32(t2+4, FBITS(f1));
    ST32(t2+8, FBITS(f0));
    goto L_08869154;
L_08869154:;
    v1 = LD32(t0+23240);
    a0 = LD32(t4+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEBF3C - (-16580);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-16580));
    v0 = D_08AEBF38 - (-16584);
    ST32(t4+4, a0);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-16584));
    v0 = 1;
    ST32(t0+23240, v1);
    f1 = f1 * f0;
    ST8(a2+76, v0);
    ST32(a2+72, FBITS(f1));
    goto L_088690A4;
L_088691AC:;
    v0 = LD32(a1+24);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088690A8; }
    goto L_088691B8;
L_088691B8:;
    v0 = LD_U8(v0);
    ST8(a0+4, v0);
    goto L_088690A8;
}

/* 088691C4 */
rv_t func_088691C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088691C4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 100;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088691E0;
L_088691E0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    f0 = func_088687D8(a0, a1);
    goto L_088691F0;
L_088691F0:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869208 */
void func_08869208(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08869208:;
    sp = sp - 48;
    s0 = a0 + 8;
    s3 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp+4, a1);
    func_08873BF8(a0);
    goto L_08869234;
L_08869234:;
    a1 = D_08AF5DF8 - (24056);
    a1 = a1 + 24056;
    a1 = a1 + 4;
    a0 = s3 + 0;
    f0 = func_08874764(a0, a1);
    goto L_08869248;
L_08869248:;
    v1 = D_08AF5DB4 - (23988);
    v1 = v1 + 23988;
    v0 = v1 + 44;
    ST32(s3+8, v0);
    a1 = sp + 0;
    a2 = 0 + 0;
    ST32(s3, v1);
    a0 = sp + 4;
    func_08869E9C(a0, a1, a2, 0, 0, 0);
    goto L_0886926C;
L_0886926C:;
    v0 = 14;
    ST16(s0+8, v0);
    a2 = sp + 8;
    a1 = 0 + 0;
    goto L_0886927C;
L_0886927C:;
    v0 = LD32(sp+4);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    ST8(a2, v1);
    a2 = a2 + 1;
    v0 = LD32(sp+4);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_0886927C; }
    goto L_088692A4;
L_088692A4:;
    a1 = s3 + 4;
    a2 = 0 + 0;
    goto L_088692AC;
L_088692AC:;
    v0 = LD32(sp+4);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(sp+4, v0);
    ST8(a1, v1);
    cnd_ = a0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_088692AC; }
    goto L_088692D0;
L_088692D0:;
    v0 = LD_U8(sp);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08869358; }
    goto L_088692DC;
L_088692DC:;
    a0 = s3 + 0;
    { u64 r_ = func_088694C4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088692E4;
L_088692E4:;
    a0 = LD32(s3);
    goto L_088692E8;
L_088692E8:;
    s2 = D_08B28F64 - (-28828);
    s1 = s2 - 28828;
    v0 = LD32(a0-12);
    v1 = LD32(s1+4);
    a0 = 12;
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869310;
L_08869310:;
    a0 = LD32(s2-28828);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s3);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 48;
    return;
L_08869358:;
    a0 = s3 + 0;
    { u64 r_ = func_08869544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869360;
L_08869360:;
    a0 = LD32(s3);
    goto L_088692E8;
}

/* 08869368 */
rv_t func_08869368(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869368:;
    v0 = D_08AF5DB4 - (23988);
    v0 = v0 + 23988;
    v1 = v0 + 44;
    sp = sp - 16;
    ST32(a0+8, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F64 - (-28828);
    a1 = s0 + 0;
    a0 = a0 - 28828;
    func_08AAF274(a0, a1, t1, t2, t3);
    goto L_0886939C;
L_0886939C:;
    a1 = D_08AF5DF8 - (24056);
    a1 = a1 + 24056;
    a0 = s0 + 0;
    a1 = a1 + 4;
    s0 = s0 + 8;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_088693B4;
L_088693B4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088693BC;
L_088693BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088693CC */
rv_t func_088693CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088693CC:;
    v0 = D_08AF5DB4 - (23988);
    v0 = v0 + 23988;
    v1 = v0 + 44;
    sp = sp - 16;
    ST32(a0+8, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F64 - (-28828);
    a1 = s0 + 0;
    a0 = a0 - 28828;
    func_08AAF274(a0, a1, t1, t2, t3);
    goto L_08869404;
L_08869404:;
    a1 = D_08AF5DF8 - (24056);
    a1 = a1 + 24056;
    a1 = a1 + 4;
    s1 = s0 + 8;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_0886941C;
L_0886941C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869424;
L_08869424:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886942C;
L_0886942C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869440 */
rv_t func_08869440(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869440:;
    v1 = LD_U16(a1+16);
    sp = sp - 16;
    v0 = 4;
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_088694B4; }
    goto L_08869458;
L_08869458:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_0886949C; }
    goto L_08869464;
L_08869464:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0886948C; }
    goto L_08869470;
L_08869470:;
    v0 = LD32(a2);
    goto L_08869474;
L_08869474:;
    a0 = LD32(v0-12);
    a0 = a2 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869480;
L_08869480:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886948C:;
    { u64 r_ = func_088694C4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869494;
L_08869494:;
    v0 = 1;
    goto L_08869480;
L_0886949C:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(a2); goto L_08869474; }
    goto L_088694A4;
L_088694A4:;
    { u64 r_ = func_0886957C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088694AC;
L_088694AC:;
    v0 = 1;
    goto L_08869480;
L_088694B4:;
    { u64 r_ = func_08869544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088694BC;
L_088694BC:;
    v0 = 1;
    goto L_08869480;
}

/* 088694C4 */
u64 func_088694C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088694C4:;
    sp = sp - 16;
    v0 = D_08B30884 - (2180);
    t0 = v0 + 2180;
    v1 = LD32(v0+2180);
    cnd_ = v1 == 0;
    a1 = LD32(a0+4);
    if (cnd_) { goto L_0886950C; }
    goto L_088694E0;
L_088694E0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088694E8;
L_088694E8:;
    a0 = v0 + 148;
    a2 = v0 + 144;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08869518; }
    goto L_08869500;
L_08869500:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088694E8; }
    goto L_0886950C;
L_0886950C:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08869534; }
    goto L_08869518;
L_08869518:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_0886952C; }
    goto L_08869520;
L_08869520:;
    a0 = a3 + 0;
    func_088D8BCC(a0);
    goto L_08869528;
L_08869528:;
    goto L_0886952C;
L_0886952C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08869534:;
    a2 = 1;
    { u64 r_ = func_08AAF1FC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886953C;
L_0886953C:;
    a3 = v0 + 0;
    goto L_08869518;
}

/* 08869544 */
u64 func_08869544(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869544:;
    sp = sp - 16;
    a2 = 1;
    a1 = LD32(a0+4);
    a0 = D_08B30884 - (2180);
    a0 = a0 + 2180;
    { u64 r_ = func_08AAF1FC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869560;
L_08869560:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08869570; }
    goto L_08869568;
L_08869568:;
    func_088D8BD8(a0);
    goto L_08869570;
L_08869570:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0886957C */
u64 func_0886957C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886957C:;
    sp = sp - 16;
    a2 = 1;
    a1 = LD32(a0+4);
    a0 = D_08B30884 - (2180);
    a0 = a0 + 2180;
    { u64 r_ = func_08AAF1FC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869598;
L_08869598:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088695A8; }
    goto L_088695A0;
L_088695A0:;
    func_088D8BE0(a0);
    goto L_088695A8;
L_088695A8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088695B4 */
u64 func_088695B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088695B4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088695D8; }
    goto L_088695C4;
L_088695C4:;
    { u64 r_ = func_088694C4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088695CC;
L_088695CC:;
    goto L_088695D0;
L_088695D0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088695D8:;
    { u64 r_ = func_08869544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088695E0;
L_088695E0:;
    goto L_088695D0;
}

/* 088695E8 */
rv_t func_088695E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088695E8:;
    sp = sp - 16;
    a2 = 1;
    s0 = a1 + 0;
    v0 = LD32(a0+4);
    a0 = D_08B30884 - (2180);
    a0 = a0 + 2180;
    a1 = v0 + 0;
    { u64 r_ = func_08AAF1FC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869610;
L_08869610:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08869624; }
    goto L_0886961C;
L_0886961C:;
    { rv_t r_ = func_088D8C0C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869624;
L_08869624:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869634 */
rv_t func_08869634(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08869634:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088696B4; }
    goto L_08869668;
L_08869668:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0886968C; }
    goto L_0886967C;
L_0886967C:;
    v0 = D_08B28F64 - (-28828);
    a0 = LD32(v0-28828);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088696A4; }
    goto L_0886968C;
L_0886968C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088696A4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088696AC;
L_088696AC:;
    goto L_0886968C;
L_088696B4:;
    s3 = D_08B28F64 - (-28828);
    s0 = s3 - 28828;
    a0 = 64;
    v0 = 16;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088696CC;
L_088696CC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28828, v0);
    if (cnd_) { goto L_088696F8; }
    goto L_088696DC;
L_088696DC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088696E4;
L_088696E4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088696E4; }
    goto L_088696F8;
L_088696F8:;
    v0 = s3 - 28828;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08869668;
}

/* 08869708 */
rv_t func_08869708(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869708:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08869634(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886971C;
L_0886971C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869728 */
rv_t func_08869728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869728:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08869634(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886973C;
L_0886973C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869748 */
void func_08869748(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08869748:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s2 = a0 + 0;
    s1 = a3 + 0;
    func_08867E48(a0, a1, a2, a3);
    goto L_08869770;
L_08869770:;
    v1 = LD32(s0);
    a0 = s2 + 0;
    ST32(s2, v1);
    v0 = LD32(v1-12);
    a1 = LD32(s0+20);
    v0 = s2 + v0;
    ST32(v0, a1);
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869790;
L_08869790:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08869798;
L_08869798:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08869798; }
    goto L_088697BC;
L_088697BC:;
    a3 = s2 + 0;
    t0 = 0 + 0;
    goto L_088697C4;
L_088697C4:;
    a1 = a3 + 6;
    a2 = 0 + 0;
    goto L_088697CC;
L_088697CC:;
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v1 = LD32(s1);
    v0 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088697CC; }
    goto L_088697F4;
L_088697F4:;
    t0 = t0 + 1;
    v0 = (s32)t0 < 5;
    cnd_ = v0 != 0;
    a3 = a3 + 2;
    if (cnd_) { goto L_088697C4; }
    goto L_08869804;
L_08869804:;
    v0 = v1 + 3;
    ST32(s1, v0);
    sp = sp + 32;
    return;
}

/* 08869824 */
rv_t func_08869824(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08869824:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = 4;
    s0 = a0 + 0;
    { rv_t r_ = func_08867F2C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869848;
L_08869848:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869854;
L_08869854:;
    s0 = s0 + 6;
    goto L_08869858;
L_08869858:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869868;
L_08869868:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 2;
    if (cnd_) { goto L_08869858; }
    goto L_08869870;
L_08869870:;
    a1 = LD32(s2+20);
    a0 = s2 + 0;
    a1 = 0 - a1;
    a1 = a1 & 0x3;
    { rv_t r_ = func_0882D824(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869884;
L_08869884:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0886989C */
void func_0886989C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886989C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a2 = LD32(a1);
    a1 = 1;
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(s1+20);
    v0 = a0 + v0;
    ST32(v0, v1);
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_088698D4;
L_088698D4:;
    a2 = LD32(s1+4);
    a0 = s0 + 0;
    a1 = s1 + 8;
    ST32(s0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(s1+16);
    s0 = s0 + v0;
    ST32(s0, v1);
    func_08874844(a0, a1, 0, 0, 0);
    goto L_088698F8;
L_088698F8:;
    sp = sp + 16;
    return;
}

/* 0886990C */
rv_t func_0886990C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886990C:;
    v0 = D_08AF5E64 - (24164);
    v0 = v0 + 24164;
    v1 = v0 + 88;
    ST32(a0+16, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s1 = a0 + 16;
    s0 = a0 + 0;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_08869940;
L_08869940:;
    v0 = D_08AF5EDC - (24284);
    a3 = LD32(v0+24284);
    v0 = v0 + 24284;
    a0 = s0 + 0;
    ST32(s0, a3);
    a1 = v0 + 4;
    v1 = LD32(a3-12);
    a2 = LD32(v0+12);
    s0 = s0 + v1;
    ST32(s0, a2);
    func_08874844(a0, a1, 0, 0, 0);
    goto L_0886996C;
L_0886996C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869974;
L_08869974:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869988 */
rv_t func_08869988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869988:;
    v0 = D_08AF5E64 - (24164);
    v0 = v0 + 24164;
    v1 = v0 + 88;
    ST32(a0+16, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s1 = a0 + 16;
    s0 = a0 + 0;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_088699BC;
L_088699BC:;
    v1 = D_08AF5EDC - (24284);
    a3 = LD32(v1+24284);
    v1 = v1 + 24284;
    a1 = v1 + 4;
    ST32(s0, a3);
    a0 = s0 + 0;
    v0 = LD32(a3-12);
    a2 = LD32(v1+12);
    v0 = s0 + v0;
    ST32(v0, a2);
    func_08874844(a0, a1, 0, 0, 0);
    goto L_088699E8;
L_088699E8:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088699F0;
L_088699F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088699F8;
L_088699F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869A0C */
rv_t func_08869A0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869A0C:;
    sp = sp - 16;
    a1 = LD32(a0);
    v0 = LD32(a1-12);
    v0 = a0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08869A44; }
    goto L_08869A34;
L_08869A34:;
    v0 = LD32(a0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1+44); goto L_08869A54; }
    goto L_08869A44;
L_08869A44:;
    goto L_08869A48;
L_08869A48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08869A54:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869A5C;
L_08869A5C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08869A7C; }
    goto L_08869A64;
L_08869A64:;
    v0 = LD32(s0);
    v1 = LD32(v0+28);
    goto L_08869A6C;
L_08869A6C:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869A74;
L_08869A74:;
    goto L_08869A48;
L_08869A7C:;
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869A8C;
L_08869A8C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08869A44; }
    goto L_08869A94;
L_08869A94:;
    v0 = LD32(s0);
    v1 = LD32(v0+32);
    goto L_08869A6C;
}

/* 08869AA0 */
rv_t func_08869AA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869AA0:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08869B5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869AB8;
L_08869AB8:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869AC8;
L_08869AC8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869AD8 */
rv_t func_08869AD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869AD8:;
    sp = sp - 16;
    a1 = 1;
    { rv_t r_ = func_08869B5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869AE8;
L_08869AE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869AF4 */
rv_t func_08869AF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869AF4:;
    sp = sp - 16;
    a1 = 2;
    { rv_t r_ = func_08869B5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869B04;
L_08869B04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869B10 */
rv_t func_08869B10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869B10:;
    sp = sp - 16;
    a1 = 3;
    s0 = a0 + 0;
    { rv_t r_ = func_08869B5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869B28;
L_08869B28:;
    a0 = s0 + 0;
    { rv_t r_ = func_088680CC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869B30;
L_08869B30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869B40 */
rv_t func_08869B40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869B40:;
    sp = sp - 16;
    a1 = 4;
    { rv_t r_ = func_08869B5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869B50;
L_08869B50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869B5C */
rv_t func_08869B5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869B5C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    s0 = s0 << 1;
    v1 = LD32(a0);
    v0 = LD32(v1+56);
    t_ = v0;
    s0 = s0 + s1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869B88;
L_08869B88:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08869BC4; }
    goto L_08869B90;
L_08869B90:;
    v1 = LD_U16(s0+6);
    a0 = D_08B29170 - (-28304);
    v0 = 0xffff;
    f12 = BITSF(0);
    a0 = a0 - 28304;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08869BC4; }
    goto L_08869BAC;
L_08869BAC:;
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869BC0;
L_08869BC0:;
    goto L_08869BC4;
L_08869BC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869BD4 */
void func_08869BD4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08869BD4:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08873E94(a0, a1);
    goto L_08869BF0;
L_08869BF0:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s1, v0);
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = s1 + 0;
    func_08869E9C(a0, a1, a2, 0, 0, 0);
    goto L_08869C0C;
L_08869C0C:;
    v1 = LD_U8(sp);
    v0 = LD32(s1+28);
    a0 = s1 + 0;
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    a1 = 0 + 0;
    cnd_ = v1 != 0;
    ST32(s1+28, v0);
    if (cnd_) { goto L_08869C30; }
    goto L_08869C28;
L_08869C28:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_08869C30;
L_08869C30:;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869C38;
L_08869C38:;
    a0 = s1 + 0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869C40;
L_08869C40:;
    sp = sp + 32;
    return;
}

/* 08869C54 */
void func_08869C54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869C54:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08869C68;
L_08869C68:;
    v0 = D_08AF6018 - (24600);
    v1 = LD32(s0+28);
    v0 = v0 + 24600;
    ST32(s0, v0);
    v1 = v1 | 0x1;
    a0 = s0 + 0;
    ST32(s0+28, v1);
    a1 = 0 + 0;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869C8C;
L_08869C8C:;
    a0 = s0 + 0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08869C94;
L_08869C94:;
    sp = sp + 16;
    return;
}

/* 08869CA4 */
rv_t func_08869CA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869CA4:;
    sp = sp - 16;
    { rv_t r_ = func_08874CD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869CB4;
L_08869CB4:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869CC4 */
rv_t func_08869CC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08869CC4:;
    sp = sp - 32;
    v0 = 3;
    a2 = sp + 0;
    ST32(sp, v0);
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08869CEC;
L_08869CEC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08869CEC; }
    goto L_08869D14;
L_08869D14:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08874EDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869D20;
L_08869D20:;
    v0 = LD32(s1+28);
    a2 = sp + 4;
    a1 = 0 + 0;
    v0 = v0 & 0x1;
    ST32(sp+4, v0);
    goto L_08869D34;
L_08869D34:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08869D34; }
    goto L_08869D5C;
L_08869D5C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08869D70 */
rv_t func_08869D70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869D70:;
    sp = sp - 16;
    s2 = a0 + 0;
    s0 = a1 + 0;
    s1 = LD32(a0+28);
    a0 = a1 + 0;
    a1 = 3;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869D9C;
L_08869D9C:;
    s1 = s1 & 0x1;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869DAC;
L_08869DAC:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869DB8;
L_08869DB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08869DD0 */
rv_t func_08869DD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08869DD0:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869DF4;
L_08869DF4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869E00;
L_08869E00:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869E0C;
L_08869E0C:;
    a2 = LD32(s1+28);
    v0 = LD32(sp+4);
    a0 = a2 & 0x1;
    s0 = 0 < v0;
    cnd_ = a0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08869E2C; }
    goto L_08869E24;
L_08869E24:;
    cnd_ = s0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08869E90; }
    goto L_08869E2C;
L_08869E2C:;
    cnd_ = v1 == 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_08869E40; }
    goto L_08869E34;
L_08869E34:;
    cnd_ = s0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08869E78; }
    goto L_08869E3C;
L_08869E3C:;
    v0 = a2 + 0;
    goto L_08869E40;
L_08869E40:;
    v0 = (v0 & ~(0x1u << 0)) | ((s0 & 0x1) << 0);
    a0 = s1 + 0;
    a1 = 0 + 0;
    cnd_ = s0 != 0;
    ST32(s1+28, v0);
    if (cnd_) { goto L_08869E5C; }
    goto L_08869E54;
L_08869E54:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_08869E5C;
L_08869E5C:;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869E64;
L_08869E64:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08869E78:;
    v0 = LD32(s1);
    v1 = LD32(v0+76);
    goto L_08869E80;
L_08869E80:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869E88;
L_08869E88:;
    a2 = LD32(s1+28);
    goto L_08869E3C;
L_08869E90:;
    v0 = LD32(s1);
    v1 = LD32(v0+72);
    goto L_08869E80;
}

/* 08869E9C */
void func_08869E9C(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08869E9C:;
    sp = sp - 32;
    t0 = sp + 0;
    a3 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    goto L_08869EBC;
L_08869EBC:;
    a1 = LD32(s0);
    a3 = a3 + 1;
    a0 = a3 < 0x4u;
    v1 = LD_U8(a1);
    v0 = a1 + 1;
    ST32(s0, v0);
    ST8(t0, v1);
    cnd_ = a0 != 0;
    t0 = t0 + 1;
    if (cnd_) { goto L_08869EBC; }
    goto L_08869EE0;
L_08869EE0:;
    v1 = LD32(sp);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_08869F64; }
    goto L_08869EF0;
L_08869EF0:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = sp + 4; goto L_08869F0C; }
    goto L_08869EF8;
L_08869EF8:;
    cnd_ = a2 == 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08869F54; }
    goto L_08869F00;
L_08869F00:;
    a1 = s0 + 0;
    { rv_t r_ = func_08874CE4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869F08;
L_08869F08:;
    a2 = sp + 4;
    goto L_08869F0C;
L_08869F0C:;
    a1 = 0 + 0;
    goto L_08869F10;
L_08869F10:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08869F10; }
    goto L_08869F34;
L_08869F34:;
    v0 = LD32(sp+4);
    v0 = 0 < v0;
    ST8(s1, v0);
    goto L_08869F40;
L_08869F40:;
    sp = sp + 32;
    return;
L_08869F54:;
    a0 = s0 + 0;
    func_08874E18(a0);
    goto L_08869F5C;
L_08869F5C:;
    a2 = sp + 4;
    goto L_08869F0C;
L_08869F64:;
    v0 = a1 - 3;
    ST32(s0, v0);
    goto L_08869F40;
}

/* 08869F70 */
rv_t func_08869F70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08869F70:;
    sp = sp - 32;
    s0 = a0 + 0;
    a2 = s0 + 0;
    a0 = a1 + 0;
    a1 = sp + 0;
    func_08869E9C(a0, a1, a2, t1, t2, t3);
    goto L_08869F90;
L_08869F90:;
    a0 = s0 + 0;
    v1 = LD_U8(sp);
    v0 = LD32(s0+28);
    a1 = 0 + 0;
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    cnd_ = v1 != 0;
    ST32(s0+28, v0);
    if (cnd_) { goto L_08869FB4; }
    goto L_08869FAC;
L_08869FAC:;
    a0 = s0 + 0;
    a1 = 1;
    goto L_08869FB4;
L_08869FB4:;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08869FBC;
L_08869FBC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08869FCC */
rv_t func_08869FCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08869FCC:;
    sp = sp - 16;
    v1 = 1;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886A04C; }
    goto L_08869FEC;
L_08869FEC:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0886A04C; }
    goto L_08869FF4;
L_08869FF4:;
    a1 = LD_U16(a1+16);
    v0 = a1 < 0xbu;
    cnd_ = v0 == 0;
    v0 = a1 << 2;
    if (cnd_) { goto L_0886A04C; }
    goto L_0886A004;
L_0886A004:;
    v1 = D_08AD4A2C - (18988);
    v1 = v1 + 18988;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0886A01Cu: goto L_0886A01C; case 0x0886A060u: goto L_0886A060; case 0x0886A094u: goto L_0886A094; case 0x0886A0B4u: goto L_0886A0B4; case 0x0886A0E0u: goto L_0886A0E0; case 0x0886A0E8u: goto L_0886A0E8; default: rs_break(0, 0x0886a014); }
L_0886A01C:;
    v0 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0+88);
    goto L_0886A028;
L_0886A028:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A030;
L_0886A030:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_0886A040;
L_0886A040:;
    ST32(s0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A048;
L_0886A048:;
    v1 = 1;
    goto L_0886A04C;
L_0886A04C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886A060:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0886A04C; }
    goto L_0886A070;
L_0886A070:;
    v0 = LD32(s0);
    v1 = LD32(v0+72);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A080;
L_0886A080:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x1;
    goto L_0886A040;
L_0886A094:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_0886A04C; }
    goto L_0886A0A4;
L_0886A0A4:;
    v0 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0+76);
    goto L_0886A028;
L_0886A0B4:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_0886A04C; }
    goto L_0886A0C4;
L_0886A0C4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+80);
    goto L_0886A0D0;
L_0886A0D0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A0D8;
L_0886A0D8:;
    v1 = 1;
    goto L_0886A04C;
L_0886A0E0:;
    v1 = 0 + 0;
    goto L_0886A04C;
L_0886A0E8:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_0886A04C; }
    goto L_0886A0F8;
L_0886A0F8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+84);
    goto L_0886A0D0;
}

/* 0886A108 */
rv_t func_0886A108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A108:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = LD32(a0+28);
    v0 = v0 | 0x1;
    ST32(a0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A124;
L_0886A124:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A130 */
rv_t func_0886A130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A130:;
    sp = sp - 16;
    a1 = 1;
    v0 = LD32(a0+28);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A14C;
L_0886A14C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A158 */
rv_t func_0886A158(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A158:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+8);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A174;
L_0886A174:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A18C;
L_0886A18C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A19C */
void func_0886A19C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_0886A19C:;
    sp = sp - 144;
    s3 = D_08B28F74 - (-28812);
    s2 = s3 - 28812;
    s1 = a0 + 0;
    func_08869C54(a0, a1);
    goto L_0886A1C4;
L_0886A1C4:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    {v0=FBITS(v[50]);}
    f0 = BITSF(v0);
    f2 = BITSF(0);
    {v0=FBITS(v[54]);}
    f8 = f0;
    f9 = BITSF(v0);
    {v0=FBITS(v[58]);}
    f10 = BITSF(v0);
    {v0=FBITS(v[48]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[49]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[52]);}
    f7 = BITSF(v0);
    {v0=FBITS(v[53]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[56]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[57]);}
    f0 = BITSF(v0);
    v0 = D_08AF5FB0 - (24496);
    v1 = s1 + 44;
    a1 = s1 + 32;
    v0 = v0 + 24496;
    ST32(a1+4, FBITS(f2));
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a0 = 12;
    ST32(s1+32, FBITS(f2));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    ST32(s1, v0);
    ST32(a1+8, FBITS(f2));
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(v1+32, FBITS(f10));
    ST32(v1+4, FBITS(f6));
    ST32(v1+8, FBITS(f8));
    ST32(v1+12, FBITS(f7));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f9));
    ST32(v1+24, FBITS(f5));
    ST32(v1+28, FBITS(f0));
    ST32(s1+44, FBITS(f3));
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    ST32(sp, FBITS(f3));
    v0 = v0 - 1;
    s0 = s0 & v0;
    ST32(sp+4, FBITS(f6));
    s0 = s0 << 2;
    ST32(sp+8, FBITS(f8));
    ST32(sp+12, FBITS(f7));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f9));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f0));
    ST32(sp+32, FBITS(f10));
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A2AC;
L_0886A2AC:;
    a0 = LD32(s3-28812);
    v1 = LD32(s2+12);
    ST32(v0, s1);
    s0 = s0 + a0;
    v1 = v1 + 1;
    a0 = LD32(s0);
    ST32(s2+12, v1);
    ST32(v0+4, a0);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 144;
    return;
}

/* 0886A2F0 */
u64 func_0886A2F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A2F0:;
    sp = sp - 16;
    a1 = D_08B28F74 - (-28812);
    s1 = a1 - 28812;
    s0 = a0 + 0;
    v0 = LD32(s1+4);
    v1 = LD32(a0+4);
    a0 = LD32(a1-28812);
    v0 = v0 - 1;
    v1 = v1 & v0;
    a1 = v1 << 2;
    a0 = a1 + a0;
    a0 = LD32(a0);
    v0 = D_08AF5FB0 - (24496);
    v0 = v0 + 24496;
    ST32(s0, v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0886A35C; }
    goto L_0886A340;
L_0886A340:;
    v0 = LD32(a0);
    goto L_0886A344;
L_0886A344:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0886A384; }
    goto L_0886A34C;
L_0886A34C:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0886A344; }
    goto L_0886A35C;
L_0886A35C:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886A370;
L_0886A370:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0886A384:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0886A394; }
    goto L_0886A38C;
L_0886A38C:;
    ST8(a0+8, v0);
    goto L_0886A35C;
L_0886A394:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0886A3BC; }
    goto L_0886A39C;
L_0886A39C:;
    v0 = LD32(a0+4);
    ST32(v1+4, v0);
    goto L_0886A3A4;
L_0886A3A4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886A3AC;
L_0886A3AC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0886A35C;
L_0886A3BC:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_0886A3A4;
}

/* 0886A3CC */
rv_t func_0886A3CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A3CC:;
    v0 = D_08AF5FB0 - (24496);
    v0 = v0 + 24496;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F74 - (-28812);
    a1 = s0 + 0;
    a0 = a0 - 28812;
    func_08AAF414(a0, a1, t1, t2, t3);
    goto L_0886A3F8;
L_0886A3F8:;
    v1 = D_08AF6018 - (24600);
    v1 = v1 + 24600;
    ST32(s0, v1);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886A40C;
L_0886A40C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A41C */
rv_t func_0886A41C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A41C:;
    v0 = D_08AF5FB0 - (24496);
    v0 = v0 + 24496;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F74 - (-28812);
    a1 = s0 + 0;
    a0 = a0 - 28812;
    func_08AAF414(a0, a1, t1, t2, t3);
    goto L_0886A448;
L_0886A448:;
    v1 = D_08AF6018 - (24600);
    v1 = v1 + 24600;
    ST32(s0, v1);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886A45C;
L_0886A45C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886A464;
L_0886A464:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A474 */
rv_t func_0886A474(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886A474:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08869F70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A490;
L_0886A490:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0886A498;
L_0886A498:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886A498; }
    goto L_0886A4BC;
L_0886A4BC:;
    a1 = s1 + 32;
    a2 = 0 + 0;
    goto L_0886A4C4;
L_0886A4C4:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0xcu;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886A4C4; }
    goto L_0886A4EC;
L_0886A4EC:;
    a1 = s1 + 44;
    a2 = 0 + 0;
    goto L_0886A4F4;
L_0886A4F4:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x24u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886A4F4; }
    goto L_0886A51C;
L_0886A51C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A530 */
rv_t func_0886A530(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A530:;
    sp = sp - 16;
    { rv_t r_ = func_08869CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A540;
L_0886A540:;
    v0 = v0 + 52;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A550 */
rv_t func_0886A550(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0886A550:;
    sp = sp - 96;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08869CC4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A56C;
L_0886A56C:;
    a2 = sp + 64;
    ST32(sp+64, 0);
    a1 = 0 + 0;
    goto L_0886A578;
L_0886A578:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886A578; }
    goto L_0886A5A0;
L_0886A5A0:;
    v0 = s1 + 32;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s1+32));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    a2 = sp + 0;
    a1 = 0 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    goto L_0886A5C4;
L_0886A5C4:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0xcu;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886A5C4; }
    goto L_0886A5EC;
L_0886A5EC:;
    v0 = s1 + 44;
    f0 = BITSF(LD32(s1+44));
    f8 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+16, FBITS(f0));
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
    goto L_0886A640;
L_0886A640:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x24u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886A640; }
    goto L_0886A668;
L_0886A668:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A67C */
rv_t func_0886A67C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A67C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08869D70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A698;
L_0886A698:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A6A4;
L_0886A6A4:;
    a1 = s0 + 32;
    a0 = s1 + 0;
    s0 = s0 + 44;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A6B4;
L_0886A6B4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882E164(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A6C0;
L_0886A6C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A6D4 */
rv_t func_0886A6D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886A6D4:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08869DD0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A6F0;
L_0886A6F0:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A6FC;
L_0886A6FC:;
    a1 = s0 + 32;
    a0 = s1 + 0;
    s0 = s0 + 44;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A70C;
L_0886A70C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882E0F4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A718;
L_0886A718:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A72C */
rv_t func_0886A72C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886A72C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886A7AC; }
    goto L_0886A760;
L_0886A760:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0886A784; }
    goto L_0886A774;
L_0886A774:;
    v0 = D_08B28F74 - (-28812);
    a0 = LD32(v0-28812);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0886A79C; }
    goto L_0886A784;
L_0886A784:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886A79C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886A7A4;
L_0886A7A4:;
    goto L_0886A784;
L_0886A7AC:;
    s3 = D_08B28F74 - (-28812);
    s0 = s3 - 28812;
    a0 = 64;
    v0 = 16;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A7C4;
L_0886A7C4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28812, v0);
    if (cnd_) { goto L_0886A7F0; }
    goto L_0886A7D4;
L_0886A7D4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0886A7DC;
L_0886A7DC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0886A7DC; }
    goto L_0886A7F0;
L_0886A7F0:;
    v0 = s3 - 28812;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0886A760;
}

/* 0886A800 */
rv_t func_0886A800(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A800:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0886A72C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A814;
L_0886A814:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A820 */
rv_t func_0886A820(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886A820:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0886A72C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A834;
L_0886A834:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886A840 */
void func_0886A840(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_0886A840:;
    sp = sp - 160;
    s2 = a0 + 0;
    s1 = a2 + 0;
    func_08872328(a0, a1, a2);
    goto L_0886A860;
L_0886A860:;
    v0 = D_08AF6080 - (24704);
    v0 = v0 + 24704;
    ST32(s2, v0);
    v0 = 20;
    a2 = sp + 128;
    ST16(s2+8, v0);
    a1 = 0 + 0;
    ST32(s2+48, 0);
    ST32(s2+52, 0);
    goto L_0886A884;
L_0886A884:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886A884; }
    goto L_0886A8A8;
L_0886A8A8:;
    a0 = LD32(sp+128);
    v1 = a0 ^ 0x4;
    v0 = a0 ^ 0x2;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = sp + 0; goto L_0886AA5C; }
    goto L_0886A8C8;
L_0886A8C8:;
    v0 = 3;
    cnd_ = a0 == v0;
    v0 = 1;
    if (cnd_) { goto L_0886AA58; }
    goto L_0886A8D4;
L_0886A8D4:;
    a2 = sp + 96;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0886A9E8; }
    goto L_0886A8E0;
L_0886A8E0:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x20u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886A8E0; }
    goto L_0886A904;
L_0886A904:;
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    a0 = LD32(sp+124);
    ST32(sp+16, v0);
    v0 = LD32(sp+104);
    ST32(sp+20, v1);
    ST32(sp+24, v0);
    v0 = LD32(sp+112);
    v1 = LD32(sp+108);
    ST32(sp+32, v0);
    v0 = LD32(sp+120);
    ST32(sp+28, v1);
    v1 = LD32(sp+116);
    ST32(s2+40, v0);
    v0 = 999;
    ST32(sp+36, v1);
    ST32(s2+44, v0);
    goto L_0886A948;
L_0886A948:;
    ST32(s2+56, a0);
    v0 = 1;
    ST32(s2+48, v0);
    a0 = 40;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886A95C;
L_0886A95C:;
    v1 = LD32(sp+16);
    a1 = D_08B45ACC - (23244);
    a0 = LD32(a1+23244);
    ST32(v0, v1);
    a1 = a1 + 23244;
    v1 = LD32(sp+20);
    ST32(v0+24, a0);
    ST32(v0+4, v1);
    v1 = LD32(sp+24);
    a0 = LD32(a1+4);
    ST32(s2+52, v0);
    ST32(v0+8, v1);
    v1 = LD32(sp+28);
    ST32(v0+28, a0);
    ST32(v0+12, v1);
    a0 = LD32(a1+8);
    v1 = LD32(sp+32);
    ST32(v0+32, a0);
    ST32(v0+16, v1);
    a0 = LD32(a1+12);
    v1 = LD32(sp+36);
    ST32(v0+36, a0);
    ST32(v0+20, v1);
    goto L_0886A9B8;
L_0886A9B8:;
    v0 = LD32(sp+128);
    goto L_0886A9BC;
L_0886A9BC:;
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0886A9D4; }
    goto L_0886A9C8;
L_0886A9C8:;
    v0 = LD32(s2+56);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s2+56, v0);
    goto L_0886A9D4;
L_0886A9D4:;
    sp = sp + 160;
    return;
L_0886A9E8:;
    a2 = sp + 48;
    goto L_0886A9EC;
L_0886A9EC:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x24u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886A9EC; }
    goto L_0886AA10;
L_0886AA10:;
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    a0 = LD32(sp+76);
    ST32(sp+16, v0);
    v0 = LD32(sp+56);
    ST32(sp+20, v1);
    ST32(sp+24, v0);
    v1 = LD32(sp+60);
    v0 = LD32(sp+64);
    a1 = LD32(sp+80);
    ST32(sp+28, v1);
    ST32(sp+32, v0);
    v1 = LD32(sp+68);
    v0 = LD32(sp+72);
    ST32(s2+44, a1);
    ST32(sp+36, v1);
    ST32(s2+40, v0);
    goto L_0886A948;
L_0886AA58:;
    a2 = sp + 0;
    goto L_0886AA5C;
L_0886AA5C:;
    a1 = 0 + 0;
    goto L_0886AA60;
L_0886AA60:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x10u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886AA60; }
    goto L_0886AA84;
L_0886AA84:;
    v1 = LD32(sp+8);
    v0 = LD32(sp);
    a1 = LD32(sp+4);
    a0 = LD32(sp+12);
    ST32(s2+40, v0);
    v0 = 2;
    ST32(s2+44, v1);
    ST32(s2+48, a0);
    ST32(s2+56, a1);
    v1 = LD32(sp+128);
    cnd_ = v1 == v0;
    a1 = (a1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    if (cnd_) { goto L_0886AB88; }
    goto L_0886AAB4;
L_0886AAB4:;
    s0 = LD32(s2+48);
    a0 = s0 << 2;
    a0 = a0 + s0;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886AAC8;
L_0886AAC8:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_0886AAE4; }
    goto L_0886AAD4;
L_0886AAD4:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_0886AADC;
L_0886AADC:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_0886AADC; }
    goto L_0886AAE4;
L_0886AAE4:;
    v0 = LD32(s2+48);
    ST32(s2+52, a0);
    cnd_ = (s32)v0 <= 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_0886A9B8; }
    goto L_0886AAF4;
L_0886AAF4:;
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_0886AAFC;
L_0886AAFC:;
    v0 = LD32(s2+52);
    a2 = 0 + 0;
    a1 = v0 + a3;
    goto L_0886AB08;
L_0886AB08:;
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x18u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0886AB08; }
    goto L_0886AB30;
L_0886AB30:;
    v0 = LD32(s2+52);
    a2 = 0 + 0;
    v0 = v0 + t0;
    a1 = v0 + 24;
    goto L_0886AB40;
L_0886AB40:;
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x10u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0886AB40; }
    goto L_0886AB68;
L_0886AB68:;
    v0 = LD32(s2+48);
    t1 = t1 + 1;
    a3 = a3 + 40;
    v0 = (s32)t1 < (s32)v0;
    cnd_ = v0 != 0;
    t0 = t0 + 40;
    if (cnd_) { goto L_0886AAFC; }
    goto L_0886AB80;
L_0886AB80:;
    v0 = LD32(sp+128);
    goto L_0886A9BC;
L_0886AB88:;
    ST32(s2+56, a1);
    goto L_0886AAB4;
}

/* 0886AB90 */
u64 func_0886AB90(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886AB90:;
    sp = sp - 16;
    v0 = D_08AF6080 - (24704);
    s0 = a0 + 0;
    v0 = v0 + 24704;
    v1 = LD32(a0+52);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886ABDC; }
    goto L_0886ABB8;
L_0886ABB8:;
    v0 = D_08AF6018 - (24600);
    goto L_0886ABBC;
L_0886ABBC:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886ABCC;
L_0886ABCC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0886ABDC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886ABE4;
L_0886ABE4:;
    v0 = D_08AF6018 - (24600);
    goto L_0886ABBC;
}

/* 0886ABEC */
rv_t func_0886ABEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886ABEC:;
    sp = sp - 16;
    v0 = D_08AF6080 - (24704);
    s0 = a0 + 0;
    v0 = v0 + 24704;
    v1 = LD32(a0+52);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886AC38; }
    goto L_0886AC14;
L_0886AC14:;
    v0 = D_08AF6018 - (24600);
    goto L_0886AC18;
L_0886AC18:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886AC28;
L_0886AC28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886AC38:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886AC40;
L_0886AC40:;
    v0 = D_08AF6018 - (24600);
    goto L_0886AC18;
}

/* 0886AC48 */
rv_t func_0886AC48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886AC48:;
    sp = sp - 16;
    v0 = D_08AF6080 - (24704);
    s0 = a0 + 0;
    v0 = v0 + 24704;
    v1 = LD32(a0+52);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886AC9C; }
    goto L_0886AC70;
L_0886AC70:;
    v0 = D_08AF6018 - (24600);
    goto L_0886AC74;
L_0886AC74:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886AC84;
L_0886AC84:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886AC8C;
L_0886AC8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886AC9C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886ACA4;
L_0886ACA4:;
    v0 = D_08AF6018 - (24600);
    goto L_0886AC74;
}

/* 0886ACAC */
rv_t func_0886ACAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886ACAC:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = LD32(a0+56);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886ACE0; }
    goto L_0886ACCC;
L_0886ACCC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886ACE0:;
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886ACF0;
L_0886ACF0:;
    v1 = LD32(s0+56);
    a0 = v1 | 0x1;
    v1 = (v1 >> 2) & 0x1;
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_0886ACCC; }
    goto L_0886AD04;
L_0886AD04:;
    ST32(s0+56, a0);
    a1 = 1;
    goto L_0886ACCC;
}

/* 0886AD10 */
rv_t func_0886AD10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886AD10:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = LD32(a0+56);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886AD44; }
    goto L_0886AD30;
L_0886AD30:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886AD44:;
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886AD54;
L_0886AD54:;
    a0 = LD32(s0+56);
    a1 = 0 + 0;
    v1 = (a0 >> 2) & 0x1;
    cnd_ = v0 != v1;
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_0886AD30; }
    goto L_0886AD68;
L_0886AD68:;
    ST32(s0+56, a0);
    a1 = 1;
    goto L_0886AD30;
}

/* 0886AD74 */
rv_t func_0886AD74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0886AD74:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0886AD7C */
rv_t func_0886AD7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886AD7C:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = 0 + 0;
    v0 = LD32(a0+48);
    cnd_ = (s32)v0 <= 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886ADDC; }
    goto L_0886ADA8;
L_0886ADA8:;
    s1 = 0 + 0;
    a0 = LD32(s0+52);
    goto L_0886ADB0;
L_0886ADB0:;
    a1 = s3 + 0;
    s2 = s2 + 1;
    a0 = a0 + s1;
    { rv_t r_ = func_08836448(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886ADC0;
L_0886ADC0:;
    s1 = s1 + 40;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0886ADE0; }
    goto L_0886ADCC;
L_0886ADCC:;
    v0 = LD32(s0+48);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+52); goto L_0886ADB0; }
    goto L_0886ADDC;
L_0886ADDC:;
    v1 = 0 + 0;
    goto L_0886ADE0;
L_0886ADE0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0886AE00 */
rv_t func_0886AE00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886AE00:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08872604(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886AE14;
L_0886AE14:;
    v0 = LD32(s0+56);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0886AE34; }
    goto L_0886AE24;
L_0886AE24:;
    goto L_0886AE28;
L_0886AE28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886AE34:;
    v0 = LD32(s0);
    v1 = LD32(v0+76);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886AE44;
L_0886AE44:;
    goto L_0886AE28;
}

/* 0886AE4C */
rv_t func_0886AE4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886AE4C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08872664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886AE60;
L_0886AE60:;
    a0 = LD32(s0+48);
    v1 = a0 << 1;
    v1 = v1 + a0;
    v1 = v1 << 3;
    v0 = v0 + v1;
    a0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 + 20;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886AE90 */
rv_t func_0886AE90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_0886AE90:;
    sp = sp - 112;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08872684(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886AEAC;
L_0886AEAC:;
    v0 = 4;
    ST32(sp+80, v0);
    a2 = sp + 80;
    a1 = 0 + 0;
    goto L_0886AEBC;
L_0886AEBC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886AEBC; }
    goto L_0886AEE4;
L_0886AEE4:;
    v0 = LD32(s1+40);
    v1 = LD32(s1+56);
    a0 = LD32(s1+44);
    a1 = LD32(s1+48);
    ST32(sp+16, v0);
    a3 = sp + 16;
    a2 = 0 + 0;
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a1);
    goto L_0886AF1C;
L_0886AF1C:;
    v0 = LD_U8(a3);
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x10u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886AF1C; }
    goto L_0886AF44;
L_0886AF44:;
    v0 = LD32(s1+48);
    cnd_ = (s32)v0 <= 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_0886B03C; }
    goto L_0886AF50;
L_0886AF50:;
    t2 = sp + 32;
    t3 = sp + 64;
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_0886AF60;
L_0886AF60:;
    a0 = LD32(s1+52);
    a2 = t2 + 0;
    a1 = 0 + 0;
    a0 = a3 + a0;
    v0 = LD32(a0);
    ST32(sp+32, v0);
    v1 = LD32(a0+4);
    ST32(sp+36, v1);
    v0 = LD32(a0+8);
    ST32(sp+40, v0);
    v1 = LD32(a0+12);
    ST32(sp+44, v1);
    v0 = LD32(a0+16);
    ST32(sp+48, v0);
    v1 = LD32(a0+20);
    ST32(sp+52, v1);
    goto L_0886AFA0;
L_0886AFA0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x18u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886AFA0; }
    goto L_0886AFC8;
L_0886AFC8:;
    v0 = LD32(s1+52);
    a2 = t3 + 0;
    a1 = 0 + 0;
    v0 = t0 + v0;
    a0 = LD32(v0+24);
    v0 = v0 + 24;
    ST32(sp+64, a0);
    v1 = LD32(v0+4);
    ST32(sp+68, v1);
    a0 = LD32(v0+8);
    ST32(sp+72, a0);
    v1 = LD32(v0+12);
    ST32(sp+76, v1);
    goto L_0886AFFC;
L_0886AFFC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x10u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886AFFC; }
    goto L_0886B024;
L_0886B024:;
    v0 = LD32(s1+48);
    t1 = t1 + 1;
    a3 = a3 + 40;
    v0 = (s32)t1 < (s32)v0;
    cnd_ = v0 != 0;
    t0 = t0 + 40;
    if (cnd_) { goto L_0886AF60; }
    goto L_0886B03C;
L_0886B03C:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
}

/* 0886B050 */
rv_t func_0886B050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886B050:;
    sp = sp - 32;
    s2 = a1 + 0;
    s3 = 0 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08872770(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B078;
L_0886B078:;
    a0 = s2 + 0;
    a1 = 4;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B084;
L_0886B084:;
    a1 = LD32(s0+40);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B090;
L_0886B090:;
    a1 = LD32(s0+56);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B09C;
L_0886B09C:;
    a1 = LD32(s0+44);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B0A8;
L_0886B0A8:;
    a1 = LD32(s0+48);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B0B4;
L_0886B0B4:;
    v1 = LD32(s0+48);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0886B0F8; }
    goto L_0886B0C0;
L_0886B0C0:;
    a1 = LD32(s0+52);
    a0 = s2 + 0;
    s3 = s3 + 1;
    a1 = a1 + s1;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B0D4;
L_0886B0D4:;
    a1 = LD32(s0+52);
    a0 = s2 + 0;
    a1 = a1 + s1;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DCBC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B0E8;
L_0886B0E8:;
    v1 = LD32(s0+48);
    v1 = (s32)s3 < (s32)v1;
    cnd_ = v1 != 0;
    s1 = s1 + 40;
    if (cnd_) { goto L_0886B0C0; }
    goto L_0886B0F8;
L_0886B0F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0886B114 */
rv_t func_0886B114(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0886B114:;
    sp = sp - 48;
    s2 = a1 + 0;
    s3 = 0 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_088727F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B13C;
L_0886B13C:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B148;
L_0886B148:;
    s0 = s1 + 56;
    a1 = s1 + 40;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B158;
L_0886B158:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B164;
L_0886B164:;
    a1 = s1 + 44;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B170;
L_0886B170:;
    a1 = s1 + 48;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B17C;
L_0886B17C:;
    v1 = LD32(s1+48);
    cnd_ = (s32)v1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0886B1C0; }
    goto L_0886B188;
L_0886B188:;
    a1 = LD32(s1+52);
    a0 = s2 + 0;
    s3 = s3 + 1;
    a1 = a1 + s0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0886B19C;
L_0886B19C:;
    a1 = LD32(s1+52);
    a0 = s2 + 0;
    a1 = a1 + s0;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B1B0;
L_0886B1B0:;
    v1 = LD32(s1+48);
    v1 = (s32)s3 < (s32)v1;
    cnd_ = v1 != 0;
    s0 = s0 + 40;
    if (cnd_) { goto L_0886B188; }
    goto L_0886B1C0;
L_0886B1C0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0886B1DC */
void func_0886B1DC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886B1DC:;
    sp = sp - 32;
    s1 = a2 + 0;
    s0 = a0 + 0;
    func_0886A840(a0, a1, a2);
    goto L_0886B1F8;
L_0886B1F8:;
    v0 = 40;
    ST16(s0+8, v0);
    v0 = D_08AF60F8 - (24824);
    v0 = v0 + 24824;
    ST32(s0, v0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0886B214;
L_0886B214:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886B214; }
    goto L_0886B238;
L_0886B238:;
    sp = sp + 32;
    return;
}

/* 0886B24C */
rv_t func_0886B24C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886B24C:;
    sp = sp - 16;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a1 = 0 + 0;
    a0 = 3;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886B270;
L_0886B270:;
    v1 = 2;
    ST32(v0, v1);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(s0+4);
    a2 = 1;
    ST32(v0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B290;
L_0886B290:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886B2A0 */
rv_t func_0886B2A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886B2A0:;
    sp = sp - 16;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a1 = 0 + 0;
    a0 = 4;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886B2C4;
L_0886B2C4:;
    v1 = 2;
    ST32(v0, v1);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(s0+4);
    a2 = 1;
    ST32(v0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B2E4;
L_0886B2E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886B2F4 */
rv_t func_0886B2F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886B2F4:;
    sp = sp - 16;
    { rv_t r_ = func_0886AE4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B304;
L_0886B304:;
    v0 = v0 + 4;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886B314 */
rv_t func_0886B314(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886B314:;
    sp = sp - 32;
    s0 = a1 + 0;
    { rv_t r_ = func_0886AE90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B328;
L_0886B328:;
    a2 = sp + 0;
    ST32(sp, 0);
    a1 = 0 + 0;
    goto L_0886B334;
L_0886B334:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886B334; }
    goto L_0886B35C;
L_0886B35C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0886B36C */
void func_0886B36C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_0886B36C:;
    sp = sp - 112;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08872328(a0, a1, a2);
    goto L_0886B388;
L_0886B388:;
    v0 = D_08AF6170 - (24944);
    v0 = v0 + 24944;
    ST32(s1, v0);
    ST32(s1+40, 0);
    v0 = func_0883B10C(0, 0, 0, 0, 0, 0, 0);
    goto L_0886B39C;
L_0886B39C:;
    a0 = LDU32(v0);
    a1 = LDU32(v0+4);
    STU32(s1+44, a0);
    STU32(s1+48, a1);
    v1 = 999;
    v0 = 36;
    ST32(s1+96, v1);
    a2 = sp + 80;
    a1 = 0 + 0;
    ST16(s1+8, v0);
    ST32(s1+52, 0);
    ST8(s1+56, 0);
    ST32(s1+60, 0);
    ST32(s1+64, 0);
    ST8(s1+68, 0);
    ST32(s1+72, 0);
    ST32(s1+76, 0);
    ST32(s1+80, 0);
    ST32(s1+84, 0);
    ST32(s1+88, 0);
    ST32(s1+92, v1);
    goto L_0886B400;
L_0886B400:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886B400; }
    goto L_0886B424;
L_0886B424:;
    v1 = LD32(sp+80);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = sp + 0; goto L_0886B530; }
    goto L_0886B434;
L_0886B434:;
    cnd_ = v1 != 0;
    a2 = sp + 48;
    if (cnd_) { goto L_0886B4F0; }
    goto L_0886B43C;
L_0886B43C:;
    a1 = 0 + 0;
    goto L_0886B440;
L_0886B440:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x1cu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886B440; }
    goto L_0886B464;
L_0886B464:;
    v0 = LD32(sp+48);
    a0 = LD32(sp+64);
    a1 = LD32(sp+68);
    a2 = LD32(sp+72);
    f1 = BITSF(LD32(sp+60));
    f0 = BITSF(LD32(sp+56));
    ST32(s1+64, v0);
    v1 = 999;
    t0 = 0 + 0;
    v0 = LD_U8(sp+52);
    ST32(s1+72, FBITS(f0));
    a3 = s1 + 0;
    ST8(s1+68, v0);
    ST32(s1+76, FBITS(f1));
    ST32(s1+80, a0);
    ST32(s1+84, a1);
    ST32(s1+88, a2);
    ST32(s1+96, v1);
    ST32(s1+92, v1);
    goto L_0886B4B0;
L_0886B4B0:;
    a1 = a3 + 100;
    a2 = 0 + 0;
    goto L_0886B4B8;
L_0886B4B8:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886B4B8; }
    goto L_0886B4E0;
L_0886B4E0:;
    t0 = t0 + 1;
    v0 = (s32)t0 < 6;
    cnd_ = v0 != 0;
    a3 = a3 + 2;
    if (cnd_) { goto L_0886B4B0; }
    goto L_0886B4F0;
L_0886B4F0:;
    a0 = s1 + 0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886B4F8;
L_0886B4F8:;
    v0 = func_0883B10C(0, 0, 0, 0, 0, 0, 0);
    goto L_0886B500;
L_0886B500:;
    a1 = LD_U8(v0+5);
    s0 = v0 + 0;
    a0 = s1 + 0;
    func_0886BB78(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0886B510;
L_0886B510:;
    a1 = LD_U8(s0+6);
    a0 = s1 + 0;
    func_0886C074(a0, a1);
    goto L_0886B51C;
L_0886B51C:;
    sp = sp + 112;
    return;
L_0886B530:;
    a1 = 0 + 0;
    goto L_0886B534;
L_0886B534:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x24u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886B534; }
    goto L_0886B558;
L_0886B558:;
    v0 = LD32(sp);
    v1 = LD32(sp+16);
    a0 = LD32(sp+20);
    a1 = LD32(sp+24);
    a2 = LD32(sp+28);
    a3 = LD32(sp+32);
    f1 = BITSF(LD32(sp+12));
    f0 = BITSF(LD32(sp+8));
    ST32(s1+64, v0);
    t1 = 0 + 0;
    t0 = s1 + 0;
    v0 = LD_U8(sp+4);
    ST32(s1+72, FBITS(f0));
    ST8(s1+68, v0);
    ST32(s1+76, FBITS(f1));
    ST32(s1+80, v1);
    ST32(s1+84, a0);
    ST32(s1+88, a1);
    ST32(s1+92, a2);
    ST32(s1+96, a3);
    goto L_0886B5A8;
L_0886B5A8:;
    a1 = t0 + 100;
    a2 = 0 + 0;
    goto L_0886B5B0;
L_0886B5B0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886B5B0; }
    goto L_0886B5D8;
L_0886B5D8:;
    t1 = t1 + 1;
    v0 = (s32)t1 < 6;
    cnd_ = v0 != 0;
    t0 = t0 + 2;
    if (cnd_) { goto L_0886B5A8; }
    goto L_0886B5E8;
L_0886B5E8:;
    goto L_0886B4F0;
}

/* 0886B5F0 */
rv_t func_0886B5F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886B5F0:;
    sp = sp - 16;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886B63C; }
    goto L_0886B610;
L_0886B610:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+40));
    f1 = BITSF(0);
    f2 = f0 - f2;
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    ST32(a0+40, FBITS(f2));
    if (cnd_) { goto L_0886B650; }
    goto L_0886B634;
L_0886B634:;
    a0 = s0 + 0;
    { rv_t r_ = func_0886BA44(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B63C;
L_0886B63C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886B650:;
    v0 = D_08B15B94 - (23444);
    f0 = BITSF(LD32(v0+23444));
    f0 = f2 + f0;
    ST32(a0+40, FBITS(f0));
    v0 = func_0883B10C(a1, a2, a3, t0, t1, t2, t3);
    goto L_0886B664;
L_0886B664:;
    a0 = LD32(s0+64);
    s1 = v0 + 0;
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_0886B68C; }
    goto L_0886B678;
L_0886B678:;
    v1 = LD_U8(s1+6);
    v0 = 15;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U8(s0+50); goto L_0886B88C; }
    goto L_0886B688;
L_0886B688:;
    v0 = a0 & 0x2;
    goto L_0886B68C;
L_0886B68C:;
    cnd_ = v0 == 0;
    v0 = a0 & 0x4;
    if (cnd_) { goto L_0886B6A8; }
    goto L_0886B694;
L_0886B694:;
    v1 = LD_U8(s1+6);
    v0 = 30;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U8(s0+50); goto L_0886B86C; }
    goto L_0886B6A4;
L_0886B6A4:;
    v0 = a0 & 0x4;
    goto L_0886B6A8;
L_0886B6A8:;
    cnd_ = v0 == 0;
    v0 = a0 & 0x8;
    if (cnd_) { goto L_0886B6C4; }
    goto L_0886B6B0;
L_0886B6B0:;
    v1 = LD_U8(s1+6);
    v0 = 45;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U8(s0+50); goto L_0886B84C; }
    goto L_0886B6C0;
L_0886B6C0:;
    v0 = a0 & 0x8;
    goto L_0886B6C4;
L_0886B6C4:;
    cnd_ = v0 == 0;
    a1 = LD_U8(s1+5);
    if (cnd_) { goto L_0886B844; }
    goto L_0886B6CC;
L_0886B6CC:;
    a2 = LD_U8(s0+49);
    v1 = a1 & 0xff;
    v0 = a2 & 0xff;
    cnd_ = v1 == v0;
    v0 = a0 & 0x10;
    if (cnd_) { goto L_0886B754; }
    goto L_0886B6E0;
L_0886B6E0:;
    a0 = s0 + 0;
    a1 = 3;
    f0 = func_0886BB34(a0, a1);
    goto L_0886B6EC;
L_0886B6EC:;
    v0 = LD_U8(s0+68);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+64); goto L_0886B840; }
    goto L_0886B6F8;
L_0886B6F8:;
    v1 = 1;
    ST32(s0+52, v1);
    v0 = 0xaaaa0000u;
    v0 = v0 | 0xaaab;
    a0 = LD_U8(s1+5);
    { u64 p_ = (u64)a0 * v0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v0 = hi;
    v0 = v0 >> 3;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    a0 = a0 - v1;
    v0 = a0 & 0xff;
    cnd_ = v0 != 0;
    ST8(s0+56, a0);
    if (cnd_) { goto L_0886B73C; }
    goto L_0886B734;
L_0886B734:;
    v0 = 12;
    ST8(s0+56, v0);
    goto L_0886B73C;
L_0886B73C:;
    f0 = BITSF(LD32(s0+72));
    a0 = LD32(s0+64);
    a2 = LD_U8(s0+49);
    ST32(s0+60, FBITS(f0));
    a1 = LD_U8(s1+5);
    goto L_0886B750;
L_0886B750:;
    v0 = a0 & 0x10;
    goto L_0886B754;
L_0886B754:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = a1 & 0xff; goto L_0886B790; }
    goto L_0886B75C;
L_0886B75C:;
    a0 = LD32(s0+80);
    v0 = a2 & 0xff;
    cnd_ = v0 == a0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0886B818; }
    goto L_0886B76C;
L_0886B76C:;
    t0 = 1;
    goto L_0886B770;
L_0886B770:;
    v0 = a1 & 0xff;
    goto L_0886B774;
L_0886B774:;
    cnd_ = v0 == a0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0886B7F4; }
    goto L_0886B77C;
L_0886B77C:;
    cnd_ = t0 == 0;
    if (cnd_) { a1 = a1 & 0xff; goto L_0886B790; }
    goto L_0886B784;
L_0886B784:;
    cnd_ = a3 != 0;
    if (cnd_) { a1 = 5; goto L_0886B7E0; }
    goto L_0886B78C;
L_0886B78C:;
    a1 = a1 & 0xff;
    goto L_0886B790;
L_0886B790:;
    v0 = a2 & 0xff;
    cnd_ = a1 == v0;
    if (cnd_) { a1 = LD_U8(s1+6); goto L_0886B7A8; }
    goto L_0886B79C;
L_0886B79C:;
    a0 = s0 + 0;
    func_0886BB78(a0, a1, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0886B7A4;
L_0886B7A4:;
    a1 = LD_U8(s1+6);
    goto L_0886B7A8;
L_0886B7A8:;
    v0 = LD_U8(s0+50);
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0886B7BC; }
    goto L_0886B7B4;
L_0886B7B4:;
    a0 = s0 + 0;
    func_0886C074(a0, a1);
    goto L_0886B7BC;
L_0886B7BC:;
    v0 = LDU32(s1);
    v1 = LDU32(s1+4);
    STU32(s0+44, v0);
    SWL(s0+51, v1);
    SWR(s0+48, v1);
    goto L_0886B634;
L_0886B7E0:;
    a0 = s0 + 0;
    f0 = func_0886BB34(a0, a1);
    goto L_0886B7E8;
L_0886B7E8:;
    a1 = LD_U8(s1+5);
    a2 = LD_U8(s0+49);
    goto L_0886B78C;
L_0886B7F4:;
    v1 = LD_U8(s1+6);
    v0 = LD32(s0+84);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0886B77C; }
    goto L_0886B804;
L_0886B804:;
    v0 = LD_U8(s1+7);
    v1 = LD32(s0+88);
    v0 = v0 ^ v1;
    a3 = v0 < 0x1u;
    goto L_0886B77C;
L_0886B818:;
    v1 = LD_U8(s0+50);
    v0 = LD32(s0+84);
    cnd_ = v1 != v0;
    if (cnd_) { t0 = 1; goto L_0886B770; }
    goto L_0886B828;
L_0886B828:;
    v1 = LD_U8(s0+51);
    v0 = LD32(s0+88);
    cnd_ = v1 != v0;
    if (cnd_) { t0 = 1; goto L_0886B770; }
    goto L_0886B838;
L_0886B838:;
    v0 = a1 & 0xff;
    goto L_0886B774;
L_0886B840:;
    a1 = LD_U8(s1+5);
    goto L_0886B844;
L_0886B844:;
    a2 = LD_U8(s0+49);
    goto L_0886B750;
L_0886B84C:;
    v0 = 44;
    cnd_ = v1 != v0;
    v0 = a0 & 0x8;
    if (cnd_) { goto L_0886B6C4; }
    goto L_0886B858;
L_0886B858:;
    a0 = s0 + 0;
    a1 = 2;
    f0 = func_0886BB34(a0, a1);
    goto L_0886B864;
L_0886B864:;
    a0 = LD32(s0+64);
    goto L_0886B6C0;
L_0886B86C:;
    v0 = 29;
    cnd_ = v1 != v0;
    v0 = a0 & 0x4;
    if (cnd_) { goto L_0886B6A8; }
    goto L_0886B878;
L_0886B878:;
    a0 = s0 + 0;
    a1 = 1;
    f0 = func_0886BB34(a0, a1);
    goto L_0886B884;
L_0886B884:;
    a0 = LD32(s0+64);
    goto L_0886B6A4;
L_0886B88C:;
    v0 = 14;
    cnd_ = v1 != v0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_0886B68C; }
    goto L_0886B898;
L_0886B898:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    f0 = func_0886BB34(a0, a1);
    goto L_0886B8A4;
L_0886B8A4:;
    a0 = LD32(s0+64);
    goto L_0886B688;
}

/* 0886B8AC */
rv_t func_0886B8AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886B8AC:;
    sp = sp - 16;
    { rv_t r_ = func_08872664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B8BC;
L_0886B8BC:;
    v0 = v0 + 52;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886B8CC */
rv_t func_0886B8CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_0886B8CC:;
    sp = sp - 128;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08872684(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886B8E8;
L_0886B8E8:;
    v0 = 1;
    ST32(sp+100, v0);
    a2 = sp + 100;
    a1 = 0 + 0;
    goto L_0886B8F8;
L_0886B8F8:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886B8F8; }
    goto L_0886B920;
L_0886B920:;
    v0 = LD32(s1+64);
    a0 = LD32(s1+80);
    a1 = LD32(s1+84);
    a2 = LD32(s1+88);
    a3 = LD32(s1+92);
    t0 = LD32(s1+96);
    f0 = BITSF(LD32(s1+72));
    f1 = BITSF(LD32(s1+76));
    v1 = LD_U8(s1+68);
    ST32(sp, v0);
    t4 = sp + 48;
    t2 = t4 + 0;
    ST8(sp+4, v1);
    t1 = sp + 0;
    t3 = sp + 32;
    ST32(sp+8, FBITS(f0));
    ST32(sp+12, FBITS(f1));
    ST32(sp+16, a0);
    ST32(sp+20, a1);
    ST32(sp+24, a2);
    ST32(sp+28, a3);
    ST32(sp+32, t0);
    goto L_0886B978;
L_0886B978:;
    v0 = LD32(t1);
    v1 = LD32(t1+4);
    a0 = LD32(t1+8);
    a1 = LD32(t1+12);
    ST32(t2, v0);
    t1 = t1 + 16;
    t2 = t2 + 16;
    ST32(t2-12, v1);
    ST32(t2-8, a0);
    cnd_ = t1 != t3;
    ST32(t2-4, a1);
    if (cnd_) { goto L_0886B978; }
    goto L_0886B9A4;
L_0886B9A4:;
    v0 = LD32(t1);
    ST32(t2, v0);
    a2 = t4 + 0;
    a1 = 0 + 0;
    goto L_0886B9B4;
L_0886B9B4:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x24u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886B9B4; }
    goto L_0886B9DC;
L_0886B9DC:;
    a3 = s1 + 100;
    t0 = 0 + 0;
    t1 = sp + 96;
    goto L_0886B9E8;
L_0886B9E8:;
    v0 = LD_U16(a3);
    a2 = t1 + 0;
    a1 = 0 + 0;
    ST16(sp+96, v0);
    goto L_0886B9F8;
L_0886B9F8:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886B9F8; }
    goto L_0886BA20;
L_0886BA20:;
    t0 = t0 + 1;
    v0 = (s32)t0 < 6;
    cnd_ = v0 != 0;
    a3 = a3 + 2;
    if (cnd_) { goto L_0886B9E8; }
    goto L_0886BA30;
L_0886BA30:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
}

/* 0886BA44 */
rv_t func_0886BA44(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886BA44:;
    sp = sp - 16;
    v0 = 1;
    v1 = LD32(a0+52);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886BAE0; }
    goto L_0886BA60;
L_0886BA60:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886BA7C; }
    goto L_0886BA6C;
L_0886BA6C:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0886BA88; }
    goto L_0886BA78;
L_0886BA78:;
    goto L_0886BA7C;
L_0886BA7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886BA88:;
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+60));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(a0+60, FBITS(f0));
    if (cnd_) { goto L_0886BA78; }
    goto L_0886BAA8;
L_0886BAA8:;
    a1 = 4;
    f0 = func_0886BB34(a0, a1);
    goto L_0886BAB0;
L_0886BAB0:;
    v0 = LD_U8(s0+56);
    v0 = v0 - 1;
    v1 = v0 & 0xff;
    cnd_ = v1 == 0;
    ST8(s0+56, v0);
    if (cnd_) { goto L_0886BAD8; }
    goto L_0886BAC4;
L_0886BAC4:;
    f0 = BITSF(LD32(s0+60));
    f1 = BITSF(LD32(s0+72));
    goto L_0886BACC;
L_0886BACC:;
    f0 = f0 + f1;
    ST32(s0+60, FBITS(f0));
    goto L_0886BA78;
L_0886BAD8:;
    ST32(s0+52, 0);
    goto L_0886BA78;
L_0886BAE0:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+60));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(a0+60, FBITS(f0));
    if (cnd_) { goto L_0886BA78; }
    goto L_0886BB04;
L_0886BB04:;
    a1 = 4;
    f0 = func_0886BB34(a0, a1);
    goto L_0886BB0C;
L_0886BB0C:;
    v0 = LD_U8(s0+56);
    v0 = v0 - 1;
    v1 = v0 & 0xff;
    cnd_ = v1 == 0;
    ST8(s0+56, v0);
    if (cnd_) { goto L_0886BAD8; }
    goto L_0886BB20;
L_0886BB20:;
    f0 = BITSF(LD32(s0+60));
    f1 = BITSF(LD32(s0+72));
    v0 = 2;
    ST32(s0+52, v0);
    goto L_0886BACC;
}

/* 0886BB34 */
float func_0886BB34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886BB34:;
    sp = sp - 16;
    a1 = a1 << 1;
    a1 = a1 + a0;
    v1 = LD_U16(a1+100);
    a2 = a0 + 0;
    v0 = 0xffff;
    a0 = D_08B29170 - (-28304);
    f12 = BITSF(0);
    a0 = a0 - 28304;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0886BB6C; }
    goto L_0886BB64;
L_0886BB64:;
    a2 = LD32(a2+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886BB6C;
L_0886BB6C:;
    sp = sp + 16;
    return f0;
}

/* 0886BB78 */
void func_0886BB78(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr118 = v[118], vr127 = v[127];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0886BB78:;
    sp = sp - 96;
    v0 = 999;
    a2 = LD32(a0+92);
    cnd_ = a2 == v0;
    a3 = a1 & 0xff;
    if (cnd_) { goto L_0886C040; }
    goto L_0886BB98;
L_0886BB98:;
    a0 = D_08B28EF4 - (-28940);
    v1 = a0 - 28940;
    v0 = LD32(v1+4);
    a1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0886BBF0; }
    goto L_0886BBC4;
L_0886BBC4:;
    a0 = LD32(a1);
    goto L_0886BBC8;
L_0886BBC8:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0886C054; }
    goto L_0886BBE0;
L_0886BBE0:;
    a1 = LD32(a1+4);
    goto L_0886BBE4;
L_0886BBE4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0886BBC8; }
    goto L_0886BBEC;
L_0886BBEC:;
    s0 = 0 + 0;
    goto L_0886BBF0;
L_0886BBF0:;
    cnd_ = s0 == 0;
    v1 = 0xaaaa0000u;
    if (cnd_) { goto L_0886C040; }
    goto L_0886BBF8;
L_0886BBF8:;
    v1 = v1 | 0xaaab;
    { u64 p_ = (u64)a3 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    a1 = LD32(s0);
    a0 = s0 + 0;
    v1 = hi;
    v1 = v1 >> 3;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a3 - v0;
    v0 = v0 & 0xff;
    f0 = BITSF(v0);
    v1 = D_08AEBF40 - (-16576);
    v0 = LD32(a1+24);
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-16576));
    t_ = v0;
    f20 = f20 * f0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr118=v[118];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886BC40;
L_0886BC40:;
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[116]=BITSF(LD32(v0+(12)));}
    {v[117]=BITSF(LD32(v0+(16)));}
    {vr118=BITSF(LD32(v0+(20)));}
    {v[120]=BITSF(LD32(v0+(24)));}
    {v[121]=BITSF(LD32(v0+(28)));}
    {v[122]=BITSF(LD32(v0+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(vr118);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BEC0; }
    goto L_0886BC7C;
L_0886BC7C:;
    {float s0=vr118;float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BE00; }
    goto L_0886BC8C;
L_0886BC8C:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0886BD24; }
    goto L_0886BCB4;
L_0886BCB4:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=vr70;float t0=vr70;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BD00; }
    goto L_0886BCF0;
L_0886BCF0:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0886BD00;
L_0886BD00:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BD44; }
    goto L_0886BD10;
L_0886BD10:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0886BD44; }
    goto L_0886BD20;
L_0886BD20:;
    goto L_0886BD24;
L_0886BD24:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BD44; }
    goto L_0886BD38;
L_0886BD38:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0886BD44;
L_0886BD44:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0886BDD4; }
    goto L_0886BD64;
L_0886BD64:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=vr70;float t0=vr70;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BDB0; }
    goto L_0886BDA0;
L_0886BDA0:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0886BDB0;
L_0886BDB0:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BDF4; }
    goto L_0886BDC0;
L_0886BDC0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0886BDF4; }
    goto L_0886BDD0;
L_0886BDD0:;
    goto L_0886BDD4;
L_0886BDD4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BDF4; }
    goto L_0886BDE8;
L_0886BDE8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0886BDF4;
L_0886BDF4:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0886BF78; }
    goto L_0886BDFC;
L_0886BDFC:;
    goto L_0886BE00;
L_0886BE00:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0886BE94; }
    goto L_0886BE24;
L_0886BE24:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=vr70;float t0=vr70;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BE70; }
    goto L_0886BE60;
L_0886BE60:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0886BE70;
L_0886BE70:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BEB4; }
    goto L_0886BE80;
L_0886BE80:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0886BEB4; }
    goto L_0886BE90;
L_0886BE90:;
    goto L_0886BE94;
L_0886BE94:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BEB4; }
    goto L_0886BEA8;
L_0886BEA8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0886BEB4;
L_0886BEB4:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0886BF78; }
    goto L_0886BEBC;
L_0886BEBC:;
    goto L_0886BEC0;
L_0886BEC0:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0886BF54; }
    goto L_0886BEE4;
L_0886BEE4:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=vr70;float t0=vr70;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BF30; }
    goto L_0886BF20;
L_0886BF20:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0886BF30;
L_0886BF30:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BF74; }
    goto L_0886BF40;
L_0886BF40:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0886BF74; }
    goto L_0886BF50;
L_0886BF50:;
    goto L_0886BF54;
L_0886BF54:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886BF74; }
    goto L_0886BF68;
L_0886BF68:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0886BF74;
L_0886BF74:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_0886BF78;
L_0886BF78:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    a0 = s0 + 0;
    ST32(sp+8, FBITS(f20));
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=0.63661977236f;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[115];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);v[116]=d0;v[117]=d1;vr118=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[120];float t0=v[121];float d0=s0*t0;v[115]=d0;}
    {float s0=v[115];float t0=v[122];float d0=s0*t0;v[123]=d0;}
    {float s0=v[117];float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;v[96]=t;}
    {float s0=v[115];float t0=vr118;float d0=s0*t0;v[123]=d0;}
    {float s0=v[117];float t0=v[122];float d0=s0*t0;vr127=d0;}
    {float s0=v[121];float t0=vr118;float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=vr127;float d0=-s0;float d1=-s1;v[126]=d0;vr127=d1;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;v[97]=t;}
    {float s0=v[116];float t0=v[121];float d0=s0*t0;v[98]=d0;}
    {float s0=v[116];float t0=v[122];float d0=s0*t0;v[100]=d0;}
    {float s0=v[116];float t0=vr118;float d0=s0*t0;v[101]=d0;}
    {float s0=v[120];float d0=-s0;v[102]=d0;}
    {float s0=v[120];float t0=v[117];float d0=s0*t0;v[124]=d0;}
    {float s0=v[124];float t0=v[122];float d0=s0*t0;vr127=d0;}
    {float s0=v[126];float s1=vr127;float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=v[124];float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[121];float t0=v[122];float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=vr127;float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=v[116];float t0=v[117];float d0=s0*t0;v[106]=d0;}
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    {ST32(sp+(28),FBITS(v[100]));}
    {ST32(sp+(32),FBITS(v[101]));}
    {ST32(sp+(36),FBITS(v[102]));}
    {ST32(sp+(40),FBITS(v[104]));}
    {ST32(sp+(44),FBITS(v[105]));}
    {ST32(sp+(48),FBITS(v[106]));}
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 16;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr118=v[118];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C030;
L_0886C030:;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;__auto_type vr_t_ = func_0887424C(a0); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr118=v[118];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C040;
L_0886C040:;
    sp = sp + 96;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;return; }
L_0886C054:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886BBE0; }
    goto L_0886C060;
L_0886C060:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0886BBE4; }
    goto L_0886C06C;
L_0886C06C:;
    goto L_0886BBF0;
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;
}

/* 0886C074 */
void func_0886C074(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr118 = v[118], vr127 = v[127];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0886C074:;
    sp = sp - 96;
    v1 = a1 + 0;
    v0 = 999;
    a2 = 1;
    s1 = v1 & 0xff;
    a3 = LD32(a0+96);
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    cnd_ = a3 == v0;
    a1 = a3 + 0;
    if (cnd_) { goto L_0886C4E0; }
    goto L_0886C0AC;
L_0886C0AC:;
    { u64 r_ = func_08AAAC7C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886C0B4;
L_0886C0B4:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0886C4E0; }
    goto L_0886C0C0;
L_0886C0C0:;
    f0 = BITSF(s1);
    v1 = LD32(v0);
    v0 = D_08AEBF44 - (-16572);
    f20 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-16572));
    v0 = LD32(v1+24);
    t_ = v0;
    f20 = f20 * f0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr118=v[118];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C0E0;
L_0886C0E0:;
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[116]=BITSF(LD32(v0+(12)));}
    {v[117]=BITSF(LD32(v0+(16)));}
    {vr118=BITSF(LD32(v0+(20)));}
    {v[120]=BITSF(LD32(v0+(24)));}
    {v[121]=BITSF(LD32(v0+(28)));}
    {v[122]=BITSF(LD32(v0+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(vr118);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C360; }
    goto L_0886C11C;
L_0886C11C:;
    {float s0=vr118;float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C2A0; }
    goto L_0886C12C;
L_0886C12C:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0886C1C4; }
    goto L_0886C154;
L_0886C154:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=vr70;float t0=vr70;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C1A0; }
    goto L_0886C190;
L_0886C190:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0886C1A0;
L_0886C1A0:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C1E4; }
    goto L_0886C1B0;
L_0886C1B0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0886C1E4; }
    goto L_0886C1C0;
L_0886C1C0:;
    goto L_0886C1C4;
L_0886C1C4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C1E4; }
    goto L_0886C1D8;
L_0886C1D8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0886C1E4;
L_0886C1E4:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0886C274; }
    goto L_0886C204;
L_0886C204:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=vr70;float t0=vr70;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C250; }
    goto L_0886C240;
L_0886C240:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0886C250;
L_0886C250:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C294; }
    goto L_0886C260;
L_0886C260:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0886C294; }
    goto L_0886C270;
L_0886C270:;
    goto L_0886C274;
L_0886C274:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C294; }
    goto L_0886C288;
L_0886C288:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0886C294;
L_0886C294:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0886C418; }
    goto L_0886C29C;
L_0886C29C:;
    goto L_0886C2A0;
L_0886C2A0:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0886C334; }
    goto L_0886C2C4;
L_0886C2C4:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=vr70;float t0=vr70;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C310; }
    goto L_0886C300;
L_0886C300:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0886C310;
L_0886C310:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C354; }
    goto L_0886C320;
L_0886C320:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0886C354; }
    goto L_0886C330;
L_0886C330:;
    goto L_0886C334;
L_0886C334:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C354; }
    goto L_0886C348;
L_0886C348:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0886C354;
L_0886C354:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0886C418; }
    goto L_0886C35C;
L_0886C35C:;
    goto L_0886C360;
L_0886C360:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0886C3F4; }
    goto L_0886C384;
L_0886C384:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=vr70;float t0=vr70;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C3D0; }
    goto L_0886C3C0;
L_0886C3C0:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_0886C3D0;
L_0886C3D0:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C414; }
    goto L_0886C3E0;
L_0886C3E0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0886C414; }
    goto L_0886C3F0;
L_0886C3F0:;
    goto L_0886C3F4;
L_0886C3F4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0886C414; }
    goto L_0886C408;
L_0886C408:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0886C414;
L_0886C414:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_0886C418;
L_0886C418:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    a0 = s0 + 0;
    ST32(sp+8, FBITS(f20));
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=0.63661977236f;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[115];v[112]=s0*t0;v[113]=s1*t0;v[114]=s2*t0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);v[116]=d0;v[117]=d1;vr118=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[120];float t0=v[121];float d0=s0*t0;v[115]=d0;}
    {float s0=v[115];float t0=v[122];float d0=s0*t0;v[123]=d0;}
    {float s0=v[117];float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;v[96]=t;}
    {float s0=v[115];float t0=vr118;float d0=s0*t0;v[123]=d0;}
    {float s0=v[117];float t0=v[122];float d0=s0*t0;vr127=d0;}
    {float s0=v[121];float t0=vr118;float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=vr127;float d0=-s0;float d1=-s1;v[126]=d0;vr127=d1;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;v[97]=t;}
    {float s0=v[116];float t0=v[121];float d0=s0*t0;v[98]=d0;}
    {float s0=v[116];float t0=v[122];float d0=s0*t0;v[100]=d0;}
    {float s0=v[116];float t0=vr118;float d0=s0*t0;v[101]=d0;}
    {float s0=v[120];float d0=-s0;v[102]=d0;}
    {float s0=v[120];float t0=v[117];float d0=s0*t0;v[124]=d0;}
    {float s0=v[124];float t0=v[122];float d0=s0*t0;vr127=d0;}
    {float s0=v[126];float s1=vr127;float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=v[124];float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[121];float t0=v[122];float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=vr127;float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=v[116];float t0=v[117];float d0=s0*t0;v[106]=d0;}
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    {ST32(sp+(28),FBITS(v[100]));}
    {ST32(sp+(32),FBITS(v[101]));}
    {ST32(sp+(36),FBITS(v[102]));}
    {ST32(sp+(40),FBITS(v[104]));}
    {ST32(sp+(44),FBITS(v[105]));}
    {ST32(sp+(48),FBITS(v[106]));}
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 16;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr118=v[118];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C4D0;
L_0886C4D0:;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;__auto_type vr_t_ = func_0887424C(a0); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr118=v[118];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C4E0;
L_0886C4E0:;
    sp = sp + 96;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;return; }
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[118]=vr118;v[127]=vr127;
}

/* 0886C4F8 */
void func_0886C4F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_0886C4F8:;
    v0 = (u32)-1;
    ST16(a0+8, v0);
    v1 = 0x20000u;
    v0 = 1;
    ST16(a0+10, 0);
    a1 = LD32(a0+8);
    ST32(a0+4, v0);
    v0 = 0x10000u;
    a1 = a1 | v1;
    a1 = a1 | v0;
    ST32(a0+8, a1);
    ST32(a0, 0);
    return;
}

/* 0886C52C */
void func_0886C52C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886C52C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08872328(a0, a1, a2);
    goto L_0886C548;
L_0886C548:;
    v0 = D_08AF61E0 - (25056);
    v0 = v0 + 25056;
    ST32(s1, v0);
    v0 = 13;
    a2 = sp + 0;
    ST16(s1+8, v0);
    a1 = 0 + 0;
    goto L_0886C564;
L_0886C564:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886C564; }
    goto L_0886C588;
L_0886C588:;
    v0 = LD32(sp);
    a1 = s1 + 40;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0886C77C; }
    goto L_0886C59C;
L_0886C59C:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886C59C; }
    goto L_0886C5C4;
L_0886C5C4:;
    a1 = s1 + 44;
    a2 = 0 + 0;
    goto L_0886C5CC;
L_0886C5CC:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886C5CC; }
    goto L_0886C5F4;
L_0886C5F4:;
    v1 = LD32(s1+44);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0886C764; }
    goto L_0886C600;
L_0886C600:;
    ST32(s1+48, v0);
    cnd_ = v1 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_0886C718; }
    goto L_0886C60C;
L_0886C60C:;
    t2 = 0 + 0;
    t1 = 0 + 0;
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_0886C61C;
L_0886C61C:;
    v0 = LD32(s1+48);
    a2 = 0 + 0;
    a1 = v0 + a3;
    goto L_0886C628;
L_0886C628:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886C628; }
    goto L_0886C650;
L_0886C650:;
    v0 = LD32(s1+48);
    a2 = 0 + 0;
    v0 = v0 + t0;
    a1 = v0 + 4;
    goto L_0886C660;
L_0886C660:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886C660; }
    goto L_0886C688;
L_0886C688:;
    v0 = LD32(s1+48);
    a2 = 0 + 0;
    v0 = v0 + t1;
    a1 = v0 + 8;
    goto L_0886C698;
L_0886C698:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886C698; }
    goto L_0886C6C0;
L_0886C6C0:;
    v0 = LD32(s1+48);
    a2 = 0 + 0;
    v0 = v0 + t2;
    a1 = v0 + 10;
    goto L_0886C6D0;
L_0886C6D0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886C6D0; }
    goto L_0886C6F8;
L_0886C6F8:;
    v0 = LD32(s1+44);
    t3 = t3 + 1;
    a3 = a3 + 12;
    v0 = t3 < v0;
    t0 = t0 + 12;
    t1 = t1 + 12;
    cnd_ = v0 != 0;
    t2 = t2 + 12;
    if (cnd_) { goto L_0886C61C; }
    goto L_0886C718;
L_0886C718:;
    a3 = sp + 8;
    a2 = 0 + 0;
    goto L_0886C720;
L_0886C720:;
    v0 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    a1 = v0 + 1;
    ST32(s0, a1);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_0886C720; }
    goto L_0886C744;
L_0886C744:;
    v0 = LD32(sp+8);
    v0 = a1 + v0;
    ST32(s0, v0);
    goto L_0886C750;
L_0886C750:;
    sp = sp + 32;
    return;
L_0886C764:;
    a0 = v1 << 1;
    a0 = a0 + v1;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C774;
L_0886C774:;
    v1 = LD32(s1+44);
    goto L_0886C600;
L_0886C77C:;
    v0 = 1;
    ST32(s1+44, v0);
    a0 = 12;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C78C;
L_0886C78C:;
    ST32(s1+48, v0);
    a0 = v0 + 0;
    func_0886C4F8(a0);
    goto L_0886C798;
L_0886C798:;
    v0 = LD32(s1+48);
    v1 = LD_U16(s1+34);
    a2 = 0 + 0;
    a1 = v0 + 4;
    ST16(v0+8, v1);
    v0 = (u32)-1;
    ST16(s1+34, v0);
    goto L_0886C7B4;
L_0886C7B4:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886C7B4; }
    goto L_0886C7DC;
L_0886C7DC:;
    a3 = LD32(s1+48);
    v1 = LD32(sp);
    v0 = LD32(a3+4);
    cnd_ = (s32)v1 <= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_0886C81C; }
    goto L_0886C7F0;
L_0886C7F0:;
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_0886C7F8;
L_0886C7F8:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886C7F8; }
    goto L_0886C81C;
L_0886C81C:;
    v0 = LD32(a3+4);
    v1 = LD32(sp+4);
    v0 = v0 - v1;
    ST32(s1+40, v0);
    goto L_0886C750;
}

/* 0886C830 */
rv_t func_0886C830(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886C830:;
    sp = sp - 16;
    v0 = D_08AF61E0 - (25056);
    s0 = a0 + 0;
    v0 = v0 + 25056;
    v1 = LD32(a0+48);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886C87C; }
    goto L_0886C858;
L_0886C858:;
    v0 = D_08AF6018 - (24600);
    goto L_0886C85C;
L_0886C85C:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886C86C;
L_0886C86C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886C87C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886C884;
L_0886C884:;
    v0 = D_08AF6018 - (24600);
    goto L_0886C85C;
}

/* 0886C88C */
rv_t func_0886C88C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886C88C:;
    sp = sp - 16;
    v0 = D_08AF61E0 - (25056);
    s0 = a0 + 0;
    v0 = v0 + 25056;
    v1 = LD32(a0+48);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886C8E0; }
    goto L_0886C8B4;
L_0886C8B4:;
    v0 = D_08AF6018 - (24600);
    goto L_0886C8B8;
L_0886C8B8:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886C8C8;
L_0886C8C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886C8D0;
L_0886C8D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886C8E0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886C8E8;
L_0886C8E8:;
    v0 = D_08AF6018 - (24600);
    goto L_0886C8B8;
}

/* 0886C8F0 */
rv_t func_0886C8F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886C8F0:;
    sp = sp - 16;
    a3 = a0 + 0;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0886C954; }
    goto L_0886C90C;
L_0886C90C:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0886C948; }
    goto L_0886C914;
L_0886C914:;
    v1 = LD_U16(a1+16);
    a2 = v1 & 0xffff;
    v0 = (s32)a2 < 51;
    cnd_ = v0 == 0;
    v0 = 51;
    if (cnd_) { goto L_0886C9E8; }
    goto L_0886C928;
L_0886C928:;
    v0 = (s32)a2 < 49;
    cnd_ = v0 == 0;
    if (cnd_) { t1 = LD32(a0+44); goto L_0886C98C; }
    goto L_0886C934;
L_0886C934:;
    v0 = 14;
    cnd_ = a2 == v0;
    v0 = 48;
    if (cnd_) { goto L_0886C980; }
    goto L_0886C940;
L_0886C940:;
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD32(a1+24); goto L_0886C964; }
    goto L_0886C948;
L_0886C948:;
    a0 = a3 + 0;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C950;
L_0886C950:;
    v1 = v0 + 0;
    goto L_0886C954;
L_0886C954:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886C964:;
    a1 = LD32(a0+40);
    a2 = LD32(v0);
    ST32(a0+40, a2);
    goto L_0886C970;
L_0886C970:;
    { rv_t r_ = func_0886CAB4(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886C978;
L_0886C978:;
    v1 = 1;
    goto L_0886C954;
L_0886C980:;
    v1 = 1;
    ST32(a0+40, 0);
    goto L_0886C954;
L_0886C98C:;
    a1 = LD32(a1+24);
    cnd_ = t1 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0886C978; }
    goto L_0886C998;
L_0886C998:;
    v0 = LD32(a0+48);
    a1 = LD32(a1);
    a0 = v0 + 0;
    a3 = v0 + 0;
    goto L_0886C9A8;
L_0886C9A8:;
    v0 = LD32(a0);
    t0 = t0 + 1;
    a2 = t0 < t1;
    cnd_ = v0 == a1;
    a0 = a0 + 12;
    if (cnd_) { goto L_0886C9CC; }
    goto L_0886C9BC;
L_0886C9BC:;
    cnd_ = a2 != 0;
    a3 = a3 + 12;
    if (cnd_) { goto L_0886C9A8; }
    goto L_0886C9C4;
L_0886C9C4:;
    v1 = 1;
    goto L_0886C954;
L_0886C9CC:;
    v1 = v1 & 0xffff;
    v1 = v1 ^ 0x31;
    v1 = v1 < 0x1u;
    v0 = LD32(a3+8);
    v0 = (v0 & ~(0x1u << 16)) | ((v1 & 0x1) << 16);
    ST32(a3+8, v0);
    goto L_0886C978;
L_0886C9E8:;
    cnd_ = a2 == v0;
    v0 = 86;
    if (cnd_) { goto L_0886CA20; }
    goto L_0886C9F0;
L_0886C9F0:;
    cnd_ = a2 != v0;
    if (cnd_) { goto L_0886C948; }
    goto L_0886C9F8;
L_0886C9F8:;
    v1 = LD32(a1+24);
    a1 = LD32(a0+40);
    v0 = LD32(v1);
    v0 = a1 + v0;
    cnd_ = (s32)v0 < 0;
    ST32(a0+40, v0);
    if (cnd_) { goto L_0886CA18; }
    goto L_0886CA10;
L_0886CA10:;
    a2 = LD32(a3+40);
    goto L_0886C970;
L_0886CA18:;
    ST32(a0+40, 0);
    goto L_0886CA10;
L_0886CA20:;
    a2 = LD32(a0+44);
    t0 = LD32(a1+24);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0886C978; }
    goto L_0886CA30;
L_0886CA30:;
    a0 = LD32(t0);
    v1 = LD32(a3+48);
    v0 = LD32(v1);
    goto L_0886CA3C;
L_0886CA3C:;
    cnd_ = v0 == a0;
    v1 = v1 + 12;
    if (cnd_) { goto L_0886CA5C; }
    goto L_0886CA44;
L_0886CA44:;
    a1 = a1 + 1;
    v0 = a1 < a2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0886CA3C; }
    goto L_0886CA54;
L_0886CA54:;
    v1 = 1;
    goto L_0886C954;
L_0886CA5C:;
    a2 = LD32(t0+4);
    a0 = a3 + 0;
    f0 = func_0886CBBC(a0, a1, a2);
    goto L_0886CA68;
L_0886CA68:;
    v1 = 1;
    goto L_0886C954;
}

/* 0886CA70 */
rv_t func_0886CA70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886CA70:;
    sp = sp - 16;
    a1 = LD32(a0+40);
    a2 = a1 + 1;
    ST32(a0+40, a2);
    { rv_t r_ = func_0886CAB4(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886CA88;
L_0886CA88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886CA94 */
rv_t func_0886CA94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0886CA94:;
    v0 = LD32(a0+40);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+40, v0);
    if (cnd_) { goto L_0886CAAC; }
    goto L_0886CAA4;
L_0886CAA4:;
    return (rv_t){ v0, v1, f0 };
L_0886CAAC:;
    ST32(a0+40, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0886CAB4 */
rv_t func_0886CAB4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0886CAB4:;
    sp = sp - 48;
    s4 = a2 + 0;
    s3 = a1 + 0;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0886CB44; }
    goto L_0886CAF8;
L_0886CAF8:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0886CB48; }
    goto L_0886CB04;
L_0886CB04:;
    a0 = LD32(a0+44);
    s0 = LD32(s2+48);
    cnd_ = a0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0886CB44; }
    goto L_0886CB14;
L_0886CB14:;
    s5 = 0x10000u;
    s6 = 0x20000u;
    s7 = 0xffff;
    fp = D_08B29170 - (-28304);
    goto L_0886CB24;
L_0886CB24:;
    v1 = LD32(s0+8);
    v0 = v1 & s5;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_0886CB74; }
    goto L_0886CB34;
L_0886CB34:;
    s1 = s1 + 1;
    goto L_0886CB38;
L_0886CB38:;
    v0 = s1 < a0;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0886CB24; }
    goto L_0886CB44;
L_0886CB44:;
    goto L_0886CB48;
L_0886CB48:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0886CB74:;
    a1 = (s32)s4 < (s32)v0;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_0886CB38; }
    goto L_0886CB84;
L_0886CB84:;
    cnd_ = a1 != 0;
    v0 = v1 & s6;
    if (cnd_) { goto L_0886CB34; }
    goto L_0886CB8C;
L_0886CB8C:;
    f12 = BITSF(0);
    a0 = fp - 28304;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    if (cnd_) { goto L_0886CBA0; }
    goto L_0886CB9C;
L_0886CB9C:;
    ST32(s0+8, v1);
    goto L_0886CBA0;
L_0886CBA0:;
    v0 = LD_U16(s0+8);
    cnd_ = v0 == s7;
    a1 = v0 + 0;
    if (cnd_) { goto L_0886CBB4; }
    goto L_0886CBAC;
L_0886CBAC:;
    a2 = LD32(s2+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886CBB4;
L_0886CBB4:;
    a0 = LD32(s2+44);
    goto L_0886CB34;
}

/* 0886CBBC */
float func_0886CBBC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886CBBC:;
    sp = sp - 16;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v1 = LD32(a0+48);
    v0 = v0 << 2;
    a3 = a0 + 0;
    a1 = v1 + v0;
    a0 = LD32(a1+4);
    ST32(a1+4, a2);
    v0 = LD32(a3+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0886CC5C; }
    goto L_0886CBF4;
L_0886CBF4:;
    t0 = LD32(a1+8);
    v0 = 0x10000u;
    v0 = t0 & v0;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0886CC5C; }
    goto L_0886CC08;
L_0886CC08:;
    v0 = LD32(a3+40);
    v1 = (s32)v0 < (s32)a2;
    cnd_ = v1 != 0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_0886CC58; }
    goto L_0886CC18;
L_0886CC18:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0886CC5C; }
    goto L_0886CC20;
L_0886CC20:;
    v0 = 0x20000u;
    a0 = D_08B29170 - (-28304);
    v0 = t0 & v0;
    f12 = BITSF(0);
    a0 = a0 - 28304;
    cnd_ = v0 != 0;
    t0 = (t0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    if (cnd_) { goto L_0886CC40; }
    goto L_0886CC3C;
L_0886CC3C:;
    ST32(a1+8, t0);
    goto L_0886CC40;
L_0886CC40:;
    v1 = LD_U16(a1+8);
    v0 = 0xffff;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0886CC58; }
    goto L_0886CC50;
L_0886CC50:;
    a2 = LD32(a3+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886CC58;
L_0886CC58:;
    goto L_0886CC5C;
L_0886CC5C:;
    sp = sp + 16;
    return f0;
}

/* 0886CC64 */
rv_t func_0886CC64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886CC64:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08872664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886CC78;
L_0886CC78:;
    a0 = v0 + 0;
    v1 = LD32(s0+44);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    a0 = v0 + 16;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886CCA8 */
rv_t func_0886CCA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0886CCA8:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08872684(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886CCC4;
L_0886CCC4:;
    v0 = 2;
    ST32(sp+4, v0);
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_0886CCD4;
L_0886CCD4:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886CCD4; }
    goto L_0886CCFC;
L_0886CCFC:;
    v0 = LD32(s1+40);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_0886CD0C;
L_0886CD0C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886CD0C; }
    goto L_0886CD34;
L_0886CD34:;
    v0 = LD32(s1+44);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_0886CD44;
L_0886CD44:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886CD44; }
    goto L_0886CD6C;
L_0886CD6C:;
    v0 = LD32(s1+44);
    cnd_ = v0 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_0886CEB4; }
    goto L_0886CD78;
L_0886CD78:;
    t5 = sp + 16;
    t6 = sp + 20;
    t4 = sp + 2;
    t2 = 0 + 0;
    t1 = 0 + 0;
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_0886CD94;
L_0886CD94:;
    v0 = LD32(s1+48);
    a2 = t5 + 0;
    a1 = 0 + 0;
    v0 = a3 + v0;
    v1 = LD32(v0);
    ST32(sp+16, v1);
    goto L_0886CDAC;
L_0886CDAC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886CDAC; }
    goto L_0886CDD4;
L_0886CDD4:;
    v0 = LD32(s1+48);
    a2 = t6 + 0;
    a1 = 0 + 0;
    v0 = t0 + v0;
    v1 = LD32(v0+4);
    ST32(sp+20, v1);
    goto L_0886CDEC;
L_0886CDEC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886CDEC; }
    goto L_0886CE14;
L_0886CE14:;
    v0 = LD32(s1+48);
    a2 = sp + 0;
    a1 = 0 + 0;
    v0 = t1 + v0;
    v1 = LD_U16(v0+8);
    ST16(sp, v1);
    goto L_0886CE2C;
L_0886CE2C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886CE2C; }
    goto L_0886CE54;
L_0886CE54:;
    v0 = LD32(s1+48);
    a2 = t4 + 0;
    a1 = 0 + 0;
    v0 = t2 + v0;
    v1 = LD_U16(v0+10);
    ST16(sp+2, v1);
    goto L_0886CE6C;
L_0886CE6C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886CE6C; }
    goto L_0886CE94;
L_0886CE94:;
    v0 = LD32(s1+44);
    t3 = t3 + 1;
    a3 = a3 + 12;
    v0 = t3 < v0;
    t0 = t0 + 12;
    t1 = t1 + 12;
    cnd_ = v0 != 0;
    t2 = t2 + 12;
    if (cnd_) { goto L_0886CD94; }
    goto L_0886CEB4;
L_0886CEB4:;
    ST32(sp+24, 0);
    a2 = sp + 24;
    a1 = 0 + 0;
    goto L_0886CEC0;
L_0886CEC0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886CEC0; }
    goto L_0886CEE8;
L_0886CEE8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0886CEFC */
void func_0886CEFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886CEFC:;
    sp = sp - 32;
    s3 = D_08B28F84 - (-28796);
    s2 = s3 - 28796;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_0886CF24;
L_0886CF24:;
    v1 = D_08AEBF4C - (-16564);
    v0 = D_08AEBF48 - (-16568);
    f1 = BITSF(LD32(v0-16568));
    f0 = BITSF(LD32(v1-16564));
    v0 = D_08AF6250 - (25168);
    v0 = v0 + 25168;
    a1 = s1 + 28;
    ST32(s1, v0);
    v0 = 22;
    a0 = 12;
    ST16(s1+8, v0);
    ST32(s1+28, FBITS(f1));
    ST32(a1+20, FBITS(f0));
    ST32(a1+16, FBITS(f1));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    ST32(a1+12, FBITS(f0));
    ST32(s1+56, 0);
    ST32(s1+60, 0);
    ST32(s1+64, 0);
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    ST32(s1+52, 0);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886CF8C;
L_0886CF8C:;
    a0 = LD32(s3-28796);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s1);
    v1 = v1 + 1;
    a0 = s1 + 0;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    ST32(s2+12, v1);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886CFC0;
L_0886CFC0:;
    sp = sp + 32;
    return;
}

/* 0886CFDC */
u64 func_0886CFDC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886CFDC:;
    sp = sp - 16;
    a1 = D_08B28F84 - (-28796);
    s1 = a1 - 28796;
    s0 = a0 + 0;
    v0 = LD32(s1+4);
    v1 = LD32(a0+4);
    a0 = LD32(a1-28796);
    v0 = v0 - 1;
    v1 = v1 & v0;
    a1 = v1 << 2;
    a0 = a1 + a0;
    a0 = LD32(a0);
    v0 = D_08AF6250 - (25168);
    v0 = v0 + 25168;
    ST32(s0, v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0886D048; }
    goto L_0886D02C;
L_0886D02C:;
    v0 = LD32(a0);
    goto L_0886D030;
L_0886D030:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0886D064; }
    goto L_0886D038;
L_0886D038:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0886D030; }
    goto L_0886D048;
L_0886D048:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D050;
L_0886D050:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0886D064:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0886D074; }
    goto L_0886D06C;
L_0886D06C:;
    ST8(a0+8, v0);
    goto L_0886D048;
L_0886D074:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0886D09C; }
    goto L_0886D07C;
L_0886D07C:;
    v0 = LD32(a0+4);
    ST32(v1+4, v0);
    goto L_0886D084;
L_0886D084:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D08C;
L_0886D08C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0886D048;
L_0886D09C:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_0886D084;
}

/* 0886D0AC */
rv_t func_0886D0AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D0AC:;
    v0 = D_08AF6250 - (25168);
    v0 = v0 + 25168;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F84 - (-28796);
    a1 = s0 + 0;
    a0 = a0 - 28796;
    func_08AAF5DC(a0, a1, t1, t2, t3);
    goto L_0886D0D8;
L_0886D0D8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D0E0;
L_0886D0E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886D0F0 */
rv_t func_0886D0F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D0F0:;
    v0 = D_08AF6250 - (25168);
    v0 = v0 + 25168;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F84 - (-28796);
    a1 = s0 + 0;
    a0 = a0 - 28796;
    func_08AAF5DC(a0, a1, t1, t2, t3);
    goto L_0886D11C;
L_0886D11C:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D124;
L_0886D124:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D12C;
L_0886D12C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886D13C */
rv_t func_0886D13C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D13C:;
    sp = sp - 16;
    { rv_t r_ = func_08874CD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D14C;
L_0886D14C:;
    v0 = v0 + 44;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886D15C */
rv_t func_0886D15C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_0886D15C:;
    sp = sp - 128;
    v0 = 4;
    a2 = sp + 96;
    ST32(sp+96, v0);
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_0886D184;
L_0886D184:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886D184; }
    goto L_0886D1AC;
L_0886D1AC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08874EDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D1B8;
L_0886D1B8:;
    a0 = LD32(s1+64);
    a1 = LD32(s1+28);
    a3 = LD32(s1+36);
    t0 = LD32(s1+40);
    t1 = LD32(s1+44);
    t2 = LD32(s1+48);
    f0 = BITSF(LD32(s1+52));
    t4 = LD32(s1+60);
    v0 = a0 & 0x1;
    t3 = LD32(s1+56);
    v1 = LD32(sp+28);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    v0 = (a0 >> 1) & 0x1;
    a0 = (a0 >> 2) & 0x1;
    a2 = LD32(s1+32);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    v1 = (v1 & ~(0x1u << 2)) | ((a0 & 0x1) << 2);
    ST32(sp, a1);
    t7 = sp + 48;
    t5 = t7 + 0;
    ST32(sp+8, a3);
    t6 = sp + 32;
    ST32(sp+12, t0);
    ST32(sp+16, t1);
    ST32(sp+20, t2);
    ST32(sp+24, FBITS(f0));
    ST32(sp+28, v1);
    ST32(sp+32, t3);
    ST32(sp+36, t4);
    ST32(sp+4, a2);
    a2 = sp + 0;
    goto L_0886D234;
L_0886D234:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(t5, v0);
    a2 = a2 + 16;
    t5 = t5 + 16;
    ST32(t5-12, v1);
    ST32(t5-8, a0);
    cnd_ = a2 != t6;
    ST32(t5-4, a1);
    if (cnd_) { goto L_0886D234; }
    goto L_0886D260;
L_0886D260:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    ST32(t5, v0);
    ST32(t5+4, v1);
    a2 = t7 + 0;
    a1 = 0 + 0;
    goto L_0886D278;
L_0886D278:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x28u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886D278; }
    goto L_0886D2A0;
L_0886D2A0:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
}

/* 0886D2B4 */
rv_t func_0886D2B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D2B4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 4;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D2D8;
L_0886D2D8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D2E4;
L_0886D2E4:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D2F0;
L_0886D2F0:;
    f12 = BITSF(LD32(s1+52));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D2FC;
L_0886D2FC:;
    a1 = LD32(s1+64);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D308;
L_0886D308:;
    a1 = LD32(s1+56);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D314;
L_0886D314:;
    a1 = LD32(s1+60);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D320;
L_0886D320:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886D334 */
rv_t func_0886D334(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0886D334:;
    sp = sp - 80;
    a2 = sp + 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_0886D354;
L_0886D354:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886D354; }
    goto L_0886D378;
L_0886D378:;
    v0 = LD32(sp+48);
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0886D44C; }
    goto L_0886D388;
L_0886D388:;
    a2 = sp + 0;
    goto L_0886D38C;
L_0886D38C:;
    a1 = 0 + 0;
    goto L_0886D390;
L_0886D390:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x28u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886D390; }
    goto L_0886D3B4;
L_0886D3B4:;
    t4 = LD32(sp+28);
    v0 = LD32(s1+64);
    a1 = LD32(sp+4);
    a0 = t4 & 0x1;
    v0 = (v0 & ~(0x1u << 0)) | ((a0 & 0x1) << 0);
    t3 = v0 + 0;
    v0 = LD32(sp);
    a0 = LD32(sp+48);
    a2 = LD32(sp+8);
    a3 = LD32(sp+12);
    t0 = LD32(sp+16);
    t1 = LD32(sp+20);
    f0 = BITSF(LD32(sp+24));
    t2 = LD32(sp+36);
    ST32(s1+28, v0);
    v1 = (t4 >> 1) & 0x1;
    t3 = (t3 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    v0 = LD32(sp+32);
    a0 = (s32)a0 < 3;
    ST32(s1+32, a1);
    ST32(s1+36, a2);
    ST32(s1+40, a3);
    ST32(s1+44, t0);
    ST32(s1+48, t1);
    ST32(s1+52, FBITS(f0));
    ST32(s1+56, v0);
    ST32(s1+60, t2);
    cnd_ = a0 != 0;
    ST32(s1+64, t3);
    if (cnd_) { goto L_0886D438; }
    goto L_0886D428;
L_0886D428:;
    v1 = (t4 >> 2) & 0x1;
    v0 = t3 + 0;
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s1+64, v0);
    goto L_0886D438;
L_0886D438:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0886D44C:;
    a1 = s0 + 0;
    { rv_t r_ = func_08874CE4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D454;
L_0886D454:;
    a2 = sp + 0;
    goto L_0886D38C;
}

/* 0886D45C */
rv_t func_0886D45C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D45C:;
    sp = sp - 16;
    v0 = 3;
    a3 = 1;
    a2 = LD_U16(a1+16);
    cnd_ = a2 == v0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0886D4AC; }
    goto L_0886D478;
L_0886D478:;
    v0 = 4;
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD32(a0+64); goto L_0886D4A0; }
    goto L_0886D484;
L_0886D484:;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D48C;
L_0886D48C:;
    a3 = v0 + 0;
    goto L_0886D490;
L_0886D490:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886D4A0:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    goto L_0886D4A4;
L_0886D4A4:;
    ST32(v1+64, v0);
    goto L_0886D490;
L_0886D4AC:;
    v0 = LD32(a0+64);
    v0 = v0 | 0x2;
    goto L_0886D4A4;
}

/* 0886D4B8 */
rv_t func_0886D4B8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886D4B8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886D538; }
    goto L_0886D4EC;
L_0886D4EC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0886D510; }
    goto L_0886D500;
L_0886D500:;
    v0 = D_08B28F84 - (-28796);
    a0 = LD32(v0-28796);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0886D528; }
    goto L_0886D510;
L_0886D510:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886D528:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D530;
L_0886D530:;
    goto L_0886D510;
L_0886D538:;
    s3 = D_08B28F84 - (-28796);
    s0 = s3 - 28796;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D550;
L_0886D550:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28796, v0);
    if (cnd_) { goto L_0886D57C; }
    goto L_0886D560;
L_0886D560:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0886D568;
L_0886D568:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0886D568; }
    goto L_0886D57C;
L_0886D57C:;
    v0 = s3 - 28796;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0886D4EC;
}

/* 0886D58C */
rv_t func_0886D58C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D58C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0886D4B8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D5A0;
L_0886D5A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886D5AC */
rv_t func_0886D5AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D5AC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0886D4B8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D5C0;
L_0886D5C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886D5CC */
void func_0886D5CC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886D5CC:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = a2 + 0;
    func_08869BD4(a0, a1, a2);
    goto L_0886D5EC;
L_0886D5EC:;
    v0 = D_08AF62A0 - (25248);
    v0 = v0 + 25248;
    ST32(s2, v0);
    v0 = 62;
    a2 = sp + 0;
    ST16(s2+8, v0);
    a1 = 0 + 0;
    goto L_0886D608;
L_0886D608:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886D608; }
    goto L_0886D62C;
L_0886D62C:;
    a1 = s2 + 32;
    a2 = 0 + 0;
    goto L_0886D634;
L_0886D634:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886D634; }
    goto L_0886D65C;
L_0886D65C:;
    a0 = LD32(s2+32);
    v0 = func_088D4EF8(a0);
    goto L_0886D664;
L_0886D664:;
    ST32(s2+36, v0);
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_0886D670;
L_0886D670:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886D670; }
    goto L_0886D694;
L_0886D694:;
    a0 = 8;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D69C;
L_0886D69C:;
    a0 = LD32(sp+4);
    s1 = v0 + 0;
    ST32(v0+4, 0);
    ST32(v0, 0);
    cnd_ = a0 != 0;
    ST32(s2+40, v0);
    if (cnd_) { goto L_0886D7AC; }
    goto L_0886D6B4;
L_0886D6B4:;
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0886D748; }
    goto L_0886D6BC;
L_0886D6BC:;
    v1 = LD32(s2+40);
    goto L_0886D6C0;
L_0886D6C0:;
    a3 = t0 << 3;
    a2 = 0 + 0;
    v0 = LD32(v1+4);
    a1 = v0 + a3;
    goto L_0886D6D0;
L_0886D6D0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886D6D0; }
    goto L_0886D6F8;
L_0886D6F8:;
    v1 = LD32(s2+40);
    a2 = 0 + 0;
    v0 = LD32(v1+4);
    v0 = v0 + a3;
    a1 = v0 + 4;
    goto L_0886D70C;
L_0886D70C:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886D70C; }
    goto L_0886D734;
L_0886D734:;
    v0 = LD32(sp+4);
    t0 = t0 + 1;
    v0 = t0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+40); goto L_0886D6C0; }
    goto L_0886D748;
L_0886D748:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0886D7A4; }
    goto L_0886D754;
L_0886D754:;
    a1 = s2 + 44;
    a2 = 0 + 0;
    goto L_0886D75C;
L_0886D75C:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v1 = LD32(s0);
    v0 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886D75C; }
    goto L_0886D784;
L_0886D784:;
    v0 = v1 + 3;
    ST32(s0, v0);
    goto L_0886D78C;
L_0886D78C:;
    sp = sp + 32;
    return;
L_0886D7A4:;
    ST16(s2+44, v0);
    goto L_0886D78C;
L_0886D7AC:;
    ST32(v0, a0);
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D7B8;
L_0886D7B8:;
    ST32(s1+4, v0);
    a0 = LD32(sp+4);
    goto L_0886D6B4;
}

/* 0886D7C4 */
rv_t func_0886D7C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D7C4:;
    sp = sp - 16;
    v0 = D_08AF62A0 - (25248);
    v0 = v0 + 25248;
    s1 = a0 + 0;
    s0 = LD32(a0+40);
    cnd_ = s0 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0886D808; }
    goto L_0886D7EC;
L_0886D7EC:;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0886D830; }
    goto L_0886D7F8;
L_0886D7F8:;
    ST32(s0+4, 0);
    goto L_0886D7FC;
L_0886D7FC:;
    a0 = s0 + 0;
    ST32(s0, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D808;
L_0886D808:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s1, v0);
    a0 = s1 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D81C;
L_0886D81C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886D830:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D838;
L_0886D838:;
    ST32(s0+4, 0);
    goto L_0886D7FC;
}

/* 0886D840 */
rv_t func_0886D840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D840:;
    sp = sp - 16;
    v0 = D_08AF62A0 - (25248);
    v0 = v0 + 25248;
    s1 = a0 + 0;
    s0 = LD32(a0+40);
    cnd_ = s0 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_0886D884; }
    goto L_0886D868;
L_0886D868:;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0886D8B4; }
    goto L_0886D874;
L_0886D874:;
    ST32(s0+4, 0);
    goto L_0886D878;
L_0886D878:;
    a0 = s0 + 0;
    ST32(s0, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D884;
L_0886D884:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s1, v0);
    a0 = s1 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D898;
L_0886D898:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D8A0;
L_0886D8A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886D8B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886D8BC;
L_0886D8BC:;
    ST32(s0+4, 0);
    goto L_0886D878;
}

/* 0886D8C4 */
void func_0886D8C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886D8C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 48;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D8E4;
L_0886D8E4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_0886D5CC(a0, a1, a2);
    goto L_0886D8F4;
L_0886D8F4:;
    sp = sp + 16;
    return;
}

/* 0886D908 */
rv_t func_0886D908(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886D908:;
    sp = sp - 32;
    s1 = a1 + 0;
    s4 = 0 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_08869D70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D934;
L_0886D934:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D940;
L_0886D940:;
    a1 = LD32(s2+32);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D94C;
L_0886D94C:;
    a0 = s2 + 0;
    v0 = func_0886DA04(a0);
    goto L_0886D954;
L_0886D954:;
    s3 = v0 + 0;
    a0 = s1 + 0;
    a1 = v0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D964;
L_0886D964:;
    cnd_ = s3 != 0;
    if (cnd_) { v1 = LD32(s2+40); goto L_0886D9B4; }
    goto L_0886D96C;
L_0886D96C:;
    a1 = LD_U16(s2+44);
    goto L_0886D970;
L_0886D970:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D978;
L_0886D978:;
    a1 = LD32(s1+20);
    v0 = D_08B23100 - (12544);
    a2 = LD_U8(v0+12544);
    a1 = 0 - a1;
    a0 = s1 + 0;
    a1 = a1 & 0x3;
    { rv_t r_ = func_0882D7B8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D994;
L_0886D994:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886D9B4:;
    s0 = s4 << 3;
    a0 = s1 + 0;
    v0 = LD32(v1+4);
    s4 = s4 + 1;
    v0 = v0 + s0;
    a1 = LD32(v0);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D9D0;
L_0886D9D0:;
    v1 = LD32(s2+40);
    a0 = s1 + 0;
    v0 = LD32(v1+4);
    v0 = v0 + s0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886D9E8;
L_0886D9E8:;
    v1 = s4 < s3;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s2+40); goto L_0886D9B4; }
    goto L_0886D9F4;
L_0886D9F4:;
    a1 = LD_U16(s2+44);
    goto L_0886D970;
}

/* 0886D9FC */
u32 func_0886D9FC(u32 a0)
{
    u32 v0 = 0;
L_0886D9FC:;
    v0 = LD32(a0+32);
    return v0;
}

/* 0886DA04 */
u32 func_0886DA04(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0886DA04:;
    v1 = LD32(a0+40);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0886DA14; }
    goto L_0886DA10;
L_0886DA10:;
    v0 = LD32(v1);
    goto L_0886DA14;
L_0886DA14:;
    return v0;
}

/* 0886DA1C */
rv_t func_0886DA1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886DA1C:;
    sp = sp - 16;
    s2 = a0 + 0;
    v0 = func_0886DA04(a0);
    goto L_0886DA38;
L_0886DA38:;
    a1 = v0 << 3;
    a2 = 0 + 0;
    a1 = a1 + 12;
    a0 = 128;
    a3 = 0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DA54;
L_0886DA54:;
    s1 = v0 + 0;
    a0 = s2 + 0;
    v0 = func_0886D9FC(a0);
    goto L_0886DA60;
L_0886DA60:;
    v1 = LD32(s1+24);
    a0 = LD_U16(s2+44);
    a2 = 0 + 0;
    ST32(v1, v0);
    t0 = v1 + 12;
    ST16(v1+8, a0);
    cnd_ = s0 == 0;
    ST32(v1+4, s0);
    if (cnd_) { goto L_0886DAB0; }
    goto L_0886DA80;
L_0886DA80:;
    v0 = LD32(s2+40);
    a3 = LD32(v0+4);
    goto L_0886DA88;
L_0886DA88:;
    v1 = a2 << 3;
    a1 = a3 + v1;
    v0 = LD32(a1);
    v1 = v1 + t0;
    a2 = a2 + 1;
    ST32(v1, v0);
    a0 = a2 < s0;
    v0 = LD32(a1+4);
    cnd_ = a0 != 0;
    ST32(v1+4, v0);
    if (cnd_) { goto L_0886DA88; }
    goto L_0886DAB0;
L_0886DAB0:;
    v0 = 8;
    ST32(s1, v0);
    a0 = s1 + 0;
    a1 = 1;
    v0 = LD32(s2+4);
    a2 = 1;
    ST32(s1+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DAD0;
L_0886DAD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886DAE8 */
rv_t func_0886DAE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886DAE8:;
    sp = sp - 16;
    v1 = a1 + 0;
    a2 = a0 + 0;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_0886DB2C; }
    goto L_0886DB08;
L_0886DB08:;
    cnd_ = v1 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0886DB20; }
    goto L_0886DB10;
L_0886DB10:;
    v1 = LD_U16(v1+16);
    v0 = 124;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0886DB3C; }
    goto L_0886DB20;
L_0886DB20:;
    a0 = a2 + 0;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DB28;
L_0886DB28:;
    a1 = v0 + 0;
    goto L_0886DB2C;
L_0886DB2C:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886DB3C:;
    a1 = 12;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DB44;
L_0886DB44:;
    a1 = 1;
    goto L_0886DB2C;
}

/* 0886DB4C */
void func_0886DB4C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0886DB4C:;
    sp = sp - 48;
    s2 = a0 + 0;
    s1 = s2 + 40;
    s0 = a2 + 0;
    func_08872328(a0, a1, a2);
    goto L_0886DB74;
L_0886DB74:;
    v0 = D_08AF6308 - (25352);
    v0 = v0 + 25352;
    ST32(s2, v0);
    v0 = 28;
    a2 = sp + 0;
    ST32(s1+4, 0);
    a1 = 0 + 0;
    ST32(s1+8, 0);
    ST16(s2+8, v0);
    ST32(s2+40, 0);
    ST32(sp, 0);
    goto L_0886DBA0;
L_0886DBA0:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886DBA0; }
    goto L_0886DBC4;
L_0886DBC4:;
    a1 = s2 + 52;
    a3 = 0 + 0;
    goto L_0886DBCC;
L_0886DBCC:;
    v0 = LD32(s0);
    a3 = a3 + 1;
    a0 = a3 < 0x4u;
    v1 = LD_U8(v0);
    ST8(a1, v1);
    a1 = a1 + 1;
    v0 = LD32(s0);
    a2 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, a2);
    if (cnd_) { goto L_0886DBCC; }
    goto L_0886DBF4;
L_0886DBF4:;
    v1 = LD32(v0+1);
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    a1 = a2 + 0;
    cnd_ = v1 == v0;
    s3 = a2 + 0;
    if (cnd_) { goto L_0886DCCC; }
    goto L_0886DC0C;
L_0886DC0C:;
    a0 = LD32(s2+40);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+8, 0); goto L_0886DC30; }
    goto L_0886DC18;
L_0886DC18:;
    cnd_ = a2 == a0;
    if (cnd_) { v1 = LD32(s1+8); goto L_0886DC6C; }
    goto L_0886DC20;
L_0886DC20:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DC28;
L_0886DC28:;
    ST32(s2+40, 0);
    ST32(s1+8, 0);
    goto L_0886DC30;
L_0886DC30:;
    cnd_ = s3 == 0;
    ST32(s1+4, 0);
    if (cnd_) { goto L_0886DCC4; }
    goto L_0886DC38;
L_0886DC38:;
    a0 = s3 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DC40;
L_0886DC40:;
    v1 = v0 + 1;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DC54;
L_0886DC54:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0886DCB0; }
    goto L_0886DC5C;
L_0886DC5C:;
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    goto L_0886DC64;
L_0886DC64:;
    a1 = LD32(s0);
    goto L_0886DC68;
L_0886DC68:;
    v1 = LD32(s1+8);
    goto L_0886DC6C;
L_0886DC6C:;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0886DC88; }
    goto L_0886DC74;
L_0886DC74:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_0886DC88;
L_0886DC88:;
    v0 = v0 << 2;
    v0 = a1 + v0;
    ST32(s0, v0);
    sp = sp + 48;
    return;
L_0886DCB0:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DCBC;
L_0886DCBC:;
    a1 = LD32(s0);
    goto L_0886DC68;
L_0886DCC4:;
    ST32(s1, 0);
    goto L_0886DC64;
L_0886DCCC:;
    a0 = LD32(s2+40);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0886DCE4; }
    goto L_0886DCD8;
L_0886DCD8:;
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    goto L_0886DC68;
L_0886DCE4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DCEC;
L_0886DCEC:;
    ST32(s2+40, 0);
    a1 = LD32(s0);
    goto L_0886DCD8;
}

/* 0886DCF8 */
rv_t func_0886DCF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886DCF8:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A69C54(a0);
    goto L_0886DD0C;
L_0886DD0C:;
    a0 = s0 + 0;
    { rv_t r_ = func_088725B8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DD14;
L_0886DD14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886DD24 */
rv_t func_0886DD24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886DD24:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = LD32(a0+40);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0886DD54; }
    goto L_0886DD4C;
L_0886DD4C:;
    v0 = (u32)(s32)LD_S8(a0);
    v0 = v0 < 0x1u;
    goto L_0886DD54;
L_0886DD54:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    s2 = s1 + 40;
    if (cnd_) { goto L_0886DDB8; }
    goto L_0886DD60;
L_0886DD60:;
    v0 = D_08AD4A58 - (19032);
    s3 = v0 + 19032;
    cnd_ = a0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0886DD80; }
    goto L_0886DD70;
L_0886DD70:;
    cnd_ = a0 == s3;
    if (cnd_) { goto L_0886DDB8; }
    goto L_0886DD78;
L_0886DD78:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0886DE28; }
    goto L_0886DD80;
L_0886DD80:;
    ST32(s0+8, 0);
    cnd_ = s3 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0886DE20; }
    goto L_0886DD8C;
L_0886DD8C:;
    a0 = s3 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DD94;
L_0886DD94:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DDA8;
L_0886DDA8:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886DE0C; }
    goto L_0886DDB0;
L_0886DDB0:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0886DDB8;
L_0886DDB8:;
    a0 = s1 + 0;
    { rv_t r_ = func_08872664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DDC0;
L_0886DDC0:;
    v1 = LD32(s2+8);
    a0 = v0 + 8;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0886DDE4; }
    goto L_0886DDD0;
L_0886DDD0:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_0886DDE4;
L_0886DDE4:;
    v0 = v0 << 2;
    a0 = a0 + v0;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886DE0C:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DE18;
L_0886DE18:;
    goto L_0886DDB8;
L_0886DE20:;
    ST32(s0, 0);
    goto L_0886DDB8;
L_0886DE28:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DE30;
L_0886DE30:;
    ST32(s1+40, 0);
    goto L_0886DD80;
}

/* 0886DE38 */
rv_t func_0886DE38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886DE38:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08872684(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DE58;
L_0886DE58:;
    a2 = sp + 0;
    ST32(sp, 0);
    a1 = 0 + 0;
    goto L_0886DE64;
L_0886DE64:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886DE64; }
    goto L_0886DE8C;
L_0886DE8C:;
    v0 = LD32(s1+52);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0886DE9C;
L_0886DE9C:;
    v1 = LD_U8(a2);
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v0, v1);
    a2 = a2 + 1;
    v1 = LD32(s0);
    a3 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s0, a3);
    if (cnd_) { goto L_0886DE9C; }
    goto L_0886DEC4;
L_0886DEC4:;
    v0 = LD32(s1+40);
    a0 = s1 + 40;
    cnd_ = v0 == 0;
    s1 = a3 + 0;
    if (cnd_) { goto L_0886DF40; }
    goto L_0886DED4;
L_0886DED4:;
    v1 = LD32(a0+8);
    cnd_ = v1 == 0;
    s2 = 1;
    if (cnd_) { goto L_0886DEF4; }
    goto L_0886DEE0;
L_0886DEE0:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s2 = (u32)((s32)v1 >> 2);
    goto L_0886DEF4;
L_0886DEF4:;
    cnd_ = (s32)s2 <= 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_0886DF10; }
    goto L_0886DEFC;
L_0886DEFC:;
    v0 = s2 + 0;
    goto L_0886DF00;
L_0886DF00:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0886DF00; }
    goto L_0886DF10;
L_0886DF10:;
    a1 = LD32(a0);
    a0 = a3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886DF1C;
L_0886DF1C:;
    v1 = s2 << 2;
    s1 = s1 + v1;
    goto L_0886DF24;
L_0886DF24:;
    ST32(s0, s1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886DF40:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(v1+1, v0);
    s1 = v1 + 5;
    goto L_0886DF24;
}

/* 0886DF54 */
void func_0886DF54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886DF54:;
    sp = sp - 32;
    s3 = D_08B28F94 - (-28780);
    s2 = s3 - 28780;
    s1 = a0 + 0;
    func_08869C54(a0, a1);
    goto L_0886DF7C;
L_0886DF7C:;
    v0 = D_08AF6378 - (25464);
    v1 = LD32(s2+4);
    v0 = v0 + 25464;
    s0 = LD32(s1+4);
    ST32(s1, v0);
    v1 = v1 - 1;
    a0 = 12;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886DFA0;
L_0886DFA0:;
    a0 = LD32(s3-28780);
    v1 = LD32(s2+12);
    s0 = s0 << 2;
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    v1 = 38;
    a0 = (u32)-1;
    ST16(s1+8, v1);
    v1 = 1;
    ST32(v0+4, a1);
    ST16(s1+46, a0);
    ST32(s0, v0);
    ST32(s1+48, v1);
    ST32(s1+40, 0);
    ST32(v0, s1);
    ST16(s1+44, a0);
    ST32(s1+32, 0);
    ST32(s1+36, 0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 0886E010 */
rv_t func_0886E010(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886E010:;
    v0 = D_08AF6378 - (25464);
    v0 = v0 + 25464;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F94 - (-28780);
    a0 = a0 - 28780;
    a1 = s0 + 0;
    func_08AAF78C(a0, a1, t1, t2, t3);
    goto L_0886E03C;
L_0886E03C:;
    v1 = LD32(s0+36);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886E06C; }
    goto L_0886E048;
L_0886E048:;
    v0 = D_08AF6018 - (24600);
    goto L_0886E04C;
L_0886E04C:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E05C;
L_0886E05C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886E06C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E074;
L_0886E074:;
    v0 = D_08AF6018 - (24600);
    goto L_0886E04C;
}

/* 0886E07C */
rv_t func_0886E07C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886E07C:;
    v0 = D_08AF6378 - (25464);
    v0 = v0 + 25464;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28F94 - (-28780);
    a0 = a0 - 28780;
    a1 = s0 + 0;
    func_08AAF78C(a0, a1, t1, t2, t3);
    goto L_0886E0A8;
L_0886E0A8:;
    v1 = LD32(s0+36);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886E0E0; }
    goto L_0886E0B4;
L_0886E0B4:;
    v0 = D_08AF6018 - (24600);
    goto L_0886E0B8;
L_0886E0B8:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E0C8;
L_0886E0C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E0D0;
L_0886E0D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886E0E0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E0E8;
L_0886E0E8:;
    v0 = D_08AF6018 - (24600);
    goto L_0886E0B8;
}

/* 0886E0F0 */
rv_t func_0886E0F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0886E0F0:;
    sp = sp - 48;
    s2 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08869DD0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E114;
L_0886E114:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E120;
L_0886E120:;
    a1 = s1 + 40;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E12C;
L_0886E12C:;
    a1 = s1 + 32;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E138;
L_0886E138:;
    a1 = s1 + 44;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E144;
L_0886E144:;
    a1 = s1 + 46;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E150;
L_0886E150:;
    v1 = LD32(sp);
    v1 = (s32)v1 < 2;
    cnd_ = v1 == 0;
    a1 = s1 + 48;
    if (cnd_) { goto L_0886E210; }
    goto L_0886E160;
L_0886E160:;
    a0 = LD32(s1+32);
    goto L_0886E164;
L_0886E164:;
    cnd_ = a0 != 0;
    ST32(s1+36, 0);
    if (cnd_) { goto L_0886E1B4; }
    goto L_0886E16C;
L_0886E16C:;
    a1 = sp + 4;
    goto L_0886E170;
L_0886E170:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E178;
L_0886E178:;
    a1 = LD32(sp+4);
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_0886E1A0; }
    goto L_0886E184;
L_0886E184:;
    goto L_0886E188;
L_0886E188:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0886E1A0:;
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E1AC;
L_0886E1AC:;
    goto L_0886E188;
L_0886E1B4:;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E1BC;
L_0886E1BC:;
    v1 = LD32(s1+32);
    ST32(s1+36, v0);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0886E16C; }
    goto L_0886E1CC;
L_0886E1CC:;
    a1 = LD32(s1+36);
    goto L_0886E1D0;
L_0886E1D0:;
    s0 = s3 << 3;
    a0 = s2 + 0;
    a1 = a1 + s0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E1E0;
L_0886E1E0:;
    a1 = LD32(s1+36);
    a0 = s2 + 0;
    s3 = s3 + 1;
    a1 = a1 + s0;
    a1 = a1 + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E1F8;
L_0886E1F8:;
    v1 = LD32(s1+32);
    v1 = s3 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+36); goto L_0886E1D0; }
    goto L_0886E208;
L_0886E208:;
    a1 = sp + 4;
    goto L_0886E170;
L_0886E210:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E218;
L_0886E218:;
    a0 = LD32(s1+32);
    goto L_0886E164;
}

/* 0886E220 */
void func_0886E220(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0886E220:;
    sp = sp - 64;
    s1 = a0 + 0;
    a0 = 52;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E244;
L_0886E244:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_0886DF54(a0, a1);
    goto L_0886E254;
L_0886E254:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    a0 = s0 + 0;
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s0);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+32, s2);
    ST8(sp+40, v0);
    ST32(sp+28, v1);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v0 = LD32(a2+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E2A8;
L_0886E2A8:;
    sp = sp + 64;
    return;
}

/* 0886E2C0 */
rv_t func_0886E2C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886E2C0:;
    sp = sp - 32;
    s2 = a1 + 0;
    s3 = 0 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08869D70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E2E8;
L_0886E2E8:;
    a0 = s2 + 0;
    a1 = 2;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E2F4;
L_0886E2F4:;
    a1 = LD32(s1+40);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E300;
L_0886E300:;
    a1 = LD32(s1+32);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E30C;
L_0886E30C:;
    a1 = LD_U16(s1+44);
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E318;
L_0886E318:;
    a1 = LD_U16(s1+46);
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E324;
L_0886E324:;
    a1 = LD32(s1+48);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E330;
L_0886E330:;
    v1 = LD32(s1+32);
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0886E360; }
    goto L_0886E33C;
L_0886E33C:;
    a1 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E344;
L_0886E344:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886E360:;
    v0 = LD32(s1+36);
    goto L_0886E364;
L_0886E364:;
    s0 = s3 << 3;
    a0 = s2 + 0;
    v0 = s0 + v0;
    a1 = LD32(v0);
    s3 = s3 + 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E37C;
L_0886E37C:;
    v1 = LD32(s1+36);
    a0 = s2 + 0;
    v1 = v1 + s0;
    a1 = LD32(v1+4);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E390;
L_0886E390:;
    v1 = LD32(s1+32);
    v1 = s3 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+36); goto L_0886E364; }
    goto L_0886E3A0;
L_0886E3A0:;
    a0 = s2 + 0;
    goto L_0886E33C;
}

/* 0886E3A8 */
rv_t func_0886E3A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886E3A8:;
    sp = sp - 32;
    v0 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0886E444; }
    goto L_0886E3D8;
L_0886E3D8:;
    v1 = LD_U16(a1+16);
    v0 = 5;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 5;
    if (cnd_) { goto L_0886E508; }
    goto L_0886E3E8;
L_0886E3E8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_0886E4F8; }
    goto L_0886E3F0;
L_0886E3F0:;
    v0 = v1 - 20;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0886E4F8; }
    goto L_0886E400;
L_0886E400:;
    a3 = LD32(a0+32);
    v0 = LD32(a1+24);
    cnd_ = a3 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0886E440; }
    goto L_0886E410;
L_0886E410:;
    a2 = LD32(v0);
    a1 = LD32(s1+36);
    s4 = 0xffff;
    s5 = D_08B29170 - (-28304);
    s2 = a0 << 3;
    goto L_0886E424;
L_0886E424:;
    v0 = s2 + a1;
    v1 = LD32(v0);
    a0 = a0 + 1;
    cnd_ = v1 == a2;
    v0 = a0 < a3;
    if (cnd_) { goto L_0886E468; }
    goto L_0886E438;
L_0886E438:;
    cnd_ = v0 != 0;
    s2 = a0 << 3;
    if (cnd_) { goto L_0886E424; }
    goto L_0886E440;
L_0886E440:;
    v0 = 1;
    goto L_0886E444;
L_0886E444:;
    goto L_0886E448;
L_0886E448:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886E468:;
    a0 = s1 + 0;
    { u64 r_ = func_0886E54C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E470;
L_0886E470:;
    v1 = LD_U16(s0+16);
    a1 = LD32(s1+36);
    s3 = v0 + 0;
    v1 = v1 ^ 0x14;
    a1 = s2 + a1;
    v1 = v1 < 0x1u;
    v0 = LD32(a1+4);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(a1+4, v0);
    a0 = s1 + 0;
    { u64 r_ = func_0886E54C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E49C;
L_0886E49C:;
    v1 = v0 + 0;
    v0 = LD32(s1+48);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0886E444; }
    goto L_0886E4B0;
L_0886E4B0:;
    cnd_ = v1 == s3;
    if (cnd_) { goto L_0886E448; }
    goto L_0886E4B8;
L_0886E4B8:;
    v0 = LD32(s1+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_0886E448; }
    goto L_0886E4C8;
L_0886E4C8:;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD_U16(s1+46); goto L_0886E4D4; }
    goto L_0886E4D0;
L_0886E4D0:;
    a1 = LD_U16(s1+44);
    goto L_0886E4D4;
L_0886E4D4:;
    cnd_ = a1 == s4;
    if (cnd_) { v0 = 1; goto L_0886E444; }
    goto L_0886E4DC;
L_0886E4DC:;
    a2 = LD32(s1+4);
    f12 = BITSF(0);
    a0 = s5 - 28304;
    goto L_0886E4E8;
L_0886E4E8:;
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E4F0;
L_0886E4F0:;
    v0 = 1;
    goto L_0886E444;
L_0886E4F8:;
    a1 = s0 + 0;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E500;
L_0886E500:;
    goto L_0886E448;
L_0886E508:;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0886E444; }
    goto L_0886E518;
L_0886E518:;
    { u64 r_ = func_0886E54C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E520;
L_0886E520:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD_U16(s1+46); goto L_0886E52C; }
    goto L_0886E528;
L_0886E528:;
    a1 = LD_U16(s1+44);
    goto L_0886E52C;
L_0886E52C:;
    v0 = 0xffff;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = 1; goto L_0886E444; }
    goto L_0886E538;
L_0886E538:;
    a2 = LD32(s1+4);
    f12 = BITSF(0);
    a0 = D_08B29170 - (-28304);
    a0 = a0 - 28304;
    goto L_0886E4E8;
}

/* 0886E54C */
u64 func_0886E54C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0886E54C:;
    a1 = LD32(a0+32);
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0886E580; }
    goto L_0886E558;
L_0886E558:;
    v1 = LD32(a0+40);
    v0 = 1;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0886E614; }
    goto L_0886E568;
L_0886E568:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(a0+36); goto L_0886E5D0; }
    goto L_0886E570;
L_0886E570:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a0+36); goto L_0886E588; }
    goto L_0886E57C;
L_0886E57C:;
    v0 = a3 + 0;
    goto L_0886E580;
L_0886E580:;
    return (u64)v0 | ((u64)v1 << 32);
L_0886E588:;
    a2 = 1;
    v1 = a2 < a1;
    v0 = LD32(a0+4);
    cnd_ = v1 == 0;
    a3 = v0 & 0x1;
    if (cnd_) { goto L_0886E57C; }
    goto L_0886E59C;
L_0886E59C:;
    a0 = a0 + 12;
    v0 = LD32(a0);
    goto L_0886E5A4;
L_0886E5A4:;
    a2 = a2 + 1;
    t0 = a3 ^ 0x1;
    v0 = v0 & 0x1;
    v1 = a2 < a1;
    cnd_ = v0 == 0;
    a0 = a0 + 8;
    if (cnd_) { goto L_0886E5C0; }
    goto L_0886E5BC;
L_0886E5BC:;
    a3 = t0 & 0xff;
    goto L_0886E5C0;
L_0886E5C0:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0886E5A4; }
    goto L_0886E5C8;
L_0886E5C8:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_0886E5D0:;
    a2 = 1;
    v1 = a2 < a1;
    v0 = LD32(a0+4);
    cnd_ = v1 == 0;
    a3 = v0 & 0x1;
    if (cnd_) { goto L_0886E57C; }
    goto L_0886E5E4;
L_0886E5E4:;
    a0 = a0 + 12;
    goto L_0886E5E8;
L_0886E5E8:;
    a2 = a2 + 1;
    v1 = a2 < a1;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0886E600; }
    goto L_0886E5F8;
L_0886E5F8:;
    v0 = LD32(a0);
    v0 = v0 & 0x1;
    goto L_0886E600;
L_0886E600:;
    a3 = v0 + 0;
    cnd_ = v1 != 0;
    a0 = a0 + 8;
    if (cnd_) { goto L_0886E5E8; }
    goto L_0886E60C;
L_0886E60C:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_0886E614:;
    a0 = LD32(a0+36);
    t0 = 1;
    v1 = t0 < a1;
    v0 = LD32(a0+4);
    cnd_ = v1 == 0;
    a3 = v0 & 0x1;
    if (cnd_) { goto L_0886E57C; }
    goto L_0886E62C;
L_0886E62C:;
    a0 = a0 + 12;
    goto L_0886E630;
L_0886E630:;
    t0 = t0 + 1;
    v1 = t0 < a1;
    cnd_ = a3 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0886E650; }
    goto L_0886E640;
L_0886E640:;
    v0 = LD32(a0);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a3 = a2 + 0;
    if (cnd_) { goto L_0886E658; }
    goto L_0886E650;
L_0886E650:;
    a2 = 1;
    a3 = a2 + 0;
    goto L_0886E658;
L_0886E658:;
    cnd_ = v1 != 0;
    a0 = a0 + 8;
    if (cnd_) { goto L_0886E630; }
    goto L_0886E660;
L_0886E660:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0886E668 */
rv_t func_0886E668(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886E668:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886E6E8; }
    goto L_0886E69C;
L_0886E69C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0886E6C0; }
    goto L_0886E6B0;
L_0886E6B0:;
    v0 = D_08B28F94 - (-28780);
    a0 = LD32(v0-28780);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0886E6D8; }
    goto L_0886E6C0;
L_0886E6C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886E6D8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886E6E0;
L_0886E6E0:;
    goto L_0886E6C0;
L_0886E6E8:;
    s3 = D_08B28F94 - (-28780);
    s0 = s3 - 28780;
    a0 = 128;
    v0 = 32;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E700;
L_0886E700:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28780, v0);
    if (cnd_) { goto L_0886E72C; }
    goto L_0886E710;
L_0886E710:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0886E718;
L_0886E718:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0886E718; }
    goto L_0886E72C;
L_0886E72C:;
    v0 = s3 - 28780;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0886E69C;
}

/* 0886E73C */
rv_t func_0886E73C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886E73C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0886E668(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E750;
L_0886E750:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886E75C */
rv_t func_0886E75C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886E75C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0886E668(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E770;
L_0886E770:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886E77C */
void func_0886E77C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_0886E77C:;
    sp = sp - 112;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08872328(a0, a1, a2);
    goto L_0886E798;
L_0886E798:;
    v0 = D_08AF63E0 - (25568);
    v0 = v0 + 25568;
    ST32(s1, v0);
    v0 = 35;
    a2 = sp + 80;
    ST16(s1+8, v0);
    a1 = 0 + 0;
    goto L_0886E7B4;
L_0886E7B4:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886E7B4; }
    goto L_0886E7D8;
L_0886E7D8:;
    v0 = LD32(sp+80);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+128, 0); goto L_0886E8DC; }
    goto L_0886E7E4;
L_0886E7E4:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0886E7EC;
L_0886E7EC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x48u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886E7EC; }
    goto L_0886E810;
L_0886E810:;
    v0 = LD_U8(sp+68);
    v1 = LD32(sp+68);
    f1 = BITSF(LD32(sp+4));
    v0 = v0 & 0x1;
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+8));
    f3 = BITSF(LD32(sp+12));
    f4 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f6 = BITSF(LD32(sp+24));
    f7 = BITSF(LD32(sp+28));
    f8 = BITSF(LD32(sp+44));
    f10 = BITSF(LD32(sp+52));
    f9 = BITSF(LD32(sp+48));
    t2 = LD32(sp+36);
    t3 = LD32(sp+40);
    ST8(s1+48, v0);
    t1 = s1 + 100;
    a0 = (v1 >> 1) & 0x1;
    v0 = LD32(sp+32);
    a1 = (v1 >> 5) & 0x1;
    a2 = (v1 >> 2) & 0x1;
    a3 = (v1 >> 3) & 0x1;
    ST32(s1+40, FBITS(f0));
    t0 = s1 + 112;
    v1 = (v1 >> 4) & 0x1;
    ST32(s1+44, FBITS(f1));
    ST32(s1+52, FBITS(f2));
    ST32(s1+56, FBITS(f3));
    ST32(s1+60, FBITS(f4));
    ST32(s1+64, FBITS(f5));
    ST32(s1+72, FBITS(f6));
    ST32(s1+80, FBITS(f7));
    ST8(s1+68, a0);
    ST8(s1+69, a1);
    ST8(s1+76, a2);
    ST8(s1+84, a3);
    ST32(s1+88, v0);
    ST32(s1+92, t2);
    ST32(s1+96, t3);
    ST32(s1+100, FBITS(f8));
    ST32(t1+4, FBITS(f9));
    ST32(t1+8, FBITS(f10));
    f0 = BITSF(LD32(sp+56));
    f1 = BITSF(LD32(sp+64));
    ST8(s1+136, v1);
    ST32(s1+112, FBITS(f0));
    f0 = BITSF(LD32(sp+60));
    ST32(t0+8, FBITS(f1));
    ST32(t0+4, FBITS(f0));
    ST32(s1+128, 0);
    goto L_0886E8DC;
L_0886E8DC:;
    a1 = D_08B25AC8 - (23240);
    a2 = a1 + 23240;
    v1 = LD32(a1+23240);
    a0 = LD32(a2+4);
    f2 = BITSF(LD32(s1+72));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEBF8C - (-16500);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-16500));
    v0 = D_08AEBF88 - (-16504);
    ST32(a2+4, a0);
    f1 = f1 * f0;
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0-16504));
    ST32(a1+23240, v1);
    a1 = 1;
    f1 = f1 * f0;
    ST32(s1+124, FBITS(f2));
    ST32(s1+132, FBITS(f1));
    ST32(s1+140, 0);
    { rv_t r_ = func_088741DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886E948;
L_0886E948:;
    sp = sp + 112;
    return;
}

/* 0886E95C */
rv_t func_0886E95C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 256);
L_0886E95C:;
    sp = sp - 256;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886EB24; }
    goto L_0886E9A0;
L_0886E9A0:;
    s2 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(s2-31328));
    f1 = BITSF(LD32(a0+132));
    f2 = BITSF(0);
    f1 = f1 - f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a0+132, FBITS(f1));
    if (cnd_) { goto L_0886EB00; }
    goto L_0886E9C4;
L_0886E9C4:;
    v0 = D_08AEBF90 - (-16496);
    f0 = BITSF(LD32(v0-16496));
    v1 = LD32(a0+88);
    a0 = LD32(a0+140);
    f0 = f1 + f0;
    v1 = v1 & 0x2;
    ST32(s0+128, a0);
    cnd_ = v1 == 0;
    ST32(s0+132, FBITS(f0));
    if (cnd_) { goto L_0886EB00; }
    goto L_0886E9E8;
L_0886E9E8:;
    a0 = LD_U8(s0+48);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(s0+128); goto L_0886EB04; }
    goto L_0886E9F4;
L_0886E9F4:;
    a3 = D_08B28EA4 - (-29020);
    v0 = a3 - 29020;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = a0 < a2;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0886EA6C; }
    goto L_0886EA24;
L_0886EA24:;
    a3 = LD32(a3-29020);
    goto L_0886EA28;
L_0886EA28:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_0886EA5C; }
    goto L_0886EA40;
L_0886EA40:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_0886EA70; }
    goto L_0886EA50;
L_0886EA50:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_0886EA40; }
    goto L_0886EA5C;
L_0886EA5C:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_0886EA28; }
    goto L_0886EA6C;
L_0886EA6C:;
    v1 = LD32(sp+8);
    goto L_0886EA70;
L_0886EA70:;
    cnd_ = v1 == 0;
    v0 = D_08AEBF94 - (-16492);
    if (cnd_) { goto L_0886EAEC; }
    goto L_0886EA78;
L_0886EA78:;
    f23 = BITSF(LD32(v0-16492));
    s4 = s0 + 100;
    s5 = s0 + 112;
    s6 = sp + 64;
    s1 = LD32(v1);
    goto L_0886EA8C;
L_0886EA8C:;
    a0 = sp + 0;
    a1 = 1;
    func_08AAE2A8(a0, a1);
    goto L_0886EA98;
L_0886EA98:;
    cnd_ = s1 == 0;
    v0 = 0x10000u;
    if (cnd_) { goto L_0886EAE0; }
    goto L_0886EAA0;
L_0886EAA0:;
    a1 = LD32(s1);
    v0 = v0 | 0x869f;
    v1 = LD32(a1-16);
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    v0 = v0 < a0;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0886EAE4; }
    goto L_0886EAC0;
L_0886EAC0:;
    v0 = LD32(a1-12);
    f12 = BITSF(0);
    a0 = s1 + v0;
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a0); goto L_0886EB84; }
    goto L_0886EAE0;
L_0886EAE0:;
    v1 = LD32(sp+8);
    goto L_0886EAE4;
L_0886EAE4:;
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_0886EA8C; }
    goto L_0886EAEC;
L_0886EAEC:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0886EB74; }
    goto L_0886EB00;
L_0886EB00:;
    v0 = LD32(s0+128);
    goto L_0886EB04;
L_0886EB04:;
    v1 = LD32(s0+96);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+76); goto L_0886EB64; }
    goto L_0886EB14;
L_0886EB14:;
    f1 = BITSF(LD32(s2-31328));
    f0 = BITSF(LD32(s0+124));
    f0 = f0 - f1;
    goto L_0886EB20;
L_0886EB20:;
    ST32(s0+124, FBITS(f0));
    goto L_0886EB24;
L_0886EB24:;
    a0 = s0 + 0;
    { rv_t r_ = func_088724BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EB2C;
L_0886EB2C:;
    sp = sp + 256;
    return (rv_t){ v0, v1, f0 };
L_0886EB64:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0886EB24; }
    goto L_0886EB6C;
L_0886EB6C:;
    f0 = BITSF(LD32(s0+72));
    goto L_0886EB20;
L_0886EB74:;
    func_08AAF894(a0, t1, t2, t3);
    goto L_0886EB7C;
L_0886EB7C:;
    v0 = LD32(s0+128);
    goto L_0886EB04;
L_0886EB84:;
    v0 = LD32(v1+20);
    t_ = v0;
    f22 = f12;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EB90;
L_0886EB90:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+100));
    f3 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s4+8));
    f2 = f2 - f0;
    f3 = f3 - f1;
    f4 = f4 - f5;
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    fcc = FCMP(f0, f22, 2);
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0886EC34; }
    goto L_0886EBF0;
L_0886EBF0:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f22 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+40, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_0886EC34;
L_0886EC34:;
    f0 = BITSF(LD32(s0+40));
    fcc = FCMP(f22, f0, 14);
    cnd_ = !fcc;
    s3 = 0 + 0;
    if (cnd_) { goto L_0886EC5C; }
    goto L_0886EC48;
L_0886EC48:;
    f0 = BITSF(LD32(s0+44));
    fcc = FCMP(f0, f22, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1); goto L_0886EC78; }
    goto L_0886EC5C;
L_0886EC5C:;
    v0 = LD_U8(s0+69);
    goto L_0886EC60;
L_0886EC60:;
    cnd_ = s3 == v0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0886EAE4; }
    goto L_0886EC68;
L_0886EC68:;
    v0 = LD32(s0+128);
    v0 = v0 + 1;
    ST32(s0+128, v0);
    goto L_0886EAE0;
L_0886EC78:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EC90;
L_0886EC90:;
    v1 = LD32(s1);
    f21 = BITSF(LD32(v0+8));
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886ECB0;
L_0886ECB0:;
    v1 = LD32(s1);
    f20 = BITSF(LD32(v0+20));
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886ECD0;
L_0886ECD0:;
    f1 = BITSF(LD32(v0+32));
    f6 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp+24));
    f2 = BITSF(LD32(s0+52));
    v0 = FBITS(f21);
    {u32 a_=sp+(144);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f20);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[6]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    f5 = BITSF(v0);
    ST32(sp+32, FBITS(f21));
    fcc = FCMP(f2, f0, 14);
    ST32(sp+36, FBITS(f20));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f1));
    if (cnd_) { goto L_0886EC5C; }
    goto L_0886ED40;
L_0886ED40:;
    f0 = BITSF(LD32(s0+56));
    fcc = FCMP(f5, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s0+69); goto L_0886EC60; }
    goto L_0886ED54;
L_0886ED54:;
    f5 = BITSF(LD32(s0+80));
    fcc = FCMP(f23, f5, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s0+68); goto L_0886EDD0; }
    goto L_0886ED68;
L_0886ED68:;
    f2 = BITSF(FBITS(f6) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    v1 = LD32(s5+4);
    v0 = FBITS(f2);
    {u32 a_=sp+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[6]=BITSF(v0);}
    v0 = LD32(s0+112);
    {v[0]=BITSF(v0);}
    v0 = LD32(s5+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f2));
    fcc = FCMP(f5, f0, 14);
    ST32(sp+52, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f4));
    if (cnd_) { goto L_0886EC5C; }
    goto L_0886EDCC;
L_0886EDCC:;
    v0 = LD_U8(s0+68);
    goto L_0886EDD0;
L_0886EDD0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0886EDE0; }
    goto L_0886EDD8;
L_0886EDD8:;
    s3 = 1;
    goto L_0886EC5C;
L_0886EDE0:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EDF8;
L_0886EDF8:;
    a1 = v0 + 0;
    a0 = s6 + 0;
    f12 = f22;
    a2 = sp + 16;
    a3 = 999;
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_0886EE10;
L_0886EE10:;
    a0 = s6 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EE18;
L_0886EE18:;
    v1 = LD_U8(v0+32);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD_U8(s0+69); goto L_0886EC60; }
    goto L_0886EE24;
L_0886EE24:;
    s3 = 1;
    goto L_0886EC5C;
}

/* 0886EE2C */
rv_t func_0886EE2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886EE2C:;
    sp = sp - 16;
    v0 = 4;
    s0 = a0 + 0;
    a1 = 1;
    a3 = 0 + 0;
    v1 = LD32(a0+88);
    a0 = 90;
    cnd_ = v1 == v0;
    a2 = v1 & 0x1;
    if (cnd_) { goto L_0886EE60; }
    goto L_0886EE58;
L_0886EE58:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_0886EE9C; }
    goto L_0886EE60;
L_0886EE60:;
    a2 = LD_U16(s0+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886EE68;
L_0886EE68:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_0886EE98; }
    goto L_0886EE78;
L_0886EE78:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0886EE90; }
    goto L_0886EE84;
L_0886EE84:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    ST8(v1, v0);
    goto L_0886EE90;
L_0886EE90:;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EE98;
L_0886EE98:;
    goto L_0886EE9C;
L_0886EE9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886EEA8 */
rv_t func_0886EEA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886EEA8:;
    sp = sp - 16;
    v0 = 4;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886F084; }
    goto L_0886EEC4;
L_0886EEC4:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    v0 = 93;
    if (cnd_) { goto L_0886EF3C; }
    goto L_0886EED0;
L_0886EED0:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+28); goto L_0886EEF4; }
    goto L_0886EEDC;
L_0886EEDC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EEE4;
L_0886EEE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886EEF4:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0); goto L_0886EF08; }
    goto L_0886EF00;
L_0886EF00:;
    v0 = 1;
    goto L_0886EEE4;
L_0886EF08:;
    v1 = LD32(v0+72);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EF14;
L_0886EF14:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x1;
    goto L_0886EF24;
L_0886EF24:;
    ST32(s0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EF2C;
L_0886EF2C:;
    a0 = s0 + 0;
    { rv_t r_ = func_0887424C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886EF34;
L_0886EF34:;
    v0 = 1;
    goto L_0886EEE4;
L_0886EF3C:;
    cnd_ = v1 == v0;
    v0 = 122;
    if (cnd_) { goto L_0886EF74; }
    goto L_0886EF44;
L_0886EF44:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0886EEDC; }
    goto L_0886EF4C;
L_0886EF4C:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = 1; goto L_0886EEE4; }
    goto L_0886EF58;
L_0886EF58:;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    a0 = LD32(a0+140);
    v1 = v1 - v0;
    a0 = a0 + v1;
    ST32(s0+140, a0);
    goto L_0886EF00;
L_0886EF74:;
    a1 = 64;
    a0 = 121;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886EF88;
L_0886EF88:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0886EF00; }
    goto L_0886EF90;
L_0886EF90:;
    a2 = LD32(v0+24);
    cnd_ = a2 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0886F064; }
    goto L_0886EF9C;
L_0886EF9C:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    ST8(a2, v0);
    v1 = LD_U8(s0+84);
    ST8(a2+32, v1);
    v0 = LD_U8(s0+68);
    ST8(a2+24, v0);
    v1 = LD_U8(s0+69);
    ST8(a2+25, v1);
    v0 = LD_U8(s0+48);
    ST8(a2+12, v0);
    v0 = LD_U8(s0+48);
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+52)); goto L_0886EFD8; }
    goto L_0886EFD4;
L_0886EFD4:;
    f0 = BITSF(LD32(s0+60));
    goto L_0886EFD8;
L_0886EFD8:;
    cnd_ = v0 == 0;
    ST32(a2+16, FBITS(f0));
    if (cnd_) { goto L_0886F07C; }
    goto L_0886EFE0;
L_0886EFE0:;
    f0 = BITSF(LD32(s0+64));
    goto L_0886EFE4;
L_0886EFE4:;
    ST32(a2+20, FBITS(f0));
    v0 = 4;
    f1 = BITSF(LD32(s0+80));
    v1 = LD32(s0+88);
    ST32(a2+28, FBITS(f1));
    f0 = BITSF(LD32(s0+40));
    ST32(a2+4, FBITS(f0));
    f1 = BITSF(LD32(s0+44));
    cnd_ = v1 == v0;
    ST32(a2+8, FBITS(f1));
    if (cnd_) { goto L_0886F074; }
    goto L_0886F00C;
L_0886F00C:;
    v1 = v1 & 0x1;
    a3 = (u32)-1;
    v0 = (u32)-2;
    if (v1 == 0) a3 = v0;
    goto L_0886F01C;
L_0886F01C:;
    v0 = s0 + 112;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+112));
    v1 = a2 + 52;
    ST32(v1+4, FBITS(f1));
    v0 = s0 + 100;
    a0 = a2 + 40;
    ST32(v1+8, FBITS(f0));
    ST32(a2+52, FBITS(f2));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s0+100));
    f2 = BITSF(LD32(v0+4));
    ST32(a0+8, FBITS(f0));
    ST32(a2+40, FBITS(f1));
    ST32(a2+36, a3);
    ST32(a0+4, FBITS(f2));
    a0 = s0 + 0;
    goto L_0886F064;
L_0886F064:;
    a2 = 2;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F06C;
L_0886F06C:;
    v0 = 1;
    goto L_0886EEE4;
L_0886F074:;
    a3 = LD32(s0+92);
    goto L_0886F01C;
L_0886F07C:;
    f0 = BITSF(LD32(s0+56));
    goto L_0886EFE4;
L_0886F084:;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_0886EEE4; }
    goto L_0886F094;
L_0886F094:;
    v0 = LD32(a0);
    v1 = LD32(v0+76);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F0A4;
L_0886F0A4:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_0886EF24;
}

/* 0886F0B8 */
rv_t func_0886F0B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0886F0B8:;
    v0 = LD_U8(a0+136);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0886F0FC; }
    goto L_0886F0C4;
L_0886F0C4:;
    v0 = LD32(a0+128);
    v1 = LD32(a0+96);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886F0FC; }
    goto L_0886F0D8;
L_0886F0D8:;
    f1 = BITSF(LD32(a0+124));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0886F0FC; }
    goto L_0886F0F0;
L_0886F0F0:;
    v0 = 1;
    ST8(a0+136, v0);
    a1 = 1;
    goto L_0886F0FC;
L_0886F0FC:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0886F104 */
rv_t func_0886F104(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0886F104:;
    v0 = LD_U8(a0+136);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0886F144; }
    goto L_0886F110;
L_0886F110:;
    v0 = LD32(a0+128);
    v1 = LD32(a0+96);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(a0+136, 0); goto L_0886F140; }
    goto L_0886F124;
L_0886F124:;
    f1 = BITSF(LD32(a0+124));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0886F144; }
    goto L_0886F13C;
L_0886F13C:;
    ST8(a0+136, 0);
    goto L_0886F140;
L_0886F140:;
    a1 = 1;
    goto L_0886F144;
L_0886F144:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0886F14C */
rv_t func_0886F14C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886F14C:;
    sp = sp - 16;
    { rv_t r_ = func_08872664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F15C;
L_0886F15C:;
    v0 = v0 + 76;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886F16C */
rv_t func_0886F16C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_0886F16C:;
    sp = sp - 192;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08872684(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F188;
L_0886F188:;
    a2 = sp + 160;
    ST32(sp+160, 0);
    a1 = 0 + 0;
    goto L_0886F194;
L_0886F194:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F194; }
    goto L_0886F1BC;
L_0886F1BC:;
    f1 = BITSF(LD32(s1+40));
    f0 = BITSF(LD32(s1+44));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    f13 = f1;
    if (cnd_) { goto L_0886F1D8; }
    goto L_0886F1D4;
L_0886F1D4:;
    f13 = f0;
    goto L_0886F1D8;
L_0886F1D8:;
    fcc = FCMP(f1, f0, 14);
    f12 = f1;
    cnd_ = fcc;
    ST32(sp, FBITS(f13));
    if (cnd_) { goto L_0886F1EC; }
    goto L_0886F1E8;
L_0886F1E8:;
    f12 = f0;
    goto L_0886F1EC;
L_0886F1EC:;
    f1 = BITSF(LD32(s1+52));
    f0 = BITSF(LD32(s1+56));
    ST32(sp+4, FBITS(f12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f11 = f1;
    if (cnd_) { goto L_0886F20C; }
    goto L_0886F208;
L_0886F208:;
    f11 = f0;
    goto L_0886F20C;
L_0886F20C:;
    fcc = FCMP(f0, f1, 14);
    f10 = f1;
    cnd_ = fcc;
    ST32(sp+8, FBITS(f11));
    if (cnd_) { goto L_0886F220; }
    goto L_0886F21C;
L_0886F21C:;
    f10 = f0;
    goto L_0886F220;
L_0886F220:;
    v1 = LD_U8(s1+68);
    v0 = LD_U8(s1+48);
    a1 = LD_U8(s1+76);
    a2 = LD_U8(s1+84);
    a3 = LD_U8(s1+69);
    a0 = s1 + 100;
    v0 = v0 & 0x1;
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    v1 = s1 + 112;
    f0 = BITSF(LD32(s1+60));
    f1 = BITSF(LD32(s1+64));
    f2 = BITSF(LD32(s1+72));
    f3 = BITSF(LD32(s1+80));
    f8 = BITSF(LD32(a0+8));
    f9 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(s1+100));
    f5 = BITSF(LD32(a0+4));
    f6 = BITSF(LD32(s1+112));
    f7 = BITSF(LD32(v1+4));
    t0 = LD32(s1+92);
    t1 = LD32(s1+96);
    v0 = (v0 & ~(0x1u << 2)) | ((a1 & 0x1) << 2);
    a1 = LD32(s1+88);
    v0 = (v0 & ~(0x1u << 3)) | ((a2 & 0x1) << 3);
    v0 = (v0 & ~(0x1u << 5)) | ((a3 & 0x1) << 5);
    ST32(sp+12, FBITS(f10));
    a3 = sp + 80;
    a2 = 0 + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, a1);
    ST32(sp+36, t0);
    ST32(sp+40, t1);
    ST32(sp+44, FBITS(f4));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f8));
    ST32(sp+56, FBITS(f6));
    ST32(sp+60, FBITS(f7));
    ST32(sp+64, FBITS(f9));
    ST32(sp+68, v0);
    ST32(sp+80, FBITS(f13));
    ST32(sp+84, FBITS(f12));
    ST32(sp+88, FBITS(f11));
    ST32(sp+92, FBITS(f10));
    ST32(sp+96, FBITS(f0));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f2));
    ST32(sp+108, FBITS(f3));
    ST32(sp+112, a1);
    ST32(sp+116, t0);
    ST32(sp+120, t1);
    ST32(sp+124, FBITS(f4));
    ST32(sp+128, FBITS(f5));
    ST32(sp+132, FBITS(f8));
    ST32(sp+136, FBITS(f6));
    ST32(sp+140, FBITS(f7));
    ST32(sp+144, FBITS(f9));
    ST32(sp+148, v0);
    goto L_0886F310;
L_0886F310:;
    v0 = LD_U8(a3);
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x48u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F310; }
    goto L_0886F338;
L_0886F338:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
}

/* 0886F34C */
void func_0886F34C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886F34C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08869BD4(a0, a1, a2);
    goto L_0886F368;
L_0886F368:;
    v0 = D_08AF6450 - (25680);
    v0 = v0 + 25680;
    ST32(s1, v0);
    v0 = 31;
    a2 = sp + 0;
    ST16(s1+8, v0);
    a1 = 0 + 0;
    goto L_0886F384;
L_0886F384:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886F384; }
    goto L_0886F3A8;
L_0886F3A8:;
    a1 = s1 + 32;
    a2 = 0 + 0;
    goto L_0886F3B0;
L_0886F3B0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F3B0; }
    goto L_0886F3D8;
L_0886F3D8:;
    a1 = s1 + 36;
    a2 = 0 + 0;
    goto L_0886F3E0;
L_0886F3E0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F3E0; }
    goto L_0886F408;
L_0886F408:;
    sp = sp + 32;
    return;
}

/* 0886F41C */
rv_t func_0886F41C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886F41C:;
    sp = sp - 16;
    v1 = LD32(a0+36);
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0886F51C; }
    goto L_0886F438;
L_0886F438:;
    v0 = v1 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 116; goto L_0886F4D4; }
    goto L_0886F444;
L_0886F444:;
    v0 = v1 & 0xe;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886F45C; }
    goto L_0886F450;
L_0886F450:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886F45C:;
    a1 = 2;
    a3 = 0 + 0;
    a0 = 115;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886F470;
L_0886F470:;
    v1 = LD32(s0+36);
    a3 = v0 + 0;
    a1 = LD32(v0+24);
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = v1 & 0x4;
    if (cnd_) { goto L_0886F4C4; }
    goto L_0886F488;
L_0886F488:;
    v0 = 4;
    goto L_0886F48C;
L_0886F48C:;
    ST8(a1, v0);
    a0 = a3 + 0;
    a2 = 1;
    v0 = LD32(s0+36);
    v0 = v0 & 0x1;
    ST8(a1+1, v0);
    v0 = 8;
    a1 = 1;
    ST32(a3, v0);
    v1 = LD32(s0+4);
    ST32(a3+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F4BC;
L_0886F4BC:;
    goto L_0886F450;
L_0886F4C4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 10; goto L_0886F48C; }
    goto L_0886F4CC;
L_0886F4CC:;
    v0 = 7;
    goto L_0886F48C;
L_0886F4D4:;
    a1 = 1;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886F4E4;
L_0886F4E4:;
    v1 = LD32(s0+36);
    a0 = LD32(v0+24);
    a1 = 1;
    v1 = v1 & 0x1;
    ST8(a0, v1);
    v1 = 8;
    a0 = v0 + 0;
    ST32(v0, v1);
    a2 = 1;
    v1 = LD32(s0+4);
    ST32(v0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F514;
L_0886F514:;
    v1 = LD32(s0+36);
    goto L_0886F444;
L_0886F51C:;
    a0 = 114;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886F530;
L_0886F530:;
    t0 = LD32(v0+24);
    v1 = LD32(s0+32);
    a3 = 8;
    a0 = v0 + 0;
    ST32(t0, v1);
    a1 = 1;
    a2 = 1;
    v1 = LD32(s0+36);
    v1 = v1 & 0x1;
    ST8(t0+4, v1);
    ST32(v0, a3);
    v1 = LD32(s0+4);
    ST32(v0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F568;
L_0886F568:;
    v0 = LD32(s0+32);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+36); goto L_0886F444; }
    goto L_0886F574;
L_0886F574:;
    goto L_0886F450;
}

/* 0886F57C */
rv_t func_0886F57C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886F57C:;
    sp = sp - 16;
    { rv_t r_ = func_08869CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F58C;
L_0886F58C:;
    v0 = v0 + 12;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886F59C */
rv_t func_0886F59C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886F59C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08869CC4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F5B8;
L_0886F5B8:;
    a2 = sp + 0;
    ST32(sp, 0);
    a1 = 0 + 0;
    goto L_0886F5C4;
L_0886F5C4:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F5C4; }
    goto L_0886F5EC;
L_0886F5EC:;
    v0 = LD32(s1+32);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0886F5FC;
L_0886F5FC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F5FC; }
    goto L_0886F624;
L_0886F624:;
    v0 = LD32(s1+36);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_0886F634;
L_0886F634:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F634; }
    goto L_0886F65C;
L_0886F65C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0886F670 */
void func_0886F670(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886F670:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08869BD4(a0, a1, a2);
    goto L_0886F68C;
L_0886F68C:;
    v0 = D_08AF64B8 - (25784);
    v0 = v0 + 25784;
    ST32(s1, v0);
    v0 = 24;
    a2 = sp + 0;
    ST16(s1+8, v0);
    a1 = 0 + 0;
    goto L_0886F6A8;
L_0886F6A8:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0886F6A8; }
    goto L_0886F6CC;
L_0886F6CC:;
    a1 = s1 + 32;
    a2 = 0 + 0;
    goto L_0886F6D4;
L_0886F6D4:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F6D4; }
    goto L_0886F6FC;
L_0886F6FC:;
    a1 = s1 + 36;
    a2 = 0 + 0;
    goto L_0886F704;
L_0886F704:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F704; }
    goto L_0886F72C;
L_0886F72C:;
    a3 = LD32(sp);
    cnd_ = (s32)a3 <= 0;
    v0 = 1;
    if (cnd_) { goto L_0886F7C4; }
    goto L_0886F738;
L_0886F738:;
    a1 = s1 + 40;
    a2 = 0 + 0;
    goto L_0886F740;
L_0886F740:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F740; }
    goto L_0886F768;
L_0886F768:;
    v0 = (s32)a3 < 2;
    cnd_ = v0 != 0;
    v0 = D_08AEBFC0 - (-16448);
    if (cnd_) { goto L_0886F7B8; }
    goto L_0886F774;
L_0886F774:;
    a1 = s1 + 44;
    a2 = 0 + 0;
    goto L_0886F77C;
L_0886F77C:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F77C; }
    goto L_0886F7A4;
L_0886F7A4:;
    sp = sp + 32;
    return;
L_0886F7B8:;
    f0 = BITSF(LD32(v0-16448));
    ST32(s1+44, FBITS(f0));
    goto L_0886F7A4;
L_0886F7C4:;
    ST32(s1+40, v0);
    goto L_0886F768;
}

/* 0886F7CC */
rv_t func_0886F7CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886F7CC:;
    sp = sp - 16;
    a1 = 8;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 113;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886F7F0;
L_0886F7F0:;
    t1 = v0 + 0;
    t0 = LD32(v0+24);
    v1 = LD_U8(s0+32);
    f0 = BITSF(LD32(s0+36));
    f1 = BITSF(0);
    ST8(t0+4, v1);
    v0 = LD_U8(s0+40);
    ST32(t0, FBITS(f0));
    v0 = v0 & 0x1;
    ST8(t0+5, v0);
    v0 = D_08AEBFC4 - (-16444);
    f2 = BITSF(LD32(s0+44));
    f0 = BITSF(LD32(v0-16444));
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEBFC8 - (-16440);
    if (cnd_) { goto L_0886F88C; }
    goto L_0886F838;
L_0886F838:;
    f0 = BITSF(LD32(v0-16440));
    f0 = f2 + f0;
    goto L_0886F840;
L_0886F840:;
    f0 = BITSF(F2I(f0, 1));
    v0 = 255;
    a0 = t1 + 0;
    a1 = 1;
    a3 = FBITS(f0);
    a2 = 1;
    v1 = (s32)a3 < 0;
    v0 = (s32)v0 < (s32)a3 ? v0 : a3;
    if (v1 != 0) v0 = 0;
    v1 = 8;
    ST8(t0+6, v0);
    ST32(t1, v1);
    v0 = LD32(s0+4);
    ST32(t1+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F87C;
L_0886F87C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0886F88C:;
    f0 = BITSF(LD32(v0-16440));
    f0 = f2 - f0;
    goto L_0886F840;
}

/* 0886F898 */
rv_t func_0886F898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886F898:;
    sp = sp - 16;
    { rv_t r_ = func_08869CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F8A8;
L_0886F8A8:;
    v0 = v0 + 20;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886F8B8 */
rv_t func_0886F8B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0886F8B8:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08869CC4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886F8D4;
L_0886F8D4:;
    v0 = 2;
    ST32(sp, v0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0886F8E4;
L_0886F8E4:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F8E4; }
    goto L_0886F90C;
L_0886F90C:;
    v0 = LD32(s1+32);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0886F91C;
L_0886F91C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F91C; }
    goto L_0886F944;
L_0886F944:;
    f0 = BITSF(LD32(s1+36));
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, FBITS(f0));
    goto L_0886F954;
L_0886F954:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F954; }
    goto L_0886F97C;
L_0886F97C:;
    v0 = LD32(s1+40);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_0886F98C;
L_0886F98C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F98C; }
    goto L_0886F9B4;
L_0886F9B4:;
    f0 = BITSF(LD32(s1+44));
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, FBITS(f0));
    goto L_0886F9C4;
L_0886F9C4:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0886F9C4; }
    goto L_0886F9EC;
L_0886F9EC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0886FA00 */
void func_0886FA00(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886FA00:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_0886FA14;
L_0886FA14:;
    v0 = D_08AF6520 - (25888);
    v0 = v0 + 25888;
    ST32(s0, v0);
    a0 = s0 + 0;
    ST32(s0+32, 0);
    ST32(s0+36, 0);
    func_0886FBF0(a0);
    goto L_0886FA30;
L_0886FA30:;
    sp = sp + 16;
    return;
}

/* 0886FA40 */
rv_t func_0886FA40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886FA40:;
    sp = sp - 16;
    s2 = a0 + 32;
    v0 = D_08AF6520 - (25888);
    s1 = a0 + 0;
    v0 = v0 + 25888;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0886FA80; }
    goto L_0886FA70;
L_0886FA70:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886FA78;
L_0886FA78:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0886FA70; }
    goto L_0886FA80;
L_0886FA80:;
    ST32(s2+4, 0);
    a0 = s1 + 0;
    ST32(s2, 0);
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886FA90;
L_0886FA90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886FAA8 */
rv_t func_0886FAA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886FAA8:;
    sp = sp - 16;
    s2 = a0 + 32;
    v0 = D_08AF6520 - (25888);
    s1 = a0 + 0;
    v0 = v0 + 25888;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0886FAE8; }
    goto L_0886FAD8;
L_0886FAD8:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886FAE0;
L_0886FAE0:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0886FAD8; }
    goto L_0886FAE8;
L_0886FAE8:;
    ST32(s2+4, 0);
    a0 = s1 + 0;
    ST32(s2, 0);
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886FAF8;
L_0886FAF8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886FB00;
L_0886FB00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886FB18 */
void func_0886FB18(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0886FB18:;
    sp = sp - 64;
    s1 = a0 + 0;
    a0 = 44;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FB3C;
L_0886FB3C:;
    a1 = s1 + 0;
    s1 = D_08AF0F10 - (3856);
    a0 = v0 + 0;
    s1 = s1 + 3856;
    s0 = v0 + 0;
    func_0886FA00(a0, a1);
    goto L_0886FB54;
L_0886FB54:;
    ST32(sp+8, 0);
    v0 = (u32)-1;
    v1 = 1;
    ST32(sp, s1);
    a0 = s0 + 0;
    a2 = LD32(s0);
    ST32(sp+12, v0);
    v0 = 10000;
    ST32(sp+36, v0);
    ST8(sp+40, v1);
    ST32(sp+28, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+32, 0);
    ST8(sp+41, 0);
    v0 = LD32(a2+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FBA4;
L_0886FBA4:;
    v1 = LD_U8(sp+41);
    cnd_ = v1 == 0;
    ST32(sp, s1);
    if (cnd_) { goto L_0886FBC8; }
    goto L_0886FBB0;
L_0886FBB0:;
    v0 = LD_U8(sp+40);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0886FBCC; }
    goto L_0886FBBC;
L_0886FBBC:;
    v0 = LD32(sp+28);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0886FBE0; }
    goto L_0886FBC8;
L_0886FBC8:;
    goto L_0886FBCC;
L_0886FBCC:;
    sp = sp + 64;
    return;
L_0886FBE0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886FBE8;
L_0886FBE8:;
    goto L_0886FBCC;
}

/* 0886FBF0 */
void func_0886FBF0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886FBF0:;
    v1 = 1;
    a1 = 52;
    ST32(a0+40, v1);
    sp = sp - 16;
    ST16(a0+8, a1);
    ST32(a0+28, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886FC14;
L_0886FC14:;
    sp = sp + 16;
    return;
}

/* 0886FC20 */
rv_t func_0886FC20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0886FC20:;
    sp = sp - 48;
    s2 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FC4C;
L_0886FC4C:;
    v1 = LD32(sp);
    cnd_ = (s32)v1 <= 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0886FC60; }
    goto L_0886FC58;
L_0886FC58:;
    a1 = s2 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FC60;
L_0886FC60:;
    a1 = s1 + 40;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FC6C;
L_0886FC6C:;
    a1 = s1 + 28;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FC78;
L_0886FC78:;
    a0 = s2 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FC84;
L_0886FC84:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0886FCEC; }
    goto L_0886FC90;
L_0886FC90:;
    s3 = s1 + 32;
    a1 = sp + 8;
    goto L_0886FC98;
L_0886FC98:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FCA0;
L_0886FCA0:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FCA8;
L_0886FCA8:;
    a1 = v0 + 0;
    a0 = LD32(s1+32);
    v0 = LD32(sp+4);
    v1 = LD32(sp+8);
    s0 = s0 + 1;
    a2 = s0 < v0;
    ST32(a1+8, v1);
    ST32(a1, 0);
    cnd_ = a0 == 0;
    ST32(a1+4, a0);
    if (cnd_) { goto L_0886FCD4; }
    goto L_0886FCD0;
L_0886FCD0:;
    ST32(a0, a1);
    goto L_0886FCD4;
L_0886FCD4:;
    v0 = LD32(s3+4);
    cnd_ = v0 != 0;
    ST32(s1+32, a1);
    if (cnd_) { goto L_0886FCE4; }
    goto L_0886FCE0;
L_0886FCE0:;
    ST32(s3+4, a1);
    goto L_0886FCE4;
L_0886FCE4:;
    cnd_ = a2 != 0;
    a1 = sp + 8;
    if (cnd_) { goto L_0886FC98; }
    goto L_0886FCEC;
L_0886FCEC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0886FD08 */
rv_t func_0886FD08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0886FD08:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FD2C;
L_0886FD2C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FD38;
L_0886FD38:;
    a1 = LD32(s0+40);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FD44;
L_0886FD44:;
    a1 = LD32(s0+28);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FD50;
L_0886FD50:;
    v0 = LD32(s0+36);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0886FD68; }
    goto L_0886FD5C;
L_0886FD5C:;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_0886FD5C; }
    goto L_0886FD68;
L_0886FD68:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FD70;
L_0886FD70:;
    s0 = LD32(s0+36);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0886FD98; }
    goto L_0886FD7C;
L_0886FD7C:;
    a1 = LD32(s0+8);
    goto L_0886FD80;
L_0886FD80:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FD88;
L_0886FD88:;
    s0 = LD32(s0);
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(s0+8); goto L_0886FD80; }
    goto L_0886FD94;
L_0886FD94:;
    goto L_0886FD98;
L_0886FD98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0886FDA8 */
rv_t func_0886FDA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0886FDA8:;
    sp = sp - 32;
    v1 = 1;
    s2 = a0 + 0;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0886FE40; }
    goto L_0886FDD4;
L_0886FDD4:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0886FE40; }
    goto L_0886FDDC;
L_0886FDDC:;
    v1 = LD_U16(a1+16);
    v0 = 53;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+40); goto L_08870030; }
    goto L_0886FDEC;
L_0886FDEC:;
    v0 = (s32)v1 < 54;
    cnd_ = v0 == 0;
    v0 = (s32)v1 < 57;
    if (cnd_) { goto L_0886FE6C; }
    goto L_0886FDF8;
L_0886FDF8:;
    v0 = 52;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+40); goto L_0886FE5C; }
    goto L_0886FE04;
L_0886FE04:;
    v0 = LD32(s2+40);
    goto L_0886FE08;
L_0886FE08:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0886FE40; }
    goto L_0886FE14;
L_0886FE14:;
    s0 = LD32(s2+36);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0886FE44; }
    goto L_0886FE20;
L_0886FE20:;
    a2 = LD32(s0+8);
    goto L_0886FE24;
L_0886FE24:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    f0 = func_0887003C(a0, a1, a2, t2, t3);
    goto L_0886FE30;
L_0886FE30:;
    s0 = LD32(s0);
    cnd_ = s0 != 0;
    if (cnd_) { a2 = LD32(s0+8); goto L_0886FE24; }
    goto L_0886FE3C;
L_0886FE3C:;
    v1 = 1;
    goto L_0886FE40;
L_0886FE40:;
    goto L_0886FE44;
L_0886FE44:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0886FE5C:;
    v1 = 1;
    v0 = v0 | 0x1;
    goto L_0886FE64;
L_0886FE64:;
    ST32(s2+40, v0);
    goto L_0886FE40;
L_0886FE6C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+40); goto L_0886FE08; }
    goto L_0886FE74;
L_0886FE74:;
    v0 = LD32(a1+24);
    a1 = LD32(v0);
    v0 = 55;
    cnd_ = v1 == v0;
    ST32(sp, a1);
    if (cnd_) { goto L_0886FFC0; }
    goto L_0886FE88;
L_0886FE88:;
    v0 = 56;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = a0 + 32; goto L_0886FF98; }
    goto L_0886FE94;
L_0886FE94:;
    a2 = LD32(sp);
    v0 = 999;
    cnd_ = a2 == v0;
    s0 = s2 + 32;
    if (cnd_) { goto L_0886FE3C; }
    goto L_0886FEA4;
L_0886FEA4:;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0886FED0; }
    goto L_0886FEB0;
L_0886FEB0:;
    a1 = a2 + 0;
    v0 = LD32(v1+8);
    goto L_0886FEB8;
L_0886FEB8:;
    cnd_ = v0 == a1;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886FED0; }
    goto L_0886FEC0;
L_0886FEC0:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_0886FEB8; }
    goto L_0886FECC;
L_0886FECC:;
    a0 = 0 + 0;
    goto L_0886FED0;
L_0886FED0:;
    cnd_ = a0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0886FE40; }
    goto L_0886FED8;
L_0886FED8:;
    a0 = D_08B28FD4 - (-28716);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 28716;
    if (cnd_) { goto L_0886FE3C; }
    goto L_0886FEE8;
L_0886FEE8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28716);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0886FF2C; }
    goto L_0886FF0C;
L_0886FF0C:;
    v1 = LD32(a0);
    goto L_0886FF10;
L_0886FF10:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0886FF78; }
    goto L_0886FF1C;
L_0886FF1C:;
    a0 = LD32(a0+4);
    goto L_0886FF20;
L_0886FF20:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0886FF10; }
    goto L_0886FF28;
L_0886FF28:;
    v1 = 0 + 0;
    goto L_0886FF2C;
L_0886FF2C:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 1; goto L_0886FE40; }
    goto L_0886FF34;
L_0886FF34:;
    v1 = LD_U16(v1+8);
    v0 = LD32(s2+28);
    cnd_ = v1 != v0;
    v1 = 1;
    if (cnd_) { goto L_0886FE40; }
    goto L_0886FF44;
L_0886FF44:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0886FF4C;
L_0886FF4C:;
    a3 = LD32(s2+32);
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    s1 = v0 + 0;
    func_08AAFA30(a0, a1, a2, a3);
    goto L_0886FF64;
L_0886FF64:;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    ST32(s2+32, s1);
    if (cnd_) { goto L_0886FE3C; }
    goto L_0886FF70;
L_0886FF70:;
    ST32(s0+4, s1);
    goto L_0886FE3C;
L_0886FF78:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0886FF20; }
    goto L_0886FF84;
L_0886FF84:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0886FF20; }
    goto L_0886FF90;
L_0886FF90:;
    goto L_0886FF2C;
L_0886FF98:;
    a0 = LD32(s1+4);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_0886FFB8; }
    goto L_0886FFA4;
L_0886FFA4:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0886FFAC;
L_0886FFAC:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0886FFA4; }
    goto L_0886FFB4;
L_0886FFB4:;
    ST32(s1+4, 0);
    goto L_0886FFB8;
L_0886FFB8:;
    ST32(s1, 0);
    goto L_0886FE94;
L_0886FFC0:;
    a2 = a0 + 32;
    v1 = LD32(a2+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0886FFEC; }
    goto L_0886FFD0;
L_0886FFD0:;
    v0 = LD32(v1+8);
    goto L_0886FFD4;
L_0886FFD4:;
    cnd_ = v0 == a1;
    a0 = v1 + 0;
    if (cnd_) { goto L_0886FFEC; }
    goto L_0886FFDC;
L_0886FFDC:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_0886FFD4; }
    goto L_0886FFE8;
L_0886FFE8:;
    a0 = 0 + 0;
    goto L_0886FFEC;
L_0886FFEC:;
    cnd_ = a0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0886FE40; }
    goto L_0886FFF4;
L_0886FFF4:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08870024; }
    goto L_08870000;
L_08870000:;
    ST32(v1+4, v0);
    goto L_08870004;
L_08870004:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a2+4, v1); goto L_08870014; }
    goto L_08870010;
L_08870010:;
    ST32(v0, v1);
    goto L_08870014;
L_08870014:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887001C;
L_0887001C:;
    v1 = 1;
    goto L_0886FE40;
L_08870024:;
    ST32(s2+32, v0);
    v1 = LD32(a0);
    goto L_08870004;
L_08870030:;
    v1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_0886FE64;
}

/* 0887003C */
float func_0887003C(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0887003C:;
    sp = sp - 16;
    a3 = 0 + 0;
    v0 = LD32(a0+4);
    a0 = a1 + 0;
    a1 = a2 + 0;
    a2 = v0 + 0;
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887005C;
L_0887005C:;
    sp = sp + 16;
    return f0;
}

/* 08870068 */
void func_08870068(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08870068:;
    sp = sp - 48;
    s3 = a0 + 0;
    s0 = a2 + 0;
    func_08869BD4(a0, a1, a2);
    goto L_0887008C;
L_0887008C:;
    v0 = D_08AF6570 - (25968);
    v0 = v0 + 25968;
    ST32(s3, v0);
    v0 = 14;
    a2 = sp + 0;
    ST16(s3+8, v0);
    a1 = 0 + 0;
    goto L_088700A8;
L_088700A8:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_088700A8; }
    goto L_088700CC;
L_088700CC:;
    a1 = s3 + 32;
    a2 = 0 + 0;
    goto L_088700D4;
L_088700D4:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088700D4; }
    goto L_088700FC;
L_088700FC:;
    s2 = D_08B28FA4 - (-28764);
    s1 = s2 - 28764;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887011C;
L_0887011C:;
    a0 = LD32(s2-28764);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s3);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 48;
    return;
}

/* 08870164 */
rv_t func_08870164(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08870164:;
    v0 = D_08AF6570 - (25968);
    v0 = v0 + 25968;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28FA4 - (-28764);
    a1 = s0 + 0;
    a0 = a0 - 28764;
    func_08AAFA5C(a0, a1, t1, t2, t3);
    goto L_08870190;
L_08870190:;
    v1 = D_08AF6018 - (24600);
    v1 = v1 + 24600;
    ST32(s0, v1);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088701A4;
L_088701A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088701B4 */
rv_t func_088701B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088701B4:;
    v0 = D_08AF6570 - (25968);
    v0 = v0 + 25968;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28FA4 - (-28764);
    a1 = s0 + 0;
    a0 = a0 - 28764;
    func_08AAFA5C(a0, a1, t1, t2, t3);
    goto L_088701E0;
L_088701E0:;
    v1 = D_08AF6018 - (24600);
    v1 = v1 + 24600;
    ST32(s0, v1);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088701F4;
L_088701F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088701FC;
L_088701FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887020C */
rv_t func_0887020C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0887020C:;
    sp = sp - 16;
    { rv_t r_ = func_08869CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887021C;
L_0887021C:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887022C */
rv_t func_0887022C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0887022C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08869CC4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870248;
L_08870248:;
    a2 = sp + 0;
    ST32(sp, 0);
    a1 = 0 + 0;
    goto L_08870254;
L_08870254:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870254; }
    goto L_0887027C;
L_0887027C:;
    v0 = LD32(s1+32);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0887028C;
L_0887028C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0887028C; }
    goto L_088702B4;
L_088702B4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088702C8 */
rv_t func_088702C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088702C8:;
    sp = sp - 16;
    v1 = 1;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0887030C; }
    goto L_088702E8;
L_088702E8:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887030C; }
    goto L_088702F0;
L_088702F0:;
    v1 = LD_U16(a1+16);
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+28); goto L_08870320; }
    goto L_08870300;
L_08870300:;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870308;
L_08870308:;
    v1 = v0 + 0;
    goto L_0887030C;
L_0887030C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08870320:;
    v1 = v0 | 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08870348; }
    goto L_08870330;
L_08870330:;
    v1 = LD32(s0);
    goto L_08870334;
L_08870334:;
    v0 = LD32(v1+80);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870340;
L_08870340:;
    v1 = 1;
    goto L_0887030C;
L_08870348:;
    ST32(a0+28, v1);
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870350;
L_08870350:;
    v1 = LD32(s0);
    goto L_08870334;
}

/* 08870358 */
rv_t func_08870358(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08870358:;
    sp = sp - 16;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 3;
    a1 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887037C;
L_0887037C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 2;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887038C;
L_0887038C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887039C */
rv_t func_0887039C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0887039C:;
    sp = sp - 16;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 4;
    a1 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088703C0;
L_088703C0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 2;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088703D0;
L_088703D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088703E0 */
rv_t func_088703E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088703E0:;
    sp = sp - 16;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 5;
    a1 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08870404;
L_08870404:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 2;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870414;
L_08870414:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08870424 */
rv_t func_08870424(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08870424:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088704A4; }
    goto L_08870458;
L_08870458:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887047C; }
    goto L_0887046C;
L_0887046C:;
    v0 = D_08B28FA4 - (-28764);
    a0 = LD32(v0-28764);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08870494; }
    goto L_0887047C;
L_0887047C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08870494:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887049C;
L_0887049C:;
    goto L_0887047C;
L_088704A4:;
    s3 = D_08B28FA4 - (-28764);
    s0 = s3 - 28764;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088704BC;
L_088704BC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28764, v0);
    if (cnd_) { goto L_088704E8; }
    goto L_088704CC;
L_088704CC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088704D4;
L_088704D4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088704D4; }
    goto L_088704E8;
L_088704E8:;
    v0 = s3 - 28764;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08870458;
}

/* 088704F8 */
rv_t func_088704F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088704F8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08870424(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887050C;
L_0887050C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08870518 */
rv_t func_08870518(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08870518:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08870424(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887052C;
L_0887052C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08870538 */
rv_t func_08870538(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08870538:;
    sp = sp - 16;
    v0 = D_08AF65D8 - (26072);
    s0 = a0 + 0;
    v0 = v0 + 26072;
    v1 = LD32(a0+48);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088705A0; }
    goto L_08870560;
L_08870560:;
    v0 = LD32(s0+52);
    goto L_08870564;
L_08870564:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08870590; }
    goto L_0887056C;
L_0887056C:;
    v0 = D_08AF6018 - (24600);
    goto L_08870570;
L_08870570:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08870580;
L_08870580:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08870590:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08870598;
L_08870598:;
    v0 = D_08AF6018 - (24600);
    goto L_08870570;
L_088705A0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088705A8;
L_088705A8:;
    v0 = LD32(s0+52);
    goto L_08870564;
}

/* 088705B0 */
rv_t func_088705B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088705B0:;
    sp = sp - 16;
    v0 = D_08AF65D8 - (26072);
    s0 = a0 + 0;
    v0 = v0 + 26072;
    v1 = LD32(a0+48);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08870620; }
    goto L_088705D8;
L_088705D8:;
    v0 = LD32(s0+52);
    goto L_088705DC;
L_088705DC:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08870610; }
    goto L_088705E4;
L_088705E4:;
    v0 = D_08AF6018 - (24600);
    goto L_088705E8;
L_088705E8:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088705F8;
L_088705F8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08870600;
L_08870600:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08870610:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08870618;
L_08870618:;
    v0 = D_08AF6018 - (24600);
    goto L_088705E8;
L_08870620:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08870628;
L_08870628:;
    v0 = LD32(s0+52);
    goto L_088705DC;
}

/* 08870630 */
void func_08870630(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08870630:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08869BD4(a0, a1, a2);
    goto L_0887064C;
L_0887064C:;
    v0 = D_08AF65D8 - (26072);
    v0 = v0 + 26072;
    ST32(s1, v0);
    v0 = 11;
    a2 = sp + 0;
    ST16(s1+8, v0);
    a1 = 0 + 0;
    goto L_08870668;
L_08870668:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08870668; }
    goto L_0887068C;
L_0887068C:;
    a1 = s1 + 40;
    a2 = 0 + 0;
    goto L_08870694;
L_08870694:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870694; }
    goto L_088706BC;
L_088706BC:;
    a3 = LD32(sp);
    v0 = (s32)a3 < 3;
    cnd_ = v0 == 0;
    a1 = s1 + 44;
    if (cnd_) { goto L_088706D8; }
    goto L_088706CC;
L_088706CC:;
    v0 = LD32(s1+40);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    ST32(s1+40, v0);
    goto L_088706D8;
L_088706D8:;
    a2 = 0 + 0;
    goto L_088706DC;
L_088706DC:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088706DC; }
    goto L_08870704;
L_08870704:;
    a0 = LD32(s1+44);
    ST32(s1+48, 0);
    cnd_ = a0 != 0;
    ST32(s1+52, 0);
    if (cnd_) { goto L_0887081C; }
    goto L_08870714;
L_08870714:;
    v0 = (s32)a3 < 3;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+32, 0); goto L_08870814; }
    goto L_08870720;
L_08870720:;
    a1 = s1 + 32;
    a2 = 0 + 0;
    goto L_08870728;
L_08870728:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870728; }
    goto L_08870750;
L_08870750:;
    a1 = s1 + 36;
    a2 = 0 + 0;
    goto L_08870758;
L_08870758:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870758; }
    goto L_08870780;
L_08870780:;
    v0 = (s32)a3 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+56, 0); goto L_088707BC; }
    goto L_0887078C;
L_0887078C:;
    a1 = s1 + 56;
    a2 = 0 + 0;
    goto L_08870794;
L_08870794:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870794; }
    goto L_088707BC;
L_088707BC:;
    v0 = (s32)a3 < 5;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08870804; }
    goto L_088707C8;
L_088707C8:;
    a3 = sp + 4;
    a2 = 0 + 0;
    goto L_088707D0;
L_088707D0:;
    v0 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    a1 = v0 + 1;
    ST32(s0, a1);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_088707D0; }
    goto L_088707F4;
L_088707F4:;
    v0 = LD32(sp+4);
    v0 = a1 + v0;
    ST32(s0, v0);
    goto L_08870804;
L_08870804:;
    sp = sp + 32;
    return;
L_08870814:;
    ST32(s1+36, 0);
    goto L_08870780;
L_0887081C:;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870824;
L_08870824:;
    a0 = LD32(s1+44);
    cnd_ = a0 == 0;
    ST32(s1+48, v0);
    if (cnd_) { goto L_08870844; }
    goto L_08870830;
L_08870830:;
    v0 = LD32(s1+40);
    v1 = 4;
    v0 = v0 & 0x104;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08870918; }
    goto L_08870844;
L_08870844:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870850;
L_08870850:;
    v0 = LD32(s1+44);
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088708FC; }
    goto L_0887085C;
L_0887085C:;
    t2 = 0 + 0;
    v0 = LD32(s1+48);
    goto L_08870864;
L_08870864:;
    t0 = t1 << 3;
    a2 = 0 + 0;
    a1 = v0 + t0;
    goto L_08870870;
L_08870870:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x8u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870870; }
    goto L_08870898;
L_08870898:;
    a3 = LD32(sp);
    v0 = (s32)a3 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+48); goto L_08870904; }
    goto L_088708A8;
L_088708A8:;
    v1 = LD32(s1+52);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1+44); goto L_088708EC; }
    goto L_088708B4;
L_088708B4:;
    v0 = t1 << 2;
    a1 = v1 + v0;
    a2 = 0 + 0;
    goto L_088708C0;
L_088708C0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088708C0; }
    goto L_088708E8;
L_088708E8:;
    v0 = LD32(s1+44);
    goto L_088708EC;
L_088708EC:;
    t1 = t1 + 1;
    v0 = t1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_08870864; }
    goto L_088708FC;
L_088708FC:;
    a3 = LD32(sp);
    goto L_08870714;
L_08870904:;
    v1 = t0 + v1;
    v0 = LD32(v1);
    v0 = (v0 & ~(0x7fffu << 17)) | ((t2 & 0x7fff) << 17);
    ST32(v1, v0);
    goto L_088708A8;
L_08870918:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870920;
L_08870920:;
    ST32(s1+52, v0);
    goto L_08870850;
}

/* 08870928 */
rv_t func_08870928(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08870928:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08869CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887093C;
L_0887093C:;
    a1 = v0 + 0;
    v0 = LD32(s0+44);
    cnd_ = v0 == 0;
    a0 = v0 << 3;
    if (cnd_) { goto L_08870964; }
    goto L_0887094C;
L_0887094C:;
    v1 = LD32(s0+40);
    a2 = v0 << 2;
    v0 = 4;
    v1 = v1 & 0x104;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = a1 + a2; goto L_08870964; }
    goto L_08870964;
L_08870964:;
    v0 = a1 + a0;
    a1 = v0 + 28;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08870980 */
rv_t func_08870980(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08870980:;
    sp = sp - 64;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08869CC4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887099C;
L_0887099C:;
    v0 = 6;
    ST32(sp+4, v0);
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_088709AC;
L_088709AC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088709AC; }
    goto L_088709D4;
L_088709D4:;
    v0 = LD32(s1+40);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_088709E4;
L_088709E4:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088709E4; }
    goto L_08870A0C;
L_08870A0C:;
    v0 = LD32(s1+44);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_08870A1C;
L_08870A1C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870A1C; }
    goto L_08870A44;
L_08870A44:;
    v0 = LD32(s1+44);
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08870B4C; }
    goto L_08870A50;
L_08870A50:;
    t1 = sp + 2;
    t2 = sp + 16;
    t3 = 4;
    v0 = LD32(s1+48);
    goto L_08870A60;
L_08870A60:;
    a3 = t0 << 3;
    a2 = sp + 0;
    v0 = a3 + v0;
    v1 = LD_U16(v0);
    a1 = 0 + 0;
    ST16(sp, v1);
    goto L_08870A78;
L_08870A78:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870A78; }
    goto L_08870AA0;
L_08870AA0:;
    v0 = LD32(s1+48);
    a2 = t1 + 0;
    a1 = 0 + 0;
    v0 = a3 + v0;
    v1 = LD_U16(v0+2);
    ST16(sp+2, v1);
    goto L_08870AB8;
L_08870AB8:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870AB8; }
    goto L_08870AE0;
L_08870AE0:;
    v0 = LD32(s1+48);
    a2 = t2 + 0;
    a1 = 0 + 0;
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(sp+16, v1);
    goto L_08870AF8;
L_08870AF8:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870AF8; }
    goto L_08870B20;
L_08870B20:;
    v1 = LD32(s1+44);
    cnd_ = v1 == 0;
    if (cnd_) { t0 = t0 + 1; goto L_08870B40; }
    goto L_08870B2C;
L_08870B2C:;
    v0 = LD32(s1+40);
    v0 = v0 & 0x104;
    cnd_ = v0 == t3;
    if (cnd_) { v0 = LD32(s1+52); goto L_08870C3C; }
    goto L_08870B3C;
L_08870B3C:;
    t0 = t0 + 1;
    goto L_08870B40;
L_08870B40:;
    v0 = t0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_08870A60; }
    goto L_08870B4C;
L_08870B4C:;
    f0 = BITSF(LD32(s1+32));
    a2 = sp + 24;
    a1 = 0 + 0;
    ST32(sp+24, FBITS(f0));
    goto L_08870B5C;
L_08870B5C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870B5C; }
    goto L_08870B84;
L_08870B84:;
    f0 = BITSF(LD32(s1+36));
    a2 = sp + 28;
    a1 = 0 + 0;
    ST32(sp+28, FBITS(f0));
    goto L_08870B94;
L_08870B94:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870B94; }
    goto L_08870BBC;
L_08870BBC:;
    v0 = LD32(s1+56);
    a2 = sp + 32;
    a1 = 0 + 0;
    ST32(sp+32, v0);
    goto L_08870BCC;
L_08870BCC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870BCC; }
    goto L_08870BF4;
L_08870BF4:;
    ST32(sp+36, 0);
    a2 = sp + 36;
    a1 = 0 + 0;
    goto L_08870C00;
L_08870C00:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870C00; }
    goto L_08870C28;
L_08870C28:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08870C3C:;
    v1 = t0 << 2;
    a2 = sp + 20;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    a1 = 0 + 0;
    ST32(sp+20, FBITS(f0));
    goto L_08870C54;
L_08870C54:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08870C54; }
    goto L_08870C7C;
L_08870C7C:;
    v1 = LD32(s1+44);
    goto L_08870B3C;
}

/* 08870C84 */
rv_t func_08870C84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08870C84:;
    sp = sp - 32;
    v1 = LD32(a0+52);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08870D24; }
    goto L_08870CA8;
L_08870CA8:;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08870D28; }
    goto L_08870CB8;
L_08870CB8:;
    a3 = LD32(a0+44);
    s1 = 0 + 0;
    f20 = BITSF(0);
    cnd_ = a3 == 0;
    s2 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08870D24; }
    goto L_08870CCC;
L_08870CCC:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    f1 = BITSF(LD32(v0));
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { s1 = s1 + 1; goto L_08870D10; }
    goto L_08870CE8;
L_08870CE8:;
    f0 = BITSF(LD32(s2-31328));
    a1 = s1 + 0;
    a0 = s0 + 0;
    f0 = f1 - f0;
    a2 = 0 + 0;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    ST32(v0, FBITS(f0));
    if (cnd_) { goto L_08870D40; }
    goto L_08870D0C;
L_08870D0C:;
    s1 = s1 + 1;
    goto L_08870D10;
L_08870D10:;
    v0 = s1 < a3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08870D28; }
    goto L_08870D1C;
L_08870D1C:;
    v1 = LD32(s0+52);
    goto L_08870CCC;
L_08870D24:;
    goto L_08870D28;
L_08870D28:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08870D40:;
    ST32(v0, FBITS(f20));
    { rv_t r_ = func_08871050(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870D48;
L_08870D48:;
    a3 = LD32(s0+44);
    goto L_08870D0C;
}

/* 08870D50 */
rv_t func_08870D50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08870D50:;
    sp = sp - 16;
    v1 = a1 + 0;
    a3 = a0 + 0;
    cnd_ = a1 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08870DEC; }
    goto L_08870D68;
L_08870D68:;
    a2 = LD_U16(a1+16);
    v0 = a2 - 6;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    t0 = 1;
    if (cnd_) { goto L_08870DFC; }
    goto L_08870D7C;
L_08870D7C:;
    a0 = LD32(v1+24);
    v0 = a2 ^ 0x6;
    a1 = v0 < 0x1u;
    v1 = LD32(a3+44);
    v0 = LD32(a0);
    a2 = v0 << 3;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08870DF0; }
    goto L_08870DA0;
L_08870DA0:;
    v1 = LD32(a3+48);
    v1 = a2 + v1;
    v0 = LD32(v1);
    v0 = (v0 & ~(0x1u << 16)) | ((a1 & 0x1) << 16);
    ST32(v1, v0);
    a1 = LD32(a3+52);
    cnd_ = a1 == 0;
    v0 = t0 + 0;
    if (cnd_) { goto L_08870DF4; }
    goto L_08870DC0;
L_08870DC0:;
    a0 = LD32(a0);
    v1 = LD32(a3+48);
    v0 = a0 << 3;
    v0 = v0 + v1;
    v1 = LD32(v0);
    v0 = 0x10000u;
    a0 = a0 << 2;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    a0 = a0 + a1;
    if (cnd_) { goto L_08870DF0; }
    goto L_08870DE8;
L_08870DE8:;
    ST32(a0, 0);
    goto L_08870DEC;
L_08870DEC:;
    goto L_08870DF0;
L_08870DF0:;
    v0 = t0 + 0;
    goto L_08870DF4;
L_08870DF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08870DFC:;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870E04;
L_08870E04:;
    t0 = v0 + 0;
    goto L_08870DEC;
}

/* 08870E0C */
rv_t func_08870E0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08870E0C:;
    sp = sp - 16;
    a2 = LD32(a0+40);
    v0 = a2 & 0x8;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08870EC0; }
    goto L_08870E30;
L_08870E30:;
    a3 = LD32(a0+44);
    t0 = 0 + 0;
    t2 = a3 + 0;
    cnd_ = a3 == 0;
    t1 = a3 + 0;
    if (cnd_) { goto L_08870E8C; }
    goto L_08870E44;
L_08870E44:;
    t3 = LD32(a0+48);
    t4 = 0x10000u;
    goto L_08870E4C;
L_08870E4C:;
    a1 = LD32(s0+56);
    t0 = t0 + 1;
    a3 = t0 < t2;
    v0 = a1 < t1;
    cnd_ = v0 != 0;
    t1 = t2 + 0;
    if (cnd_) { goto L_08870E6C; }
    goto L_08870E64;
L_08870E64:;
    ST32(s0+56, 0);
    a1 = 0 + 0;
    goto L_08870E6C;
L_08870E6C:;
    v1 = a1 << 3;
    v1 = v1 + t3;
    v0 = LD32(v1);
    v0 = v0 & t4;
    cnd_ = v0 != 0;
    a0 = a1 + 1;
    if (cnd_) { goto L_08870EA4; }
    goto L_08870E84;
L_08870E84:;
    cnd_ = a3 != 0;
    ST32(s0+56, a0);
    if (cnd_) { goto L_08870E4C; }
    goto L_08870E8C;
L_08870E8C:;
    goto L_08870E90;
L_08870E90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08870EA4:;
    a2 = (a2 >> 2) & 0x1;
    a0 = s0 + 0;
    { rv_t r_ = func_08871050(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870EB0;
L_08870EB0:;
    v0 = LD32(s0+56);
    v0 = v0 + 1;
    ST32(s0+56, v0);
    goto L_08870E8C;
L_08870EC0:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    a3 = LD32(a0+44);
    if (cnd_) { goto L_08870FB0; }
    goto L_08870ECC;
L_08870ECC:;
    t0 = 0 + 0;
    a1 = 0 + 0;
    cnd_ = a3 == 0;
    a2 = a3 + 0;
    if (cnd_) { goto L_08870E8C; }
    goto L_08870EDC;
L_08870EDC:;
    v1 = LD32(a0+48);
    a3 = 0x10000u;
    goto L_08870EE4;
L_08870EE4:;
    v0 = LD32(v1);
    a1 = a1 + 1;
    v0 = v0 & a3;
    cnd_ = v0 == 0;
    a0 = a1 < a2;
    if (cnd_) { goto L_08870F00; }
    goto L_08870EF8;
L_08870EF8:;
    v0 = LD32(v1+4);
    t0 = t0 + v0;
    goto L_08870F00;
L_08870F00:;
    cnd_ = a0 != 0;
    v1 = v1 + 8;
    if (cnd_) { goto L_08870EE4; }
    goto L_08870F08;
L_08870F08:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08870E90; }
    goto L_08870F10;
L_08870F10:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a2+4, a0);
    ST32(a1+23232, v0);
    a1 = 0 + 0;
    a3 = LD32(s0+44);
    a2 = hi;
    cnd_ = a3 == 0;
    t0 = a3 + 0;
    if (cnd_) { goto L_08870E90; }
    goto L_08870F58;
L_08870F58:;
    a0 = LD32(s0+48);
    a3 = 0x10000u;
    goto L_08870F60;
L_08870F60:;
    v0 = LD32(a0);
    v0 = v0 & a3;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = a1 + 1; goto L_08870F84; }
    goto L_08870F70;
L_08870F70:;
    v0 = LD32(a0+4);
    v1 = a2 < v0;
    cnd_ = v1 != 0;
    a2 = a2 - v0;
    if (cnd_) { goto L_08870F98; }
    goto L_08870F80;
L_08870F80:;
    a1 = a1 + 1;
    goto L_08870F84;
L_08870F84:;
    v0 = a1 < t0;
    cnd_ = v0 != 0;
    a0 = a0 + 8;
    if (cnd_) { goto L_08870F60; }
    goto L_08870F90;
L_08870F90:;
    goto L_08870E90;
L_08870F98:;
    a2 = LD32(s0+40);
    a0 = s0 + 0;
    a2 = (a2 >> 2) & 0x1;
    { rv_t r_ = func_08871050(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08870FA8;
L_08870FA8:;
    goto L_08870E90;
L_08870FB0:;
    cnd_ = a3 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08870E8C; }
    goto L_08870FB8;
L_08870FB8:;
    s2 = 0x10000u;
    v0 = LD32(s0+48);
    goto L_08870FC0;
L_08870FC0:;
    v1 = s1 << 3;
    a1 = s1 + 0;
    v1 = v1 + v0;
    a2 = LD32(v1);
    s1 = s1 + 1;
    a2 = a2 & s2;
    cnd_ = a2 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08870FF4; }
    goto L_08870FE0;
L_08870FE0:;
    v0 = s1 < a3;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_08870FC0; }
    goto L_08870FEC;
L_08870FEC:;
    goto L_08870E90;
L_08870FF4:;
    a2 = LD32(s0+40);
    a2 = (a2 >> 2) & 0x1;
    { rv_t r_ = func_08871050(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871000;
L_08871000:;
    a3 = LD32(s0+44);
    goto L_08870FE0;
}

/* 08871008 */
rv_t func_08871008(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08871008:;
    v0 = LD32(a0+52);
    sp = sp - 16;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887103C; }
    goto L_08871018;
L_08871018:;
    a2 = LD32(a0+44);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0887103C; }
    goto L_08871024;
L_08871024:;
    v1 = v0 + 0;
    goto L_08871028;
L_08871028:;
    a1 = a1 + 1;
    v0 = a1 < a2;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08871028; }
    goto L_0887103C;
L_0887103C:;
    { rv_t r_ = func_0886A130(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871044;
L_08871044:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08871050 */
rv_t func_08871050(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08871050:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    a3 = a1 + 0;
    s0 = a0 + 0;
    f12 = BITSF(0);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088710CC; }
    goto L_08871074;
L_08871074:;
    a1 = D_08B25AC0 - (23232);
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEBFCC - (-16436);
    f3 = BITSF(LD32(s0+32));
    f2 = (float)(s32)FBITS(f0);
    f1 = BITSF(LD32(s0+36));
    f0 = BITSF(LD32(v0-16436));
    a0 = a0 + v1;
    f1 = f1 - f3;
    f2 = f2 * f0;
    ST32(a2+4, a0);
    f2 = f2 * f1;
    ST32(a1+23232, v1);
    f12 = f3 + f2;
    goto L_088710CC;
L_088710CC:;
    f1 = BITSF(0);
    fcc = FCMP(f12, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s0+48); goto L_08871138; }
    goto L_088710E0;
L_088710E0:;
    v0 = LD32(s0+40);
    v0 = v0 & 0x100;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_08871138; }
    goto L_088710F0;
L_088710F0:;
    v1 = LD32(s0+52);
    v0 = a3 << 2;
    v0 = v0 + v1;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(v0, FBITS(f12)); goto L_08871124; }
    goto L_08871110;
L_08871110:;
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f12 = f0; goto L_08871120; }
    goto L_08871120;
L_08871120:;
    ST32(v0, FBITS(f12));
    goto L_08871124;
L_08871124:;
    goto L_08871128;
L_08871128:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08871138:;
    s1 = a3 << 3;
    a2 = LD32(s0+4);
    v0 = s1 + v0;
    a1 = LD_U16(v0);
    a0 = D_08B29170 - (-28304);
    a0 = a0 - 28304;
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871154;
L_08871154:;
    v0 = LD32(s0+40);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08871128; }
    goto L_08871164;
L_08871164:;
    v1 = LD32(s0+48);
    v1 = s1 + v1;
    v0 = LD32(v1);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(v1, v0);
    goto L_08871128;
}

/* 0887117C */
rv_t func_0887117C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0887117C:;
    sp = sp - 16;
    v0 = D_08AF6640 - (26176);
    s0 = a0 + 0;
    v0 = v0 + 26176;
    v1 = LD32(a0+36);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088711C8; }
    goto L_088711A4;
L_088711A4:;
    v0 = D_08AF6018 - (24600);
    goto L_088711A8;
L_088711A8:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088711B8;
L_088711B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088711C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088711D0;
L_088711D0:;
    v0 = D_08AF6018 - (24600);
    goto L_088711A8;
}

/* 088711D8 */
rv_t func_088711D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088711D8:;
    sp = sp - 16;
    v0 = D_08AF6640 - (26176);
    s0 = a0 + 0;
    v0 = v0 + 26176;
    v1 = LD32(a0+36);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0887122C; }
    goto L_08871200;
L_08871200:;
    v0 = D_08AF6018 - (24600);
    goto L_08871204;
L_08871204:;
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08871214;
L_08871214:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887121C;
L_0887121C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887122C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08871234;
L_08871234:;
    v0 = D_08AF6018 - (24600);
    goto L_08871204;
}

/* 0887123C */
void func_0887123C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0887123C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08869BD4(a0, a1, a2);
    goto L_08871258;
L_08871258:;
    v0 = D_08AF6640 - (26176);
    v0 = v0 + 26176;
    ST32(s1, v0);
    v0 = 42;
    a2 = sp + 0;
    ST16(s1+8, v0);
    a1 = 0 + 0;
    goto L_08871274;
L_08871274:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08871274; }
    goto L_08871298;
L_08871298:;
    a1 = s1 + 40;
    a2 = 0 + 0;
    goto L_088712A0;
L_088712A0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088712A0; }
    goto L_088712C8;
L_088712C8:;
    a1 = s1 + 32;
    a2 = 0 + 0;
    goto L_088712D0;
L_088712D0:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088712D0; }
    goto L_088712F8;
L_088712F8:;
    v0 = LD32(s1+32);
    cnd_ = v0 != 0;
    ST32(s1+36, 0);
    if (cnd_) { goto L_0887139C; }
    goto L_08871304;
L_08871304:;
    v0 = D_08AEBFDC - (-16420);
    goto L_08871308;
L_08871308:;
    f0 = BITSF(LD32(v0-16420));
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    ST32(s1+48, FBITS(f0));
    if (cnd_) { goto L_08871394; }
    goto L_08871318;
L_08871318:;
    a1 = s1 + 44;
    a2 = 0 + 0;
    goto L_08871320;
L_08871320:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871320; }
    goto L_08871348;
L_08871348:;
    a3 = sp + 4;
    a2 = 0 + 0;
    goto L_08871350;
L_08871350:;
    v0 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    a1 = v0 + 1;
    ST32(s0, a1);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08871350; }
    goto L_08871374;
L_08871374:;
    v0 = LD32(sp+4);
    v0 = a1 + v0;
    ST32(s0, v0);
    sp = sp + 32;
    return;
L_08871394:;
    ST32(s1+44, 0);
    goto L_08871348;
L_0887139C:;
    a0 = v0 << 1;
    a0 = a0 + v0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088713AC;
L_088713AC:;
    v1 = LD32(s1+32);
    ST32(s1+36, v0);
    cnd_ = v1 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_08871304; }
    goto L_088713BC;
L_088713BC:;
    t2 = 0 + 0;
    t1 = 0 + 0;
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_088713CC;
L_088713CC:;
    v0 = LD32(s1+36);
    a2 = 0 + 0;
    a1 = v0 + a3;
    goto L_088713D8;
L_088713D8:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088713D8; }
    goto L_08871400;
L_08871400:;
    v0 = LD32(s1+36);
    a2 = 0 + 0;
    v0 = v0 + t0;
    a1 = v0 + 4;
    goto L_08871410;
L_08871410:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871410; }
    goto L_08871438;
L_08871438:;
    v0 = LD32(s1+36);
    a2 = 0 + 0;
    v0 = v0 + t1;
    a1 = v0 + 8;
    goto L_08871448;
L_08871448:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871448; }
    goto L_08871470;
L_08871470:;
    v0 = LD32(s1+36);
    a2 = 0 + 0;
    v0 = v0 + t2;
    a1 = v0 + 10;
    goto L_08871480;
L_08871480:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871480; }
    goto L_088714A8;
L_088714A8:;
    v0 = LD32(s1+32);
    t3 = t3 + 1;
    a3 = a3 + 12;
    v0 = t3 < v0;
    t0 = t0 + 12;
    t1 = t1 + 12;
    cnd_ = v0 != 0;
    t2 = t2 + 12;
    if (cnd_) { goto L_088713CC; }
    goto L_088714C8;
L_088714C8:;
    v0 = D_08AEBFDC - (-16420);
    goto L_08871308;
}

/* 088714D0 */
rv_t func_088714D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088714D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08869CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088714E4;
L_088714E4:;
    a0 = v0 + 0;
    v1 = LD32(s0+32);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    a0 = v0 + 20;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08871514 */
rv_t func_08871514(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08871514:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08869CC4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871530;
L_08871530:;
    v0 = 1;
    ST32(sp+4, v0);
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_08871540;
L_08871540:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871540; }
    goto L_08871568;
L_08871568:;
    f0 = BITSF(LD32(s1+40));
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, FBITS(f0));
    goto L_08871578;
L_08871578:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871578; }
    goto L_088715A0;
L_088715A0:;
    v0 = LD32(s1+32);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_088715B0;
L_088715B0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088715B0; }
    goto L_088715D8;
L_088715D8:;
    v0 = LD32(s1+32);
    cnd_ = v0 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_08871720; }
    goto L_088715E4;
L_088715E4:;
    t5 = sp + 16;
    t6 = sp + 20;
    t4 = sp + 2;
    t2 = 0 + 0;
    t1 = 0 + 0;
    t0 = 0 + 0;
    a3 = 0 + 0;
    goto L_08871600;
L_08871600:;
    v0 = LD32(s1+36);
    a2 = t5 + 0;
    a1 = 0 + 0;
    v0 = a3 + v0;
    v1 = LD32(v0);
    ST32(sp+16, v1);
    goto L_08871618;
L_08871618:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871618; }
    goto L_08871640;
L_08871640:;
    v0 = LD32(s1+36);
    a2 = t6 + 0;
    a1 = 0 + 0;
    v0 = t0 + v0;
    f0 = BITSF(LD32(v0+4));
    ST32(sp+20, FBITS(f0));
    goto L_08871658;
L_08871658:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871658; }
    goto L_08871680;
L_08871680:;
    v0 = LD32(s1+36);
    a2 = sp + 0;
    a1 = 0 + 0;
    v0 = t1 + v0;
    v1 = LD_U16(v0+8);
    ST16(sp, v1);
    goto L_08871698;
L_08871698:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871698; }
    goto L_088716C0;
L_088716C0:;
    v0 = LD32(s1+36);
    a2 = t4 + 0;
    a1 = 0 + 0;
    v0 = t2 + v0;
    v1 = LD_U16(v0+10);
    ST16(sp+2, v1);
    goto L_088716D8;
L_088716D8:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088716D8; }
    goto L_08871700;
L_08871700:;
    v0 = LD32(s1+32);
    t3 = t3 + 1;
    a3 = a3 + 12;
    v0 = t3 < v0;
    t0 = t0 + 12;
    t1 = t1 + 12;
    cnd_ = v0 != 0;
    t2 = t2 + 12;
    if (cnd_) { goto L_08871600; }
    goto L_08871720;
L_08871720:;
    v0 = LD32(s1+44);
    a2 = sp + 24;
    a1 = 0 + 0;
    ST32(sp+24, v0);
    goto L_08871730;
L_08871730:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871730; }
    goto L_08871758;
L_08871758:;
    ST32(sp+28, 0);
    a2 = sp + 28;
    a1 = 0 + 0;
    goto L_08871764;
L_08871764:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871764; }
    goto L_0887178C;
L_0887178C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 088717A0 */
rv_t func_088717A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088717A0:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088717C8; }
    goto L_088717BC;
L_088717BC:;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_088717E0; }
    goto L_088717C8;
L_088717C8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08873E44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088717D0;
L_088717D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088717E0:;
    f0 = BITSF(LD32(v0-31328));
    f12 = BITSF(LD32(a0+40));
    f12 = f12 + f0;
    { rv_t r_ = func_088717F8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088717F0;
L_088717F0:;
    goto L_088717C8;
}

/* 088717F8 */
rv_t func_088717F8(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088717F8:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+28);
    f20 = BITSF(LD32(a0+40));
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST32(a0+40, FBITS(f12));
    if (cnd_) { goto L_088718B0; }
    goto L_08871820;
L_08871820:;
    v0 = LD32(a0+32);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088718B4; }
    goto L_0887182C;
L_0887182C:;
    fcc = FCMP(f20, f12, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_088718B8; }
    goto L_0887183C;
L_0887183C:;
    v0 = LD32(a0+44);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088718E8; }
    goto L_0887184C;
L_0887184C:;
    f13 = BITSF(LD32(s0+40));
    goto L_08871850;
L_08871850:;
    f12 = f20;
    a0 = s0 + 0;
    { rv_t r_ = func_08871924(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887185C;
L_0887185C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08871A00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871864;
L_08871864:;
    v0 = LD32(s0+44);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088718B4; }
    goto L_08871874;
L_08871874:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088718B8; }
    goto L_08871884;
L_08871884:;
    f12 = BITSF(LD32(s0+40));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_088718B8; }
    goto L_08871898;
L_08871898:;
    f20 = BITSF(0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088718C4; }
    goto L_088718AC;
L_088718AC:;
    ST32(s0+40, FBITS(f20));
    goto L_088718B0;
L_088718B0:;
    goto L_088718B4;
L_088718B4:;
    goto L_088718B8;
L_088718B8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088718C4:;
    f13 = f0;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088718CC;
L_088718CC:;
    ST32(s0+40, FBITS(f0));
    a0 = s0 + 0;
    f12 = f20;
    f13 = f0;
    { rv_t r_ = func_08871924(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088718E0;
L_088718E0:;
    goto L_088718B4;
L_088718E8:;
    { rv_t r_ = func_08871A00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088718F0;
L_088718F0:;
    f1 = BITSF(LD32(s0+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f13 = BITSF(LD32(s0+40)); goto L_08871850; }
    goto L_08871904;
L_08871904:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887191C;
L_0887191C:;
    f13 = BITSF(LD32(s0+40));
    goto L_08871850;
}

/* 08871924 */
rv_t func_08871924(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08871924:;
    sp = sp - 48;
    s2 = a0 + 0;
    s1 = 0 + 0;
    f21 = f13;
    f20 = f12;
    v1 = LD32(a0+32);
    cnd_ = v1 == 0;
    s0 = LD32(a0+36);
    if (cnd_) { goto L_08871994; }
    goto L_08871968;
L_08871968:;
    s3 = 0xffff;
    s4 = 0x10000u;
    s5 = D_08B29170 - (-28304);
    goto L_08871974;
L_08871974:;
    f0 = BITSF(LD32(s0+4));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    s1 = s1 + 1;
    if (cnd_) { goto L_088719C0; }
    goto L_08871988;
L_08871988:;
    v0 = s1 < v1;
    goto L_0887198C;
L_0887198C:;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08871974; }
    goto L_08871994;
L_08871994:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088719C0:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    v0 = s1 < v1;
    if (cnd_) { goto L_0887198C; }
    goto L_088719D0;
L_088719D0:;
    a1 = LD_U16(s0+8);
    cnd_ = a1 == s3;
    if (cnd_) { goto L_0887198C; }
    goto L_088719DC;
L_088719DC:;
    v0 = LD32(s0+8);
    f12 = BITSF(0);
    v0 = v0 & s4;
    cnd_ = v0 == 0;
    a0 = s5 - 28304;
    if (cnd_) { goto L_08871988; }
    goto L_088719F0;
L_088719F0:;
    a2 = LD32(s2+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088719F8;
L_088719F8:;
    v1 = LD32(s2+32);
    goto L_08871988;
}

/* 08871A00 */
rv_t func_08871A00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08871A00:;
    f0 = BITSF(LD32(a0+48));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08871A58; }
    goto L_08871A18;
L_08871A18:;
    a2 = LD32(a0+32);
    ST32(a0+48, FBITS(f1));
    a1 = 0 + 0;
    cnd_ = a2 == 0;
    v0 = LD32(a0+36);
    if (cnd_) { goto L_08871A60; }
    goto L_08871A2C;
L_08871A2C:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+48));
    a1 = a1 + 1;
    v1 = a1 < a2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = v0 + 12;
    if (cnd_) { goto L_08871A50; }
    goto L_08871A4C;
L_08871A4C:;
    f0 = f1;
    goto L_08871A50;
L_08871A50:;
    cnd_ = v1 != 0;
    ST32(a0+48, FBITS(f0));
    if (cnd_) { goto L_08871A2C; }
    goto L_08871A58;
L_08871A58:;
    return (rv_t){ v0, v1, f0 };
L_08871A60:;
    f0 = BITSF(LD32(a0+48));
    return (rv_t){ v0, v1, f0 };
}

/* 08871A68 */
rv_t func_08871A68(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08871A68:;
    sp = sp - 16;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v1 = LD32(a0+36);
    v0 = v0 << 2;
    a2 = a0 + 0;
    a0 = v1 + v0;
    f1 = BITSF(LD32(a0+4));
    ST32(a0+4, FBITS(f12));
    v0 = D_08AEBFE0 - (-16416);
    v1 = LD32(a2+28);
    f0 = BITSF(LD32(v0-16416));
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    ST32(a2+48, FBITS(f0));
    if (cnd_) { goto L_08871AF4; }
    goto L_08871AA8;
L_08871AA8:;
    f0 = BITSF(LD32(a2+40));
    fcc = FCMP(f12, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08871AF8; }
    goto L_08871ABC;
L_08871ABC:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08871AF8; }
    goto L_08871ACC;
L_08871ACC:;
    a1 = LD_U16(a0+8);
    v0 = 0xffff;
    cnd_ = a1 == v0;
    v0 = 0x10000u;
    if (cnd_) { goto L_08871AF4; }
    goto L_08871ADC;
L_08871ADC:;
    v1 = LD32(a0+8);
    a0 = D_08B29170 - (-28304);
    v1 = v1 & v0;
    f12 = BITSF(0);
    cnd_ = v1 != 0;
    a0 = a0 - 28304;
    if (cnd_) { goto L_08871B00; }
    goto L_08871AF4;
L_08871AF4:;
    goto L_08871AF8;
L_08871AF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08871B00:;
    a2 = LD32(a2+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871B08;
L_08871B08:;
    goto L_08871AF8;
}

/* 08871B10 */
rv_t func_08871B10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08871B10:;
    sp = sp - 16;
    a2 = a0 + 0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08871B78; }
    goto L_08871B24;
L_08871B24:;
    a3 = LD_U16(a1+16);
    v0 = a3 & 0xffff;
    v0 = v0 - 14;
    v1 = v0 < 0x22u;
    cnd_ = v1 == 0;
    v1 = D_08AD4A5C - (19036);
    if (cnd_) { goto L_08871BFC; }
    goto L_08871B3C;
L_08871B3C:;
    v0 = v0 << 2;
    v1 = v1 + 19036;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08871B54u: goto L_08871B54; case 0x08871B84u: goto L_08871B84; case 0x08871BE4u: goto L_08871BE4; case 0x08871BFCu: goto L_08871BFC; case 0x08871C0Cu: goto L_08871C0C; case 0x08871C58u: goto L_08871C58; case 0x08871C70u: goto L_08871C70; default: rs_break(0, 0x08871b4c); }
L_08871B54:;
    v0 = LD32(a2+28);
    ST32(a2+40, 0);
    a0 = a2 + 0;
    v0 = v0 | 0x1;
    ST32(a2+28, v0);
    a1 = 0 + 0;
    goto L_08871B6C;
L_08871B6C:;
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871B74;
L_08871B74:;
    v0 = 1;
    goto L_08871B78;
L_08871B78:;
    goto L_08871B7C;
L_08871B7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08871B84:;
    t0 = LD32(a2+32);
    a1 = LD32(a1+24);
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08871B74; }
    goto L_08871B94;
L_08871B94:;
    v0 = LD32(a2+36);
    a1 = LD32(a1);
    a0 = v0 + 0;
    a2 = v0 + 0;
    goto L_08871BA4;
L_08871BA4:;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    v1 = v1 + 1;
    if (cnd_) { goto L_08871BC8; }
    goto L_08871BB0;
L_08871BB0:;
    v0 = v1 < t0;
    a2 = a2 + 12;
    cnd_ = v0 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_08871BA4; }
    goto L_08871BC0;
L_08871BC0:;
    v0 = 1;
    goto L_08871B78;
L_08871BC8:;
    v1 = a3 & 0xffff;
    v1 = v1 ^ 0x18;
    v1 = v1 < 0x1u;
    v0 = LD32(a2+8);
    v0 = (v0 & ~(0x1u << 16)) | ((v1 & 0x1) << 16);
    ST32(a2+8, v0);
    goto L_08871B74;
L_08871BE4:;
    v0 = LD32(a1+24);
    a0 = a2 + 0;
    f12 = BITSF(LD32(v0));
    { rv_t r_ = func_088717F8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871BF4;
L_08871BF4:;
    v0 = 1;
    goto L_08871B78;
L_08871BFC:;
    a0 = a2 + 0;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871C04;
L_08871C04:;
    goto L_08871B7C;
L_08871C0C:;
    a3 = LD32(a2+32);
    t0 = LD32(a1+24);
    cnd_ = a3 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08871B74; }
    goto L_08871C1C;
L_08871C1C:;
    a0 = LD32(t0);
    v1 = LD32(a2+36);
    goto L_08871C24;
L_08871C24:;
    v0 = LD32(v1);
    cnd_ = v0 == a0;
    if (cnd_) { f12 = BITSF(LD32(t0+4)); goto L_08871C48; }
    goto L_08871C30;
L_08871C30:;
    a1 = a1 + 1;
    v0 = a1 < a3;
    cnd_ = v0 != 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_08871C24; }
    goto L_08871C40;
L_08871C40:;
    v0 = 1;
    goto L_08871B78;
L_08871C48:;
    a0 = a2 + 0;
    { rv_t r_ = func_08871A68(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871C50;
L_08871C50:;
    v0 = 1;
    goto L_08871B78;
L_08871C58:;
    v0 = LD32(a2+28);
    a0 = a2 + 0;
    a1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_08871C68;
L_08871C68:;
    ST32(a2+28, v0);
    goto L_08871B6C;
L_08871C70:;
    v0 = LD32(a2+28);
    a0 = a2 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x1;
    goto L_08871C68;
}

/* 08871C84 */
void func_08871C84(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08871C84:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08872328(a0, a1, a2);
    goto L_08871CA0;
L_08871CA0:;
    v0 = D_08AF66A8 - (26280);
    v0 = v0 + 26280;
    ST32(s1, v0);
    v0 = 1;
    a2 = sp + 4;
    ST16(s1+8, v0);
    a1 = 0 + 0;
    goto L_08871CBC;
L_08871CBC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08871CBC; }
    goto L_08871CE0;
L_08871CE0:;
    a1 = s1 + 40;
    a2 = 0 + 0;
    goto L_08871CE8;
L_08871CE8:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871CE8; }
    goto L_08871D10;
L_08871D10:;
    a3 = LD32(sp+4);
    cnd_ = (s32)a3 <= 0;
    if (cnd_) { f0 = BITSF(LD32(s1+40)); goto L_08871DC8; }
    goto L_08871D1C;
L_08871D1C:;
    a1 = s1 + 44;
    a2 = 0 + 0;
    goto L_08871D24;
L_08871D24:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871D24; }
    goto L_08871D4C;
L_08871D4C:;
    v0 = (s32)a3 < 4;
    cnd_ = v0 != 0;
    v0 = 3;
    if (cnd_) { goto L_08871D9C; }
    goto L_08871D58;
L_08871D58:;
    a1 = s1 + 48;
    a2 = 0 + 0;
    goto L_08871D60;
L_08871D60:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871D60; }
    goto L_08871D88;
L_08871D88:;
    sp = sp + 32;
    return;
L_08871D9C:;
    cnd_ = a3 == v0;
    if (cnd_) { v0 = LD32(s0); goto L_08871DAC; }
    goto L_08871DA4;
L_08871DA4:;
    ST32(s1+48, 0);
    goto L_08871D88;
L_08871DAC:;
    a0 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    v1 = 0 < a0;
    ST32(s1+48, v1);
    ST8(sp, a0);
    goto L_08871D88;
L_08871DC8:;
    ST32(s1+44, FBITS(f0));
    goto L_08871D4C;
}

/* 08871DD0 */
void func_08871DD0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08871DD0:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08872328(a0, a1, a2);
    goto L_08871DEC;
L_08871DEC:;
    v0 = D_08AF66A8 - (26280);
    v0 = v0 + 26280;
    ST32(s1, v0);
    v0 = 1;
    a2 = sp + 4;
    ST16(s1+8, v0);
    a1 = 0 + 0;
    goto L_08871E08;
L_08871E08:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08871E08; }
    goto L_08871E2C;
L_08871E2C:;
    a1 = s1 + 40;
    a2 = 0 + 0;
    goto L_08871E34;
L_08871E34:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871E34; }
    goto L_08871E5C;
L_08871E5C:;
    a3 = LD32(sp+4);
    cnd_ = (s32)a3 <= 0;
    if (cnd_) { f0 = BITSF(LD32(s1+40)); goto L_08871F14; }
    goto L_08871E68;
L_08871E68:;
    a1 = s1 + 44;
    a2 = 0 + 0;
    goto L_08871E70;
L_08871E70:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871E70; }
    goto L_08871E98;
L_08871E98:;
    v0 = (s32)a3 < 4;
    cnd_ = v0 != 0;
    v0 = 3;
    if (cnd_) { goto L_08871EE8; }
    goto L_08871EA4;
L_08871EA4:;
    a1 = s1 + 48;
    a2 = 0 + 0;
    goto L_08871EAC;
L_08871EAC:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08871EAC; }
    goto L_08871ED4;
L_08871ED4:;
    sp = sp + 32;
    return;
L_08871EE8:;
    cnd_ = a3 == v0;
    if (cnd_) { v0 = LD32(s0); goto L_08871EF8; }
    goto L_08871EF0;
L_08871EF0:;
    ST32(s1+48, 0);
    goto L_08871ED4;
L_08871EF8:;
    a0 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    v1 = 0 < a0;
    ST32(s1+48, v1);
    ST8(sp, a0);
    goto L_08871ED4;
L_08871F14:;
    ST32(s1+44, FBITS(f0));
    goto L_08871E98;
}

/* 08871F1C */
u64 func_08871F1C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08871F1C:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08871F38;
L_08871F38:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08871F44 */
rv_t func_08871F44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08871F44:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08871F60;
L_08871F60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08871F6C */
rv_t func_08871F6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08871F6C:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08871F8C;
L_08871F8C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08871F94;
L_08871F94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08871FA4 */
rv_t func_08871FA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08871FA4:;
    sp = sp - 16;
    a1 = a0 + 0;
    v0 = LD32(a0+28);
    v1 = LD32(a0+48);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v1 = (v1 >> 1) & 0x1;
    if (cnd_) { goto L_08871FEC; }
    goto L_08871FC4;
L_08871FC4:;
    cnd_ = v1 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08871FDC; }
    goto L_08871FCC;
L_08871FCC:;
    v0 = D_08B2C1BC - (-15940);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08871FEC; }
    goto L_08871FDC;
L_08871FDC:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a1+44));
    f0 = f0 - f1;
    ST32(a1+44, FBITS(f0));
    goto L_08871FEC;
L_08871FEC:;
    { rv_t r_ = func_088724BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08871FF4;
L_08871FF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08872000 */
rv_t func_08872000(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872000:;
    sp = sp - 16;
    f1 = BITSF(0);
    s0 = a0 + 0;
    f12 = BITSF(LD32(a0+44));
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08872054; }
    goto L_08872028;
L_08872028:;
    v0 = LD32(a0+48);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08872078; }
    goto L_08872038;
L_08872038:;
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f13 = f0;
    if (cnd_) { goto L_08872064; }
    goto L_0887204C;
L_0887204C:;
    ST32(s0+44, FBITS(f1));
    goto L_08872050;
L_08872050:;
    v0 = 1;
    goto L_08872054;
L_08872054:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08872064:;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887206C;
L_0887206C:;
    f1 = BITSF(LD32(s0+40));
    f1 = f1 + f0;
    goto L_0887204C;
L_08872078:;
    v0 = LD32(a0+28);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872088;
L_08872088:;
    f0 = BITSF(LD32(s0+40));
    ST32(s0+44, FBITS(f0));
    goto L_08872050;
}

/* 08872094 */
rv_t func_08872094(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08872094:;
    f0 = BITSF(LD32(a0+40));
    ST32(a0+44, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 088720A0 */
rv_t func_088720A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088720A0:;
    sp = sp - 16;
    { rv_t r_ = func_08872664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088720B0;
L_088720B0:;
    v0 = v0 + 16;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088720C0 */
rv_t func_088720C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088720C0:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08872684(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088720DC;
L_088720DC:;
    v0 = 4;
    ST32(sp, v0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_088720EC;
L_088720EC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088720EC; }
    goto L_08872114;
L_08872114:;
    f0 = BITSF(LD32(s1+40));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_08872124;
L_08872124:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08872124; }
    goto L_0887214C;
L_0887214C:;
    f0 = BITSF(LD32(s1+44));
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, FBITS(f0));
    goto L_0887215C;
L_0887215C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0887215C; }
    goto L_08872184;
L_08872184:;
    v0 = LD32(s1+48);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_08872194;
L_08872194:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08872194; }
    goto L_088721BC;
L_088721BC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088721D0 */
rv_t func_088721D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088721D0:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08872770(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088721EC;
L_088721EC:;
    a1 = 4;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088721F8;
L_088721F8:;
    f12 = BITSF(LD32(s1+40));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872204;
L_08872204:;
    f12 = BITSF(LD32(s1+44));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872210;
L_08872210:;
    a1 = LD32(s1+48);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887221C;
L_0887221C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08872230 */
rv_t func_08872230(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872230:;
    sp = sp - 16;
    v1 = 1;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088722B0; }
    goto L_08872250;
L_08872250:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08872304; }
    goto L_08872258;
L_08872258:;
    v0 = LD_U16(a1+16);
    v0 = v0 - 14;
    v1 = v0 < 0x22u;
    cnd_ = v1 == 0;
    v0 = v0 << 2;
    if (cnd_) { goto L_08872304; }
    goto L_0887226C;
L_0887226C:;
    v1 = D_08AD4AE4 - (19172);
    v1 = v1 + 19172;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08872284u: goto L_08872284; case 0x08872294u: goto L_08872294; case 0x088722C4u: goto L_088722C4; case 0x088722E0u: goto L_088722E0; case 0x08872304u: goto L_08872304; case 0x08872314u: goto L_08872314; default: rs_break(0, 0x0887227c); }
L_08872284:;
    v0 = LD32(s0);
    v1 = LD32(v0+100);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872294;
L_08872294:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x1;
    goto L_088722A4;
L_088722A4:;
    ST32(s0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088722AC;
L_088722AC:;
    v1 = 1;
    goto L_088722B0;
L_088722B0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088722C4:;
    v0 = LD32(a1+24);
    f0 = BITSF(LD32(s0+40));
    v1 = 1;
    f1 = BITSF(LD32(v0));
    f0 = f0 - f1;
    goto L_088722D8;
L_088722D8:;
    ST32(s0+44, FBITS(f0));
    goto L_088722B0;
L_088722E0:;
    f0 = BITSF(LD32(s0+40));
    f2 = BITSF(LD32(s0+44));
    v0 = LD32(a1+24);
    v1 = 1;
    f0 = f0 - f2;
    f1 = BITSF(LD32(v0));
    f0 = f1 - f0;
    ST32(s0+40, FBITS(f1));
    goto L_088722D8;
L_08872304:;
    a0 = s0 + 0;
    { rv_t r_ = func_08869FCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887230C;
L_0887230C:;
    v1 = v0 + 0;
    goto L_088722B0;
L_08872314:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_088722A4;
}

/* 08872328 */
void func_08872328(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08872328:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08869BD4(a0, a1, a2);
    goto L_08872344;
L_08872344:;
    v0 = D_08AF6718 - (26392);
    v0 = v0 + 26392;
    ST32(s1, v0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08872358;
L_08872358:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08872358; }
    goto L_0887237C;
L_0887237C:;
    v0 = LD32(sp);
    t0 = 0 + 0;
    v0 = (s32)v0 < 3;
    cnd_ = v0 == 0;
    a3 = s1 + 0;
    if (cnd_) { goto L_08872464; }
    goto L_08872390;
L_08872390:;
    a1 = a3 + 30;
    a2 = 0 + 0;
    goto L_08872398;
L_08872398:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08872398; }
    goto L_088723C0;
L_088723C0:;
    t0 = t0 + 1;
    v0 = (s32)t0 < 4;
    cnd_ = v0 != 0;
    a3 = a3 + 2;
    if (cnd_) { goto L_08872390; }
    goto L_088723D0;
L_088723D0:;
    v1 = LD32(sp);
    v0 = (u32)-1;
    ST16(s1+38, v0);
    v0 = 1;
    cnd_ = v1 == v0;
    a2 = sp + 4;
    if (cnd_) { goto L_08872404; }
    goto L_088723E8;
L_088723E8:;
    a0 = s1 + 0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088723F0;
L_088723F0:;
    sp = sp + 32;
    return;
L_08872404:;
    a1 = 0 + 0;
    goto L_08872408;
L_08872408:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08872408; }
    goto L_0887242C;
L_0887242C:;
    v0 = LD32(sp+4);
    v1 = LD32(s1+28);
    a0 = s1 + 0;
    v0 = 0 < v0;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s1+28, v1);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08872454; }
    goto L_0887244C;
L_0887244C:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_08872454;
L_08872454:;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887245C;
L_0887245C:;
    goto L_088723E8;
L_08872464:;
    a1 = a3 + 30;
    a2 = 0 + 0;
    goto L_0887246C;
L_0887246C:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x2u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v1 = LD32(s0);
    v0 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0887246C; }
    goto L_08872494;
L_08872494:;
    t0 = t0 + 1;
    v0 = (s32)t0 < 5;
    cnd_ = v0 != 0;
    a3 = a3 + 2;
    if (cnd_) { goto L_08872464; }
    goto L_088724A4;
L_088724A4:;
    v0 = LD32(sp);
    v0 = (s32)v0 < 4;
    cnd_ = v0 != 0;
    v0 = v1 + 3;
    if (cnd_) { goto L_088723E8; }
    goto L_088724B4;
L_088724B4:;
    ST32(s0, v0);
    goto L_088723E8;
}

/* 088724BC */
rv_t func_088724BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088724BC:;
    sp = sp - 16;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088724E8; }
    goto L_088724D8;
L_088724D8:;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088724F8; }
    goto L_088724E8;
L_088724E8:;
    goto L_088724EC;
L_088724EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088724F8:;
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872504;
L_08872504:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08872524; }
    goto L_0887250C;
L_0887250C:;
    v0 = LD32(s0);
    v1 = LD32(v0+80);
    goto L_08872514;
L_08872514:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887251C;
L_0887251C:;
    goto L_088724EC;
L_08872524:;
    v1 = LD32(s0);
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872534;
L_08872534:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088724E8; }
    goto L_0887253C;
L_0887253C:;
    v0 = LD32(s0);
    v1 = LD32(v0+84);
    goto L_08872514;
}

/* 08872548 */
rv_t func_08872548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872548:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0886A108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887255C;
L_0887255C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08872620(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872568;
L_08872568:;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872578;
L_08872578:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08872588 */
rv_t func_08872588(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872588:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0886A130(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887259C;
L_0887259C:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_08872620(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088725A8;
L_088725A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088725B8 */
rv_t func_088725B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088725B8:;
    sp = sp - 16;
    a1 = 2;
    { rv_t r_ = func_08872620(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088725C8;
L_088725C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088725D4 */
rv_t func_088725D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088725D4:;
    sp = sp - 16;
    a1 = 3;
    s0 = a0 + 0;
    { rv_t r_ = func_08872620(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088725EC;
L_088725EC:;
    a0 = s0 + 0;
    { rv_t r_ = func_0886A158(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088725F4;
L_088725F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08872604 */
rv_t func_08872604(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872604:;
    sp = sp - 16;
    a1 = 4;
    { rv_t r_ = func_08872620(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872614;
L_08872614:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08872620 */
rv_t func_08872620(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872620:;
    sp = sp - 16;
    a1 = a1 << 1;
    a1 = a1 + a0;
    v1 = LD_U16(a1+30);
    a2 = a0 + 0;
    v0 = 0xffff;
    a0 = D_08B29170 - (-28304);
    f12 = BITSF(0);
    a0 = a0 - 28304;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08872658; }
    goto L_08872650;
L_08872650:;
    a2 = LD32(a2+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872658;
L_08872658:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08872664 */
rv_t func_08872664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872664:;
    sp = sp - 16;
    { rv_t r_ = func_08869CA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872674;
L_08872674:;
    v0 = v0 + 16;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08872684 */
rv_t func_08872684(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08872684:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08869CC4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088726A0;
L_088726A0:;
    v0 = 4;
    ST32(sp+4, v0);
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_088726B0;
L_088726B0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088726B0; }
    goto L_088726D8;
L_088726D8:;
    a3 = s1 + 30;
    t0 = 0 + 0;
    goto L_088726E0;
L_088726E0:;
    v0 = LD_U16(a3);
    a2 = sp + 0;
    a1 = 0 + 0;
    ST16(sp, v0);
    goto L_088726F0;
L_088726F0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088726F0; }
    goto L_08872718;
L_08872718:;
    t0 = t0 + 1;
    v0 = (s32)t0 < 5;
    cnd_ = v0 != 0;
    a3 = a3 + 2;
    if (cnd_) { goto L_088726E0; }
    goto L_08872728;
L_08872728:;
    ST16(sp+2, 0);
    a2 = sp + 2;
    a1 = 0 + 0;
    goto L_08872734;
L_08872734:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08872734; }
    goto L_0887275C;
L_0887275C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08872770 */
rv_t func_08872770(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872770:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = 4;
    s0 = a0 + 0;
    { rv_t r_ = func_08869D70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872794;
L_08872794:;
    a0 = s2 + 0;
    a1 = 4;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088727A0;
L_088727A0:;
    s0 = s0 + 30;
    goto L_088727A4;
L_088727A4:;
    a1 = LD_U16(s0);
    a0 = s2 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088727B4;
L_088727B4:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 2;
    if (cnd_) { goto L_088727A4; }
    goto L_088727BC;
L_088727BC:;
    a1 = LD32(s2+20);
    v0 = D_08B23100 - (12544);
    a2 = LD_U8(v0+12544);
    a1 = 0 - a1;
    a0 = s2 + 0;
    a1 = a1 & 0x3;
    { rv_t r_ = func_0882D7B8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088727D8;
L_088727D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088727F0 */
rv_t func_088727F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088727F0:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = 4;
    s0 = a0 + 0;
    { rv_t r_ = func_08869DD0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872814;
L_08872814:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872820;
L_08872820:;
    s0 = s0 + 30;
    goto L_08872824;
L_08872824:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872834;
L_08872834:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 2;
    if (cnd_) { goto L_08872824; }
    goto L_0887283C;
L_0887283C:;
    a1 = LD32(s2+20);
    a0 = s2 + 0;
    a1 = 0 - a1;
    a1 = a1 & 0x3;
    { rv_t r_ = func_0882D824(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872850;
L_08872850:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08872868 */
void func_08872868(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08872868:;
    sp = sp - 32;
    s3 = D_08B28FB4 - (-28748);
    s2 = s3 - 28748;
    s1 = a0 + 0;
    func_0886A19C(a0, a1);
    goto L_08872890;
L_08872890:;
    f0 = BITSF(0);
    v0 = D_08AF6788 - (26504);
    a1 = s1 + 92;
    v1 = s1 + 80;
    v0 = v0 + 26504;
    ST32(v1+4, FBITS(f0));
    a0 = 12;
    ST32(v1+8, FBITS(f0));
    ST32(s1, v0);
    v0 = 72;
    ST32(s1+80, FBITS(f0));
    ST32(s1+92, FBITS(f0));
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, FBITS(f0));
    v1 = LD32(s2+4);
    s0 = LD32(s1+4);
    ST16(s1+8, v0);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088728E0;
L_088728E0:;
    a0 = LD32(s3-28748);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(s1+112, 0);
    ST32(s0, v0);
    ST32(v0, s1);
    ST32(s1+104, 0);
    ST32(s1+108, 0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 08872934 */
void func_08872934(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08872934:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 116;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872958;
L_08872958:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08872868(a0, a1);
    goto L_08872968;
L_08872968:;
    v1 = LD32(s0);
    a1 = s2 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887297C;
L_0887297C:;
    v1 = LD32(s0);
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887298C;
L_0887298C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return;
}

/* 088729A8 */
rv_t func_088729A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr76 = v[76], vr77 = v[77], vr78 = v[78];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088729A8:;
    sp = sp - 96;
    s3 = a1 + 0;
    a1 = sp + 48;
    s1 = a0 + 0;
    a0 = s3 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088729D8;
L_088729D8:;
    v1 = LD32(sp+48);
    v1 = v1 < 0x2u;
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08872A08; }
    goto L_088729E8;
L_088729E8:;
    goto L_088729EC;
L_088729EC:;
    sp = sp + 96;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
L_08872A08:;
    a1 = s3 + 0;
    s0 = s1 + 80;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0886A6D4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872A14;
L_08872A14:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872A20;
L_08872A20:;
    a1 = s1 + 92;
    a0 = s3 + 0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0882DD08(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872A2C;
L_08872A2C:;
    v1 = LD32(sp+48);
    cnd_ = v1 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08872AEC; }
    goto L_08872A38;
L_08872A38:;
    a1 = s1 + 104;
    goto L_08872A3C;
L_08872A3C:;
    a0 = s3 + 0;
    s0 = LD32(s1+104);
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872A48;
L_08872A48:;
    s2 = LD32(s1+104);
    cnd_ = s2 == s0;
    if (cnd_) { goto L_08872A90; }
    goto L_08872A54;
L_08872A54:;
    a0 = LD32(s1+108);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08872ADC; }
    goto L_08872A60;
L_08872A60:;
    a0 = s2 << 2;
    a0 = a0 + s2;
    a0 = a0 << 3;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_08A94838(a0, 0, 0, 0); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872A70;
L_08872A70:;
    cnd_ = s2 == 0;
    v1 = s2 - 1;
    if (cnd_) { goto L_08872A88; }
    goto L_08872A78;
L_08872A78:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08872A80;
L_08872A80:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08872A80; }
    goto L_08872A88;
L_08872A88:;
    ST32(s1+108, v0);
    s2 = LD32(s1+104);
    goto L_08872A90;
L_08872A90:;
    cnd_ = s2 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088729E8; }
    goto L_08872A98;
L_08872A98:;
    s0 = 0 + 0;
    goto L_08872A9C;
L_08872A9C:;
    a1 = LD32(s1+108);
    a0 = s3 + 0;
    s4 = s4 + 1;
    a1 = a1 + s0;
    ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];});
    goto L_08872AB0;
L_08872AB0:;
    a1 = LD32(s1+108);
    a0 = s3 + 0;
    a1 = a1 + s0;
    a1 = a1 + 24;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872AC4;
L_08872AC4:;
    v1 = LD32(s1+104);
    v1 = s4 < v1;
    cnd_ = v1 != 0;
    s0 = s0 + 40;
    if (cnd_) { goto L_08872A9C; }
    goto L_08872AD4;
L_08872AD4:;
    goto L_088729EC;
L_08872ADC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08872AE4;
L_08872AE4:;
    s2 = LD32(s1+104);
    goto L_08872A60;
L_08872AEC:;
    a0 = sp + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872AF4;
L_08872AF4:;
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[116]=BITSF(LD32(sp+(12)));}
    {v[117]=BITSF(LD32(sp+(16)));}
    {v[118]=BITSF(LD32(sp+(20)));}
    {v[120]=BITSF(LD32(sp+(24)));}
    {v[121]=BITSF(LD32(sp+(28)));}
    {v[122]=BITSF(LD32(sp+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872D74; }
    goto L_08872B30;
L_08872B30:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872CB4; }
    goto L_08872B40;
L_08872B40:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08872BD8; }
    goto L_08872B68;
L_08872B68:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872BB4; }
    goto L_08872BA4;
L_08872BA4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08872BB4;
L_08872BB4:;
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872BF8; }
    goto L_08872BC4;
L_08872BC4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08872BF8; }
    goto L_08872BD4;
L_08872BD4:;
    goto L_08872BD8;
L_08872BD8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872BF8; }
    goto L_08872BEC;
L_08872BEC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08872BF8;
L_08872BF8:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08872C88; }
    goto L_08872C18;
L_08872C18:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872C64; }
    goto L_08872C54;
L_08872C54:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08872C64;
L_08872C64:;
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872CA8; }
    goto L_08872C74;
L_08872C74:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08872CA8; }
    goto L_08872C84;
L_08872C84:;
    goto L_08872C88;
L_08872C88:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872CA8; }
    goto L_08872C9C;
L_08872C9C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08872CA8;
L_08872CA8:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08872E2C; }
    goto L_08872CB0;
L_08872CB0:;
    goto L_08872CB4;
L_08872CB4:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08872D48; }
    goto L_08872CD8;
L_08872CD8:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872D24; }
    goto L_08872D14;
L_08872D14:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08872D24;
L_08872D24:;
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872D68; }
    goto L_08872D34;
L_08872D34:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08872D68; }
    goto L_08872D44;
L_08872D44:;
    goto L_08872D48;
L_08872D48:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872D68; }
    goto L_08872D5C;
L_08872D5C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08872D68;
L_08872D68:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08872E2C; }
    goto L_08872D70;
L_08872D70:;
    goto L_08872D74;
L_08872D74:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08872E08; }
    goto L_08872D98;
L_08872D98:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872DE4; }
    goto L_08872DD4;
L_08872DD4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08872DE4;
L_08872DE4:;
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872E28; }
    goto L_08872DF4;
L_08872DF4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08872E28; }
    goto L_08872E04;
L_08872E04:;
    goto L_08872E08;
L_08872E08:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08872E28; }
    goto L_08872E1C;
L_08872E1C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08872E28;
L_08872E28:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08872E2C;
L_08872E2C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s1+(92),FBITS(v[96]));}
    {ST32(s1+(96),FBITS(v[97]));}
    {ST32(s1+(100),FBITS(v[98]));}
    a1 = s1 + 104;
    goto L_08872A3C;
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[76]=vr76;v[77]=vr77;v[78]=vr78;
}

/* 08872E44 */
rv_t func_08872E44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08872E44:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    a0 = s1 + 0;
    s3 = 0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872E74;
L_08872E74:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0886A67C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872E80;
L_08872E80:;
    a1 = s0 + 80;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872E8C;
L_08872E8C:;
    a1 = s0 + 92;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DD48(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872E98;
L_08872E98:;
    a1 = LD32(s0+104);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872EA4;
L_08872EA4:;
    v1 = LD32(s0+104);
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08872EE8; }
    goto L_08872EB0;
L_08872EB0:;
    a1 = LD32(s0+108);
    a0 = s1 + 0;
    s3 = s3 + 1;
    a1 = a1 + s2;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872EC4;
L_08872EC4:;
    a1 = LD32(s0+108);
    a0 = s1 + 0;
    a1 = a1 + s2;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DCBC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872ED8;
L_08872ED8:;
    v1 = LD32(s0+104);
    v1 = s3 < v1;
    cnd_ = v1 != 0;
    s2 = s2 + 40;
    if (cnd_) { goto L_08872EB0; }
    goto L_08872EE8;
L_08872EE8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08872F04 */
rv_t func_08872F04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr96 = v[96];
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 272);
L_08872F04:;
    sp = sp - 272;
    s5 = 0 + 0;
    s3 = a0 + 0;
    v1 = s3 + 32;
    v0 = s3 + 80;
    a0 = LD32(a0+104);
    f4 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s3+80));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s3+32));
    a0 = a0 << 2;
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f4));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f5));
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;__auto_type vr_t_ = func_08A94838(a0, t1, t2, t3); vr0=v[0];vr1=v[1];vr2=v[2];vr96=v[96];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08872F90;
L_08872F90:;
    v1 = LD32(s3+104);
    cnd_ = v1 == 0;
    ST32(s3+112, v0);
    if (cnd_) { goto L_08873210; }
    goto L_08872F9C;
L_08872F9C:;
    v0 = D_08AEBFE4 - (-16412);
    v1 = D_08AEBFE8 - (-16408);
    f20 = BITSF(LD32(v0-16412));
    f21 = BITSF(LD32(v1-16408));
    s4 = sp + 96;
    fp = sp + 16;
    s7 = 0 + 0;
    goto L_08872FB8;
L_08872FB8:;
    a0 = LD32(s3+108);
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f20);
    a0 = a0 + s7;
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    {v[112]=BITSF(LD32(a0+(24)));}
    {v[113]=BITSF(LD32(a0+(28)));}
    {v[114]=BITSF(LD32(a0+(32)));}
    {v[115]=BITSF(LD32(a0+(36)));}
    {float s0=vr0;v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=vr96;float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=vr96;float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=vr96;float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;vr96=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=vr96;float t0=v[90];float d0=s0-t0;vr96=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(v[100]));ST32(a_+8,FBITS(v[104]));ST32(a_+12,FBITS(v[108]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[97]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[105]));ST32(a_+12,FBITS(v[109]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[98]));ST32(a_+4,FBITS(v[102]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[110]));}
    f5 = BITSF(LD32(a0));
    f0 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a0+16));
    f2 = BITSF(LD32(a0+12));
    f1 = BITSF(LD32(a0+20));
    f0 = f0 - f5;
    f2 = f2 - f4;
    f1 = f1 - f3;
    a1 = LD32(sp+188);
    ST32(sp+176, FBITS(f0));
    {u32 a_=sp+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    s6 = s5 << 2;
    ST32(sp+180, FBITS(f2));
    a3 = sp + 128;
    s2 = sp + 48;
    ST32(sp+184, FBITS(f1));
    v0 = LD32(sp+176);
    v1 = LD32(sp+180);
    ST32(sp+108, a1);
    ST32(sp+96, v0);
    v0 = LD32(sp+184);
    ST32(sp+100, v1);
    ST32(sp+104, v0);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    f5 = BITSF(LD32(a0+20));
    f2 = BITSF(LD32(a0));
    f4 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a0+12));
    f1 = BITSF(LD32(a0+16));
    f2 = f2 + f4;
    f0 = f0 + f3;
    f1 = f1 + f5;
    f2 = f2 * f20;
    f0 = f0 * f20;
    f1 = f1 * f20;
    ST32(sp+176, FBITS(f2));
    ST32(sp+180, FBITS(f0));
    ST32(sp+32, FBITS(f2));
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+184, FBITS(f1));
    v1 = LD32(sp+176);
    v0 = LD32(sp+180);
    ST32(sp+176, FBITS(f21));
    ST32(sp+112, v1);
    v1 = LD32(sp+184);
    ST32(sp+180, 0);
    ST32(sp+116, v0);
    ST32(sp+120, v1);
    ST32(sp+184, 0);
    ST32(sp+124, a1);
    a2 = LD32(sp+176);
    ST32(sp+176, 0);
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    a0 = LD32(sp+180);
    v0 = LD32(sp+184);
    ST32(sp+180, FBITS(f21));
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    v1 = LD32(sp+176);
    ST32(sp+136, v0);
    ST32(sp+144, v1);
    v0 = LD32(sp+180);
    v1 = LD32(sp+184);
    ST32(sp+36, FBITS(f0));
    ST32(sp+148, v0);
    ST32(sp+152, v1);
    ST32(sp+40, FBITS(f1));
    ST32(sp+128, a2);
    ST32(sp+132, a0);
    ST32(sp+140, a1);
    ST32(sp+156, a1);
    ST32(sp+180, 0);
    ST32(sp+184, FBITS(f21));
    v0 = LD32(sp+176);
    v1 = LD32(sp+184);
    ST32(sp+172, a1);
    ST32(sp+160, v0);
    v0 = LD32(sp+180);
    ST32(sp+168, v1);
    ST32(sp+164, v0);
    goto L_08873188;
L_08873188:;
    v0 = LD32(s2);
    v1 = LD32(s2+4);
    a0 = LD32(s2+8);
    a1 = LD32(s2+12);
    ST32(a3, v0);
    s2 = s2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, v1);
    ST32(a3-8, a0);
    cnd_ = s2 != s4;
    ST32(a3-4, a1);
    if (cnd_) { goto L_08873188; }
    goto L_088731B4;
L_088731B4:;
    s0 = LD32(s3+112);
    a0 = 112;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;__auto_type vr_t_ = func_08A94784(a0, 0, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr96=v[96];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088731C0;
L_088731C0:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    s0 = s6 + s0;
    a1 = fp + 0;
    a2 = s2 + 0;
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;__auto_type vr_t_ = func_088AEC54(a0, a1, a2, 0, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr96=v[96];vr_t_; });
    goto L_088731D8;
L_088731D8:;
    ST32(s0, s1);
    s5 = s5 + 1;
    v0 = LD32(s3+112);
    v1 = LD32(s3+28);
    v0 = s6 + v0;
    a0 = LD32(v0);
    v1 = v1 & 0x1;
    v0 = LD32(a0+8);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(a0+8, v0);
    v1 = LD32(s3+104);
    v1 = s5 < v1;
    cnd_ = v1 != 0;
    s7 = s7 + 40;
    if (cnd_) { goto L_08872FB8; }
    goto L_08873210;
L_08873210:;
    sp = sp + 272;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[96]=vr96;
}

/* 08873248 */
rv_t func_08873248(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873248:;
    sp = sp - 16;
    a1 = LD32(a0+112);
    cnd_ = a1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088732A0; }
    goto L_08873264;
L_08873264:;
    v1 = LD32(a0+104);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08873294; }
    goto L_08873270;
L_08873270:;
    v0 = s0 << 2;
    goto L_08873274;
L_08873274:;
    v0 = v0 + a1;
    v0 = LD32(v0);
    s0 = s0 + 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088732C4; }
    goto L_08873288;
L_08873288:;
    v0 = s0 < v1;
    cnd_ = v0 != 0;
    v0 = s0 << 2;
    if (cnd_) { goto L_08873274; }
    goto L_08873294;
L_08873294:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088732B4; }
    goto L_0887329C;
L_0887329C:;
    ST32(s1+112, 0);
    goto L_088732A0;
L_088732A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088732B4:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088732BC;
L_088732BC:;
    ST32(s1+112, 0);
    goto L_088732A0;
L_088732C4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088732D4;
L_088732D4:;
    a1 = LD32(s1+112);
    v1 = LD32(s1+104);
    goto L_08873288;
}

/* 088732E0 */
rv_t func_088732E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088732E0:;
    v0 = D_08AF6788 - (26504);
    v0 = v0 + 26504;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28FB4 - (-28748);
    a0 = a0 - 28748;
    a1 = s0 + 0;
    func_08AAFB74(a0, a1, t1, t2, t3);
    goto L_0887330C;
L_0887330C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08873248(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873314;
L_08873314:;
    v0 = LD32(s0+108);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08873338; }
    goto L_08873320;
L_08873320:;
    a0 = s0 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873328;
L_08873328:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08873338:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873340;
L_08873340:;
    goto L_08873320;
}

/* 08873348 */
rv_t func_08873348(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873348:;
    v0 = D_08AF6788 - (26504);
    v0 = v0 + 26504;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28FB4 - (-28748);
    a0 = a0 - 28748;
    a1 = s0 + 0;
    func_08AAFB74(a0, a1, t1, t2, t3);
    goto L_08873374;
L_08873374:;
    a0 = s0 + 0;
    { rv_t r_ = func_08873248(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887337C;
L_0887337C:;
    v0 = LD32(s0+108);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088733A8; }
    goto L_08873388;
L_08873388:;
    a0 = s0 + 0;
    { u64 r_ = func_0886A2F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873390;
L_08873390:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873398;
L_08873398:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088733A8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088733B0;
L_088733B0:;
    goto L_08873388;
}

/* 088733B8 */
rv_t func_088733B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088733B8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0886A108(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088733CC;
L_088733CC:;
    a0 = s0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088733E0;
L_088733E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088733F0 */
rv_t func_088733F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088733F0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0886A130(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873404;
L_08873404:;
    a0 = s0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873418;
L_08873418:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08873428 */
rv_t func_08873428(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08873428:;
    v0 = LD32(a0+104);
    a3 = a0 + 0;
    a1 = a1 & 0xff;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0887346C; }
    goto L_0887343C;
L_0887343C:;
    v0 = LD32(a3+112);
    goto L_08873440;
L_08873440:;
    v1 = a2 << 2;
    a2 = a2 + 1;
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = LD32(a0+8);
    v0 = (v0 & ~(0x1u << 1)) | ((a1 & 0x1) << 1);
    ST32(a0+8, v0);
    v1 = LD32(a3+104);
    v1 = a2 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a3+112); goto L_08873440; }
    goto L_0887346C;
L_0887346C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08873474 */
rv_t func_08873474(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08873474:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088734F4; }
    goto L_088734A8;
L_088734A8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088734CC; }
    goto L_088734BC;
L_088734BC:;
    v0 = D_08B28FB4 - (-28748);
    a0 = LD32(v0-28748);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088734E4; }
    goto L_088734CC;
L_088734CC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088734E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088734EC;
L_088734EC:;
    goto L_088734CC;
L_088734F4:;
    s3 = D_08B28FB4 - (-28748);
    s0 = s3 - 28748;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887350C;
L_0887350C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28748, v0);
    if (cnd_) { goto L_08873538; }
    goto L_0887351C;
L_0887351C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08873524;
L_08873524:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08873524; }
    goto L_08873538;
L_08873538:;
    v0 = s3 - 28748;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088734A8;
}

/* 08873548 */
rv_t func_08873548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873548:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08873474(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887355C;
L_0887355C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08873568 */
rv_t func_08873568(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873568:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08873474(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887357C;
L_0887357C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08873588 */
void func_08873588(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08873588:;
    sp = sp - 32;
    s3 = D_08B28FC4 - (-28732);
    s2 = s3 - 28732;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_088735B0;
L_088735B0:;
    v1 = D_08AEBFF0 - (-16400);
    v0 = D_08AF67F8 - (26616);
    f0 = BITSF(LD32(v1-16400));
    v0 = v0 + 26616;
    ST32(s1, v0);
    v1 = 68;
    v0 = 0xff000000u;
    ST32(s1+40, v0);
    v0 = 2;
    a0 = s1 + 0;
    ST16(s1+8, v1);
    v1 = 999;
    ST32(s1+36, FBITS(f0));
    ST32(s1+44, v1);
    ST32(s1+32, FBITS(f0));
    ST32(s1+28, v0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088735F4;
L_088735F4:;
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887360C;
L_0887360C:;
    a0 = LD32(s3-28732);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 08873654 */
rv_t func_08873654(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873654:;
    v0 = D_08AF67F8 - (26616);
    v0 = v0 + 26616;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28FC4 - (-28732);
    a1 = s0 + 0;
    a0 = a0 - 28732;
    func_08AAFC34(a0, a1, t1, t2, t3);
    goto L_08873680;
L_08873680:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873688;
L_08873688:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08873698 */
rv_t func_08873698(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873698:;
    v0 = D_08AF67F8 - (26616);
    v0 = v0 + 26616;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28FC4 - (-28732);
    a1 = s0 + 0;
    a0 = a0 - 28732;
    func_08AAFC34(a0, a1, t1, t2, t3);
    goto L_088736C4;
L_088736C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088736CC;
L_088736CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088736D4;
L_088736D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088736E4 */
u32 func_088736E4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088736E4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873700;
L_08873700:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08873588(a0, a1);
    goto L_08873710;
L_08873710:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08873728 */
rv_t func_08873728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08873728:;
    sp = sp - 48;
    s2 = a1 + 0;
    a1 = sp + 0;
    s3 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873754;
L_08873754:;
    v1 = LD32(sp);
    cnd_ = v1 == 0;
    a1 = s3 + 28;
    if (cnd_) { goto L_0887377C; }
    goto L_08873760;
L_08873760:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0887377C:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873784;
L_08873784:;
    a1 = s3 + 32;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873790;
L_08873790:;
    a1 = s3 + 36;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887379C;
L_0887379C:;
    a1 = s3 + 40;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088737A8;
L_088737A8:;
    a0 = s2 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088737B4;
L_088737B4:;
    v1 = LD32(sp+4);
    v0 = v1 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088737CC; }
    goto L_088737C4;
L_088737C4:;
    v1 = 1;
    ST32(sp+4, v1);
    goto L_088737CC;
L_088737CC:;
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088737F8; }
    goto L_088737D4;
L_088737D4:;
    s0 = s3 + 44;
    goto L_088737D8;
L_088737D8:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088737E4;
L_088737E4:;
    v1 = LD32(sp+4);
    s1 = s1 + 1;
    v0 = s1 < v1;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088737D8; }
    goto L_088737F8;
L_088737F8:;
    cnd_ = v1 != 0;
    v0 = 999;
    if (cnd_) { goto L_08873760; }
    goto L_08873800;
L_08873800:;
    ST32(s3+44, v0);
    goto L_08873760;
}

/* 08873808 */
rv_t func_08873808(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873808:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887382C;
L_0887382C:;
    a0 = s0 + 0;
    a1 = LD32(s1+28);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873838;
L_08873838:;
    f12 = BITSF(LD32(s1+32));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873844;
L_08873844:;
    f12 = BITSF(LD32(s1+36));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873850;
L_08873850:;
    a1 = LD32(s1+40);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887385C;
L_0887385C:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873868;
L_08873868:;
    a1 = LD32(s1+44);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873874;
L_08873874:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08873888 */
rv_t func_08873888(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08873888:;
    v0 = LD32(a0+28);
    a1 = a1 & 0xff;
    a2 = 0 + 0;
    v1 = v0 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 == a1;
    v1 = (v1 & ~(0x1u << 0)) | ((a1 & 0x1) << 0);
    if (cnd_) { goto L_088738AC; }
    goto L_088738A4;
L_088738A4:;
    ST32(a0+28, v1);
    a2 = 1;
    goto L_088738AC;
L_088738AC:;
    v0 = a2 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 088738B4 */
rv_t func_088738B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088738B4:;
    sp = sp - 16;
    v0 = 4;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08873AD8; }
    goto L_088738D0;
L_088738D0:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_08873918; }
    goto L_088738DC;
L_088738DC:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a0); goto L_08873900; }
    goto L_088738E8;
L_088738E8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088738F0;
L_088738F0:;
    goto L_088738F4;
L_088738F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08873900:;
    a1 = 1;
    goto L_08873904;
L_08873904:;
    v0 = LD32(v1+72);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873910;
L_08873910:;
    v0 = 1;
    goto L_088738F0;
L_08873918:;
    cnd_ = v1 == v0;
    v0 = 83;
    if (cnd_) { goto L_08873958; }
    goto L_08873920;
L_08873920:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_088738E8; }
    goto L_08873928;
L_08873928:;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088738F0; }
    goto L_08873938;
L_08873938:;
    a0 = LD32(a1+24);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088738F4; }
    goto L_08873944;
L_08873944:;
    a0 = LD32(a0);
    a1 = LD32(s0+44);
    { rv_t r_ = func_088F2B14(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873950;
L_08873950:;
    v0 = 1;
    goto L_088738F0;
L_08873958:;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088738F0; }
    goto L_08873968;
L_08873968:;
    a0 = 136;
    a1 = 44;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887397C;
L_0887397C:;
    cnd_ = v0 == 0;
    t4 = v0 + 0;
    if (cnd_) { goto L_08873910; }
    goto L_08873984;
L_08873984:;
    t2 = LD32(v0+24);
    cnd_ = t2 == 0;
    if (cnd_) { v0 = LD32(t4+28); goto L_08873A98; }
    goto L_08873990;
L_08873990:;
    ST32(t2, 0);
    v0 = LD32(s0+28);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(t2+40, 0); goto L_088739BC; }
    goto L_088739A4;
L_088739A4:;
    f0 = BITSF(LD32(s0+36));
    v0 = LD32(s0+40);
    ST32(t2+32, FBITS(f0));
    f1 = BITSF(LD32(s0+32));
    ST32(t2+40, v0);
    ST32(t2+36, FBITS(f1));
    goto L_088739BC;
L_088739BC:;
    v0 = D_08B28F54 - (-28844);
    t5 = LD32(v0-28844);
    a3 = t2 + 0;
    t3 = 0 + 0;
    t7 = v0 - 28844;
    t6 = 999;
    t8 = 1;
    t0 = t2 + 0;
    t1 = s0 + 44;
    goto L_088739E0;
L_088739E0:;
    a1 = LD32(t1);
    cnd_ = a1 == t6;
    if (cnd_) { t3 = t3 + 1; goto L_08873A84; }
    goto L_088739EC;
L_088739EC:;
    v0 = LD32(t7+4);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + t5;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08873A2C; }
    goto L_08873A0C;
L_08873A0C:;
    a0 = LD32(v1);
    goto L_08873A10;
L_08873A10:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08873AB8; }
    goto L_08873A1C;
L_08873A1C:;
    v1 = LD32(v1+4);
    goto L_08873A20;
L_08873A20:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08873A10; }
    goto L_08873A28;
L_08873A28:;
    a2 = 0 + 0;
    goto L_08873A2C;
L_08873A2C:;
    cnd_ = a2 == 0;
    v0 = a2 + 28;
    if (cnd_) { goto L_08873A80; }
    goto L_08873A34;
L_08873A34:;
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(a2+28));
    ST32(t0+12, FBITS(f0));
    a0 = a2 + 40;
    a1 = t8 << (t3 & 31);
    ST32(t0+4, FBITS(f1));
    ST32(t0+8, FBITS(f2));
    v1 = LD32(a2+40);
    v0 = LD32(t2);
    ST32(a3+16, v1);
    v0 = v0 | a1;
    v1 = LD32(a0+4);
    ST32(t2, v0);
    ST32(a3+20, v1);
    v0 = LD32(a0+8);
    ST32(a3+24, v0);
    v1 = LD32(a0+12);
    ST32(a3+28, v1);
    goto L_08873A80;
L_08873A80:;
    t3 = t3 + 1;
    goto L_08873A84;
L_08873A84:;
    t1 = t1 + 4;
    t0 = t0 + 12;
    cnd_ = t3 == 0;
    a3 = a3 + 16;
    if (cnd_) { goto L_088739E0; }
    goto L_08873A94;
L_08873A94:;
    v0 = LD32(t4+28);
    goto L_08873A98;
L_08873A98:;
    a0 = s0 + 0;
    a1 = t4 + 0;
    v0 = v0 | 0x1;
    ST32(t4+28, v0);
    a2 = 8;
    { rv_t r_ = func_08873D6C(a0, a1, a2, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873AB0;
L_08873AB0:;
    v0 = 1;
    goto L_088738F0;
L_08873AB8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08873A1C; }
    goto L_08873AC4;
L_08873AC4:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08873A20; }
    goto L_08873AD0;
L_08873AD0:;
    goto L_08873A2C;
L_08873AD8:;
    v1 = LD32(a0);
    a1 = 0 + 0;
    goto L_08873904;
}

/* 08873AE4 */
rv_t func_08873AE4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08873AE4:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08873B64; }
    goto L_08873B18;
L_08873B18:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08873B3C; }
    goto L_08873B2C;
L_08873B2C:;
    v0 = D_08B28FC4 - (-28732);
    a0 = LD32(v0-28732);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08873B54; }
    goto L_08873B3C;
L_08873B3C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08873B54:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873B5C;
L_08873B5C:;
    goto L_08873B3C;
L_08873B64:;
    s3 = D_08B28FC4 - (-28732);
    s0 = s3 - 28732;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873B7C;
L_08873B7C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-28732, v0);
    if (cnd_) { goto L_08873BA8; }
    goto L_08873B8C;
L_08873B8C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08873B94;
L_08873B94:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08873B94; }
    goto L_08873BA8;
L_08873BA8:;
    v0 = s3 - 28732;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08873B18;
}

/* 08873BB8 */
rv_t func_08873BB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873BB8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08873AE4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873BCC;
L_08873BCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08873BD8 */
rv_t func_08873BD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873BD8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08873AE4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873BEC;
L_08873BEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08873BF8 */
void func_08873BF8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08873BF8:;
    v1 = LD32(a0+16);
    v0 = D_08AF68F0 - (26864);
    v0 = v0 + 26864;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0, v0);
    v0 = 999;
    ST32(a0+16, v1);
    ST32(a0+4, v0);
    ST32(a0+12, 0);
    ST16(a0+8, 0);
    return;
}

/* 08873C24 */
u64 func_08873C24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873C24:;
    sp = sp - 16;
    v0 = D_08AF68F0 - (26864);
    s0 = a0 + 0;
    v0 = v0 + 26864;
    v1 = LD32(a0+12);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08873C64; }
    goto L_08873C4C;
L_08873C4C:;
    a0 = s0 + 0;
    { u64 r_ = func_08878024(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873C54;
L_08873C54:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08873C64:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873C74;
L_08873C74:;
    goto L_08873C4C;
}

/* 08873C7C */
rv_t func_08873C7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873C7C:;
    sp = sp - 16;
    v0 = D_08AF68F0 - (26864);
    s0 = a0 + 0;
    v0 = v0 + 26864;
    v1 = LD32(a0+12);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08873CBC; }
    goto L_08873CA4;
L_08873CA4:;
    a0 = s0 + 0;
    { u64 r_ = func_08878024(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873CAC;
L_08873CAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08873CBC:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873CCC;
L_08873CCC:;
    goto L_08873CA4;
}

/* 08873CD4 */
rv_t func_08873CD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873CD4:;
    sp = sp - 16;
    v0 = D_08AF68F0 - (26864);
    s0 = a0 + 0;
    v0 = v0 + 26864;
    v1 = LD32(a0+12);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08873D1C; }
    goto L_08873CFC;
L_08873CFC:;
    a0 = s0 + 0;
    { u64 r_ = func_08878024(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873D04;
L_08873D04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873D0C;
L_08873D0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08873D1C:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873D2C;
L_08873D2C:;
    goto L_08873CFC;
}

/* 08873D34 */
rv_t func_08873D34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873D34:;
    sp = sp - 16;
    v0 = LD32(a0+16);
    a1 = v0 | 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08873D5C; }
    goto L_08873D50;
L_08873D50:;
    goto L_08873D54;
L_08873D54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08873D5C:;
    ST32(a0+16, a1);
    { u64 r_ = func_08877FE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873D64;
L_08873D64:;
    goto L_08873D54;
}

/* 08873D6C */
rv_t func_08873D6C(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873D6C:;
    v1 = a1 + 0;
    sp = sp - 16;
    a3 = a2 + 0;
    v0 = 999;
    t0 = a0 + 0;
    a2 = 1;
    a1 = 1;
    cnd_ = a3 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08873DB0; }
    goto L_08873D94;
L_08873D94:;
    ST32(v1, a3);
    v0 = LD32(t0+4);
    ST32(v1+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873DA4;
L_08873DA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08873DB0:;
    a3 = LD32(t0+4);
    goto L_08873D94;
}

/* 08873DB8 */
rv_t func_08873DB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873DB8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08873DF0; }
    goto L_08873DD4;
L_08873DD4:;
    v1 = LD32(a0+12);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08873E24; }
    goto L_08873DE0;
L_08873DE0:;
    v1 = LD_U16(s1+16);
    goto L_08873DE4;
L_08873DE4:;
    v0 = 2;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08873E0C; }
    goto L_08873DF0;
L_08873DF0:;
    v1 = 0 + 0;
    goto L_08873DF4;
L_08873DF4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08873E0C:;
    v0 = LD32(s0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873E1C;
L_08873E1C:;
    v1 = 1;
    goto L_08873DF4;
L_08873E24:;
    v1 = LD32(v1);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873E34;
L_08873E34:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08873DF4; }
    goto L_08873E3C;
L_08873E3C:;
    v1 = LD_U16(s1+16);
    goto L_08873DE4;
}

/* 08873E44 */
rv_t func_08873E44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873E44:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08873E64; }
    goto L_08873E58;
L_08873E58:;
    goto L_08873E5C;
L_08873E5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08873E64:;
    v0 = LD32(v0);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873E74;
L_08873E74:;
    goto L_08873E5C;
}

/* 08873E7C */
u32 func_08873E7C(void)
{
    u32 v0 = 0;
L_08873E7C:;
    v0 = D_08B290CC - (-28468);
    v0 = v0 - 28468;
    return v0;
}

/* 08873E88 */
u32 func_08873E88(void)
{
    u32 v0 = 0;
L_08873E88:;
    v0 = D_08B2915C - (-28324);
    v0 = v0 - 28324;
    return v0;
}

/* 08873E94 */
void func_08873E94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873E94:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_08873BF8(a0);
    goto L_08873EB0;
L_08873EB0:;
    v0 = D_08AF68A0 - (26784);
    v0 = v0 + 26784;
    ST32(s0, v0);
    v0 = 999;
    a0 = s0 + 0;
    a1 = 0 + 0;
    ST32(s0+20, 0);
    cnd_ = s1 == v0;
    ST32(s0+24, 0);
    if (cnd_) { goto L_08873F1C; }
    goto L_08873ED4;
L_08873ED4:;
    ST32(s0+4, s1);
    goto L_08873ED8;
L_08873ED8:;
    a0 = LD_U16(s0+8);
    v0 = func_08A25A08();
    goto L_08873EE0;
L_08873EE0:;
    ST32(s0+12, v0);
    a0 = s0 + 0;
    func_0887456C(a0, 0, 0, 0);
    goto L_08873EEC;
L_08873EEC:;
    a0 = s0 + 0;
    v0 = func_08873E7C();
    goto L_08873EF4;
L_08873EF4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08875558(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873F00;
L_08873F00:;
    a0 = s0 + 0;
    { rv_t r_ = func_0887470C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08873F08;
L_08873F08:;
    sp = sp + 16;
    return;
L_08873F1C:;
    func_08876F14(a0);
    goto L_08873F24;
L_08873F24:;
    goto L_08873ED8;
}

/* 08873F2C */
u64 func_08873F2C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08873F2C:;
    sp = sp - 16;
    v0 = D_08AF68A0 - (26784);
    v0 = v0 + 26784;
    s0 = a0 + 0;
    ST32(s0, v0);
    a0 = LD32(a0+4);
    func_088A5BEC(a0, t1, t2, t3);
    goto L_08873F54;
L_08873F54:;
    a0 = s0 + 0;
    v0 = func_08873E7C();
    goto L_08873F5C;
L_08873F5C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_088755CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873F68;
L_08873F68:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_08873FC4; }
    goto L_08873F70;
L_08873F70:;
    a0 = s0 + 0;
    v0 = func_08873E88();
    goto L_08873F78;
L_08873F78:;
    s1 = v0 + 0;
    v0 = LD32(v0+4);
    v1 = LD32(s0+4);
    a0 = LD32(s1);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08873FC0; }
    goto L_08873FA4;
L_08873FA4:;
    v0 = LD32(a0);
    goto L_08873FA8;
L_08873FA8:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0887400C; }
    goto L_08873FB0;
L_08873FB0:;
    a1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08873FA8; }
    goto L_08873FC0;
L_08873FC0:;
    a0 = LD32(s0+24);
    goto L_08873FC4;
L_08873FC4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08873FFC; }
    goto L_08873FCC;
L_08873FCC:;
    a1 = 0 + 0;
    goto L_08873FD0;
L_08873FD0:;
    a0 = s0 + 0;
    { u64 r_ = func_08874730(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873FD8;
L_08873FD8:;
    a0 = s0 + 0;
    func_088746BC(a0, 0, 0, 0);
    goto L_08873FE0;
L_08873FE0:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08873FE8;
L_08873FE8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08873FFC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874004;
L_08874004:;
    a1 = 0 + 0;
    goto L_08873FD0;
L_0887400C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0887401C; }
    goto L_08874014;
L_08874014:;
    ST8(a0+8, v0);
    goto L_08873FC0;
L_0887401C:;
    cnd_ = a1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08874040; }
    goto L_08874024;
L_08874024:;
    ST32(a1+4, v0);
    goto L_08874028;
L_08874028:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874030;
L_08874030:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08873FC0;
L_08874040:;
    ST32(v1, v0);
    goto L_08874028;
}

/* 08874048 */
rv_t func_08874048(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874048:;
    sp = sp - 16;
    v0 = D_08AF68A0 - (26784);
    v0 = v0 + 26784;
    s0 = a0 + 0;
    ST32(s0, v0);
    a0 = LD32(a0+4);
    func_088A5BEC(a0, t1, t2, t3);
    goto L_0887406C;
L_0887406C:;
    a0 = s0 + 0;
    v0 = func_08873E7C();
    goto L_08874074;
L_08874074:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_088755CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874080;
L_08874080:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088740D0; }
    goto L_08874088;
L_08874088:;
    v0 = LD32(s0+24);
    goto L_0887408C;
L_0887408C:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088740C0; }
    goto L_08874094;
L_08874094:;
    a1 = 0 + 0;
    goto L_08874098;
L_08874098:;
    a0 = s0 + 0;
    { u64 r_ = func_08874730(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088740A0;
L_088740A0:;
    a0 = s0 + 0;
    func_088746BC(a0, 0, 0, 0);
    goto L_088740A8;
L_088740A8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088740B0;
L_088740B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088740C0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088740C8;
L_088740C8:;
    a1 = 0 + 0;
    goto L_08874098;
L_088740D0:;
    v0 = func_08873E88();
    goto L_088740D8;
L_088740D8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08AB013C(a0, a1, 0, 0, 0);
    goto L_088740E4;
L_088740E4:;
    v0 = LD32(s0+24);
    goto L_0887408C;
}

/* 088740EC */
rv_t func_088740EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088740EC:;
    sp = sp - 16;
    v0 = D_08AF68A0 - (26784);
    v0 = v0 + 26784;
    s0 = a0 + 0;
    ST32(s0, v0);
    a0 = LD32(a0+4);
    func_088A5BEC(a0, t1, t2, t3);
    goto L_08874110;
L_08874110:;
    a0 = s0 + 0;
    v0 = func_08873E7C();
    goto L_08874118;
L_08874118:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_088755CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874124;
L_08874124:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887417C; }
    goto L_0887412C;
L_0887412C:;
    v0 = LD32(s0+24);
    goto L_08874130;
L_08874130:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887416C; }
    goto L_08874138;
L_08874138:;
    a1 = 0 + 0;
    goto L_0887413C;
L_0887413C:;
    a0 = s0 + 0;
    { u64 r_ = func_08874730(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874144;
L_08874144:;
    a0 = s0 + 0;
    func_088746BC(a0, 0, 0, 0);
    goto L_0887414C;
L_0887414C:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874154;
L_08874154:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887415C;
L_0887415C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887416C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874174;
L_08874174:;
    a1 = 0 + 0;
    goto L_0887413C;
L_0887417C:;
    v0 = func_08873E88();
    goto L_08874184;
L_08874184:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08AB013C(a0, a1, 0, 0, 0);
    goto L_08874190;
L_08874190:;
    v0 = LD32(s0+24);
    goto L_08874130;
}

/* 08874198 */
rv_t func_08874198(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874198:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_088741B8; }
    goto L_088741A8;
L_088741A8:;
    v1 = LD_U16(a1+16);
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088741CC; }
    goto L_088741B8;
L_088741B8:;
    a0 = a2 + 0;
    { rv_t r_ = func_08873DB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088741C0;
L_088741C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088741CC:;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088741D4;
L_088741D4:;
    v0 = 1;
    goto L_088741C0;
}

/* 088741DC */
rv_t func_088741DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088741DC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 & 0xff;
    v0 = func_08873E7C();
    goto L_088741F8;
L_088741F8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_08875434(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874208;
L_08874208:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887421C */
u64 func_0887421C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0887421C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08873E7C();
    goto L_08874230;
L_08874230:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_088755CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887423C;
L_0887423C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887424C */
rv_t func_0887424C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0887424C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08873E7C();
    goto L_08874260;
L_08874260:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088754C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887426C;
L_0887426C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887427C */
u64 func_0887427C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0887427C:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a0 + 0;
    v0 = func_08873E88();
    goto L_0887429C;
L_0887429C:;
    s0 = LD32(s1+4);
    v1 = v0 + 0;
    v0 = 999;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_0887431C; }
    goto L_088742B0;
L_088742B0:;
    v0 = LD32(v1+4);
    v1 = LD32(v1);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088742F4; }
    goto L_088742D4;
L_088742D4:;
    a0 = LD32(v1);
    goto L_088742D8;
L_088742D8:;
    v0 = LD32(a0+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08874340; }
    goto L_088742E4;
L_088742E4:;
    v1 = LD32(v1+4);
    goto L_088742E8;
L_088742E8:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_088742D8; }
    goto L_088742F0;
L_088742F0:;
    a0 = 0 + 0;
    goto L_088742F4;
L_088742F4:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0887431C; }
    goto L_088742FC;
L_088742FC:;
    s2 = 1;
    goto L_08874300;
L_08874300:;
    v0 = s2 + 0;
    goto L_08874304;
L_08874304:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0887431C:;
    a0 = s1 + 0;
    v0 = func_08873E7C();
    goto L_08874324;
L_08874324:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08875694(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874330;
L_08874330:;
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_08874304; }
    goto L_08874338;
L_08874338:;
    s2 = 1;
    goto L_08874300;
L_08874340:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_088742E8; }
    goto L_0887434C;
L_0887434C:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_088742E8; }
    goto L_08874358;
L_08874358:;
    goto L_088742F4;
}

/* 08874360 */
u32 func_08874360(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874360:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08873E7C();
    goto L_08874374;
L_08874374:;
    a1 = LD32(s0+4);
    a0 = v0 + 0;
    v0 = func_088756F4(a0, a1);
    goto L_08874380;
L_08874380:;
    sp = sp + 16;
    return v0;
}

/* 08874390 */
rv_t func_08874390(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08874390:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    s2 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088744B8; }
    goto L_088743B4;
L_088743B4:;
    s0 = LD32(a0+4);
    s1 = D_08B28FF0 - (-28688);
    v0 = 999;
    cnd_ = s0 == v0;
    s3 = s1 - 28688;
    if (cnd_) { goto L_08874478; }
    goto L_088743C8;
L_088743C8:;
    a0 = s3 + 0;
    { rv_t r_ = func_08AA8F48(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088743D0;
L_088743D0:;
    a1 = LD32(s1-28688);
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s3+4); goto L_08874420; }
    goto L_088743DC;
L_088743DC:;
    v1 = LD32(a1+8);
    goto L_088743E0;
L_088743E0:;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08874414; }
    goto L_088743E8;
L_088743E8:;
    v0 = LD_U8(v1+8);
    goto L_088743EC;
L_088743EC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08874408; }
    goto L_088743F4;
L_088743F4:;
    a0 = LD32(v1);
    v0 = LD32(a0+4);
    cnd_ = v0 == s0;
    a2 = a0 + 0;
    if (cnd_) { goto L_088744A0; }
    goto L_08874404;
L_08874404:;
    v1 = LD32(v1+4);
    goto L_08874408;
L_08874408:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD_U8(v1+8); goto L_088743EC; }
    goto L_08874410;
L_08874410:;
    a1 = LD32(a1+4);
    goto L_08874414;
L_08874414:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1+8); goto L_088743E0; }
    goto L_0887441C;
L_0887441C:;
    a0 = LD32(s3+4);
    goto L_08874420;
L_08874420:;
    cnd_ = a0 == 0;
    if (cnd_) { a2 = 0 + 0; goto L_08874454; }
    goto L_08874428;
L_08874428:;
    v0 = LD_U8(a0+8);
    goto L_0887442C;
L_0887442C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08874448; }
    goto L_08874434;
L_08874434:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    a2 = v1 + 0;
    if (cnd_) { goto L_08874488; }
    goto L_08874444;
L_08874444:;
    a0 = LD32(a0+4);
    goto L_08874448;
L_08874448:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD_U8(a0+8); goto L_0887442C; }
    goto L_08874450;
L_08874450:;
    a2 = 0 + 0;
    goto L_08874454;
L_08874454:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08874478; }
    goto L_0887445C;
L_0887445C:;
    goto L_08874460;
L_08874460:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08874478:;
    a0 = s2 + 0;
    { rv_t r_ = func_0887470C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874480;
L_08874480:;
    goto L_08874460;
L_08874488:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08874448; }
    goto L_08874498;
L_08874498:;
    goto L_08874454;
L_088744A0:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08874408; }
    goto L_088744B0;
L_088744B0:;
    goto L_08874454;
L_088744B8:;
    a1 = 0 + 0;
    { u64 r_ = func_08874730(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088744C0;
L_088744C0:;
    goto L_08874460;
}

/* 088744C8 */
u32 func_088744C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088744C8:;
    sp = sp - 16;
    a2 = 1;
    a3 = 1;
    a1 = LD32(a0+4);
    a0 = D_08B28FF0 - (-28688);
    a0 = a0 - 28688;
    v0 = func_08AB01E4(a0, a1, a2, a3, t1, t2, t3);
    goto L_088744E8;
L_088744E8:;
    v0 = 0 < v0;
    sp = sp + 16;
    return v0;
}

/* 088744F8 */
rv_t func_088744F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088744F8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+8);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874514;
L_08874514:;
    a0 = 2;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874528;
L_08874528:;
    a3 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_0887455C; }
    goto L_0887453C;
L_0887453C:;
    v0 = 2;
    ST32(a3, v0);
    v1 = LD32(a3+28);
    v0 = LD32(s0+4);
    v1 = v1 | 0x1;
    ST32(a3+28, v1);
    ST32(a3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887455C;
L_0887455C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887456C */
void func_0887456C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0887456C:;
    sp = sp - 32;
    s3 = a0 + 0;
    s1 = D_08B28FD4 - (-28716);
    s2 = s1 - 28716;
    s4 = s2 + 16;
    v0 = LD32(s2+4);
    s0 = LD32(a0+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088745B0;
L_088745B0:;
    a0 = LD32(s1-28716);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s3);
    v1 = v1 + 1;
    a0 = s4 + 0;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    ST32(s2+12, v1);
    { rv_t r_ = func_08AA8F48(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088745E4;
L_088745E4:;
    v0 = LD32(s4+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08874618; }
    goto L_088745F0;
L_088745F0:;
    v1 = LD32(s2+16);
    cnd_ = v1 == 0;
    a0 = LD_U16(s3+8);
    if (cnd_) { goto L_08874618; }
    goto L_088745FC;
L_088745FC:;
    v0 = LD32(v1);
    goto L_08874600;
L_08874600:;
    v0 = v0 < a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08874654; }
    goto L_0887460C;
L_0887460C:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08874600; }
    goto L_08874618;
L_08874618:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874620;
L_08874620:;
    v1 = LD32(s4+4);
    ST32(v0, s3);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s4+4, v0);
    goto L_08874634;
L_08874634:;
    sp = sp + 32;
    return;
L_08874654:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08874618; }
    goto L_0887465C;
L_0887465C:;
    v0 = LD32(v1);
    cnd_ = v0 != a0;
    if (cnd_) { goto L_08874618; }
    goto L_08874668;
L_08874668:;
    s1 = LD32(v1+8);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08874618; }
    goto L_08874674;
L_08874674:;
    v0 = LD32(s1);
    cnd_ = v0 == s3;
    if (cnd_) { goto L_08874698; }
    goto L_08874680;
L_08874680:;
    s1 = LD32(s1+4);
    goto L_08874684;
L_08874684:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08874618; }
    goto L_0887468C;
L_0887468C:;
    v0 = LD32(s1);
    cnd_ = v0 != s3;
    if (cnd_) { s1 = LD32(s1+4); goto L_08874684; }
    goto L_08874698;
L_08874698:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08874618; }
    goto L_088746A0;
L_088746A0:;
    v1 = LD32(s1);
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08874618; }
    goto L_088746B4;
L_088746B4:;
    ST8(s1+8, 0);
    goto L_08874634;
}

/* 088746BC */
void func_088746BC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088746BC:;
    sp = sp - 16;
    s0 = D_08B28FD4 - (-28716);
    s0 = s0 - 28716;
    s1 = a0 + 0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    s0 = s0 + 16;
    func_08AB013C(a0, a1, t1, t2, t3);
    goto L_088746E8;
L_088746E8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08AAFD48(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088746F8;
L_088746F8:;
    sp = sp + 16;
    return;
}

/* 0887470C */
rv_t func_0887470C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0887470C:;
    a1 = a0 + 0;
    a0 = D_08B28FF0 - (-28688);
    sp = sp - 16;
    a0 = a0 - 28688;
    { rv_t r_ = func_08AB0314(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874724;
L_08874724:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08874730 */
u64 func_08874730(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874730:;
    a2 = a1 + 0;
    a1 = a0 + 0;
    a0 = D_08B28FF0 - (-28688);
    sp = sp - 16;
    a2 = a2 & 0xff;
    a0 = a0 - 28688;
    { u64 r_ = func_08AAFD48(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874750;
L_08874750:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887475C */
rv_t func_0887475C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0887475C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08874764 */
float func_08874764(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874764:;
    v1 = LD32(a1);
    sp = sp - 16;
    s1 = a0 + 0;
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a0 = LD32(a1+4);
    v0 = s1 + v0;
    ST32(v0, a0);
    v1 = LD32(s1);
    s0 = LD32(v1-12);
    s0 = s1 + s0;
    a0 = LD_U16(s0+8);
    v0 = func_08A259F8();
    goto L_088747A4;
L_088747A4:;
    ST32(s0+12, v0);
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    func_08876ED4(a0);
    goto L_088747B8;
L_088747B8:;
    a0 = s1 + 0;
    f0 = func_08874A2C(a0, 0, 0, 0);
    goto L_088747C0;
L_088747C0:;
    sp = sp + 16;
    return f0;
}

/* 088747D4 */
void func_088747D4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088747D4:;
    v1 = LD32(a1);
    sp = sp - 16;
    s1 = a0 + 0;
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a0 = LD32(a1+4);
    v0 = s1 + v0;
    ST32(v0, a0);
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    ST32(v0+4, a2);
    v1 = LD32(s1);
    s0 = LD32(v1-12);
    s0 = s1 + s0;
    a0 = LD_U16(s0+8);
    v0 = func_08A259F8();
    goto L_08874824;
L_08874824:;
    ST32(s0+12, v0);
    a0 = s1 + 0;
    f0 = func_08874A2C(a0, 0, 0, 0);
    goto L_08874830;
L_08874830:;
    sp = sp + 16;
    return;
}

/* 08874844 */
void func_08874844(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874844:;
    v1 = LD32(a1);
    sp = sp - 16;
    s0 = a0 + 0;
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a2 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, a2);
    func_08874BA0(a0, t1, t2, t3);
    goto L_08874870;
L_08874870:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088A5BEC(a0, 0, 0, 0);
    goto L_08874884;
L_08874884:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_088748A4; }
    goto L_08874894;
L_08874894:;
    goto L_08874898;
L_08874898:;
    sp = sp + 16;
    return;
L_088748A4:;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_08876938(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088748B4;
L_088748B4:;
    goto L_08874898;
}

/* 088748BC */
rv_t func_088748BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088748BC:;
    v1 = D_08AF6854 - (26708);
    v1 = v1 + 26708;
    a1 = v1 + 40;
    ST32(a0, v1);
    sp = sp - 16;
    ST32(a0+4, a1);
    s0 = a0 + 4;
    func_08874BA0(a0, t1, t2, t3);
    goto L_088748E4;
L_088748E4:;
    a0 = LD32(s0+4);
    func_088A5BEC(a0, 0, 0, 0);
    goto L_088748EC;
L_088748EC:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08874914; }
    goto L_088748FC;
L_088748FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874904;
L_08874904:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08874914:;
    a0 = LD32(s0+4);
    { rv_t r_ = func_08876938(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887491C;
L_0887491C:;
    goto L_088748FC;
}

/* 08874924 */
rv_t func_08874924(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874924:;
    v0 = D_08AF6854 - (26708);
    v0 = v0 + 26708;
    v1 = v0 + 40;
    ST32(a0+4, v1);
    sp = sp - 16;
    ST32(a0, v0);
    s1 = a0 + 4;
    s0 = a0 + 0;
    func_08874BA0(a0, t1, t2, t3);
    goto L_08874954;
L_08874954:;
    a0 = LD32(s1+4);
    func_088A5BEC(a0, 0, 0, 0);
    goto L_0887495C;
L_0887495C:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08874990; }
    goto L_0887496C;
L_0887496C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874974;
L_08874974:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887497C;
L_0887497C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08874990:;
    a0 = LD32(s1+4);
    { rv_t r_ = func_08876938(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874998;
L_08874998:;
    goto L_0887496C;
}

/* 088749A0 */
rv_t func_088749A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088749A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D34(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088749C0;
L_088749C0:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_088749E0; }
    goto L_088749D0;
L_088749D0:;
    goto L_088749D4;
L_088749D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088749E0:;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_08876938(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088749F0;
L_088749F0:;
    goto L_088749D4;
}

/* 088749F8 */
u32 func_088749F8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088749F8:;
    sp = sp - 16;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08874A1C; }
    goto L_08874A10;
L_08874A10:;
    goto L_08874A14;
L_08874A14:;
    sp = sp + 16;
    return v0;
L_08874A1C:;
    v0 = func_08876894(a0);
    goto L_08874A24;
L_08874A24:;
    goto L_08874A14;
}

/* 08874A2C */
float func_08874A2C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08874A2C:;
    sp = sp - 32;
    s2 = a0 + 0;
    s1 = D_08B28FFC - (-28676);
    s3 = s1 - 28676;
    s4 = s3 + 16;
    a0 = LD32(a0);
    v1 = LD32(s3+4);
    v0 = LD32(a0-12);
    v1 = v1 - 1;
    a0 = 12;
    v0 = s2 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874A7C;
L_08874A7C:;
    a0 = LD32(s1-28676);
    s0 = s0 << 2;
    v1 = LD32(s3+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s2);
    v1 = v1 + 1;
    a0 = s4 + 0;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    ST32(s3+12, v1);
    f0 = func_08AAFE90(a0, 0, 0, 0);
    goto L_08874AB0;
L_08874AB0:;
    v0 = LD32(s4+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08874AF0; }
    goto L_08874ABC;
L_08874ABC:;
    v1 = LD32(s2);
    s1 = LD32(s3+16);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    cnd_ = s1 == 0;
    v1 = LD_U16(v0+8);
    if (cnd_) { goto L_08874AF0; }
    goto L_08874AD4;
L_08874AD4:;
    v0 = LD32(s1);
    goto L_08874AD8;
L_08874AD8:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08874B2C; }
    goto L_08874AE4;
L_08874AE4:;
    s1 = LD32(s1+4);
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08874AD8; }
    goto L_08874AF0;
L_08874AF0:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874AF8;
L_08874AF8:;
    v1 = LD32(s4+4);
    ST32(v0, s2);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s4+4, v0);
    goto L_08874B0C;
L_08874B0C:;
    sp = sp + 32;
    return f0;
L_08874B2C:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08874AF0; }
    goto L_08874B34;
L_08874B34:;
    v0 = LD32(s1);
    cnd_ = v0 != v1;
    if (cnd_) { goto L_08874AF0; }
    goto L_08874B40;
L_08874B40:;
    s1 = LD32(s1+8);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08874AF0; }
    goto L_08874B4C;
L_08874B4C:;
    v0 = LD32(s1);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_08874B70; }
    goto L_08874B58;
L_08874B58:;
    s1 = LD32(s1+4);
    goto L_08874B5C;
L_08874B5C:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08874AF0; }
    goto L_08874B64;
L_08874B64:;
    v0 = LD32(s1);
    cnd_ = v0 != s2;
    if (cnd_) { s1 = LD32(s1+4); goto L_08874B5C; }
    goto L_08874B70;
L_08874B70:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08874AF0; }
    goto L_08874B78;
L_08874B78:;
    v1 = LD32(s1);
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08874AF0; }
    goto L_08874B98;
L_08874B98:;
    ST8(s1+8, 0);
    goto L_08874B0C;
}

/* 08874BA0 */
void func_08874BA0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874BA0:;
    sp = sp - 16;
    s1 = D_08B28FFC - (-28676);
    s2 = s1 - 28676;
    s0 = a0 + 0;
    v1 = LD32(a0);
    a0 = LD32(s2+4);
    a1 = LD32(s1-28676);
    v0 = LD32(v1-12);
    a0 = a0 - 1;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08874C10; }
    goto L_08874BF4;
L_08874BF4:;
    v0 = LD32(a0);
    goto L_08874BF8;
L_08874BF8:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08874C3C; }
    goto L_08874C00;
L_08874C00:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08874BF8; }
    goto L_08874C10;
L_08874C10:;
    a0 = s1 - 28676;
    a1 = s0 + 0;
    a0 = a0 + 16;
    a2 = 1;
    func_08AAFFE0(a0, a1, t1, t2, t3);
    goto L_08874C24;
L_08874C24:;
    sp = sp + 16;
    return;
L_08874C3C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08874C4C; }
    goto L_08874C44;
L_08874C44:;
    ST8(a0+8, v0);
    goto L_08874C10;
L_08874C4C:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_08874C74; }
    goto L_08874C54;
L_08874C54:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_08874C5C;
L_08874C5C:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874C64;
L_08874C64:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_08874C10;
L_08874C74:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_08874C5C;
}

/* 08874C84 */
rv_t func_08874C84(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874C84:;
    a1 = a0 + 0;
    a0 = D_08B29018 - (-28648);
    sp = sp - 16;
    a0 = a0 - 28648;
    { rv_t r_ = func_08AB03FC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874C9C;
L_08874C9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08874CA8 */
void func_08874CA8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874CA8:;
    a2 = a1 + 0;
    a1 = a0 + 0;
    a0 = D_08B29018 - (-28648);
    sp = sp - 16;
    a2 = a2 & 0xff;
    a0 = a0 - 28648;
    func_08AAFFE0(a0, a1, t1, t2, t3);
    goto L_08874CC8;
L_08874CC8:;
    sp = sp + 16;
    return;
}

/* 08874CD4 */
rv_t func_08874CD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08874CD4:;
    v0 = LD32(a0+20);
    v0 = v0 << 2;
    v0 = v0 + 8;
    return (rv_t){ v0, v1, f0 };
}

/* 08874CE4 */
rv_t func_08874CE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08874CE4:;
    sp = sp - 32;
    t0 = a0 + 0;
    a3 = sp + 0;
    a2 = 0 + 0;
    goto L_08874CF8;
L_08874CF8:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(a1, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08874CF8; }
    goto L_08874D1C;
L_08874D1C:;
    a0 = t0 + 0;
    { rv_t r_ = func_08874D30(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874D24;
L_08874D24:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08874D30 */
rv_t func_08874D30(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874D30:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = a0 + 20;
    goto L_08874D50;
L_08874D50:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08874D50; }
    goto L_08874D78;
L_08874D78:;
    a0 = LD32(s1+20);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08874DF8; }
    goto L_08874D84;
L_08874D84:;
    v0 = LD32(s1+24);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08874E08; }
    goto L_08874D90;
L_08874D90:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874D98;
L_08874D98:;
    v1 = LD32(s1+20);
    ST32(s1+24, v0);
    cnd_ = (s32)v1 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08874DF4; }
    goto L_08874DA8;
L_08874DA8:;
    v1 = LD32(s1+24);
    goto L_08874DAC;
L_08874DAC:;
    v0 = a3 << 2;
    a2 = 0 + 0;
    a1 = v1 + v0;
    goto L_08874DB8;
L_08874DB8:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08874DB8; }
    goto L_08874DE0;
L_08874DE0:;
    v0 = LD32(s1+20);
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+24); goto L_08874DAC; }
    goto L_08874DF4;
L_08874DF4:;
    goto L_08874DF8;
L_08874DF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08874E08:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08874E10;
L_08874E10:;
    a0 = LD32(s1+20);
    goto L_08874D90;
}

/* 08874E18 */
void func_08874E18(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08874E18:;
    sp = sp - 16;
    a1 = a0 + 0;
    a3 = sp + 0;
    a2 = 0 + 0;
    goto L_08874E28;
L_08874E28:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(a1, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08874E28; }
    goto L_08874E4C;
L_08874E4C:;
    t0 = sp + 4;
    a2 = 0 + 0;
    goto L_08874E54;
L_08874E54:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    a3 = v0 + 1;
    ST32(a1, a3);
    ST8(t0, v1);
    cnd_ = a0 != 0;
    t0 = t0 + 1;
    if (cnd_) { goto L_08874E54; }
    goto L_08874E78;
L_08874E78:;
    v0 = LD32(sp+4);
    v0 = v0 << 2;
    v0 = a3 + v0;
    ST32(a1, v0);
    sp = sp + 16;
    return;
}

/* 08874E90 */
void func_08874E90(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08874E90:;
    sp = sp - 32;
    a1 = sp + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874EA8;
L_08874EA8:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874EB4;
L_08874EB4:;
    v1 = LD32(s0);
    a1 = LD32(sp+4);
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = a1 << 2;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08874ECC;
L_08874ECC:;
    sp = sp + 32;
    return;
}

/* 08874EDC */
rv_t func_08874EDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08874EDC:;
    sp = sp - 48;
    ST32(sp+32, 0);
    t1 = a0 + 0;
    a3 = sp + 32;
    a2 = 0 + 0;
    goto L_08874EF0;
L_08874EF0:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08874EF0; }
    goto L_08874F18;
L_08874F18:;
    v0 = LD32(t1+20);
    a3 = sp + 36;
    a2 = 0 + 0;
    ST32(sp+36, v0);
    goto L_08874F28;
L_08874F28:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08874F28; }
    goto L_08874F50;
L_08874F50:;
    v0 = LD32(t1+20);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08874FD0; }
    goto L_08874F5C;
L_08874F5C:;
    cnd_ = (s32)v0 <= 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08874FD0; }
    goto L_08874F64;
L_08874F64:;
    t2 = sp + 16;
    v0 = LD32(t1+24);
    goto L_08874F6C;
L_08874F6C:;
    v1 = t0 << 2;
    a3 = t2 + 0;
    v1 = v1 + v0;
    v0 = LDU32(v1);
    STU32(sp, v0);
    a2 = 0 + 0;
    v0 = LD32(sp);
    ST32(sp+16, v0);
    goto L_08874F94;
L_08874F94:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08874F94; }
    goto L_08874FBC;
L_08874FBC:;
    v0 = LD32(t1+20);
    t0 = t0 + 1;
    v0 = (s32)t0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(t1+24); goto L_08874F6C; }
    goto L_08874FD0;
L_08874FD0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08874FD8 */
rv_t func_08874FD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08874FD8:;
    sp = sp - 48;
    s3 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875004;
L_08875004:;
    a0 = s3 + 0;
    a1 = s1 + 20;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875010;
L_08875010:;
    a0 = LD32(s1+20);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08875080; }
    goto L_0887501C;
L_0887501C:;
    v0 = LD32(s1+24);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08875098; }
    goto L_08875028;
L_08875028:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875030;
L_08875030:;
    v1 = LD32(s1+20);
    ST32(s1+24, v0);
    cnd_ = (s32)v1 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0887507C; }
    goto L_08875040;
L_08875040:;
    a1 = LD32(s1+24);
    goto L_08875044;
L_08875044:;
    s0 = s2 << 2;
    a0 = s3 + 0;
    a1 = a1 + s0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875054;
L_08875054:;
    a1 = LD32(s1+24);
    a0 = s3 + 0;
    s2 = s2 + 1;
    a1 = a1 + s0;
    a1 = a1 + 2;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887506C;
L_0887506C:;
    v1 = LD32(s1+20);
    v1 = (s32)s2 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+24); goto L_08875044; }
    goto L_0887507C;
L_0887507C:;
    goto L_08875080;
L_08875080:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08875098:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088750A0;
L_088750A0:;
    a0 = LD32(s1+20);
    goto L_08875028;
}

/* 088750A8 */
rv_t func_088750A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088750A8:;
    sp = sp - 32;
    s3 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s3 + 0;
    s2 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088750D8;
L_088750D8:;
    a0 = s3 + 0;
    a1 = LD32(s1+20);
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088750E4;
L_088750E4:;
    v1 = LD32(s1+20);
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { goto L_08875134; }
    goto L_088750F0;
L_088750F0:;
    v0 = LD32(s1+24);
    goto L_088750F4;
L_088750F4:;
    s0 = s2 << 2;
    a0 = s3 + 0;
    v0 = s0 + v0;
    a1 = LD_U16(v0);
    s2 = s2 + 1;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887510C;
L_0887510C:;
    v1 = LD32(s1+24);
    a0 = s3 + 0;
    s0 = s0 + v1;
    a1 = LD_U16(s0+2);
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875120;
L_08875120:;
    v1 = LD32(s1+20);
    v1 = (s32)s2 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+24); goto L_088750F4; }
    goto L_08875130;
L_08875130:;
    goto L_08875134;
L_08875134:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0887514C */
rv_t func_0887514C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0887514C:;
    sp = sp - 32;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a2 = LD32(a0+20);
    cnd_ = (s32)a2 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088751A8; }
    goto L_0887517C;
L_0887517C:;
    s3 = 0xffff;
    s4 = D_08B29170 - (-28304);
    a0 = LD32(s1+24);
    goto L_08875188;
L_08875188:;
    v1 = s0 << 2;
    v1 = v1 + a0;
    v0 = LD_U16(v1);
    cnd_ = v0 == s2;
    s0 = s0 + 1;
    if (cnd_) { goto L_088751C8; }
    goto L_0887519C;
L_0887519C:;
    v0 = (s32)s0 < (s32)a2;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+24); goto L_08875188; }
    goto L_088751A8;
L_088751A8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088751C8:;
    v0 = LD_U16(v1+2);
    f12 = BITSF(0);
    a0 = s4 - 28304;
    cnd_ = v0 == s3;
    a1 = v0 + 0;
    if (cnd_) { goto L_0887519C; }
    goto L_088751DC;
L_088751DC:;
    a2 = LD32(s1+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088751E4;
L_088751E4:;
    a2 = LD32(s1+20);
    goto L_0887519C;
}

/* 088751EC */
rv_t func_088751EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088751EC:;
    sp = sp - 32;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    s0 = a0 ^ 0x1;
    v1 = s0 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08875348; }
    goto L_08875224;
L_08875224:;
    v0 = s1 < 0x1u;
    v1 = s0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = s0 < 0x1u;
    if (cnd_) { goto L_088752AC; }
    goto L_08875238;
L_08875238:;
    v0 = D_08B28FF0 - (-28688);
    s2 = D_08B28FFC - (-28676);
    v1 = v0 - 28688;
    s3 = s2 - 28676;
    ST32(v0-28688, 0);
    v0 = 32;
    a0 = 128;
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s3+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875264;
L_08875264:;
    a1 = LD32(s3+4);
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(s2-28676, v0);
    if (cnd_) { goto L_0887528C; }
    goto L_08875274;
L_08875274:;
    v1 = v0 + 0;
    goto L_08875278;
L_08875278:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08875278; }
    goto L_0887528C;
L_0887528C:;
    v0 = s2 - 28676;
    v1 = v0 + 16;
    ST32(s3+8, 0);
    ST32(v0+16, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s3+12, 0);
    v0 = s0 < 0x1u;
    goto L_088752AC;
L_088752AC:;
    a0 = s1 < 0x1u;
    v0 = a0 & v0;
    cnd_ = v0 == 0;
    s0 = s4 < 0x1u;
    if (cnd_) { goto L_088752D0; }
    goto L_088752BC;
L_088752BC:;
    v0 = D_08B29018 - (-28648);
    v1 = v0 - 28648;
    ST32(v0-28648, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    goto L_088752D0;
L_088752D0:;
    v0 = a0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_088752F0; }
    goto L_088752DC;
L_088752DC:;
    v0 = D_08B28FFC - (-28676);
    a0 = LD32(v0-28676);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08875338; }
    goto L_088752EC;
L_088752EC:;
    v0 = s1 < 0x1u;
    goto L_088752F0;
L_088752F0:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887530C; }
    goto L_088752FC;
L_088752FC:;
    v0 = D_08B28FD4 - (-28716);
    a0 = LD32(v0-28716);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08875328; }
    goto L_0887530C;
L_0887530C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08875328:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875330;
L_08875330:;
    goto L_0887530C;
L_08875338:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875340;
L_08875340:;
    v0 = s1 < 0x1u;
    goto L_088752F0;
L_08875348:;
    s3 = D_08B28FD4 - (-28716);
    s2 = s3 - 28716;
    v0 = 32;
    ST32(s2+4, v0);
    a0 = 128;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875360;
L_08875360:;
    a1 = LD32(s2+4);
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(s3-28716, v0);
    if (cnd_) { goto L_08875388; }
    goto L_08875370;
L_08875370:;
    v1 = v0 + 0;
    goto L_08875374;
L_08875374:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08875374; }
    goto L_08875388;
L_08875388:;
    v0 = s3 - 28716;
    v1 = v0 + 16;
    ST32(s2+8, 0);
    ST32(v0+16, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s2+12, 0);
    goto L_08875224;
}

/* 088753A8 */
rv_t func_088753A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088753A8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088751EC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088753BC;
L_088753BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088753C8 */
rv_t func_088753C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088753C8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088751EC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088753DC;
L_088753DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088753E8 */
void func_088753E8(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088753E8:;
    sp = sp - 16;
    func_08875404(a0);
    goto L_088753F8;
L_088753F8:;
    sp = sp + 16;
    return;
}

/* 08875404 */
void func_08875404(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08875404:;
    a1 = 0 + 0;
    v1 = a0 + 0;
    goto L_0887540C;
L_0887540C:;
    a1 = a1 + 1;
    v0 = a1 < 0x20u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0887540C; }
    goto L_08875420;
L_08875420:;
    ST32(a0+140, 0);
    ST32(a0+128, 0);
    ST32(a0+132, 0);
    ST32(a0+136, 0);
    return;
}

/* 08875434 */
rv_t func_08875434(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875434:;
    sp = sp - 16;
    s2 = a2 & 0xff;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = LD32(a1+4);
    { u64 r_ = func_08875694(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887545C;
L_0887545C:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088754B0; }
    goto L_0887546C;
L_0887546C:;
    a1 = 1;
    cnd_ = s2 == 0;
    a0 = 5;
    if (cnd_) { goto L_08875498; }
    goto L_08875478;
L_08875478:;
    ST32(a2+4, 0);
    ST32(a2+8, 0);
    goto L_08875480;
L_08875480:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08875498:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    ST32(a2+8, a1);
    if (v1 == 0) a0 = a1;
    ST32(a2+4, a0);
    goto L_08875480;
L_088754B0:;
    { rv_t r_ = func_08875558(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088754B8;
L_088754B8:;
    a2 = v0 + 0;
    goto L_0887546C;
}

/* 088754C0 */
rv_t func_088754C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088754C0:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = LD32(a1+4);
    { u64 r_ = func_08875694(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088754E8;
L_088754E8:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08875504; }
    goto L_088754F8;
L_088754F8:;
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08875508; }
    goto L_08875504;
L_08875504:;
    s2 = 1;
    goto L_08875508;
L_08875508:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08875548; }
    goto L_08875510;
L_08875510:;
    a1 = 1;
    cnd_ = s2 == 0;
    a0 = 5;
    if (cnd_) { goto L_08875530; }
    goto L_0887551C;
L_0887551C:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    ST32(a2+8, a1);
    if (v1 == 0) a0 = a1;
    ST32(a2+4, a0);
    goto L_08875530;
L_08875530:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08875548:;
    { rv_t r_ = func_08875558(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875550;
L_08875550:;
    a2 = v0 + 0;
    goto L_08875510;
}

/* 08875558 */
rv_t func_08875558(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875558:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = 16;
    s0 = LD32(a1+4);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875580;
L_08875580:;
    ST32(v0+4, 0);
    s0 = s0 & 0x1f;
    s0 = s0 << 2;
    ST32(v0+12, 0);
    s0 = s0 + s1;
    v1 = LD32(s1+140);
    a1 = LD32(s0);
    ST32(v0, s2);
    v1 = v1 + 1;
    ST32(s1+140, v1);
    ST32(v0+12, a1);
    ST32(s0, v0);
    ST32(v0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088755CC */
u64 func_088755CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088755CC:;
    sp = sp - 32;
    s1 = LD32(a1+4);
    s3 = a0 + 0;
    v0 = s1 & 0x1f;
    v0 = v0 << 2;
    v0 = v0 + a0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0887562C; }
    goto L_08875608;
L_08875608:;
    s4 = v0 + 0;
    goto L_0887560C;
L_0887560C:;
    a0 = s0 + 0;
    v0 = func_08875A18(a0);
    goto L_08875614;
L_08875614:;
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(s3+132); goto L_08875654; }
    goto L_0887561C;
L_0887561C:;
    s2 = s0 + 0;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0887560C; }
    goto L_0887562C;
L_0887562C:;
    v1 = 0 + 0;
    goto L_08875630;
L_08875630:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08875654:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s0+12); goto L_0887568C; }
    goto L_0887565C;
L_0887565C:;
    cnd_ = s2 == 0;
    v0 = LD32(s0+12);
    if (cnd_) { goto L_08875684; }
    goto L_08875664;
L_08875664:;
    ST32(s2+12, v0);
    goto L_08875668;
L_08875668:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875670;
L_08875670:;
    v0 = LD32(s3+140);
    v1 = 1;
    v0 = v0 - 1;
    ST32(s3+140, v0);
    goto L_08875630;
L_08875684:;
    ST32(s4, v0);
    goto L_08875668;
L_0887568C:;
    ST32(s3+132, v0);
    goto L_0887565C;
}

/* 08875694 */
u64 func_08875694(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875694:;
    sp = sp - 16;
    v0 = a1 & 0x1f;
    v0 = v0 << 2;
    v0 = v0 + a0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_088756D8; }
    goto L_088756BC;
L_088756BC:;
    a0 = s0 + 0;
    v0 = func_08875A18(a0);
    goto L_088756C4;
L_088756C4:;
    cnd_ = v0 == s1;
    v1 = s0 + 0;
    if (cnd_) { goto L_088756DC; }
    goto L_088756CC;
L_088756CC:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088756BC; }
    goto L_088756D8;
L_088756D8:;
    v1 = 0 + 0;
    goto L_088756DC;
L_088756DC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088756F4 */
u32 func_088756F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088756F4:;
    sp = sp - 16;
    { u64 r_ = func_08875694(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875704;
L_08875704:;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08875710; }
    goto L_0887570C;
L_0887570C:;
    v1 = LD32(v0+8);
    goto L_08875710;
L_08875710:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08875720 */
void func_08875720(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08875720:;
    v1 = LD32(a0+140);
    v0 = D_08B28594 - (-31340);
    f1 = BITSF(LD32(v0-31340));
    v0 = D_08AEBFF4 - (-16396);
    f0 = BITSF(LD32(v0-16396));
    f2 = BITSF(v1);
    v0 = v1 >> 1;
    a1 = v1 & 0x1;
    f1 = f1 * f0;
    a1 = a1 | v0;
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08875788; }
    goto L_08875750;
L_08875750:;
    f1 = f0 / f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEBFF8 - (-16392);
    if (cnd_) { goto L_0887577C; }
    goto L_08875768;
L_08875768:;
    f0 = BITSF(LD32(v0-16392));
    f0 = f1 + f0;
    goto L_08875770;
L_08875770:;
    f0 = BITSF(F2I(f0, 1));
    ST32(a0+136, FBITS(f0));
    return;
L_0887577C:;
    f0 = BITSF(LD32(v0-16392));
    f0 = f1 - f0;
    goto L_08875770;
L_08875788:;
    f2 = BITSF(a1);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08875750;
}

/* 08875798 */
void func_08875798(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875798:;
    sp = sp - 16;
    v0 = LD32(a0+136);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088757C8; }
    goto L_088757B0;
L_088757B0:;
    a0 = s0 + 0;
    func_08875810(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088757B8;
L_088757B8:;
    sp = sp + 16;
    return;
L_088757C8:;
    func_08875720(a0);
    goto L_088757D0;
L_088757D0:;
    goto L_088757B0;
}

/* 088757D8 */
void func_088757D8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088757D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+140);
    ST32(a0+136, v0);
    func_08875810(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088757F4;
L_088757F4:;
    ST32(s0+132, 0);
    ST32(s0+136, 0);
    ST32(s0+128, 0);
    sp = sp + 16;
    return;
}

/* 08875810 */
void func_08875810(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08875810:;
    sp = sp - 48;
    v0 = D_08B285B0 - (-31312);
    s1 = a0 + 0;
    a2 = 0 + 0;
    s4 = LD32(a0+128);
    s6 = LD32(v0-31312);
    v1 = s4 < 0x20u;
    cnd_ = v1 == 0;
    s2 = LD32(a0+136);
    if (cnd_) { goto L_08875910; }
    goto L_0887585C;
L_0887585C:;
    v0 = s4 << 2;
    s5 = v0 + a0;
    v1 = 0 < s2;
    goto L_08875868;
L_08875868:;
    v0 = LD32(s1+132);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s5); goto L_0887587C; }
    goto L_08875874;
L_08875874:;
    a2 = v0 + 0;
    ST32(s1+132, 0);
    goto L_0887587C;
L_0887587C:;
    v0 = 0 < a2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088758F0; }
    goto L_0887588C;
L_0887588C:;
    s7 = 1;
    fp = 4901;
    v0 = LD32(a2+12);
    goto L_08875898;
L_08875898:;
    s0 = LD32(a2);
    s2 = s2 - 1;
    ST32(s1+132, v0);
    v0 = LD32(s0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088758D8; }
    goto L_088758B4;
L_088758B4:;
    v0 = LD32(a2+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08875A04; }
    goto L_088758C0;
L_088758C0:;
    cnd_ = v0 == s7;
    if (cnd_) { v0 = LD32(a2+4); goto L_08875978; }
    goto L_088758C8;
L_088758C8:;
    v1 = LD32(a2+4);
    v0 = s6 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08875948; }
    goto L_088758D8;
L_088758D8:;
    a2 = LD32(s1+132);
    goto L_088758DC;
L_088758DC:;
    v1 = 0 < s2;
    v0 = 0 < a2;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a2+12); goto L_08875898; }
    goto L_088758F0;
L_088758F0:;
    cnd_ = s2 != 0;
    if (cnd_) { s4 = s4 + 1; goto L_08875904; }
    goto L_088758F8;
L_088758F8:;
    cnd_ = a2 != 0;
    if (cnd_) { ST32(s1+128, s4); goto L_08875914; }
    goto L_08875900;
L_08875900:;
    s4 = s4 + 1;
    goto L_08875904;
L_08875904:;
    v0 = s4 < 0x20u;
    cnd_ = v0 != 0;
    s5 = s5 + 4;
    if (cnd_) { goto L_08875868; }
    goto L_08875910;
L_08875910:;
    ST32(s1+128, s4);
    goto L_08875914;
L_08875914:;
    ST32(s1+132, a2);
    sp = sp + 48;
    return;
L_08875948:;
    v1 = v1 + 5000;
    ST32(a2+4, v1);
    v1 = LD32(v0+68);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887595C;
L_0887595C:;
    cnd_ = s3 == 0;
    if (cnd_) { a2 = LD32(s1+132); goto L_088758DC; }
    goto L_08875964;
L_08875964:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_088755CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875970;
L_08875970:;
    a2 = LD32(s1+132);
    goto L_088758DC;
L_08875978:;
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_088759EC; }
    goto L_08875984;
L_08875984:;
    v1 = D_08B2BB6D - (-17555);
    v0 = LD_U8(v1-17555);
    cnd_ = v0 == 0;
    if (cnd_) { s3 = 1; goto L_088759EC; }
    goto L_08875994;
L_08875994:;
    v1 = D_08B25AC8 - (23240);
    v0 = LD32(v1+23240);
    v1 = v1 + 23240;
    a1 = LD32(v1+4);
    v1 = 2;
    ST32(a2+8, v1);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = fp; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = D_08B25AC8 - (23240);
    v1 = v1 + 23240;
    a1 = a1 + v0;
    ST32(v1+4, a1);
    v1 = D_08B25AC8 - (23240);
    ST32(v1+23240, v0);
    a0 = hi;
    a0 = a0 + 100;
    a0 = s6 + a0;
    ST32(a2+4, a0);
    goto L_088759EC;
L_088759EC:;
    v1 = LD32(s0);
    v0 = LD32(v1+68);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088759FC;
L_088759FC:;
    goto L_0887595C;
L_08875A04:;
    v0 = LD32(v1+68);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875A10;
L_08875A10:;
    a2 = LD32(s1+132);
    goto L_088758DC;
}

/* 08875A18 */
u32 func_08875A18(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08875A18:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    return v0;
}

/* 08875A24 */
void func_08875A24(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08875A24:;
    sp = sp - 128;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s1 = a0 + 0;
    f0 = func_08874764(a0, a1);
    goto L_08875A44;
L_08875A44:;
    v1 = LD32(s0);
    a0 = 124;
    ST32(s1, v1);
    v0 = LD32(v1-12);
    a1 = LD32(s0+12);
    v0 = s1 + v0;
    ST32(v0, a1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875A64;
L_08875A64:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_0887872C(a0);
    goto L_08875A70;
L_08875A70:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    {a0=FBITS(v[50]);}
    f0 = BITSF(a0);
    f2 = BITSF(0);
    {a0=FBITS(v[54]);}
    f9 = BITSF(a0);
    {a0=FBITS(v[58]);}
    f10 = BITSF(a0);
    {a0=FBITS(v[49]);}
    f6 = BITSF(a0);
    {a0=FBITS(v[52]);}
    f7 = BITSF(a0);
    {a0=FBITS(v[53]);}
    f4 = BITSF(a0);
    {a0=FBITS(v[56]);}
    f5 = BITSF(a0);
    {a0=FBITS(v[57]);}
    f3 = BITSF(a0);
    v0 = s1 + 28;
    a1 = s1 + 64;
    a2 = s1 + 16;
    f8 = f0;
    v1 = (u32)-1;
    ST32(s1+12, v1);
    {a0=FBITS(v[48]);}
    f0 = BITSF(a0);
    ST32(s1+4, s0);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a0 = s1 + 0;
    ST32(s1+16, FBITS(f2));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    ST32(s1+8, v1);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(a1+4, FBITS(f2));
    ST32(a1+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(s1+64, FBITS(f2));
    ST32(v0+32, FBITS(f10));
    ST32(v0+4, FBITS(f6));
    ST32(v0+8, FBITS(f8));
    ST32(v0+12, FBITS(f7));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f9));
    ST32(v0+24, FBITS(f5));
    ST32(v0+28, FBITS(f3));
    ST8(s1+77, 0);
    v0 = LD32(s1+76);
    ST32(sp, FBITS(f0));
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = v0 | 0x2;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    v0 = v0 | 0x8;
    ST32(s1+28, FBITS(f0));
    ST32(sp+4, FBITS(f6));
    ST32(sp+8, FBITS(f8));
    ST32(sp+12, FBITS(f7));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f9));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f10));
    ST32(s1+76, v0);
    func_088763F0(a0, 0, 0, 0);
    goto L_08875B74;
L_08875B74:;
    a0 = s1 + 0;
    { rv_t r_ = func_08876648(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875B7C;
L_08875B7C:;
    sp = sp + 128;
    return;
}

/* 08875B90 */
void func_08875B90(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875B90:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(a1);
    ST32(a0, v0);
    v1 = LD32(v0-12);
    a0 = LD32(a1+12);
    v1 = s1 + v1;
    ST32(v1, a0);
    s0 = LD32(s1+4);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08875C24; }
    goto L_08875BD0;
L_08875BD0:;
    a0 = s1 + 0;
    func_08876564(a0, t1, t2, t3);
    goto L_08875BD8;
L_08875BD8:;
    v0 = LD32(s1+76);
    a0 = s1 + 0;
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08875BF8; }
    goto L_08875BEC;
L_08875BEC:;
    v0 = LD_U8(s1+77);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s2 + 4; goto L_08875C04; }
    goto L_08875BF8;
L_08875BF8:;
    func_0887666C(a0, a1, 0, 0, 0);
    goto L_08875C00;
L_08875C00:;
    a1 = s2 + 4;
    goto L_08875C04;
L_08875C04:;
    a0 = s1 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08875C0C;
L_08875C0C:;
    sp = sp + 16;
    return;
L_08875C24:;
    func_08878768(a0, t1, t2, t3);
    goto L_08875C2C;
L_08875C2C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875C34;
L_08875C34:;
    goto L_08875BD0;
}

/* 08875C3C */
rv_t func_08875C3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875C3C:;
    sp = sp - 16;
    v0 = D_08AF6914 - (26900);
    v0 = v0 + 26900;
    s0 = a0 + 0;
    v1 = v0 + 76;
    s1 = LD32(a0+4);
    ST32(s0, v0);
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    ST32(s0+80, v1);
    if (cnd_) { goto L_08875CD0; }
    goto L_08875C70;
L_08875C70:;
    a0 = s0 + 0;
    func_08876564(a0, t1, t2, t3);
    goto L_08875C78;
L_08875C78:;
    v0 = LD32(s0+76);
    a0 = s0 + 0;
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08875C98; }
    goto L_08875C8C;
L_08875C8C:;
    v0 = LD_U8(s0+77);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = D_08AF6978 - (27000); goto L_08875CA4; }
    goto L_08875C98;
L_08875C98:;
    func_0887666C(a0, a1, 0, 0, 0);
    goto L_08875CA0;
L_08875CA0:;
    a1 = D_08AF6978 - (27000);
    goto L_08875CA4;
L_08875CA4:;
    a1 = a1 + 27000;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08875CB4;
L_08875CB4:;
    a0 = s0 + 80;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875CBC;
L_08875CBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08875CD0:;
    func_08878768(a0, t1, t2, t3);
    goto L_08875CD8;
L_08875CD8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875CE0;
L_08875CE0:;
    goto L_08875C70;
}

/* 08875CE8 */
rv_t func_08875CE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875CE8:;
    sp = sp - 16;
    v0 = D_08AF6914 - (26900);
    v0 = v0 + 26900;
    s0 = a0 + 0;
    v1 = v0 + 76;
    s1 = LD32(a0+4);
    ST32(s0, v0);
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    ST32(s0+80, v1);
    if (cnd_) { goto L_08875D84; }
    goto L_08875D1C;
L_08875D1C:;
    a0 = s0 + 0;
    func_08876564(a0, t1, t2, t3);
    goto L_08875D24;
L_08875D24:;
    v0 = LD32(s0+76);
    a0 = s0 + 0;
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08875D44; }
    goto L_08875D38;
L_08875D38:;
    v0 = LD_U8(s0+77);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = D_08AF6978 - (27000); goto L_08875D50; }
    goto L_08875D44;
L_08875D44:;
    func_0887666C(a0, a1, 0, 0, 0);
    goto L_08875D4C;
L_08875D4C:;
    a1 = D_08AF6978 - (27000);
    goto L_08875D50;
L_08875D50:;
    a1 = a1 + 27000;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08875D60;
L_08875D60:;
    a0 = s0 + 80;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875D68;
L_08875D68:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875D70;
L_08875D70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08875D84:;
    func_08878768(a0, t1, t2, t3);
    goto L_08875D8C;
L_08875D8C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08875D94;
L_08875D94:;
    goto L_08875D1C;
}

/* 08875D9C */
rv_t func_08875D9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875D9C:;
    sp = sp - 16;
    a3 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    v0 = a3 + 16;
    if (cnd_) { goto L_08875DE4; }
    goto L_08875DB8;
L_08875DB8:;
    v0 = D_08B285AC - (-31316);
    t0 = LD32(v0-31316);
    v1 = LD32(a3+8);
    s0 = a3 + 16;
    a2 = a3 + 64;
    a1 = s0 + 0;
    cnd_ = v1 == t0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08875DE4; }
    goto L_08875DD8;
L_08875DD8:;
    ST32(a3+8, t0);
    { rv_t r_ = func_08878798(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875DE0;
L_08875DE0:;
    v0 = s0 + 0;
    goto L_08875DE4;
L_08875DE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08875DF4 */
rv_t func_08875DF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875DF4:;
    sp = sp - 16;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    v0 = a2 + 28;
    if (cnd_) { goto L_08875E38; }
    goto L_08875E10;
L_08875E10:;
    v0 = D_08B285AC - (-31316);
    a3 = LD32(v0-31316);
    v1 = LD32(a2+12);
    s0 = a2 + 28;
    a1 = s0 + 0;
    cnd_ = v1 == a3;
    v0 = s0 + 0;
    if (cnd_) { goto L_08875E38; }
    goto L_08875E2C;
L_08875E2C:;
    ST32(a2+12, a3);
    { rv_t r_ = func_08878E84(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875E34;
L_08875E34:;
    v0 = s0 + 0;
    goto L_08875E38;
L_08875E38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08875E48 */
rv_t func_08875E48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875E48:;
    sp = sp - 16;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    s2 = s0 + 64;
    if (cnd_) { goto L_08875EA8; }
    goto L_08875E78;
L_08875E78:;
    f0 = BITSF(LD32(v0+23196));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    goto L_08875E84;
L_08875E84:;
    ST32(s1+8, FBITS(f1));
    ST32(s1, FBITS(f0));
    ST32(s1+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08875EA8:;
    v0 = D_08B285AC - (-31316);
    v0 = LD32(v0-31316);
    v1 = LD32(s0+8);
    cnd_ = v1 == v0;
    a1 = s0 + 16;
    if (cnd_) { goto L_08875ECC; }
    goto L_08875EBC;
L_08875EBC:;
    ST32(s0+8, v0);
    s2 = s0 + 64;
    a2 = s2 + 0;
    { rv_t r_ = func_08878798(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08875ECC;
L_08875ECC:;
    f0 = BITSF(LD32(s0+64));
    f1 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2+4));
    goto L_08875E84;
}

/* 08875EDC */
rv_t func_08875EDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875EDC:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08875FA8; }
    goto L_08875F08;
L_08875F08:;
    v0 = D_08B285AC - (-31316);
    goto L_08875F0C;
L_08875F0C:;
    v1 = LD32(v0-31316);
    a0 = s1 + 16;
    v0 = s1 + 28;
    ST32(s1+12, v1);
    a1 = s1 + 64;
    ST32(s1+8, v1);
    f1 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s2+4));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST32(s1+16, FBITS(f2));
    f7 = BITSF(LD32(s0+32));
    f8 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0+12));
    f3 = BITSF(LD32(s0+16));
    f4 = BITSF(LD32(s0+20));
    f5 = BITSF(LD32(s0+24));
    f6 = BITSF(LD32(s0+28));
    ST32(v0+32, FBITS(f7));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f2));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f4));
    ST32(v0+24, FBITS(f5));
    ST32(v0+28, FBITS(f6));
    ST32(s1+28, FBITS(f8));
    ST32(s1+64, 0);
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08875FA8:;
    func_08879674(a0, a1, a2);
    goto L_08875FB0;
L_08875FB0:;
    v0 = D_08B285AC - (-31316);
    goto L_08875F0C;
}

/* 08875FB8 */
void func_08875FB8(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875FB8:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08875FD8; }
    goto L_08875FCC;
L_08875FCC:;
    goto L_08875FD0;
L_08875FD0:;
    sp = sp + 16;
    return;
L_08875FD8:;
    func_08879748(a0, a1, a2, a3, f12);
    goto L_08875FE0;
L_08875FE0:;
    goto L_08875FD0;
}

/* 08875FE8 */
u32 func_08875FE8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08875FE8:;
    sp = sp - 16;
    v1 = a0 + 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08876010; }
    goto L_08876000;
L_08876000:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08876010:;
    v0 = func_088796E4(a0);
    goto L_08876018;
L_08876018:;
    v1 = v0 + 0;
    goto L_08876000;
}

/* 08876020 */
void func_08876020(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08876020:;
    sp = sp - 16;
    a2 = a0 + 0;
    v1 = a0 + 28;
    s0 = a1 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887609C; }
    goto L_08876044;
L_08876044:;
    f8 = BITSF(LD32(a2+28));
    f0 = BITSF(LD32(v1+32));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+12));
    f4 = BITSF(LD32(v1+16));
    f5 = BITSF(LD32(v1+20));
    f6 = BITSF(LD32(v1+24));
    f7 = BITSF(LD32(v1+28));
    ST32(a1+32, FBITS(f0));
    ST32(a1, FBITS(f8));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    ST32(a1+12, FBITS(f3));
    ST32(a1+16, FBITS(f4));
    ST32(a1+20, FBITS(f5));
    ST32(a1+24, FBITS(f6));
    ST32(a1+28, FBITS(f7));
    goto L_08876090;
L_08876090:;
    sp = sp + 16;
    return;
L_0887609C:;
    v0 = func_08879714(a0);
    goto L_088760A4;
L_088760A4:;
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[115]=BITSF(LD32(v0+(12)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;v[96]=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=v[96];float t0=v[90];float d0=s0-t0;v[96]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(s0+(0),FBITS(v[96]));}
    {ST32(s0+(4),FBITS(v[97]));}
    {ST32(s0+(8),FBITS(v[98]));}
    {ST32(s0+(12),FBITS(v[100]));}
    {ST32(s0+(16),FBITS(v[101]));}
    {ST32(s0+(20),FBITS(v[102]));}
    {ST32(s0+(24),FBITS(v[104]));}
    {ST32(s0+(28),FBITS(v[105]));}
    {ST32(s0+(32),FBITS(v[106]));}
    goto L_08876090;
}

/* 08876124 */
rv_t func_08876124(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08876124:;
    sp = sp - 16;
    t1 = a0 + 16;
    a3 = 0 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08876200; }
    goto L_08876150;
L_08876150:;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1));
    ST32(t1+8, FBITS(f0));
    ST32(t1+4, FBITS(f1));
    ST32(s0+16, FBITS(f2));
    {v[112]=BITSF(LD32(a2+(0)));}
    {v[113]=BITSF(LD32(a2+(4)));}
    {v[114]=BITSF(LD32(a2+(8)));}
    {v[115]=BITSF(LD32(a2+(12)));}
    {float s0=v[0];v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[112];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;v[96]=d0;}
    {float s0=v[120];float t0=v[80];float d0=s0-t0;v[106]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=v[96];float t0=v[90];float d0=s0-t0;v[96]=d0;}
    {float s0=v[81];float t0=v[91];float d0=s0-t0;v[97]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0+t0;v[105]=d0;}
    {float s0=v[106];float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=v[82];float t0=v[87];float d0=s0+t0;v[98]=d0;}
    {float s0=v[86];float t0=v[83];float d0=s0-t0;v[102]=d0;}
    {float s0=v[106];float t0=v[85];float d0=s0-t0;v[106]=d0;}
    {ST32(s0+(28),FBITS(v[96]));}
    {ST32(s0+(32),FBITS(v[97]));}
    {ST32(s0+(36),FBITS(v[98]));}
    {ST32(s0+(40),FBITS(v[100]));}
    {ST32(s0+(44),FBITS(v[101]));}
    {ST32(s0+(48),FBITS(v[102]));}
    {ST32(s0+(52),FBITS(v[104]));}
    {ST32(s0+(56),FBITS(v[105]));}
    {ST32(s0+(60),FBITS(v[106]));}
    v0 = LD32(s0+76);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+76, v0);
    goto L_088761EC;
L_088761EC:;
    goto L_088761F0;
L_088761F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08876200:;
    { rv_t r_ = func_0887916C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08876208;
L_08876208:;
    v1 = LD32(s0+76);
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08876244; }
    goto L_08876218;
L_08876218:;
    s1 = 1;
    goto L_0887621C;
L_0887621C:;
    v0 = (v1 >> 1) & 0x1;
    a0 = s0 + 0;
    cnd_ = v0 == s1;
    a1 = s1 + 0;
    if (cnd_) { goto L_088761EC; }
    goto L_0887622C;
L_0887622C:;
    v0 = LD32(s0);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887623C;
L_0887623C:;
    goto L_088761F0;
L_08876244:;
    a0 = LD32(s0+4);
    { rv_t r_ = func_088795A4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887624C;
L_0887624C:;
    cnd_ = v0 == 0;
    v1 = LD32(s0+76);
    if (cnd_) { goto L_0887621C; }
    goto L_08876254;
L_08876254:;
    s1 = 1;
    goto L_0887621C;
}

/* 0887625C */
void func_0887625C(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0887625C:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+100, a1); goto L_08876268; }
    goto L_08876268;
L_08876268:;
    return;
}

/* 08876270 */
rv_t func_08876270(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08876270:;
    sp = sp - 16;
    a2 = a1 & 0xff;
    s0 = a0 + 0;
    a1 = LD_U8(a0+77);
    v0 = LD32(a0+76);
    v0 = (v0 & ~(0x1u << 8)) | ((a2 & 0x1) << 8);
    v1 = v0 & 0x8;
    ST32(a0+76, v0);
    cnd_ = v1 == 0;
    a1 = 0 < a1;
    if (cnd_) { goto L_088762D0; }
    goto L_088762A0;
L_088762A0:;
    v0 = LD_U8(a0+77);
    v0 = 0 < v0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088762D4; }
    goto L_088762B0;
L_088762B0:;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_088762E0; }
    goto L_088762B8;
L_088762B8:;
    func_0887666C(a0, a1, t1, t2, t3);
    goto L_088762C0;
L_088762C0:;
    v1 = LD32(s0);
    goto L_088762C4;
L_088762C4:;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088762D0;
L_088762D0:;
    goto L_088762D4;
L_088762D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088762E0:;
    { rv_t r_ = func_08876648(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088762E8;
L_088762E8:;
    v1 = LD32(s0);
    goto L_088762C4;
}
