#include "game.h"

/* 0892774C */
rv_t func_0892774C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0892774C:;
    sp = sp - 48;
    s0 = a0 + 0;
    { rv_t r_ = func_08926220(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892776C;
L_0892776C:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927788; }
    goto L_08927778;
L_08927778:;
    v0 = LD_U8(s0+56);
    cnd_ = v0 == 0;
    v0 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_089277A0; }
    goto L_08927784;
L_08927784:;
    goto L_08927788;
L_08927788:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089277A0:;
    v0 = v0 - 22400;
    v1 = LD32(v0+8);
    a0 = sp + 0;
    a1 = 1;
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089277C8;
L_089277C8:;
    v0 = 999;
    v1 = LD32(sp+8);
    ST32(s0+164, v0);
    ST32(s0+172, 0);
    cnd_ = v1 != 0;
    ST32(s0+168, 0);
    if (cnd_) { goto L_08927804; }
    goto L_089277E0;
L_089277E0:;
    a0 = LD32(sp);
    goto L_089277E4;
L_089277E4:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08927784; }
    goto L_089277F4;
L_089277F4:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089277FC;
L_089277FC:;
    goto L_08927788;
L_08927804:;
    s1 = LD32(v1);
    goto L_08927808;
L_08927808:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927814;
L_08927814:;
    a0 = s1 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892781C;
L_0892781C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+200); goto L_0892785C; }
    goto L_08927824;
L_08927824:;
    v0 = LD32(s0+4);
    a0 = LD32(s1+12);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s0+168); goto L_089279C8; }
    goto L_08927838;
L_08927838:;
    v0 = LD32(s0+172);
    v0 = v0 + 1;
    ST32(s0+172, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s0+164, v1);
    goto L_08927858;
L_08927858:;
    v0 = LD32(s1+200);
    goto L_0892785C;
L_0892785C:;
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+328); goto L_0892787C; }
    goto L_08927868;
L_08927868:;
    v1 = LD32(sp+8);
    goto L_0892786C;
L_0892786C:;
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_08927808; }
    goto L_08927874;
L_08927874:;
    a0 = LD32(sp);
    goto L_089277E4;
L_0892787C:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892786C; }
    goto L_08927884;
L_08927884:;
    a0 = s1 + 0;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892788C;
L_0892788C:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892786C; }
    goto L_08927894;
L_08927894:;
    v1 = LD32(s1);
    v0 = LD32(v1+168);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089278A4;
L_089278A4:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892786C; }
    goto L_089278AC;
L_089278AC:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892786C; }
    goto L_089278B8;
L_089278B8:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892786C; }
    goto L_089278C4;
L_089278C4:;
    v1 = LD32(s1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892786C; }
    goto L_089278E8;
L_089278E8:;
    v0 = LD_U8(s1+232);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892786C; }
    goto L_089278F4;
L_089278F4:;
    v0 = LD32(s0+4);
    a0 = LD32(s1+12);
    v1 = LD32(v0+76);
    cnd_ = a0 != v1;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892786C; }
    goto L_08927908;
L_08927908:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08927910;
L_08927910:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892786C; }
    goto L_08927918;
L_08927918:;
    a0 = s1 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927920;
L_08927920:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892786C; }
    goto L_08927928;
L_08927928:;
    a0 = LD32(s0+4);
    v0 = LD32(a0+72);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08927998; }
    goto L_08927938;
L_08927938:;
    s2 = s0 + 16;
    goto L_0892793C;
L_0892793C:;
    a1 = s3 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927944;
L_08927944:;
    s3 = s3 + 1;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892797C; }
    goto L_08927950;
L_08927950:;
    v0 = LD_U8(v0+42);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08927980; }
    goto L_0892795C;
L_0892795C:;
    v0 = LD_U8(a0+44);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08927980; }
    goto L_08927968;
L_08927968:;
    v1 = LD32(s2);
    v0 = LD32(a0+172);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_089279AC; }
    goto L_0892797C;
L_0892797C:;
    a0 = LD32(s0+4);
    goto L_08927980;
L_08927980:;
    v0 = LD32(a0+72);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0892793C; }
    goto L_08927990;
L_08927990:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_0892786C; }
    goto L_08927998;
L_08927998:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089279A4;
L_089279A4:;
    v1 = LD32(sp+8);
    goto L_0892786C;
L_089279AC:;
    v0 = LD32(s1);
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_0898D728(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089279C0;
L_089279C0:;
    v1 = LD32(sp+8);
    goto L_0892786C;
L_089279C8:;
    v0 = v0 + 1;
    ST32(s0+168, v0);
    goto L_08927858;
}

/* 089279D4 */
rv_t func_089279D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089279D4:;
    sp = sp - 96;
    v0 = D_08B285A0 - (-31328);
    s1 = a0 + 0;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+160));
    v1 = LD32(a0+4);
    f0 = f0 + f1;
    cnd_ = v1 == 0;
    ST32(a0+160, FBITS(f0));
    if (cnd_) { goto L_08927A4C; }
    goto L_08927A28;
L_08927A28:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927A50; }
    goto L_08927A34;
L_08927A34:;
    v0 = LD32(v1+72);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927A54; }
    goto L_08927A40;
L_08927A40:;
    v0 = LD_U8(a0+56);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927A84; }
    goto L_08927A4C;
L_08927A4C:;
    goto L_08927A50;
L_08927A50:;
    goto L_08927A54;
L_08927A54:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08927A84:;
    { rv_t r_ = func_08927F48(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08927A8C;
L_08927A8C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08927A50; }
    goto L_08927A94;
L_08927A94:;
    a2 = LD32(s1+4);
    s4 = 0 + 0;
    s3 = 0 + 0;
    s5 = 1;
    s2 = s1 + 112;
    s0 = s1 + 128;
    goto L_08927AAC;
L_08927AAC:;
    ST32(s0, 0);
    a0 = a2 + 0;
    v0 = LD32(a2+72);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08927ED4; }
    goto L_08927AC4;
L_08927AC4:;
    ST8(s2, 0);
    goto L_08927AC8;
L_08927AC8:;
    s3 = s3 + 1;
    v0 = s3 < 0x8u;
    s0 = s0 + 4;
    cnd_ = v0 != 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08927AAC; }
    goto L_08927ADC;
L_08927ADC:;
    v0 = D_08B1B510 - (-19184);
    fp = v0 - 19184;
    s7 = 0 + 0;
    v0 = D_08C25390 - (21392);
    goto L_08927AEC;
L_08927AEC:;
    a0 = LD32(v0+21392);
    v1 = D_08AED460 - (-11168);
    f3 = BITSF(LD32(v1-11168));
    s5 = (u32)-1;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08927B70; }
    goto L_08927B04;
L_08927B04:;
    v0 = D_08AED464 - (-11164);
    f2 = BITSF(LD32(v0-11164));
    v1 = D_08AED468 - (-11160);
    f4 = BITSF(LD32(v1-11160));
    a3 = a0 + 0;
    v1 = s1 + 80;
    a0 = s1 + 120;
    f1 = BITSF(LD32(v1+48));
    goto L_08927B24;
L_08927B24:;
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f2;
    cnd_ = s4 != 0;
    f1 = f2 / f0;
    if (cnd_) { goto L_08927B40; }
    goto L_08927B34;
L_08927B34:;
    v0 = LD_U8(a0);
    cnd_ = v0 != 0;
    if (cnd_) { f1 = f1 * f4; goto L_08927B40; }
    goto L_08927B40;
L_08927B40:;
    f0 = BITSF(LD32(v1));
    a0 = a0 + 1;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    v1 = v1 + 4;
    if (cnd_) { goto L_08927B60; }
    goto L_08927B58;
L_08927B58:;
    f3 = f0 * f1;
    s5 = a1 + 0;
    goto L_08927B60;
L_08927B60:;
    a1 = a1 + 1;
    v0 = a1 < a3;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(v1+48)); goto L_08927B24; }
    goto L_08927B70;
L_08927B70:;
    v0 = s5 < 0x8u;
    cnd_ = v0 == 0;
    a3 = 999;
    if (cnd_) { goto L_08927B88; }
    goto L_08927B7C;
L_08927B7C:;
    v0 = s5 << 2;
    v0 = v0 + fp;
    a3 = LD32(v0);
    goto L_08927B88;
L_08927B88:;
    v0 = D_08C2BA28 - (-17880);
    v1 = v0 - 17880;
    v0 = 999;
    cnd_ = a3 == v0;
    if (cnd_) { v0 = LD32(a2+72); goto L_08927E10; }
    goto L_08927B9C;
L_08927B9C:;
    v0 = LD32(v1+4);
    v1 = D_08C2BA28 - (-17880);
    a0 = LD32(v1-17880);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { s3 = 0 + 0; goto L_08927BF0; }
    goto L_08927BC4;
L_08927BC4:;
    a0 = LD32(a1);
    goto L_08927BC8;
L_08927BC8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08927EB4; }
    goto L_08927BE0;
L_08927BE0:;
    a1 = LD32(a1+4);
    goto L_08927BE4;
L_08927BE4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08927BC8; }
    goto L_08927BEC;
L_08927BEC:;
    s3 = 0 + 0;
    goto L_08927BF0;
L_08927BF0:;
    cnd_ = s3 == 0;
    v0 = D_08AED46C - (-11156);
    if (cnd_) { goto L_08927E0C; }
    goto L_08927BF8;
L_08927BF8:;
    v1 = LD32(a2+72);
    f21 = BITSF(LD32(v0-11156));
    s6 = (u32)-1;
    cnd_ = v1 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08927CF4; }
    goto L_08927C0C;
L_08927C0C:;
    cnd_ = s4 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08927CC4; }
    goto L_08927C14;
L_08927C14:;
    cnd_ = s6 == v0;
    v0 = s5 + s1;
    if (cnd_) { goto L_08927C6C; }
    goto L_08927C1C;
L_08927C1C:;
    v1 = LD_U8(v0+120);
    cnd_ = v1 == 0;
    s0 = s5 << 2;
    if (cnd_) { goto L_08927CA8; }
    goto L_08927C28;
L_08927C28:;
    v0 = s0 + fp;
    a2 = LD32(v0);
    a0 = s1 + 0;
    a1 = s6 + 0;
    func_08926478(a0, a1, a2);
    goto L_08927C3C;
L_08927C3C:;
    a0 = LD32(s1+4);
    goto L_08927C40;
L_08927C40:;
    a1 = s6 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927C48;
L_08927C48:;
    cnd_ = v0 == 0;
    a0 = s0 + s1;
    if (cnd_) { goto L_08927C94; }
    goto L_08927C50;
L_08927C50:;
    v1 = LD32(v0+172);
    v0 = LD32(a0+128);
    v0 = v0 + v1;
    ST32(a0+128, v0);
    goto L_08927C60;
L_08927C60:;
    v0 = s6 + s1;
    v1 = 1;
    ST8(v0+112, v1);
    goto L_08927C6C;
L_08927C6C:;
    a2 = LD32(s1+4);
    goto L_08927C70;
L_08927C70:;
    s4 = s4 + 1;
    goto L_08927C74;
L_08927C74:;
    v0 = LD32(a2+72);
    goto L_08927C78;
L_08927C78:;
    v1 = 1;
    v0 = s4 < v0;
    if (v0 == 0) s7 = v1;
    cnd_ = s7 == 0;
    v0 = D_08C25390 - (21392);
    if (cnd_) { goto L_08927AEC; }
    goto L_08927C8C;
L_08927C8C:;
    goto L_08927A50;
L_08927C94:;
    v1 = s0 + s1;
    v0 = LD32(v1+128);
    v0 = v0 + 1;
    ST32(v1+128, v0);
    goto L_08927C60;
L_08927CA8:;
    v0 = s0 + fp;
    a2 = LD32(v0);
    a0 = s1 + 0;
    a1 = s6 + 0;
    func_089266D4(a0, a1, a2);
    goto L_08927CBC;
L_08927CBC:;
    a0 = LD32(s1+4);
    goto L_08927C40;
L_08927CC4:;
    a0 = s1 + 0;
    v0 = func_08927F14(a0);
    goto L_08927CCC;
L_08927CCC:;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08927C14; }
    goto L_08927CD4;
L_08927CD4:;
    v0 = LD32(s1+4);
    a2 = LD32(s1+164);
    a0 = s1 + 0;
    a1 = LD32(v0+72);
    a1 = a1 - 1;
    func_089263D8(a0, a1, a2);
    goto L_08927CEC;
L_08927CEC:;
    a2 = LD32(s1+4);
    goto L_08927C70;
L_08927CF4:;
    a0 = a2 + 0;
    goto L_08927CF8;
L_08927CF8:;
    a1 = s2 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927D00;
L_08927D00:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s1+4); goto L_08927D1C; }
    goto L_08927D08;
L_08927D08:;
    v0 = s2 + s1;
    v1 = LD_U8(v0+112);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_08927D38; }
    goto L_08927D18;
L_08927D18:;
    a2 = LD32(s1+4);
    goto L_08927D1C;
L_08927D1C:;
    v0 = LD32(a2+72);
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = a2 + 0; goto L_08927CF8; }
    goto L_08927D30;
L_08927D30:;
    goto L_08927C0C;
L_08927D38:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08927D50;
L_08927D50:;
    a0 = LD32(s1+4);
    a1 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927D60;
L_08927D60:;
    a0 = v0 + 0;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927D68;
L_08927D68:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f4));
    v1 = FBITS(f1);
    v0 = FBITS(f0);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f20 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    a2 = LD32(s1+4);
    if (cnd_) { goto L_08927D1C; }
    goto L_08927DD8;
L_08927DD8:;
    v0 = LD32(a2+72);
    v0 = v0 - 1;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_08927DF4; }
    goto L_08927DE8;
L_08927DE8:;
    f21 = f20;
    goto L_08927DEC;
L_08927DEC:;
    s6 = s2 + 0;
    goto L_08927D1C;
L_08927DF4:;
    a0 = s1 + 0;
    v0 = func_08927F14(a0);
    goto L_08927DFC;
L_08927DFC:;
    cnd_ = v0 != 0;
    a2 = LD32(s1+4);
    if (cnd_) { goto L_08927D1C; }
    goto L_08927E04;
L_08927E04:;
    f21 = f20;
    goto L_08927DEC;
L_08927E0C:;
    v0 = LD32(a2+72);
    goto L_08927E10;
L_08927E10:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08927C74; }
    goto L_08927E18;
L_08927E18:;
    v1 = v0 + 0;
    s0 = a1 + s1;
    goto L_08927E20;
L_08927E20:;
    v0 = LD_U8(s0+112);
    cnd_ = v0 == 0;
    v0 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_08927E44; }
    goto L_08927E2C;
L_08927E2C:;
    a1 = a1 + 1;
    v0 = a1 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = a1 + s1; goto L_08927E20; }
    goto L_08927E3C;
L_08927E3C:;
    v0 = LD32(a2+72);
    goto L_08927C78;
L_08927E44:;
    v1 = LD32(v0+23232);
    v0 = v0 + 23232;
    a2 = LD32(v0+4);
    v0 = D_08C25390 - (21392);
    a0 = LD32(v0+21392);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a2;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = D_08B25AC0 - (23232);
    a2 = a2 + v1;
    v0 = v0 + 23232;
    ST32(v0+4, a2);
    v0 = D_08B25AC0 - (23232);
    a0 = s1 + 0;
    ST32(v0+23232, v1);
    s4 = s4 + 1;
    a3 = hi;
    a3 = a3 << 2;
    a3 = a3 + fp;
    a2 = LD32(a3);
    func_08926478(a0, a1, a2);
    goto L_08927EA4;
L_08927EA4:;
    a2 = LD32(s1+4);
    v1 = 1;
    ST8(s0+112, v1);
    goto L_08927C74;
L_08927EB4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08927BE0; }
    goto L_08927EC0;
L_08927EC0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08927BE4; }
    goto L_08927ECC;
L_08927ECC:;
    goto L_08927BF0;
L_08927ED4:;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927EDC;
L_08927EDC:;
    v1 = LD_U8(v0+44);
    cnd_ = v1 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08927EF8; }
    goto L_08927EE8;
L_08927EE8:;
    a2 = LD32(s1+4);
    goto L_08927EEC;
L_08927EEC:;
    s4 = s4 + 1;
    ST8(s2, s5);
    goto L_08927AC8;
L_08927EF8:;
    a0 = LD32(s1+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927F00;
L_08927F00:;
    v1 = LD_U8(v0+42);
    cnd_ = v1 != 0;
    a2 = LD32(s1+4);
    if (cnd_) { goto L_08927EEC; }
    goto L_08927F0C;
L_08927F0C:;
    ST8(s2, 0);
    goto L_08927AC8;
}

/* 08927F14 */
u32 func_08927F14(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08927F14:;
    v1 = LD32(a0+172);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_08927F30; }
    goto L_08927F24;
L_08927F24:;
    a0 = 0 + 0;
    goto L_08927F28;
L_08927F28:;
    v0 = a0 + 0;
    return v0;
L_08927F30:;
    v0 = D_08B1B779 - (-18567);
    v1 = LD_U8(v0-18567);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08927F28; }
    goto L_08927F40;
L_08927F40:;
    a0 = 0 + 0;
    goto L_08927F28;
}

/* 08927F48 */
rv_t func_08927F48(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08927F48:;
    sp = sp - 16;
    a1 = LD_U8(a0+72);
    v1 = LD_U8(a0+75);
    v0 = a1 & 0xff;
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08927F9C; }
    goto L_08927F70;
L_08927F70:;
    a0 = LD_U8(a0+73);
    v0 = 1;
    goto L_08927F78;
L_08927F78:;
    ST8(s0+75, a1);
    ST8(s0+76, a0);
    goto L_08927F80;
L_08927F80:;
    ST32(s0+160, 0);
    goto L_08927F84;
L_08927F84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08927F9C:;
    a0 = LD_U8(a0+73);
    v1 = LD_U8(s0+76);
    v0 = a0 & 0xff;
    cnd_ = v1 != v0;
    v0 = 1;
    if (cnd_) { goto L_08927F78; }
    goto L_08927FB0;
L_08927FB0:;
    v0 = D_08AED470 - (-11152);
    f0 = BITSF(LD32(s0+160));
    f1 = BITSF(LD32(v0-11152));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s0+4); goto L_08927FD4; }
    goto L_08927FCC;
L_08927FCC:;
    v0 = 1;
    goto L_08927F80;
L_08927FD4:;
    v0 = LD32(a0+72);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08928018; }
    goto L_08927FE0;
L_08927FE0:;
    s2 = 1015;
    a1 = s1 + 0;
    goto L_08927FE8;
L_08927FE8:;
    s1 = s1 + 1;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08927FF0;
L_08927FF0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08928008; }
    goto L_08927FF8;
L_08927FF8:;
    v0 = LD32(v0+76);
    cnd_ = v0 == s2;
    v0 = 1;
    if (cnd_) { goto L_08927F80; }
    goto L_08928004;
L_08928004:;
    a0 = LD32(s0+4);
    goto L_08928008;
L_08928008:;
    v0 = LD32(a0+72);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08927FE8; }
    goto L_08928018;
L_08928018:;
    v0 = 0 + 0;
    goto L_08927F84;
}

/* 08928020 */
rv_t func_08928020(u32 a0, u32 a2)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08928020:;
    sp = sp - 48;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08928060; }
    goto L_08928054;
L_08928054:;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD_U8(v0+82); goto L_0892808C; }
    goto L_08928060;
L_08928060:;
    goto L_08928064;
L_08928064:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0892808C:;
    a1 = LD_U8(a0+74);
    v0 = D_08AED474 - (-11148);
    f20 = BITSF(LD32(v0-11148));
    v0 = func_08928424(a0, a1, a2);
    goto L_0892809C;
L_0892809C:;
    v1 = LD32(s0+4);
    a0 = v0 + 0;
    v0 = LD32(v1+76);
    cnd_ = a0 == v0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08928160; }
    goto L_089280B0;
L_089280B0:;
    v0 = LD32(s0+8);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    v0 = D_08AED47C - (-11140);
    if (cnd_) { goto L_08928158; }
    goto L_089280C0;
L_089280C0:;
    s4 = D_08C25390 - (21392);
    v0 = LD32(s4+21392);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08928060; }
    goto L_089280D0;
L_089280D0:;
    s6 = 1;
    s3 = s0 + 120;
    s2 = s0 + 0;
    goto L_089280DC;
L_089280DC:;
    v0 = LD_U8(s0+72);
    a1 = s1 + 0;
    a0 = s0 + 0;
    v0 = (u32)((s32)v0 >> (s1 & 31));
    v0 = v0 & 0x1;
    a2 = s5 + 0;
    cnd_ = v0 != 0;
    ST32(s2+80, 0);
    if (cnd_) { goto L_08928144; }
    goto L_089280FC;
L_089280FC:;
    v0 = LD_U8(s0+73);
    a1 = s1 + 0;
    a0 = s0 + 0;
    v0 = (u32)((s32)v0 >> (s1 & 31));
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08928134; }
    goto L_08928118;
L_08928118:;
    v0 = LD32(s4+21392);
    s2 = s2 + 4;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_089280DC; }
    goto L_0892812C;
L_0892812C:;
    goto L_08928064;
L_08928134:;
    ST8(s3, 0);
    { rv_t r_ = func_08928980(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892813C;
L_0892813C:;
    ST32(s2+80, FBITS(f0));
    goto L_08928118;
L_08928144:;
    ST8(s3, s6);
    { rv_t r_ = func_089284B4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892814C;
L_0892814C:;
    f0 = f0 * f20;
    ST32(s2+80, FBITS(f0));
    goto L_089280FC;
L_08928158:;
    f20 = BITSF(LD32(v0-11140));
    goto L_089280C0;
L_08928160:;
    v0 = D_08AED478 - (-11144);
    f20 = BITSF(LD32(v0-11144));
    s5 = 1;
    goto L_089280C0;
}

/* 08928170 */
void func_08928170(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08928170:;
    sp = sp - 48;
    a2 = D_08C2BA28 - (-17880);
    v1 = a2 - 17880;
    s1 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08928208; }
    goto L_089281BC;
L_089281BC:;
    a2 = LD32(a2-17880);
    a3 = a1 + 0;
    goto L_089281C4;
L_089281C4:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089281F8; }
    goto L_089281DC;
L_089281DC:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s1+4); goto L_0892820C; }
    goto L_089281EC;
L_089281EC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089281DC; }
    goto L_089281F8;
L_089281F8:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089281C4; }
    goto L_08928208;
L_08928208:;
    a2 = LD32(s1+4);
    goto L_0892820C;
L_0892820C:;
    cnd_ = a2 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_08928318; }
    goto L_08928214;
L_08928214:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_08928318; }
    goto L_08928220;
L_08928220:;
    v1 = LD32(sp+8);
    ST32(s1+68, 0);
    ST8(s1+72, 0);
    ST8(s1+73, 0);
    cnd_ = v1 == 0;
    ST8(s1+74, 0);
    if (cnd_) { goto L_089282E8; }
    goto L_08928238;
L_08928238:;
    v0 = D_08C25394 - (21396);
    s2 = v0 + 21396;
    s3 = 4;
    s0 = LD32(v1);
    goto L_08928248;
L_08928248:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928254;
L_08928254:;
    cnd_ = s0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_089282DC; }
    goto L_0892825C;
L_0892825C:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089282DC; }
    goto L_08928268;
L_08928268:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089282DC; }
    goto L_08928274;
L_08928274:;
    v0 = LD32(s0+192);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089282DC; }
    goto L_08928284;
L_08928284:;
    a2 = LD32(s1+4);
    v1 = LD32(s0+12);
    v0 = LD32(a2+76);
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s0); goto L_089283D4; }
    goto L_08928298;
L_08928298:;
    cnd_ = v1 == s3;
    a0 = s1 + 0;
    if (cnd_) { goto L_089282D8; }
    goto L_089282A0;
L_089282A0:;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    v0 = func_08926FD0(a1);
    goto L_089282B4;
L_089282B4:;
    v1 = v0 + 0;
    v0 = v0 < 0x8u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_089282DC; }
    goto L_089282C4;
L_089282C4:;
    v0 = v1 + s2;
    a0 = LD_U8(v0);
    v1 = LD_U8(s1+73);
    v1 = v1 | a0;
    ST8(s1+73, v1);
    goto L_089282D8;
L_089282D8:;
    v1 = LD32(sp+8);
    goto L_089282DC;
L_089282DC:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08928248; }
    goto L_089282E4;
L_089282E4:;
    a2 = LD32(s1+4);
    goto L_089282E8;
L_089282E8:;
    a1 = LD_U8(s1+74);
    a0 = LD_U8(s1+72);
    v1 = LD_U8(s1+73);
    v0 = ~(0 | a1);
    a0 = a0 & v0;
    v1 = v1 & a1;
    ST8(s1+73, v1);
    ST8(s1+72, a0);
    ST8(a2+84, v1);
    ST8(a2+82, a1);
    ST8(a2+83, a0);
    s1 = LD32(sp);
    goto L_08928318;
L_08928318:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892839C; }
    goto L_08928328;
L_08928328:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892839C; }
    goto L_08928334;
L_08928334:;
    v0 = LD32(s1);
    goto L_08928338;
L_08928338:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892838C; }
    goto L_0892834C;
L_0892834C:;
    v0 = LD_U8(s0+8);
    goto L_08928350;
L_08928350:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089283CC; }
    goto L_08928358;
L_08928358:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089283BC; }
    goto L_08928360;
L_08928360:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08928368;
L_08928368:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928374;
L_08928374:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08928380;
L_08928380:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08928350; }
    goto L_08928388;
L_08928388:;
    v1 = LD32(s1+4);
    goto L_0892838C;
L_0892838C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08928338; }
    goto L_0892839C;
L_0892839C:;
    sp = sp + 48;
    return;
L_089283BC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08928368;
L_089283CC:;
    s0 = LD32(s0+4);
    goto L_08928380;
L_089283D4:;
    a0 = s1 + 0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    v0 = func_08926FD0(a1);
    goto L_089283E8;
L_089283E8:;
    a1 = v0 + 0;
    v0 = v0 < 0x8u;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_089282DC; }
    goto L_089283F8;
L_089283F8:;
    v1 = LD_U8(s1+74);
    v0 = 1;
    v0 = v0 << (a1 & 31);
    v1 = v1 | v0;
    ST8(s1+74, v1);
    a1 = a1 + s2;
    a0 = LD_U8(a1);
    v0 = LD_U8(s1+72);
    v0 = v0 | a0;
    ST8(s1+72, v0);
    goto L_089282D8;
}

/* 08928424 */
u32 func_08928424(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08928424:;
    t2 = a0 + 0;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    t0 = 0 + 0;
    t1 = 0 + 0;
    a3 = 0 + 0;
    goto L_0892843C;
L_0892843C:;
    v0 = (u32)((s32)a1 >> (a3 & 31));
    v1 = (u32)((s32)a2 >> (a3 & 31));
    a3 = a3 + 1;
    v0 = v0 & 0x1;
    v1 = v1 & 0x1;
    a0 = a3 < 0x8u;
    t0 = t0 + v0;
    cnd_ = a0 != 0;
    t1 = t1 + v1;
    if (cnd_) { goto L_0892843C; }
    goto L_08928460;
L_08928460:;
    cnd_ = t0 == 0;
    if (cnd_) { v0 = LD32(t2+8); goto L_08928490; }
    goto L_08928468;
L_08928468:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(t2+4); goto L_08928490; }
    goto L_08928470;
L_08928470:;
    v0 = D_08C25390 - (21392);
    v0 = LD32(v0+21392);
    { u32 x_ = v0, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = lo;
    v1 = v1 < 0x2u;
    cnd_ = v1 == 0;
    if (cnd_) { { u32 x_ = v0, y_ = t1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } } goto L_0892849C; }
    goto L_0892848C;
L_0892848C:;
    v0 = LD32(t2+4);
    goto L_08928490;
L_08928490:;
    a0 = LD32(v0+76);
    goto L_08928494;
L_08928494:;
    v0 = a0 + 0;
    return v0;
L_0892849C:;
    v0 = lo;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = 4;
    if (cnd_) { goto L_08928494; }
    goto L_089284AC;
L_089284AC:;
    v0 = LD32(t2+8);
    goto L_08928490;
}

/* 089284B4 */
rv_t func_089284B4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_089284B4:;
    sp = sp - 208;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s1 = D_08C2A43C - (-23492);
    s1 = s1 - 23492;
    s0 = s1 + 16;
    a0 = s0 + 0;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    f0 = func_08ABC074(a0, t1, t2, t3);
    goto L_0892850C;
L_0892850C:;
    v0 = LD32(s1+16);
    ST32(sp, s0);
    a0 = sp + 0;
    ST32(sp+4, v0);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0892854C; }
    goto L_08928524;
L_08928524:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08928974; }
    goto L_08928530;
L_08928530:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892854C; }
    goto L_0892853C;
L_0892853C:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08928524; }
    goto L_0892854C;
L_0892854C:;
    a0 = LD32(sp+8);
    ST32(sp+16, 0);
    s6 = s2 << 2;
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_089285B8; }
    goto L_08928560;
L_08928560:;
    v0 = D_08AD9B30 - (-25808);
    v1 = LD32(v0-25808);
    a1 = D_08B1B510 - (-19184);
    ST32(sp+112, v1);
    v1 = a1 - 19184;
    s7 = s6 + v1;
    v1 = D_08C2BA28 - (-17880);
    fp = v1 - 17880;
    s1 = LD32(a0);
    goto L_08928584;
L_08928584:;
    a0 = sp + 0;
    v0 = func_08ABC338(a0);
    goto L_0892858C;
L_0892858C:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089285B0; }
    goto L_08928594;
L_08928594:;
    v1 = LD32(s1+80);
    v0 = LD32(s7);
    cnd_ = v1 == v0;
    a1 = LD32(s1+84);
    if (cnd_) { goto L_08928948; }
    goto L_089285A4;
L_089285A4:;
    cnd_ = a1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08928760; }
    goto L_089285AC;
L_089285AC:;
    a0 = LD32(sp+8);
    goto L_089285B0;
L_089285B0:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_08928584; }
    goto L_089285B8;
L_089285B8:;
    v1 = D_08B1B510 - (-19184);
    v0 = v1 - 19184;
    v0 = s6 + v0;
    a1 = LD32(v0);
    v0 = D_08C2BA28 - (-17880);
    a0 = v0 - 17880;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_089285D8;
L_089285D8:;
    v1 = D_08C2A880 - (-22400);
    v1 = v1 - 22400;
    s4 = v0 + 0;
    v0 = LD32(v1+8);
    s2 = sp + 96;
    a0 = s2 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    ST32(sp+96, v1);
    ST32(sp+100, 0);
    ST32(sp+104, 0);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892860C;
L_0892860C:;
    v1 = LD32(sp+104);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(sp+96); goto L_0892864C; }
    goto L_08928618;
L_08928618:;
    a1 = 1;
    goto L_0892861C;
L_0892861C:;
    a0 = s2 + 0;
    s1 = LD32(v1);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928628;
L_08928628:;
    v0 = LD32(s3+4);
    a1 = LD32(s1+12);
    v1 = LD32(v0+76);
    cnd_ = a1 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_089286E0; }
    goto L_0892863C;
L_0892863C:;
    v1 = LD32(sp+104);
    goto L_08928640;
L_08928640:;
    cnd_ = v1 != 0;
    a1 = 1;
    if (cnd_) { goto L_0892861C; }
    goto L_08928648;
L_08928648:;
    a0 = LD32(sp+96);
    goto L_0892864C;
L_0892864C:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    v1 = LD32(a0+8);
    v0 = D_08AED490 - (-11120);
    f1 = f1 + f0;
    f0 = BITSF(LD32(v0-11120));
    v1 = v1 - 1;
    ST32(a0+8, v1);
    cnd_ = v1 == 0;
    f20 = f1 * f0;
    if (cnd_) { goto L_089286D0; }
    goto L_08928674;
L_08928674:;
    a0 = LD32(sp);
    goto L_08928678;
L_08928678:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089286C0; }
    goto L_08928688;
L_08928688:;
    f0 = f20;
    goto L_0892868C;
L_0892868C:;
    sp = sp + 208;
    return (rv_t){ v0, v1, f0 };
L_089286C0:;
    { u64 r_ = func_08ABC1B8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089286C8;
L_089286C8:;
    f0 = f20;
    goto L_0892868C;
L_089286D0:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089286D8;
L_089286D8:;
    a0 = LD32(sp);
    goto L_08928678;
L_089286E0:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089286E8;
L_089286E8:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+104);
    if (cnd_) { goto L_08928640; }
    goto L_089286F0;
L_089286F0:;
    v0 = LD32(s4);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892870C;
L_0892870C:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892872C;
L_0892872C:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(v0+4));
    f1 = f1 - f3;
    f2 = f2 - f5;
    f0 = f0 - f4;
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f0));
    ST32(sp+88, FBITS(f2));
    goto L_0892863C;
L_08928760:;
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_0892876C;
L_0892876C:;
    a1 = LD32(s1+84);
    goto L_08928770;
L_08928770:;
    s2 = v0 + 0;
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_08928780;
L_08928780:;
    s4 = v0 + 0;
    v1 = 0 < s4;
    v0 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_089285B0; }
    goto L_08928798;
L_08928798:;
    a0 = LD32(s3+4);
    a1 = LD32(s2+12);
    v1 = LD32(a0+76);
    cnd_ = a1 == v1;
    v0 = LD32(s4+12);
    if (cnd_) { goto L_08928938; }
    goto L_089287AC;
L_089287AC:;
    cnd_ = v0 == v1;
    if (cnd_) { a1 = D_08AD9B30 - (-25808); goto L_089287C0; }
    goto L_089287B4;
L_089287B4:;
    cnd_ = a1 != v1;
    if (cnd_) { a0 = LD32(sp+8); goto L_089285B0; }
    goto L_089287BC;
L_089287BC:;
    a1 = D_08AD9B30 - (-25808);
    goto L_089287C0;
L_089287C0:;
    a1 = a1 - 25808;
    v0 = LD32(a1+4);
    v1 = LD32(a0+72);
    a1 = LD32(sp+112);
    s5 = 0 + 0;
    ST32(sp+36, v0);
    cnd_ = v1 != 0;
    ST32(sp+32, a1);
    if (cnd_) { goto L_08928848; }
    goto L_089287E0;
L_089287E0:;
    v1 = LD32(s2+12);
    goto L_089287E4;
L_089287E4:;
    v0 = D_08AED48C - (-11124);
    a0 = 4;
    cnd_ = v1 == a0;
    f0 = BITSF(LD32(v0-11124));
    if (cnd_) { goto L_0892883C; }
    goto L_089287F4;
L_089287F4:;
    v0 = LD32(s4+12);
    cnd_ = v0 == a0;
    if (cnd_) { ST32(sp+20, FBITS(f0)); goto L_08928840; }
    goto L_08928800;
L_08928800:;
    f1 = BITSF(LD32(s1+164));
    f0 = BITSF(LD32(sp+16));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+20)); goto L_08928824; }
    goto L_08928818;
L_08928818:;
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    goto L_089285AC;
L_08928824:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+20, FBITS(f1)); goto L_089285AC; }
    goto L_08928834;
L_08928834:;
    a0 = LD32(sp+8);
    goto L_089285B0;
L_0892883C:;
    ST32(sp+20, FBITS(f0));
    goto L_08928840;
L_08928840:;
    ST32(sp+16, FBITS(f0));
    goto L_089285AC;
L_08928848:;
    a1 = s5 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928850;
L_08928850:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08928870;
L_08928870:;
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+56, FBITS(f3));
    v0 = s0 + 88;
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    f6 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s0+88));
    f3 = f3 - f6;
    f2 = f2 - f4;
    f1 = f1 - f5;
    f8 = BITSF(LD32(sp+32));
    a1 = FBITS(f3);
    v1 = FBITS(f2);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f7 = BITSF(v0);
    ST32(sp+64, FBITS(f5));
    fcc = FCMP(f0, f8, 12);
    ST32(sp+68, FBITS(f4));
    ST32(sp+72, FBITS(f6));
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f3));
    if (cnd_) { goto L_0892891C; }
    goto L_089288F4;
L_089288F4:;
    ST32(sp+36, FBITS(f8));
    ST32(sp+32, v0);
    goto L_089288FC;
L_089288FC:;
    a0 = LD32(s3+4);
    goto L_08928900;
L_08928900:;
    s5 = s5 + 1;
    v0 = LD32(a0+72);
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08928848; }
    goto L_08928914;
L_08928914:;
    v1 = LD32(s2+12);
    goto L_089287E4;
L_0892891C:;
    f0 = BITSF(LD32(sp+36));
    fcc = FCMP(f7, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+36, v0); goto L_089288FC; }
    goto L_08928930;
L_08928930:;
    a0 = LD32(s3+4);
    goto L_08928900;
L_08928938:;
    cnd_ = v0 != a1;
    if (cnd_) { goto L_089287B4; }
    goto L_08928940;
L_08928940:;
    a0 = LD32(sp+8);
    goto L_089285B0;
L_08928948:;
    cnd_ = a1 == v0;
    if (cnd_) { a1 = v1 + 0; goto L_08928760; }
    goto L_08928950;
L_08928950:;
    v0 = LD32(s1+168);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_089285B0; }
    goto L_08928960;
L_08928960:;
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_0892896C;
L_0892896C:;
    a1 = LD32(s1+80);
    goto L_08928770;
L_08928974:;
    v1 = LD32(v0+8);
    ST32(a0+8, v1);
    goto L_0892854C;
}

/* 08928980 */
rv_t func_08928980(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_08928980:;
    sp = sp - 240;
    s4 = a0 + 0;
    s2 = a1 + 0;
    s7 = s2 << 2;
    s0 = D_08C2A43C - (-23492);
    s0 = s0 - 23492;
    s1 = s0 + 16;
    a0 = s1 + 0;
    v0 = LD32(s1+8);
    v0 = v0 + 1;
    ST32(s1+8, v0);
    f0 = func_08ABC074(a0, t1, t2, t3);
    goto L_089289E4;
L_089289E4:;
    v0 = LD32(s0+16);
    a0 = sp + 0;
    ST32(sp, s1);
    ST32(sp+4, v0);
    ST32(sp+8, 0);
    v0 = func_08ABC338(a0);
    goto L_089289FC;
L_089289FC:;
    a0 = LD32(sp+8);
    ST32(sp+16, 0);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_08928A64; }
    goto L_08928A0C;
L_08928A0C:;
    v0 = D_08AD9B30 - (-25808);
    v1 = LD32(v0-25808);
    a1 = D_08B1B510 - (-19184);
    ST32(sp+112, v1);
    v1 = a1 - 19184;
    s6 = s7 + v1;
    v1 = D_08C2BA28 - (-17880);
    fp = v1 - 17880;
    s1 = LD32(a0);
    goto L_08928A30;
L_08928A30:;
    a0 = sp + 0;
    v0 = func_08ABC338(a0);
    goto L_08928A38;
L_08928A38:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08928A5C; }
    goto L_08928A40;
L_08928A40:;
    v1 = LD32(s1+80);
    v0 = LD32(s6);
    cnd_ = v1 == v0;
    a1 = LD32(s1+84);
    if (cnd_) { goto L_08928F4C; }
    goto L_08928A50;
L_08928A50:;
    cnd_ = a1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08928D64; }
    goto L_08928A58;
L_08928A58:;
    a0 = LD32(sp+8);
    goto L_08928A5C;
L_08928A5C:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_08928A30; }
    goto L_08928A64;
L_08928A64:;
    v1 = D_08B1B510 - (-19184);
    v0 = v1 - 19184;
    v0 = s7 + v0;
    a1 = LD32(v0);
    v0 = D_08C2BA28 - (-17880);
    a0 = v0 - 17880;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_08928A84;
L_08928A84:;
    a0 = LD32(s4+8);
    s3 = v0 + 0;
    v0 = D_08AED49C - (-11108);
    v1 = LD32(a0+72);
    f21 = BITSF(LD32(v0-11108));
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08928B74; }
    goto L_08928AA0;
L_08928AA0:;
    v0 = D_08AED4A0 - (-11104);
    v1 = D_08AED4A8 - (-11096);
    f20 = BITSF(LD32(v0-11104));
    f22 = BITSF(LD32(v1-11096));
    s5 = D_08AED4A4 - (-11100);
    s6 = D_08AED494 - (-11116);
    goto L_08928AB8;
L_08928AB8:;
    a1 = s2 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928AC0;
L_08928AC0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08928B5C; }
    goto L_08928AC8;
L_08928AC8:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08928AE4;
L_08928AE4:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928AF0;
L_08928AF0:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    v1 = FBITS(f1);
    a1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+84, FBITS(f0));
    ST32(sp+80, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f4));
    if (cnd_) { goto L_08928D4C; }
    goto L_08928B58;
L_08928B58:;
    f21 = BITSF(LD32(s5-11100));
    goto L_08928B5C;
L_08928B5C:;
    a0 = LD32(s4+8);
    goto L_08928B60;
L_08928B60:;
    s2 = s2 + 1;
    v0 = LD32(a0+72);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08928AB8; }
    goto L_08928B74;
L_08928B74:;
    v1 = D_08C2A880 - (-22400);
    v1 = v1 - 22400;
    v0 = LD32(v1+8);
    s2 = sp + 96;
    a0 = s2 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    ST32(sp+96, v1);
    ST32(sp+100, 0);
    ST32(sp+104, 0);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928BA4;
L_08928BA4:;
    a2 = LD32(sp+104);
    cnd_ = a2 == 0;
    v0 = D_08AED4A0 - (-11104);
    if (cnd_) { goto L_08928BEC; }
    goto L_08928BB0;
L_08928BB0:;
    v1 = D_08AED4AC - (-11092);
    f20 = BITSF(LD32(v0-11104));
    f22 = BITSF(LD32(v1-11092));
    a1 = 1;
    goto L_08928BC0;
L_08928BC0:;
    a0 = s2 + 0;
    s1 = LD32(a2);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928BCC;
L_08928BCC:;
    v0 = LD32(s4+8);
    a1 = LD32(s1+12);
    v1 = LD32(v0+76);
    cnd_ = a1 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08928C90; }
    goto L_08928BE0;
L_08928BE0:;
    a2 = LD32(sp+104);
    goto L_08928BE4;
L_08928BE4:;
    cnd_ = a2 != 0;
    a1 = 1;
    if (cnd_) { goto L_08928BC0; }
    goto L_08928BEC;
L_08928BEC:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    a0 = LD32(sp+96);
    v0 = D_08AED4B0 - (-11088);
    f1 = f1 + f0;
    v1 = LD32(a0+8);
    f0 = BITSF(LD32(v0-11088));
    f1 = f21 * f1;
    v1 = v1 - 1;
    ST32(a0+8, v1);
    cnd_ = v1 == 0;
    f20 = f1 * f0;
    if (cnd_) { goto L_08928C80; }
    goto L_08928C1C;
L_08928C1C:;
    a0 = LD32(sp);
    goto L_08928C20;
L_08928C20:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08928C70; }
    goto L_08928C30;
L_08928C30:;
    f0 = f20;
    goto L_08928C34;
L_08928C34:;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_08928C70:;
    { u64 r_ = func_08ABC1B8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928C78;
L_08928C78:;
    f0 = f20;
    goto L_08928C34;
L_08928C80:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928C88;
L_08928C88:;
    a0 = LD32(sp);
    goto L_08928C20;
L_08928C90:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928C98;
L_08928C98:;
    cnd_ = v0 == 0;
    a2 = LD32(sp+104);
    if (cnd_) { goto L_08928BE4; }
    goto L_08928CA0;
L_08928CA0:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08928CBC;
L_08928CBC:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08928CDC;
L_08928CDC:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f4);
    a1 = FBITS(f1);
    v0 = FBITS(f0);
    {v[0]=BITSF(a1);}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+84, FBITS(f0));
    ST32(sp+80, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f4));
    if (cnd_) { goto L_08928BE0; }
    goto L_08928D44;
L_08928D44:;
    f21 = f21 * f22;
    goto L_08928BE0;
L_08928D4C:;
    fcc = FCMP(f0, f22, 12);
    cnd_ = fcc;
    if (cnd_) { f21 = BITSF(LD32(s6-11116)); goto L_08928B5C; }
    goto L_08928D5C;
L_08928D5C:;
    a0 = LD32(s4+8);
    goto L_08928B60;
L_08928D64:;
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_08928D70;
L_08928D70:;
    a1 = LD32(s1+84);
    goto L_08928D74;
L_08928D74:;
    s2 = v0 + 0;
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_08928D84;
L_08928D84:;
    s3 = v0 + 0;
    v1 = 0 < s3;
    v0 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08928A5C; }
    goto L_08928D9C;
L_08928D9C:;
    a0 = LD32(s4+8);
    a1 = LD32(s2+12);
    v1 = LD32(a0+76);
    cnd_ = a1 == v1;
    v0 = LD32(s3+12);
    if (cnd_) { goto L_08928F3C; }
    goto L_08928DB0;
L_08928DB0:;
    cnd_ = v0 == v1;
    if (cnd_) { a1 = D_08AD9B30 - (-25808); goto L_08928DC4; }
    goto L_08928DB8;
L_08928DB8:;
    cnd_ = a1 != v1;
    if (cnd_) { a0 = LD32(sp+8); goto L_08928A5C; }
    goto L_08928DC0;
L_08928DC0:;
    a1 = D_08AD9B30 - (-25808);
    goto L_08928DC4;
L_08928DC4:;
    a1 = a1 - 25808;
    v0 = LD32(a1+4);
    v1 = LD32(a0+72);
    a1 = LD32(sp+112);
    s5 = 0 + 0;
    ST32(sp+36, v0);
    cnd_ = v1 != 0;
    ST32(sp+32, a1);
    if (cnd_) { goto L_08928E4C; }
    goto L_08928DE4;
L_08928DE4:;
    v1 = LD32(s2+12);
    goto L_08928DE8;
L_08928DE8:;
    v0 = D_08AED498 - (-11112);
    a0 = 4;
    cnd_ = v1 == a0;
    f0 = BITSF(LD32(v0-11112));
    if (cnd_) { goto L_08928E40; }
    goto L_08928DF8;
L_08928DF8:;
    v0 = LD32(s3+12);
    cnd_ = v0 == a0;
    if (cnd_) { ST32(sp+20, FBITS(f0)); goto L_08928E44; }
    goto L_08928E04;
L_08928E04:;
    f1 = BITSF(LD32(s1+164));
    f0 = BITSF(LD32(sp+16));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+20)); goto L_08928E28; }
    goto L_08928E1C;
L_08928E1C:;
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    goto L_08928A58;
L_08928E28:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+20, FBITS(f1)); goto L_08928A58; }
    goto L_08928E38;
L_08928E38:;
    a0 = LD32(sp+8);
    goto L_08928A5C;
L_08928E40:;
    ST32(sp+20, FBITS(f0));
    goto L_08928E44;
L_08928E44:;
    ST32(sp+16, FBITS(f0));
    goto L_08928A58;
L_08928E4C:;
    a1 = s5 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08928E54;
L_08928E54:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08928E74;
L_08928E74:;
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+56, FBITS(f3));
    v0 = s0 + 88;
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    f6 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s0+88));
    f3 = f3 - f6;
    f2 = f2 - f4;
    f1 = f1 - f5;
    f8 = BITSF(LD32(sp+32));
    a1 = FBITS(f3);
    v1 = FBITS(f2);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f7 = BITSF(v0);
    ST32(sp+64, FBITS(f5));
    fcc = FCMP(f0, f8, 12);
    ST32(sp+68, FBITS(f4));
    ST32(sp+72, FBITS(f6));
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f3));
    if (cnd_) { goto L_08928F20; }
    goto L_08928EF8;
L_08928EF8:;
    ST32(sp+36, FBITS(f8));
    ST32(sp+32, v0);
    goto L_08928F00;
L_08928F00:;
    a0 = LD32(s4+8);
    goto L_08928F04;
L_08928F04:;
    s5 = s5 + 1;
    v0 = LD32(a0+72);
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08928E4C; }
    goto L_08928F18;
L_08928F18:;
    v1 = LD32(s2+12);
    goto L_08928DE8;
L_08928F20:;
    f0 = BITSF(LD32(sp+36));
    fcc = FCMP(f7, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+36, v0); goto L_08928F00; }
    goto L_08928F34;
L_08928F34:;
    a0 = LD32(s4+8);
    goto L_08928F04;
L_08928F3C:;
    cnd_ = v0 != a1;
    if (cnd_) { goto L_08928DB8; }
    goto L_08928F44;
L_08928F44:;
    a0 = LD32(sp+8);
    goto L_08928A5C;
L_08928F4C:;
    cnd_ = a1 == v0;
    if (cnd_) { a1 = v1 + 0; goto L_08928D64; }
    goto L_08928F54;
L_08928F54:;
    v0 = LD32(s1+168);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08928A5C; }
    goto L_08928F64;
L_08928F64:;
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08ABC6F8(a0, a1, a2);
    goto L_08928F70;
L_08928F70:;
    a1 = LD32(s1+80);
    goto L_08928D74;
}

/* 08928F78 */
rv_t func_08928F78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08928F78:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2539C - (21404);
    t1 = D_08C253AC - (21420);
    t2 = D_08C253BC - (21436);
    a1 = a1 & a0;
    v1 = t0 + 21404;
    a2 = t1 + 21420;
    cnd_ = a1 == 0;
    a3 = t2 + 21436;
    if (cnd_) { goto L_08929030; }
    goto L_08928FA8;
L_08928FA8:;
    v0 = D_08AED4B4 - (-11084);
    f4 = BITSF(LD32(v0-11084));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+21404, FBITS(f2));
    ST32(t1+21420, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+21436, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08929030;
L_08929030:;
    return (rv_t){ v0, v1, f0 };
}

/* 08929038 */
rv_t func_08929038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08929038:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08928F78(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892904C;
L_0892904C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08929058 */
void func_08929058(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08929058:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08925AD0(a0);
    goto L_0892906C;
L_0892906C:;
    v0 = D_08AED4BC - (-11076);
    f0 = BITSF(LD32(v0-11076));
    v0 = D_08AF83A0 - (-31840);
    v0 = v0 - 31840;
    ST32(s0+68, FBITS(f0));
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08929094 */
rv_t func_08929094(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08929094:;
    v0 = D_08AF83A0 - (-31840);
    v0 = v0 - 31840;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08925B18(a0);
    goto L_089290B0;
L_089290B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089290BC */
rv_t func_089290BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089290BC:;
    v0 = D_08AF83A0 - (-31840);
    v0 = v0 - 31840;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08925B18(a0);
    goto L_089290DC;
L_089290DC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089290E4;
L_089290E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089290F4 */
rv_t func_089290F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089290F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08925B28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929108;
L_08929108:;
    a0 = s0 + 0;
    { rv_t r_ = func_0892A9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929110;
L_08929110:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08929120 */
rv_t func_08929120(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08929120:;
    sp = sp - 144;
    v0 = D_08C29324 - (-27868);
    a1 = LD_U8(v0-27868);
    cnd_ = a1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089295C8; }
    goto L_08929168;
L_08929168:;
    t0 = LD32(a0+4);
    cnd_ = t0 == 0;
    if (cnd_) {  goto L_089295CC; }
    goto L_08929174;
L_08929174:;
    a3 = D_08C2BF38 - (-16584);
    v0 = a3 - 16584;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = a1 < a2;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089291EC; }
    goto L_089291A4;
L_089291A4:;
    a3 = LD32(a3-16584);
    goto L_089291A8;
L_089291A8:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_089291DC; }
    goto L_089291C0;
L_089291C0:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+196); goto L_089291F0; }
    goto L_089291D0;
L_089291D0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_089291C0; }
    goto L_089291DC;
L_089291DC:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_089291A8; }
    goto L_089291EC;
L_089291EC:;
    a0 = LD32(s1+196);
    goto L_089291F0;
L_089291F0:;
    t1 = LD32(s1+200);
    v1 = LD32(sp+8);
    v0 = 999;
    ST32(sp+48, a0);
    ST32(s1+196, v0);
    ST32(sp+52, t1);
    cnd_ = v1 == 0;
    ST32(s1+200, v0);
    if (cnd_) { goto L_089293F8; }
    goto L_08929210;
L_08929210:;
    v0 = s1 + 96;
    ST32(sp+56, v0);
    s7 = s1 + 84;
    fp = D_08C2A880 - (-22400);
    s0 = LD32(v1);
    goto L_08929224;
L_08929224:;
    a0 = sp + 0;
    a1 = 1;
    func_08ABC8D8(a0, a1);
    goto L_08929230;
L_08929230:;
    v0 = LD32(s0);
    t0 = LD32(s1+4);
    a1 = LD32(s0+12);
    a0 = LD32(v0-12);
    a2 = LD32(t0+76);
    t1 = s1 + 216;
    a0 = s0 + a0;
    v1 = LD32(a0);
    a1 = a1 ^ a2;
    t0 = s1 + 212;
    v0 = LD32(v1+20);
    a3 = s1 + 196;
    v1 = s1 + 220;
    a2 = s1 + 204;
    s5 = s1 + 217;
    s6 = s1 + 213;
    s2 = s1 + 200;
    s4 = s1 + 208;
    s3 = s1 + 224;
    if (a1 != 0) s3 = v1;
    if (a1 != 0) s5 = t1;
    if (a1 != 0) s6 = t0;
    if (a1 != 0) s2 = a3;
    t_ = v0;
    if (a1 != 0) s4 = a2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929294;
L_08929294:;
    t0 = LD32(s1+4);
    a0 = v0 + 0;
    v1 = LD32(s0+12);
    v0 = LD32(t0+76);
    cnd_ = v1 == v0;
    t1 = t0 + 0;
    if (cnd_) { goto L_08929A10; }
    goto L_089292AC;
L_089292AC:;
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    ST32(s7+8, FBITS(f0));
    ST32(s1+84, FBITS(f1));
    ST32(s7+4, FBITS(f2));
    goto L_089292C4;
L_089292C4:;
    v1 = LD32(s0);
    a0 = D_08B2858C - (-31348);
    f1 = BITSF(LD32(a0-31348));
    v0 = LD32(v1-16);
    f2 = BITSF(0);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s2, v1);
    f0 = BITSF(LD32(s0+84));
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f2; goto L_089292FC; }
    goto L_089292FC;
L_089292FC:;
    v0 = D_08AED4C0 - (-11072);
    f1 = BITSF(LD32(v0-11072));
    f2 = BITSF(F2I(f0, 1));
    fcc = FCMP(f1, f0, 14);
    v0 = FBITS(f2);
    cnd_ = !fcc;
    if (cnd_) { ST32(s3, v0); goto L_08929330; }
    goto L_08929318;
L_08929318:;
    f0 = f0 - f1;
    v1 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 | v1;
    ST32(s3, v0);
    goto L_08929330;
L_08929330:;
    a0 = 999;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a3 = LD32(v0+48);
    cnd_ = a3 == a0;
    v0 = fp - 22400;
    if (cnd_) { goto L_08929A04; }
    goto L_0892934C;
L_0892934C:;
    v1 = LD32(v0+4);
    a0 = LD32(fp-22400);
    v1 = v1 - 1;
    v1 = a3 & v1;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a1 = LD32(v1);
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0892939C; }
    goto L_08929370;
L_08929370:;
    a0 = LD32(a1);
    goto L_08929374;
L_08929374:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089299E4; }
    goto L_0892938C;
L_0892938C:;
    a1 = LD32(a1+4);
    goto L_08929390;
L_08929390:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08929374; }
    goto L_08929398;
L_08929398:;
    a2 = 0 + 0;
    goto L_0892939C;
L_0892939C:;
    cnd_ = a2 == 0;
    if (cnd_) { t1 = 999; goto L_089299D4; }
    goto L_089293A4;
L_089293A4:;
    a0 = LD32(a2);
    v1 = LD32(s4);
    v0 = LD32(a0-16);
    v0 = a2 + v0;
    a0 = LD32(v0+4);
    v1 = v1 ^ a0;
    v1 = 0 < v1;
    ST8(s5, v1);
    a0 = LD32(a2);
    v0 = LD32(a0-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s4, v1);
    v0 = LD32(a2+12);
    v1 = LD32(t1+76);
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    ST8(s6, v0);
    goto L_089293EC;
L_089293EC:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08929224; }
    goto L_089293F8;
L_089293F8:;
    v0 = LD32(s1+196);
    t1 = LD32(sp+48);
    ST32(s1+164, 0);
    a3 = D_08C2A08C - (-24436);
    a1 = a3 - 24436;
    ST32(s1+168, 0);
    v0 = v0 ^ t1;
    v0 = 0 < v0;
    ST32(s1+12, 0);
    s0 = sp + 16;
    v1 = LD32(s1+200);
    t1 = LD32(sp+52);
    a0 = LD32(a1+8);
    a2 = LD32(a1+4);
    v1 = v1 ^ t1;
    v1 = 0 < v1;
    a0 = a0 + 1;
    ST32(a1+8, a0);
    ST8(s1+214, v0);
    ST8(s1+215, v1);
    ST32(sp+16, a1);
    ST32(sp+20, 0);
    cnd_ = a2 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_089294A0; }
    goto L_08929458;
L_08929458:;
    a1 = LD32(a3-24436);
    goto L_0892945C;
L_0892945C:;
    a0 = LD32(s0+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s0+8, v1);
    if (cnd_) { goto L_08929490; }
    goto L_08929474;
L_08929474:;
    v1 = LD32(s0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_089294A4; }
    goto L_08929484;
L_08929484:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08929474; }
    goto L_08929490;
L_08929490:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_0892945C; }
    goto L_089294A0;
L_089294A0:;
    v0 = LD32(sp+24);
    goto L_089294A4;
L_089294A4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+12); goto L_08929500; }
    goto L_089294AC;
L_089294AC:;
    s2 = 3;
    v1 = LD32(v0);
    goto L_089294B4;
L_089294B4:;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089294E4; }
    goto L_089294BC;
L_089294BC:;
    v0 = LD32(v1+96);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+172); goto L_0892999C; }
    goto L_089294CC;
L_089294CC:;
    v0 = LD32(s1+4);
    a0 = LD32(v1+88);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s1+12); goto L_08929990; }
    goto L_089294E0;
L_089294E0:;
    a0 = s0 + 0;
    goto L_089294E4;
L_089294E4:;
    a1 = 1;
    { u64 r_ = func_08ABC97C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089294EC;
L_089294EC:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089294B4; }
    goto L_089294F8;
L_089294F8:;
    t0 = LD32(s1+4);
    v0 = LD32(s1+12);
    goto L_08929500;
L_08929500:;
    v1 = 5;
    ST32(s1+184, 0);
    v0 = v0 >> 2;
    v0 = v0 + 1;
    a0 = v0 < 0x6u;
    if (a0 == 0) v0 = v1;
    ST32(s1+180, v0);
    ST32(s1+188, 0);
    v0 = LD32(t0+72);
    cnd_ = v0 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0892962C; }
    goto L_0892952C;
L_0892952C:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892961C; }
    goto L_08929540;
L_08929540:;
    s1 = LD32(sp);
    goto L_08929544;
L_08929544:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089295C8; }
    goto L_08929554;
L_08929554:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089295C8; }
    goto L_08929560;
L_08929560:;
    v0 = LD32(s1);
    goto L_08929564;
L_08929564:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089295B8; }
    goto L_08929578;
L_08929578:;
    v0 = LD_U8(s0+8);
    goto L_0892957C;
L_0892957C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08929614; }
    goto L_08929584;
L_08929584:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08929604; }
    goto L_0892958C;
L_0892958C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08929594;
L_08929594:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089295A0;
L_089295A0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089295AC;
L_089295AC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892957C; }
    goto L_089295B4;
L_089295B4:;
    v1 = LD32(s1+4);
    goto L_089295B8;
L_089295B8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08929564; }
    goto L_089295C8;
L_089295C8:;
    goto L_089295CC;
L_089295CC:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_08929604:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08929594;
L_08929614:;
    s0 = LD32(s0+4);
    goto L_089295AC;
L_0892961C:;
    { u64 r_ = func_08ABCAA8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929624;
L_08929624:;
    s1 = LD32(sp);
    goto L_08929544;
L_0892962C:;
    f2 = BITSF(LD32(v0-31328));
    f21 = BITSF(0);
    f0 = BITSF(LD32(s1+72));
    f1 = BITSF(LD32(s1+76));
    v0 = 999;
    f0 = f0 + f2;
    fcc = FCMP(f21, f1, 12);
    ST32(s1+192, v0);
    s3 = 0 + 0;
    s5 = 0 + 0;
    ST32(s1+72, FBITS(f0));
    cnd_ = !fcc;
    f22 = f21;
    if (cnd_) { goto L_0892967C; }
    goto L_08929660;
L_08929660:;
    f0 = f1 - f2;
    v0 = LD32(s1+168);
    cnd_ = v0 != 0;
    ST32(s1+76, FBITS(f0));
    if (cnd_) { goto L_0892967C; }
    goto L_08929670;
L_08929670:;
    v0 = LD32(s1+164);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+76, FBITS(f21)); goto L_0892967C; }
    goto L_0892967C;
L_0892967C:;
    v0 = LD32(t0+72);
    a0 = t0 + 0;
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08929784; }
    goto L_0892968C;
L_0892968C:;
    v0 = D_08AED4C8 - (-11064);
    f0 = BITSF(LD32(s1+72));
    goto L_08929694;
L_08929694:;
    f1 = BITSF(LD32(v0-11064));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_089296BC; }
    goto L_089296A8;
L_089296A8:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(a0+8); goto L_089296C0; }
    goto L_089296B0;
L_089296B0:;
    v0 = 999;
    ST32(s1+192, v0);
    a0 = LD32(sp+16);
    goto L_089296BC;
L_089296BC:;
    v0 = LD32(a0+8);
    goto L_089296C0;
L_089296C0:;
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08929774; }
    goto L_089296CC;
L_089296CC:;
    s1 = LD32(sp);
    goto L_089296D0;
L_089296D0:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089295C8; }
    goto L_089296E0;
L_089296E0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089295C8; }
    goto L_089296EC;
L_089296EC:;
    v0 = LD32(s1);
    goto L_089296F0;
L_089296F0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08929744; }
    goto L_08929704;
L_08929704:;
    v0 = LD_U8(s0+8);
    goto L_08929708;
L_08929708:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892976C; }
    goto L_08929710;
L_08929710:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892975C; }
    goto L_08929718;
L_08929718:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08929720;
L_08929720:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892972C;
L_0892972C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08929738;
L_08929738:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08929708; }
    goto L_08929740;
L_08929740:;
    v1 = LD32(s1+4);
    goto L_08929744;
L_08929744:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089296F0; }
    goto L_08929754;
L_08929754:;
    goto L_089295CC;
L_0892975C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08929720;
L_0892976C:;
    s0 = LD32(s0+4);
    goto L_08929738;
L_08929774:;
    { u64 r_ = func_08ABCAA8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892977C;
L_0892977C:;
    s1 = LD32(sp);
    goto L_089296D0;
L_08929784:;
    a1 = s2 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892978C;
L_0892978C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089297C4; }
    goto L_08929794;
L_08929794:;
    a1 = LD32(v0+244);
    v0 = a1 < 0xdu;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_089297C8; }
    goto L_089297A4;
L_089297A4:;
    v1 = D_08AD9B38 - (-25800);
    v0 = a1 << 2;
    v1 = v1 - 25800;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089297C0u: goto L_089297C0; case 0x089297C4u: goto L_089297C4; case 0x089297E4u: goto L_089297E4; case 0x08929960u: goto L_08929960; case 0x08929968u: goto L_08929968; case 0x0892997Cu: goto L_0892997C; default: rs_break(0, 0x089297b8); }
L_089297C0:;
    ST32(s1+80, s0);
    goto L_089297C4;
L_089297C4:;
    a0 = LD32(s1+4);
    goto L_089297C8;
L_089297C8:;
    s2 = s2 + 1;
    v0 = LD32(a0+72);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    v0 = D_08AED4C8 - (-11064);
    if (cnd_) { goto L_08929784; }
    goto L_089297DC;
L_089297DC:;
    f0 = BITSF(LD32(s1+72));
    goto L_08929694;
L_089297E4:;
    v0 = 3;
    cnd_ = a1 == v0;
    v1 = LD32(s0+172);
    if (cnd_) { goto L_08929950; }
    goto L_089297F0;
L_089297F0:;
    v0 = LD32(s1+184);
    v0 = v0 + v1;
    ST32(s1+184, v0);
    goto L_089297FC;
L_089297FC:;
    v0 = D_08C29328 - (-27864);
    v1 = LD32(v0-27864);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(s0+43); goto L_0892981C; }
    goto L_08929810;
L_08929810:;
    cnd_ = a1 == v0;
    if (cnd_) { a0 = LD32(s1+4); goto L_089297C8; }
    goto L_08929818;
L_08929818:;
    v0 = LD_U8(s0+43);
    goto L_0892981C;
L_0892981C:;
    cnd_ = v0 != 0;
    v0 = s0 + 88;
    if (cnd_) { goto L_08929834; }
    goto L_08929824;
L_08929824:;
    v0 = 2;
    cnd_ = a1 == v0;
    if (cnd_) { ST32(s1+72, 0); goto L_08929830; }
    goto L_08929830;
L_08929830:;
    v0 = s0 + 88;
    goto L_08929834;
L_08929834:;
    v1 = s1 + 84;
    f0 = BITSF(LD32(s0+88));
    f3 = BITSF(LD32(s1+84));
    f2 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v1+4));
    f0 = f0 - f3;
    f2 = f2 - f5;
    f1 = f1 - f4;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = 3;
    v1 = FBITS(f1);
    a0 = FBITS(f2);
    {v[1]=BITSF(v1);}
    ST32(sp+32, FBITS(f0));
    {v[2]=BITSF(a0);}
    s4 = D_08AED4C4 - (-11068);
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+36, FBITS(f1));
    {t1=FBITS(v[0]);}
    f20 = BITSF(t1);
    cnd_ = a1 == v0;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_08929934; }
    goto L_0892989C;
L_0892989C:;
    v1 = LD32(s1+192);
    goto L_089298A0;
L_089298A0:;
    v0 = 999;
    cnd_ = v1 == v0;
    f0 = f22 - f20;
    if (cnd_) { goto L_089298FC; }
    goto L_089298AC;
L_089298AC:;
    f1 = BITSF(LD32(s4-11068));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s0+4); goto L_08929900; }
    goto L_089298C0;
L_089298C0:;
    f0 = f20 - f22;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+4); goto L_089297C8; }
    goto L_089298D4;
L_089298D4:;
    v0 = LD32(s0+172);
    v0 = v0 < s5;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_089297C8; }
    goto L_089298E4;
L_089298E4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0898D41C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089298EC;
L_089298EC:;
    fcc = FCMP(f21, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+4); goto L_089297C8; }
    goto L_089298FC;
L_089298FC:;
    v0 = LD32(s0+4);
    goto L_08929900;
L_08929900:;
    a0 = s0 + 0;
    f22 = f20;
    ST32(s1+192, v0);
    s5 = LD32(s0+172);
    { rv_t r_ = func_0898D41C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929914;
L_08929914:;
    f21 = f0;
    f0 = BITSF(LD32(s4-11068));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s3 = 1; goto L_089297C4; }
    goto L_0892992C;
L_0892992C:;
    a0 = LD32(s1+4);
    goto L_089297C8;
L_08929934:;
    f0 = BITSF(LD32(s4-11068));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s1+4); goto L_089297C8; }
    goto L_08929948;
L_08929948:;
    v1 = LD32(s1+192);
    goto L_089298A0;
L_08929950:;
    v0 = LD32(s1+188);
    v0 = v0 + v1;
    ST32(s1+188, v0);
    goto L_089297FC;
L_08929960:;
    ST32(s1+72, 0);
    s3 = 0 + 0;
    goto L_08929968;
L_08929968:;
    v1 = LD32(s0+172);
    v0 = LD32(s1+184);
    v0 = v0 + v1;
    ST32(s1+184, v0);
    goto L_089297C4;
L_0892997C:;
    v1 = LD32(s0+172);
    v0 = LD32(s1+188);
    v0 = v0 + v1;
    ST32(s1+188, v0);
    goto L_089297C4;
L_08929990:;
    v0 = v0 + 1;
    ST32(s1+12, v0);
    goto L_089294E0;
L_0892999C:;
    cnd_ = v0 != s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_089294E4; }
    goto L_089299A4;
L_089299A4:;
    v0 = LD32(s1+4);
    a0 = LD32(v1+88);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s1+168); goto L_089299C8; }
    goto L_089299B8;
L_089299B8:;
    v0 = LD32(s1+164);
    v0 = v0 + 1;
    ST32(s1+164, v0);
    goto L_089294E0;
L_089299C8:;
    v0 = v0 + 1;
    ST32(s1+168, v0);
    goto L_089299B8;
L_089299D4:;
    ST8(s5, 0);
    ST32(s4, t1);
    goto L_089299DC;
L_089299DC:;
    ST8(s6, 0);
    goto L_089293EC;
L_089299E4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08929390; }
    goto L_089299F0;
L_089299F0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_0892938C; }
    goto L_089299FC;
L_089299FC:;
    goto L_0892939C;
L_08929A04:;
    ST32(s4, a3);
    ST8(s5, 0);
    goto L_089299DC;
L_08929A10:;
    v1 = LD32(sp+56);
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    ST32(v1+8, FBITS(f0));
    ST32(s1+96, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    goto L_089292C4;
}

/* 08929A30 */
rv_t func_08929A30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08929A30:;
    sp = sp - 64;
    v0 = D_08C29324 - (-27868);
    a1 = LD_U8(v0-27868);
    cnd_ = a1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08929C8C; }
    goto L_08929A60;
L_08929A60:;
    a3 = D_08C2A880 - (-22400);
    v0 = a3 - 22400;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = a1 < a2;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08929AD8; }
    goto L_08929A90;
L_08929A90:;
    a3 = LD32(a3-22400);
    goto L_08929A94;
L_08929A94:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08929AC8; }
    goto L_08929AAC;
L_08929AAC:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929ADC; }
    goto L_08929ABC;
L_08929ABC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08929AAC; }
    goto L_08929AC8;
L_08929AC8:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08929A94; }
    goto L_08929AD8;
L_08929AD8:;
    v0 = LD32(sp+8);
    goto L_08929ADC;
L_08929ADC:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_08929B2C; }
    goto L_08929AE4;
L_08929AE4:;
    f20 = BITSF(0);
    s0 = LD32(v0);
    goto L_08929AEC;
L_08929AEC:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929AF8;
L_08929AF8:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929B00;
L_08929B00:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08929B20; }
    goto L_08929B0C;
L_08929B0C:;
    v0 = LD32(s0+200);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+224); goto L_08929BEC; }
    goto L_08929B1C;
L_08929B1C:;
    v0 = LD32(sp+8);
    goto L_08929B20;
L_08929B20:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08929AEC; }
    goto L_08929B28;
L_08929B28:;
    s1 = LD32(sp);
    goto L_08929B2C;
L_08929B2C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08929BB0; }
    goto L_08929B3C;
L_08929B3C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08929BB0; }
    goto L_08929B48;
L_08929B48:;
    v0 = LD32(s1);
    goto L_08929B4C;
L_08929B4C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08929BA0; }
    goto L_08929B60;
L_08929B60:;
    v0 = LD_U8(s0+8);
    goto L_08929B64;
L_08929B64:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08929BE4; }
    goto L_08929B6C;
L_08929B6C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08929BD4; }
    goto L_08929B74;
L_08929B74:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08929B7C;
L_08929B7C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929B88;
L_08929B88:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08929B94;
L_08929B94:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08929B64; }
    goto L_08929B9C;
L_08929B9C:;
    v1 = LD32(s1+4);
    goto L_08929BA0;
L_08929BA0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08929B4C; }
    goto L_08929BB0;
L_08929BB0:;
    goto L_08929BB4;
L_08929BB4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08929BD4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08929B7C;
L_08929BE4:;
    s0 = LD32(s0+4);
    goto L_08929B94;
L_08929BEC:;
    v0 = v0 ^ 0x3e7;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929BF8;
L_08929BF8:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929C04;
L_08929C04:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929C10;
L_08929C10:;
    v1 = LD32(v1+76);
    v0 = LD32(s0+12);
    cnd_ = v0 != v1;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929C20;
L_08929C20:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929C28;
L_08929C28:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929C30;
L_08929C30:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08929C38;
L_08929C38:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929C40;
L_08929C40:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929C4C;
L_08929C4C:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929C6C;
L_08929C6C:;
    v0 = LD_U8(s0+328);
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929B20; }
    goto L_08929C78;
L_08929C78:;
    v1 = 0 + 0;
    v0 = LD32(s0+200);
    v0 = (v0 & ~(0x1u << 5)) | ((v1 & 0x1) << 5);
    ST32(s0+200, v0);
    goto L_08929B1C;
L_08929C8C:;
    { rv_t r_ = func_08925E98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929C94;
L_08929C94:;
    goto L_08929BB4;
}

/* 08929C9C */
rv_t func_08929C9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08929C9C:;
    sp = sp - 64;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08929CD8; }
    goto L_08929CCC;
L_08929CCC:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a0+176, 0); goto L_08929CFC; }
    goto L_08929CD8;
L_08929CD8:;
    goto L_08929CDC;
L_08929CDC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08929CFC:;
    v1 = D_08C2A880 - (-22400);
    v1 = v1 - 22400;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    s2 = 0 + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929D2C;
L_08929D2C:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    s3 = 12;
    if (cnd_) { goto L_08929D78; }
    goto L_08929D38;
L_08929D38:;
    f20 = BITSF(0);
    s4 = 1;
    s0 = LD32(v0);
    goto L_08929D44;
L_08929D44:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929D50;
L_08929D50:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929D70; }
    goto L_08929D58;
L_08929D58:;
    v0 = LD32(s1+4);
    a0 = LD32(s0+12);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD_U8(s0+5); goto L_08929DB4; }
    goto L_08929D6C;
L_08929D6C:;
    v0 = LD32(sp+8);
    goto L_08929D70;
L_08929D70:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08929D44; }
    goto L_08929D78;
L_08929D78:;
    v0 = LD32(s1+176);
    v1 = LD32(s1+12);
    a0 = LD32(sp);
    v0 = s2 + v0;
    v1 = v1 - v0;
    ST32(s1+172, v1);
    v0 = LD32(a0+8);
    ST32(s1+80, 0);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08929CD8; }
    goto L_08929DA4;
L_08929DA4:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929DAC;
L_08929DAC:;
    goto L_08929CDC;
L_08929DB4:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929D70; }
    goto L_08929DBC;
L_08929DBC:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929D70; }
    goto L_08929DC8;
L_08929DC8:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929D70; }
    goto L_08929DE8;
L_08929DE8:;
    v0 = LD32(s0+200);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929D70; }
    goto L_08929DF8;
L_08929DF8:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08929E00;
L_08929E00:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929D70; }
    goto L_08929E08;
L_08929E08:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929E10;
L_08929E10:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08929D70; }
    goto L_08929E18;
L_08929E18:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08929E2C; }
    goto L_08929E24;
L_08929E24:;
    s2 = s2 + 1;
    goto L_08929D6C;
L_08929E2C:;
    v0 = LD32(v1+168);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929E38;
L_08929E38:;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08929EA4; }
    goto L_08929E40;
L_08929E40:;
    a0 = LD32(s1+80);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08929E88; }
    goto L_08929E4C;
L_08929E4C:;
    v0 = LD32(a0+172);
    v1 = LD32(s1+180);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08929E70; }
    goto L_08929E60;
L_08929E60:;
    v0 = LD32(s1+176);
    v0 = v0 + 1;
    ST32(s1+176, v0);
    goto L_08929D6C;
L_08929E70:;
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_0898D728(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08929E80;
L_08929E80:;
    v0 = LD32(sp+8);
    goto L_08929D70;
L_08929E88:;
    a0 = s1 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929E90;
L_08929E90:;
    ST32(s1+80, v0);
    cnd_ = v0 == 0;
    ST32(v0+244, s4);
    if (cnd_) { goto L_08929D6C; }
    goto L_08929E9C;
L_08929E9C:;
    s2 = s2 + 1;
    goto L_08929D6C;
L_08929EA4:;
    a0 = s1 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929EAC;
L_08929EAC:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+244, s3); goto L_08929D6C; }
    goto L_08929EB4;
L_08929EB4:;
    v0 = LD32(sp+8);
    goto L_08929D70;
}

/* 08929EBC */
rv_t func_08929EBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08929EBC:;
    sp = sp - 192;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08929F20; }
    goto L_08929F00;
L_08929F00:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+188, 0); goto L_08929F1C; }
    goto L_08929F0C;
L_08929F0C:;
    v0 = LD32(v0+72);
    cnd_ = v0 != 0;
    fp = 0 + 0;
    if (cnd_) { goto L_08929F58; }
    goto L_08929F18;
L_08929F18:;
    ST32(s1+188, 0);
    goto L_08929F1C;
L_08929F1C:;
    ST32(s1+184, 0);
    goto L_08929F20;
L_08929F20:;
    goto L_08929F24;
L_08929F24:;
    goto L_08929F28;
L_08929F28:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_08929F58:;
    f20 = BITSF(0);
    ST32(sp+32, 0);
    f21 = f20;
    s7 = 0 + 0;
    ST32(sp+36, 0);
    cnd_ = v0 != 0;
    ST32(sp+40, 0);
    if (cnd_) { goto L_0892A054; }
    goto L_08929F74;
L_08929F74:;
    v0 = LD_U8(s1+215);
    goto L_08929F78;
L_08929F78:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+214); goto L_08929FD4; }
    goto L_08929F80;
L_08929F80:;
    v1 = LD32(sp+40);
    cnd_ = v1 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08929FA0; }
    goto L_08929F8C;
L_08929F8C:;
    a2 = LD32(s1+184);
    a3 = LD32(s1+188);
    a2 = a2 - 1;
    a0 = s1 + 0;
    { rv_t r_ = func_08ABC7FC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929FA0;
L_08929FA0:;
    cnd_ = fp == 0;
    a0 = LD32(sp+32);
    if (cnd_) { goto L_08929FD0; }
    goto L_08929FA8;
L_08929FA8:;
    v0 = a0 ^ fp;
    v0 = 0 < v0;
    v1 = 0 < a0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_08929FCC; }
    goto L_08929FC0;
L_08929FC0:;
    v0 = 2;
    ST32(a0+244, v0);
    v0 = 3;
    goto L_08929FCC;
L_08929FCC:;
    ST32(fp+244, v0);
    goto L_08929FD0;
L_08929FD0:;
    v0 = LD_U8(s1+214);
    goto L_08929FD4;
L_08929FD4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08929F24; }
    goto L_08929FDC;
L_08929FDC:;
    a1 = LD32(sp+36);
    cnd_ = a1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08929FF8; }
    goto L_08929FE8;
L_08929FE8:;
    a2 = LD32(s1+184);
    a3 = LD32(s1+188);
    a2 = a2 - 1;
    { rv_t r_ = func_08ABC7FC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08929FF8;
L_08929FF8:;
    v0 = D_08C29328 - (-27864);
    a0 = LD32(v0-27864);
    v1 = 1;
    cnd_ = a0 != v1;
    if (cnd_) { goto L_08929F24; }
    goto L_0892A00C;
L_0892A00C:;
    cnd_ = fp == 0;
    if (cnd_) {  goto L_08929F28; }
    goto L_0892A014;
L_0892A014:;
    a0 = LD32(fp+244);
    v0 = 3;
    cnd_ = a0 == v0;
    v1 = LD32(sp+32);
    if (cnd_) { goto L_0892A030; }
    goto L_0892A024;
L_0892A024:;
    v0 = 2;
    goto L_0892A028;
L_0892A028:;
    ST32(fp+244, v0);
    goto L_08929F20;
L_0892A030:;
    v0 = v1 ^ fp;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 2; goto L_0892A028; }
    goto L_0892A048;
L_0892A048:;
    a1 = LD32(sp+32);
    ST32(a1+244, a0);
    goto L_0892A024;
L_0892A054:;
    a0 = LD32(s1+4);
    goto L_0892A058;
L_0892A058:;
    a1 = s7 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892A060;
L_0892A060:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0892A278; }
    goto L_0892A068;
L_0892A068:;
    a1 = LD_U8(s1+214);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD_U8(s1+215); goto L_0892A08C; }
    goto L_0892A074;
L_0892A074:;
    v0 = D_08C29328 - (-27864);
    a0 = LD32(v0-27864);
    v1 = 1;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_0892A0A4; }
    goto L_0892A088;
L_0892A088:;
    v0 = LD_U8(s1+215);
    goto L_0892A08C;
L_0892A08C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+216); goto L_0892A154; }
    goto L_0892A094;
L_0892A094:;
    v1 = LD32(s3+244);
    v0 = 8;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(s1+216); goto L_0892A154; }
    goto L_0892A0A4;
L_0892A0A4:;
    cnd_ = a1 != 0;
    v0 = s1 + 84;
    if (cnd_) { goto L_0892A0B0; }
    goto L_0892A0AC;
L_0892A0AC:;
    v0 = s1 + 96;
    goto L_0892A0B0;
L_0892A0B0:;
    a0 = s3 + 88;
    f2 = BITSF(LD32(a0+8));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s3+88));
    f2 = f2 - f5;
    f1 = f1 - f4;
    f0 = f0 - f3;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = FBITS(f2);
    v1 = FBITS(f1);
    v0 = FBITS(f0);
    ST32(sp, FBITS(f0));
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    ST32(sp+4, FBITS(f1));
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+8, FBITS(f2));
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    cnd_ = fp == 0;
    if (cnd_) { fp = s3 + 0; goto L_0892A128; }
    goto L_0892A114;
L_0892A114:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_0892A130; }
    goto L_0892A124;
L_0892A124:;
    fp = s3 + 0;
    goto L_0892A128;
L_0892A128:;
    f21 = f0;
    v0 = LD32(sp+32);
    goto L_0892A130;
L_0892A130:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp+32, s3); goto L_0892A14C; }
    goto L_0892A138;
L_0892A138:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s1+216); goto L_0892A154; }
    goto L_0892A148;
L_0892A148:;
    ST32(sp+32, s3);
    goto L_0892A14C;
L_0892A14C:;
    f20 = f0;
    v0 = LD_U8(s1+216);
    goto L_0892A154;
L_0892A154:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+217); goto L_0892A16C; }
    goto L_0892A15C;
L_0892A15C:;
    v0 = LD_U8(s1+212);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s3+172); goto L_0892A184; }
    goto L_0892A168;
L_0892A168:;
    v0 = LD_U8(s1+217);
    goto L_0892A16C;
L_0892A16C:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s3+244); goto L_0892A1C4; }
    goto L_0892A174;
L_0892A174:;
    v0 = LD_U8(s1+213);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s3+244); goto L_0892A1C4; }
    goto L_0892A180;
L_0892A180:;
    a0 = LD32(s3+172);
    goto L_0892A184;
L_0892A184:;
    cnd_ = a0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0892A1C0; }
    goto L_0892A18C;
L_0892A18C:;
    s6 = D_08C2A880 - (-22400);
    s0 = s3 + 152;
    goto L_0892A194;
L_0892A194:;
    a1 = LD32(s0);
    v1 = LD32(s1+204);
    cnd_ = a1 == v1;
    v0 = a1 ^ v1;
    if (cnd_) { goto L_0892A804; }
    goto L_0892A1A4;
L_0892A1A4:;
    v0 = LD32(s1+208);
    cnd_ = a1 == v0;
    v0 = a1 ^ v1;
    if (cnd_) { goto L_0892A804; }
    goto L_0892A1B0;
L_0892A1B0:;
    s4 = s4 + 1;
    v0 = s4 < a0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0892A194; }
    goto L_0892A1C0;
L_0892A1C0:;
    s0 = LD32(s3+244);
    goto L_0892A1C4;
L_0892A1C4:;
    v0 = s0 < 0xdu;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+4); goto L_0892A200; }
    goto L_0892A1D0;
L_0892A1D0:;
    v1 = D_08AD9B6C - (-25748);
    v0 = s0 << 2;
    v1 = v1 - 25748;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0892A1ECu: goto L_0892A1EC; case 0x0892A278u: goto L_0892A278; case 0x0892A29Cu: goto L_0892A29C; case 0x0892A2F4u: goto L_0892A2F4; case 0x0892A508u: goto L_0892A508; case 0x0892A5DCu: goto L_0892A5DC; case 0x0892A62Cu: goto L_0892A62C; case 0x0892A7F0u: goto L_0892A7F0; default: rs_break(0, 0x0892a1e4); }
L_0892A1EC:;
    v1 = LD32(s1+4);
    v0 = LD32(v1+72);
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+172); goto L_0892A21C; }
    goto L_0892A200;
L_0892A200:;
    v0 = LD32(v1+72);
    s7 = s7 + 1;
    v0 = s7 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0892A058; }
    goto L_0892A214;
L_0892A214:;
    v0 = LD_U8(s1+215);
    goto L_08929F78;
L_0892A21C:;
    v1 = LD32(s1+180);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s1+184); goto L_0892A268; }
    goto L_0892A22C;
L_0892A22C:;
    v0 = LD32(s1+176);
    cnd_ = v0 != 0;
    a3 = s3 + 88;
    if (cnd_) { goto L_0892A280; }
    goto L_0892A238;
L_0892A238:;
    { rv_t r_ = func_08973960(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892A240;
L_0892A240:;
    v0 = D_08AED4CC - (-11060);
    f1 = BITSF(LD32(v0-11060));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a2 = LD32(s1+184); goto L_0892A268; }
    goto L_0892A258;
L_0892A258:;
    v0 = LD32(s1+172);
    cnd_ = v0 != 0;
    a3 = s3 + 88;
    if (cnd_) { goto L_0892A280; }
    goto L_0892A264;
L_0892A264:;
    a2 = LD32(s1+184);
    goto L_0892A268;
L_0892A268:;
    a3 = LD32(s1+188);
    a1 = s3 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08ABC7FC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892A278;
L_0892A278:;
    v1 = LD32(s1+4);
    goto L_0892A200;
L_0892A280:;
    a0 = s3 + 0;
    a1 = 1015;
    goto L_0892A288;
L_0892A288:;
    a2 = 999;
    goto L_0892A28C;
L_0892A28C:;
    f0 = func_08ABC78C(a0, a1, a2, a3);
    goto L_0892A294;
L_0892A294:;
    v1 = LD32(s1+4);
    goto L_0892A200;
L_0892A29C:;
    v1 = LD32(s1+204);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s3+4); goto L_0892A2CC; }
    goto L_0892A2AC;
L_0892A2AC:;
    v0 = LD_U8(s1+212);
    cnd_ = v0 == 0;
    v1 = LD32(s1+4);
    if (cnd_) { goto L_0892A2C4; }
    goto L_0892A2B8;
L_0892A2B8:;
    v0 = 6;
    goto L_0892A2BC;
L_0892A2BC:;
    ST32(s3+244, v0);
    goto L_0892A200;
L_0892A2C4:;
    v0 = 10;
    goto L_0892A2BC;
L_0892A2CC:;
    v0 = LD32(s1+192);
    cnd_ = v1 == v0;
    a3 = s1 + 108;
    if (cnd_) { goto L_0892A2E8; }
    goto L_0892A2D8;
L_0892A2D8:;
    a2 = LD32(s1+196);
    a0 = s3 + 0;
    a1 = 1011;
    goto L_0892A28C;
L_0892A2E8:;
    v1 = LD32(s1+4);
    goto L_0892A2EC;
L_0892A2EC:;
    v0 = 4;
    goto L_0892A2BC;
L_0892A2F4:;
    a0 = LD32(s1+208);
    v0 = 999;
    cnd_ = a0 == v0;
    a1 = D_08C29328 - (-27864);
    if (cnd_) { goto L_0892A31C; }
    goto L_0892A304;
L_0892A304:;
    v0 = LD_U8(s1+213);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a1-27864); goto L_0892A320; }
    goto L_0892A310;
L_0892A310:;
    v1 = LD32(s1+4);
    v0 = 11;
    goto L_0892A2BC;
L_0892A31C:;
    v1 = LD32(a1-27864);
    goto L_0892A320;
L_0892A320:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 999;
    if (cnd_) { goto L_0892A4DC; }
    goto L_0892A32C;
L_0892A32C:;
    v1 = LD32(a1-27864);
    goto L_0892A330;
L_0892A330:;
    v0 = 3;
    goto L_0892A334;
L_0892A334:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s3+4); goto L_0892A4C8; }
    goto L_0892A33C;
L_0892A33C:;
    v0 = s1 + 96;
    goto L_0892A340;
L_0892A340:;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+96));
    v1 = LD32(a1-27864);
    v0 = 1;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    cnd_ = v1 == v0;
    a2 = LD32(s1+200);
    if (cnd_) { goto L_0892A4A8; }
    goto L_0892A368;
L_0892A368:;
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = s3 + 88;
    if (cnd_) { goto L_0892A470; }
    goto L_0892A374;
L_0892A374:;
    v1 = LD32(s3+76);
    goto L_0892A378;
L_0892A378:;
    v0 = 1015;
    cnd_ = v1 == v0;
    f3 = BITSF(LD32(sp));
    if (cnd_) { goto L_0892A404; }
    goto L_0892A384;
L_0892A384:;
    f4 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(s3+88));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 - f0;
    f2 = f2 - f4;
    f1 = f1 - f5;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f3);
    a0 = FBITS(f2);
    {v[0]=BITSF(v1);}
    a1 = FBITS(f1);
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AED4D4 - (-11052);
    f0 = BITSF(LD32(v0-11052));
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f4, f0, 12);
    ST32(sp+20, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f1));
    if (cnd_) { goto L_0892A3F8; }
    goto L_0892A3E8;
L_0892A3E8:;
    a0 = s3 + 0;
    goto L_0892A3EC;
L_0892A3EC:;
    a1 = 1015;
    goto L_0892A3F0;
L_0892A3F0:;
    a3 = sp + 0;
    goto L_0892A28C;
L_0892A3F8:;
    a0 = s3 + 0;
    a1 = 1012;
    goto L_0892A3F0;
L_0892A404:;
    f4 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(s3+88));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 - f0;
    f2 = f2 - f4;
    f1 = f1 - f5;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f3);
    a0 = FBITS(f2);
    {v[0]=BITSF(v1);}
    a1 = FBITS(f1);
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AED4D0 - (-11056);
    f0 = BITSF(LD32(v0-11056));
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f4, 12);
    ST32(sp+20, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f1));
    if (cnd_) { goto L_0892A3F8; }
    goto L_0892A468;
L_0892A468:;
    a0 = s3 + 0;
    goto L_0892A3EC;
L_0892A470:;
    f1 = BITSF(LD32(s1+76));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s3+76); goto L_0892A378; }
    goto L_0892A488;
L_0892A488:;
    f0 = BITSF(LD32(s3+88));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(sp, FBITS(f0));
    a2 = 999;
    goto L_0892A49C;
L_0892A49C:;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    goto L_0892A374;
L_0892A4A8:;
    v0 = s1 + 108;
    f0 = BITSF(LD32(s1+108));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    a2 = 999;
    a0 = s3 + 88;
    ST32(sp, FBITS(f0));
    goto L_0892A49C;
L_0892A4C8:;
    v0 = LD32(s1+192);
    cnd_ = v1 != v0;
    if (cnd_) { v0 = s1 + 96; goto L_0892A340; }
    goto L_0892A4D4;
L_0892A4D4:;
    v1 = LD32(s1+4);
    goto L_0892A2EC;
L_0892A4DC:;
    cnd_ = a0 != v0;
    v1 = LD32(a1-27864);
    if (cnd_) { goto L_0892A330; }
    goto L_0892A4E4;
L_0892A4E4:;
    f1 = BITSF(LD32(s1+76));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 3; goto L_0892A334; }
    goto L_0892A4FC;
L_0892A4FC:;
    v1 = LD32(s1+4);
    goto L_0892A500;
L_0892A500:;
    v0 = 5;
    goto L_0892A2BC;
L_0892A508:;
    v0 = 4;
    v1 = LD32(s1+208);
    a0 = LD_U8(s1+213);
    t0 = 7;
    a3 = 11;
    a2 = LD32(s1+200);
    cnd_ = s0 == v0;
    a1 = LD32(s1+224);
    if (cnd_) { goto L_0892A5C0; }
    goto L_0892A528;
L_0892A528:;
    v0 = 999;
    cnd_ = v1 == v0;
    v0 = D_08C29328 - (-27864);
    if (cnd_) { goto L_0892A54C; }
    goto L_0892A534;
L_0892A534:;
    cnd_ = a0 == 0;
    v1 = LD32(s1+4);
    if (cnd_) { goto L_0892A544; }
    goto L_0892A53C;
L_0892A53C:;
    ST32(s3+244, t0);
    goto L_0892A200;
L_0892A544:;
    ST32(s3+244, a3);
    goto L_0892A200;
L_0892A54C:;
    a0 = LD32(v0-27864);
    v1 = 3;
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s1+168); goto L_0892A570; }
    goto L_0892A55C;
L_0892A55C:;
    a3 = D_08B45A9C - (23196);
    goto L_0892A560;
L_0892A560:;
    a0 = s3 + 0;
    a3 = a3 + 23196;
    a1 = 1012;
    goto L_0892A28C;
L_0892A570:;
    cnd_ = v0 == 0;
    a3 = D_08B45A9C - (23196);
    if (cnd_) { goto L_0892A560; }
    goto L_0892A578;
L_0892A578:;
    f0 = BITSF(a1);
    cnd_ = (s32)a1 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_0892A5A4; }
    goto L_0892A584;
L_0892A584:;
    v0 = D_08AED4D8 - (-11048);
    f0 = BITSF(LD32(v0-11048));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = D_08B45A9C - (23196); goto L_0892A560; }
    goto L_0892A59C;
L_0892A59C:;
    a3 = s3 + 88;
    goto L_0892A280;
L_0892A5A4:;
    v1 = a1 >> 1;
    v0 = a1 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_0892A584;
L_0892A5C0:;
    v1 = LD32(s1+204);
    a0 = LD_U8(s1+212);
    a2 = LD32(s1+196);
    a1 = LD32(s1+220);
    t0 = 6;
    a3 = 10;
    goto L_0892A528;
L_0892A5DC:;
    a3 = s1 + 144;
    a0 = s3 + 0;
    a1 = 1012;
    a2 = 999;
    f0 = func_08ABC78C(a0, a1, a2, a3);
    goto L_0892A5F0;
L_0892A5F0:;
    v0 = LD_U8(s1+214);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+215); goto L_0892A610; }
    goto L_0892A5FC;
L_0892A5FC:;
    v1 = LD32(sp+36);
    v0 = s0 ^ 0x8;
    if (v0 == 0) v1 = s3;
    ST32(sp+36, v1);
    v0 = LD_U8(s1+215);
    goto L_0892A610;
L_0892A610:;
    cnd_ = v0 == 0;
    v1 = LD32(s1+4);
    if (cnd_) { goto L_0892A200; }
    goto L_0892A618;
L_0892A618:;
    v0 = 9;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_0892A200; }
    goto L_0892A624;
L_0892A624:;
    ST32(sp+40, s3);
    goto L_0892A200;
L_0892A62C:;
    v0 = s1 + 96;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+96));
    v1 = s0 ^ 0x6;
    v0 = s0 ^ 0xa;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    ST32(sp+16, FBITS(f0));
    a1 = 1;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    cnd_ = v1 == 0;
    a2 = LD32(s1+208);
    if (cnd_) { goto L_0892A68C; }
    goto L_0892A668;
L_0892A668:;
    v0 = s1 + 84;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s1+84));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+24, FBITS(f0));
    a1 = 0 + 0;
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    a2 = LD32(s1+204);
    goto L_0892A68C;
L_0892A68C:;
    v0 = s0 - 10;
    v1 = 999;
    cnd_ = a2 == v1;
    a0 = v0 < 0x2u;
    if (cnd_) { goto L_0892A7AC; }
    goto L_0892A69C;
L_0892A69C:;
    v0 = LD32(s3+76);
    a1 = 1008;
    cnd_ = v0 == a1;
    v1 = 1015;
    if (cnd_) { goto L_0892A730; }
    goto L_0892A6AC;
L_0892A6AC:;
    cnd_ = v0 == v1;
    v0 = s3 + 88;
    if (cnd_) { goto L_0892A730; }
    goto L_0892A6B4;
L_0892A6B4:;
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s3+88));
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f3 = f3 - f0;
    f2 = f2 - f4;
    f1 = f1 - f5;
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AED4D4 - (-11052);
    f0 = BITSF(LD32(v0-11052));
    ST32(sp, FBITS(f3));
    fcc = FCMP(f4, f0, 12);
    ST32(sp+4, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f1));
    if (cnd_) { goto L_0892A55C; }
    goto L_0892A71C;
L_0892A71C:;
    if (a0 == 0) a1 = v1;
    goto L_0892A720;
L_0892A720:;
    a3 = D_08B45A9C - (23196);
    a0 = s3 + 0;
    a3 = a3 + 23196;
    goto L_0892A28C;
L_0892A730:;
    v0 = s3 + 88;
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s3+88));
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f3 = f3 - f0;
    f2 = f2 - f4;
    f1 = f1 - f5;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    v1 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    v0 = D_08AED4D0 - (-11056);
    f0 = BITSF(LD32(v0-11056));
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f4 = BITSF(v1);
    v0 = 1015;
    if (a0 == 0) a1 = v0;
    fcc = FCMP(f0, f4, 12);
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f1));
    if (cnd_) { goto L_0892A720; }
    goto L_0892A7A4;
L_0892A7A4:;
    a3 = D_08B45A9C - (23196);
    goto L_0892A560;
L_0892A7AC:;
    v0 = D_08C29328 - (-27864);
    a0 = LD32(v0-27864);
    v1 = 3;
    cnd_ = a0 == v1;
    v0 = 11;
    if (cnd_) { goto L_0892A7E0; }
    goto L_0892A7C0;
L_0892A7C0:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = D_08AD9BA0 - (-25696); goto L_0892A7D8; }
    goto L_0892A7C8;
L_0892A7C8:;
    v0 = D_08AD9BA4 - (-25692);
    v0 = LD32(v0-25692);
    goto L_0892A7D0;
L_0892A7D0:;
    v1 = LD32(s1+4);
    goto L_0892A2BC;
L_0892A7D8:;
    v0 = LD32(v0-25696);
    goto L_0892A7D0;
L_0892A7E0:;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_0892A7C0; }
    goto L_0892A7E8;
L_0892A7E8:;
    v1 = LD32(s1+4);
    goto L_0892A500;
L_0892A7F0:;
    a3 = D_08B45A9C - (23196);
    a0 = s3 + 0;
    a3 = a3 + 23196;
    a1 = 1017;
    goto L_0892A288;
L_0892A804:;
    a0 = s6 - 22400;
    a2 = 1;
    s5 = v0 < 0x1u;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892A814;
L_0892A814:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0892A8A0; }
    goto L_0892A81C;
L_0892A81C:;
    v0 = LD32(s3+172);
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    s0 = s3 + 0;
    if (cnd_) { goto L_0892A874; }
    goto L_0892A82C;
L_0892A82C:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0892A840; }
    goto L_0892A834;
L_0892A834:;
    cnd_ = s5 == 0;
    v0 = 8;
    if (cnd_) { goto L_0892A850; }
    goto L_0892A83C;
L_0892A83C:;
    ST32(s0+244, v0);
    goto L_0892A840;
L_0892A840:;
    cnd_ = s5 != 0;
    if (cnd_) { ST8(s1+216, 0); goto L_0892A1C0; }
    goto L_0892A848;
L_0892A848:;
    ST8(s1+217, 0);
    goto L_0892A1C0;
L_0892A850:;
    v1 = LD32(s2);
    v0 = LD32(v1+168);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892A860;
L_0892A860:;
    a0 = 12;
    v1 = 9;
    if (v0 == 0) a0 = v1;
    ST32(s0+244, a0);
    goto L_0892A840;
L_0892A874:;
    v0 = LD32(s2);
    a0 = s3 + 0;
    v1 = LD32(v0-16);
    v1 = s2 + v1;
    a1 = LD32(v1+4);
    { rv_t r_ = func_0898D7A8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892A88C;
L_0892A88C:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892A898;
L_0892A898:;
    s0 = v0 + 0;
    goto L_0892A82C;
L_0892A8A0:;
    a0 = LD32(s3+172);
    goto L_0892A1B0;
}

/* 0892A8A8 */
float func_0892A8A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0892A8A8:;
    v0 = D_08AED4DC - (-11044);
    f0 = BITSF(LD32(v0-11044));
    ST32(a0+72, 0);
    a1 = D_08B45A9C - (23196);
    v1 = a1 + 23196;
    ST32(a0+76, FBITS(f0));
    v0 = a0 + 84;
    a3 = a0 + 96;
    f0 = BITSF(LD32(a1+23196));
    f2 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    ST32(a0+84, FBITS(f0));
    t0 = a0 + 108;
    t1 = a0 + 120;
    ST32(v0+8, FBITS(f1));
    t2 = a0 + 132;
    a2 = 999;
    ST32(v0+4, FBITS(f2));
    t3 = a0 + 144;
    f1 = BITSF(LD32(a1+23196));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    ST32(a0+96, FBITS(f1));
    ST32(a3+4, FBITS(f2));
    ST32(a3+8, FBITS(f0));
    f1 = BITSF(LD32(a1+23196));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    ST32(a0+108, FBITS(f1));
    ST32(t0+4, FBITS(f2));
    ST32(t0+8, FBITS(f0));
    f1 = BITSF(LD32(a1+23196));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    ST32(a0+120, FBITS(f1));
    ST32(t1+4, FBITS(f2));
    ST32(t1+8, FBITS(f0));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a1+23196));
    f2 = BITSF(LD32(v1+8));
    ST32(t2+4, FBITS(f1));
    ST32(a0+132, FBITS(f0));
    ST32(a0+80, 0);
    ST32(t2+8, FBITS(f2));
    f0 = BITSF(LD32(a1+23196));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(a0+144, FBITS(f0));
    ST32(t3+8, FBITS(f1));
    ST32(t3+4, FBITS(f2));
    ST32(a0+208, a2);
    ST32(a0+224, 0);
    ST32(a0+156, 0);
    ST32(a0+160, 0);
    ST32(a0+168, 0);
    ST32(a0+164, 0);
    ST32(a0+12, 0);
    ST32(a0+172, 0);
    ST32(a0+176, 0);
    ST32(a0+180, 0);
    ST32(a0+184, 0);
    ST32(a0+188, 0);
    ST32(a0+192, a2);
    ST32(a0+196, a2);
    ST32(a0+200, a2);
    ST32(a0+204, a2);
    ST8(a0+212, 0);
    ST8(a0+213, 0);
    ST8(a0+214, 0);
    ST8(a0+215, 0);
    ST8(a0+216, 0);
    ST8(a0+217, 0);
    ST32(a0+220, 0);
    return f0;
}

/* 0892A9D0 */
rv_t func_0892A9D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0892A9D0:;
    sp = sp - 80;
    v0 = D_08C29324 - (-27868);
    s0 = LD_U8(v0-27868);
    cnd_ = s0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_0892AA14; }
    goto L_0892AA08;
L_0892AA08:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892AA40; }
    goto L_0892AA14;
L_0892AA14:;
    goto L_0892AA18;
L_0892AA18:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0892AA40:;
    f0 = func_0892A8A8(a0);
    goto L_0892AA48;
L_0892AA48:;
    a3 = D_08C2BAF8 - (-17672);
    v0 = a3 - 17672;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = s0 < a2;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0892AAC0; }
    goto L_0892AA78;
L_0892AA78:;
    a3 = LD32(a3-17672);
    goto L_0892AA7C;
L_0892AA7C:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_0892AAB0; }
    goto L_0892AA94;
L_0892AA94:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892AAC4; }
    goto L_0892AAA4;
L_0892AAA4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_0892AA94; }
    goto L_0892AAB0;
L_0892AAB0:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_0892AA7C; }
    goto L_0892AAC0;
L_0892AAC0:;
    v0 = LD32(sp+8);
    goto L_0892AAC4;
L_0892AAC4:;
    cnd_ = v0 == 0;
    s2 = s3 + 132;
    if (cnd_) { goto L_0892AB10; }
    goto L_0892AACC;
L_0892AACC:;
    s4 = s3 + 144;
    s5 = 2;
    s1 = LD32(v0);
    goto L_0892AAD8;
L_0892AAD8:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABCB74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892AAE4;
L_0892AAE4:;
    cnd_ = s1 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892AB08; }
    goto L_0892AAEC;
L_0892AAEC:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892AB08; }
    goto L_0892AAF8;
L_0892AAF8:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_0892AD64; }
    goto L_0892AB04;
L_0892AB04:;
    v0 = LD32(sp+8);
    goto L_0892AB08;
L_0892AB08:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_0892AAD8; }
    goto L_0892AB10;
L_0892AB10:;
    a1 = D_08C2BB38 - (-17608);
    v0 = a1 - 17608;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    s2 = sp + 16;
    ST32(v0+8, v1);
    ST32(sp+24, 0);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_0892AB88; }
    goto L_0892AB3C;
L_0892AB3C:;
    a1 = LD32(a1-17608);
    a2 = a0 + 0;
    goto L_0892AB44;
L_0892AB44:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_0892AB78; }
    goto L_0892AB5C;
L_0892AB5C:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_0892AB8C; }
    goto L_0892AB6C;
L_0892AB6C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_0892AB5C; }
    goto L_0892AB78;
L_0892AB78:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_0892AB44; }
    goto L_0892AB88;
L_0892AB88:;
    v0 = LD32(sp+24);
    goto L_0892AB8C;
L_0892AB8C:;
    cnd_ = v0 == 0;
    s5 = D_08C29328 - (-27864);
    if (cnd_) { goto L_0892ABDC; }
    goto L_0892AB94;
L_0892AB94:;
    s6 = s3 + 120;
    s7 = 3;
    s4 = s3 + 108;
    s1 = LD32(v0);
    goto L_0892ABA4;
L_0892ABA4:;
    a1 = 1;
    a0 = s2 + 0;
    func_08ABCC18(a0, a1);
    goto L_0892ABB0;
L_0892ABB0:;
    cnd_ = s1 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_0892ABD4; }
    goto L_0892ABB8;
L_0892ABB8:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_0892ABD4; }
    goto L_0892ABC4;
L_0892ABC4:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_0892ACD0; }
    goto L_0892ABD0;
L_0892ABD0:;
    v0 = LD32(sp+24);
    goto L_0892ABD4;
L_0892ABD4:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_0892ABA4; }
    goto L_0892ABDC;
L_0892ABDC:;
    v1 = LD32(s5-27864);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = s3 + 108;
    if (cnd_) { goto L_0892ACB0; }
    goto L_0892ABEC;
L_0892ABEC:;
    s1 = LD32(sp+16);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892AC74; }
    goto L_0892AC00;
L_0892AC00:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892AC74; }
    goto L_0892AC0C;
L_0892AC0C:;
    v0 = LD32(s1);
    goto L_0892AC10;
L_0892AC10:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892AC64; }
    goto L_0892AC24;
L_0892AC24:;
    v0 = LD_U8(s0+8);
    goto L_0892AC28;
L_0892AC28:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892ACA8; }
    goto L_0892AC30;
L_0892AC30:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892AC98; }
    goto L_0892AC38;
L_0892AC38:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892AC40;
L_0892AC40:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892AC4C;
L_0892AC4C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892AC58;
L_0892AC58:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892AC28; }
    goto L_0892AC60;
L_0892AC60:;
    v1 = LD32(s1+4);
    goto L_0892AC64;
L_0892AC64:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892AC10; }
    goto L_0892AC74;
L_0892AC74:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892AA14; }
    goto L_0892AC88;
L_0892AC88:;
    { u64 r_ = func_08ABCCBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892AC90;
L_0892AC90:;
    goto L_0892AA18;
L_0892AC98:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892AC40;
L_0892ACA8:;
    s0 = LD32(s0+4);
    goto L_0892AC58;
L_0892ACB0:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s3+108));
    f1 = BITSF(LD32(v0+4));
    v1 = s3 + 120;
    ST32(s3+120, FBITS(f0));
    ST32(v1+8, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    goto L_0892ABEC;
L_0892ACD0:;
    s0 = LD32(s1+88);
    a0 = LD32(v0+76);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892ACDC;
L_0892ACDC:;
    cnd_ = s0 == v0;
    v0 = LD32(s1);
    if (cnd_) { goto L_0892AD18; }
    goto L_0892ACE4;
L_0892ACE4:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892ACFC;
L_0892ACFC:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s4+8, FBITS(f0));
    ST32(s3+108, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    goto L_0892ABD0;
L_0892AD18:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892AD30;
L_0892AD30:;
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    v0 = LD32(s5-27864);
    ST32(s6+8, FBITS(f1));
    ST32(s6+4, FBITS(f0));
    cnd_ = v0 == s7;
    ST32(s3+120, FBITS(f2));
    if (cnd_) { goto L_0892AD5C; }
    goto L_0892AD50;
L_0892AD50:;
    f0 = BITSF(LD32(s1+104));
    goto L_0892AD54;
L_0892AD54:;
    ST32(s3+68, FBITS(f0));
    goto L_0892ABD0;
L_0892AD5C:;
    f0 = BITSF(LD32(s1+108));
    goto L_0892AD54;
L_0892AD64:;
    s0 = LD32(s1+84);
    a0 = LD32(v0+76);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892AD70;
L_0892AD70:;
    cnd_ = s0 == v0;
    if (cnd_) { v0 = LD32(s1); goto L_0892ADC4; }
    goto L_0892AD78;
L_0892AD78:;
    v0 = LD32(s1+84);
    cnd_ = v0 == s5;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892AB08; }
    goto L_0892AD84;
L_0892AD84:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892ADA0;
L_0892ADA0:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    ST32(s2+4, FBITS(f0));
    ST32(s2+8, FBITS(f1));
    ST32(s3+132, FBITS(f2));
    f0 = BITSF(LD32(s1+88));
    ST32(s3+156, FBITS(f0));
    goto L_0892AB04;
L_0892ADC4:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892ADDC;
L_0892ADDC:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    ST32(s4+4, FBITS(f0));
    ST32(s4+8, FBITS(f1));
    ST32(s3+144, FBITS(f2));
    f0 = BITSF(LD32(s1+88));
    ST32(s3+160, FBITS(f0));
    goto L_0892AB04;
}

/* 0892AE00 */
rv_t func_0892AE00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0892AE00:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2544C - (21580);
    t1 = D_08C2545C - (21596);
    t2 = D_08C2546C - (21612);
    a1 = a1 & a0;
    v1 = t0 + 21580;
    a2 = t1 + 21596;
    cnd_ = a1 == 0;
    a3 = t2 + 21612;
    if (cnd_) { goto L_0892AEB8; }
    goto L_0892AE30;
L_0892AE30:;
    v0 = D_08AED4E0 - (-11040);
    f4 = BITSF(LD32(v0-11040));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+21580, FBITS(f2));
    ST32(t1+21596, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+21612, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0892AEB8;
L_0892AEB8:;
    return (rv_t){ v0, v1, f0 };
}

/* 0892AEC0 */
rv_t func_0892AEC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892AEC0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0892AE00(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892AED4;
L_0892AED4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892AEE0 */
u64 func_0892AEE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892AEE0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08925AD0(a0);
    goto L_0892AEF4;
L_0892AEF4:;
    v0 = D_08AF83C8 - (-31800);
    v0 = v0 - 31800;
    ST32(s0, v0);
    v1 = s0 + 68;
    a0 = 0 + 0;
    ST32(s0+84, 0);
    goto L_0892AF0C;
L_0892AF0C:;
    a0 = a0 + 1;
    v0 = a0 < 0x3u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0892AF0C; }
    goto L_0892AF20;
L_0892AF20:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0892AF30 */
rv_t func_0892AF30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892AF30:;
    v0 = D_08AF83C8 - (-31800);
    v0 = v0 - 31800;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08925B18(a0);
    goto L_0892AF4C;
L_0892AF4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892AF58 */
rv_t func_0892AF58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892AF58:;
    v0 = D_08AF83C8 - (-31800);
    v0 = v0 - 31800;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08925B18(a0);
    goto L_0892AF78;
L_0892AF78:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892AF80;
L_0892AF80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892AF90 */
rv_t func_0892AF90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892AF90:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0892AFB4; }
    goto L_0892AFA4;
L_0892AFA4:;
    { rv_t r_ = func_08925B28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892AFAC;
L_0892AFAC:;
    a0 = s0 + 0;
    { u64 r_ = func_0892C1E0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892AFB4;
L_0892AFB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892AFC4 */
rv_t func_0892AFC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0892AFC4:;
    sp = sp - 112;
    s2 = a0 + 0;
    { u64 r_ = func_0892C1E0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892AFF8;
L_0892AFF8:;
    a1 = LD32(s2+84);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0892B084; }
    goto L_0892B004;
L_0892B004:;
    v1 = LD32(s2+8);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_0892B088; }
    goto L_0892B010;
L_0892B010:;
    v0 = LD32(a1+88);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0892B084; }
    goto L_0892B01C;
L_0892B01C:;
    s6 = 0 + 0;
    goto L_0892B020;
L_0892B020:;
    v0 = LD32(v1+72);
    a0 = v1 + 0;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892B06C; }
    goto L_0892B030;
L_0892B030:;
    v0 = D_08AED4E4 - (-11036);
    f20 = BITSF(LD32(v0-11036));
    s5 = s6 + 0;
    s7 = 1;
    goto L_0892B040;
L_0892B040:;
    a1 = s3 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B048;
L_0892B048:;
    a1 = s3 + 0;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_0892B0B0; }
    goto L_0892B054;
L_0892B054:;
    a0 = LD32(s2+8);
    goto L_0892B058;
L_0892B058:;
    v0 = LD32(a0+72);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0892B040; }
    goto L_0892B068;
L_0892B068:;
    a1 = LD32(s2+84);
    goto L_0892B06C;
L_0892B06C:;
    v0 = LD32(a1+88);
    s4 = s4 + 1;
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s6 = s6 + 12;
    if (cnd_) { goto L_0892B020; }
    goto L_0892B080;
L_0892B080:;
    goto L_0892B084;
L_0892B084:;
    goto L_0892B088;
L_0892B088:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_0892B0B0:;
    a0 = LD32(s2+8);
    s0 = LD32(s2+84);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B0BC;
L_0892B0BC:;
    a0 = v0 + 0;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B0C4;
L_0892B0C4:;
    s1 = s0 + 32;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+32));
    f2 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1+4));
    f0 = f0 - f3;
    f2 = f2 - f5;
    f1 = f1 - f4;
    a1 = LD32(s2+84);
    ST32(sp, FBITS(f0));
    v0 = FBITS(f0);
    ST32(sp+4, FBITS(f1));
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    ST32(sp+8, FBITS(f2));
    v0 = a1 + s5;
    v1 = v0 + 96;
    a0 = a1 + 32;
    a2 = FBITS(f1);
    f4 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v0+96));
    f0 = BITSF(LD32(v1+4));
    {v[5]=BITSF(a2);}
    f5 = BITSF(LD32(a0+8));
    a2 = FBITS(f2);
    f3 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a1+32));
    f4 = f4 - f5;
    f0 = f0 - f3;
    f1 = f1 - f2;
    {v[6]=BITSF(a2);}
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a2 = FBITS(f0);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(a2);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    ST32(sp+4, FBITS(f0));
    v1 = s4 + a1;
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a2=FBITS(v[0]);}
    f0 = BITSF(a2);
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {v0=FBITS(v[4]);}
    f2 = f0 - f20;
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_0892B054; }
    goto L_0892B1A4;
L_0892B1A4:;
    v0 = LD_U8(v1+144);
    a0 = s2 + 0;
    a1 = s4 + 0;
    cnd_ = v0 == 0;
    ST8(v1+148, s7);
    if (cnd_) { goto L_0892B054; }
    goto L_0892B1B8;
L_0892B1B8:;
    ST8(v1+144, 0);
    f0 = func_0892B1C8(a0, a1);
    goto L_0892B1C0;
L_0892B1C0:;
    a0 = LD32(s2+8);
    goto L_0892B058;
}

/* 0892B1C8 */
float func_0892B1C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0892B1C8:;
    sp = sp - 64;
    s1 = a0 + 0;
    a0 = LD32(a0+4);
    v0 = LD32(a0+72);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0892B230; }
    goto L_0892B1F4;
L_0892B1F4:;
    v1 = D_08AED4E8 - (-11032);
    v0 = a1 << 1;
    f20 = BITSF(LD32(v1-11032));
    v0 = v0 + a1;
    s2 = v0 << 2;
    goto L_0892B208;
L_0892B208:;
    a1 = s0 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B210;
L_0892B210:;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0892B24C; }
    goto L_0892B218;
L_0892B218:;
    a0 = LD32(s1+4);
    goto L_0892B21C;
L_0892B21C:;
    s0 = s0 + 1;
    v0 = LD32(a0+72);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892B208; }
    goto L_0892B230;
L_0892B230:;
    sp = sp + 64;
    return f0;
L_0892B24C:;
    a0 = LD32(s1+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B254;
L_0892B254:;
    a0 = v0 + 0;
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B25C;
L_0892B25C:;
    a2 = LD32(s1+84);
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v1 = a2 + s2;
    a0 = v1 + 96;
    f0 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v1+96));
    f5 = f5 - f4;
    f2 = f2 - f0;
    f1 = f1 - f3;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a2 = a2 + 32;
    a1 = s0 + 0;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    a0 = s1 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_0892B218; }
    goto L_0892B2DC;
L_0892B2DC:;
    func_08926818(a0, a1, a2);
    goto L_0892B2E4;
L_0892B2E4:;
    a0 = LD32(s1+4);
    goto L_0892B21C;
}

/* 0892B2EC */
rv_t func_0892B2EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0892B2EC:;
    sp = sp - 64;
    a2 = D_08C2A880 - (-22400);
    v1 = a2 - 22400;
    s1 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0892B388; }
    goto L_0892B33C;
L_0892B33C:;
    a2 = LD32(a2-22400);
    a3 = a1 + 0;
    goto L_0892B344;
L_0892B344:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0892B378; }
    goto L_0892B35C;
L_0892B35C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B38C; }
    goto L_0892B36C;
L_0892B36C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892B35C; }
    goto L_0892B378;
L_0892B378:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0892B344; }
    goto L_0892B388;
L_0892B388:;
    v0 = LD32(sp+8);
    goto L_0892B38C;
L_0892B38C:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_0892B3E4; }
    goto L_0892B394;
L_0892B394:;
    f20 = BITSF(0);
    s2 = 1008;
    s0 = LD32(v0);
    goto L_0892B3A0;
L_0892B3A0:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B3AC;
L_0892B3AC:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B3D8; }
    goto L_0892B3B4;
L_0892B3B4:;
    v0 = LD32(s1+4);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B3D8; }
    goto L_0892B3C0;
L_0892B3C0:;
    v0 = LD_U8(s0+328);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892B4A4; }
    goto L_0892B3CC;
L_0892B3CC:;
    a0 = s1 + 0;
    { rv_t r_ = func_08925E98(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B3D4;
L_0892B3D4:;
    v0 = LD32(sp+8);
    goto L_0892B3D8;
L_0892B3D8:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_0892B3A0; }
    goto L_0892B3E0;
L_0892B3E0:;
    s1 = LD32(sp);
    goto L_0892B3E4;
L_0892B3E4:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892B468; }
    goto L_0892B3F4;
L_0892B3F4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892B468; }
    goto L_0892B400;
L_0892B400:;
    v0 = LD32(s1);
    goto L_0892B404;
L_0892B404:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892B458; }
    goto L_0892B418;
L_0892B418:;
    v0 = LD_U8(s0+8);
    goto L_0892B41C;
L_0892B41C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892B49C; }
    goto L_0892B424;
L_0892B424:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892B48C; }
    goto L_0892B42C;
L_0892B42C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892B434;
L_0892B434:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B440;
L_0892B440:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892B44C;
L_0892B44C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892B41C; }
    goto L_0892B454;
L_0892B454:;
    v1 = LD32(s1+4);
    goto L_0892B458;
L_0892B458:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892B404; }
    goto L_0892B468;
L_0892B468:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0892B48C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892B434;
L_0892B49C:;
    s0 = LD32(s0+4);
    goto L_0892B44C;
L_0892B4A4:;
    a0 = s0 + 0;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B4AC;
L_0892B4AC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B4B4;
L_0892B4B4:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B4D4;
L_0892B4D4:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B4E0;
L_0892B4E0:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B4EC;
L_0892B4EC:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B4F4;
L_0892B4F4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B4FC;
L_0892B4FC:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_0892B504;
L_0892B504:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B50C;
L_0892B50C:;
    v0 = LD32(s1+4);
    a0 = LD32(s0+12);
    v1 = LD32(v0+76);
    cnd_ = a0 != v1;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B520;
L_0892B520:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B52C;
L_0892B52C:;
    a1 = s0 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B534;
L_0892B534:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0892B3CC; }
    goto L_0892B53C;
L_0892B53C:;
    v1 = LD32(s0+332);
    v0 = 1;
    ST8(a2+42, v0);
    ST32(a2+60, v1);
    ST32(a2+76, s2);
    goto L_0892B3CC;
}

/* 0892B554 */
rv_t func_0892B554(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0892B554:;
    sp = sp - 48;
    s1 = a0 + 0;
    { rv_t r_ = func_08926220(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B574;
L_0892B574:;
    t0 = LD32(s1+84);
    cnd_ = t0 == 0;
    if (cnd_) { v0 = LD32(s1+68); goto L_0892B5F0; }
    goto L_0892B580;
L_0892B580:;
    v0 = LD32(t0+88);
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0892B5C0; }
    goto L_0892B590;
L_0892B590:;
    a3 = v0 + 0;
    a0 = t0 + 148;
    goto L_0892B598;
L_0892B598:;
    v0 = LD_U8(a0);
    a1 = a1 + 1;
    v1 = a1 < a3;
    v0 = v0 < 0x1u;
    a2 = a2 + v0;
    cnd_ = v1 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_0892B598; }
    goto L_0892B5B4;
L_0892B5B4:;
    v0 = a2 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892B5E4; }
    goto L_0892B5C0;
L_0892B5C0:;
    v1 = LD32(s1+12);
    v0 = v1 < 0x7u;
    cnd_ = v0 != 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_0892B5E4; }
    goto L_0892B5D0;
L_0892B5D0:;
    v1 = v1 >> 1;
    v0 = v1 + v0;
    ST32(s1+16, v0);
    ST32(s1+20, v1);
    ST32(s1+24, 0);
    goto L_0892B5E4;
L_0892B5E4:;
    cnd_ = t0 != 0;
    v1 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_0892B5FC; }
    goto L_0892B5EC;
L_0892B5EC:;
    v0 = LD32(s1+68);
    goto L_0892B5F0;
L_0892B5F0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892B644; }
    goto L_0892B5F8;
L_0892B5F8:;
    v1 = D_08C2A880 - (-22400);
    goto L_0892B5FC;
L_0892B5FC:;
    v1 = v1 - 22400;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B624;
L_0892B624:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_0892B66C; }
    goto L_0892B630;
L_0892B630:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892B65C; }
    goto L_0892B640;
L_0892B640:;
    goto L_0892B644;
L_0892B644:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0892B65C:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B664;
L_0892B664:;
    goto L_0892B644;
L_0892B66C:;
    s0 = LD32(v0);
    goto L_0892B670;
L_0892B670:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B67C;
L_0892B67C:;
    v0 = LD32(s0+200);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+328); goto L_0892B6A0; }
    goto L_0892B68C;
L_0892B68C:;
    v0 = LD32(sp+8);
    goto L_0892B690;
L_0892B690:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_0892B670; }
    goto L_0892B698;
L_0892B698:;
    a0 = LD32(sp);
    goto L_0892B630;
L_0892B6A0:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B6A8;
L_0892B6A8:;
    a0 = s0 + 0;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B6B0;
L_0892B6B0:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B6B8;
L_0892B6B8:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B6C4;
L_0892B6C4:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B6D0;
L_0892B6D0:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B6F4;
L_0892B6F4:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B700;
L_0892B700:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_0892B708;
L_0892B708:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B710;
L_0892B710:;
    v0 = LD32(s1+4);
    a0 = LD32(s0+12);
    v1 = LD32(v0+76);
    cnd_ = a0 != v1;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B724;
L_0892B724:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B72C;
L_0892B72C:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B734;
L_0892B734:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0892B7E4; }
    goto L_0892B744;
L_0892B744:;
    a0 = LD32(s1+4);
    goto L_0892B748;
L_0892B748:;
    v0 = LD32(a0+72);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892B7B4; }
    goto L_0892B754;
L_0892B754:;
    s2 = s1 + 16;
    goto L_0892B758;
L_0892B758:;
    a1 = s3 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B760;
L_0892B760:;
    s3 = s3 + 1;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892B798; }
    goto L_0892B76C;
L_0892B76C:;
    v0 = LD_U8(v0+42);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0892B79C; }
    goto L_0892B778;
L_0892B778:;
    v0 = LD_U8(a0+44);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0892B79C; }
    goto L_0892B784;
L_0892B784:;
    v1 = LD32(s2);
    v0 = LD32(a0+172);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_0892B7C8; }
    goto L_0892B798;
L_0892B798:;
    a0 = LD32(s1+4);
    goto L_0892B79C;
L_0892B79C:;
    v0 = LD32(a0+72);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0892B758; }
    goto L_0892B7AC;
L_0892B7AC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(sp+8); goto L_0892B690; }
    goto L_0892B7B4;
L_0892B7B4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B7C0;
L_0892B7C0:;
    v0 = LD32(sp+8);
    goto L_0892B690;
L_0892B7C8:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_0898D728(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B7DC;
L_0892B7DC:;
    v0 = LD32(sp+8);
    goto L_0892B690;
L_0892B7E4:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B7FC;
L_0892B7FC:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0892C514(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B808;
L_0892B808:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0892B690; }
    goto L_0892B810;
L_0892B810:;
    a0 = LD32(s1+4);
    goto L_0892B748;
}

/* 0892B818 */
rv_t func_0892B818(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892B818:;
    sp = sp - 16;
    v0 = LD32(a0+68);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892B854; }
    goto L_0892B82C;
L_0892B82C:;
    v0 = LD32(a0+84);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892B844; }
    goto L_0892B838;
L_0892B838:;
    goto L_0892B83C;
L_0892B83C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892B844:;
    { rv_t r_ = func_0892BEE0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B84C;
L_0892B84C:;
    goto L_0892B83C;
L_0892B854:;
    { rv_t r_ = func_0892B864(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892B85C;
L_0892B85C:;
    goto L_0892B83C;
}

/* 0892B864 */
rv_t func_0892B864(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0892B864:;
    sp = sp - 160;
    s7 = 0 + 0;
    s4 = 1;
    s3 = 0 + 0;
    s2 = a0 + 0;
    s0 = 0 + 0;
    v1 = LD32(a0+4);
    v0 = LD32(v1+72);
    goto L_0892B8B4;
L_0892B8B4:;
    s1 = sp + s0;
    a0 = v1 + 0;
    v0 = s0 < v0;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    ST8(s1, 0);
    if (cnd_) { goto L_0892BEAC; }
    goto L_0892B8CC;
L_0892B8CC:;
    s0 = s0 + 1;
    v0 = s0 < 0xau;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1+72); goto L_0892B8B4; }
    goto L_0892B8DC;
L_0892B8DC:;
    v0 = LD32(s2+80);
    cnd_ = v0 == 0;
    fp = D_08AED4EC - (-11028);
    if (cnd_) { goto L_0892BA48; }
    goto L_0892B8E8;
L_0892B8E8:;
    v0 = LD32(v1+72);
    goto L_0892B8EC;
L_0892B8EC:;
    f20 = BITSF(LD32(fp-11028));
    s5 = 0 + 0;
    s6 = 0 + 0;
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0892BA4C; }
    goto L_0892B904;
L_0892B904:;
    v0 = s3 << 2;
    s4 = v0 + s2;
    goto L_0892B90C;
L_0892B90C:;
    a1 = s1 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B914;
L_0892B914:;
    cnd_ = v0 == 0;
    v1 = sp + s1;
    if (cnd_) { goto L_0892B928; }
    goto L_0892B91C;
L_0892B91C:;
    v0 = LD_U8(v1);
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0892BE1C; }
    goto L_0892B928;
L_0892B928:;
    v1 = LD32(s2+4);
    s1 = s1 + 1;
    v0 = LD32(v1+72);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0892B90C; }
    goto L_0892B940;
L_0892B940:;
    cnd_ = s6 == 0;
    if (cnd_) { v0 = LD32(v1+72); goto L_0892BA50; }
    goto L_0892B948;
L_0892B948:;
    a1 = s5 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892B950;
L_0892B950:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0892BAA0; }
    goto L_0892B958;
L_0892B958:;
    v0 = s3 << 2;
    v0 = v0 + s2;
    v0 = LD32(v0+68);
    cnd_ = v0 == 0;
    if (cnd_) { s7 = 0 + 0; goto L_0892B980; }
    goto L_0892B96C;
L_0892B96C:;
    v0 = LD32(v0+88);
    v0 = s7 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+80); goto L_0892B988; }
    goto L_0892B97C;
L_0892B97C:;
    s7 = 0 + 0;
    goto L_0892B980;
L_0892B980:;
    s3 = s3 + 1;
    v1 = LD32(s2+80);
    goto L_0892B988;
L_0892B988:;
    v0 = s3 < v1;
    cnd_ = v0 == 0;
    a3 = s3 << 2;
    if (cnd_) { goto L_0892BA38; }
    goto L_0892B994;
L_0892B994:;
    v0 = a3 + s2;
    v1 = LD32(v0+68);
    a0 = D_08C2BA28 - (-17880);
    v0 = 999;
    a2 = LD32(v1+80);
    cnd_ = a2 == v0;
    v1 = a0 - 17880;
    if (cnd_) { goto L_0892BDDC; }
    goto L_0892B9B0;
L_0892B9B0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-17880);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0892BA00; }
    goto L_0892B9D4;
L_0892B9D4:;
    a0 = LD32(a1);
    goto L_0892B9D8;
L_0892B9D8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0892BDFC; }
    goto L_0892B9F0;
L_0892B9F0:;
    a1 = LD32(a1+4);
    goto L_0892B9F4;
L_0892B9F4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0892B9D8; }
    goto L_0892B9FC;
L_0892B9FC:;
    v1 = 0 + 0;
    goto L_0892BA00;
L_0892BA00:;
    cnd_ = v1 == 0;
    v0 = a3 + s2;
    if (cnd_) { goto L_0892BDDC; }
    goto L_0892BA08;
L_0892BA08:;
    v1 = LD32(v0+68);
    a0 = s2 + 0;
    a1 = s5 + 0;
    a2 = LD32(v1+80);
    func_08926478(a0, a1, a2);
    goto L_0892BA1C;
L_0892BA1C:;
    v1 = 1;
    goto L_0892BA20;
L_0892BA20:;
    v0 = sp + s5;
    a0 = LD32(s0+172);
    ST8(v0, v1);
    s7 = s7 + a0;
    v1 = LD32(s2+80);
    v0 = s3 < v1;
    goto L_0892BA38;
L_0892BA38:;
    cnd_ = v0 == 0;
    v1 = LD32(s2+4);
    if (cnd_) { goto L_0892BA48; }
    goto L_0892BA40;
L_0892BA40:;
    v0 = LD32(v1+72);
    goto L_0892B8EC;
L_0892BA48:;
    v0 = LD32(v1+72);
    goto L_0892BA4C;
L_0892BA4C:;
    a0 = v1 + 0;
    goto L_0892BA50;
L_0892BA50:;
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0892BAA0; }
    goto L_0892BA58;
L_0892BA58:;
    v0 = D_08AED4F0 - (-11024);
    f21 = BITSF(LD32(v0-11024));
    s7 = D_08B25AC0 - (23232);
    fp = s7 + 23232;
    goto L_0892BA68;
L_0892BA68:;
    a1 = s4 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BA70;
L_0892BA70:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_0892BA8C; }
    goto L_0892BA78;
L_0892BA78:;
    v0 = sp + s4;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_0892BAD8; }
    goto L_0892BA88;
L_0892BA88:;
    a0 = LD32(s2+4);
    goto L_0892BA8C;
L_0892BA8C:;
    s4 = s4 + 1;
    v0 = LD32(a0+72);
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892BA68; }
    goto L_0892BAA0;
L_0892BAA0:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_0892BAD8:;
    a1 = s4 + 0;
    s5 = 0 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BAE4;
L_0892BAE4:;
    a0 = v0 + 0;
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892BAEC;
L_0892BAEC:;
    a0 = LD32(s2+4);
    a1 = s4 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BAFC;
L_0892BAFC:;
    a0 = v0 + 0;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BB04;
L_0892BB04:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = D_08C2A36C - (-23700); goto L_0892BC34; }
    goto L_0892BB70;
L_0892BB70:;
    v0 = LD32(s2+80);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892BA88; }
    goto L_0892BB7C;
L_0892BB7C:;
    v0 = D_08AED4F0 - (-11024);
    f20 = BITSF(LD32(v0-11024));
    s1 = s2 + 68;
    a0 = LD32(s2+4);
    goto L_0892BB8C;
L_0892BB8C:;
    s0 = LD32(s1);
    a1 = s4 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BB98;
L_0892BB98:;
    a0 = v0 + 0;
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892BBA0;
L_0892BBA0:;
    v1 = s0 + 32;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s0+32));
    f4 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    f1 = f1 - f2;
    f4 = f4 - f5;
    f0 = f0 - f3;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f0));
    s3 = s3 + 1;
    s1 = s1 + 4;
    ST32(sp+16, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0892BC18; }
    goto L_0892BC14;
L_0892BC14:;
    s5 = 1;
    goto L_0892BC18;
L_0892BC18:;
    v0 = LD32(s2+80);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_0892BB8C; }
    goto L_0892BC28;
L_0892BC28:;
    cnd_ = s5 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_0892BA8C; }
    goto L_0892BC30;
L_0892BC30:;
    a0 = D_08C2A36C - (-23700);
    goto L_0892BC34;
L_0892BC34:;
    a2 = a0 - 23700;
    v0 = LD32(a2+8);
    v1 = LD32(a2+4);
    ST32(sp+32, a2);
    v0 = v0 + 1;
    a1 = sp + 32;
    ST32(a2+8, v0);
    ST32(sp+40, 0);
    cnd_ = v1 == 0;
    ST32(sp+36, 0);
    if (cnd_) { goto L_0892BCA8; }
    goto L_0892BC5C;
L_0892BC5C:;
    a3 = LD32(a0-23700);
    t0 = v1 + 0;
    goto L_0892BC64;
L_0892BC64:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_0892BC98; }
    goto L_0892BC7C;
L_0892BC7C:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(a2+12); goto L_0892BCAC; }
    goto L_0892BC8C;
L_0892BC8C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_0892BC7C; }
    goto L_0892BC98;
L_0892BC98:;
    v0 = a0 + 1;
    v1 = v0 < t0;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_0892BC64; }
    goto L_0892BCA8;
L_0892BCA8:;
    a3 = LD32(a2+12);
    goto L_0892BCAC;
L_0892BCAC:;
    cnd_ = (s32)a3 <= 0;
    s1 = LD32(sp+32);
    if (cnd_) { goto L_0892BCF8; }
    goto L_0892BCB4;
L_0892BCB4:;
    v1 = LD32(s7+23232);
    a0 = LD32(fp+4);
    a2 = LD32(sp+40);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v1;
    ST32(fp+4, a0);
    s3 = a1 + 0;
    s0 = 0 + 0;
    s5 = hi;
    cnd_ = a2 != 0;
    ST32(s7+23232, v1);
    if (cnd_) { goto L_0892BD9C; }
    goto L_0892BCF4;
L_0892BCF4:;
    s1 = LD32(sp+32);
    goto L_0892BCF8;
L_0892BCF8:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892BA88; }
    goto L_0892BD08;
L_0892BD08:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0892BA88; }
    goto L_0892BD14;
L_0892BD14:;
    v0 = LD32(s1);
    goto L_0892BD18;
L_0892BD18:;
    s6 = s5 << 2;
    v0 = s6 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892BD6C; }
    goto L_0892BD2C;
L_0892BD2C:;
    v0 = LD_U8(s0+8);
    goto L_0892BD30;
L_0892BD30:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s0 + 0; goto L_0892BD94; }
    goto L_0892BD38;
L_0892BD38:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892BD84; }
    goto L_0892BD40;
L_0892BD40:;
    v0 = LD32(s0+4);
    ST32(s3+4, v0);
    goto L_0892BD48;
L_0892BD48:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BD54;
L_0892BD54:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892BD60;
L_0892BD60:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892BD30; }
    goto L_0892BD68;
L_0892BD68:;
    v1 = LD32(s1+4);
    goto L_0892BD6C;
L_0892BD6C:;
    s5 = s5 + 1;
    v0 = s5 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892BD18; }
    goto L_0892BD7C;
L_0892BD7C:;
    a0 = LD32(s2+4);
    goto L_0892BA8C;
L_0892BD84:;
    v1 = LD32(s0+4);
    v0 = s6 + v0;
    ST32(v0, v1);
    goto L_0892BD48;
L_0892BD94:;
    s0 = LD32(s0+4);
    goto L_0892BD60;
L_0892BD9C:;
    a0 = s3 + 0;
    a1 = 1;
    s1 = LD32(a2);
    { u64 r_ = func_08ABCD88(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BDAC;
L_0892BDAC:;
    cnd_ = s0 == s5;
    if (cnd_) { goto L_0892BDC0; }
    goto L_0892BDB4;
L_0892BDB4:;
    a2 = LD32(sp+40);
    cnd_ = a2 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_0892BD9C; }
    goto L_0892BDC0;
L_0892BDC0:;
    cnd_ = s1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0892BCF4; }
    goto L_0892BDC8;
L_0892BDC8:;
    a2 = s1 + 32;
    a1 = s4 + 0;
    { u64 r_ = func_08926760(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BDD4;
L_0892BDD4:;
    s1 = LD32(sp+32);
    goto L_0892BCF8;
L_0892BDDC:;
    v0 = a3 + s2;
    a2 = LD32(v0+68);
    a0 = s2 + 0;
    a1 = s5 + 0;
    a2 = a2 + 32;
    { u64 r_ = func_08926760(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BDF4;
L_0892BDF4:;
    v1 = 1;
    goto L_0892BA20;
L_0892BDFC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0892B9F0; }
    goto L_0892BE08;
L_0892BE08:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0892B9F4; }
    goto L_0892BE14;
L_0892BE14:;
    goto L_0892BA00;
L_0892BE1C:;
    a0 = LD32(s2+4);
    s0 = LD32(s4+68);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BE28;
L_0892BE28:;
    a0 = v0 + 0;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BE30;
L_0892BE30:;
    v1 = s0 + 32;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s0+32));
    f4 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    f1 = f1 - f2;
    f4 = f4 - f5;
    f0 = f0 - f3;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0892B928; }
    goto L_0892BE9C;
L_0892BE9C:;
    f20 = BITSF(v0);
    s6 = 1;
    s5 = s1 + 0;
    goto L_0892B928;
L_0892BEAC:;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BEB4;
L_0892BEB4:;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0892BEC4; }
    goto L_0892BEBC;
L_0892BEBC:;
    v1 = LD32(s2+4);
    goto L_0892B8CC;
L_0892BEC4:;
    a0 = LD32(s2+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BECC;
L_0892BECC:;
    v1 = LD_U8(v0+42);
    cnd_ = v1 == 0;
    v1 = LD32(s2+4);
    if (cnd_) { goto L_0892B8CC; }
    goto L_0892BED8;
L_0892BED8:;
    ST8(s1, s4);
    goto L_0892B8CC;
}

/* 0892BEE0 */
rv_t func_0892BEE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0892BEE0:;
    sp = sp - 32;
    s5 = 0 + 0;
    s4 = 0 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    v0 = LD32(a0+72);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892BF50; }
    goto L_0892BF20;
L_0892BF20:;
    s1 = s0 + 16;
    s6 = 1000;
    goto L_0892BF28;
L_0892BF28:;
    a1 = s2 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BF30;
L_0892BF30:;
    cnd_ = v0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892BF78; }
    goto L_0892BF38;
L_0892BF38:;
    a0 = LD32(s0+4);
    goto L_0892BF3C;
L_0892BF3C:;
    s2 = s2 + 1;
    v0 = LD32(a0+72);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_0892BF28; }
    goto L_0892BF50;
L_0892BF50:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0892BF78:;
    a0 = LD32(s0+4);
    a1 = s2 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BF84;
L_0892BF84:;
    v1 = LD_U8(v0+42);
    cnd_ = v1 != 0;
    a0 = LD32(s0+4);
    if (cnd_) { goto L_0892BF3C; }
    goto L_0892BF90;
L_0892BF90:;
    a1 = s4 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892BF98;
L_0892BF98:;
    v1 = LD32(s1);
    a0 = LD32(v0+172);
    v1 = v1 - 1;
    a0 = a0 < v1;
    cnd_ = a0 != 0;
    if (cnd_) { s4 = s4 + 1; goto L_0892BF38; }
    goto L_0892BFB0;
L_0892BFB0:;
    a1 = LD32(s0+84);
    a3 = 0 + 0;
    v0 = LD32(a1+88);
    cnd_ = v0 == 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_0892BFFC; }
    goto L_0892BFC4;
L_0892BFC4:;
    t0 = 0 + 0;
    goto L_0892BFC8;
L_0892BFC8:;
    v1 = a3 + a2;
    v0 = LD_U8(v1+144);
    a3 = a3 + 1;
    cnd_ = v0 != 0;
    a0 = v1 + 144;
    if (cnd_) { goto L_0892BFE8; }
    goto L_0892BFDC;
L_0892BFDC:;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0892C080; }
    goto L_0892BFE8;
L_0892BFE8:;
    v0 = LD32(a1+88);
    t0 = t0 + 12;
    v0 = a3 < v0;
    cnd_ = v0 != 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_0892BFC8; }
    goto L_0892BFFC;
L_0892BFFC:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    { rv_t r_ = func_0892C0A0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C008;
L_0892C008:;
    cnd_ = v0 != 0;
    if (cnd_) { s4 = s4 + 1; goto L_0892BF38; }
    goto L_0892C010;
L_0892C010:;
    a2 = LD32(s0+84);
    v0 = LD32(a2+92);
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a2 + 32; goto L_0892C058; }
    goto L_0892C024;
L_0892C024:;
    cnd_ = s3 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_0892C034; }
    goto L_0892C02C;
L_0892C02C:;
    s4 = s4 + 1;
    goto L_0892BF38;
L_0892C034:;
    a1 = s4 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C03C;
L_0892C03C:;
    ST32(v0+60, s6);
    a1 = s4 + 0;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C04C;
L_0892C04C:;
    v1 = 1008;
    ST32(v0+76, v1);
    goto L_0892C02C;
L_0892C058:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    func_08926818(a0, a1, a2);
    goto L_0892C064;
L_0892C064:;
    a0 = LD32(s0+4);
    a1 = s4 + 0;
    s3 = 1;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C074;
L_0892C074:;
    v1 = LD32(v0+172);
    s5 = s5 + v1;
    goto L_0892C024;
L_0892C080:;
    ST8(v1+144, v0);
    a2 = a2 + t0;
    a2 = a2 + 96;
    a0 = s0 + 0;
    a1 = s4 + 0;
    func_08926818(a0, a1, a2);
    goto L_0892C098;
L_0892C098:;
    s3 = 1;
    goto L_0892BFFC;
}

/* 0892C0A0 */
rv_t func_0892C0A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0892C0A0:;
    sp = sp - 80;
    s2 = 0 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0+84);
    v0 = LD32(v1+88);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0892C114; }
    goto L_0892C0D8;
L_0892C0D8:;
    v0 = D_08AED4F4 - (-11020);
    f20 = BITSF(LD32(v0-11020));
    s4 = 1015;
    s3 = 0 + 0;
    goto L_0892C0E8;
L_0892C0E8:;
    a0 = LD32(s0+4);
    a1 = s1 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C0F4;
L_0892C0F4:;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0892C13C; }
    goto L_0892C0FC;
L_0892C0FC:;
    a2 = LD32(s0+84);
    goto L_0892C100;
L_0892C100:;
    v0 = LD32(a2+88);
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s3 = s3 + 12;
    if (cnd_) { goto L_0892C0E8; }
    goto L_0892C114;
L_0892C114:;
    v0 = 0 + 0;
    goto L_0892C11C;
L_0892C11C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0892C13C:;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C144;
L_0892C144:;
    a0 = v0 + 0;
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C14C;
L_0892C14C:;
    a2 = LD32(s0+84);
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v1 = a2 + s3;
    a0 = v1 + 96;
    f0 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v1+96));
    f5 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    f1 = f1 - f4;
    f3 = f3 - f5;
    f0 = f0 - f2;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f0));
    a1 = s1 + 0;
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_0892C100; }
    goto L_0892C1C4;
L_0892C1C4:;
    a0 = LD32(s0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C1CC;
L_0892C1CC:;
    v1 = LD32(v0+76);
    cnd_ = v1 != s4;
    v0 = 1;
    if (cnd_) { goto L_0892C0FC; }
    goto L_0892C1D8;
L_0892C1D8:;
    goto L_0892C11C;
}

/* 0892C1E0 */
u64 func_0892C1E0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0892C1E0:;
    sp = sp - 64;
    s1 = a0 + 0;
    v1 = s1 + 68;
    a0 = 0 + 0;
    goto L_0892C208;
L_0892C208:;
    a0 = a0 + 1;
    v0 = a0 < 0x3u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0892C208; }
    goto L_0892C21C;
L_0892C21C:;
    a2 = D_08C2A260 - (-23968);
    v1 = a2 - 23968;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(s1+84, 0);
    v0 = v0 + 1;
    a0 = sp + 0;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0892C298; }
    goto L_0892C24C;
L_0892C24C:;
    a2 = LD32(a2-23968);
    a3 = a1 + 0;
    goto L_0892C254;
L_0892C254:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0892C288; }
    goto L_0892C26C;
L_0892C26C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(sp+8); goto L_0892C29C; }
    goto L_0892C27C;
L_0892C27C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892C26C; }
    goto L_0892C288;
L_0892C288:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0892C254; }
    goto L_0892C298;
L_0892C298:;
    a2 = LD32(sp+8);
    goto L_0892C29C;
L_0892C29C:;
    cnd_ = a2 != 0;
    ST32(s1+80, 0);
    if (cnd_) { goto L_0892C4C4; }
    goto L_0892C2A4;
L_0892C2A4:;
    a2 = D_08C2A35C - (-23716);
    goto L_0892C2A8;
L_0892C2A8:;
    v0 = a2 - 23716;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    a0 = sp + 16;
    ST32(v0+8, v1);
    ST32(sp+24, 0);
    cnd_ = a1 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_0892C31C; }
    goto L_0892C2D0;
L_0892C2D0:;
    a2 = LD32(a2-23716);
    a3 = a1 + 0;
    goto L_0892C2D8;
L_0892C2D8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0892C30C; }
    goto L_0892C2F0;
L_0892C2F0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(sp+24); goto L_0892C320; }
    goto L_0892C300;
L_0892C300:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892C2F0; }
    goto L_0892C30C;
L_0892C30C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0892C2D8; }
    goto L_0892C31C;
L_0892C31C:;
    a2 = LD32(sp+24);
    goto L_0892C320;
L_0892C320:;
    cnd_ = a2 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0892C488; }
    goto L_0892C328;
L_0892C328:;
    s1 = LD32(sp+16);
    goto L_0892C32C;
L_0892C32C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892C3B0; }
    goto L_0892C33C;
L_0892C33C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892C3B0; }
    goto L_0892C348;
L_0892C348:;
    v0 = LD32(s1);
    goto L_0892C34C;
L_0892C34C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892C3A0; }
    goto L_0892C360;
L_0892C360:;
    v0 = LD_U8(s0+8);
    goto L_0892C364;
L_0892C364:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892C480; }
    goto L_0892C36C;
L_0892C36C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892C470; }
    goto L_0892C374;
L_0892C374:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892C37C;
L_0892C37C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C388;
L_0892C388:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892C394;
L_0892C394:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892C364; }
    goto L_0892C39C;
L_0892C39C:;
    v1 = LD32(s1+4);
    goto L_0892C3A0;
L_0892C3A0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892C34C; }
    goto L_0892C3B0;
L_0892C3B0:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892C438; }
    goto L_0892C3C4;
L_0892C3C4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892C438; }
    goto L_0892C3D0;
L_0892C3D0:;
    v0 = LD32(s1);
    goto L_0892C3D4;
L_0892C3D4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892C428; }
    goto L_0892C3E8;
L_0892C3E8:;
    v0 = LD_U8(s0+8);
    goto L_0892C3EC;
L_0892C3EC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892C468; }
    goto L_0892C3F4;
L_0892C3F4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892C458; }
    goto L_0892C3FC;
L_0892C3FC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892C404;
L_0892C404:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C410;
L_0892C410:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892C41C;
L_0892C41C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892C3EC; }
    goto L_0892C424;
L_0892C424:;
    v1 = LD32(s1+4);
    goto L_0892C428;
L_0892C428:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892C3D4; }
    goto L_0892C438;
L_0892C438:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_0892C458:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892C404;
L_0892C468:;
    s0 = LD32(s0+4);
    goto L_0892C41C;
L_0892C470:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892C37C;
L_0892C480:;
    s0 = LD32(s0+4);
    goto L_0892C394;
L_0892C488:;
    a0 = s2 + 0;
    goto L_0892C48C;
L_0892C48C:;
    a1 = 1;
    s0 = LD32(a2);
    func_08ABCEB8(a0, a1);
    goto L_0892C498;
L_0892C498:;
    a0 = LD32(s1+4);
    v1 = LD32(s0+84);
    v0 = LD32(a0+76);
    cnd_ = v1 == v0;
    a2 = LD32(sp+24);
    if (cnd_) { goto L_0892C4BC; }
    goto L_0892C4AC;
L_0892C4AC:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_0892C48C; }
    goto L_0892C4B4;
L_0892C4B4:;
    s1 = LD32(sp+16);
    goto L_0892C32C;
L_0892C4BC:;
    ST32(s1+84, s0);
    goto L_0892C4AC;
L_0892C4C4:;
    a0 = sp + 0;
    goto L_0892C4C8;
L_0892C4C8:;
    a1 = 1;
    s0 = LD32(a2);
    func_08ABCE20(a0, a1);
    goto L_0892C4D4;
L_0892C4D4:;
    a0 = LD32(s1+4);
    v1 = LD32(s0+84);
    v0 = LD32(a0+76);
    cnd_ = v1 == v0;
    a2 = LD32(sp+8);
    if (cnd_) { goto L_0892C4F8; }
    goto L_0892C4E8;
L_0892C4E8:;
    cnd_ = a2 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0892C4C8; }
    goto L_0892C4F0;
L_0892C4F0:;
    a2 = D_08C2A35C - (-23716);
    goto L_0892C2A8;
L_0892C4F8:;
    v1 = LD32(s1+80);
    v0 = v1 << 2;
    v0 = v0 + s1;
    v1 = v1 + 1;
    ST32(v0+68, s0);
    ST32(s1+80, v1);
    goto L_0892C4E8;
}

/* 0892C514 */
rv_t func_0892C514(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892C514:;
    a2 = LD32(a0+84);
    cnd_ = a2 == 0;
    sp = sp - 16;
    if (cnd_) { goto L_0892C5A8; }
    goto L_0892C520;
L_0892C520:;
    v0 = a2 + 32;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(a2+32));
    f5 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f3 = BITSF(LD32(a1+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    v1 = 1;
    ST32(sp+8, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AED4F8 - (-11016);
    f0 = BITSF(LD32(v0-11016));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = v1 + 0;
    if (cnd_) { goto L_0892C5A0; }
    goto L_0892C598;
L_0892C598:;
    v1 = 0 + 0;
    goto L_0892C59C;
L_0892C59C:;
    v0 = v1 + 0;
    goto L_0892C5A0;
L_0892C5A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892C5A8:;
    v0 = LD32(a0+68);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0892C59C; }
    goto L_0892C5B4;
L_0892C5B4:;
    a3 = LD32(a0+80);
    cnd_ = a3 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0892C59C; }
    goto L_0892C5C0;
L_0892C5C0:;
    v0 = D_08AED4F8 - (-11016);
    f5 = BITSF(LD32(a1+8));
    f6 = BITSF(LD32(v0-11016));
    f4 = BITSF(LD32(a1));
    f3 = BITSF(LD32(a1+4));
    a0 = a0 + 68;
    v1 = LD32(a0);
    goto L_0892C5DC;
L_0892C5DC:;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    a2 = a2 + 1;
    v0 = v1 + 32;
    f0 = BITSF(LD32(v1+32));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 - f4;
    f2 = f2 - f5;
    f1 = f1 - f3;
    a1 = a2 < a3;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f0));
    a0 = a0 + 4;
    v1 = 1;
    ST32(sp+4, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f6, 12);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0892C59C; }
    goto L_0892C64C;
L_0892C64C:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0892C5DC; }
    goto L_0892C654;
L_0892C654:;
    v1 = 0 + 0;
    goto L_0892C59C;
}

/* 0892C65C */
rv_t func_0892C65C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0892C65C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C254FC - (21756);
    t1 = D_08C2550C - (21772);
    t2 = D_08C2551C - (21788);
    a1 = a1 & a0;
    v1 = t0 + 21756;
    a2 = t1 + 21772;
    cnd_ = a1 == 0;
    a3 = t2 + 21788;
    if (cnd_) { goto L_0892C714; }
    goto L_0892C68C;
L_0892C68C:;
    v0 = D_08AED4FC - (-11012);
    f4 = BITSF(LD32(v0-11012));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+21756, FBITS(f2));
    ST32(t1+21772, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+21788, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0892C714;
L_0892C714:;
    return (rv_t){ v0, v1, f0 };
}

/* 0892C71C */
rv_t func_0892C71C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892C71C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0892C65C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C730;
L_0892C730:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892C73C */
void func_0892C73C(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892C73C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08925AD0(a0);
    goto L_0892C750;
L_0892C750:;
    v0 = D_08AF83F0 - (-31760);
    v0 = v0 - 31760;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 0892C76C */
rv_t func_0892C76C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892C76C:;
    v0 = D_08AF83F0 - (-31760);
    v0 = v0 - 31760;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08925B18(a0);
    goto L_0892C788;
L_0892C788:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892C794 */
rv_t func_0892C794(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892C794:;
    v0 = D_08AF83F0 - (-31760);
    v0 = v0 - 31760;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08925B18(a0);
    goto L_0892C7B4;
L_0892C7B4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C7BC;
L_0892C7BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892C7CC */
rv_t func_0892C7CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892C7CC:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0892C7E0; }
    goto L_0892C7D8;
L_0892C7D8:;
    { rv_t r_ = func_08925B28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C7E0;
L_0892C7E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892C7EC */
rv_t func_0892C7EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892C7EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08925E90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C800;
L_0892C800:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892C828; }
    goto L_0892C80C;
L_0892C80C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0892C82C; }
    goto L_0892C818;
L_0892C818:;
    v0 = LD_U8(s0+56);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0892C834; }
    goto L_0892C824;
L_0892C824:;
    goto L_0892C828;
L_0892C828:;
    goto L_0892C82C;
L_0892C82C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892C834:;
    { rv_t r_ = func_0892D4A8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C83C;
L_0892C83C:;
    goto L_0892C828;
}

/* 0892C844 */
rv_t func_0892C844(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892C844:;
    sp = sp - 16;
    { rv_t r_ = func_08925E98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C854;
L_0892C854:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892C860 */
rv_t func_0892C860(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0892C860:;
    sp = sp - 48;
    s1 = a0 + 0;
    { rv_t r_ = func_08926220(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C884;
L_0892C884:;
    a0 = 0 + 0;
    a1 = 1;
    v1 = s1 + 16;
    goto L_0892C890;
L_0892C890:;
    a0 = a0 + 1;
    v0 = a0 < 0xau;
    ST32(v1, a1);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0892C890; }
    goto L_0892C8A4;
L_0892C8A4:;
    s0 = LD32(s1+4);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0892C8C0; }
    goto L_0892C8B0;
L_0892C8B0:;
    s2 = LD_U8(s1+56);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_0892C8DC; }
    goto L_0892C8BC;
L_0892C8BC:;
    goto L_0892C8C0;
L_0892C8C0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0892C8DC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0892D7AC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892C8E4;
L_0892C8E4:;
    a3 = D_08C2A880 - (-22400);
    a0 = a3 - 22400;
    v1 = LD32(a0+8);
    a2 = LD32(a0+4);
    ST8(s0+81, v0);
    v1 = v1 + 1;
    v0 = s2 < a2;
    ST32(a0+8, v1);
    a1 = sp + 0;
    ST32(sp, a0);
    ST32(sp+4, 0);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0892C964; }
    goto L_0892C918;
L_0892C918:;
    a0 = LD32(a3-22400);
    a3 = a2 + 0;
    goto L_0892C920;
L_0892C920:;
    a2 = LD32(a1+4);
    v0 = a2 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_0892C954; }
    goto L_0892C938;
L_0892C938:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_0892C968; }
    goto L_0892C948;
L_0892C948:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_0892C938; }
    goto L_0892C954;
L_0892C954:;
    v0 = a2 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_0892C920; }
    goto L_0892C964;
L_0892C964:;
    v1 = LD32(sp+8);
    goto L_0892C968;
L_0892C968:;
    v0 = 999;
    ST32(s1+68, v0);
    ST32(s1+76, 0);
    cnd_ = v1 != 0;
    ST32(s1+72, 0);
    if (cnd_) { goto L_0892CA24; }
    goto L_0892C97C;
L_0892C97C:;
    s1 = LD32(sp);
    goto L_0892C980;
L_0892C980:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892C8BC; }
    goto L_0892C990;
L_0892C990:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892C8BC; }
    goto L_0892C99C;
L_0892C99C:;
    v0 = LD32(s1);
    goto L_0892C9A0;
L_0892C9A0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892C9F4; }
    goto L_0892C9B4;
L_0892C9B4:;
    v0 = LD_U8(s0+8);
    goto L_0892C9B8;
L_0892C9B8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892CA1C; }
    goto L_0892C9C0;
L_0892C9C0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892CA0C; }
    goto L_0892C9C8;
L_0892C9C8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892C9D0;
L_0892C9D0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892C9DC;
L_0892C9DC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892C9E8;
L_0892C9E8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892C9B8; }
    goto L_0892C9F0;
L_0892C9F0:;
    v1 = LD32(s1+4);
    goto L_0892C9F4;
L_0892C9F4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892C9A0; }
    goto L_0892CA04;
L_0892CA04:;
    goto L_0892C8C0;
L_0892CA0C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892C9D0;
L_0892CA1C:;
    s0 = LD32(s0+4);
    goto L_0892C9E8;
L_0892CA24:;
    s0 = LD32(v1);
    goto L_0892CA28;
L_0892CA28:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CA34;
L_0892CA34:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CA3C;
L_0892CA3C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+200); goto L_0892CA7C; }
    goto L_0892CA44;
L_0892CA44:;
    v0 = LD32(s1+4);
    a0 = LD32(s0+12);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(s1+72); goto L_0892CBF4; }
    goto L_0892CA58;
L_0892CA58:;
    v0 = LD32(s1+76);
    v0 = v0 + 1;
    ST32(s1+76, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s1+68, v1);
    goto L_0892CA78;
L_0892CA78:;
    v0 = LD32(s0+200);
    goto L_0892CA7C;
L_0892CA7C:;
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+328); goto L_0892CA98; }
    goto L_0892CA88;
L_0892CA88:;
    v0 = LD_U8(s0+329);
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CA94;
L_0892CA94:;
    v0 = LD_U8(s0+328);
    goto L_0892CA98;
L_0892CA98:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CAB0; }
    goto L_0892CAA0;
L_0892CAA0:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_0892CA28; }
    goto L_0892CAA8;
L_0892CAA8:;
    s1 = LD32(sp);
    goto L_0892C980;
L_0892CAB0:;
    a0 = s0 + 0;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CAB8;
L_0892CAB8:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CAC0;
L_0892CAC0:;
    v1 = LD32(s0);
    v0 = LD32(v1+168);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892CAD0;
L_0892CAD0:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CAD8;
L_0892CAD8:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CAE4;
L_0892CAE4:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CAF0;
L_0892CAF0:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CB14;
L_0892CB14:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CB20;
L_0892CB20:;
    v0 = LD32(s1+4);
    a0 = LD32(s0+12);
    v1 = LD32(v0+76);
    cnd_ = a0 != v1;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CB34;
L_0892CB34:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_0892CB3C;
L_0892CB3C:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CB44;
L_0892CB44:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CB4C;
L_0892CB4C:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CAA0; }
    goto L_0892CB54;
L_0892CB54:;
    a0 = LD32(s1+4);
    v0 = LD32(a0+72);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892CBC4; }
    goto L_0892CB64;
L_0892CB64:;
    s2 = s1 + 16;
    goto L_0892CB68;
L_0892CB68:;
    a1 = s3 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CB70;
L_0892CB70:;
    s3 = s3 + 1;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892CBA8; }
    goto L_0892CB7C;
L_0892CB7C:;
    v0 = LD_U8(v0+42);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0892CBAC; }
    goto L_0892CB88;
L_0892CB88:;
    v0 = LD_U8(a0+44);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0892CBAC; }
    goto L_0892CB94;
L_0892CB94:;
    v1 = LD32(s2);
    v0 = LD32(a0+172);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_0892CBD8; }
    goto L_0892CBA8;
L_0892CBA8:;
    a0 = LD32(s1+4);
    goto L_0892CBAC;
L_0892CBAC:;
    v0 = LD32(a0+72);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0892CB68; }
    goto L_0892CBBC;
L_0892CBBC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_0892CAA0; }
    goto L_0892CBC4;
L_0892CBC4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089268D0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892CBD0;
L_0892CBD0:;
    v1 = LD32(sp+8);
    goto L_0892CAA0;
L_0892CBD8:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_0898D728(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CBEC;
L_0892CBEC:;
    v1 = LD32(sp+8);
    goto L_0892CAA0;
L_0892CBF4:;
    v0 = v0 + 1;
    ST32(s1+72, v0);
    goto L_0892CA78;
}

/* 0892CC00 */
rv_t func_0892CC00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0892CC00:;
    sp = sp - 96;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s5 = a0 + 0;
    if (cnd_) { goto L_0892CC58; }
    goto L_0892CC34;
L_0892CC34:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892CC5C; }
    goto L_0892CC40;
L_0892CC40:;
    v0 = LD_U8(a0+56);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892CC60; }
    goto L_0892CC4C;
L_0892CC4C:;
    v0 = LD32(v1+72);
    cnd_ = v0 != 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_0892CC84; }
    goto L_0892CC58;
L_0892CC58:;
    goto L_0892CC5C;
L_0892CC5C:;
    goto L_0892CC60;
L_0892CC60:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_0892CC84:;
    a0 = s5 + 0;
    goto L_0892CC88;
L_0892CC88:;
    a1 = s6 + 0;
    v0 = func_0892CFE0(a0, a1);
    goto L_0892CC90;
L_0892CC90:;
    v0 = v0 + s5;
    v1 = LD_U8(v0+80);
    cnd_ = v1 == 0;
    v0 = v0 + 80;
    if (cnd_) { goto L_0892CCAC; }
    goto L_0892CCA0;
L_0892CCA0:;
    v0 = LD_U8(v0+3);
    cnd_ = v0 != 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_0892CFC0; }
    goto L_0892CCAC;
L_0892CCAC:;
    a2 = D_08C2BA28 - (-17880);
    v0 = a2 - 17880;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0892CD24; }
    goto L_0892CCD8;
L_0892CCD8:;
    a2 = LD32(a2-17880);
    a3 = a1 + 0;
    goto L_0892CCE0;
L_0892CCE0:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0892CD14; }
    goto L_0892CCF8;
L_0892CCF8:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s5+4); goto L_0892CD28; }
    goto L_0892CD08;
L_0892CD08:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892CCF8; }
    goto L_0892CD14;
L_0892CD14:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0892CCE0; }
    goto L_0892CD24;
L_0892CD24:;
    a0 = LD32(s5+4);
    goto L_0892CD28;
L_0892CD28:;
    a1 = s6 + 0;
    s3 = 0 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CD34;
L_0892CD34:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0892CDBC; }
    goto L_0892CD3C;
L_0892CD3C:;
    a0 = v0 + 0;
    v0 = func_0898D1CC(a0);
    goto L_0892CD44;
L_0892CD44:;
    cnd_ = v0 != 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_0892CDC0; }
    goto L_0892CD4C;
L_0892CD4C:;
    v1 = LD32(sp+8);
    cnd_ = v1 == 0;
    v0 = D_08AED500 - (-11008);
    if (cnd_) { goto L_0892CE7C; }
    goto L_0892CD58;
L_0892CD58:;
    f20 = BITSF(LD32(v0-11008));
    a0 = sp + 0;
    goto L_0892CD60;
L_0892CD60:;
    a1 = 1;
    s1 = LD32(v1);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CD6C;
L_0892CD6C:;
    v0 = LD32(s5+4);
    a0 = LD32(s1+12);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_0892CD94; }
    goto L_0892CD80;
L_0892CD80:;
    v0 = LD32(s1+192);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0892CF24; }
    goto L_0892CD90;
L_0892CD90:;
    v1 = LD32(sp+8);
    goto L_0892CD94;
L_0892CD94:;
    cnd_ = v1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0892CD60; }
    goto L_0892CD9C;
L_0892CD9C:;
    cnd_ = s3 == 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_0892CE7C; }
    goto L_0892CDA4;
L_0892CDA4:;
    v0 = LD32(s3);
    a1 = s6 + 0;
    v1 = LD32(v0-16);
    v1 = s3 + v1;
    a2 = LD32(v1+4);
    func_08926478(a0, a1, a2);
    goto L_0892CDBC;
L_0892CDBC:;
    s1 = LD32(sp);
    goto L_0892CDC0;
L_0892CDC0:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892CE44; }
    goto L_0892CDD0;
L_0892CDD0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892CE44; }
    goto L_0892CDDC;
L_0892CDDC:;
    v0 = LD32(s1);
    goto L_0892CDE0;
L_0892CDE0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892CE34; }
    goto L_0892CDF4;
L_0892CDF4:;
    v0 = LD_U8(s0+8);
    goto L_0892CDF8;
L_0892CDF8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892CE74; }
    goto L_0892CE00;
L_0892CE00:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892CE64; }
    goto L_0892CE08;
L_0892CE08:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892CE10;
L_0892CE10:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CE1C;
L_0892CE1C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892CE28;
L_0892CE28:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892CDF8; }
    goto L_0892CE30;
L_0892CE30:;
    v1 = LD32(s1+4);
    goto L_0892CE34;
L_0892CE34:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892CDE0; }
    goto L_0892CE44;
L_0892CE44:;
    v1 = LD32(s5+4);
    goto L_0892CE48;
L_0892CE48:;
    s6 = s6 + 1;
    v0 = LD32(v1+72);
    v0 = s6 < v0;
    cnd_ = v0 != 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_0892CC88; }
    goto L_0892CE5C;
L_0892CE5C:;
    goto L_0892CC5C;
L_0892CE64:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892CE10;
L_0892CE74:;
    s0 = LD32(s0+4);
    goto L_0892CE28;
L_0892CE7C:;
    a1 = LD32(s2+152);
    a0 = D_08C2A880 - (-22400);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_0892CDBC; }
    goto L_0892CE90;
L_0892CE90:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0892CEE0; }
    goto L_0892CEB4;
L_0892CEB4:;
    a0 = LD32(a2);
    goto L_0892CEB8;
L_0892CEB8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0892CF04; }
    goto L_0892CED0;
L_0892CED0:;
    a2 = LD32(a2+4);
    goto L_0892CED4;
L_0892CED4:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0892CEB8; }
    goto L_0892CEDC;
L_0892CEDC:;
    v1 = 0 + 0;
    goto L_0892CEE0;
L_0892CEE0:;
    cnd_ = v1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0892CDBC; }
    goto L_0892CEE8;
L_0892CEE8:;
    v0 = LD32(v1+200);
    ST8(v1+329, 0);
    v0 = v0 | 0x20;
    ST32(v1+200, v0);
    { rv_t r_ = func_0898D7A8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892CEFC;
L_0892CEFC:;
    s1 = LD32(sp);
    goto L_0892CDC0;
L_0892CF04:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0892CED0; }
    goto L_0892CF10;
L_0892CF10:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0892CED4; }
    goto L_0892CF1C;
L_0892CF1C:;
    goto L_0892CEE0;
L_0892CF24:;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892CF2C;
L_0892CF2C:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892CF4C;
L_0892CF4C:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(sp+8); goto L_0892CD94; }
    goto L_0892CFB8;
L_0892CFB8:;
    s3 = s1 + 0;
    goto L_0892CD9C;
L_0892CFC0:;
    a1 = s6 + 0;
    v0 = func_0892D1B8(a0, a1);
    goto L_0892CFC8;
L_0892CFC8:;
    a2 = v0 + 0;
    a0 = s5 + 0;
    a1 = s6 + 0;
    func_089263D8(a0, a1, a2);
    goto L_0892CFD8;
L_0892CFD8:;
    v1 = LD32(s5+4);
    goto L_0892CE48;
}

/* 0892CFE0 */
u32 func_0892CFE0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0892CFE0:;
    sp = sp - 96;
    s3 = a0 + 0;
    a0 = LD32(a0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D008;
L_0892D008:;
    v1 = D_08C2BA28 - (-17880);
    v1 = v1 - 17880;
    s2 = v0 + 0;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D038;
L_0892D038:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    v0 = D_08AED504 - (-11004);
    if (cnd_) { goto L_0892D104; }
    goto L_0892D044;
L_0892D044:;
    f20 = BITSF(LD32(v0-11004));
    s1 = LD32(a0);
    goto L_0892D04C;
L_0892D04C:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D058;
L_0892D058:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892D074;
L_0892D074:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D080;
L_0892D080:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_0892D0FC; }
    goto L_0892D0EC;
L_0892D0EC:;
    v1 = LD32(s1+192);
    v0 = (v1 >> 2) & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_0892D14C; }
    goto L_0892D0FC;
L_0892D0FC:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_0892D04C; }
    goto L_0892D104;
L_0892D104:;
    a0 = LD32(sp);
    goto L_0892D108;
L_0892D108:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892D13C; }
    goto L_0892D118;
L_0892D118:;
    v0 = 0 + 0;
    goto L_0892D11C;
L_0892D11C:;
    sp = sp + 96;
    return v0;
L_0892D13C:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D144;
L_0892D144:;
    v0 = 0 + 0;
    goto L_0892D11C;
L_0892D14C:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_0892D108; }
    goto L_0892D154;
L_0892D154:;
    v0 = LD32(s3+4);
    a0 = LD32(s1+12);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    a0 = LD32(sp);
    if (cnd_) { goto L_0892D190; }
    goto L_0892D168;
L_0892D168:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892D180; }
    goto L_0892D178;
L_0892D178:;
    v0 = 2;
    goto L_0892D11C;
L_0892D180:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D188;
L_0892D188:;
    v0 = 2;
    goto L_0892D11C;
L_0892D190:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892D1A8; }
    goto L_0892D1A0;
L_0892D1A0:;
    v0 = 1;
    goto L_0892D11C;
L_0892D1A8:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D1B0;
L_0892D1B0:;
    v0 = 1;
    goto L_0892D11C;
}

/* 0892D1B8 */
u32 func_0892D1B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0892D1B8:;
    sp = sp - 128;
    s5 = 999;
    s2 = a0 + 0;
    a0 = LD32(a0+4);
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D1F4;
L_0892D1F4:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0892D3A0; }
    goto L_0892D1FC;
L_0892D1FC:;
    a2 = D_08C2C664 - (-14748);
    v0 = a2 - 14748;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    a0 = sp + 0;
    v1 = v1 + 1;
    ST32(v0+8, v1);
    v1 = D_08AED508 - (-11000);
    f21 = BITSF(LD32(v1-11000));
    ST32(sp, v0);
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0892D27C; }
    goto L_0892D230;
L_0892D230:;
    a2 = LD32(a2-14748);
    a3 = a1 + 0;
    goto L_0892D238;
L_0892D238:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0892D26C; }
    goto L_0892D250;
L_0892D250:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_0892D280; }
    goto L_0892D260;
L_0892D260:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892D250; }
    goto L_0892D26C;
L_0892D26C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0892D238; }
    goto L_0892D27C;
L_0892D27C:;
    s0 = LD32(sp+8);
    goto L_0892D280;
L_0892D280:;
    cnd_ = s0 == 0;
    v0 = D_08AED50C - (-10996);
    if (cnd_) { goto L_0892D318; }
    goto L_0892D288;
L_0892D288:;
    f22 = BITSF(LD32(v0-10996));
    f20 = BITSF(0);
    s1 = D_08C2A880 - (-22400);
    s0 = LD32(s0);
    goto L_0892D298;
L_0892D298:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D2A4;
L_0892D2A4:;
    s0 = LD32(s0+28);
    a2 = 1;
    a0 = s1 - 22400;
    a1 = s0 + 0;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D2B8;
L_0892D2B8:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0892D30C; }
    goto L_0892D2C0;
L_0892D2C0:;
    v0 = LD_U8(v0+5);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(sp+8); goto L_0892D310; }
    goto L_0892D2CC;
L_0892D2CC:;
    v0 = LD_U8(a1+64);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(sp+8); goto L_0892D310; }
    goto L_0892D2D8;
L_0892D2D8:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    a2 = a1 + v1;
    f0 = BITSF(LD32(a2+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { s0 = LD32(sp+8); goto L_0892D310; }
    goto L_0892D2F8;
L_0892D2F8:;
    v0 = LD32(s2+8);
    a1 = LD32(a1+12);
    v1 = LD32(v0+76);
    cnd_ = a1 == v1;
    a0 = a2 + 0;
    if (cnd_) { goto L_0892D3EC; }
    goto L_0892D30C;
L_0892D30C:;
    s0 = LD32(sp+8);
    goto L_0892D310;
L_0892D310:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_0892D298; }
    goto L_0892D318;
L_0892D318:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892D3A0; }
    goto L_0892D32C;
L_0892D32C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892D3A0; }
    goto L_0892D338;
L_0892D338:;
    v0 = LD32(s1);
    goto L_0892D33C;
L_0892D33C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892D390; }
    goto L_0892D350;
L_0892D350:;
    v0 = LD_U8(s0+8);
    goto L_0892D354;
L_0892D354:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892D3E4; }
    goto L_0892D35C;
L_0892D35C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892D3D4; }
    goto L_0892D364;
L_0892D364:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892D36C;
L_0892D36C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D378;
L_0892D378:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892D384;
L_0892D384:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892D354; }
    goto L_0892D38C;
L_0892D38C:;
    v1 = LD32(s1+4);
    goto L_0892D390;
L_0892D390:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892D33C; }
    goto L_0892D3A0;
L_0892D3A0:;
    v0 = s5 + 0;
    sp = sp + 128;
    return v0;
L_0892D3D4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892D36C;
L_0892D3E4:;
    s0 = LD32(s0+4);
    goto L_0892D384;
L_0892D3EC:;
    v1 = LD32(a2);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892D3FC;
L_0892D3FC:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = s3 + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D41C;
L_0892D41C:;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f3 = f3 - f0;
    f2 = f2 - f4;
    f1 = f1 - f5;
    ST32(sp+32, FBITS(f0));
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f3));
    fcc = FCMP(f0, f21, 12);
    ST32(sp+52, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f1));
    if (cnd_) { goto L_0892D30C; }
    goto L_0892D48C;
L_0892D48C:;
    fcc = FCMP(f0, f22, 12);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(sp+8); goto L_0892D310; }
    goto L_0892D49C;
L_0892D49C:;
    f21 = BITSF(v0);
    s5 = s0 + 0;
    goto L_0892D30C;
}

/* 0892D4A8 */
rv_t func_0892D4A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0892D4A8:;
    sp = sp - 144;
    s2 = a0 + 0;
    a0 = 0 + 0;
    goto L_0892D4DC;
L_0892D4DC:;
    v1 = a0 + s2;
    a0 = a0 + 1;
    v0 = a0 < 0x3u;
    cnd_ = v0 != 0;
    ST8(v1+80, 0);
    if (cnd_) { goto L_0892D4DC; }
    goto L_0892D4F0;
L_0892D4F0:;
    v1 = D_08C2BA28 - (-17880);
    v1 = v1 - 17880;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D51C;
L_0892D51C:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    v0 = D_08C2C664 - (-14748);
    if (cnd_) { goto L_0892D654; }
    goto L_0892D528;
L_0892D528:;
    s5 = v0 - 14748;
    s1 = LD32(a0);
    goto L_0892D530;
L_0892D530:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D53C;
L_0892D53C:;
    v1 = LD32(s1+192);
    v0 = (v1 >> 2) & 0x1;
    cnd_ = v0 != 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_0892D64C; }
    goto L_0892D54C;
L_0892D54C:;
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892D78C; }
    goto L_0892D558;
L_0892D558:;
    v1 = LD32(s2+4);
    a0 = LD32(s1+12);
    v0 = LD32(v1+76);
    cnd_ = a0 == v0;
    if (cnd_) { v0 = LD32(s1+176); goto L_0892D778; }
    goto L_0892D56C;
L_0892D56C:;
    ST8(s2+83, 0);
    goto L_0892D570;
L_0892D570:;
    v0 = LD32(s5+8);
    s4 = sp + 16;
    a0 = s4 + 0;
    v0 = v0 + 1;
    a1 = 1;
    ST32(s5+8, v0);
    ST32(sp+16, s5);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D598;
L_0892D598:;
    s0 = LD32(sp+24);
    cnd_ = s0 == 0;
    v0 = D_08AED510 - (-10992);
    if (cnd_) { goto L_0892D634; }
    goto L_0892D5A4;
L_0892D5A4:;
    f21 = BITSF(LD32(v0-10992));
    f20 = BITSF(0);
    s6 = s3 + s2;
    s3 = D_08C2A880 - (-22400);
    s0 = LD32(s0);
    goto L_0892D5B8;
L_0892D5B8:;
    a0 = s4 + 0;
    a1 = 1;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D5C4;
L_0892D5C4:;
    a1 = LD32(s0+28);
    a2 = 1;
    a0 = s3 - 22400;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D5D4;
L_0892D5D4:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0892D628; }
    goto L_0892D5DC;
L_0892D5DC:;
    v0 = LD_U8(v0+5);
    cnd_ = v0 == 0;
    s0 = LD32(sp+24);
    if (cnd_) { goto L_0892D62C; }
    goto L_0892D5E8;
L_0892D5E8:;
    v0 = LD_U8(a1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892D62C; }
    goto L_0892D5F4;
L_0892D5F4:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    a2 = a1 + v1;
    f0 = BITSF(LD32(a2+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_0892D62C; }
    goto L_0892D614;
L_0892D614:;
    v0 = LD32(s2+8);
    a1 = LD32(a1+12);
    v1 = LD32(v0+76);
    cnd_ = a1 == v1;
    a0 = a2 + 0;
    if (cnd_) { goto L_0892D6B8; }
    goto L_0892D628;
L_0892D628:;
    s0 = LD32(sp+24);
    goto L_0892D62C;
L_0892D62C:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_0892D5B8; }
    goto L_0892D634;
L_0892D634:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892D6A8; }
    goto L_0892D648;
L_0892D648:;
    a0 = LD32(sp+8);
    goto L_0892D64C;
L_0892D64C:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_0892D530; }
    goto L_0892D654;
L_0892D654:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892D698; }
    goto L_0892D668;
L_0892D668:;
    goto L_0892D66C;
L_0892D66C:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_0892D698:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D6A0;
L_0892D6A0:;
    goto L_0892D66C;
L_0892D6A8:;
    { u64 r_ = func_08ABCFE8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D6B0;
L_0892D6B0:;
    a0 = LD32(sp+8);
    goto L_0892D64C;
L_0892D6B8:;
    v1 = LD32(a2);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892D6C8;
L_0892D6C8:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+40, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892D6FC;
L_0892D6FC:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    f4 = f4 - f0;
    f3 = f3 - f1;
    f2 = f2 - f5;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+56, FBITS(f5));
    fcc = FCMP(f0, f21, 12);
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f2));
    if (cnd_) { goto L_0892D628; }
    goto L_0892D76C;
L_0892D76C:;
    v0 = 1;
    ST8(s6+80, v0);
    goto L_0892D628;
L_0892D778:;
    cnd_ = v0 != a0;
    if (cnd_) { ST8(s2+83, 0); goto L_0892D570; }
    goto L_0892D780;
L_0892D780:;
    v0 = 1;
    ST8(s2+83, v0);
    goto L_0892D570;
L_0892D78C:;
    v1 = LD32(s2+4);
    v0 = LD32(s1+12);
    s3 = 1;
    a0 = LD32(v1+76);
    v1 = 2;
    v0 = v0 ^ a0;
    if (v0 != 0) s3 = v1;
    goto L_0892D570;
}

/* 0892D7AC */
rv_t func_0892D7AC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0892D7AC:;
    sp = sp - 144;
    v1 = D_08C2BA28 - (-17880);
    v1 = v1 - 17880;
    a1 = 1;
    s1 = a0 + 0;
    a0 = sp + 0;
    s2 = 0 + 0;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D800;
L_0892D800:;
    a2 = LD32(sp+8);
    cnd_ = a2 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0892D858; }
    goto L_0892D80C;
L_0892D80C:;
    a0 = LD32(sp);
    goto L_0892D810;
L_0892D810:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892D848; }
    goto L_0892D820;
L_0892D820:;
    v0 = 0 + 0;
    goto L_0892D824;
L_0892D824:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_0892D848:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D850;
L_0892D850:;
    v0 = 0 + 0;
    goto L_0892D824;
L_0892D858:;
    a1 = 1;
    s0 = LD32(a2);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D864;
L_0892D864:;
    a0 = LD32(s1+4);
    v1 = LD32(s0+12);
    v0 = LD32(a0+76);
    cnd_ = v1 == v0;
    a2 = LD32(sp+8);
    if (cnd_) { goto L_0892DA40; }
    goto L_0892D878;
L_0892D878:;
    cnd_ = a2 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0892D858; }
    goto L_0892D880;
L_0892D880:;
    cnd_ = s2 == 0;
    v1 = D_08C2C664 - (-14748);
    if (cnd_) { goto L_0892D80C; }
    goto L_0892D888;
L_0892D888:;
    v1 = v1 - 14748;
    v0 = LD32(v1+8);
    s3 = sp + 16;
    a0 = s3 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    ST32(sp+16, v1);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D8B4;
L_0892D8B4:;
    s0 = LD32(sp+24);
    cnd_ = s0 == 0;
    v0 = D_08AED514 - (-10988);
    if (cnd_) { goto L_0892D910; }
    goto L_0892D8C0;
L_0892D8C0:;
    f20 = BITSF(LD32(v0-10988));
    s4 = D_08C2A880 - (-22400);
    s0 = LD32(s0);
    goto L_0892D8CC;
L_0892D8CC:;
    a0 = s3 + 0;
    a1 = 1;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D8D8;
L_0892D8D8:;
    a1 = LD32(s0+28);
    a2 = 1;
    a0 = s4 - 22400;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D8E8;
L_0892D8E8:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0892D904; }
    goto L_0892D8F0;
L_0892D8F0:;
    v0 = LD32(s1+8);
    a0 = LD32(a1+12);
    v1 = LD32(v0+76);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(a1); goto L_0892D934; }
    goto L_0892D904;
L_0892D904:;
    s0 = LD32(sp+24);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_0892D8CC; }
    goto L_0892D910;
L_0892D910:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892D80C; }
    goto L_0892D924;
L_0892D924:;
    { u64 r_ = func_08ABCFE8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892D92C;
L_0892D92C:;
    a0 = LD32(sp);
    goto L_0892D810;
L_0892D934:;
    a0 = LD32(v0-12);
    a0 = a1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892D94C;
L_0892D94C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+40, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892D980;
L_0892D980:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    f4 = f4 - f0;
    f3 = f3 - f1;
    f2 = f2 - f5;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+56, FBITS(f5));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f2));
    if (cnd_) { goto L_0892D904; }
    goto L_0892D9F0;
L_0892D9F0:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892DA30; }
    goto L_0892DA04;
L_0892DA04:;
    a0 = LD32(sp);
    goto L_0892DA08;
L_0892DA08:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892DA20; }
    goto L_0892DA18;
L_0892DA18:;
    v0 = 1;
    goto L_0892D824;
L_0892DA20:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892DA28;
L_0892DA28:;
    v0 = 1;
    goto L_0892D824;
L_0892DA30:;
    { u64 r_ = func_08ABCFE8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892DA38;
L_0892DA38:;
    a0 = LD32(sp);
    goto L_0892DA08;
L_0892DA40:;
    v0 = LD32(s0+192);
    v1 = v0 & 0x1;
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { if (v1 != 0) s2 = s0; goto L_0892D878; }
    goto L_0892DA54;
L_0892DA54:;
    goto L_0892D878;
}

/* 0892DA5C */
rv_t func_0892DA5C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0892DA5C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C255AC - (21932);
    t1 = D_08C255BC - (21948);
    t2 = D_08C255CC - (21964);
    a1 = a1 & a0;
    v1 = t0 + 21932;
    a2 = t1 + 21948;
    cnd_ = a1 == 0;
    a3 = t2 + 21964;
    if (cnd_) { goto L_0892DB14; }
    goto L_0892DA8C;
L_0892DA8C:;
    v0 = D_08AED518 - (-10984);
    f4 = BITSF(LD32(v0-10984));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+21932, FBITS(f2));
    ST32(t1+21948, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+21964, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0892DB14;
L_0892DB14:;
    return (rv_t){ v0, v1, f0 };
}

/* 0892DB1C */
rv_t func_0892DB1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892DB1C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0892DA5C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DB30;
L_0892DB30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892DB3C */
u64 func_0892DB3C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892DB3C:;
    sp = sp - 16;
    a2 = 1018;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892DB5C;
L_0892DB5C:;
    v0 = D_08AF8418 - (-31720);
    v0 = v0 - 31720;
    ST32(s0, v0);
    a0 = s0 + 40;
    func_089272EC(a0);
    goto L_0892DB70;
L_0892DB70:;
    a0 = s0 + 216;
    func_0892C73C(a0);
    goto L_0892DB78;
L_0892DB78:;
    a0 = s0 + 304;
    func_08929058(a0);
    goto L_0892DB80;
L_0892DB80:;
    a0 = s0 + 532;
    { u64 r_ = func_0892AEE0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892DB88;
L_0892DB88:;
    ST32(s0+28, s1);
    ST8(s0+36, 0);
    ST32(s0+32, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0892DBA8 */
rv_t func_0892DBA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892DBA8:;
    v0 = D_08AF8418 - (-31720);
    v0 = v0 - 31720;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 532;
    { rv_t r_ = func_0892AF30(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DBCC;
L_0892DBCC:;
    a0 = s0 + 304;
    { rv_t r_ = func_08929094(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DBD4;
L_0892DBD4:;
    a0 = s0 + 216;
    { rv_t r_ = func_0892C76C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DBDC;
L_0892DBDC:;
    a0 = s0 + 40;
    { rv_t r_ = func_08927384(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DBE4;
L_0892DBE4:;
    a0 = s0 + 0;
    v0 = func_08955388(a0);
    goto L_0892DBEC;
L_0892DBEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892DBFC */
rv_t func_0892DBFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892DBFC:;
    v0 = D_08AF8418 - (-31720);
    v0 = v0 - 31720;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 532;
    { rv_t r_ = func_0892AF30(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DC20;
L_0892DC20:;
    a0 = s0 + 304;
    { rv_t r_ = func_08929094(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DC28;
L_0892DC28:;
    a0 = s0 + 216;
    { rv_t r_ = func_0892C76C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DC30;
L_0892DC30:;
    a0 = s0 + 40;
    { rv_t r_ = func_08927384(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DC38;
L_0892DC38:;
    a0 = s0 + 0;
    v0 = func_08955388(a0);
    goto L_0892DC40;
L_0892DC40:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892DC48;
L_0892DC48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892DC58 */
rv_t func_0892DC58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0892DC58:;
    return (rv_t){ v0, v1, f0 };
}

/* 0892DC60 */
rv_t func_0892DC60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0892DC60:;
    return (rv_t){ v0, v1, f0 };
}

/* 0892DC68 */
rv_t func_0892DC68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0892DC68:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0892DC70 */
rv_t func_0892DC70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0892DC70:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0892DCA4; }
    goto L_0892DC90;
L_0892DC90:;
    goto L_0892DC94;
L_0892DC94:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0892DCA4:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    s0 = LD32(v0+12);
    v0 = func_089224D8(a0, a1);
    goto L_0892DCB4;
L_0892DCB4:;
    a0 = LD32(s1+28);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DCC8;
L_0892DCC8:;
    ST32(sp, s0);
    cnd_ = s0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0892DCA4; }
    goto L_0892DCD4;
L_0892DCD4:;
    goto L_0892DC94;
}

/* 0892DCDC */
rv_t func_0892DCDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0892DCDC:;
    return (rv_t){ v0, v1, f0 };
}

/* 0892DCE4 */
rv_t func_0892DCE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892DCE4:;
    sp = sp - 16;
    s2 = D_08C28F60 - (-28832);
    s1 = a0 + 532;
    v0 = LD_U8(a0+36);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0892DE20; }
    goto L_0892DD0C;
L_0892DD0C:;
    a0 = s0 + 0;
    func_0892DE98(a0);
    goto L_0892DD14;
L_0892DD14:;
    a0 = s1 + 0;
    { rv_t r_ = func_0892AFC4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DD1C;
L_0892DD1C:;
    v0 = (u32)-68;
    cnd_ = s1 == v0;
    v1 = LD32(s2-28832);
    if (cnd_) { goto L_0892DE0C; }
    goto L_0892DD28;
L_0892DD28:;
    v0 = 5;
    goto L_0892DD2C;
L_0892DD2C:;
    cnd_ = v1 == v0;
    v1 = LD32(s2-28832);
    if (cnd_) { goto L_0892DDEC; }
    goto L_0892DD34;
L_0892DD34:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_0892DDC0; }
    goto L_0892DD40;
L_0892DD40:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0892DDC0; }
    goto L_0892DD48;
L_0892DD48:;
    cnd_ = v1 == v0;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_0892DDC0; }
    goto L_0892DD50;
L_0892DD50:;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    if (cnd_) { s0 = s0 + 40; goto L_0892DD98; }
    goto L_0892DD5C;
L_0892DD5C:;
    s0 = s0 + 216;
    a0 = s0 + 0;
    { rv_t r_ = func_0892C7EC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DD68;
L_0892DD68:;
    a0 = s0 + 0;
    { rv_t r_ = func_0892C844(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DD70;
L_0892DD70:;
    a0 = s0 + 0;
    { rv_t r_ = func_0892C860(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DD78;
L_0892DD78:;
    a0 = s0 + 0;
    { rv_t r_ = func_0892CC00(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DD80;
L_0892DD80:;
    goto L_0892DD84;
L_0892DD84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892DD98:;
    a0 = s0 + 0;
    { rv_t r_ = func_08927404(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDA0;
L_0892DDA0:;
    a0 = s0 + 0;
    { rv_t r_ = func_0892745C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDA8;
L_0892DDA8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0892774C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDB0;
L_0892DDB0:;
    a0 = s0 + 0;
    { rv_t r_ = func_089279D4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDB8;
L_0892DDB8:;
    goto L_0892DD84;
L_0892DDC0:;
    s0 = s0 + 304;
    a0 = s0 + 0;
    { rv_t r_ = func_08929120(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDCC;
L_0892DDCC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08929A30(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDD4;
L_0892DDD4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08929C9C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDDC;
L_0892DDDC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08929EBC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDE4;
L_0892DDE4:;
    goto L_0892DD84;
L_0892DDEC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0892B2EC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDF4;
L_0892DDF4:;
    a0 = s1 + 0;
    { rv_t r_ = func_0892B554(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DDFC;
L_0892DDFC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0892B818(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DE04;
L_0892DE04:;
    goto L_0892DD84;
L_0892DE0C:;
    v0 = LD32(s1+84);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892DD34; }
    goto L_0892DE18;
L_0892DE18:;
    v0 = 5;
    goto L_0892DD2C;
L_0892DE20:;
    func_0892DF24(a0, t1, t2, t3);
    goto L_0892DE28;
L_0892DE28:;
    a1 = LD32(s0+28);
    cnd_ = a1 != 0;
    v0 = 1;
    if (cnd_) { goto L_0892DE3C; }
    goto L_0892DE34;
L_0892DE34:;
    ST8(s0+36, v0);
    goto L_0892DD0C;
L_0892DE3C:;
    a0 = s0 + 40;
    { rv_t r_ = func_089273E4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DE44;
L_0892DE44:;
    a1 = LD32(s0+28);
    a0 = s0 + 216;
    { rv_t r_ = func_0892C7CC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DE50;
L_0892DE50:;
    a1 = LD32(s0+28);
    a0 = s1 + 0;
    { rv_t r_ = func_0892AF90(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DE5C;
L_0892DE5C:;
    v1 = LD32(s2-28832);
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s0+28); goto L_0892DE88; }
    goto L_0892DE6C;
L_0892DE6C:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s0+28); goto L_0892DE88; }
    goto L_0892DE78;
L_0892DE78:;
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = 1; goto L_0892DE34; }
    goto L_0892DE84;
L_0892DE84:;
    a1 = LD32(s0+28);
    goto L_0892DE88;
L_0892DE88:;
    a0 = s0 + 304;
    { rv_t r_ = func_089290F4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892DE90;
L_0892DE90:;
    v0 = 1;
    goto L_0892DE34;
}

/* 0892DE98 */
void func_0892DE98(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892DE98:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+28);
    a0 = LD32(a0+48);
    v0 = LD32(a0+72);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0892DED4; }
    goto L_0892DEC0;
L_0892DEC0:;
    goto L_0892DEC8;
L_0892DEC8:;
    sp = sp + 16;
    return;
L_0892DED4:;
    a1 = s0 + 0;
    { u64 r_ = func_0898BC68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892DEDC;
L_0892DEDC:;
    a0 = v0 + 0;
    v0 = func_0898D1CC(a0);
    goto L_0892DEE4;
L_0892DEE4:;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_0892DF10; }
    goto L_0892DEF0;
L_0892DEF0:;
    a0 = LD32(s1+28);
    goto L_0892DEF4;
L_0892DEF4:;
    a0 = LD32(a0+48);
    v0 = LD32(a0+72);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892DED4; }
    goto L_0892DF08;
L_0892DF08:;
    goto L_0892DEC8;
L_0892DF10:;
    v0 = LD32(s1+28);
    a0 = LD32(v0+48);
    func_0898BBAC(a0, a1);
    goto L_0892DF1C;
L_0892DF1C:;
    a0 = LD32(s1+28);
    goto L_0892DEF4;
}

/* 0892DF24 */
void func_0892DF24(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0892DF24:;
    sp = sp - 48;
    a2 = D_08C2A330 - (-23760);
    v1 = a2 - 23760;
    s2 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0892DFBC; }
    goto L_0892DF70;
L_0892DF70:;
    a2 = LD32(a2-23760);
    a3 = a1 + 0;
    goto L_0892DF78;
L_0892DF78:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0892DFAC; }
    goto L_0892DF90;
L_0892DF90:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+28); goto L_0892DFC0; }
    goto L_0892DFA0;
L_0892DFA0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0892DF90; }
    goto L_0892DFAC;
L_0892DFAC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0892DF78; }
    goto L_0892DFBC;
L_0892DFBC:;
    v0 = LD32(s2+28);
    goto L_0892DFC0;
L_0892DFC0:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    s1 = LD32(v0+48);
    if (cnd_) { goto L_0892E08C; }
    goto L_0892DFCC;
L_0892DFCC:;
    s1 = LD32(sp);
    goto L_0892DFD0;
L_0892DFD0:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892E054; }
    goto L_0892DFE0;
L_0892DFE0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892E054; }
    goto L_0892DFEC;
L_0892DFEC:;
    v0 = LD32(s1);
    goto L_0892DFF0;
L_0892DFF0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0892E044; }
    goto L_0892E004;
L_0892E004:;
    v0 = LD_U8(s0+8);
    goto L_0892E008;
L_0892E008:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0892E084; }
    goto L_0892E010;
L_0892E010:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892E074; }
    goto L_0892E018;
L_0892E018:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0892E020;
L_0892E020:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E02C;
L_0892E02C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0892E038;
L_0892E038:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0892E008; }
    goto L_0892E040;
L_0892E040:;
    v1 = LD32(s1+4);
    goto L_0892E044;
L_0892E044:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0892DFF0; }
    goto L_0892E054;
L_0892E054:;
    sp = sp + 48;
    return;
L_0892E074:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0892E020;
L_0892E084:;
    s0 = LD32(s0+4);
    goto L_0892E038;
L_0892E08C:;
    s0 = LD32(a0);
    goto L_0892E090;
L_0892E090:;
    a1 = 1;
    a0 = sp + 0;
    func_08ABC660(a0, a1);
    goto L_0892E09C;
L_0892E09C:;
    v1 = LD32(s0+76);
    v0 = LD32(s1+76);
    cnd_ = v1 == v0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_0892E0B0; }
    goto L_0892E0AC;
L_0892E0AC:;
    ST32(s2+32, s0);
    goto L_0892E0B0;
L_0892E0B0:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_0892E090; }
    goto L_0892E0B8;
L_0892E0B8:;
    s1 = LD32(sp);
    goto L_0892DFD0;
}

/* 0892E0C0 */
rv_t func_0892E0C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0892E0C0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2565C - (22108);
    t1 = D_08C2566C - (22124);
    t2 = D_08C2567C - (22140);
    a1 = a1 & a0;
    v1 = t0 + 22108;
    a2 = t1 + 22124;
    cnd_ = a1 == 0;
    a3 = t2 + 22140;
    if (cnd_) { goto L_0892E178; }
    goto L_0892E0F0;
L_0892E0F0:;
    v0 = D_08AED520 - (-10976);
    f4 = BITSF(LD32(v0-10976));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+22108, FBITS(f2));
    ST32(t1+22124, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+22140, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0892E178;
L_0892E178:;
    return (rv_t){ v0, v1, f0 };
}

/* 0892E180 */
rv_t func_0892E180(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892E180:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0892E0C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892E194;
L_0892E194:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0892E1A0 */
void func_0892E1A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892E1A0:;
    sp = sp - 16;
    a1 = 999;
    s1 = a0 + 0;
    v1 = s1 + 16;
    ST32(a0+4, 0);
    a0 = 0 + 0;
    goto L_0892E1C4;
L_0892E1C4:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, a1);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0892E1C4; }
    goto L_0892E1D8;
L_0892E1D8:;
    ST32(s1+48, a1);
    a0 = 24;
    ST32(s1+44, 0);
    ST8(s1+9, 0);
    ST8(s1+10, 0);
    ST8(s1+8, 0);
    ST8(s1+11, 0);
    ST32(s1+12, 0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892E1FC;
L_0892E1FC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 3;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892E20C;
L_0892E20C:;
    ST32(s1, s0);
    sp = sp + 16;
    return;
}

/* 0892E224 */
void func_0892E224(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892E224:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0892E24C; }
    goto L_0892E23C;
L_0892E23C:;
    goto L_0892E240;
L_0892E240:;
    sp = sp + 16;
    return;
L_0892E24C:;
    func_0895D93C(a0, t1, t2, t3);
    goto L_0892E254;
L_0892E254:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E25C;
L_0892E25C:;
    goto L_0892E240;
}

/* 0892E264 */
rv_t func_0892E264(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892E264:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_0892E348; }
    goto L_0892E288;
L_0892E288:;
    a3 = LD32(s1+44);
    s0 = 0 + 0;
    cnd_ = a3 == 0;
    s2 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_0892E344; }
    goto L_0892E298;
L_0892E298:;
    v0 = s0 << 2;
    v0 = v0 + s1;
    v1 = LD32(v0+16);
    v0 = 999;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a2 = LD32(v1+152);
    cnd_ = a2 == v0;
    v1 = s2 - 22400;
    if (cnd_) { goto L_0892E32C; }
    goto L_0892E2BC;
L_0892E2BC:;
    v0 = LD32(v1+4);
    v1 = D_08C2A880 - (-22400);
    a0 = LD32(v1-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0892E310; }
    goto L_0892E2E4;
L_0892E2E4:;
    a0 = LD32(a1);
    goto L_0892E2E8;
L_0892E2E8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0892E3E0; }
    goto L_0892E300;
L_0892E300:;
    a1 = LD32(a1+4);
    goto L_0892E304;
L_0892E304:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0892E2E8; }
    goto L_0892E30C;
L_0892E30C:;
    a0 = 0 + 0;
    goto L_0892E310;
L_0892E310:;
    cnd_ = a0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_0892E330; }
    goto L_0892E318;
L_0892E318:;
    v1 = LD32(a0);
    v0 = LD32(v1+140);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892E328;
L_0892E328:;
    a3 = LD32(s1+44);
    goto L_0892E32C;
L_0892E32C:;
    s0 = s0 + 1;
    goto L_0892E330;
L_0892E330:;
    v0 = s0 < a3;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_0892E348; }
    goto L_0892E33C;
L_0892E33C:;
    a0 = LD32(s1+4);
    goto L_0892E298;
L_0892E344:;
    ST32(s1+4, 0);
    goto L_0892E348;
L_0892E348:;
    a1 = 0 + 0;
    a2 = (u32)-1;
    a0 = s1 + 36;
    v1 = s1 + 16;
    goto L_0892E358;
L_0892E358:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST32(v1, a2);
    v1 = v1 + 4;
    ST8(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_0892E358; }
    goto L_0892E374;
L_0892E374:;
    s0 = LD32(s1);
    ST32(s1+48, a2);
    ST32(s1+44, 0);
    ST8(s1+9, 0);
    ST8(s1+10, 0);
    ST8(s1+8, 0);
    cnd_ = s0 != 0;
    ST8(s1+11, 0);
    if (cnd_) { goto L_0892E3C8; }
    goto L_0892E394;
L_0892E394:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892E39C;
L_0892E39C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 3;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892E3AC;
L_0892E3AC:;
    ST32(s1, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0892E3C8:;
    a0 = s0 + 0;
    func_0895D93C(a0, t1, t2, t3);
    goto L_0892E3D0;
L_0892E3D0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E3D8;
L_0892E3D8:;
    goto L_0892E394;
L_0892E3E0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0892E304; }
    goto L_0892E3EC;
L_0892E3EC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0892E304; }
    goto L_0892E3F8;
L_0892E3F8:;
    goto L_0892E310;
}

/* 0892E400 */
void func_0892E400(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0;
    int cnd_;
L_0892E400:;
    ST32(a0+4, a1);
    t1 = a0 + 0;
    a1 = 0 + 0;
    ST32(a0+48, t0);
    cnd_ = a2 == 0;
    ST32(a0+44, a2);
    if (cnd_) { goto L_0892E438; }
    goto L_0892E418;
L_0892E418:;
    v1 = a1 << 2;
    v0 = v1 + a3;
    a0 = LD32(v0);
    a1 = a1 + 1;
    v1 = v1 + t1;
    v0 = a1 < a2;
    cnd_ = v0 != 0;
    ST32(v1+16, a0);
    if (cnd_) { goto L_0892E418; }
    goto L_0892E438;
L_0892E438:;
    return;
}

/* 0892E440 */
void func_0892E440(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892E440:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a1 = LD32(v0);
    func_0892E47C(a0, a1);
    goto L_0892E45C;
L_0892E45C:;
    a0 = s0 + 0;
    func_0892E4E4(a0);
    goto L_0892E464;
L_0892E464:;
    a0 = LD32(s0);
    { rv_t r_ = func_0895D9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892E46C;
L_0892E46C:;
    sp = sp + 16;
    return;
}

/* 0892E47C */
void func_0892E47C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0892E47C:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    v1 = (s32)a1 < 2;
    if (cnd_) { goto L_0892E4D4; }
    goto L_0892E490;
L_0892E490:;
    cnd_ = v1 != 0;
    v0 = 2;
    if (cnd_) { goto L_0892E4BC; }
    goto L_0892E498;
L_0892E498:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0892E4AC; }
    goto L_0892E4A0;
L_0892E4A0:;
    goto L_0892E4A4;
L_0892E4A4:;
    sp = sp + 16;
    return;
L_0892E4AC:;
    func_0892EF1C(a0);
    goto L_0892E4B4;
L_0892E4B4:;
    goto L_0892E4A4;
L_0892E4BC:;
    cnd_ = a1 != 0;
    if (cnd_) {  goto L_0892E4A4; }
    goto L_0892E4C4;
L_0892E4C4:;
    func_0892E5C4(a0);
    goto L_0892E4CC;
L_0892E4CC:;
    goto L_0892E4A4;
L_0892E4D4:;
    func_0892E97C(a0);
    goto L_0892E4DC;
L_0892E4DC:;
    goto L_0892E4A4;
}

/* 0892E4E4 */
void func_0892E4E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0892E4E4:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = LD32(a0);
    func_0895DB54(a0);
    goto L_0892E500;
L_0892E500:;
    v0 = D_08AED524 - (-10972);
    f0 = BITSF(LD32(v0-10972));
    a0 = s0 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    v0 = func_0892F63C(a0, a1);
    goto L_0892E518;
L_0892E518:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0892E554; }
    goto L_0892E524;
L_0892E524:;
    { u64 r_ = func_0892E8A8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E52C;
L_0892E52C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+236); goto L_0892E568; }
    goto L_0892E534;
L_0892E534:;
    a0 = LD32(s0);
    v0 = D_08AED528 - (-10968);
    f0 = BITSF(LD32(v0-10968));
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    goto L_0892E548;
L_0892E548:;
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    goto L_0892E554;
L_0892E554:;
    sp = sp + 32;
    return;
L_0892E568:;
    v0 = D_08AD9BB0 - (-25680);
    v0 = v0 - 25680;
    v1 = v1 << 2;
    v1 = v1 + v0;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(sp));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    a0 = LD32(s0);
    if (cnd_) { goto L_0892E59C; }
    goto L_0892E590;
L_0892E590:;
    v0 = LD_U8(s0+11);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892E5B0; }
    goto L_0892E59C;
L_0892E59C:;
    v0 = D_08AED528 - (-10968);
    f0 = BITSF(LD32(v0-10968));
    v1 = LD32(a0+12);
    v0 = LD32(v1+8);
    goto L_0892E548;
L_0892E5B0:;
    v0 = D_08AED528 - (-10968);
    f0 = BITSF(LD32(v0-10968));
    v1 = LD32(a0+12);
    v0 = LD32(v1+4);
    goto L_0892E548;
}

/* 0892E5C4 */
void func_0892E5C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0892E5C4:;
    sp = sp - 112;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0892E610; }
    goto L_0892E604;
L_0892E604:;
    v0 = LD_U8(a0+9);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892E648; }
    goto L_0892E610;
L_0892E610:;
    goto L_0892E614;
L_0892E614:;
    sp = sp + 112;
    return;
L_0892E648:;
    { u64 r_ = func_08930720(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E650;
L_0892E650:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892E614; }
    goto L_0892E658;
L_0892E658:;
    v0 = LD32(s2+44);
    cnd_ = v0 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0892E848; }
    goto L_0892E664;
L_0892E664:;
    fp = D_08AED530 - (-10960);
    v0 = D_08AED52C - (-10964);
    f20 = BITSF(LD32(v0-10964));
    a1 = LD32(s2+4);
    f21 = BITSF(LD32(fp-10960));
    s6 = D_08C2A880 - (-22400);
    s7 = 1;
    s4 = s2 + 36;
    s3 = s2 + 0;
    goto L_0892E688;
L_0892E688:;
    v0 = LD32(s3+16);
    a0 = s6 - 22400;
    a2 = 1;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E6A4;
L_0892E6A4:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0892E8A0; }
    goto L_0892E6AC;
L_0892E6AC:;
    v0 = LD32(s3+16);
    v1 = LD32(s2+4);
    v0 = v0 << 2;
    a0 = v0 + v1;
    v1 = LD32(a0+204);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0892E6D8; }
    goto L_0892E6C8;
L_0892E6C8:;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v1+28, v0);
    ST32(a0+204, 0);
    goto L_0892E6D8;
L_0892E6D8:;
    a0 = LD32(s2+4);
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E6E0;
L_0892E6E0:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892E700;
L_0892E700:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    f12 = f0 + f21;
    if (cnd_) { goto L_0892E890; }
    goto L_0892E76C;
L_0892E76C:;
    ST8(s4, s7);
    a0 = s2 + 0;
    a3 = sp + 16;
    a1 = LD32(s3+16);
    a2 = LD32(s2+48);
    v0 = func_089301A8(a0, a1, a3);
    goto L_0892E784;
L_0892E784:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_0892E874; }
    goto L_0892E78C;
L_0892E78C:;
    a1 = D_08B28DC4 - (-29244);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a1 - 29244;
    if (cnd_) { goto L_0892E81C; }
    goto L_0892E79C;
L_0892E79C:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-29244);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0892E7E0; }
    goto L_0892E7C0;
L_0892E7C0:;
    a2 = LD32(v1);
    goto L_0892E7C4;
L_0892E7C4:;
    v0 = LD32(a2+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(a2+16); goto L_0892E854; }
    goto L_0892E7D0;
L_0892E7D0:;
    v1 = LD32(v1+4);
    goto L_0892E7D4;
L_0892E7D4:;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1); goto L_0892E7C4; }
    goto L_0892E7DC;
L_0892E7DC:;
    a2 = 0 + 0;
    goto L_0892E7E0;
L_0892E7E0:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_0892E820; }
    goto L_0892E7E8;
L_0892E7E8:;
    v0 = LD32(a2+28);
    v1 = LD32(s3+16);
    a0 = LD32(s2+4);
    v0 = v0 | 0x2;
    ST32(a2+28, v0);
    v1 = v1 << 2;
    v1 = v1 + a0;
    ST32(v1+204, a2);
    a0 = s2 + 0;
    a2 = a2 + 32;
    a1 = LD32(s3+16);
    a3 = 0 + 0;
    { u64 r_ = func_0893065C(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E81C;
L_0892E81C:;
    v0 = LD32(s2+4);
    goto L_0892E820;
L_0892E820:;
    v1 = LD32(s3+16);
    a0 = LD32(s2+44);
    s5 = s5 + 1;
    v1 = v1 + v0;
    a0 = s5 < a0;
    a1 = v0 + 0;
    ST8(v1+196, 0);
    s3 = s3 + 4;
    cnd_ = a0 != 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_0892E688; }
    goto L_0892E848;
L_0892E848:;
    v0 = 1;
    ST8(s2+9, v0);
    goto L_0892E610;
L_0892E854:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0892E7D4; }
    goto L_0892E860;
L_0892E860:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0892E7D4; }
    goto L_0892E86C;
L_0892E86C:;
    goto L_0892E7E0;
L_0892E874:;
    a1 = LD32(s3+16);
    f12 = BITSF(LD32(fp-10960));
    a0 = s2 + 0;
    goto L_0892E880;
L_0892E880:;
    func_0892F7D0(a0, a1, f12);
    goto L_0892E888;
L_0892E888:;
    v0 = LD32(s2+4);
    goto L_0892E820;
L_0892E890:;
    ST8(s4, 0);
    a0 = s2 + 0;
    a1 = LD32(s3+16);
    goto L_0892E880;
L_0892E8A0:;
    ST8(s2+8, s7);
    goto L_0892E610;
}

/* 0892E8A8 */
u64 func_0892E8A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0892E8A8:;
    sp = sp - 32;
    v1 = 1;
    v0 = LD_U8(a0+10);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0892E954; }
    goto L_0892E8D8;
L_0892E8D8:;
    v0 = LD_U8(a0+9);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0892E954; }
    goto L_0892E8E4;
L_0892E8E4:;
    v0 = LD32(a0+44);
    s4 = 1;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892E950; }
    goto L_0892E8F4;
L_0892E8F4:;
    s5 = D_08C2A880 - (-22400);
    s2 = a0 + 36;
    s1 = a0 + 16;
    goto L_0892E900;
L_0892E900:;
    v0 = LD32(s1);
    v1 = LD32(s0+4);
    a0 = s5 - 22400;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+152);
    a2 = 1;
    s3 = s3 + 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E924;
L_0892E924:;
    cnd_ = v0 == 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_0892E940; }
    goto L_0892E92C;
L_0892E92C:;
    v0 = LD_U8(v0+233);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+44); goto L_0892E944; }
    goto L_0892E938;
L_0892E938:;
    v0 = LD_U8(s2);
    if (v0 != 0) s4 = 0;
    goto L_0892E940;
L_0892E940:;
    v0 = LD32(s0+44);
    goto L_0892E944;
L_0892E944:;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_0892E900; }
    goto L_0892E950;
L_0892E950:;
    v1 = s4 + 0;
    goto L_0892E954;
L_0892E954:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0892E97C */
void func_0892E97C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0892E97C:;
    sp = sp - 128;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0892E9F4; }
    goto L_0892E9BC;
L_0892E9BC:;
    goto L_0892E9C0;
L_0892E9C0:;
    sp = sp + 128;
    return;
L_0892E9F4:;
    { u64 r_ = func_08930720(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892E9FC;
L_0892E9FC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892E9C0; }
    goto L_0892EA04;
L_0892EA04:;
    v0 = LD_U8(s2+10);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+44); goto L_0892EC24; }
    goto L_0892EA10;
L_0892EA10:;
    v0 = LD32(s2+44);
    cnd_ = v0 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0892EB70; }
    goto L_0892EA1C;
L_0892EA1C:;
    v0 = D_08AED534 - (-10956);
    v1 = D_08AED53C - (-10948);
    f20 = BITSF(LD32(v0-10956));
    f21 = BITSF(LD32(v1-10948));
    fp = D_08C2A880 - (-22400);
    s6 = 1;
    s4 = s2 + 36;
    s3 = s2 + 0;
    s7 = D_08AED538 - (-10952);
    goto L_0892EA40;
L_0892EA40:;
    v0 = LD32(s3+16);
    v1 = LD32(s2+4);
    a0 = fp - 22400;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+152);
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892EA60;
L_0892EA60:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0892EC18; }
    goto L_0892EA68;
L_0892EA68:;
    v0 = LD32(s3+16);
    v1 = LD32(s2+4);
    v0 = v0 << 2;
    a0 = v0 + v1;
    v1 = LD32(a0+204);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0892EA94; }
    goto L_0892EA84;
L_0892EA84:;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v1+28, v0);
    ST32(a0+204, 0);
    goto L_0892EA94;
L_0892EA94:;
    a0 = LD32(s2+4);
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892EA9C;
L_0892EA9C:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892EABC;
L_0892EABC:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f4));
    v0 = FBITS(f1);
    v1 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = s5 & 0x1;
    if (cnd_) { goto L_0892EC00; }
    goto L_0892EB28;
L_0892EB28:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s3+16); goto L_0892EB7C; }
    goto L_0892EB30;
L_0892EB30:;
    v1 = LD32(s2+4);
    v0 = LD32(s3+16);
    a0 = s1 + 0;
    v0 = v0 + v1;
    ST8(v0+196, s6);
    v1 = LD32(s1);
    v0 = LD32(v1+140);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892EB54;
L_0892EB54:;
    ST8(s4, s6);
    goto L_0892EB58;
L_0892EB58:;
    v0 = LD32(s2+44);
    s5 = s5 + 1;
    s3 = s3 + 4;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_0892EA40; }
    goto L_0892EB70;
L_0892EB70:;
    v0 = 1;
    ST8(s2+10, v0);
    goto L_0892E9BC;
L_0892EB7C:;
    a2 = LD32(s2+48);
    a0 = s2 + 0;
    a3 = sp + 16;
    v0 = func_089301A8(a0, a1, a3);
    goto L_0892EB8C;
L_0892EB8C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s3+16); goto L_0892EBEC; }
    goto L_0892EB94;
L_0892EB94:;
    a1 = LD32(sp+16);
    a0 = D_08B28DC4 - (-29244);
    a0 = a0 - 29244;
    a2 = 1;
    v0 = func_08ABD0BC(a0, a1, a2);
    goto L_0892EBA8;
L_0892EBA8:;
    a2 = v0 + 0;
    a0 = LD32(s2+4);
    cnd_ = v0 == 0;
    v1 = LD32(s3+16);
    if (cnd_) { goto L_0892EBD0; }
    goto L_0892EBB8;
L_0892EBB8:;
    v0 = LD32(v0+28);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = v0 | 0x2;
    ST32(a2+28, v0);
    ST32(v1+204, a2);
    goto L_0892EBD0;
L_0892EBD0:;
    a1 = LD32(s3+16);
    a2 = a2 + 32;
    a0 = s2 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0893065C(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892EBE4;
L_0892EBE4:;
    ST8(s4, s6);
    goto L_0892EB58;
L_0892EBEC:;
    f12 = BITSF(LD32(s7-10952));
    a0 = s2 + 0;
    func_0892F7D0(a0, a1, f12);
    goto L_0892EBF8;
L_0892EBF8:;
    ST8(s4, s6);
    goto L_0892EB58;
L_0892EC00:;
    f12 = f0 + f21;
    a1 = LD32(s3+16);
    a0 = s2 + 0;
    func_0892F7D0(a0, a1, f12);
    goto L_0892EC10;
L_0892EC10:;
    ST8(s4, 0);
    goto L_0892EB58;
L_0892EC18:;
    v0 = 1;
    ST8(s2+8, v0);
    goto L_0892E9BC;
L_0892EC24:;
    s4 = 1;
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892ECAC; }
    goto L_0892EC30;
L_0892EC30:;
    fp = D_08C2A880 - (-22400);
    s1 = s2 + 36;
    s0 = s2 + 0;
    goto L_0892EC3C;
L_0892EC3C:;
    v0 = LD32(s0+16);
    v1 = LD32(s2+4);
    a0 = fp - 22400;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+152);
    a2 = 1;
    s3 = s3 + 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892EC60;
L_0892EC60:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0892EC18; }
    goto L_0892EC68;
L_0892EC68:;
    v0 = LD_U8(s1);
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_0892EC94; }
    goto L_0892EC74;
L_0892EC74:;
    v0 = LD32(s0+16);
    v1 = LD32(s2+4);
    v0 = v0 + v1;
    a0 = LD_U8(v0+196);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(s2+44); goto L_0892EC98; }
    goto L_0892EC8C;
L_0892EC8C:;
    v0 = LD_U8(a1+233);
    if (v0 != 0) s4 = 0;
    goto L_0892EC94;
L_0892EC94:;
    v1 = LD32(s2+44);
    goto L_0892EC98;
L_0892EC98:;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0892EC3C; }
    goto L_0892ECA4;
L_0892ECA4:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_0892E9C0; }
    goto L_0892ECAC;
L_0892ECAC:;
    cnd_ = v1 == 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_0892E9BC; }
    goto L_0892ECB4;
L_0892ECB4:;
    fp = D_08C2A880 - (-22400);
    s7 = D_08AED534 - (-10956);
    s4 = s2 + 36;
    s3 = s2 + 0;
    goto L_0892ECC4;
L_0892ECC4:;
    a0 = LD32(s3+16);
    a1 = LD32(s2+4);
    v0 = a0 << 2;
    a2 = v0 + a1;
    v1 = LD32(a2+204);
    cnd_ = v1 == 0;
    v0 = v0 + a1;
    if (cnd_) { goto L_0892ED00; }
    goto L_0892ECE0;
L_0892ECE0:;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v1+28, v0);
    ST32(a2+204, 0);
    a1 = LD32(s2+4);
    a0 = LD32(s3+16);
    v0 = a0 << 2;
    v0 = v0 + a1;
    goto L_0892ED00;
L_0892ED00:;
    a1 = LD32(v0+152);
    s5 = fp - 22400;
    a2 = 1;
    a0 = s5 + 0;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892ED14;
L_0892ED14:;
    a0 = LD32(s2+4);
    s0 = v0 + 0;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892ED20;
L_0892ED20:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v0 = LD32(a1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892ED40;
L_0892ED40:;
    f2 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(s7-10956));
    v0 = FBITS(f1);
    v1 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f12 = BITSF(v1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_0892EF04; }
    goto L_0892EDB0;
L_0892EDB0:;
    v0 = LD32(s3+16);
    v1 = LD32(s2+4);
    a0 = s5 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+152);
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892EDD0;
L_0892EDD0:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_0892EC18; }
    goto L_0892EDD8;
L_0892EDD8:;
    a0 = LD32(s3+16);
    a1 = LD32(s2+4);
    v0 = a0 << 2;
    a2 = v0 + a1;
    v1 = LD32(a2+204);
    cnd_ = v1 == 0;
    v0 = a0 + a1;
    if (cnd_) { goto L_0892EE10; }
    goto L_0892EDF4;
L_0892EDF4:;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v1+28, v0);
    ST32(a2+204, 0);
    a1 = LD32(s2+4);
    a0 = LD32(s3+16);
    v0 = a0 + a1;
    goto L_0892EE10;
L_0892EE10:;
    v0 = v0 + 192;
    v1 = LD_U8(v0+4);
    cnd_ = v1 == 0;
    v1 = 1;
    if (cnd_) { goto L_0892EEE4; }
    goto L_0892EE20;
L_0892EE20:;
    ST8(v0+4, 0);
    a0 = a3 + 0;
    v0 = LD32(a3);
    v1 = LD32(v0+140);
    t_ = v1;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892EE38;
L_0892EE38:;
    a1 = LD32(s3+16);
    a2 = LD32(s2+48);
    a0 = s2 + 0;
    a3 = sp + 20;
    v0 = func_089301A8(a0, a1, a3);
    goto L_0892EE4C;
L_0892EE4C:;
    cnd_ = v0 == 0;
    v0 = D_08AED538 - (-10952);
    if (cnd_) { goto L_0892EECC; }
    goto L_0892EE54;
L_0892EE54:;
    a1 = LD32(sp+20);
    a0 = D_08B28DC4 - (-29244);
    a0 = a0 - 29244;
    a2 = 1;
    v0 = func_08ABD0BC(a0, a1, a2);
    goto L_0892EE68;
L_0892EE68:;
    a2 = v0 + 0;
    a0 = LD32(s2+4);
    cnd_ = v0 == 0;
    v1 = LD32(s3+16);
    if (cnd_) { goto L_0892EE90; }
    goto L_0892EE78;
L_0892EE78:;
    v0 = LD32(v0+28);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = v0 | 0x2;
    ST32(a2+28, v0);
    ST32(v1+204, a2);
    goto L_0892EE90;
L_0892EE90:;
    a1 = LD32(s3+16);
    a2 = a2 + 32;
    a0 = s2 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0893065C(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892EEA4;
L_0892EEA4:;
    v0 = 1;
    goto L_0892EEA8;
L_0892EEA8:;
    ST8(s4, v0);
    v0 = LD32(s2+44);
    goto L_0892EEB0;
L_0892EEB0:;
    s6 = s6 + 1;
    s3 = s3 + 4;
    v0 = s6 < v0;
    cnd_ = v0 != 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_0892ECC4; }
    goto L_0892EEC4;
L_0892EEC4:;
    goto L_0892E9C0;
L_0892EECC:;
    a1 = LD32(s3+16);
    f12 = BITSF(LD32(v0-10952));
    a0 = s2 + 0;
    func_0892F7D0(a0, a1, f12);
    goto L_0892EEDC;
L_0892EEDC:;
    v0 = 1;
    goto L_0892EEA8;
L_0892EEE4:;
    ST8(v0+4, v1);
    a0 = a3 + 0;
    v0 = LD32(a3);
    v1 = LD32(v0+140);
    t_ = v1;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892EEFC;
L_0892EEFC:;
    v0 = 1;
    goto L_0892EEA8;
L_0892EF04:;
    ST8(s4, 0);
    a0 = s2 + 0;
    a1 = LD32(s3+16);
    func_0892F7D0(a0, a1, f12);
    goto L_0892EF14;
L_0892EF14:;
    v0 = LD32(s2+44);
    goto L_0892EEB0;
}

/* 0892EF1C */
void func_0892EF1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_0892EF1C:;
    sp = sp - 256;
    v0 = D_08B285A0 - (-31328);
    s1 = a0 + 0;
    s0 = 0 + 0;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+12));
    v0 = D_08C29B58 - (-25768);
    v1 = LD32(v0-25768);
    f0 = f0 + f1;
    v0 = 1;
    cnd_ = v1 == v0;
    ST32(a0+12, FBITS(f0));
    if (cnd_) { goto L_0892F5FC; }
    goto L_0892EF8C;
L_0892EF8C:;
    v0 = D_08AD9BB8 - (-25672);
    goto L_0892EF90;
L_0892EF90:;
    s0 = s0 << 2;
    v0 = v0 - 25672;
    v0 = s0 + v0;
    f20 = BITSF(LD32(v0));
    v0 = func_08979DF4();
    goto L_0892EFA4;
L_0892EFA4:;
    v1 = 2;
    cnd_ = v0 == v1;
    v0 = D_08AD9BC0 - (-25664);
    if (cnd_) { goto L_0892F5EC; }
    goto L_0892EFB0;
L_0892EFB0:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892F004; }
    goto L_0892EFBC;
L_0892EFBC:;
    goto L_0892EFC0;
L_0892EFC0:;
    goto L_0892EFC4;
L_0892EFC4:;
    sp = sp + 256;
    return;
L_0892F004:;
    a0 = s1 + 0;
    { u64 r_ = func_08930720(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892F00C;
L_0892F00C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0892EFC0; }
    goto L_0892F014;
L_0892F014:;
    v0 = LD_U8(s1+11);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+44); goto L_0892F038; }
    goto L_0892F020;
L_0892F020:;
    f0 = BITSF(LD32(s1+12));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0892EFC4; }
    goto L_0892F034;
L_0892F034:;
    v0 = LD32(s1+44);
    goto L_0892F038;
L_0892F038:;
    ST32(s1+12, 0);
    cnd_ = v0 == 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_0892F0DC; }
    goto L_0892F044;
L_0892F044:;
    v1 = D_08AED54C - (-10932);
    v0 = D_08AED548 - (-10936);
    f24 = BITSF(LD32(v1-10932));
    v1 = D_08AED544 - (-10940);
    f23 = BITSF(LD32(v0-10936));
    f22 = BITSF(LD32(v1-10940));
    v0 = D_08AED550 - (-10928);
    f25 = BITSF(LD32(v0-10928));
    v0 = D_08C2A880 - (-22400);
    s7 = v0 - 22400;
    s3 = s1 + 0;
    goto L_0892F070;
L_0892F070:;
    v1 = LD32(s3+16);
    a2 = LD32(s1+4);
    a0 = s7 + 0;
    v0 = v1 << 2;
    v0 = v0 + a2;
    v1 = v1 + a2;
    a1 = LD32(v0+152);
    ST8(v1+196, 0);
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892F098;
L_0892F098:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0892F5E0; }
    goto L_0892F0A0;
L_0892F0A0:;
    a0 = LD32(v0+176);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+44); goto L_0892F0CC; }
    goto L_0892F0AC;
L_0892F0AC:;
    a0 = LD32(a0+44);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+44); goto L_0892F0CC; }
    goto L_0892F0B8;
L_0892F0B8:;
    v0 = func_08960A84(a0);
    goto L_0892F0C0;
L_0892F0C0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2+176); goto L_0892F0E8; }
    goto L_0892F0C8;
L_0892F0C8:;
    v0 = LD32(s1+44);
    goto L_0892F0CC;
L_0892F0CC:;
    s6 = s6 + 1;
    v0 = s6 < v0;
    cnd_ = v0 != 0;
    s3 = s3 + 4;
    if (cnd_) { goto L_0892F070; }
    goto L_0892F0DC;
L_0892F0DC:;
    v0 = 1;
    ST8(s1+11, v0);
    goto L_0892EFBC;
L_0892F0E8:;
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_0892F0F0;
L_0892F0F0:;
    a0 = v0 + 0;
    v0 = func_08962DAC(a0);
    goto L_0892F0F8;
L_0892F0F8:;
    cnd_ = v0 == 0;
    a0 = s7 + 0;
    if (cnd_) { goto L_0892F0C8; }
    goto L_0892F100;
L_0892F100:;
    a1 = LD32(v0+4);
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892F10C;
L_0892F10C:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_0892F0C8; }
    goto L_0892F114;
L_0892F114:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F130;
L_0892F130:;
    v1 = LD32(s3+16);
    a0 = LD32(s1+4);
    f2 = BITSF(LD32(v0+8));
    v1 = v1 << 2;
    v1 = v1 + a0;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    s5 = LD32(v1+204);
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    cnd_ = s5 == 0;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_0892F244; }
    goto L_0892F160;
L_0892F160:;
    v0 = LD32(s4);
    s0 = s5 + 32;
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    fp = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F180;
L_0892F180:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s5+32));
    f1 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f2));
    v0 = FBITS(f0);
    ST32(sp+20, FBITS(f1));
    v1 = FBITS(f1);
    {v[0]=BITSF(v0);}
    ST32(sp+16, FBITS(f0));
    {v[1]=BITSF(v1);}
    a0 = FBITS(f2);
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s2+236);
    a3 = D_08AD9BA8 - (-25688);
    a3 = a3 - 25688;
    v1 = v1 << 2;
    v0 = v1 + a3;
    f1 = BITSF(LD32(v0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    a0 = s5 + 0;
    if (cnd_) { goto L_0892F22C; }
    goto L_0892F208;
L_0892F208:;
    a0 = D_08AD9BB0 - (-25680);
    a0 = a0 - 25680;
    v0 = v1 + a0;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { fp = 1; goto L_0892F228; }
    goto L_0892F228;
L_0892F228:;
    a0 = s5 + 0;
    goto L_0892F22C;
L_0892F22C:;
    a1 = sp + 0;
    v0 = func_08854824(a0, a1);
    goto L_0892F234;
L_0892F234:;
    cnd_ = fp == 0;
    if (cnd_) { v0 = LD32(s3+16); goto L_0892F248; }
    goto L_0892F23C;
L_0892F23C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+44); goto L_0892F0CC; }
    goto L_0892F244;
L_0892F244:;
    v0 = LD32(s3+16);
    goto L_0892F248;
L_0892F248:;
    v1 = LD32(s1+4);
    v0 = v0 << 2;
    a0 = v0 + v1;
    v1 = LD32(a0+204);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s3+16); goto L_0892F274; }
    goto L_0892F260;
L_0892F260:;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v1+28, v0);
    ST32(a0+204, 0);
    a1 = LD32(s3+16);
    goto L_0892F274;
L_0892F274:;
    a0 = s1 + 0;
    a2 = sp + 100;
    v0 = func_0892FC60(a0, a1, a2);
    goto L_0892F280;
L_0892F280:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s4); goto L_0892F2F8; }
    goto L_0892F288;
L_0892F288:;
    a1 = LD32(sp+100);
    a0 = D_08B28DC4 - (-29244);
    a0 = a0 - 29244;
    a2 = 1;
    v0 = func_08ABD0BC(a0, a1, a2);
    goto L_0892F29C;
L_0892F29C:;
    a2 = v0 + 0;
    a0 = LD32(s1+4);
    cnd_ = v0 == 0;
    v1 = LD32(s3+16);
    if (cnd_) { goto L_0892F2C4; }
    goto L_0892F2AC;
L_0892F2AC:;
    v0 = LD32(v0+28);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = v0 | 0x2;
    ST32(a2+28, v0);
    ST32(v1+204, a2);
    goto L_0892F2C4;
L_0892F2C4:;
    a1 = LD32(s3+16);
    a2 = a2 + 32;
    a0 = s1 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0893065C(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892F2D8;
L_0892F2D8:;
    v1 = LD32(s2);
    goto L_0892F2DC;
L_0892F2DC:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    goto L_0892F2E4;
L_0892F2E4:;
    v0 = LD32(v1+140);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F2F0;
L_0892F2F0:;
    v0 = LD32(s1+44);
    goto L_0892F0CC;
L_0892F2F8:;
    s5 = D_08B25AC0 - (23232);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    fp = s5 + 23232;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F314;
L_0892F314:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F334;
L_0892F334:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f3 = f3 - f0;
    f2 = f2 - f1;
    f4 = f4 - f5;
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a3 = FBITS(f3);
    v0 = FBITS(f2);
    {v[0]=BITSF(a3);}
    v1 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    f20 = BITSF(a0);
    f1 = f22 / f0;
    f4 = f4 * f1;
    f3 = f3 * f1;
    f2 = f2 * f1;
    ST32(sp+24, FBITS(f4));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f4));
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F3D4;
L_0892F3D4:;
    v1 = LD32(s2+236);
    a3 = D_08AD9BB0 - (-25680);
    a3 = a3 - 25680;
    v1 = v1 << 2;
    a1 = v1 + a3;
    a3 = D_08AD9BA8 - (-25688);
    a3 = a3 - 25688;
    v1 = v1 + a3;
    f1 = BITSF(LD32(a1));
    f0 = BITSF(LD32(v1));
    a0 = LD32(s5+23232);
    a2 = LD32(fp+4);
    f0 = f0 + f1;
    v1 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v1;
    a0 = a0 + a2;
    v1 = (u32)((s32)a0 >> 16);
    f0 = f0 * f23;
    a1 = a0 << 16;
    a2 = a2 + a0;
    a1 = a1 + v1;
    a1 = a1 + a2;
    v1 = a1 >> 1;
    f20 = f20 - f0;
    f2 = BITSF(v1);
    f4 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f6 = BITSF(LD32(sp+24));
    a0 = a0 >> 1;
    f0 = BITSF(a0);
    f1 = (float)(s32)FBITS(f2);
    v1 = D_08AED554 - (-10924);
    f7 = f6 * f20;
    f8 = f4 * f20;
    f21 = BITSF(LD32(v1-10924));
    f20 = f5 * f20;
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f21;
    ST32(sp+48, FBITS(f8));
    a0 = FBITS(f4);
    f3 = f3 * f21;
    ST32(sp+56, FBITS(f7));
    fcc = FCMP(f23, f1, 12);
    a2 = a2 + a1;
    ST32(sp+52, FBITS(f20));
    f3 = f3 * f25;
    a3 = FBITS(f5);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f4 = f0 + f7;
    f7 = f1 + f8;
    f8 = f2 + f20;
    v0 = FBITS(f6);
    v1 = 0 + 0;
    {u32 a_=sp+(144);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(a0);}
    {v[0]=BITSF(v1);}
    {v[9]=BITSF(a3);}
    ST32(fp+4, a2);
    {v[10]=BITSF(v0);}
    f0 = f3 + f25;
    v0 = 0xbf800000u;
    ST32(sp+32, FBITS(f7));
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    ST32(sp+36, FBITS(f8));
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {a0=FBITS(v[6]);}
    {a3=FBITS(v[4]);}
    {v0=FBITS(v[5]);}
    f5 = BITSF(a0);
    f1 = BITSF(a3);
    f6 = BITSF(v0);
    ST32(sp+40, FBITS(f4));
    ST32(sp+64, 0);
    ST32(sp+68, FBITS(f24));
    ST32(sp+72, 0);
    ST32(sp+80, a3);
    ST32(sp+84, v0);
    ST32(sp+88, a0);
    ST32(sp+48, a3);
    ST32(sp+52, v0);
    ST32(sp+56, a0);
    cnd_ = !fcc;
    ST32(s5+23232, a1);
    if (cnd_) { goto L_0892F538; }
    goto L_0892F534;
L_0892F534:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_0892F538;
L_0892F538:;
    f5 = f5 * f0;
    f2 = f1 * f0;
    f3 = f6 * f0;
    a1 = LD32(s3+16);
    f4 = f4 + f5;
    f0 = f7 + f2;
    f1 = f8 + f3;
    a2 = sp + 32;
    a0 = s1 + 0;
    a3 = 0 + 0;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f4));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f5));
    { u64 r_ = func_0893065C(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892F57C;
L_0892F57C:;
    v0 = LD_U8(s1+11);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_0892F2DC; }
    goto L_0892F588;
L_0892F588:;
    v0 = LD32(s5+23232);
    v1 = LD32(fp+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f0 = BITSF(a0);
    v1 = v1 + v0;
    ST32(fp+4, v1);
    f1 = (float)(s32)FBITS(f0);
    v1 = D_08AED558 - (-10920);
    f0 = BITSF(LD32(v1-10920));
    f1 = f1 * f21;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s5+23232, v0);
    if (cnd_) { goto L_0892F2D8; }
    goto L_0892F5D0;
L_0892F5D0:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    a1 = 1;
    goto L_0892F2E4;
L_0892F5E0:;
    v0 = 1;
    ST8(s1+8, v0);
    goto L_0892EFBC;
L_0892F5EC:;
    v0 = v0 - 25664;
    v0 = s0 + v0;
    f20 = BITSF(LD32(v0));
    goto L_0892EFB0;
L_0892F5FC:;
    v0 = D_08C2932D - (-27859);
    v1 = LD_U8(v0-27859);
    cnd_ = v1 != 0;
    v0 = D_08AD9BB8 - (-25672);
    if (cnd_) { goto L_0892EF90; }
    goto L_0892F60C;
L_0892F60C:;
    a1 = sp + 96;
    ST32(sp+96, 0);
    v0 = func_0892F63C(a0, a1);
    goto L_0892F618;
L_0892F618:;
    v0 = D_08AED540 - (-10944);
    f0 = BITSF(LD32(sp+96));
    f1 = BITSF(LD32(v0-10944));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { s0 = 1; goto L_0892EF8C; }
    goto L_0892F634;
L_0892F634:;
    v0 = D_08AD9BB8 - (-25672);
    goto L_0892EF90;
}

/* 0892F63C */
u32 func_0892F63C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0892F63C:;
    sp = sp - 80;
    fp = 0 + 0;
    s6 = a1 + 0;
    s5 = 0 + 0;
    v0 = LD32(a0+44);
    cnd_ = v0 == 0;
    s4 = a0 + 0;
    if (cnd_) { goto L_0892F79C; }
    goto L_0892F680;
L_0892F680:;
    s7 = D_08C2A880 - (-22400);
    s2 = a0 + 16;
    v0 = LD32(s2);
    goto L_0892F68C;
L_0892F68C:;
    v1 = LD32(s4+4);
    a2 = 1;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+152);
    a0 = s7 - 22400;
    s5 = s5 + 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892F6AC;
L_0892F6AC:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_0892F78C; }
    goto L_0892F6B8;
L_0892F6B8:;
    s0 = LD32(v0+176);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s4+44); goto L_0892F790; }
    goto L_0892F6C4;
L_0892F6C4:;
    v0 = LD32(s0+44);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0892F79C; }
    goto L_0892F6D0;
L_0892F6D0:;
    v0 = func_08960A84(a0);
    goto L_0892F6D8;
L_0892F6D8:;
    cnd_ = v0 == 0;
    v0 = fp + 0;
    if (cnd_) { goto L_0892F7A0; }
    goto L_0892F6E0;
L_0892F6E0:;
    a0 = LD32(s0+44);
    v0 = func_08960A84(a0);
    goto L_0892F6E8;
L_0892F6E8:;
    a0 = v0 + 0;
    v0 = func_08962DAC(a0);
    goto L_0892F6F0;
L_0892F6F0:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    s3 = v0 + 28;
    if (cnd_) { goto L_0892F78C; }
    goto L_0892F6FC;
L_0892F6FC:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F718;
L_0892F718:;
    f2 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s0+28));
    f4 = BITSF(LD32(s3+8));
    f0 = BITSF(LD32(s3+4));
    f1 = f1 - f2;
    f4 = f4 - f5;
    f0 = f0 - f3;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s6));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_0892F78C; }
    goto L_0892F784;
L_0892F784:;
    ST32(s6, v0);
    fp = s1 + 0;
    goto L_0892F78C;
L_0892F78C:;
    v0 = LD32(s4+44);
    goto L_0892F790;
L_0892F790:;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_0892F68C; }
    goto L_0892F79C;
L_0892F79C:;
    v0 = fp + 0;
    goto L_0892F7A0;
L_0892F7A0:;
    sp = sp + 80;
    return v0;
}

/* 0892F7D0 */
void func_0892F7D0(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_0892F7D0:;
    sp = sp - 192;
    v1 = a1 << 2;
    s6 = D_08C2A880 - (-22400);
    s4 = a1 + 0;
    a2 = 1;
    s3 = s6 - 22400;
    s2 = a0 + 0;
    f20 = f12;
    v0 = LD32(a0+4);
    a0 = s3 + 0;
    v1 = v1 + v0;
    a1 = LD32(v1+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892F834;
L_0892F834:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0892F87C; }
    goto L_0892F83C;
L_0892F83C:;
    s0 = LD32(v0+176);
    cnd_ = s0 == 0;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_0892F87C; }
    goto L_0892F848;
L_0892F848:;
    v1 = v0 + 23196;
    f7 = BITSF(LD32(v0+23196));
    f8 = BITSF(LD32(v1+8));
    f6 = BITSF(LD32(v1+4));
    a0 = LD32(s0+44);
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f6));
    cnd_ = a0 == 0;
    ST32(sp+8, FBITS(f8));
    if (cnd_) { goto L_0892F87C; }
    goto L_0892F86C;
L_0892F86C:;
    v0 = func_08960A84(a0);
    goto L_0892F874;
L_0892F874:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892F8B4; }
    goto L_0892F87C;
L_0892F87C:;
    goto L_0892F880;
L_0892F880:;
    sp = sp + 192;
    return;
L_0892F8B4:;
    a0 = LD32(s0+44);
    v0 = func_08960A84(a0);
    goto L_0892F8BC;
L_0892F8BC:;
    v1 = LD32(s2+4);
    a1 = LD32(s2+48);
    a0 = v0 + 0;
    f12 = BITSF(LD32(v1+84));
    v0 = func_08962F00(a0, a1, f12);
    goto L_0892F8D0;
L_0892F8D0:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0892F87C; }
    goto L_0892F8D8;
L_0892F8D8:;
    a1 = LD32(v0+4);
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892F8E4;
L_0892F8E4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0892F920; }
    goto L_0892F8EC;
L_0892F8EC:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F908;
L_0892F908:;
    f8 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f8));
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f6));
    goto L_0892F920;
L_0892F920:;
    v0 = LD32(s1);
    f23 = BITSF(0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892F940;
L_0892F940:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f7 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f8 = BITSF(LD32(sp+8));
    f3 = f7 - f0;
    f1 = f6 - f4;
    f2 = f8 - f5;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    a3 = LD32(s2+44);
    ST32(sp+16, FBITS(f0));
    a1 = 0 + 0;
    a2 = a3 + 0;
    ST32(sp+20, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f21 = BITSF(v0);
    ST32(sp+24, FBITS(f5));
    f22 = f0;
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f1));
    cnd_ = a3 == 0;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_0892FC40; }
    goto L_0892F9C0;
L_0892F9C0:;
    a0 = s2 + 36;
    goto L_0892F9C4;
L_0892F9C4:;
    v0 = LD_U8(a0);
    a1 = a1 + 1;
    v1 = a1 < a2;
    v0 = 0 < v0;
    s3 = s3 + v0;
    cnd_ = v1 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_0892F9C4; }
    goto L_0892F9E0;
L_0892F9E0:;
    v0 = s3 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0892FC40; }
    goto L_0892F9EC;
L_0892F9EC:;
    cnd_ = a2 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0892FA3C; }
    goto L_0892F9F4;
L_0892F9F4:;
    s1 = s2 + 36;
    s0 = s2 + 16;
    goto L_0892F9FC;
L_0892F9FC:;
    v0 = LD32(s0);
    cnd_ = s4 == v0;
    if (cnd_) { s5 = s5 + 1; goto L_0892FA20; }
    goto L_0892FA08;
L_0892FA08:;
    v1 = v0 << 2;
    v0 = LD_U8(s1);
    a0 = s6 - 22400;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_0892FB9C; }
    goto L_0892FA1C;
L_0892FA1C:;
    s5 = s5 + 1;
    goto L_0892FA20;
L_0892FA20:;
    v0 = s5 < a3;
    s0 = s0 + 4;
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_0892F9FC; }
    goto L_0892FA30;
L_0892FA30:;
    f7 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f8 = BITSF(LD32(sp+8));
    goto L_0892FA3C;
L_0892FA3C:;
    s3 = s3 - 1;
    f0 = BITSF(s3);
    f1 = BITSF(0);
    f0 = (float)(s32)FBITS(f0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { f22 = f23 / f0; goto L_0892FA5C; }
    goto L_0892FA5C;
L_0892FA5C:;
    f10 = BITSF(LD32(sp+16));
    goto L_0892FA60;
L_0892FA60:;
    f11 = BITSF(LD32(sp+20));
    f9 = BITSF(LD32(sp+24));
    f4 = f7 - f10;
    f2 = f6 - f11;
    f3 = f8 - f9;
    f5 = BITSF(0);
    v0 = FBITS(f4);
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f4));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+36, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f3));
    if (cnd_) { goto L_0892FAF0; }
    goto L_0892FAB4;
L_0892FAB4:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+56, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_0892FAF0;
L_0892FAF0:;
    v0 = D_08AED560 - (-10912);
    f0 = BITSF(LD32(v0-10912));
    f7 = BITSF(LD32(sp+32));
    f8 = BITSF(LD32(sp+36));
    f0 = f22 * f0;
    f6 = BITSF(LD32(sp+40));
    fcc = FCMP(f5, f20, 12);
    f0 = f21 - f0;
    f5 = f6 * f0;
    f3 = f7 * f0;
    f0 = f8 * f0;
    f4 = f9 + f5;
    f1 = f10 + f3;
    f2 = f11 + f0;
    ST32(sp+64, FBITS(f3));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f4));
    ST32(sp+68, FBITS(f0));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f5));
    if (cnd_) { goto L_0892FB80; }
    goto L_0892FB44;
L_0892FB44:;
    f4 = f6 * f20;
    f0 = f7 * f20;
    f1 = f8 * f20;
    f5 = f9 + f4;
    f2 = f10 + f0;
    f3 = f11 + f1;
    ST32(sp+80, FBITS(f0));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f5));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f4));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f5));
    goto L_0892FB80;
L_0892FB80:;
    a0 = s2 + 0;
    a1 = s4 + 0;
    a2 = sp + 48;
    a3 = 0 + 0;
    { u64 r_ = func_0893065C(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892FB94;
L_0892FB94:;
    goto L_0892F880;
L_0892FB9C:;
    v0 = LD32(s2+4);
    v0 = v1 + v0;
    a1 = LD32(v0+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892FBAC;
L_0892FBAC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0892FC38; }
    goto L_0892FBB4;
L_0892FBB4:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s5 = s5 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892FBD0;
L_0892FBD0:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f7 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f8 = BITSF(LD32(sp+8));
    f0 = f7 - f0;
    f1 = f6 - f1;
    f2 = f8 - f2;
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+32, FBITS(f0));
    a3 = LD32(s2+44);
    ST32(sp+36, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+40, FBITS(f2));
    f23 = f23 + f0;
    goto L_0892FA20;
L_0892FC38:;
    a3 = LD32(s2+44);
    goto L_0892FA1C;
L_0892FC40:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    f10 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_0892FA60; }
    goto L_0892FC54;
L_0892FC54:;
    v0 = D_08AED55C - (-10916);
    f20 = BITSF(LD32(v0-10916));
    goto L_0892FA60;
}

/* 0892FC60 */
u32 func_0892FC60(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_0892FC60:;
    sp = sp - 288;
    s5 = 0 + 0;
    s3 = a2 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0892FCFC; }
    goto L_0892FCB4;
L_0892FCB4:;
    v0 = s5 + 0;
    goto L_0892FCB8;
L_0892FCB8:;
    goto L_0892FCBC;
L_0892FCBC:;
    sp = sp + 288;
    return v0;
L_0892FCFC:;
    v0 = a1 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+152);
    v1 = D_08C2A880 - (-22400);
    s2 = v1 - 22400;
    a0 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892FD1C;
L_0892FD1C:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0892FCB8; }
    goto L_0892FD28;
L_0892FD28:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892FD44;
L_0892FD44:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    a0 = LD32(s1+176);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0892FCB8; }
    goto L_0892FD68;
L_0892FD68:;
    a0 = LD32(a0+44);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0892FCBC; }
    goto L_0892FD74;
L_0892FD74:;
    v0 = func_08960A84(a0);
    goto L_0892FD7C;
L_0892FD7C:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0892FCB8; }
    goto L_0892FD84;
L_0892FD84:;
    v0 = LD32(s1+176);
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_0892FD90;
L_0892FD90:;
    v1 = LD32(s0+4);
    a1 = LD32(s0+48);
    a0 = v0 + 0;
    f12 = BITSF(LD32(v1+84));
    v0 = func_08962F00(a0, a1, f12);
    goto L_0892FDA4;
L_0892FDA4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s5 + 0; goto L_0892FCB8; }
    goto L_0892FDAC;
L_0892FDAC:;
    a1 = LD32(v0+4);
    a0 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0892FDBC;
L_0892FDBC:;
    v1 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0892FCB8; }
    goto L_0892FDC8;
L_0892FDC8:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = sp + 48;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0892FDE4;
L_0892FDE4:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    a1 = D_08B28DC4 - (-29244);
    v1 = a1 - 29244;
    v0 = LD32(v1+8);
    f1 = f3 - f1;
    f2 = f4 - f2;
    f0 = f5 - f0;
    a0 = LD32(v1+4);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f0));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+48, v1);
    ST32(sp+52, 0);
    cnd_ = a0 == 0;
    ST32(sp+56, 0);
    if (cnd_) { goto L_0892FE94; }
    goto L_0892FE48;
L_0892FE48:;
    a1 = LD32(a1-29244);
    a2 = a0 + 0;
    goto L_0892FE50;
L_0892FE50:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_0892FE84; }
    goto L_0892FE68;
L_0892FE68:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+56); goto L_0892FE98; }
    goto L_0892FE78;
L_0892FE78:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_0892FE68; }
    goto L_0892FE84;
L_0892FE84:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_0892FE50; }
    goto L_0892FE94;
L_0892FE94:;
    a0 = LD32(sp+56);
    goto L_0892FE98;
L_0892FE98:;
    v0 = D_08AED564 - (-10908);
    cnd_ = a0 == 0;
    f22 = BITSF(LD32(v0-10908));
    if (cnd_) { goto L_08930040; }
    goto L_0892FEA4;
L_0892FEA4:;
    v0 = D_08AED568 - (-10904);
    v1 = D_08AED56C - (-10900);
    f21 = BITSF(0);
    f23 = BITSF(LD32(v0-10904));
    f24 = BITSF(LD32(v1-10900));
    v0 = D_08AD9BA8 - (-25688);
    v1 = D_08AD9BB0 - (-25680);
    s7 = v0 - 25688;
    fp = v1 - 25680;
    s0 = LD32(a0);
    goto L_0892FECC;
L_0892FECC:;
    a1 = 1;
    a0 = s2 + 0;
    func_08ABD144(a0, a1);
    goto L_0892FED8;
L_0892FED8:;
    v0 = s0 + 32;
    f12 = BITSF(LD32(v0+8));
    f11 = BITSF(LD32(v0+4));
    f10 = BITSF(LD32(s0+32));
    f9 = BITSF(LD32(sp));
    f8 = BITSF(LD32(sp+4));
    f7 = BITSF(LD32(sp+8));
    f9 = f10 - f9;
    f8 = f11 - f8;
    f7 = f12 - f7;
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f9);
    a1 = FBITS(f8);
    {v[4]=BITSF(v0);}
    f6 = BITSF(LD32(sp+16));
    {v[5]=BITSF(a1);}
    v0 = FBITS(f7);
    f5 = BITSF(LD32(sp+20));
    {v[6]=BITSF(v0);}
    f4 = BITSF(LD32(sp+24));
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    f6 = f10 - f6;
    f5 = f11 - f5;
    f4 = f12 - f4;
    f1 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+36));
    f3 = BITSF(LD32(sp+40));
    a1 = FBITS(f1);
    v0 = FBITS(f2);
    v1 = FBITS(f6);
    a0 = FBITS(f5);
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(176);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(a1);}
    {v[0]=BITSF(v1);}
    a1 = FBITS(f3);
    {v[9]=BITSF(v0);}
    {v[1]=BITSF(a0);}
    v0 = FBITS(f4);
    {v[10]=BITSF(a1);}
    {v[2]=BITSF(v0);}
    {a1=FBITS(v[4]);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[8]=sum;}
    f0 = BITSF(a1);
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    fcc = FCMP(f0, f21, 2);
    ST32(sp+112, FBITS(f1));
    f20 = BITSF(a1);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    a1 = FBITS(f1);
    ST32(sp+116, FBITS(f2));
    {u32 a_=sp+(144);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[8];float d0=sqrtf(s0);v[8]=d0;}
    {v[4]=BITSF(a1);}
    ST32(sp+120, FBITS(f3));
    a1 = FBITS(f2);
    ST32(sp+112, FBITS(f6));
    {v[5]=BITSF(a1);}
    {a1=FBITS(v[8]);}
    ST32(sp+116, FBITS(f5));
    f1 = BITSF(a1);
    ST32(sp+120, FBITS(f4));
    a1 = FBITS(f3);
    ST32(sp+64, FBITS(f10));
    {v[6]=BITSF(a1);}
    {a1=FBITS(v[0]);}
    ST32(sp+68, FBITS(f11));
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(a1);
    {v[0]=BITSF(v1);}
    ST32(sp+72, FBITS(f12));
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(v0);}
    ST32(sp+80, FBITS(f9));
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    ST32(sp+84, FBITS(f8));
    f3 = BITSF(v0);
    ST32(sp+88, FBITS(f7));
    ST32(sp+96, FBITS(f6));
    ST32(sp+100, FBITS(f5));
    cnd_ = !fcc;
    ST32(sp+104, FBITS(f4));
    if (cnd_) { goto L_089300E8; }
    goto L_08930034;
L_08930034:;
    a0 = LD32(sp+56);
    goto L_08930038;
L_08930038:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_0892FECC; }
    goto L_08930040;
L_08930040:;
    s1 = LD32(sp+48);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0892FCB4; }
    goto L_08930054;
L_08930054:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0892FCB4; }
    goto L_08930060;
L_08930060:;
    v0 = LD32(s1);
    goto L_08930064;
L_08930064:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089300B8; }
    goto L_08930078;
L_08930078:;
    v0 = LD_U8(s0+8);
    goto L_0893007C;
L_0893007C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089300E0; }
    goto L_08930084;
L_08930084:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089300D0; }
    goto L_0893008C;
L_0893008C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08930094;
L_08930094:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089300A0;
L_089300A0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089300AC;
L_089300AC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0893007C; }
    goto L_089300B4;
L_089300B4:;
    v1 = LD32(s1+4);
    goto L_089300B8;
L_089300B8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08930064; }
    goto L_089300C8;
L_089300C8:;
    v0 = s5 + 0;
    goto L_0892FCB8;
L_089300D0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08930094;
L_089300E0:;
    s0 = LD32(s0+4);
    goto L_089300AC;
L_089300E8:;
    fcc = FCMP(f1, f21, 2);
    cnd_ = fcc;
    a0 = LD32(sp+56);
    if (cnd_) { goto L_08930038; }
    goto L_089300F8;
L_089300F8:;
    v0 = LD32(s1+236);
    v0 = v0 << 2;
    v1 = v0 + s7;
    f0 = BITSF(LD32(v1));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s6 = 0 + 0;
    if (cnd_) { goto L_08930130; }
    goto L_08930118;
L_08930118:;
    v0 = v0 + fp;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s6 = 1; goto L_08930130; }
    goto L_08930130;
L_08930130:;
    f0 = f20 * f1;
    f0 = f23 / f0;
    f0 = f3 * f0;
    fcc = FCMP(f24, f0, 12);
    cnd_ = fcc;
    s4 = 1;
    if (cnd_) { goto L_08930150; }
    goto L_0893014C;
L_0893014C:;
    s4 = 0 + 0;
    goto L_08930150;
L_08930150:;
    a0 = s0 + 0;
    a1 = sp + 16;
    v0 = func_08854824(a0, a1);
    goto L_0893015C;
L_0893015C:;
    cnd_ = s6 == 0;
    a0 = LD32(sp+56);
    if (cnd_) { goto L_08930038; }
    goto L_08930164;
L_08930164:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08930038; }
    goto L_0893016C;
L_0893016C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08930038; }
    goto L_08930174;
L_08930174:;
    fcc = FCMP(f20, f22, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08930038; }
    goto L_08930184;
L_08930184:;
    v0 = LD32(s0+28);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08930038; }
    goto L_08930194;
L_08930194:;
    v0 = LD32(s0+4);
    f22 = f20;
    s5 = 1;
    ST32(s3, v0);
    goto L_08930034;
}

/* 089301A8 */
u32 func_089301A8(u32 a0, u32 a1, u32 a3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_089301A8:;
    sp = sp - 256;
    s4 = 0 + 0;
    s3 = a3 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0893023C; }
    goto L_089301F8;
L_089301F8:;
    v0 = s4 + 0;
    goto L_089301FC;
L_089301FC:;
    goto L_08930200;
L_08930200:;
    sp = sp + 256;
    return v0;
L_0893023C:;
    v0 = a1 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+152);
    v1 = D_08C2A880 - (-22400);
    s2 = v1 - 22400;
    a0 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893025C;
L_0893025C:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089301FC; }
    goto L_08930268;
L_08930268:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930284;
L_08930284:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    a0 = LD32(s0+176);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089301FC; }
    goto L_089302A8;
L_089302A8:;
    a0 = LD32(a0+44);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08930200; }
    goto L_089302B4;
L_089302B4:;
    v0 = func_08960A84(a0);
    goto L_089302BC;
L_089302BC:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089301FC; }
    goto L_089302C4;
L_089302C4:;
    v0 = LD32(s0+176);
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_089302D0;
L_089302D0:;
    v1 = LD32(s1+4);
    a1 = LD32(s1+48);
    a0 = v0 + 0;
    f12 = BITSF(LD32(v1+84));
    v0 = func_08962F00(a0, a1, f12);
    goto L_089302E4;
L_089302E4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s4 + 0; goto L_089301FC; }
    goto L_089302EC;
L_089302EC:;
    a1 = LD32(v0+4);
    a0 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089302FC;
L_089302FC:;
    v1 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089301FC; }
    goto L_08930308;
L_08930308:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = sp + 48;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930324;
L_08930324:;
    v1 = D_08B28DC4 - (-29244);
    v1 = v1 - 29244;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(sp));
    v0 = LD32(v1+8);
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    v0 = v0 + 1;
    f2 = f3 - f2;
    f1 = f4 - f1;
    f0 = f5 - f0;
    ST32(v1+8, v0);
    a0 = s2 + 0;
    a1 = 1;
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+48, v1);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    func_08ABD144(a0, a1);
    goto L_0893038C;
L_0893038C:;
    v0 = D_08AED570 - (-10896);
    a0 = LD32(sp+56);
    cnd_ = a0 == 0;
    f21 = BITSF(LD32(v0-10896));
    if (cnd_) { goto L_089304BC; }
    goto L_0893039C;
L_0893039C:;
    v0 = D_08AED574 - (-10892);
    v1 = D_08AED578 - (-10888);
    f22 = BITSF(LD32(v0-10892));
    f23 = BITSF(LD32(v1-10888));
    v0 = D_08AED57C - (-10884);
    v1 = D_08AED580 - (-10880);
    f24 = BITSF(LD32(v0-10884));
    f25 = BITSF(LD32(v1-10880));
    v0 = D_08AED584 - (-10876);
    v1 = D_08AED588 - (-10872);
    f26 = BITSF(LD32(v0-10876));
    f27 = BITSF(LD32(v1-10872));
    f20 = BITSF(0);
    s0 = LD32(a0);
    goto L_089303D4;
L_089303D4:;
    a1 = 1;
    a0 = s2 + 0;
    func_08ABD144(a0, a1);
    goto L_089303E0;
L_089303E0:;
    v0 = s0 + 32;
    f6 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s0+32));
    f5 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f1 = f4 - f1;
    f2 = f5 - f2;
    f3 = f6 - f3;
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    a1 = FBITS(f2);
    a2 = FBITS(f3);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(a1);}
    {v[2]=BITSF(a2);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(sp+36);
    a3 = LD32(sp+32);
    a0 = LD32(sp+40);
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a3);}
    {v[5]=BITSF(v1);}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v[6]=BITSF(a0);}
    {t0=FBITS(v[0]);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    f0 = BITSF(t0);
    ST32(sp+64, FBITS(f4));
    {u32 a_=sp+(112);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f20, 2);
    {v[8]=BITSF(v0);}
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {v[9]=BITSF(a1);}
    {v0=FBITS(v[4]);}
    {v[0]=BITSF(a3);}
    ST32(sp+80, FBITS(f1));
    {v[1]=BITSF(v1);}
    {v[10]=BITSF(a2);}
    {v[2]=BITSF(a0);}
    f7 = BITSF(t0);
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[8]=sum;}
    ST32(sp+68, FBITS(f5));
    {v1=FBITS(v[8]);}
    f4 = BITSF(v0);
    ST32(sp+72, FBITS(f6));
    f1 = BITSF(v1);
    ST32(sp+84, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f3));
    if (cnd_) { goto L_089304E0; }
    goto L_089304B0;
L_089304B0:;
    a0 = LD32(sp+56);
    goto L_089304B4;
L_089304B4:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_089303D4; }
    goto L_089304BC;
L_089304BC:;
    a0 = LD32(sp+48);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089301F8; }
    goto L_089304D0;
L_089304D0:;
    func_08ABD1DC(a0, 0, 0, 0);
    goto L_089304D8;
L_089304D8:;
    v0 = s4 + 0;
    goto L_089301FC;
L_089304E0:;
    fcc = FCMP(f4, f20, 2);
    cnd_ = fcc;
    a0 = LD32(sp+56);
    if (cnd_) { goto L_089304B4; }
    goto L_089304F0;
L_089304F0:;
    fcc = FCMP(f7, f22, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08930504; }
    goto L_08930500;
L_08930500:;
    v0 = 0 + 0;
    goto L_08930504;
L_08930504:;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    a1 = 0 + 0;
    if (cnd_) { goto L_08930524; }
    goto L_08930514;
L_08930514:;
    fcc = FCMP(f7, f23, 12);
    cnd_ = fcc;
    if (cnd_) { a1 = 1; goto L_08930524; }
    goto L_08930524;
L_08930524:;
    f0 = f7 * f4;
    f0 = f24 / f0;
    f0 = f1 * f0;
    fcc = FCMP(f25, f0, 12);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_08930544; }
    goto L_08930540;
L_08930540:;
    a0 = 0 + 0;
    goto L_08930544;
L_08930544:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08930560; }
    goto L_0893054C;
L_0893054C:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08930560; }
    goto L_08930554;
L_08930554:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08930574; }
    goto L_0893055C;
L_0893055C:;
    v1 = LD32(s1);
    goto L_08930560;
L_08930560:;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_08930584; }
    goto L_0893056C;
L_0893056C:;
    cnd_ = a0 != 0;
    f3 = BITSF(LD32(sp+64));
    if (cnd_) { goto L_08930588; }
    goto L_08930574;
L_08930574:;
    cnd_ = a1 == 0;
    a0 = LD32(sp+56);
    if (cnd_) { goto L_089304B4; }
    goto L_0893057C;
L_0893057C:;
    v1 = LD32(s1);
    f0 = BITSF(LD32(sp+16));
    goto L_08930584;
L_08930584:;
    f3 = BITSF(LD32(sp+64));
    goto L_08930588;
L_08930588:;
    f2 = BITSF(LD32(sp+68));
    f1 = BITSF(LD32(sp+72));
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+20));
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+24));
    t0 = FBITS(f3);
    {v[0]=BITSF(t0);}
    f1 = f1 - f0;
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = LD32(v1);
    t0 = FBITS(f1);
    {v[2]=BITSF(t0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+96, FBITS(f3));
    ST32(sp+100, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+104, FBITS(f1));
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089305F8; }
    goto L_089305E8;
L_089305E8:;
    fcc = FCMP(f26, f7, 12);
    cnd_ = !fcc;
    a0 = LD32(sp+56);
    if (cnd_) { goto L_089304B4; }
    goto L_089305F8;
L_089305F8:;
    fcc = FCMP(f7, f21, 12);
    cnd_ = !fcc;
    a0 = LD32(sp+56);
    if (cnd_) { goto L_089304B4; }
    goto L_08930608;
L_08930608:;
    v0 = LD32(s0+28);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089304B4; }
    goto L_08930618;
L_08930618:;
    fcc = FCMP(f7, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089304B4; }
    goto L_08930628;
L_08930628:;
    fcc = FCMP(f23, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089304B4; }
    goto L_08930638;
L_08930638:;
    fcc = FCMP(f0, f27, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089304B4; }
    goto L_08930648;
L_08930648:;
    v0 = LD32(s0+4);
    f21 = f7;
    s4 = 1;
    ST32(s3, v0);
    goto L_089304B0;
}

/* 0893065C */
u64 func_0893065C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893065C:;
    sp = sp - 32;
    a1 = a1 << 2;
    s3 = a3 & 0xff;
    s1 = a2 + 0;
    a2 = 1;
    v0 = LD32(a0+4);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a1 = a1 + v0;
    a1 = LD32(a1+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893069C;
L_0893069C:;
    s2 = v0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 0x8035;
    cnd_ = v0 == 0;
    a1 = 20;
    if (cnd_) { goto L_08930704; }
    goto L_089306B4;
L_089306B4:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089306BC;
L_089306BC:;
    v1 = LD32(v0+24);
    s0 = v0 + 0;
    cnd_ = v1 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089306F4; }
    goto L_089306CC;
L_089306CC:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v0 = 999;
    ST32(v1+16, v0);
    ST8(v1+12, s3);
    ST8(v1+13, 0);
    ST32(v1, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    goto L_089306F4;
L_089306F4:;
    a0 = LD32(s2+176);
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089306FC;
L_089306FC:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08930704;
L_08930704:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08930720 */
u64 func_08930720(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930720:;
    sp = sp - 16;
    v0 = D_08C2A880 - (-22400);
    s1 = v0 - 22400;
    a2 = 1;
    v1 = LD32(a0+4);
    a0 = s1 + 0;
    a1 = LD32(v1+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893074C;
L_0893074C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0893077C; }
    goto L_08930754;
L_08930754:;
    v0 = LD32(v0+176);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08930780; }
    goto L_08930760;
L_08930760:;
    v0 = LD32(v0+44);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08930780; }
    goto L_0893076C;
L_0893076C:;
    v0 = func_08960A84(a0);
    goto L_08930774;
L_08930774:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+176); goto L_08930798; }
    goto L_0893077C;
L_0893077C:;
    v1 = 0 + 0;
    goto L_08930780;
L_08930780:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08930798:;
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_089307A0;
L_089307A0:;
    a0 = v0 + 0;
    v0 = func_08962DAC(a0);
    goto L_089307A8;
L_089307A8:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_0893077C; }
    goto L_089307B4;
L_089307B4:;
    a1 = LD32(v0+4);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089307BC;
L_089307BC:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08930780; }
    goto L_089307C4;
L_089307C4:;
    v1 = 0 + 0;
    goto L_08930780;
}

/* 089307CC */
rv_t func_089307CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089307CC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2570C - (22284);
    t1 = D_08C2571C - (22300);
    t2 = D_08C2572C - (22316);
    a1 = a1 & a0;
    v1 = t0 + 22284;
    a2 = t1 + 22300;
    cnd_ = a1 == 0;
    a3 = t2 + 22316;
    if (cnd_) { goto L_08930884; }
    goto L_089307FC;
L_089307FC:;
    v0 = D_08AED58C - (-10868);
    f4 = BITSF(LD32(v0-10868));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+22284, FBITS(f2));
    ST32(t1+22300, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+22316, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08930884;
L_08930884:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893088C */
rv_t func_0893088C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893088C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089307CC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089308A0;
L_089308A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089308AC */
rv_t func_089308AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089308AC:;
    sp = sp - 16;
    a2 = 1014;
    s0 = a0 + 0;
    func_08931D8C(a0, a1, a2);
    goto L_089308C8;
L_089308C8:;
    v0 = D_08AF8450 - (-31664);
    v0 = v0 - 31664;
    ST32(s0, v0);
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089308DC;
L_089308DC:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 3;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089308EC;
L_089308EC:;
    ST32(s0+32, s1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930904 */
rv_t func_08930904(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930904:;
    v0 = D_08AF8450 - (-31664);
    v0 = v0 - 31664;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08930920;
L_08930920:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893092C */
rv_t func_0893092C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893092C:;
    v0 = D_08AF8450 - (-31664);
    v0 = v0 - 31664;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_0893094C;
L_0893094C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08930954;
L_08930954:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930964 */
rv_t func_08930964(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930964:;
    sp = sp - 16;
    { rv_t r_ = func_08931FD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930974;
L_08930974:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930980 */
rv_t func_08930980(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930980:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930990;
L_08930990:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893099C */
rv_t func_0893099C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893099C:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089309AC;
L_089309AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089309B8 */
rv_t func_089309B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089309B8:;
    sp = sp - 16;
    { rv_t r_ = func_08931FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089309C8;
L_089309C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089309D4 */
rv_t func_089309D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089309D4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089309DC */
rv_t func_089309DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089309DC:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    a0 = LD32(a0+32);
    func_0895D9A8(a0, f12);
    goto L_089309FC;
L_089309FC:;
    v0 = LD32(s0+32);
    a0 = s0 + 0;
    a1 = LD32(v0);
    func_08930A3C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08930A0C;
L_08930A0C:;
    a0 = s0 + 0;
    func_08930AA0(a0);
    goto L_08930A14;
L_08930A14:;
    a0 = LD32(s0+32);
    { rv_t r_ = func_0895D9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930A1C;
L_08930A1C:;
    a0 = s0 + 0;
    f12 = f20;
    { rv_t r_ = func_08932064(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930A28;
L_08930A28:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08930A3C */
void func_08930A3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930A3C:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    v1 = (s32)a1 < 2;
    if (cnd_) { goto L_08930A94; }
    goto L_08930A50;
L_08930A50:;
    cnd_ = v1 != 0;
    v0 = 2;
    if (cnd_) { goto L_08930A80; }
    goto L_08930A58;
L_08930A58:;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(a0); goto L_08930A6C; }
    goto L_08930A60;
L_08930A60:;
    goto L_08930A64;
L_08930A64:;
    sp = sp + 16;
    return;
L_08930A6C:;
    v1 = LD32(v0+56);
    goto L_08930A70;
L_08930A70:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930A78;
L_08930A78:;
    goto L_08930A64;
L_08930A80:;
    cnd_ = a1 != 0;
    if (cnd_) {  goto L_08930A64; }
    goto L_08930A88;
L_08930A88:;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    goto L_08930A70;
L_08930A94:;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    goto L_08930A70;
}

/* 08930AA0 */
void func_08930AA0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08930AA0:;
    sp = sp - 32;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08930AD0; }
    goto L_08930AC0;
L_08930AC0:;
    v0 = LD32(v0+48);
    s1 = D_08AED590 - (-10864);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08930AE8; }
    goto L_08930AD0;
L_08930AD0:;
    goto L_08930AD4;
L_08930AD4:;
    sp = sp + 32;
    return;
L_08930AE8:;
    { rv_t r_ = func_0898D41C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930AF0;
L_08930AF0:;
    a0 = LD32(s0+32);
    f20 = f0;
    func_0895DB54(a0);
    goto L_08930AFC;
L_08930AFC:;
    f0 = BITSF(LD32(s1-10864));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08930B40; }
    goto L_08930B10;
L_08930B10:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08930B74; }
    goto L_08930B1C;
L_08930B1C:;
    a0 = LD32(s0+32);
    goto L_08930B20;
L_08930B20:;
    v0 = D_08AED594 - (-10860);
    f0 = BITSF(LD32(v0-10860));
    v1 = LD32(a0+12);
    v0 = LD32(v1+4);
    goto L_08930B30;
L_08930B30:;
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    f0 = BITSF(LD32(s1-10864));
    goto L_08930B40;
L_08930B40:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08930AD4; }
    goto L_08930B50;
L_08930B50:;
    a0 = LD32(s0+32);
    v0 = D_08AED594 - (-10860);
    f0 = BITSF(LD32(v0-10860));
    v1 = LD32(a0+12);
    v0 = LD32(v1+8);
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    goto L_08930AD4;
L_08930B74:;
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D90C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930B7C;
L_08930B7C:;
    cnd_ = v0 != 0;
    a0 = LD32(s0+32);
    if (cnd_) { goto L_08930B20; }
    goto L_08930B84;
L_08930B84:;
    v0 = D_08AED594 - (-10860);
    f0 = BITSF(LD32(v0-10860));
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    goto L_08930B30;
}

/* 08930B98 */
rv_t func_08930B98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930B98:;
    sp = sp - 16;
    { rv_t r_ = func_089328E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930BA8;
L_08930BA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930BB4 */
rv_t func_08930BB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08930BB4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C257BC - (22460);
    t1 = D_08C257CC - (22476);
    t2 = D_08C257DC - (22492);
    a1 = a1 & a0;
    v1 = t0 + 22460;
    a2 = t1 + 22476;
    cnd_ = a1 == 0;
    a3 = t2 + 22492;
    if (cnd_) { goto L_08930C6C; }
    goto L_08930BE4;
L_08930BE4:;
    v0 = D_08AED598 - (-10856);
    f4 = BITSF(LD32(v0-10856));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+22460, FBITS(f2));
    ST32(t1+22476, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+22492, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08930C6C;
L_08930C6C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08930C74 */
rv_t func_08930C74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930C74:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08930BB4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930C88;
L_08930C88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930C94 */
rv_t func_08930C94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930C94:;
    sp = sp - 16;
    a2 = 1010;
    s0 = a0 + 0;
    func_08931D8C(a0, a1, a2);
    goto L_08930CB0;
L_08930CB0:;
    v0 = D_08AF8498 - (-31592);
    v0 = v0 - 31592;
    ST32(s0, v0);
    a0 = 24;
    ST8(s0+176, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930CC8;
L_08930CC8:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 4;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930CD8;
L_08930CD8:;
    ST32(s0+32, s1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930CF0 */
rv_t func_08930CF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930CF0:;
    v0 = D_08AF8498 - (-31592);
    v0 = v0 - 31592;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08930D0C;
L_08930D0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930D18 */
rv_t func_08930D18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930D18:;
    v0 = D_08AF8498 - (-31592);
    v0 = v0 - 31592;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08930D38;
L_08930D38:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08930D40;
L_08930D40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930D50 */
rv_t func_08930D50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930D50:;
    sp = sp - 16;
    { rv_t r_ = func_08931FD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930D60;
L_08930D60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930D6C */
rv_t func_08930D6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930D6C:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930D7C;
L_08930D7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930D88 */
rv_t func_08930D88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930D88:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930D98;
L_08930D98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930DA4 */
rv_t func_08930DA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930DA4:;
    sp = sp - 16;
    { rv_t r_ = func_08931FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930DB4;
L_08930DB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930DC0 */
rv_t func_08930DC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930DC0:;
    sp = sp - 16;
    { rv_t r_ = func_0893205C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930DD0;
L_08930DD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08930DDC */
rv_t func_08930DDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08930DDC:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    a0 = LD32(a0+32);
    func_0895D9A8(a0, f12);
    goto L_08930DFC;
L_08930DFC:;
    v0 = LD32(s0+32);
    a0 = s0 + 0;
    a1 = LD32(v0);
    func_08930E3C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08930E0C;
L_08930E0C:;
    a0 = s0 + 0;
    func_08930EBC(a0);
    goto L_08930E14;
L_08930E14:;
    a0 = LD32(s0+32);
    { rv_t r_ = func_0895D9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930E1C;
L_08930E1C:;
    a0 = s0 + 0;
    f12 = f20;
    { rv_t r_ = func_08932064(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930E28;
L_08930E28:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08930E3C */
void func_08930E3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08930E3C:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08930EB0; }
    goto L_08930E4C;
L_08930E4C:;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08930E9C; }
    goto L_08930E58;
L_08930E58:;
    cnd_ = a1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08930E84; }
    goto L_08930E60;
L_08930E60:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08930E74; }
    goto L_08930E68;
L_08930E68:;
    goto L_08930E6C;
L_08930E6C:;
    sp = sp + 16;
    return;
L_08930E74:;
    func_089310C8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08930E7C;
L_08930E7C:;
    goto L_08930E6C;
L_08930E84:;
    v0 = LD32(a0);
    v1 = LD32(v0+56);
    goto L_08930E8C;
L_08930E8C:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930E94;
L_08930E94:;
    goto L_08930E6C;
L_08930E9C:;
    cnd_ = a1 != 0;
    if (cnd_) {  goto L_08930E6C; }
    goto L_08930EA4;
L_08930EA4:;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    goto L_08930E8C;
L_08930EB0:;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    goto L_08930E8C;
}

/* 08930EBC */
void func_08930EBC(u32 a0)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08930EBC:;
    sp = sp - 64;
    s1 = a0 + 0;
    a0 = LD32(a0+28);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08930EF8; }
    goto L_08930EE8;
L_08930EE8:;
    a0 = LD32(a0+48);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08930F14; }
    goto L_08930EF4;
L_08930EF4:;
    goto L_08930EF8;
L_08930EF8:;
    sp = sp + 64;
    return;
L_08930F14:;
    s2 = D_08AED59C - (-10852);
    { rv_t r_ = func_0898D41C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930F1C;
L_08930F1C:;
    v0 = LD32(s1+28);
    f20 = f0;
    a0 = LD32(v0+48);
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08930F2C;
L_08930F2C:;
    s0 = v0 + 0;
    v0 = LD32(s1+28);
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08930F3C;
L_08930F3C:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+32);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+8, FBITS(f2));
    {v0=FBITS(v[0]);}
    f21 = BITSF(v0);
    func_0895DB54(a0);
    goto L_08930FA4;
L_08930FA4:;
    f0 = BITSF(LD32(s2-10852));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AED5A0 - (-10848);
    if (cnd_) { goto L_08931000; }
    goto L_08930FB8;
L_08930FB8:;
    f0 = BITSF(LD32(v0-10848));
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+32); goto L_089310A4; }
    goto L_08930FCC;
L_08930FCC:;
    v0 = LD_U8(s1+36);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+28); goto L_08931060; }
    goto L_08930FD8;
L_08930FD8:;
    a0 = LD32(s1+32);
    goto L_08930FDC;
L_08930FDC:;
    v0 = D_08AED5A4 - (-10844);
    f0 = BITSF(LD32(v0-10844));
    v1 = LD32(a0+12);
    v0 = LD32(v1+4);
    goto L_08930FEC;
L_08930FEC:;
    ST32(v0+8, FBITS(f0));
    ST32(v0+12, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    goto L_08930FFC;
L_08930FFC:;
    f0 = BITSF(LD32(s2-10852));
    goto L_08931000;
L_08931000:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08930EF8; }
    goto L_08931010;
L_08931010:;
    v0 = D_08AED5A0 - (-10848);
    f0 = BITSF(LD32(v0-10848));
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    a0 = LD32(s1+32);
    if (cnd_) { goto L_0893104C; }
    goto L_08931028;
L_08931028:;
    v0 = D_08AED5A4 - (-10844);
    f0 = BITSF(LD32(v0-10844));
    v1 = LD32(a0+12);
    v0 = LD32(v1+8);
    goto L_08931038;
L_08931038:;
    ST32(v0+12, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    goto L_08930EF4;
L_0893104C:;
    v0 = D_08AED5A4 - (-10844);
    f0 = BITSF(LD32(v0-10844));
    v1 = LD32(a0+12);
    v0 = LD32(v1+12);
    goto L_08931038;
L_08931060:;
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D90C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931068;
L_08931068:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+32); goto L_08930FDC; }
    goto L_08931070;
L_08931070:;
    v0 = D_08B1B778 - (-18568);
    v1 = LD_U8(v0-18568);
    cnd_ = v1 == 0;
    a0 = LD32(s1+32);
    if (cnd_) { goto L_08931090; }
    goto L_08931080;
L_08931080:;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08930FDC; }
    goto L_08931090;
L_08931090:;
    v0 = D_08AED5A4 - (-10844);
    f0 = BITSF(LD32(v0-10844));
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    goto L_08930FEC;
L_089310A4:;
    v0 = D_08AED5A4 - (-10844);
    f0 = BITSF(LD32(v0-10844));
    v1 = LD32(a0+12);
    v0 = LD32(v1+12);
    ST32(v0+12, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    goto L_08930FFC;
}

/* 089310C8 */
void func_089310C8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_089310C8:;
    sp = sp - 160;
    v0 = LD_U8(a0+176);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08931418; }
    goto L_08931118;
L_08931118:;
    a1 = LD32(a0+28);
    v0 = LD32(a1+48);
    v1 = LD_U8(v0+241);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08931368; }
    goto L_0893112C;
L_0893112C:;
    cnd_ = a1 == 0;
    a0 = LD32(a1+48);
    if (cnd_) { goto L_08931160; }
    goto L_08931134;
L_08931134:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(a0+172); goto L_08931164; }
    goto L_0893113C;
L_0893113C:;
    v1 = LD32(a0+100);
    v0 = 4;
    cnd_ = v1 == v0;
    s1 = a0 + 100;
    if (cnd_) { goto L_08931160; }
    goto L_0893114C;
L_0893114C:;
    a0 = s1 + 0;
    { u64 r_ = func_08991D44(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931154;
L_08931154:;
    ST8(s1+48, 0);
    a1 = LD32(s0+28);
    a0 = LD32(a1+48);
    goto L_08931160;
L_08931160:;
    v0 = LD32(a0+172);
    goto L_08931164;
L_08931164:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0893134C; }
    goto L_0893116C;
L_0893116C:;
    v0 = LD_U8(s0+176);
    cnd_ = v0 != 0;
    v0 = D_08AED5A8 - (-10840);
    if (cnd_) { goto L_0893134C; }
    goto L_08931178;
L_08931178:;
    v1 = D_08AED5AC - (-10836);
    f25 = BITSF(LD32(v0-10840));
    v0 = D_08AED5C4 - (-10812);
    f21 = BITSF(LD32(v1-10836));
    f23 = BITSF(LD32(v0-10812));
    v1 = D_08AED5B0 - (-10832);
    v0 = D_08AED5C8 - (-10808);
    f24 = BITSF(LD32(v1-10832));
    f22 = BITSF(LD32(v0-10808));
    v1 = D_08AED5B4 - (-10828);
    v0 = D_08AED5B8 - (-10824);
    f20 = BITSF(LD32(v1-10828));
    f26 = BITSF(LD32(v0-10824));
    v1 = D_08AED5BC - (-10820);
    v0 = D_08AED5C0 - (-10816);
    {v[0]=0.63661977236f;}
    f27 = BITSF(LD32(v1-10820));
    f28 = BITSF(LD32(v0-10816));
    s3 = D_08B25AC0 - (23232);
    s4 = D_08B45A9C - (23196);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    s5 = s3 + 23232;
    s2 = s4 + 23196;
    goto L_089311D4;
L_089311D4:;
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089311DC;
L_089311DC:;
    v1 = LD32(s3+23232);
    a2 = LD32(s5+4);
    {u32 a_=sp+(64);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    a0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + a0;
    v1 = v1 + a2;
    a0 = (u32)((s32)v1 >> 16);
    a1 = v1 << 16;
    a2 = a2 + v1;
    a1 = a1 + a0;
    a1 = a1 + a2;
    a0 = a1 >> 1;
    f1 = BITSF(a0);
    v1 = v1 >> 1;
    f2 = BITSF(v1);
    f0 = (float)(s32)FBITS(f1);
    f7 = BITSF(LD32(v0+8));
    f1 = (float)(s32)FBITS(f2);
    f3 = BITSF(LD32(v0));
    f0 = f0 * f21;
    f2 = BITSF(LD32(v0+4));
    f1 = f1 * f21;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f0 * f22;
    f6 = BITSF(LD32(s4+23196));
    f1 = f1 * f23;
    f5 = BITSF(LD32(s2+4));
    f0 = f0 + f24;
    f4 = BITSF(LD32(s2+8));
    a2 = a2 + a1;
    ST32(sp+8, FBITS(f7));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[4]=d0;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp, FBITS(f3));
    f9 = f1 + f25;
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f8 = BITSF(v0);
    v0 = 1;
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    ST32(sp+4, FBITS(f2));
    {a0=FBITS(v[4]);}
    f7 = BITSF(a0);
    ST32(s5+4, a2);
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f4));
    cnd_ = s1 == v0;
    ST32(s3+23232, a1);
    if (cnd_) { goto L_089313FC; }
    goto L_089312AC;
L_089312AC:;
    cnd_ = s1 == 0;
    if (cnd_) { ST32(sp+32, FBITS(f20)); goto L_089313E4; }
    goto L_089312B4;
L_089312B4:;
    v0 = 2;
    cnd_ = s1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089313C8; }
    goto L_089312C0;
L_089312C0:;
    cnd_ = s1 == v0;
    f0 = BITSF(LD32(s4+23196));
    if (cnd_) { goto L_089313AC; }
    goto L_089312C8;
L_089312C8:;
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    goto L_089312DC;
L_089312DC:;
    f1 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+24));
    v0 = LD32(s0+28);
    f2 = f1 * f7;
    f3 = f0 * f8;
    f1 = f1 * f8;
    f0 = f0 * f7;
    a0 = LD32(v0+48);
    f3 = f3 - f2;
    f2 = BITSF(LD32(sp+8));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp));
    f3 = f3 * f9;
    v0 = LD32(a0+172);
    f1 = f1 * f9;
    s1 = s1 + 1;
    f2 = f2 + f3;
    v0 = s1 < v0;
    f0 = f0 + f1;
    ST32(sp+32, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(sp+36, 0);
    cnd_ = v0 == 0;
    ST32(sp+40, FBITS(f3));
    if (cnd_) { goto L_0893134C; }
    goto L_08931340;
L_08931340:;
    v0 = LD_U8(s0+176);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089311D4; }
    goto L_0893134C;
L_0893134C:;
    v0 = LD32(s0);
    v1 = LD32(v0+60);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893135C;
L_0893135C:;
    v0 = 1;
    ST8(s0+176, v0);
    goto L_08931368;
L_08931368:;
    sp = sp + 160;
    return;
L_089313AC:;
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    ST32(sp+40, FBITS(f28));
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, FBITS(f28));
    goto L_089312DC;
L_089313C8:;
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    ST32(sp+40, FBITS(f27));
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, FBITS(f27));
    goto L_089312DC;
L_089313E4:;
    ST32(sp+36, 0);
    ST32(sp+40, FBITS(f20));
    ST32(sp+16, FBITS(f20));
    ST32(sp+20, 0);
    ST32(sp+24, FBITS(f20));
    goto L_089312DC;
L_089313FC:;
    ST32(sp+32, FBITS(f26));
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    ST32(sp+16, FBITS(f26));
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    goto L_089312DC;
L_08931418:;
    a1 = LD32(a0+28);
    goto L_0893112C;
}

/* 08931420 */
rv_t func_08931420(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931420:;
    ST8(a0+176, 0);
    sp = sp - 16;
    { rv_t r_ = func_089328E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931434;
L_08931434:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931440 */
rv_t func_08931440(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08931440:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C257EC - (22508);
    t1 = D_08C257FC - (22524);
    t2 = D_08C2580C - (22540);
    a1 = a1 & a0;
    v1 = t0 + 22508;
    a2 = t1 + 22524;
    cnd_ = a1 == 0;
    a3 = t2 + 22540;
    if (cnd_) { goto L_089314F8; }
    goto L_08931470;
L_08931470:;
    v0 = D_08AED5CC - (-10804);
    f4 = BITSF(LD32(v0-10804));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+22508, FBITS(f2));
    ST32(t1+22524, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+22540, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089314F8;
L_089314F8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08931500 */
rv_t func_08931500(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931500:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08931440(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931514;
L_08931514:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931520 */
rv_t func_08931520(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931520:;
    sp = sp - 16;
    a2 = 1011;
    s0 = a0 + 0;
    func_08931D8C(a0, a1, a2);
    goto L_0893153C;
L_0893153C:;
    v0 = D_08AF84E0 - (-31520);
    v0 = v0 - 31520;
    ST32(s0, v0);
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931550;
L_08931550:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 2;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931560;
L_08931560:;
    ST32(s0+32, s1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931578 */
rv_t func_08931578(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931578:;
    v0 = D_08AF84E0 - (-31520);
    v0 = v0 - 31520;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08931594;
L_08931594:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089315A0 */
rv_t func_089315A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089315A0:;
    v0 = D_08AF84E0 - (-31520);
    v0 = v0 - 31520;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_089315C0;
L_089315C0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089315C8;
L_089315C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089315D8 */
rv_t func_089315D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089315D8:;
    sp = sp - 16;
    { rv_t r_ = func_08931FD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089315E8;
L_089315E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089315F4 */
rv_t func_089315F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089315F4:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931604;
L_08931604:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931610 */
rv_t func_08931610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931610:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931620;
L_08931620:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893162C */
rv_t func_0893162C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893162C:;
    sp = sp - 16;
    { rv_t r_ = func_08931FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893163C;
L_0893163C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931648 */
rv_t func_08931648(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08931648:;
    return (rv_t){ v0, v1, f0 };
}

/* 08931650 */
rv_t func_08931650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08931650:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_08932064(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893166C;
L_0893166C:;
    a0 = LD32(s0+32);
    f12 = f20;
    func_0895D9A8(a0, f12);
    goto L_08931678;
L_08931678:;
    v0 = LD32(s0+32);
    a0 = s0 + 0;
    a1 = LD32(v0);
    func_089316AC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08931688;
L_08931688:;
    a0 = s0 + 0;
    func_089316F0(a0);
    goto L_08931690;
L_08931690:;
    a0 = LD32(s0+32);
    { rv_t r_ = func_0895D9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931698;
L_08931698:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089316AC */
void func_089316AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089316AC:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089316E4; }
    goto L_089316B8;
L_089316B8:;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(a0); goto L_089316D0; }
    goto L_089316C4;
L_089316C4:;
    goto L_089316C8;
L_089316C8:;
    sp = sp + 16;
    return;
L_089316D0:;
    v1 = LD32(v0+56);
    goto L_089316D4;
L_089316D4:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089316DC;
L_089316DC:;
    goto L_089316C8;
L_089316E4:;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    goto L_089316D4;
}

/* 089316F0 */
void func_089316F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089316F0:;
    sp = sp - 32;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08931718; }
    goto L_0893170C;
L_0893170C:;
    v0 = LD32(v0+48);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0893172C; }
    goto L_08931718;
L_08931718:;
    goto L_0893171C;
L_0893171C:;
    sp = sp + 32;
    return;
L_0893172C:;
    { rv_t r_ = func_0898D41C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931734;
L_08931734:;
    a0 = LD32(s0+32);
    f20 = f0;
    func_0895DB54(a0);
    goto L_08931740;
L_08931740:;
    v0 = D_08AED5D0 - (-10800);
    f1 = BITSF(LD32(v0-10800));
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AED5D4 - (-10796);
    if (cnd_) { goto L_08931770; }
    goto L_08931758;
L_08931758:;
    a0 = LD32(s0+32);
    f0 = BITSF(LD32(v0-10796));
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    ST32(v0+4, FBITS(f0));
    ST32(v0, FBITS(f0));
    goto L_08931770;
L_08931770:;
    fcc = FCMP(f1, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0893171C; }
    goto L_08931780;
L_08931780:;
    a0 = LD32(s0+32);
    v0 = D_08AED5D4 - (-10796);
    f0 = BITSF(LD32(v0-10796));
    v1 = LD32(a0+12);
    v0 = LD32(v1+4);
    ST32(v0+4, FBITS(f0));
    ST32(v0, FBITS(f0));
    goto L_0893171C;
}

/* 089317A0 */
rv_t func_089317A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089317A0:;
    sp = sp - 16;
    { rv_t r_ = func_089328E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089317B0;
L_089317B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089317BC */
rv_t func_089317BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089317BC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2589C - (22684);
    t1 = D_08C258AC - (22700);
    t2 = D_08C258BC - (22716);
    a1 = a1 & a0;
    v1 = t0 + 22684;
    a2 = t1 + 22700;
    cnd_ = a1 == 0;
    a3 = t2 + 22716;
    if (cnd_) { goto L_08931874; }
    goto L_089317EC;
L_089317EC:;
    v0 = D_08AED5D8 - (-10792);
    f4 = BITSF(LD32(v0-10792));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+22684, FBITS(f2));
    ST32(t1+22700, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+22716, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08931874;
L_08931874:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893187C */
rv_t func_0893187C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893187C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089317BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931890;
L_08931890:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893189C */
rv_t func_0893189C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893189C:;
    sp = sp - 16;
    a2 = 1012;
    s0 = a0 + 0;
    func_08931D8C(a0, a1, a2);
    goto L_089318B8;
L_089318B8:;
    v0 = D_08AF8528 - (-31448);
    v0 = v0 - 31448;
    ST32(s0, v0);
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089318CC;
L_089318CC:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089318DC;
L_089318DC:;
    ST32(s0+32, s1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089318F4 */
rv_t func_089318F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089318F4:;
    v0 = D_08AF8528 - (-31448);
    v0 = v0 - 31448;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08931910;
L_08931910:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893191C */
rv_t func_0893191C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893191C:;
    v0 = D_08AF8528 - (-31448);
    v0 = v0 - 31448;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_0893193C;
L_0893193C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931944;
L_08931944:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931954 */
rv_t func_08931954(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931954:;
    sp = sp - 16;
    { rv_t r_ = func_08931FD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931964;
L_08931964:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931970 */
rv_t func_08931970(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931970:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931980;
L_08931980:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893198C */
rv_t func_0893198C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893198C:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893199C;
L_0893199C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089319A8 */
rv_t func_089319A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089319A8:;
    sp = sp - 16;
    { rv_t r_ = func_08931FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089319B8;
L_089319B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089319C4 */
rv_t func_089319C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089319C4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089319CC */
rv_t func_089319CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089319CC:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_08932064(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089319E8;
L_089319E8:;
    a0 = LD32(s0+32);
    f12 = f20;
    func_0895D9A8(a0, f12);
    goto L_089319F4;
L_089319F4:;
    v0 = LD32(s0+32);
    a0 = s0 + 0;
    a1 = LD32(v0);
    func_08931A28(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08931A04;
L_08931A04:;
    a0 = s0 + 0;
    func_08931A58(a0);
    goto L_08931A0C;
L_08931A0C:;
    a0 = LD32(s0+32);
    { rv_t r_ = func_0895D9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931A14;
L_08931A14:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08931A28 */
void func_08931A28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931A28:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08931A40; }
    goto L_08931A34;
L_08931A34:;
    goto L_08931A38;
L_08931A38:;
    sp = sp + 16;
    return;
L_08931A40:;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931A50;
L_08931A50:;
    goto L_08931A38;
}

/* 08931A58 */
void func_08931A58(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931A58:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08931A7C; }
    goto L_08931A70;
L_08931A70:;
    v0 = LD32(v0+48);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08931A8C; }
    goto L_08931A7C;
L_08931A7C:;
    sp = sp + 16;
    return;
L_08931A8C:;
    a0 = LD32(a0+32);
    func_0895DB54(a0);
    goto L_08931A94;
L_08931A94:;
    v0 = LD32(s0+32);
    v1 = LD32(v0+12);
    v0 = D_08AED5DC - (-10788);
    f0 = BITSF(LD32(v0-10788));
    a0 = LD32(v1);
    ST32(a0, FBITS(f0));
    goto L_08931A7C;
}

/* 08931AB0 */
rv_t func_08931AB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931AB0:;
    sp = sp - 16;
    { rv_t r_ = func_089328E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931AC0;
L_08931AC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931ACC */
rv_t func_08931ACC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08931ACC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C258CC - (22732);
    t1 = D_08C258DC - (22748);
    t2 = D_08C258EC - (22764);
    a1 = a1 & a0;
    v1 = t0 + 22732;
    a2 = t1 + 22748;
    cnd_ = a1 == 0;
    a3 = t2 + 22764;
    if (cnd_) { goto L_08931B84; }
    goto L_08931AFC;
L_08931AFC:;
    v0 = D_08AED5E0 - (-10784);
    f4 = BITSF(LD32(v0-10784));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+22732, FBITS(f2));
    ST32(t1+22748, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+22764, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08931B84;
L_08931B84:;
    return (rv_t){ v0, v1, f0 };
}

/* 08931B8C */
rv_t func_08931B8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931B8C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08931ACC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931BA0;
L_08931BA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08931BAC */
void func_08931BAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08931BAC:;
    sp = sp - 32;
    s4 = a3 & 0xff;
    s3 = t0 + 0;
    s2 = a2 + 0;
    a0 = LD32(a0+28);
    v0 = func_08956A74(a0, a1);
    goto L_08931BDC;
L_08931BDC:;
    a2 = v0 + 0;
    a0 = D_08C2A880 - (-22400);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_08931CA8; }
    goto L_08931BF0;
L_08931BF0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08931C40; }
    goto L_08931C14;
L_08931C14:;
    a0 = LD32(a1);
    goto L_08931C18;
L_08931C18:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08931CC8; }
    goto L_08931C30;
L_08931C30:;
    a1 = LD32(a1+4);
    goto L_08931C34;
L_08931C34:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08931C18; }
    goto L_08931C3C;
L_08931C3C:;
    s0 = 0 + 0;
    goto L_08931C40;
L_08931C40:;
    cnd_ = s0 == 0;
    a1 = 20;
    if (cnd_) { goto L_08931CA8; }
    goto L_08931C48;
L_08931C48:;
    a0 = 0x8035;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931C58;
L_08931C58:;
    s1 = v0 + 0;
    v0 = LD32(v0+24);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+176); goto L_08931C90; }
    goto L_08931C68;
L_08931C68:;
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s2));
    f2 = BITSF(LD32(s2+4));
    ST32(v0+16, s3);
    ST32(v0, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f0));
    ST8(v0+12, s4);
    ST8(v0+13, 0);
    a0 = LD32(s0+176);
    goto L_08931C90;
L_08931C90:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08931CA0; }
    goto L_08931C98;
L_08931C98:;
    a1 = s1 + 0;
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931CA0;
L_08931CA0:;
    a0 = s1 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931CA8;
L_08931CA8:;
    sp = sp + 32;
    return;
L_08931CC8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08931C30; }
    goto L_08931CD4;
L_08931CD4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08931C34; }
    goto L_08931CE0;
L_08931CE0:;
    goto L_08931C40;
}

/* 08931CE8 */
void func_08931CE8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931CE8:;
    sp = sp - 16;
    v0 = a1 + 0;
    a1 = 0 + 0;
    s0 = v0 & 0xff;
    a0 = LD32(a0+28);
    v0 = func_08956A74(a0, a1);
    goto L_08931D0C;
L_08931D0C:;
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931D20;
L_08931D20:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08931D78; }
    goto L_08931D28;
L_08931D28:;
    a0 = 0x8038;
    a1 = 0 + 0;
    a2 = 0 + 0;
    cnd_ = s0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08931D4C; }
    goto L_08931D3C;
L_08931D3C:;
    a0 = 0x8039;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    goto L_08931D4C;
L_08931D4C:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931D54;
L_08931D54:;
    s0 = v0 + 0;
    v0 = LD32(s1+176);
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08931D70; }
    goto L_08931D68;
L_08931D68:;
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08931D70;
L_08931D70:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931D78;
L_08931D78:;
    sp = sp + 16;
    return;
}

/* 08931D8C */
void func_08931D8C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931D8C:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931DA8;
L_08931DA8:;
    v0 = D_08AF8570 - (-31376);
    v0 = v0 - 31376;
    ST32(s0, v0);
    a0 = s0 + 64;
    func_0892E1A0(a0, 0, 0, 0);
    goto L_08931DBC;
L_08931DBC:;
    a0 = s0 + 116;
    func_0892E1A0(a0, 0, 0, 0);
    goto L_08931DC4;
L_08931DC4:;
    v0 = D_08B45A9C - (23196);
    a0 = v0 + 23196;
    f0 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(v0+23196));
    v1 = s0 + 40;
    v0 = D_08AED5E4 - (-10780);
    f1 = BITSF(LD32(a0+4));
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(v0-10780));
    ST32(v1+4, FBITS(f1));
    ST32(s0+28, s1);
    ST32(s0+172, FBITS(f0));
    ST32(s0+40, FBITS(f2));
    ST32(s0+32, 0);
    ST8(s0+37, 0);
    ST8(s0+36, 0);
    ST8(s0+38, 0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+52, 0);
    ST8(s0+168, 0);
    sp = sp + 16;
    return;
}

/* 08931E2C */
u32 func_08931E2C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931E2C:;
    sp = sp - 16;
    v0 = D_08AF8570 - (-31376);
    v0 = v0 - 31376;
    s2 = a0 + 0;
    s0 = LD32(a0+32);
    cnd_ = s0 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08931EA0; }
    goto L_08931E58;
L_08931E58:;
    v0 = (u32)-64;
    goto L_08931E5C;
L_08931E5C:;
    cnd_ = s2 == v0;
    s0 = s2 + 168;
    if (cnd_) { goto L_08931E80; }
    goto L_08931E64;
L_08931E64:;
    s1 = s2 + 64;
    goto L_08931E68;
L_08931E68:;
    cnd_ = s1 == s0;
    s0 = s0 - 52;
    if (cnd_) { goto L_08931E80; }
    goto L_08931E70;
L_08931E70:;
    a0 = s0 + 0;
    func_0892E224(a0, t1, t2, t3);
    goto L_08931E78;
L_08931E78:;
    goto L_08931E68;
L_08931E80:;
    a0 = s2 + 0;
    v0 = func_08955388(a0);
    goto L_08931E88;
L_08931E88:;
    sp = sp + 16;
    return v0;
L_08931EA0:;
    a0 = s0 + 0;
    func_0895D93C(a0, t1, t2, t3);
    goto L_08931EA8;
L_08931EA8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931EB0;
L_08931EB0:;
    v0 = (u32)-64;
    goto L_08931E5C;
}

/* 08931EB8 */
rv_t func_08931EB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931EB8:;
    sp = sp - 16;
    v0 = D_08AF8570 - (-31376);
    v0 = v0 - 31376;
    s2 = a0 + 0;
    s0 = LD32(a0+32);
    cnd_ = s0 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08931F2C; }
    goto L_08931EE4;
L_08931EE4:;
    v0 = (u32)-64;
    goto L_08931EE8;
L_08931EE8:;
    cnd_ = s2 == v0;
    s0 = s2 + 168;
    if (cnd_) { goto L_08931F0C; }
    goto L_08931EF0;
L_08931EF0:;
    s1 = s2 + 64;
    goto L_08931EF4;
L_08931EF4:;
    cnd_ = s1 == s0;
    s0 = s0 - 52;
    if (cnd_) { goto L_08931F0C; }
    goto L_08931EFC;
L_08931EFC:;
    a0 = s0 + 0;
    func_0892E224(a0, t1, t2, t3);
    goto L_08931F04;
L_08931F04:;
    goto L_08931EF4;
L_08931F0C:;
    a0 = s2 + 0;
    v0 = func_08955388(a0);
    goto L_08931F14;
L_08931F14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08931F2C:;
    a0 = s0 + 0;
    func_0895D93C(a0, t1, t2, t3);
    goto L_08931F34;
L_08931F34:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931F3C;
L_08931F3C:;
    v0 = (u32)-64;
    goto L_08931EE8;
}

/* 08931F44 */
rv_t func_08931F44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08931F44:;
    sp = sp - 16;
    v0 = D_08AF8570 - (-31376);
    v0 = v0 - 31376;
    s2 = a0 + 0;
    s0 = LD32(a0+32);
    cnd_ = s0 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08931FC0; }
    goto L_08931F70;
L_08931F70:;
    v0 = (u32)-64;
    goto L_08931F74;
L_08931F74:;
    cnd_ = s2 == v0;
    s0 = s2 + 168;
    if (cnd_) { goto L_08931F98; }
    goto L_08931F7C;
L_08931F7C:;
    s1 = s2 + 64;
    goto L_08931F80;
L_08931F80:;
    cnd_ = s1 == s0;
    s0 = s0 - 52;
    if (cnd_) { goto L_08931F98; }
    goto L_08931F88;
L_08931F88:;
    a0 = s0 + 0;
    func_0892E224(a0, t1, t2, t3);
    goto L_08931F90;
L_08931F90:;
    goto L_08931F80;
L_08931F98:;
    a0 = s2 + 0;
    v0 = func_08955388(a0);
    goto L_08931FA0;
L_08931FA0:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931FA8;
L_08931FA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08931FC0:;
    a0 = s0 + 0;
    func_0895D93C(a0, t1, t2, t3);
    goto L_08931FC8;
L_08931FC8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08931FD0;
L_08931FD0:;
    v0 = (u32)-64;
    goto L_08931F74;
}

/* 08931FD8 */
rv_t func_08931FD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08931FD8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08931FE0 */
rv_t func_08931FE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08931FE0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08931FE8 */
rv_t func_08931FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08931FE8:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08931FF0 */
rv_t func_08931FF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08931FF0:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08932024; }
    goto L_08932010;
L_08932010:;
    goto L_08932014;
L_08932014:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08932024:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    s0 = LD32(v0+12);
    v0 = func_089224D8(a0, a1);
    goto L_08932034;
L_08932034:;
    a0 = LD32(s1+28);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932048;
L_08932048:;
    ST32(sp, s0);
    cnd_ = s0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08932024; }
    goto L_08932054;
L_08932054:;
    goto L_08932014;
}

/* 0893205C */
rv_t func_0893205C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0893205C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08932064 */
rv_t func_08932064(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932064:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+60));
    f1 = BITSF(LD32(a0+52));
    v0 = LD_U8(a0+168);
    f0 = f0 + f12;
    f1 = f1 + f12;
    ST32(a0+60, FBITS(f0));
    cnd_ = v0 == 0;
    ST32(a0+52, FBITS(f1));
    if (cnd_) { goto L_089320B4; }
    goto L_08932094;
L_08932094:;
    f1 = BITSF(LD32(a0+172));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AED5EC - (-10772);
    if (cnd_) { goto L_08932130; }
    goto L_089320AC;
L_089320AC:;
    f0 = f1 - f12;
    goto L_089320B0;
L_089320B0:;
    ST32(s0+172, FBITS(f0));
    goto L_089320B4;
L_089320B4:;
    v0 = LD32(s0+28);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089320D0; }
    goto L_089320C0;
L_089320C0:;
    v0 = LD32(v0+48);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(v0+152); goto L_089320DC; }
    goto L_089320CC;
L_089320CC:;
    goto L_089320D0;
L_089320D0:;
    goto L_089320D4;
L_089320D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089320DC:;
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089320EC;
L_089320EC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089320D0; }
    goto L_089320F4;
L_089320F4:;
    v0 = LD_U8(v0+136);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089320D4; }
    goto L_08932100;
L_08932100:;
    v0 = LD32(s0+32);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089320D4; }
    goto L_0893210C;
L_0893210C:;
    v0 = LD_U8(v0+16);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089320D4; }
    goto L_08932118;
L_08932118:;
    v1 = LD32(s0);
    v0 = LD32(v1+60);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932128;
L_08932128:;
    goto L_089320D0;
L_08932130:;
    ST8(a0+168, 0);
    f0 = BITSF(LD32(v0-10772));
    goto L_089320B0;
}

/* 0893213C */
rv_t func_0893213C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0893213C:;
    sp = sp - 64;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089322B8; }
    goto L_0893215C;
L_0893215C:;
    a0 = LD32(v0+48);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089322BC; }
    goto L_08932168;
L_08932168:;
    v0 = a0 + 100;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089322C0; }
    goto L_08932174;
L_08932174:;
    { rv_t r_ = func_0898D90C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893217C;
L_0893217C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08932198; }
    goto L_08932184;
L_08932184:;
    v0 = LD32(s0+28);
    v1 = LD32(v0+48);
    a0 = LD_U8(v1+241);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089322BC; }
    goto L_08932198;
L_08932198:;
    a0 = s0 + 0;
    func_0893294C(a0);
    goto L_089321A0;
L_089321A0:;
    v0 = LD32(s0+28);
    v1 = LD32(v0+48);
    a0 = LD32(v1+100);
    cnd_ = a0 != 0;
    v1 = v1 + 100;
    if (cnd_) { goto L_089322E8; }
    goto L_089321B4;
L_089321B4:;
    v0 = LD_U8(s0+37);
    goto L_089321B8;
L_089321B8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089321D8; }
    goto L_089321C0;
L_089321C0:;
    a1 = LD32(s0+28);
    v0 = LD32(a1+48);
    v1 = LD_U8(v0+241);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0893227C; }
    goto L_089321D4;
L_089321D4:;
    v1 = LD32(s0);
    goto L_089321D8;
L_089321D8:;
    a0 = s0 + 0;
    v0 = LD32(v1+60);
    t_ = v0;
    s1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089321E8;
L_089321E8:;
    a1 = LD32(s0+28);
    ST32(s0+56, 0);
    v0 = 1;
    v1 = LD32(a1+48);
    ST8(s0+37, v0);
    a0 = v1 + 88;
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v1+88));
    f1 = BITSF(LD32(a0+4));
    v0 = LD32(v1+172);
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    cnd_ = v0 == 0;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_08932278; }
    goto L_08932220;
L_08932220:;
    s2 = sp + 16;
    a0 = LD32(a1+48);
    goto L_08932228;
L_08932228:;
    a3 = sp + 0;
    a1 = s1 + 0;
    a0 = a0 + 100;
    t0 = sp + 32;
    a2 = s2 + 0;
    ST32(sp+32, 0);
    func_08991E44(a0, a1, a2, a3, t0);
    goto L_08932244;
L_08932244:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = 0 + 0;
    t0 = 999;
    func_08931BAC(a0, a1, a2, a3, t0);
    goto L_0893225C;
L_0893225C:;
    a1 = LD32(s0+28);
    s1 = s1 + 1;
    v1 = LD32(a1+48);
    v0 = LD32(v1+172);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a1+48); goto L_08932228; }
    goto L_08932278;
L_08932278:;
    v0 = 1;
    goto L_0893227C;
L_0893227C:;
    ST8(s0+37, v0);
    a0 = LD32(a1+48);
    { rv_t r_ = func_0898D9F4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932288;
L_08932288:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089322BC; }
    goto L_08932290;
L_08932290:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+56));
    v0 = D_08AED5F4 - (-10764);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-10764));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(s0+56, FBITS(f0));
    if (cnd_) { goto L_089322D0; }
    goto L_089322B8;
L_089322B8:;
    goto L_089322BC;
L_089322BC:;
    goto L_089322C0;
L_089322C0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089322D0:;
    v0 = LD32(s0+28);
    a1 = 1;
    a0 = LD32(v0+48);
    func_0898D904(a0, a1);
    goto L_089322E0;
L_089322E0:;
    goto L_089322BC;
L_089322E8:;
    v0 = D_08AED5F0 - (-10768);
    f12 = BITSF(LD32(v0-10768));
    a0 = v1 + 0;
    func_08991CE0(a0, f12);
    goto L_089322F8;
L_089322F8:;
    v0 = LD_U8(s0+37);
    goto L_089321B8;
}

/* 08932300 */
rv_t func_08932300(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08932300:;
    sp = sp - 80;
    a1 = LD32(a0+28);
    cnd_ = a1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08932498; }
    goto L_08932320;
L_08932320:;
    a0 = LD32(a1+48);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_0893249C; }
    goto L_0893232C;
L_0893232C:;
    v0 = LD_U8(s1+36);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08932344; }
    goto L_08932338;
L_08932338:;
    v0 = LD_U8(a0+241);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a1+48); goto L_089323CC; }
    goto L_08932344;
L_08932344:;
    s0 = s1 + 40;
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893234C;
L_0893234C:;
    v1 = LD32(s1+28);
    a2 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+48);
    a1 = 0 + 0;
    a3 = 0 + 0;
    t0 = LD32(v0+80);
    func_08931BAC(a0, a1, a2, a3, t0);
    goto L_0893236C;
L_0893236C:;
    v0 = LD32(s1+28);
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932378;
L_08932378:;
    v1 = LD32(s1+28);
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    a0 = LD32(v1+48);
    f0 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f1));
    a0 = a0 + 100;
    ST32(s0+4, FBITS(f0));
    ST32(s1+40, FBITS(f2));
    cnd_ = a0 == 0;
    ST32(s1+52, 0);
    if (cnd_) { goto L_089323AC; }
    goto L_089323A4;
L_089323A4:;
    v0 = 1;
    ST8(a0+48, v0);
    goto L_089323AC;
L_089323AC:;
    v0 = LD32(s1);
    v1 = LD32(v0+60);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089323BC;
L_089323BC:;
    v0 = 1;
    ST8(s1+36, v0);
    a1 = LD32(s1+28);
    v1 = LD32(a1+48);
    goto L_089323CC;
L_089323CC:;
    f1 = BITSF(LD32(s1+60));
    v0 = v1 + 88;
    f0 = BITSF(LD32(v1+88));
    f3 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    v0 = D_08AED5F8 - (-10760);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-10760));
    ST32(sp+4, FBITS(f2));
    fcc = FCMP(f0, f1, 12);
    ST32(sp+8, FBITS(f3));
    f0 = BITSF(LD32(v1+84));
    cnd_ = !fcc;
    ST32(sp+32, FBITS(f0));
    if (cnd_) { goto L_0893247C; }
    goto L_08932404;
L_08932404:;
    v0 = LD32(v1+172);
    s0 = 1;
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+60, 0); goto L_0893247C; }
    goto L_08932418;
L_08932418:;
    s2 = sp + 16;
    a0 = LD32(a1+48);
    goto L_08932420;
L_08932420:;
    a3 = sp + 0;
    a1 = s0 + 0;
    a0 = a0 + 100;
    t0 = sp + 32;
    a2 = s2 + 0;
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    func_08991E44(a0, a1, a2, a3, t0);
    goto L_08932444;
L_08932444:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a3 = 0 + 0;
    t0 = 999;
    func_08931BAC(a0, a1, a2, a3, t0);
    goto L_0893245C;
L_0893245C:;
    a1 = LD32(s1+28);
    s0 = s0 + 1;
    v1 = LD32(a1+48);
    v0 = LD32(v1+172);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a1+48); goto L_08932420; }
    goto L_08932478;
L_08932478:;
    ST32(s1+60, 0);
    goto L_0893247C;
L_0893247C:;
    v0 = D_08AED5FC - (-10756);
    f0 = BITSF(LD32(s1+52));
    f1 = BITSF(LD32(v0-10756));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089324B0; }
    goto L_08932498;
L_08932498:;
    goto L_0893249C;
L_0893249C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089324B0:;
    a0 = LD32(a1+48);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089324B8;
L_089324B8:;
    v1 = s1 + 40;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(s1+40));
    f3 = BITSF(LD32(v1+4));
    f4 = f4 - f5;
    f0 = f0 - f2;
    f1 = f1 - f3;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AED600 - (-10752);
    f0 = BITSF(LD32(v0-10752));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0893249C; }
    goto L_08932530;
L_08932530:;
    v0 = LD32(s1+28);
    ST8(s1+36, 0);
    a1 = 1;
    a0 = LD32(v0+48);
    func_0898D904(a0, a1);
    goto L_08932544;
L_08932544:;
    goto L_0893249C;
}

/* 0893254C */
rv_t func_0893254C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0893254C:;
    sp = sp - 112;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08932580; }
    goto L_08932574;
L_08932574:;
    v0 = LD32(v0+48);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(v0+152); goto L_089325A0; }
    goto L_08932580;
L_08932580:;
    goto L_08932584;
L_08932584:;
    goto L_08932588;
L_08932588:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089325A0:;
    s3 = D_08C2A880 - (-22400);
    a0 = s3 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089325B0;
L_089325B0:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089325C4; }
    goto L_089325B8;
L_089325B8:;
    a0 = v0 + 0;
    { rv_t r_ = func_089A83D8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089325C0;
L_089325C0:;
    s0 = 0 < v0;
    goto L_089325C4;
L_089325C4:;
    v0 = LD_U8(s1+38);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089325F4; }
    goto L_089325D0;
L_089325D0:;
    v0 = LD_U8(s1+72);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089325F4; }
    goto L_089325DC;
L_089325DC:;
    v0 = LD32(s1+28);
    v1 = LD32(v0+48);
    a0 = LD_U8(v1+241);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08932658; }
    goto L_089325F0;
L_089325F0:;
    v1 = LD32(s1);
    goto L_089325F4;
L_089325F4:;
    v0 = LD32(v1+60);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932600;
L_08932600:;
    v1 = LD32(s1+28);
    v0 = LD32(v1+48);
    v1 = 1;
    a0 = LD32(v0+100);
    ST8(v0+43, v1);
    a1 = v0 + 100;
    v0 = 4;
    cnd_ = a0 == v0;
    ST8(s1+38, v1);
    if (cnd_) { goto L_0893262C; }
    goto L_08932624;
L_08932624:;
    a0 = a1 + 0;
    { u64 r_ = func_08991D44(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893262C;
L_0893262C:;
    cnd_ = s0 == 0;
    if (cnd_) { v1 = LD32(s1+28); goto L_08932864; }
    goto L_08932634;
L_08932634:;
    a0 = s1 + 0;
    a1 = 1;
    func_08931CE8(a0, a1);
    goto L_08932640;
L_08932640:;
    v0 = D_08AED604 - (-10748);
    goto L_08932644;
L_08932644:;
    v1 = LD32(s1+32);
    f0 = BITSF(LD32(v0-10748));
    v0 = 1;
    ST8(v1+16, v0);
    ST32(v1+20, FBITS(f0));
    goto L_08932658;
L_08932658:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08932584; }
    goto L_08932660;
L_08932660:;
    v1 = D_08AD9C1C - (-25572);
    v0 = v1 - 25572;
    a0 = LD32(v1-25572);
    a2 = LD32(v0+12);
    v1 = LD32(v0+4);
    a1 = LD32(v0+8);
    ST32(sp+16, a0);
    s0 = 0 + 0;
    ST32(sp+20, v1);
    ST32(sp+24, a1);
    ST32(sp+28, a2);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    v0 = LD32(s1+28);
    goto L_089326A0;
L_089326A0:;
    a1 = s0 + 0;
    a0 = LD32(v0+48);
    f0 = func_0898D40C(a0, a1);
    goto L_089326AC;
L_089326AC:;
    f1 = f0;
    v1 = 0 + 0;
    a1 = sp + 0;
    goto L_089326B8;
L_089326B8:;
    f0 = BITSF(LD32(a1+16));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = v1 < 0x3u;
    if (cnd_) { goto L_08932830; }
    goto L_089326CC;
L_089326CC:;
    v1 = v1 + 1;
    v0 = v1 < 0x4u;
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_089326B8; }
    goto L_089326DC;
L_089326DC:;
    s0 = s0 + 1;
    v0 = s0 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+28); goto L_089326A0; }
    goto L_089326EC;
L_089326EC:;
    v1 = 0 + 0;
    a0 = sp + 32;
    goto L_089326F4;
L_089326F4:;
    ST32(a0, v1);
    v1 = v1 + 1;
    v0 = v1 < 0x5u;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089326F4; }
    goto L_08932708;
L_08932708:;
    v0 = LD32(s1+28);
    t0 = LD32(sp);
    s0 = s1 + 64;
    a1 = LD32(v0+48);
    a0 = s0 + 0;
    a3 = sp + 32;
    a2 = LD32(a1+172);
    s2 = 0 + 0;
    func_0892E400(a0, a1, a2, a3, t0);
    goto L_0893272C;
L_0893272C:;
    a0 = s0 + 0;
    func_0892E440(a0);
    goto L_08932734;
L_08932734:;
    v0 = D_08AED608 - (-10744);
    f20 = BITSF(LD32(v0-10744));
    s0 = 0 + 0;
    v0 = LD32(s1+28);
    goto L_08932744;
L_08932744:;
    a1 = s0 + 0;
    s0 = s0 + 1;
    a0 = LD32(v0+48);
    f0 = func_0898D40C(a0, a1);
    goto L_08932754;
L_08932754:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = s0 < 0x4u;
    if (cnd_) { goto L_08932768; }
    goto L_08932764;
L_08932764:;
    s2 = s2 + 1;
    goto L_08932768;
L_08932768:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+28); goto L_08932744; }
    goto L_08932770;
L_08932770:;
    v0 = LD_U8(s1+168);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08932584; }
    goto L_0893277C;
L_0893277C:;
    v0 = LD32(s1+28);
    t0 = LD32(v0+48);
    a3 = LD32(t0+172);
    cnd_ = a3 == 0;
    if (cnd_) {  goto L_08932588; }
    goto L_08932790;
L_08932790:;
    a1 = D_08B25AC0 - (23232);
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v1;
    ST32(a2+4, a0);
    a2 = 1;
    a0 = s3 - 22400;
    ST32(a1+23232, v1);
    a3 = hi;
    a3 = a3 << 2;
    a3 = a3 + t0;
    a1 = LD32(a3+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089327E0;
L_089327E0:;
    v1 = s2 < 0x2u;
    a2 = v0 + 0;
    v1 = v1 ^ 0x1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a2); goto L_08932808; }
    goto L_089327FC;
L_089327FC:;
    v0 = 1;
    goto L_08932800;
L_08932800:;
    ST8(s1+168, v0);
    goto L_08932580;
L_08932808:;
    a0 = a2 + 0;
    a1 = 0x529b0000u;
    v1 = LD32(v0-16);
    a1 = a1 | 0xb384;
    a3 = 1;
    v1 = a2 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932828;
L_08932828:;
    v0 = 1;
    goto L_08932800;
L_08932830:;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08932858; }
    goto L_08932838;
L_08932838:;
    a0 = sp + 12;
    goto L_0893283C;
L_0893283C:;
    f0 = BITSF(LD32(a0+12));
    a2 = a2 - 1;
    v0 = v1 < a2;
    ST32(a0+16, FBITS(f0));
    ST32(a0, s0);
    cnd_ = v0 != 0;
    a0 = a0 - 4;
    if (cnd_) { goto L_0893283C; }
    goto L_08932858;
L_08932858:;
    ST32(a1+16, FBITS(f1));
    ST32(a1, s0);
    goto L_089326DC;
L_08932864:;
    a0 = s3 - 22400;
    a2 = 1;
    v0 = LD32(v1+48);
    a1 = LD32(v0+152);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08932878;
L_08932878:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08932640; }
    goto L_08932880;
L_08932880:;
    a1 = D_08B25AC8 - (23240);
    v0 = LD32(a1+23240);
    a2 = a1 + 23240;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    v1 = v1 + v0;
    a0 = (v0 >> 1) & 0x1;
    ST32(a2+4, v1);
    cnd_ = a0 == 0;
    ST32(a1+23240, v0);
    if (cnd_) { goto L_08932640; }
    goto L_089328B4;
L_089328B4:;
    v0 = LD32(t0);
    a1 = 0x34690000u;
    a0 = t0 + 0;
    v1 = LD32(v0-16);
    a1 = a1 | 0x94e9;
    a3 = 1;
    v1 = t0 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089328D8;
L_089328D8:;
    v0 = D_08AED604 - (-10748);
    goto L_08932644;
}

/* 089328E0 */
rv_t func_089328E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089328E0:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+28);
    v1 = LD32(a0+48);
    v0 = LD_U8(v1+241);
    cnd_ = v0 == 0;
    s1 = s0 + 64;
    if (cnd_) { goto L_08932910; }
    goto L_0893290C;
L_0893290C:;
    ST8(v1+241, 0);
    goto L_08932910;
L_08932910:;
    v0 = LD32(a0+48);
    ST8(v0+43, 0);
    a0 = v0 + 0;
    func_0898D904(a0, a1);
    goto L_08932920;
L_08932920:;
    ST8(s0+38, 0);
    a0 = s1 + 0;
    ST8(s0+37, 0);
    ST8(s0+36, 0);
    { rv_t r_ = func_0892E264(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932934;
L_08932934:;
    ST8(s1+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893294C */
void func_0893294C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893294C:;
    sp = sp - 32;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08932974; }
    goto L_08932964;
L_08932964:;
    s0 = LD32(v0+48);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08932980; }
    goto L_08932970;
L_08932970:;
    goto L_08932974;
L_08932974:;
    sp = sp + 32;
    return;
L_08932980:;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08932988;
L_08932988:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = s0 + 88;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(s0+88, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    goto L_08932970;
}

/* 089329B4 */
rv_t func_089329B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089329B4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C258FC - (22780);
    t1 = D_08C2590C - (22796);
    t2 = D_08C2591C - (22812);
    a1 = a1 & a0;
    v1 = t0 + 22780;
    a2 = t1 + 22796;
    cnd_ = a1 == 0;
    a3 = t2 + 22812;
    if (cnd_) { goto L_08932A6C; }
    goto L_089329E4;
L_089329E4:;
    v0 = D_08AED60C - (-10740);
    f4 = BITSF(LD32(v0-10740));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+22780, FBITS(f2));
    ST32(t1+22796, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+22812, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08932A6C;
L_08932A6C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08932A74 */
rv_t func_08932A74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932A74:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089329B4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932A88;
L_08932A88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932A94 */
rv_t func_08932A94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932A94:;
    sp = sp - 16;
    a2 = 1015;
    s0 = a0 + 0;
    func_08931D8C(a0, a1, a2);
    goto L_08932AB0;
L_08932AB0:;
    v0 = D_08AF85B8 - (-31304);
    v0 = v0 - 31304;
    ST32(s0, v0);
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932AC4;
L_08932AC4:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 3;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932AD4;
L_08932AD4:;
    ST32(s0+32, s1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932AEC */
rv_t func_08932AEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932AEC:;
    v0 = D_08AF85B8 - (-31304);
    v0 = v0 - 31304;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08932B08;
L_08932B08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932B14 */
rv_t func_08932B14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932B14:;
    v0 = D_08AF85B8 - (-31304);
    v0 = v0 - 31304;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08932B34;
L_08932B34:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08932B3C;
L_08932B3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932B4C */
rv_t func_08932B4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932B4C:;
    sp = sp - 16;
    { rv_t r_ = func_08931FD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932B5C;
L_08932B5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932B68 */
rv_t func_08932B68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932B68:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932B78;
L_08932B78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932B84 */
rv_t func_08932B84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932B84:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932B94;
L_08932B94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932BA0 */
rv_t func_08932BA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932BA0:;
    sp = sp - 16;
    { rv_t r_ = func_08931FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932BB0;
L_08932BB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932BBC */
rv_t func_08932BBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08932BBC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08932BC4 */
rv_t func_08932BC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08932BC4:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    a0 = LD32(a0+32);
    func_0895D9A8(a0, f12);
    goto L_08932BE4;
L_08932BE4:;
    v0 = LD32(s0+32);
    a0 = s0 + 0;
    a1 = LD32(v0);
    func_08932C24(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08932BF4;
L_08932BF4:;
    a0 = s0 + 0;
    func_08932C88(a0);
    goto L_08932BFC;
L_08932BFC:;
    a0 = LD32(s0+32);
    { rv_t r_ = func_0895D9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932C04;
L_08932C04:;
    a0 = s0 + 0;
    f12 = f20;
    { rv_t r_ = func_08932064(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932C10;
L_08932C10:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08932C24 */
void func_08932C24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932C24:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    v1 = (s32)a1 < 2;
    if (cnd_) { goto L_08932C7C; }
    goto L_08932C38;
L_08932C38:;
    cnd_ = v1 != 0;
    v0 = 2;
    if (cnd_) { goto L_08932C68; }
    goto L_08932C40;
L_08932C40:;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(a0); goto L_08932C54; }
    goto L_08932C48;
L_08932C48:;
    goto L_08932C4C;
L_08932C4C:;
    sp = sp + 16;
    return;
L_08932C54:;
    v1 = LD32(v0+56);
    goto L_08932C58;
L_08932C58:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932C60;
L_08932C60:;
    goto L_08932C4C;
L_08932C68:;
    cnd_ = a1 != 0;
    if (cnd_) {  goto L_08932C4C; }
    goto L_08932C70;
L_08932C70:;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    goto L_08932C58;
L_08932C7C:;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    goto L_08932C58;
}

/* 08932C88 */
void func_08932C88(u32 a0)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08932C88:;
    sp = sp - 64;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08932CB8; }
    goto L_08932CAC;
L_08932CAC:;
    v0 = LD32(v0+48);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08932CD4; }
    goto L_08932CB8;
L_08932CB8:;
    sp = sp + 64;
    return;
L_08932CD4:;
    { rv_t r_ = func_0898D41C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932CDC;
L_08932CDC:;
    v0 = LD32(s1+28);
    f20 = f0;
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932CEC;
L_08932CEC:;
    s0 = v0 + 0;
    v0 = LD32(s1+28);
    a0 = LD32(v0+48);
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08932CFC;
L_08932CFC:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+32);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+8, FBITS(f2));
    {v0=FBITS(v[0]);}
    f21 = BITSF(v0);
    func_0895DB54(a0);
    goto L_08932D64;
L_08932D64:;
    v0 = D_08AED610 - (-10736);
    f0 = BITSF(LD32(v0-10736));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s1+36); goto L_08932DB8; }
    goto L_08932D7C;
L_08932D7C:;
    v0 = D_08AED614 - (-10732);
    f0 = BITSF(LD32(v0-10732));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s1+36); goto L_08932DB8; }
    goto L_08932D94;
L_08932D94:;
    a0 = LD32(s1+32);
    v0 = D_08AED618 - (-10728);
    f0 = BITSF(LD32(v0-10728));
    v1 = LD32(a0+12);
    v0 = LD32(v1+8);
    goto L_08932DA8;
L_08932DA8:;
    ST32(v0+4, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    goto L_08932CB8;
L_08932DB8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+28); goto L_08932DD8; }
    goto L_08932DC0;
L_08932DC0:;
    a0 = LD32(s1+32);
    goto L_08932DC4;
L_08932DC4:;
    v0 = D_08AED618 - (-10728);
    f0 = BITSF(LD32(v0-10728));
    v1 = LD32(a0+12);
    v0 = LD32(v1+4);
    goto L_08932DA8;
L_08932DD8:;
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D90C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932DE0;
L_08932DE0:;
    cnd_ = v0 != 0;
    a0 = LD32(s1+32);
    if (cnd_) { goto L_08932DC4; }
    goto L_08932DE8;
L_08932DE8:;
    v0 = D_08AED618 - (-10728);
    f0 = BITSF(LD32(v0-10728));
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    goto L_08932DA8;
}

/* 08932DFC */
rv_t func_08932DFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932DFC:;
    sp = sp - 16;
    { rv_t r_ = func_089328E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932E0C;
L_08932E0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932E18 */
rv_t func_08932E18(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08932E18:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C259AC - (22956);
    t1 = D_08C259BC - (22972);
    t2 = D_08C259CC - (22988);
    a1 = a1 & a0;
    v1 = t0 + 22956;
    a2 = t1 + 22972;
    cnd_ = a1 == 0;
    a3 = t2 + 22988;
    if (cnd_) { goto L_08932ED0; }
    goto L_08932E48;
L_08932E48:;
    v0 = D_08AED61C - (-10724);
    f4 = BITSF(LD32(v0-10724));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+22956, FBITS(f2));
    ST32(t1+22972, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+22988, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08932ED0;
L_08932ED0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08932ED8 */
rv_t func_08932ED8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932ED8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08932E18(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932EEC;
L_08932EEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932EF8 */
rv_t func_08932EF8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932EF8:;
    sp = sp - 16;
    a2 = 1013;
    s0 = a0 + 0;
    func_08931D8C(a0, a1, a2);
    goto L_08932F14;
L_08932F14:;
    v0 = D_08AF8600 - (-31232);
    v0 = v0 - 31232;
    ST32(s0, v0);
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932F28;
L_08932F28:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 4;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932F38;
L_08932F38:;
    ST32(s0+32, s1);
    ST8(s0+176, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932F54 */
rv_t func_08932F54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932F54:;
    v0 = D_08AF8600 - (-31232);
    v0 = v0 - 31232;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08932F70;
L_08932F70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932F7C */
rv_t func_08932F7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932F7C:;
    v0 = D_08AF8600 - (-31232);
    v0 = v0 - 31232;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08932F9C;
L_08932F9C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08932FA4;
L_08932FA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932FB4 */
rv_t func_08932FB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932FB4:;
    sp = sp - 16;
    { rv_t r_ = func_08931FD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932FC4;
L_08932FC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932FD0 */
rv_t func_08932FD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932FD0:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932FE0;
L_08932FE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08932FEC */
rv_t func_08932FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08932FEC:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08932FFC;
L_08932FFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08933008 */
rv_t func_08933008(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933008:;
    sp = sp - 16;
    { rv_t r_ = func_08931FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933018;
L_08933018:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08933024 */
rv_t func_08933024(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933024:;
    sp = sp - 16;
    { rv_t r_ = func_0893205C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933034;
L_08933034:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08933040 */
rv_t func_08933040(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08933040:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    a0 = LD32(a0+32);
    func_0895D9A8(a0, f12);
    goto L_08933060;
L_08933060:;
    v0 = LD32(s0+32);
    a0 = s0 + 0;
    a1 = LD32(v0);
    func_089330A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08933070;
L_08933070:;
    a0 = s0 + 0;
    func_08933120(a0);
    goto L_08933078;
L_08933078:;
    a0 = LD32(s0+32);
    { rv_t r_ = func_0895D9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933080;
L_08933080:;
    a0 = s0 + 0;
    f12 = f20;
    { rv_t r_ = func_08932064(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893308C;
L_0893308C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089330A0 */
void func_089330A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089330A0:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08933114; }
    goto L_089330B0;
L_089330B0:;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08933100; }
    goto L_089330BC;
L_089330BC:;
    cnd_ = a1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089330E8; }
    goto L_089330C4;
L_089330C4:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_089330D8; }
    goto L_089330CC;
L_089330CC:;
    goto L_089330D0;
L_089330D0:;
    sp = sp + 16;
    return;
L_089330D8:;
    func_089332F8(a0);
    goto L_089330E0;
L_089330E0:;
    goto L_089330D0;
L_089330E8:;
    v0 = LD32(a0);
    v1 = LD32(v0+56);
    goto L_089330F0;
L_089330F0:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089330F8;
L_089330F8:;
    goto L_089330D0;
L_08933100:;
    cnd_ = a1 != 0;
    if (cnd_) {  goto L_089330D0; }
    goto L_08933108;
L_08933108:;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    goto L_089330F0;
L_08933114:;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    goto L_089330F0;
}

/* 08933120 */
void func_08933120(u32 a0)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08933120:;
    sp = sp - 64;
    s2 = D_08AED620 - (-10720);
    s1 = a0 + 0;
    v0 = LD32(a0+28);
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D41C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933150;
L_08933150:;
    v0 = LD32(s1+28);
    f20 = f0;
    a0 = LD32(v0+48);
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08933160;
L_08933160:;
    s0 = v0 + 0;
    v0 = LD32(s1+28);
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933170;
L_08933170:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+32);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+8, FBITS(f2));
    {v0=FBITS(v[0]);}
    f21 = BITSF(v0);
    func_0895DB54(a0);
    goto L_089331D8;
L_089331D8:;
    f0 = BITSF(LD32(s2-10720));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AED624 - (-10716);
    if (cnd_) { goto L_08933234; }
    goto L_089331EC;
L_089331EC:;
    f0 = BITSF(LD32(v0-10716));
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+32); goto L_089332D4; }
    goto L_08933200;
L_08933200:;
    v0 = LD_U8(s1+36);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+28); goto L_089332B0; }
    goto L_0893320C;
L_0893320C:;
    a0 = LD32(s1+32);
    goto L_08933210;
L_08933210:;
    v0 = D_08AED628 - (-10712);
    f0 = BITSF(LD32(v0-10712));
    v1 = LD32(a0+12);
    v0 = LD32(v1+4);
    goto L_08933220;
L_08933220:;
    ST32(v0+8, FBITS(f0));
    ST32(v0+12, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    goto L_08933230;
L_08933230:;
    f0 = BITSF(LD32(s2-10720));
    goto L_08933234;
L_08933234:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08933280; }
    goto L_08933244;
L_08933244:;
    v0 = D_08AED624 - (-10716);
    f0 = BITSF(LD32(v0-10716));
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    a0 = LD32(s1+32);
    if (cnd_) { goto L_0893329C; }
    goto L_0893325C;
L_0893325C:;
    v0 = D_08AED628 - (-10712);
    f0 = BITSF(LD32(v0-10712));
    v1 = LD32(a0+12);
    v0 = LD32(v1+8);
    goto L_0893326C;
L_0893326C:;
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    ST32(v0+12, FBITS(f0));
    goto L_08933280;
L_08933280:;
    sp = sp + 64;
    return;
L_0893329C:;
    v0 = D_08AED628 - (-10712);
    f0 = BITSF(LD32(v0-10712));
    v1 = LD32(a0+12);
    v0 = LD32(v1+12);
    goto L_0893326C;
L_089332B0:;
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D90C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089332B8;
L_089332B8:;
    cnd_ = v0 != 0;
    a0 = LD32(s1+32);
    if (cnd_) { goto L_08933210; }
    goto L_089332C0;
L_089332C0:;
    v0 = D_08AED628 - (-10712);
    f0 = BITSF(LD32(v0-10712));
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    goto L_08933220;
L_089332D4:;
    v0 = D_08AED628 - (-10712);
    f0 = BITSF(LD32(v0-10712));
    v1 = LD32(a0+12);
    v0 = LD32(v1+12);
    ST32(v0+12, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    goto L_08933230;
}

/* 089332F8 */
void func_089332F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_089332F8:;
    sp = sp - 304;
    s2 = a0 + 0;
    v0 = LD_U8(a0+176);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089333F0; }
    goto L_08933340;
L_08933340:;
    v0 = D_08AED62C - (-10708);
    v1 = D_08AED630 - (-10704);
    f21 = BITSF(LD32(v0-10708));
    f20 = BITSF(LD32(v1-10704));
    s1 = sp + 0;
    v0 = LD32(s2+28);
    goto L_08933358;
L_08933358:;
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933360;
L_08933360:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f6 = f1 + f21;
    f4 = f0 + f21;
    f3 = f0 + f20;
    f5 = f1 + f20;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    cnd_ = s0 != 0;
    ST32(sp+8, FBITS(f1));
    if (cnd_) { goto L_08933C3C; }
    goto L_0893338C;
L_0893338C:;
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f6));
    ST32(sp+32, FBITS(f21));
    ST32(sp+36, 0);
    ST32(sp+40, FBITS(f21));
    goto L_089333A4;
L_089333A4:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    a1 = s0 + 0;
    ST32(s1, FBITS(f0));
    a0 = s2 + 0;
    a2 = sp + 0;
    f0 = BITSF(LD32(sp+24));
    ST32(s1+4, FBITS(f1));
    a3 = 0 + 0;
    t0 = 999;
    ST32(s1+8, FBITS(f0));
    s0 = s0 + 1;
    func_08931BAC(a0, a1, a2, a3, t0);
    goto L_089333D8;
L_089333D8:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 == 0;
    s5 = D_08B28DC4 - (-29244);
    if (cnd_) { goto L_089333F4; }
    goto L_089333E4;
L_089333E4:;
    v0 = LD_U8(s2+176);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+28); goto L_08933358; }
    goto L_089333F0;
L_089333F0:;
    s5 = D_08B28DC4 - (-29244);
    goto L_089333F4;
L_089333F4:;
    v0 = s5 - 29244;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+64, v0);
    v1 = v1 + 1;
    s1 = sp + 64;
    ST32(v0+8, v1);
    ST32(sp+72, 0);
    cnd_ = a0 == 0;
    ST32(sp+68, 0);
    if (cnd_) { goto L_08933468; }
    goto L_0893341C;
L_0893341C:;
    a1 = LD32(s5-29244);
    a2 = a0 + 0;
    goto L_08933424;
L_08933424:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08933458; }
    goto L_0893343C;
L_0893343C:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = D_08AD9C54 - (-25516); goto L_0893346C; }
    goto L_0893344C;
L_0893344C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0893343C; }
    goto L_08933458;
L_08933458:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08933424; }
    goto L_08933468;
L_08933468:;
    v1 = D_08AD9C54 - (-25516);
    goto L_0893346C;
L_0893346C:;
    v0 = v1 - 25516;
    a0 = LD32(v1-25516);
    a3 = LD32(v0+12);
    v1 = LD32(v0+4);
    a1 = LD32(v0+8);
    t1 = LD32(s2+28);
    ST32(sp+80, a0);
    a2 = D_08AD9C64 - (-25500);
    v0 = a2 - 25500;
    ST32(sp+84, v1);
    t0 = D_08C2A880 - (-22400);
    t2 = t0 - 22400;
    ST32(sp+88, a1);
    s4 = 0 + 0;
    ST32(sp+92, a3);
    v1 = LD32(t1+48);
    a1 = LD32(a2-25500);
    a3 = LD32(v0+12);
    a0 = LD32(v0+4);
    a2 = LD32(v1+160);
    v1 = LD32(v0+8);
    v0 = 999;
    ST32(sp+96, a1);
    ST32(sp+100, a0);
    ST32(sp+104, v1);
    cnd_ = a2 == v0;
    ST32(sp+108, a3);
    if (cnd_) { goto L_08933528; }
    goto L_089334D8;
L_089334D8:;
    v0 = LD32(t2+4);
    v1 = LD32(t0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(t1+48); goto L_0893352C; }
    goto L_089334FC;
L_089334FC:;
    a0 = LD32(a1);
    goto L_08933500;
L_08933500:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08933C1C; }
    goto L_08933518;
L_08933518:;
    a1 = LD32(a1+4);
    goto L_0893351C;
L_0893351C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08933500; }
    goto L_08933524;
L_08933524:;
    s4 = 0 + 0;
    goto L_08933528;
L_08933528:;
    v0 = LD32(t1+48);
    goto L_0893352C;
L_0893352C:;
    a0 = t0 - 22400;
    a2 = 1;
    a1 = LD32(v0+164);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893353C;
L_0893353C:;
    a0 = LD32(sp+72);
    cnd_ = a0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08933678; }
    goto L_08933548;
L_08933548:;
    v0 = LD_U8(s2+176);
    cnd_ = v0 != 0;
    v0 = D_08AED634 - (-10700);
    if (cnd_) { goto L_08933678; }
    goto L_08933554;
L_08933554:;
    v1 = D_08AED638 - (-10696);
    f23 = BITSF(LD32(v0-10700));
    v0 = D_08AED63C - (-10692);
    f21 = BITSF(LD32(v1-10696));
    f24 = BITSF(LD32(v0-10692));
    v1 = D_08AED640 - (-10688);
    v0 = D_08AED644 - (-10684);
    f22 = BITSF(LD32(v1-10688));
    f25 = BITSF(LD32(v0-10684));
    s0 = LD32(a0);
    goto L_0893357C;
L_0893357C:;
    a1 = 1;
    a0 = s1 + 0;
    func_08ABD144(a0, a1);
    goto L_08933588;
L_08933588:;
    v1 = LD32(s2+28);
    v0 = s0 + 32;
    f2 = BITSF(LD32(v0+8));
    a0 = LD32(v1+48);
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+56, FBITS(f2));
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089335B0;
L_089335B0:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(sp+56));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+52));
    f4 = f4 - f1;
    f3 = f3 - f0;
    f12 = f2;
    f13 = f4;
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    f0 = func_08A9F5FC(f12, f13);
    goto L_089335EC;
L_089335EC:;
    v0 = LD32(s2+28);
    v1 = LD32(v0+48);
    f1 = BITSF(LD32(v1+84));
    f20 = f0 - f1;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f20 + f23; goto L_08933610; }
    goto L_08933610;
L_08933610:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08933638; }
    goto L_08933618;
L_08933618:;
    fcc = FCMP(f20, f21, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08933638; }
    goto L_08933628;
L_08933628:;
    fcc = FCMP(f24, f20, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s4); goto L_08933A30; }
    goto L_08933638;
L_08933638:;
    cnd_ = s3 == 0;
    a0 = LD32(sp+72);
    if (cnd_) { goto L_08933664; }
    goto L_08933640;
L_08933640:;
    fcc = FCMP(f20, f22, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08933664; }
    goto L_08933650;
L_08933650:;
    fcc = FCMP(f25, f20, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s3); goto L_08933844; }
    goto L_08933660;
L_08933660:;
    a0 = LD32(sp+72);
    goto L_08933664;
L_08933664:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08933678; }
    goto L_0893366C;
L_0893366C:;
    v0 = LD_U8(s2+176);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(a0); goto L_0893357C; }
    goto L_08933678;
L_08933678:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_089336FC; }
    goto L_08933680;
L_08933680:;
    v0 = LD_U8(s2+176);
    cnd_ = v0 != 0;
    a1 = LD32(sp+80);
    if (cnd_) { goto L_089336FC; }
    goto L_0893368C;
L_0893368C:;
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = s5 - 29244;
    if (cnd_) { goto L_089336FC; }
    goto L_08933698;
L_08933698:;
    v0 = LD32(v1+4);
    v1 = D_08B28DC4 - (-29244);
    a0 = LD32(v1-29244);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089336E0; }
    goto L_089336C0;
L_089336C0:;
    a2 = LD32(v1);
    goto L_089336C4;
L_089336C4:;
    v0 = LD32(a2+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a2+16); goto L_08933824; }
    goto L_089336D0;
L_089336D0:;
    v1 = LD32(v1+4);
    goto L_089336D4;
L_089336D4:;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1); goto L_089336C4; }
    goto L_089336DC;
L_089336DC:;
    a2 = 0 + 0;
    goto L_089336E0;
L_089336E0:;
    cnd_ = a2 == 0;
    a2 = a2 + 32;
    if (cnd_) { goto L_089336FC; }
    goto L_089336E8;
L_089336E8:;
    a0 = s2 + 0;
    a1 = 2;
    a3 = 0 + 0;
    t0 = 999;
    func_08931BAC(a0, a1, a2, a3, t0);
    goto L_089336FC;
L_089336FC:;
    cnd_ = s3 == 0;
    if (cnd_) { s1 = LD32(sp+64); goto L_08933714; }
    goto L_08933704;
L_08933704:;
    v0 = LD_U8(s2+176);
    cnd_ = v0 == 0;
    a1 = LD32(sp+88);
    if (cnd_) { goto L_089337F4; }
    goto L_08933710;
L_08933710:;
    s1 = LD32(sp+64);
    goto L_08933714;
L_08933714:;
    v1 = 1;
    ST8(s2+176, v1);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089337A0; }
    goto L_0893372C;
L_0893372C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089337A0; }
    goto L_08933738;
L_08933738:;
    v0 = LD32(s1);
    goto L_0893373C;
L_0893373C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08933790; }
    goto L_08933750;
L_08933750:;
    v0 = LD_U8(s0+8);
    goto L_08933754;
L_08933754:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089337EC; }
    goto L_0893375C;
L_0893375C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089337DC; }
    goto L_08933764;
L_08933764:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0893376C;
L_0893376C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08933778;
L_08933778:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08933784;
L_08933784:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08933754; }
    goto L_0893378C;
L_0893378C:;
    v1 = LD32(s1+4);
    goto L_08933790;
L_08933790:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893373C; }
    goto L_089337A0;
L_089337A0:;
    sp = sp + 304;
    return;
L_089337DC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0893376C;
L_089337EC:;
    s0 = LD32(s0+4);
    goto L_08933784;
L_089337F4:;
    a0 = s5 - 29244;
    a2 = 1;
    v0 = func_08ABD0BC(a0, a1, a2);
    goto L_08933800;
L_08933800:;
    cnd_ = v0 == 0;
    a2 = v0 + 32;
    if (cnd_) { goto L_08933710; }
    goto L_08933808;
L_08933808:;
    a0 = s2 + 0;
    a1 = 3;
    a3 = 0 + 0;
    t0 = 999;
    func_08931BAC(a0, a1, a2, a3, t0);
    goto L_0893381C;
L_0893381C:;
    s1 = LD32(sp+64);
    goto L_08933714;
L_08933824:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089336D4; }
    goto L_08933830;
L_08933830:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089336D4; }
    goto L_0893383C;
L_0893383C:;
    goto L_089336E0;
L_08933844:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893385C;
L_0893385C:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f3 = f3 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f4 - f1;
    f5 = f5 - f0;
    v0 = FBITS(f3);
    f1 = BITSF(LD32(sp+104));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f1, 12);
    ST32(sp+20, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_089339C0; }
    goto L_089338C0;
L_089338C0:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089338DC;
L_089338DC:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f3 = f3 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f4 - f1;
    f5 = f5 - f0;
    v0 = FBITS(f3);
    f1 = BITSF(LD32(sp+108));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f1, 12);
    ST32(sp+20, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08933660; }
    goto L_08933940;
L_08933940:;
    v0 = LD32(s0+76);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = LD32(sp+72);
    if (cnd_) { goto L_08933664; }
    goto L_08933950;
L_08933950:;
    v0 = LD32(s2+28);
    v1 = LD32(s0+4);
    a0 = LD32(v0+48);
    ST32(sp+92, v1);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933964;
L_08933964:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    ST32(sp, FBITS(f2));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    ST32(sp+4, FBITS(f3));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    ST32(sp+108, v0);
    goto L_08933660;
L_089339C0:;
    v0 = LD32(s2+28);
    v1 = LD32(s0+4);
    a0 = LD32(v0+48);
    ST32(sp+88, v1);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089339D4;
L_089339D4:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    ST32(sp, FBITS(f2));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    ST32(sp+4, FBITS(f3));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    ST32(sp+104, v0);
    goto L_089338C0;
L_08933A30:;
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933A48;
L_08933A48:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f3 = f3 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f4 - f1;
    f5 = f5 - f0;
    v0 = FBITS(f3);
    f1 = BITSF(LD32(sp+96));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f1, 12);
    ST32(sp+20, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08933BAC; }
    goto L_08933AAC;
L_08933AAC:;
    v0 = LD32(s4);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933AC8;
L_08933AC8:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f3 = f3 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f4 - f1;
    f5 = f5 - f0;
    v0 = FBITS(f3);
    f1 = BITSF(LD32(sp+100));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f1, 12);
    ST32(sp+20, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08933638; }
    goto L_08933B2C;
L_08933B2C:;
    v0 = LD32(s0+76);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08933638; }
    goto L_08933B3C;
L_08933B3C:;
    v0 = LD32(s2+28);
    v1 = LD32(s0+4);
    a0 = LD32(v0+48);
    ST32(sp+84, v1);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933B50;
L_08933B50:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    ST32(sp, FBITS(f2));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    ST32(sp+4, FBITS(f3));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    ST32(sp+100, v0);
    goto L_08933638;
L_08933BAC:;
    v0 = LD32(s2+28);
    v1 = LD32(s0+4);
    a0 = LD32(v0+48);
    ST32(sp+80, v1);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933BC0;
L_08933BC0:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    ST32(sp, FBITS(f2));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    ST32(sp+4, FBITS(f3));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    ST32(sp+96, v0);
    goto L_08933AAC;
L_08933C1C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s4 = a0 + 0;
    if (cnd_) { goto L_08933518; }
    goto L_08933C28;
L_08933C28:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0893351C; }
    goto L_08933C34;
L_08933C34:;
    v0 = LD32(t1+48);
    goto L_0893352C;
L_08933C3C:;
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f5));
    ST32(sp+48, FBITS(f20));
    ST32(sp+52, 0);
    ST32(sp+56, FBITS(f20));
    goto L_089333A4;
}

/* 08933C58 */
rv_t func_08933C58(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08933C58:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C259DC - (23004);
    t1 = D_08C259EC - (23020);
    t2 = D_08C259FC - (23036);
    a1 = a1 & a0;
    v1 = t0 + 23004;
    a2 = t1 + 23020;
    cnd_ = a1 == 0;
    a3 = t2 + 23036;
    if (cnd_) { goto L_08933D10; }
    goto L_08933C88;
L_08933C88:;
    v0 = D_08AED648 - (-10680);
    f4 = BITSF(LD32(v0-10680));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+23004, FBITS(f2));
    ST32(t1+23020, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+23036, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08933D10;
L_08933D10:;
    return (rv_t){ v0, v1, f0 };
}

/* 08933D18 */
rv_t func_08933D18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933D18:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08933C58(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933D2C;
L_08933D2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08933D38 */
u64 func_08933D38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933D38:;
    sp = sp - 16;
    a2 = 1017;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08933D50;
L_08933D50:;
    v0 = D_08AF8648 - (-31160);
    v0 = v0 - 31160;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08933D6C */
rv_t func_08933D6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933D6C:;
    sp = sp - 16;
    v0 = func_08933E74(a0);
    goto L_08933D80;
L_08933D80:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08956A74(a0, a1);
    goto L_08933D8C;
L_08933D8C:;
    a2 = v0 + 0;
    a0 = D_08C2A880 - (-22400);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_08933E3C; }
    goto L_08933DA0;
L_08933DA0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08933DF0; }
    goto L_08933DC4;
L_08933DC4:;
    a0 = LD32(a1);
    goto L_08933DC8;
L_08933DC8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08933E44; }
    goto L_08933DE0;
L_08933DE0:;
    a1 = LD32(a1+4);
    goto L_08933DE4;
L_08933DE4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08933DC8; }
    goto L_08933DEC;
L_08933DEC:;
    s1 = 0 + 0;
    goto L_08933DF0;
L_08933DF0:;
    cnd_ = s1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08933E3C; }
    goto L_08933DF8;
L_08933DF8:;
    a0 = 0x8038;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08933E08;
L_08933E08:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08933E24; }
    goto L_08933E10;
L_08933E10:;
    a0 = LD32(s1+176);
    a1 = v0 + 0;
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933E1C;
L_08933E1C:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08933E24;
L_08933E24:;
    v0 = 1;
    goto L_08933E28;
L_08933E28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08933E3C:;
    v0 = 0 + 0;
    goto L_08933E28;
L_08933E44:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08933DE0; }
    goto L_08933E50;
L_08933E50:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08933DE4; }
    goto L_08933E5C;
L_08933E5C:;
    goto L_08933DF0;
}

/* 08933E64 */
rv_t func_08933E64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08933E64:;
    return (rv_t){ v0, v1, f0 };
}

/* 08933E6C */
rv_t func_08933E6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08933E6C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08933E74 */
u32 func_08933E74(u32 a0)
{
    u32 v0 = 0;
L_08933E74:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08933E7C */
rv_t func_08933E7C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08933E7C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25A8C - (23180);
    t1 = D_08C25A9C - (23196);
    t2 = D_08C25AAC - (23212);
    a1 = a1 & a0;
    v1 = t0 + 23180;
    a2 = t1 + 23196;
    cnd_ = a1 == 0;
    a3 = t2 + 23212;
    if (cnd_) { goto L_08933F34; }
    goto L_08933EAC;
L_08933EAC:;
    v0 = D_08AED64C - (-10676);
    f4 = BITSF(LD32(v0-10676));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+23180, FBITS(f2));
    ST32(t1+23196, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+23212, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08933F34;
L_08933F34:;
    return (rv_t){ v0, v1, f0 };
}

/* 08933F3C */
rv_t func_08933F3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933F3C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08933E7C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08933F50;
L_08933F50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08933F5C */
rv_t func_08933F5C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933F5C:;
    sp = sp - 16;
    a2 = 1007;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08933F7C;
L_08933F7C:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v0+23196));
    v0 = D_08AF8680 - (-31104);
    v0 = v0 - 31104;
    ST32(s0, v0);
    v0 = 999;
    a0 = s0 + 36;
    ST32(s0+48, s1);
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(s0+36, FBITS(f0));
    ST32(s0+28, v0);
    ST32(s0+32, 0);
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08933FD0 */
rv_t func_08933FD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933FD0:;
    v0 = D_08AF8680 - (-31104);
    v0 = v0 - 31104;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_08933FEC;
L_08933FEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08933FF8 */
rv_t func_08933FF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08933FF8:;
    v0 = D_08AF8680 - (-31104);
    v0 = v0 - 31104;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_08934018;
L_08934018:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08934020;
L_08934020:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934030 */
rv_t func_08934030(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08934030:;
    return (rv_t){ v0, v1, f0 };
}

/* 08934038 */
rv_t func_08934038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08934038:;
    return (rv_t){ v0, v1, f0 };
}

/* 08934040 */
rv_t func_08934040(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08934040:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08934048 */
rv_t func_08934048(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08934048:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0893407C; }
    goto L_08934068;
L_08934068:;
    goto L_0893406C;
L_0893406C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0893407C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    s0 = LD32(v0+12);
    v0 = func_089224D8(a0, a1);
    goto L_0893408C;
L_0893408C:;
    a0 = LD32(s1+48);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089340A0;
L_089340A0:;
    ST32(sp, s0);
    cnd_ = s0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0893407C; }
    goto L_089340AC;
L_089340AC:;
    goto L_0893406C;
}

/* 089340B4 */
rv_t func_089340B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089340B4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089340BC */
rv_t func_089340BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089340BC:;
    sp = sp - 80;
    s0 = a0 + 0;
    { u64 r_ = func_08934240(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089340D8;
L_089340D8:;
    a0 = LD32(s0+48);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089340F4; }
    goto L_089340E4;
L_089340E4:;
    v0 = LD32(a0+48);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08934108; }
    goto L_089340F0;
L_089340F0:;
    goto L_089340F4;
L_089340F4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08934108:;
    s1 = LD32(v0+76);
    s2 = LD32(v0+60);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934114;
L_08934114:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    v0 = 999;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = s0 + 0;
    v1 = s0 + 36;
    ST32(sp, FBITS(f3));
    a2 = 0 + 0;
    ST32(sp+4, FBITS(f4));
    cnd_ = s2 == v0;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_089341D0; }
    goto L_08934148;
L_08934148:;
    v0 = LD32(s0+32);
    goto L_0893414C;
L_0893414C:;
    cnd_ = s1 == v0;
    if (cnd_) { v0 = LD32(s0+28); goto L_089341B8; }
    goto L_08934154;
L_08934154:;
    a2 = LD32(s0+32);
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893415C;
L_0893415C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    ST32(sp+32, v0);
    v0 = func_089224D8(a0, a1);
    goto L_0893416C;
L_0893416C:;
    a0 = LD32(s0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934180;
L_08934180:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934190;
L_08934190:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    v1 = s0 + 36;
    ST32(s0+36, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(v1+8, FBITS(f1));
    ST32(s0+32, s1);
    ST32(s0+28, s2);
    ST32(v1+4, FBITS(f0));
    goto L_089340F0;
L_089341B8:;
    cnd_ = s2 != v0;
    if (cnd_) { goto L_08934154; }
    goto L_089341C0;
L_089341C0:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_089340F4; }
    goto L_089341C8;
L_089341C8:;
    goto L_08934154;
L_089341D0:;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(s0+36));
    f1 = BITSF(LD32(v1+4));
    f2 = f5 - f2;
    f0 = f3 - f0;
    f1 = f4 - f1;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f2));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AED650 - (-10672);
    f0 = BITSF(LD32(v0-10672));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { a2 = 1; goto L_08934148; }
    goto L_08934238;
L_08934238:;
    v0 = LD32(s0+32);
    goto L_0893414C;
}

/* 08934240 */
u64 func_08934240(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934240:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+48);
    a0 = LD32(v0+48);
    { u64 r_ = func_0898D448(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893425C;
L_0893425C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08934274; }
    goto L_08934264;
L_08934264:;
    v0 = LD32(s0+48);
    v1 = 1013;
    a0 = LD32(v0+48);
    ST32(a0+76, v1);
    goto L_08934274;
L_08934274:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08934280 */
rv_t func_08934280(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08934280:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25B3C - (23356);
    t1 = D_08C25B4C - (23372);
    t2 = D_08C25B5C - (23388);
    a1 = a1 & a0;
    v1 = t0 + 23356;
    a2 = t1 + 23372;
    cnd_ = a1 == 0;
    a3 = t2 + 23388;
    if (cnd_) { goto L_08934338; }
    goto L_089342B0;
L_089342B0:;
    v0 = D_08AED654 - (-10668);
    f4 = BITSF(LD32(v0-10668));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+23356, FBITS(f2));
    ST32(t1+23372, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+23388, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08934338;
L_08934338:;
    return (rv_t){ v0, v1, f0 };
}

/* 08934340 */
rv_t func_08934340(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934340:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08934280(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934354;
L_08934354:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934360 */
rv_t func_08934360(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934360:;
    sp = sp - 16;
    a2 = 1008;
    s0 = a0 + 0;
    func_08931D8C(a0, a1, a2);
    goto L_0893437C;
L_0893437C:;
    v0 = D_08AF86B8 - (-31048);
    v0 = v0 - 31048;
    ST32(s0, v0);
    a0 = 24;
    ST32(s0+52, 0);
    ST32(s0+180, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934398;
L_08934398:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = 3;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089343A8;
L_089343A8:;
    ST32(s0+32, s1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089343C0 */
rv_t func_089343C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089343C0:;
    v0 = D_08AF86B8 - (-31048);
    v0 = v0 - 31048;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_089343DC;
L_089343DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089343E8 */
rv_t func_089343E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089343E8:;
    v0 = D_08AF86B8 - (-31048);
    v0 = v0 - 31048;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08934408;
L_08934408:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08934410;
L_08934410:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934420 */
rv_t func_08934420(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934420:;
    sp = sp - 16;
    { rv_t r_ = func_08931FD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934430;
L_08934430:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893443C */
rv_t func_0893443C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893443C:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893444C;
L_0893444C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934458 */
rv_t func_08934458(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934458:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934468;
L_08934468:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934474 */
rv_t func_08934474(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934474:;
    sp = sp - 16;
    { rv_t r_ = func_08931FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934484;
L_08934484:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934490 */
rv_t func_08934490(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08934490:;
    sp = sp - 176;
    a3 = LD32(a0+28);
    cnd_ = a3 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089346BC; }
    goto L_089344B4;
L_089344B4:;
    v0 = LD32(a3+48);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089346C0; }
    goto L_089344C0;
L_089344C0:;
    a1 = LD32(a0+176);
    v0 = 999;
    a0 = D_08C2A08C - (-24436);
    cnd_ = a1 == v0;
    v1 = a0 - 24436;
    if (cnd_) { goto L_089346BC; }
    goto L_089344D4;
L_089344D4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08934518; }
    goto L_089344F8;
L_089344F8:;
    v1 = LD32(a0);
    goto L_089344FC;
L_089344FC:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08934700; }
    goto L_08934508;
L_08934508:;
    a0 = LD32(a0+4);
    goto L_0893450C;
L_0893450C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089344FC; }
    goto L_08934514;
L_08934514:;
    v1 = 0 + 0;
    goto L_08934518;
L_08934518:;
    cnd_ = v1 == 0;
    v0 = 999;
    if (cnd_) { goto L_089346BC; }
    goto L_08934520;
L_08934520:;
    a2 = LD32(v1+28);
    a0 = D_08C2A880 - (-22400);
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_089346BC; }
    goto L_08934530;
L_08934530:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08934580; }
    goto L_08934554;
L_08934554:;
    a0 = LD32(a1);
    goto L_08934558;
L_08934558:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089346E0; }
    goto L_08934570;
L_08934570:;
    a1 = LD32(a1+4);
    goto L_08934574;
L_08934574:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08934558; }
    goto L_0893457C;
L_0893457C:;
    s1 = 0 + 0;
    goto L_08934580;
L_08934580:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089346C0; }
    goto L_08934588;
L_08934588:;
    a0 = LD32(a3+48);
    s0 = sp + 64;
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08934594;
L_08934594:;
    v1 = D_08AED658 - (-10664);
    f20 = BITSF(LD32(v1-10664));
    ST32(sp+16, 0);
    ST32(sp+20, FBITS(f20));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+24, 0);
    f0 = f0 + f20;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089345E0;
L_089345E0:;
    ST32(sp+36, FBITS(f20));
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a1 = sp + 48;
    f4 = BITSF(LD32(v0+4));
    ST32(sp+32, 0);
    a2 = sp + 32;
    f4 = f4 + f20;
    ST32(sp+40, 0);
    a3 = 999;
    t0 = 1;
    f8 = BITSF(LD32(v0));
    f9 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f7 = BITSF(LD32(sp+8));
    f1 = f8 - f5;
    f2 = f4 - f6;
    f3 = f9 - f7;
    a0 = s0 + 0;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+32, FBITS(f1));
    ST32(sp+16, FBITS(f8));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    v0 = D_08AED65C - (-10660);
    f0 = BITSF(LD32(v0-10660));
    ST32(sp+20, FBITS(f4));
    f0 = f0 / f12;
    ST32(sp+24, FBITS(f9));
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f7 = f7 + f3;
    f5 = f5 + f1;
    f6 = f6 + f2;
    ST32(sp+32, FBITS(f1));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f7));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089346A4;
L_089346A4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089346AC;
L_089346AC:;
    v1 = LD32(v0+4);
    v0 = LD32(s2+176);
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_089346D8; }
    goto L_089346BC;
L_089346BC:;
    goto L_089346C0;
L_089346C0:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_089346D8:;
    ST8(s2+184, v0);
    goto L_089346BC;
L_089346E0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08934570; }
    goto L_089346EC;
L_089346EC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08934574; }
    goto L_089346F8;
L_089346F8:;
    goto L_08934580;
L_08934700:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0893450C; }
    goto L_0893470C;
L_0893470C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0893450C; }
    goto L_08934718;
L_08934718:;
    goto L_08934518;
}

/* 08934720 */
rv_t func_08934720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08934720:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    a0 = LD32(a0+32);
    func_0895D9A8(a0, f12);
    goto L_08934740;
L_08934740:;
    v0 = LD32(s0+32);
    a0 = s0 + 0;
    a1 = LD32(v0);
    func_08934780(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08934750;
L_08934750:;
    a0 = s0 + 0;
    func_089347E4(a0);
    goto L_08934758;
L_08934758:;
    a0 = LD32(s0+32);
    { rv_t r_ = func_0895D9D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934760;
L_08934760:;
    a0 = s0 + 0;
    f12 = f20;
    { rv_t r_ = func_08932064(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893476C;
L_0893476C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08934780 */
void func_08934780(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934780:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a1 == v0;
    v1 = (s32)a1 < 2;
    if (cnd_) { goto L_089347D8; }
    goto L_08934794;
L_08934794:;
    cnd_ = v1 != 0;
    v0 = 2;
    if (cnd_) { goto L_089347C4; }
    goto L_0893479C;
L_0893479C:;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(a0); goto L_089347B0; }
    goto L_089347A4;
L_089347A4:;
    goto L_089347A8;
L_089347A8:;
    sp = sp + 16;
    return;
L_089347B0:;
    v1 = LD32(v0+56);
    goto L_089347B4;
L_089347B4:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089347BC;
L_089347BC:;
    goto L_089347A8;
L_089347C4:;
    cnd_ = a1 != 0;
    if (cnd_) {  goto L_089347A8; }
    goto L_089347CC;
L_089347CC:;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    goto L_089347B4;
L_089347D8:;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    goto L_089347B4;
}

/* 089347E4 */
void func_089347E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089347E4:;
    sp = sp - 64;
    s1 = a0 + 0;
    a0 = LD32(a0+28);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0893481C; }
    goto L_0893480C;
L_0893480C:;
    a0 = LD32(a0+48);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08934834; }
    goto L_08934818;
L_08934818:;
    goto L_0893481C;
L_0893481C:;
    sp = sp + 64;
    return;
L_08934834:;
    { rv_t r_ = func_0898D41C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893483C;
L_0893483C:;
    v0 = LD32(s1+28);
    f21 = f0;
    a0 = LD32(v0+48);
    { u64 r_ = func_0898D2C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893484C;
L_0893484C:;
    s0 = v0 + 0;
    v0 = LD32(s1+28);
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D4F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893485C;
L_0893485C:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+32);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+8, FBITS(f2));
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    func_0895DB54(a0);
    goto L_089348C4;
L_089348C4:;
    v1 = LD32(s1+180);
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_08934950; }
    goto L_089348D0;
L_089348D0:;
    v0 = D_08AED660 - (-10656);
    f0 = BITSF(LD32(v0-10656));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089348F8; }
    goto L_089348E8;
L_089348E8:;
    v0 = LD_U8(s1+184);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+36); goto L_08934900; }
    goto L_089348F4;
L_089348F4:;
    v0 = 1;
    goto L_089348F8;
L_089348F8:;
    ST32(s1+180, v0);
    v0 = LD_U8(s1+36);
    goto L_08934900;
L_08934900:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+28); goto L_0893492C; }
    goto L_08934908;
L_08934908:;
    a0 = LD32(s1+32);
    goto L_0893490C;
L_0893490C:;
    v0 = D_08AED664 - (-10652);
    f0 = BITSF(LD32(v0-10652));
    v1 = LD32(a0+12);
    v0 = LD32(v1+4);
    goto L_0893491C;
L_0893491C:;
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    goto L_08934818;
L_0893492C:;
    a0 = LD32(v0+48);
    { rv_t r_ = func_0898D90C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934934;
L_08934934:;
    cnd_ = v0 != 0;
    a0 = LD32(s1+32);
    if (cnd_) { goto L_0893490C; }
    goto L_0893493C;
L_0893493C:;
    v0 = D_08AED664 - (-10652);
    f0 = BITSF(LD32(v0-10652));
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    goto L_0893491C;
L_08934950:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0893481C; }
    goto L_08934958;
L_08934958:;
    v0 = D_08AED668 - (-10648);
    f0 = BITSF(LD32(v0-10648));
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s1+36); goto L_08934900; }
    goto L_08934970;
L_08934970:;
    v0 = D_08AED66C - (-10644);
    f0 = BITSF(LD32(v0-10644));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s1+36); goto L_08934900; }
    goto L_08934988;
L_08934988:;
    a0 = LD32(s1+32);
    v0 = D_08AED664 - (-10652);
    f0 = BITSF(LD32(v0-10652));
    v1 = LD32(a0+12);
    v0 = LD32(v1+8);
    goto L_0893491C;
}

/* 089349A0 */
rv_t func_089349A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089349A0:;
    sp = sp - 16;
    { rv_t r_ = func_089328E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089349B0;
L_089349B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089349BC */
rv_t func_089349BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089349BC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25B6C - (23404);
    t1 = D_08C25B7C - (23420);
    t2 = D_08C25B8C - (23436);
    a1 = a1 & a0;
    v1 = t0 + 23404;
    a2 = t1 + 23420;
    cnd_ = a1 == 0;
    a3 = t2 + 23436;
    if (cnd_) { goto L_08934A74; }
    goto L_089349EC;
L_089349EC:;
    v0 = D_08AED670 - (-10640);
    f4 = BITSF(LD32(v0-10640));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+23404, FBITS(f2));
    ST32(t1+23420, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+23436, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08934A74;
L_08934A74:;
    return (rv_t){ v0, v1, f0 };
}

/* 08934A7C */
rv_t func_08934A7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934A7C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089349BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934A90;
L_08934A90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934A9C */
rv_t func_08934A9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934A9C:;
    sp = sp - 16;
    a2 = 1016;
    s1 = a0 + 0;
    s0 = a1 + 0;
    func_08931D8C(a0, a1, a2);
    goto L_08934ABC;
L_08934ABC:;
    v0 = D_08AF8700 - (-30976);
    v0 = v0 - 30976;
    ST32(s1+28, s0);
    a0 = 24;
    ST32(s1, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934AD4;
L_08934AD4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 2;
    { rv_t r_ = func_0895D7E8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934AE4;
L_08934AE4:;
    ST32(s1+176, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934AFC */
rv_t func_08934AFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934AFC:;
    sp = sp - 16;
    v0 = D_08AF8700 - (-30976);
    s1 = a0 + 0;
    v0 = v0 - 30976;
    s0 = LD32(a0+176);
    ST32(s1, v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08934B44; }
    goto L_08934B28;
L_08934B28:;
    a0 = s1 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08934B30;
L_08934B30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08934B44:;
    func_0895D93C(a0, t1, t2, t3);
    goto L_08934B4C;
L_08934B4C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08934B54;
L_08934B54:;
    goto L_08934B28;
}

/* 08934B5C */
rv_t func_08934B5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934B5C:;
    sp = sp - 16;
    v0 = D_08AF8700 - (-30976);
    s0 = a0 + 0;
    v0 = v0 - 30976;
    s1 = LD32(a0+176);
    ST32(s0, v0);
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08934BAC; }
    goto L_08934B88;
L_08934B88:;
    a0 = s0 + 0;
    v0 = func_08931E2C(a0, t1, t2, t3);
    goto L_08934B90;
L_08934B90:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08934B98;
L_08934B98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08934BAC:;
    func_0895D93C(a0, t1, t2, t3);
    goto L_08934BB4;
L_08934BB4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08934BBC;
L_08934BBC:;
    goto L_08934B88;
}

/* 08934BC4 */
rv_t func_08934BC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934BC4:;
    sp = sp - 16;
    { rv_t r_ = func_08931FD8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934BD4;
L_08934BD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934BE0 */
rv_t func_08934BE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934BE0:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934BF0;
L_08934BF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934BFC */
rv_t func_08934BFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934BFC:;
    sp = sp - 16;
    { rv_t r_ = func_08931FE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934C0C;
L_08934C0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934C18 */
rv_t func_08934C18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934C18:;
    sp = sp - 16;
    { rv_t r_ = func_08931FF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934C28;
L_08934C28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934C34 */
rv_t func_08934C34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08934C34:;
    return (rv_t){ v0, v1, f0 };
}

/* 08934C3C */
rv_t func_08934C3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08934C3C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08934C44 */
rv_t func_08934C44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08934C44:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25C1C - (23580);
    t1 = D_08C25C2C - (23596);
    t2 = D_08C25C3C - (23612);
    a1 = a1 & a0;
    v1 = t0 + 23580;
    a2 = t1 + 23596;
    cnd_ = a1 == 0;
    a3 = t2 + 23612;
    if (cnd_) { goto L_08934CFC; }
    goto L_08934C74;
L_08934C74:;
    v0 = D_08AED67C - (-10628);
    f4 = BITSF(LD32(v0-10628));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+23580, FBITS(f2));
    ST32(t1+23596, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+23612, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08934CFC;
L_08934CFC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08934D04 */
rv_t func_08934D04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934D04:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08934C44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08934D18;
L_08934D18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08934D24 */
void func_08934D24(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08934D24:;
    v1 = D_08AED684 - (-10620);
    f0 = BITSF(LD32(v1-10620));
    v0 = 999;
    ST32(a0, v0);
    ST32(a0+4, FBITS(f0));
    ST8(a0+8, 0);
    return;
}

/* 08934D40 */
rv_t func_08934D40(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08934D40:;
    sp = sp - 16;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08934DD8; }
    goto L_08934D58;
L_08934D58:;
    f4 = BITSF(LD32(a0+4));
    f0 = BITSF(0);
    a2 = D_08B25AC0 - (23232);
    fcc = FCMP(f0, f4, 14);
    cnd_ = !fcc;
    a3 = a2 + 23232;
    if (cnd_) { goto L_08934DE8; }
    goto L_08934D74;
L_08934D74:;
    v1 = LD32(a2+23232);
    a1 = LD32(a3+4);
    v0 = D_08AED688 - (-10616);
    a0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + a0;
    v1 = v1 + a1;
    f3 = BITSF(LD32(v0-10616));
    v0 = v1 >> 1;
    f1 = BITSF(v0);
    v0 = D_08AED68C - (-10612);
    f2 = BITSF(LD32(v0-10612));
    f0 = (float)(s32)FBITS(f1);
    v0 = D_08AED690 - (-10608);
    f1 = BITSF(LD32(v0-10608));
    f2 = f2 - f3;
    a1 = a1 + v1;
    f0 = f0 * f1;
    ST32(a3+4, a1);
    f0 = f0 * f2;
    ST32(a2+23232, v1);
    f0 = f0 + f3;
    f0 = f12 * f0;
    f0 = f4 - f0;
    goto L_08934DD4;
L_08934DD4:;
    ST32(s0+4, FBITS(f0));
    goto L_08934DD8;
L_08934DD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08934DE8:;
    ST8(a0+8, 0);
    v0 = func_08979DF4();
    goto L_08934DF0;
L_08934DF0:;
    v1 = 2;
    cnd_ = v0 == v1;
    v0 = D_08AED698 - (-10600);
    if (cnd_) { goto L_08934E2C; }
    goto L_08934DFC;
L_08934DFC:;
    v1 = LD32(s0+20);
    v1 = LD32(v1+204);
    cnd_ = v1 == 0;
    f0 = BITSF(LD32(v0-10600));
    if (cnd_) { goto L_08934E24; }
    goto L_08934E0C;
L_08934E0C:;
    v0 = LD_U8(v1);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v0+32)); goto L_08934E24; }
    goto L_08934E24;
L_08934E24:;
    f0 = f0 + f0;
    goto L_08934DD4;
L_08934E2C:;
    v0 = D_08AED694 - (-10604);
    f0 = BITSF(LD32(v0-10604));
    goto L_08934DD4;
}

/* 08934E38 */
rv_t func_08934E38(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08934E38:;
    sp = sp - 192;
    a3 = D_08C2A880 - (-22400);
    v0 = 999;
    v1 = 0 + 0;
    s1 = a0 + 0;
    a0 = a3 - 22400;
    f20 = f12;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08934ECC; }
    goto L_08934E7C;
L_08934E7C:;
    v0 = LD32(a0+4);
    v1 = LD32(a3-22400);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a3 = LD32(v0);
    cnd_ = a3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08934ECC; }
    goto L_08934EA0;
L_08934EA0:;
    a0 = LD32(a3);
    goto L_08934EA4;
L_08934EA4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08935618; }
    goto L_08934EBC;
L_08934EBC:;
    a3 = LD32(a3+4);
    goto L_08934EC0;
L_08934EC0:;
    cnd_ = a3 != 0;
    if (cnd_) { a0 = LD32(a3); goto L_08934EA4; }
    goto L_08934EC8;
L_08934EC8:;
    v1 = 0 + 0;
    goto L_08934ECC;
L_08934ECC:;
    a3 = D_08C2B4CC - (-19252);
    goto L_08934ED0;
L_08934ED0:;
    v0 = 999;
    ST32(s1+20, v1);
    a0 = a3 - 19252;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08934F34; }
    goto L_08934EE4;
L_08934EE4:;
    v0 = LD32(a0+4);
    v1 = LD32(a3-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a3 = LD32(v0);
    cnd_ = a3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08934F34; }
    goto L_08934F08;
L_08934F08:;
    a0 = LD32(a3);
    goto L_08934F0C;
L_08934F0C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089355F8; }
    goto L_08934F24;
L_08934F24:;
    a3 = LD32(a3+4);
    goto L_08934F28;
L_08934F28:;
    cnd_ = a3 != 0;
    if (cnd_) { a0 = LD32(a3); goto L_08934F0C; }
    goto L_08934F30;
L_08934F30:;
    v1 = 0 + 0;
    goto L_08934F34;
L_08934F34:;
    a0 = D_08C2A6C8 - (-22840);
    goto L_08934F38;
L_08934F38:;
    v0 = 999;
    ST32(s1+24, v1);
    s2 = 0 + 0;
    cnd_ = a1 == v0;
    v1 = a0 - 22840;
    if (cnd_) { goto L_08934F9C; }
    goto L_08934F4C;
L_08934F4C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    if (cnd_) { a1 = LD32(s1+20); goto L_08934FA0; }
    goto L_08934F70;
L_08934F70:;
    a0 = LD32(a2);
    goto L_08934F74;
L_08934F74:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089355D8; }
    goto L_08934F8C;
L_08934F8C:;
    a2 = LD32(a2+4);
    goto L_08934F90;
L_08934F90:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08934F74; }
    goto L_08934F98;
L_08934F98:;
    s2 = 0 + 0;
    goto L_08934F9C;
L_08934F9C:;
    a1 = LD32(s1+20);
    goto L_08934FA0;
L_08934FA0:;
    v1 = 0 < s2;
    v0 = 0 < a1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08935580; }
    goto L_08934FB4;
L_08934FB4:;
    a2 = LD32(s1+24);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08935580; }
    goto L_08934FC0;
L_08934FC0:;
    v1 = LD32(a2);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    a3 = a2 + v0;
    f1 = BITSF(LD32(a3+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08935580; }
    goto L_08934FE4;
L_08934FE4:;
    v0 = LD_U8(a2+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08935580; }
    goto L_08934FF0;
L_08934FF0:;
    v0 = LD_U8(a2+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08935580; }
    goto L_08934FFC;
L_08934FFC:;
    v0 = LD32(v1-16);
    a0 = LD32(s1);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 == v1;
    if (cnd_) { v1 = LD32(s2+236); goto L_089350DC; }
    goto L_08935014;
L_08935014:;
    v1 = LD32(a3);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = a3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935024;
L_08935024:;
    a0 = LD32(s1+20);
    s0 = v0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935048;
L_08935048:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f3;
    f1 = f1 - f0;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f4));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AED69C - (-10596);
    f0 = BITSF(LD32(v0-10596));
    ST32(sp, FBITS(f2));
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_089350D8; }
    goto L_089350B4;
L_089350B4:;
    a2 = LD32(s1+24);
    s3 = LD32(a2+156);
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(s1+20); goto L_08935528; }
    goto L_089350C4;
L_089350C4:;
    v0 = LD32(a2);
    v1 = LD32(v0-16);
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    ST32(s1, v0);
    goto L_089350D8;
L_089350D8:;
    v1 = LD32(s2+236);
    goto L_089350DC;
L_089350DC:;
    v0 = LD_U8(v1+120);
    a0 = 0 < v1;
    v0 = v0 << 2;
    v0 = v0 + v1;
    s2 = LD32(v0);
    v1 = 0 < s2;
    a0 = a0 & v1;
    cnd_ = a0 != 0;
    if (cnd_) { a2 = LD32(s1+20); goto L_0893512C; }
    goto L_08935100;
L_08935100:;
    goto L_08935104;
L_08935104:;
    goto L_08935108;
L_08935108:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_0893512C:;
    f21 = BITSF(0);
    a1 = sp + 0;
    ST32(sp, FBITS(f21));
    ST32(sp+4, FBITS(f21));
    ST32(sp+8, FBITS(f21));
    v0 = LD32(a2);
    v1 = LD32(v0+148);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935150;
L_08935150:;
    a0 = LD32(s1+24);
    ST32(sp+16, FBITS(f21));
    ST32(sp+20, FBITS(f21));
    ST32(sp+24, FBITS(f21));
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935170;
L_08935170:;
    a0 = LD32(s1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935184;
L_08935184:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = f2 * f20;
    f0 = f0 * f20;
    f1 = f1 * f20;
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    f3 = f3 + f0;
    f4 = f4 + f1;
    f5 = f5 + f2;
    f6 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f6 = f3 - f6;
    f1 = f4 - f1;
    f2 = f5 - f2;
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f6);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f22 = BITSF(v0);
    v0 = D_08AED6A0 - (-10592);
    f0 = BITSF(LD32(v0-10592));
    ST32(sp+24, FBITS(f5));
    fcc = FCMP(f22, f0, 12);
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f1));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_08935490; }
    goto L_08935220;
L_08935220:;
    a0 = LD32(s1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    s3 = sp + 48;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935234;
L_08935234:;
    t0 = LD32(s2+188);
    f12 = BITSF(LD32(s2+60));
    a2 = v0 + 0;
    a1 = sp + 32;
    a0 = s1 + 0;
    a3 = s3 + 0;
    func_08935A48(a1, a2, a3, t0, f12);
    goto L_08935250;
L_08935250:;
    f12 = BITSF(LD32(s1+12));
    a0 = sp + 64;
    a1 = s3 + 0;
    f13 = f21;
    func_088F79C0(a0, a1, f12, f13);
    goto L_08935264;
L_08935264:;
    v0 = LD32(sp+48);
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+52);
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    s0 = s1 + 28;
    if (cnd_) { goto L_089352DC; }
    goto L_0893529C;
L_0893529C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+88, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    s0 = s1 + 28;
    goto L_089352DC;
L_089352DC:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089352E8;
L_089352E8:;
    a0 = LD32(s1+20);
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089352FC;
L_089352FC:;
    v1 = LD32(s1+20);
    a0 = s1 + 0;
    a2 = s2 + 0;
    v0 = LD32(v1+172);
    v0 = v0 | 0x2;
    ST32(v1+172, v0);
    a1 = LD32(s2+188);
    { rv_t r_ = func_08935D94(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893531C;
L_0893531C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08935104; }
    goto L_08935324;
L_08935324:;
    f12 = BITSF(LD32(s1+12));
    s4 = sp + 80;
    a1 = s3 + 0;
    a0 = s4 + 0;
    f13 = f21;
    func_088F79C0(a0, a1, f12, f13);
    goto L_0893533C;
L_0893533C:;
    f3 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+52));
    f2 = f3 - f0;
    fcc = FCMP(f21, f2, 12);
    cnd_ = !fcc;
    a1 = s4 + 0;
    if (cnd_) { goto L_089353C0; }
    goto L_08935358;
L_08935358:;
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
    v0 = D_08AED6A4 - (-10588);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-10588));
    v0 = D_08AED6A8 - (-10584);
    ST32(a2+4, a0);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-10584));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_089353BC; }
    goto L_089353B0;
L_089353B0:;
    f0 = f2 + f2;
    f0 = f3 - f0;
    ST32(sp+84, FBITS(f0));
    goto L_089353BC;
L_089353BC:;
    a1 = s4 + 0;
    goto L_089353C0;
L_089353C0:;
    a0 = s0 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089353C8;
L_089353C8:;
    a0 = LD32(s1+20);
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089353DC;
L_089353DC:;
    v1 = LD32(s2+188);
    v1 = v1 - 110;
    v0 = v1 < 0x11u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08935104; }
    goto L_089353F0;
L_089353F0:;
    v0 = v1 << 2;
    v1 = D_08AD9C90 - (-25456);
    v1 = v1 - 25456;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08935100u: goto L_08935100; case 0x0893540Cu: goto L_0893540C; case 0x0893541Cu: goto L_0893541C; case 0x0893542Cu: goto L_0893542C; case 0x0893543Cu: goto L_0893543C; case 0x0893544Cu: goto L_0893544C; case 0x0893545Cu: goto L_0893545C; case 0x0893546Cu: goto L_0893546C; case 0x08935480u: goto L_08935480; default: rs_break(0, 0x08935404); }
L_0893540C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08935638(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935414;
L_08935414:;
    goto L_08935104;
L_0893541C:;
    a0 = s1 + 0;
    { rv_t r_ = func_089358B4(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935424;
L_08935424:;
    goto L_08935104;
L_0893542C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08935918(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935434;
L_08935434:;
    goto L_08935104;
L_0893543C:;
    a0 = s1 + 0;
    { rv_t r_ = func_089357A0(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935444;
L_08935444:;
    goto L_08935104;
L_0893544C:;
    a0 = s1 + 0;
    { rv_t r_ = func_089359E4(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935454;
L_08935454:;
    goto L_08935104;
L_0893545C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08935738(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935464;
L_08935464:;
    goto L_08935104;
L_0893546C:;
    a0 = s1 + 0;
    f12 = f22;
    { rv_t r_ = func_08935804(a0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935478;
L_08935478:;
    goto L_08935104;
L_08935480:;
    a0 = s1 + 0;
    { rv_t r_ = func_08935980(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935488;
L_08935488:;
    goto L_08935104;
L_08935490:;
    a0 = LD32(s1+20);
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089354A4;
L_089354A4:;
    a0 = LD32(s1+20);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089354B8;
L_089354B8:;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f4 = f4 * f20;
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = BITSF(LD32(sp));
    f5 = BITSF(LD32(sp+4));
    f6 = BITSF(LD32(sp+8));
    f2 = f2 + f0;
    f5 = f5 + f1;
    f6 = f6 + f4;
    f3 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    f3 = f3 - f2;
    f1 = f1 - f5;
    f0 = f0 - f6;
    ST32(sp, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f6));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    goto L_08935220;
L_08935528:;
    a1 = 1;
    a0 = LD32(v0+12);
    { u64 r_ = func_08A270E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08935534;
L_08935534:;
    s0 = v0 + 0;
    v0 = LD32(s1+24);
    a1 = 1;
    a0 = LD32(v0+12);
    { u64 r_ = func_08A270E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08935548;
L_08935548:;
    cnd_ = s0 == v0;
    if (cnd_) { v1 = LD32(s1+24); goto L_08935558; }
    goto L_08935550;
L_08935550:;
    a2 = LD32(s1+24);
    goto L_089350C4;
L_08935558:;
    a0 = LD32(s1+20);
    a1 = s3 + 0;
    a2 = LD32(v1);
    a3 = 0 + 0;
    v0 = LD32(a2-16);
    v1 = v1 + v0;
    a2 = LD32(v1+4);
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935578;
L_08935578:;
    a2 = LD32(s1+24);
    goto L_089350C4;
L_08935580:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08935104; }
    goto L_08935588;
L_08935588:;
    v0 = LD32(a1+172);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(a1+172, v0);
    a1 = LD32(s1+20);
    v1 = LD32(a1+204);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08935108; }
    goto L_089355A4;
L_089355A4:;
    v0 = LD_U8(v1);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08935108; }
    goto L_089355BC;
L_089355BC:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    a1 = LD32(v1+4);
    { rv_t r_ = func_08A243D0(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089355D0;
L_089355D0:;
    goto L_08935104;
L_089355D8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08934F90; }
    goto L_089355E4;
L_089355E4:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08934F8C; }
    goto L_089355F0;
L_089355F0:;
    a1 = LD32(s1+20);
    goto L_08934FA0;
L_089355F8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(a3+4); goto L_08934F28; }
    goto L_08935604;
L_08935604:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08934F24; }
    goto L_08935610;
L_08935610:;
    a0 = D_08C2A6C8 - (-22840);
    goto L_08934F38;
L_08935618:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(a3+4); goto L_08934EC0; }
    goto L_08935624;
L_08935624:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08934EBC; }
    goto L_08935630;
L_08935630:;
    a3 = D_08C2B4CC - (-19252);
    goto L_08934ED0;
}

/* 08935638 */
rv_t func_08935638(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08935638:;
    sp = sp - 16;
    v0 = LD32(a0+20);
    v1 = LD32(v0+204);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0893571C; }
    goto L_08935658;
L_08935658:;
    v0 = LD_U8(v1);
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    s1 = 1;
    if (cnd_) { goto L_0893571C; }
    goto L_08935678;
L_08935678:;
    v0 = LD32(a1+23232);
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    v1 = D_08AED6AC - (-10580);
    a0 = a0 + v0;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-10580));
    v1 = D_08AED6B0 - (-10576);
    ST32(a2+4, a0);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v1-10576));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v0);
    if (cnd_) { goto L_089356CC; }
    goto L_089356C8;
L_089356C8:;
    s1 = 0 + 0;
    goto L_089356CC;
L_089356CC:;
    v0 = func_08979DF4();
    goto L_089356D4;
L_089356D4:;
    a0 = D_08AD9CE4 - (-25372);
    a0 = a0 - 25372;
    v1 = D_08AD9CE0 - (-25376);
    a2 = s1 + a0;
    v1 = v1 - 25376;
    a0 = 2;
    cnd_ = v0 == a0;
    a1 = s1 + v1;
    if (cnd_) { goto L_08935730; }
    goto L_089356F4;
L_089356F4:;
    a1 = LD_U8(a1);
    goto L_089356F8;
L_089356F8:;
    a3 = LD32(s0+20);
    a0 = 0 + 0;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    a2 = LD32(a3+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935714;
L_08935714:;
    v0 = 1;
    ST8(s0+8, v0);
    goto L_0893571C;
L_0893571C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08935730:;
    a1 = LD_U8(a2);
    goto L_089356F8;
}

/* 08935738 */
rv_t func_08935738(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08935738:;
    sp = sp - 16;
    a2 = LD32(a0+20);
    v1 = LD32(a2+204);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08935790; }
    goto L_08935754;
L_08935754:;
    v0 = LD_U8(v1);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08935790; }
    goto L_0893576C;
L_0893576C:;
    a1 = LD32(a2);
    v1 = D_08AED6B4 - (-10572);
    f12 = BITSF(LD32(v1-10572));
    v0 = LD32(a1-16);
    v0 = a2 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A24358(a0, a1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935788;
L_08935788:;
    v0 = 1;
    ST8(s0+8, v0);
    goto L_08935790;
L_08935790:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089357A0 */
rv_t func_089357A0(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089357A0:;
    sp = sp - 16;
    a2 = LD32(a0+20);
    v1 = LD32(a2+204);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089357F4; }
    goto L_089357BC;
L_089357BC:;
    v0 = LD_U8(v1);
    a0 = 0 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_089357F4; }
    goto L_089357D8;
L_089357D8:;
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089357EC;
L_089357EC:;
    v0 = 1;
    ST8(s0+8, v0);
    goto L_089357F4;
L_089357F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08935804 */
rv_t func_08935804(u32 a0, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08935804:;
    sp = sp - 16;
    a1 = LD32(a0+20);
    v1 = LD32(a1+204);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089358A4; }
    goto L_08935820;
L_08935820:;
    v0 = LD_U8(v1);
    f2 = BITSF(0);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089358A4; }
    goto L_0893583C;
L_0893583C:;
    v1 = D_08AED6B8 - (-10568);
    f0 = BITSF(LD32(v1-10568));
    v0 = D_08AED6C0 - (-10560);
    f12 = f12 - f0;
    fcc = FCMP(f2, f12, 14);
    cnd_ = fcc;
    f1 = BITSF(LD32(v0-10560));
    if (cnd_) { goto L_08935860; }
    goto L_0893585C;
L_0893585C:;
    f12 = f2;
    goto L_08935860;
L_08935860:;
    v0 = D_08AED6BC - (-10564);
    f0 = BITSF(LD32(v0-10564));
    f0 = f12 * f0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0893587C; }
    goto L_0893587C;
L_0893587C:;
    v1 = LD32(a1);
    v0 = D_08AED6C4 - (-10556);
    f12 = BITSF(LD32(v0-10556));
    v0 = LD32(v1-16);
    f12 = f0 * f12;
    v0 = a1 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A24358(a0, a1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893589C;
L_0893589C:;
    v0 = 1;
    ST8(s0+8, v0);
    goto L_089358A4;
L_089358A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089358B4 */
rv_t func_089358B4(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089358B4:;
    sp = sp - 16;
    a2 = LD32(a0+20);
    v1 = LD32(a2+204);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08935908; }
    goto L_089358D0;
L_089358D0:;
    v0 = LD_U8(v1);
    a0 = 0 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08935908; }
    goto L_089358EC;
L_089358EC:;
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935900;
L_08935900:;
    v0 = 1;
    ST8(s0+8, v0);
    goto L_08935908;
L_08935908:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08935918 */
rv_t func_08935918(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08935918:;
    sp = sp - 16;
    a2 = LD32(a0+20);
    v1 = LD32(a2+204);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08935970; }
    goto L_08935934;
L_08935934:;
    v0 = LD_U8(v1);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08935970; }
    goto L_0893594C;
L_0893594C:;
    a1 = LD32(a2);
    v1 = D_08AED6C8 - (-10552);
    f12 = BITSF(LD32(v1-10552));
    v0 = LD32(a1-16);
    v0 = a2 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A24358(a0, a1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935968;
L_08935968:;
    v0 = 1;
    ST8(s0+8, v0);
    goto L_08935970;
L_08935970:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08935980 */
rv_t func_08935980(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08935980:;
    sp = sp - 16;
    a2 = LD32(a0+20);
    v1 = LD32(a2+204);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089359D4; }
    goto L_0893599C;
L_0893599C:;
    v0 = LD_U8(v1);
    a0 = 0 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_089359D4; }
    goto L_089359B8;
L_089359B8:;
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089359CC;
L_089359CC:;
    v0 = 1;
    ST8(s0+8, v0);
    goto L_089359D4;
L_089359D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089359E4 */
rv_t func_089359E4(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089359E4:;
    sp = sp - 16;
    a2 = LD32(a0+20);
    v1 = LD32(a2+204);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08935A38; }
    goto L_08935A00;
L_08935A00:;
    v0 = LD_U8(v1);
    a0 = 0 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08935A38; }
    goto L_08935A1C;
L_08935A1C:;
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935A30;
L_08935A30:;
    v0 = 1;
    ST8(s0+8, v0);
    goto L_08935A38;
L_08935A38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08935A48 */
void func_08935A48(u32 a1, u32 a2, u32 a3, u32 t0, float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08935A48:;
    v0 = 116;
    sp = sp - 64;
    t2 = a1 + 0;
    t1 = a2 + 0;
    cnd_ = t0 == v0;
    t3 = a3 + 0;
    if (cnd_) { goto L_08935D88; }
    goto L_08935A60;
L_08935A60:;
    a1 = LD32(t1);
    goto L_08935A64;
L_08935A64:;
    a2 = LD32(t1+4);
    a3 = LD32(t1+8);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[4]=BITSF(a1);}
    {v[5]=BITSF(a2);}
    {v[6]=BITSF(a3);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    f1 = BITSF(LD32(t2));
    f2 = BITSF(LD32(t2+4));
    f3 = BITSF(LD32(t2+8));
    v0 = D_08AED6CC - (-10548);
    v1 = FBITS(f1);
    f5 = BITSF(LD32(v0-10548));
    a0 = FBITS(f3);
    v0 = FBITS(f2);
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {v[0]=BITSF(v1);}
    {t0=FBITS(v[4]);}
    {v[1]=BITSF(v0);}
    f0 = BITSF(t0);
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    fcc = FCMP(f5, f0, 12);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f4 = BITSF(t0);
    {v[4]=BITSF(v1);}
    {v[8]=BITSF(a1);}
    {v[5]=BITSF(v0);}
    ST32(t3, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v[6]=BITSF(a0);}
    {v0=FBITS(v[0]);}
    {v[9]=BITSF(a2);}
    ST32(t3+4, FBITS(f2));
    {v[10]=BITSF(a3);}
    f1 = BITSF(v0);
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    ST32(t3+8, FBITS(f3));
    {t0=FBITS(v[4]);}
    f6 = BITSF(t0);
    cnd_ = !fcc;
    if (cnd_) { goto L_08935D80; }
    goto L_08935B10;
L_08935B10:;
    fcc = FCMP(f5, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08935D80; }
    goto L_08935B20;
L_08935B20:;
    fcc = FCMP(f5, f12, 12);
    cnd_ = !fcc;
    f0 = f1 * f4;
    if (cnd_) { goto L_08935D80; }
    goto L_08935B30;
L_08935B30:;
    f3 = f4 / f12;
    v0 = D_08AED6D0 - (-10544);
    f2 = BITSF(LD32(v0-10544));
    {v[24]=1.57079632679f;}
    f0 = f6 / f0;
    v0 = FBITS(f0);
    {v[12]=BITSF(v0);}
    {float s0=v[12];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[24];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    {v[0]=0.63661977236f;}
    {v[16]=BITSF(v0);}
    {float s0=v[16];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {t0=FBITS(v[0]);}
    f0 = BITSF(t0);
    f3 = f3 * f0;
    fcc = FCMP(f3, f2, 14);
    cnd_ = !fcc;
    v0 = D_08AED6D4 - (-10540);
    if (cnd_) { goto L_08935D80; }
    goto L_08935B8C;
L_08935B8C:;
    f0 = BITSF(LD32(v0-10540));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08935D80; }
    goto L_08935BA0;
L_08935BA0:;
    v1 = LD32(t2+4);
    v0 = FBITS(f3);
    a0 = LD32(t1+8);
    {v[20]=BITSF(v0);}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(t2);
    {float s0=v[20];float d0=(s0<-1?-1:(s0>1?1:s0));v[12]=d0;}
    {v[4]=BITSF(v0);}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v0 = LD32(t2+8);
    {v[5]=BITSF(v1);}
    v1 = LD32(t1);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(t1+4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(a0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[8]);}
    {t0=FBITS(v[10]);}
    f1 = BITSF(v0);
    f5 = BITSF(t0);
    f4 = BITSF(v0);
    {v0=FBITS(v[9]);}
    f0 = BITSF(v0);
    t0 = FBITS(f1);
    f3 = BITSF(v0);
    {float s0=v[12];float d0=asinf(s0)*0.63661977236f;v[12]=d0;}
    v0 = FBITS(f5);
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    f1 = BITSF(0);
    {v[16]=BITSF(t0);}
    t0 = FBITS(f0);
    {v[17]=BITSF(t0);}
    {v[18]=BITSF(v0);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[16];float t1=v[17];float t2=v[18];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {t0=FBITS(v[0]);}
    f0 = BITSF(t0);
    {float s0=v[12];float t0=v[24];float d0=s0*t0;v[12]=d0;}
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    {v0=FBITS(v[12]);}
    ST32(sp+20, FBITS(f3));
    f6 = BITSF(v0);
    ST32(sp+24, FBITS(f5));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_08935C9C; }
    goto L_08935C64;
L_08935C64:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {t0=FBITS(v[2]);}
    f3 = BITSF(t0);
    {v0=FBITS(v[0]);}
    {t0=FBITS(v[1]);}
    ST32(sp+16, v0);
    ST32(sp+20, t0);
    ST32(sp+24, FBITS(f3));
    ST32(sp, v0);
    ST32(sp+4, t0);
    ST32(sp+8, FBITS(f3));
    goto L_08935C9C;
L_08935C9C:;
    {v[4]=0.31830988618f;}
    v0 = FBITS(f6);
    {v[28]=BITSF(v0);}
    {float s0=v[28];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v1);}
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[8]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    v1 = LD32(sp+8);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {float s0=v[8];float d0=s0;v[3]=d0;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    {t0=FBITS(v[3]);}
    f4 = BITSF(t0);
    ST32(sp+32, FBITS(f3));
    {t0=FBITS(v[1]);}
    {v0=FBITS(v[2]);}
    ST32(sp+36, t0);
    ST32(sp+40, v0);
    ST32(sp+44, FBITS(f4));
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+40);
    v1 = LD32(sp+44);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    {v[112]=BITSF(LD32(sp+(32)));}
    {v[113]=BITSF(LD32(sp+(36)));}
    {v[114]=BITSF(LD32(sp+(40)));}
    {v[115]=BITSF(LD32(sp+(44)));}
    {v[116]=BITSF(LD32(t2+(0)));}
    {v[117]=BITSF(LD32(t2+(4)));}
    {v[118]=BITSF(LD32(t2+(8)));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[115];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[103];v[100]=s0*t0;v[101]=s1*t0;v[102]=s2*t0;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[100]=d0;v[101]=d1;v[102]=d2;}
    {float s0=v[115];float t0=v[115];float d0=s0*t0;v[104]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[112];float t1=v[113];float t2=v[114];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[105]=sum;}
    {float s0=v[104];float t0=v[105];float d0=s0-t0;v[107]=d0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float t0=v[107];v[104]=s0*t0;v[105]=s1*t0;v[106]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[100];float t1=v[101];float t2=v[102];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float t0=v[104];float t1=v[105];float t2=v[106];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {ST32(t3+(0),FBITS(v[120]));}
    {ST32(t3+(4),FBITS(v[121]));}
    {ST32(t3+(8),FBITS(v[122]));}
    goto L_08935D80;
L_08935D80:;
    sp = sp + 64;
    return;
L_08935D88:;
    f12 = BITSF(0);
    a1 = LD32(t1);
    goto L_08935A64;
}

/* 08935D94 */
rv_t func_08935D94(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[432] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 432);
L_08935D94:;
    sp = sp - 432;
    v1 = 0 + 0;
    s5 = 1;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08935F40; }
    goto L_08935DDC;
L_08935DDC:;
    a3 = LD32(a0+20);
    f1 = BITSF(0);
    v0 = LD32(a3);
    v1 = LD32(v0-12);
    v1 = a3 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08935F40; }
    goto L_08935E04;
L_08935E04:;
    v0 = LD32(a0+24);
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08935F40; }
    goto L_08935E28;
L_08935E28:;
    v1 = a1 ^ 0x74;
    v0 = a1 ^ 0x7a;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = D_08C2A880 - (-22400); goto L_08935F80; }
    goto L_08935E44;
L_08935E44:;
    cnd_ = a2 == 0;
    a1 = D_08AED6D8 - (-10536);
    if (cnd_) { goto L_08935F7C; }
    goto L_08935E4C;
L_08935E4C:;
    f3 = BITSF(LD32(a2+120));
    f0 = BITSF(LD32(a1-10536));
    a0 = D_08AED6DC - (-10532);
    f0 = f3 * f0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(a0-10532));
    if (cnd_) { goto L_08935E80; }
    goto L_08935E6C;
L_08935E6C:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f1 = f2;
    if (cnd_) { goto L_08935E80; }
    goto L_08935E7C;
L_08935E7C:;
    f1 = f0;
    goto L_08935E80;
L_08935E80:;
    v0 = D_08AED6E0 - (-10528);
    f0 = BITSF(LD32(v0-10528));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08935EBC; }
    goto L_08935E98;
L_08935E98:;
    v0 = LD32(a2+296);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08935EBC; }
    goto L_08935EA4;
L_08935EA4:;
    f1 = BITSF(LD32(a2+300));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08935F40; }
    goto L_08935EBC;
L_08935EBC:;
    cnd_ = a2 == 0;
    f0 = BITSF(LD32(a1-10536));
    if (cnd_) { goto L_08935F7C; }
    goto L_08935EC4;
L_08935EC4:;
    f1 = BITSF(LD32(a0-10532));
    a1 = sp + 196;
    f0 = f3 * f0;
    a0 = sp + 192;
    a2 = sp + 200;
    ST32(sp+200, FBITS(f1));
    ST32(sp+192, FBITS(f0));
    ST32(sp+196, 0);
    f0 = func_0893668C(a0, a1, a2);
    goto L_08935EE8;
L_08935EE8:;
    v0 = D_08AED6E4 - (-10524);
    f1 = BITSF(LD32(v0-10524));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = LD32(s1+20); goto L_08935F7C; }
    goto L_08935F00;
L_08935F00:;
    a1 = LD32(s1+20);
    v1 = LD32(a1+204);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08935F40; }
    goto L_08935F10;
L_08935F10:;
    v0 = LD_U8(v1);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08935F3C; }
    goto L_08935F28;
L_08935F28:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    a1 = LD32(v1+4);
    { rv_t r_ = func_08A243D0(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08935F3C;
L_08935F3C:;
    v1 = 0 + 0;
    goto L_08935F40;
L_08935F40:;
    v0 = v1 + 0;
    sp = sp + 432;
    return (rv_t){ v0, v1, f0 };
L_08935F7C:;
    a2 = D_08C2A880 - (-22400);
    goto L_08935F80;
L_08935F80:;
    v0 = a2 - 22400;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08935FF4; }
    goto L_08935FA8;
L_08935FA8:;
    a2 = LD32(a2-22400);
    t0 = a1 + 0;
    goto L_08935FB0;
L_08935FB0:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08935FE4; }
    goto L_08935FC8;
L_08935FC8:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08935FF4; }
    goto L_08935FD8;
L_08935FD8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08935FC8; }
    goto L_08935FE4;
L_08935FE4:;
    v0 = a1 + 1;
    v1 = v0 < t0;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08935FB0; }
    goto L_08935FF4;
L_08935FF4:;
    f20 = BITSF(0);
    s2 = sp + 16;
    a0 = a3 + 0;
    ST32(sp+16, FBITS(f20));
    ST32(sp+20, FBITS(f20));
    ST32(sp+24, FBITS(f20));
    v0 = LD32(a3);
    v1 = LD32(v0+148);
    t_ = v1;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893601C;
L_0893601C:;
    ST32(sp+32, FBITS(f20));
    ST32(sp+36, FBITS(f20));
    ST32(sp+40, FBITS(f20));
    a0 = LD32(s1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893603C;
L_0893603C:;
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+36));
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f1 - f0;
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+40));
    f4 = f2 - f0;
    f0 = BITSF(LD32(sp+24));
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    f1 = f1 - f0;
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    ST32(sp+48, FBITS(f3));
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f21 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    s4 = D_08AED6E8 - (-10520);
    if (cnd_) { goto L_08936154; }
    goto L_089360AC;
L_089360AC:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08935F3C; }
    goto L_089360C0;
L_089360C0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08935F3C; }
    goto L_089360CC;
L_089360CC:;
    v0 = LD32(s1);
    goto L_089360D0;
L_089360D0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08936124; }
    goto L_089360E4;
L_089360E4:;
    v0 = LD_U8(s0+8);
    goto L_089360E8;
L_089360E8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0893614C; }
    goto L_089360F0;
L_089360F0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893613C; }
    goto L_089360F8;
L_089360F8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08936100;
L_08936100:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893610C;
L_0893610C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08936118;
L_08936118:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089360E8; }
    goto L_08936120;
L_08936120:;
    v1 = LD32(s1+4);
    goto L_08936124;
L_08936124:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089360D0; }
    goto L_08936134;
L_08936134:;
    v1 = 0 + 0;
    goto L_08935F40;
L_0893613C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08936100;
L_0893614C:;
    s0 = LD32(s0+4);
    goto L_08936118;
L_08936154:;
    f0 = BITSF(LD32(s4-10520));
    t0 = LD32(s1+20);
    f12 = BITSF(v0);
    f0 = f0 / f21;
    s0 = sp + 64;
    s3 = sp + 128;
    a1 = s2 + 0;
    a2 = s3 + 0;
    a0 = s0 + 0;
    f1 = f1 * f0;
    f2 = f3 * f0;
    f0 = f4 * f0;
    ST32(sp+136, FBITS(f1));
    ST32(sp+128, FBITS(f2));
    ST32(sp+132, FBITS(f0));
    v0 = LD32(t0);
    v1 = LD32(v0-16);
    t0 = t0 + v1;
    a3 = LD32(t0+4);
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_089361A4;
L_089361A4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089361AC;
L_089361AC:;
    v1 = LD_U8(v0+32);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08936260; }
    goto L_089361B8;
L_089361B8:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08935F3C; }
    goto L_089361CC;
L_089361CC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08935F3C; }
    goto L_089361D8;
L_089361D8:;
    v0 = LD32(s1);
    goto L_089361DC;
L_089361DC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08936230; }
    goto L_089361F0;
L_089361F0:;
    v0 = LD_U8(s0+8);
    goto L_089361F4;
L_089361F4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08936258; }
    goto L_089361FC;
L_089361FC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08936248; }
    goto L_08936204;
L_08936204:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0893620C;
L_0893620C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936218;
L_08936218:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08936224;
L_08936224:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089361F4; }
    goto L_0893622C;
L_0893622C:;
    v1 = LD32(s1+4);
    goto L_08936230;
L_08936230:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089361DC; }
    goto L_08936240;
L_08936240:;
    v1 = 0 + 0;
    goto L_08935F40;
L_08936248:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0893620C;
L_08936258:;
    s0 = LD32(s0+4);
    goto L_08936224;
L_08936260:;
    cnd_ = a0 == 0;
    v0 = D_08AED6F4 - (-10508);
    if (cnd_) { goto L_08936310; }
    goto L_08936268;
L_08936268:;
    v1 = D_08AED6E0 - (-10528);
    {v[0]=1.57079632679f;}
    {v[4]=0.63661977236f;}
    f23 = BITSF(LD32(v0-10508));
    f24 = BITSF(LD32(v1-10528));
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    s0 = LD32(a0);
    goto L_08936288;
L_08936288:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936294;
L_08936294:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08936308; }
    goto L_089362B4;
L_089362B4:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08936308; }
    goto L_089362C0;
L_089362C0:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08936308; }
    goto L_089362CC;
L_089362CC:;
    a2 = LD32(s1+20);
    v1 = LD32(v1-16);
    a0 = LD32(a2);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    v0 = LD32(a0-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08936308; }
    goto L_089362F4;
L_089362F4:;
    v1 = LD32(a2+12);
    v0 = LD32(s0+12);
    cnd_ = v0 == v1;
    if (cnd_) { ST32(sp+128, FBITS(f20)); goto L_089363B8; }
    goto L_08936304;
L_08936304:;
    a0 = LD32(sp+8);
    goto L_08936308;
L_08936308:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08936288; }
    goto L_08936310;
L_08936310:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08936398; }
    goto L_08936324;
L_08936324:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08936398; }
    goto L_08936330;
L_08936330:;
    v0 = LD32(s1);
    goto L_08936334;
L_08936334:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08936388; }
    goto L_08936348;
L_08936348:;
    v0 = LD_U8(s0+8);
    goto L_0893634C;
L_0893634C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089363B0; }
    goto L_08936354;
L_08936354:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089363A0; }
    goto L_0893635C;
L_0893635C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08936364;
L_08936364:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936370;
L_08936370:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0893637C;
L_0893637C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0893634C; }
    goto L_08936384;
L_08936384:;
    v1 = LD32(s1+4);
    goto L_08936388;
L_08936388:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08936334; }
    goto L_08936398;
L_08936398:;
    v1 = s5 + 0;
    goto L_08935F40;
L_089363A0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08936364;
L_089363B0:;
    s0 = LD32(s0+4);
    goto L_0893637C;
L_089363B8:;
    a0 = s0 + 0;
    ST32(sp+132, FBITS(f20));
    ST32(sp+136, FBITS(f20));
    v0 = LD32(s0);
    v1 = LD32(v0+44);
    t_ = v1;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089363D4;
L_089363D4:;
    f5 = BITSF(LD32(sp+128));
    f6 = BITSF(LD32(sp+132));
    f7 = BITSF(LD32(sp+136));
    f2 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp+24));
    f2 = f5 - f2;
    f3 = f6 - f3;
    f4 = f7 - f4;
    f0 = BITSF(LD32(sp+32));
    v1 = FBITS(f2);
    a0 = FBITS(f3);
    a1 = FBITS(f4);
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f5 = f5 - f0;
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    fcc = FCMP(f21, f20, 2);
    f6 = f6 - f1;
    f7 = f7 - f0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f10 = BITSF(v0);
    v0 = D_08AED6EC - (-10516);
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, FBITS(f3));
    ST32(sp+152, FBITS(f4));
    ST32(sp+160, FBITS(f5));
    ST32(sp+164, FBITS(f6));
    ST32(sp+168, FBITS(f7));
    cnd_ = fcc;
    f11 = BITSF(LD32(v0-10516));
    if (cnd_) { goto L_089365B4; }
    goto L_08936468;
L_08936468:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    f9 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_089365B4; }
    goto L_08936478;
L_08936478:;
    f3 = BITSF(LD32(sp+52));
    f4 = BITSF(LD32(sp+56));
    f2 = f21 * f0;
    v0 = FBITS(f9);
    {u32 a_=sp+(256);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a0);}
    v0 = FBITS(f3);
    {v[6]=BITSF(a1);}
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f1 = f0 / f2;
    f0 = BITSF(LD32(s4-10520));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f0; goto L_089364D4; }
    goto L_089364D4;
L_089364D4:;
    v0 = D_08AED6F0 - (-10512);
    f0 = BITSF(LD32(v0-10512));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f0; goto L_089364EC; }
    goto L_089364EC;
L_089364EC:;
    v0 = FBITS(f1);
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {u32 a_=sp+(272);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f8 = BITSF(v0);
    fcc = FCMP(f0, f23, 12);
    cnd_ = !fcc;
    f2 = BITSF(FBITS(f9) ^ 0x80000000u);
    if (cnd_) { goto L_089365B4; }
    goto L_0893652C;
L_0893652C:;
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    v0 = FBITS(f5);
    {u32 a_=sp+(304);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[6]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+176, FBITS(f2));
    fcc = FCMP(f20, f0, 12);
    ST32(sp+180, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+184, FBITS(f4));
    if (cnd_) { goto L_089365B4; }
    goto L_0893658C;
L_0893658C:;
    {u32 a_=sp+(336);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f8);
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f11 = f10 * f0;
    goto L_089365B4;
L_089365B4:;
    fcc = FCMP(f11, f24, 12);
    cnd_ = fcc;
    if (cnd_) { s5 = 0 + 0; goto L_08936304; }
    goto L_089365C4;
L_089365C4:;
    a0 = LD32(sp+8);
    goto L_08936308;
}

/* 089365CC */
rv_t func_089365CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089365CC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25C4C - (23628);
    t1 = D_08C25C5C - (23644);
    t2 = D_08C25C6C - (23660);
    a1 = a1 & a0;
    v1 = t0 + 23628;
    a2 = t1 + 23644;
    cnd_ = a1 == 0;
    a3 = t2 + 23660;
    if (cnd_) { goto L_08936684; }
    goto L_089365FC;
L_089365FC:;
    v0 = D_08AED6F8 - (-10504);
    f4 = BITSF(LD32(v0-10504));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+23628, FBITS(f2));
    ST32(t1+23644, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+23660, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08936684;
L_08936684:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893668C */
float func_0893668C(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0893668C:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089366B8; }
    goto L_089366A4;
L_089366A4:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089366B8; }
    goto L_089366B8;
L_089366B8:;
    return f0;
}

/* 089366C0 */
rv_t func_089366C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089366C0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089365CC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089366D4;
L_089366D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089366E0 */
void func_089366E0(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_089366E0:;
    v0 = D_08AED700 - (-10496);
    f0 = BITSF(LD32(v0-10496));
    ST8(a0, 0);
    ST32(a0+4, FBITS(f0));
    return;
}

/* 089366F4 */
void func_089366F4(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
L_089366F4:;
    v0 = LD_U8(a0);
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08936794; }
    goto L_08936700;
L_08936700:;
    f4 = BITSF(LD32(a0+4));
    f0 = BITSF(0);
    a3 = D_08B25AC0 - (23232);
    fcc = FCMP(f0, f4, 14);
    cnd_ = !fcc;
    t0 = a3 + 23232;
    if (cnd_) { goto L_08936784; }
    goto L_0893671C;
L_0893671C:;
    v1 = LD32(a3+23232);
    a1 = LD32(t0+4);
    v0 = D_08AED704 - (-10492);
    a0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + a0;
    v1 = v1 + a1;
    f3 = BITSF(LD32(v0-10492));
    v0 = v1 >> 1;
    f1 = BITSF(v0);
    v0 = D_08AED708 - (-10488);
    f2 = BITSF(LD32(v0-10488));
    f0 = (float)(s32)FBITS(f1);
    v0 = D_08AED70C - (-10484);
    f1 = BITSF(LD32(v0-10484));
    f2 = f2 - f3;
    a1 = a1 + v1;
    f0 = f0 * f1;
    ST32(t0+4, a1);
    f0 = f0 * f2;
    ST32(a3+23232, v1);
    f0 = f0 + f3;
    f0 = f12 * f0;
    f0 = f4 - f0;
    ST32(a2+4, FBITS(f0));
    return;
L_08936784:;
    v0 = D_08AED710 - (-10480);
    f0 = BITSF(LD32(v0-10480));
    ST8(a0, 0);
    ST32(a0+4, FBITS(f0));
    goto L_08936794;
L_08936794:;
    return;
}

/* 0893679C */
rv_t func_0893679C(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f13 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_0893679C:;
    sp = sp - 208;
    t0 = a1 + 0;
    v0 = 999;
    a1 = D_08C2A880 - (-22400);
    v1 = a1 - 22400;
    s4 = a0 + 0;
    s2 = 0 + 0;
    f20 = f12;
    cnd_ = t0 == v0;
    if (cnd_) { goto L_08936834; }
    goto L_089367E4;
L_089367E4:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-22400);
    v0 = v0 - 1;
    v0 = t0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a3 = LD32(v0);
    cnd_ = a3 == 0;
    a0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_08936838; }
    goto L_08936808;
L_08936808:;
    a0 = LD32(a3);
    goto L_0893680C;
L_0893680C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == t0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08936D10; }
    goto L_08936824;
L_08936824:;
    a3 = LD32(a3+4);
    goto L_08936828;
L_08936828:;
    cnd_ = a3 != 0;
    if (cnd_) { a0 = LD32(a3); goto L_0893680C; }
    goto L_08936830;
L_08936830:;
    s2 = 0 + 0;
    goto L_08936834;
L_08936834:;
    a0 = D_08C2A6C8 - (-22840);
    goto L_08936838;
L_08936838:;
    v0 = 999;
    v1 = a0 - 22840;
    cnd_ = t0 == v0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08936898; }
    goto L_08936848;
L_08936848:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = t0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08C2B4CC - (-19252); goto L_0893689C; }
    goto L_0893686C;
L_0893686C:;
    a1 = LD32(a0);
    goto L_08936870;
L_08936870:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == t0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08936CF0; }
    goto L_08936888;
L_08936888:;
    a0 = LD32(a0+4);
    goto L_0893688C;
L_0893688C:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_08936870; }
    goto L_08936894;
L_08936894:;
    s3 = 0 + 0;
    goto L_08936898;
L_08936898:;
    a0 = D_08C2B4CC - (-19252);
    goto L_0893689C;
L_0893689C:;
    v0 = 999;
    v1 = a0 - 19252;
    cnd_ = a2 == v0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089368FC; }
    goto L_089368AC;
L_089368AC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089368FC; }
    goto L_089368D0;
L_089368D0:;
    a0 = LD32(a1);
    goto L_089368D4;
L_089368D4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08936CD0; }
    goto L_089368EC;
L_089368EC:;
    a1 = LD32(a1+4);
    goto L_089368F0;
L_089368F0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089368D4; }
    goto L_089368F8;
L_089368F8:;
    s1 = 0 + 0;
    goto L_089368FC;
L_089368FC:;
    v0 = func_08979DF4();
    goto L_08936904;
L_08936904:;
    v1 = 2;
    cnd_ = v0 == v1;
    v0 = D_08AED718 - (-10472);
    if (cnd_) { goto L_08936CC4; }
    goto L_08936910;
L_08936910:;
    f4 = BITSF(LD32(v0-10472));
    goto L_08936914;
L_08936914:;
    v0 = D_08AED71C - (-10468);
    f2 = BITSF(LD32(v0-10468));
    v0 = D_08AED724 - (-10460);
    f1 = BITSF(LD32(v0-10460));
    f2 = f20 - f2;
    a1 = D_08B25AC0 - (23232);
    f1 = f20 - f1;
    v1 = LD32(a1+23232);
    f2 = f20 * f2;
    a3 = a1 + 23232;
    a0 = LD32(a3+4);
    a2 = (u32)((s32)v1 >> 16);
    f1 = f2 * f1;
    f2 = f2 * f4;
    v0 = D_08AED720 - (-10464);
    v1 = v1 << 16;
    f1 = f1 * f4;
    f2 = f2 * f4;
    f0 = BITSF(LD32(v0-10464));
    v1 = v1 + a2;
    f1 = f1 * f4;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f2 = f2 * f0;
    f3 = f20 * f4;
    f1 = f1 * f4;
    f4 = BITSF(v0);
    v0 = D_08AED728 - (-10456);
    f0 = BITSF(LD32(v0-10456));
    f3 = f3 - f2;
    v0 = D_08AED72C - (-10452);
    f1 = f1 * f0;
    f2 = (float)(s32)FBITS(f4);
    f0 = BITSF(LD32(v0-10452));
    a0 = a0 + v1;
    f3 = f3 + f1;
    f2 = f2 * f0;
    ST32(a3+4, a0);
    f21 = BITSF(0);
    fcc = FCMP(f2, f3, 12);
    cnd_ = !fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_08936BF0; }
    goto L_089369C0;
L_089369C0:;
    v0 = LD_U8(s4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08936BF4; }
    goto L_089369CC;
L_089369CC:;
    v0 = 0 < s2;
    v1 = 0 < s3;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(s2+204); goto L_08936BD8; }
    goto L_089369E0;
L_089369E0:;
    cnd_ = s1 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08936BD4; }
    goto L_089369E8;
L_089369E8:;
    ST32(sp, FBITS(f21));
    a0 = s2 + 0;
    ST32(sp+4, FBITS(f21));
    s0 = sp + 48;
    ST32(sp+8, FBITS(f21));
    v0 = LD32(s2);
    v1 = LD32(v0+148);
    t_ = v1;
    s5 = sp + 64;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936A0C;
L_08936A0C:;
    ST32(sp+16, FBITS(f21));
    a1 = sp + 16;
    ST32(sp+20, FBITS(f21));
    ST32(sp+24, FBITS(f21));
    v0 = LD32(s2);
    v1 = LD32(v0+44);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936A2C;
L_08936A2C:;
    a1 = LD32(s1);
    v0 = LD32(a1+40);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936A3C;
L_08936A3C:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f5 = f5 * f20;
    f3 = f3 * f20;
    f4 = f4 * f20;
    f2 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    f2 = f2 + f3;
    f1 = f1 + f4;
    f0 = f0 + f5;
    ST32(sp+32, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    v1 = LD32(s2);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936A94;
L_08936A94:;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f4 = f4 * f20;
    f0 = f0 * f20;
    f1 = f1 * f20;
    f3 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f5 = BITSF(LD32(sp+8));
    f3 = f3 + f0;
    f6 = f6 + f1;
    f5 = f5 + f4;
    f2 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    f2 = f2 - f3;
    f1 = f1 - f6;
    f0 = f0 - f5;
    ST32(sp, FBITS(f3));
    ST32(sp+40, FBITS(f0));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+4, FBITS(f6));
    ST32(sp+8, FBITS(f5));
    v1 = LD32(s1);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936B04;
L_08936B04:;
    a2 = v0 + 0;
    a1 = sp + 32;
    a0 = s4 + 0;
    a3 = s0 + 0;
    func_08936F48(a1, a2, a3);
    goto L_08936B18;
L_08936B18:;
    v0 = D_08AED718 - (-10472);
    f12 = BITSF(LD32(v0-10472));
    a1 = s0 + 0;
    a0 = s5 + 0;
    f13 = f21;
    func_088F79C0(a0, a1, f12, f13);
    goto L_08936B30;
L_08936B30:;
    v0 = LD32(sp+48);
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+52);
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    s0 = sp + 96;
    if (cnd_) { goto L_08936BA8; }
    goto L_08936B68;
L_08936B68:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+88, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    s0 = sp + 96;
    goto L_08936BA8;
L_08936BA8:;
    a1 = s5 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936BB4;
L_08936BB4:;
    v0 = LD32(s2);
    a1 = s0 + 0;
    v1 = LD32(v0+36);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936BC8;
L_08936BC8:;
    v0 = LD32(s2+172);
    v0 = v0 | 0x2;
    ST32(s2+172, v0);
    goto L_08936BD4;
L_08936BD4:;
    s1 = LD32(s2+204);
    goto L_08936BD8;
L_08936BD8:;
    s0 = LD32(s3+236);
    v0 = 0 < s1;
    v1 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08936C1C; }
    goto L_08936BF0;
L_08936BF0:;
    goto L_08936BF4;
L_08936BF4:;
    sp = sp + 208;
    return (rv_t){ v0, v1, f0 };
L_08936C1C:;
    a1 = 117;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936C24;
L_08936C24:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    cnd_ = v0 != 0;
    a2 = 117;
    if (cnd_) { goto L_08936C70; }
    goto L_08936C34;
L_08936C34:;
    a0 = s0 + 0;
    a1 = 127;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936C40;
L_08936C40:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    cnd_ = v0 != 0;
    a2 = 127;
    if (cnd_) { goto L_08936C70; }
    goto L_08936C50;
L_08936C50:;
    a0 = s0 + 0;
    a1 = 130;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936C5C;
L_08936C5C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08936BF4; }
    goto L_08936C64;
L_08936C64:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = 130;
    goto L_08936C70;
L_08936C70:;
    { rv_t r_ = func_08985668(a0, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936C78;
L_08936C78:;
    v1 = LD32(s2+204);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(v1+1, v0); goto L_08936C84; }
    goto L_08936C84;
L_08936C84:;
    v0 = LD_U8(s1+1);
    v1 = 1;
    ST8(s4, v1);
    v0 = v0 << 2;
    v0 = v0 + s1;
    v1 = LD32(v0+52);
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08936BF0; }
    goto L_08936CA4;
L_08936CA4:;
    v0 = LD32(s2);
    a0 = 1;
    v1 = LD32(v0-16);
    v1 = s2 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936CBC;
L_08936CBC:;
    goto L_08936BF4;
L_08936CC4:;
    v0 = D_08AED714 - (-10476);
    f4 = BITSF(LD32(v0-10476));
    goto L_08936914;
L_08936CD0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089368EC; }
    goto L_08936CDC;
L_08936CDC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089368F0; }
    goto L_08936CE8;
L_08936CE8:;
    goto L_089368FC;
L_08936CF0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08936888; }
    goto L_08936CFC;
L_08936CFC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0893688C; }
    goto L_08936D08;
L_08936D08:;
    a0 = D_08C2B4CC - (-19252);
    goto L_0893689C;
L_08936D10:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08936824; }
    goto L_08936D1C;
L_08936D1C:;
    v0 = LD_U8(a3+8);
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(a3+4); goto L_08936828; }
    goto L_08936D28;
L_08936D28:;
    a0 = D_08C2A6C8 - (-22840);
    goto L_08936838;
}

/* 08936D30 */
rv_t func_08936D30(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08936D30:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = D_08C2A880 - (-22400);
    a2 = 1;
    a0 = a0 - 22400;
    v0 = LD_U8(s2);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08936D78; }
    goto L_08936D60;
L_08936D60:;
    goto L_08936D64;
L_08936D64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08936D78:;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936D80;
L_08936D80:;
    a0 = D_08C2A6C8 - (-22840);
    a1 = s0 + 0;
    a2 = 1;
    a0 = a0 - 22840;
    s1 = v0 + 0;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936D98;
L_08936D98:;
    v1 = 0 < v0;
    a1 = v0 + 0;
    v0 = 0 < s1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08936D64; }
    goto L_08936DB0;
L_08936DB0:;
    v1 = LD32(a1+236);
    s0 = LD32(s1+204);
    a0 = v1 + 0;
    v0 = 0 < s0;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a2 = 177;
    if (cnd_) { goto L_08936D64; }
    goto L_08936DD0;
L_08936DD0:;
    { rv_t r_ = func_08985668(a0, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936DD8;
L_08936DD8:;
    v1 = LD32(s1+204);
    cnd_ = v1 == 0;
    a0 = 1;
    if (cnd_) { goto L_08936DE8; }
    goto L_08936DE4;
L_08936DE4:;
    ST8(v1+1, v0);
    goto L_08936DE8;
L_08936DE8:;
    v0 = LD_U8(s0+1);
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+52);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08936D60; }
    goto L_08936E00;
L_08936E00:;
    ST8(s2, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A243D0(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936E18;
L_08936E18:;
    v1 = LD32(s1);
    a0 = 1;
    a1 = 1;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936E34;
L_08936E34:;
    goto L_08936D64;
}

/* 08936E3C */
rv_t func_08936E3C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08936E3C:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = D_08C2A880 - (-22400);
    a2 = 1;
    a0 = a0 - 22400;
    v0 = LD_U8(s2);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08936E84; }
    goto L_08936E6C;
L_08936E6C:;
    goto L_08936E70;
L_08936E70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08936E84:;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936E8C;
L_08936E8C:;
    a0 = D_08C2A6C8 - (-22840);
    a1 = s0 + 0;
    a2 = 1;
    a0 = a0 - 22840;
    s1 = v0 + 0;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08936EA4;
L_08936EA4:;
    v1 = 0 < v0;
    a1 = v0 + 0;
    v0 = 0 < s1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08936E70; }
    goto L_08936EBC;
L_08936EBC:;
    v1 = LD32(a1+236);
    s0 = LD32(s1+204);
    a0 = v1 + 0;
    v0 = 0 < s0;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a2 = 178;
    if (cnd_) { goto L_08936E70; }
    goto L_08936EDC;
L_08936EDC:;
    { rv_t r_ = func_08985668(a0, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936EE4;
L_08936EE4:;
    v1 = LD32(s1+204);
    cnd_ = v1 == 0;
    a0 = 1;
    if (cnd_) { goto L_08936EF4; }
    goto L_08936EF0;
L_08936EF0:;
    ST8(v1+1, v0);
    goto L_08936EF4;
L_08936EF4:;
    v0 = LD_U8(s0+1);
    v0 = v0 << 2;
    v0 = v0 + s0;
    v1 = LD32(v0+52);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08936E6C; }
    goto L_08936F0C;
L_08936F0C:;
    ST8(s2, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A243D0(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936F24;
L_08936F24:;
    v1 = LD32(s1);
    a0 = 1;
    a1 = 1;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08936F40;
L_08936F40:;
    goto L_08936E70;
}

/* 08936F48 */
void func_08936F48(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08936F48:;
    t2 = a2 + 0;
    t0 = LD32(t2+4);
    a2 = LD32(a2);
    t1 = LD32(t2+8);
    {v[0]=BITSF(a2);}
    {v[1]=BITSF(t0);}
    {v[2]=BITSF(t1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f3 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    v0 = D_08AED734 - (-10444);
    a0 = FBITS(f3);
    f4 = BITSF(LD32(v0-10444));
    v1 = FBITS(f1);
    v0 = FBITS(f2);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v[4]=BITSF(v1);}
    {t3=FBITS(v[0]);}
    {v[5]=BITSF(v0);}
    f0 = BITSF(t3);
    {v[6]=BITSF(a0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    fcc = FCMP(f4, f0, 12);
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f8 = BITSF(t3);
    {v[0]=BITSF(v1);}
    {v[8]=BITSF(a2);}
    {v[1]=BITSF(v0);}
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {v[2]=BITSF(a0);}
    {v0=FBITS(v[4]);}
    ST32(a3+8, FBITS(f3));
    {v[9]=BITSF(t0);}
    sp = sp - 64;
    {v[10]=BITSF(t1);}
    ST32(a3, FBITS(f1));
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f3 = BITSF(v0);
    {t3=FBITS(v[0]);}
    f9 = BITSF(t3);
    cnd_ = !fcc;
    ST32(a3+4, FBITS(f2));
    if (cnd_) { goto L_08937238; }
    goto L_08936FF8;
L_08936FF8:;
    fcc = FCMP(f4, f3, 12);
    cnd_ = !fcc;
    v0 = D_08AED730 - (-10448);
    if (cnd_) { goto L_08937238; }
    goto L_08937008;
L_08937008:;
    a0 = LD32(t2+8);
    f6 = BITSF(LD32(v0-10448));
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    {v[4]=BITSF(v0);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[5]=BITSF(v1);}
    v0 = LD32(a1+8);
    v1 = LD32(t2);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(t2+4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(a0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {t3=FBITS(v[8]);}
    f1 = BITSF(t3);
    {v0=FBITS(v[10]);}
    f7 = BITSF(v0);
    v0 = FBITS(f1);
    f1 = f3 * f8;
    f6 = f8 / f6;
    f5 = BITSF(t3);
    {t3=FBITS(v[9]);}
    f0 = BITSF(t3);
    f4 = BITSF(t3);
    {v[16]=BITSF(v0);}
    t3 = FBITS(f7);
    v0 = FBITS(f0);
    {v[17]=BITSF(v0);}
    {v[18]=BITSF(t3);}
    {v[12]=1.57079632679f;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[16];float t1=v[17];float t2=v[18];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    f0 = BITSF(0);
    ST32(sp+20, FBITS(f4));
    ST32(sp+4, FBITS(f4));
    ST32(sp+16, FBITS(f5));
    ST32(sp+24, FBITS(f7));
    ST32(sp, FBITS(f5));
    f1 = f9 / f1;
    ST32(sp+8, FBITS(f7));
    fcc = FCMP(f2, f0, 2);
    t3 = FBITS(f1);
    {v[20]=BITSF(t3);}
    {float s0=v[20];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[12];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    {v[0]=0.63661977236f;}
    {v[24]=BITSF(v0);}
    {float s0=v[24];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f6 = f6 * f0;
    t3 = FBITS(f6);
    {v[28]=BITSF(t3);}
    {float s0=v[28];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float t0=v[12];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    cnd_ = fcc;
    if (cnd_) { {v[4]=0.31830988618f;} goto L_08937158; }
    goto L_0893711C;
L_0893711C:;
    {float s0=v[4];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {t3=FBITS(v[2]);}
    f3 = BITSF(t3);
    {v0=FBITS(v[0]);}
    {t3=FBITS(v[1]);}
    ST32(sp+16, v0);
    ST32(sp+20, t3);
    ST32(sp+24, FBITS(f3));
    ST32(sp, v0);
    ST32(sp+4, t3);
    ST32(sp+8, FBITS(f3));
    {v[4]=0.31830988618f;}
    goto L_08937158;
L_08937158:;
    v0 = FBITS(f4);
    {v[32]=BITSF(v0);}
    {float s0=v[32];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v1);}
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[8]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v[1]=BITSF(v0);}
    v1 = LD32(sp+8);
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {float s0=v[8];float d0=s0;v[3]=d0;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    {t3=FBITS(v[3]);}
    f4 = BITSF(t3);
    ST32(sp+32, FBITS(f3));
    {t3=FBITS(v[1]);}
    {v0=FBITS(v[2]);}
    ST32(sp+36, t3);
    ST32(sp+40, v0);
    ST32(sp+44, FBITS(f4));
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+40);
    v1 = LD32(sp+44);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    {v[112]=BITSF(LD32(sp+(32)));}
    {v[113]=BITSF(LD32(sp+(36)));}
    {v[114]=BITSF(LD32(sp+(40)));}
    {v[115]=BITSF(LD32(sp+(44)));}
    {v[116]=BITSF(LD32(a1+(0)));}
    {v[117]=BITSF(LD32(a1+(4)));}
    {v[118]=BITSF(LD32(a1+(8)));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[115];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[96]=d0;v[97]=d1;v[98]=d2;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[116];float t1=v[117];float t2=v[118];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[103];v[100]=s0*t0;v[101]=s1*t0;v[102]=s2*t0;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[100]=d0;v[101]=d1;v[102]=d2;}
    {float s0=v[115];float t0=v[115];float d0=s0*t0;v[104]=d0;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float t0=v[112];float t1=v[113];float t2=v[114];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[105]=sum;}
    {float s0=v[104];float t0=v[105];float d0=s0-t0;v[107]=d0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float t0=v[107];v[104]=s0*t0;v[105]=s1*t0;v[106]=s2*t0;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[100];float t1=v[101];float t2=v[102];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float t0=v[104];float t1=v[105];float t2=v[106];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[120]=d0;v[121]=d1;v[122]=d2;}
    {ST32(a3+(0),FBITS(v[120]));}
    {ST32(a3+(4),FBITS(v[121]));}
    {ST32(a3+(8),FBITS(v[122]));}
    goto L_08937238;
L_08937238:;
    sp = sp + 64;
    return;
}

/* 08937240 */
rv_t func_08937240(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08937240:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25CFC - (23804);
    t1 = D_08C25D0C - (23820);
    t2 = D_08C25D1C - (23836);
    a1 = a1 & a0;
    v1 = t0 + 23804;
    a2 = t1 + 23820;
    cnd_ = a1 == 0;
    a3 = t2 + 23836;
    if (cnd_) { goto L_089372F8; }
    goto L_08937270;
L_08937270:;
    v0 = D_08AED738 - (-10440);
    f4 = BITSF(LD32(v0-10440));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+23804, FBITS(f2));
    ST32(t1+23820, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+23836, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089372F8;
L_089372F8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08937300 */
rv_t func_08937300(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08937300:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08937240(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937314;
L_08937314:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08937320 */
rv_t func_08937320(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08937320:;
    sp = sp - 16;
    a2 = 1004;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08937338;
L_08937338:;
    v0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = v0 + 23196;
    a0 = 999;
    ST32(s0+44, 0);
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08AF8748 - (-30904);
    v1 = s0 + 48;
    v0 = v0 - 30904;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(s0, v0);
    ST32(s0+40, a0);
    ST32(s0+48, FBITS(f2));
    ST32(s0+64, 0);
    ST32(s0+28, 0);
    ST32(s0+36, a0);
    ST32(s0+60, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08937398 */
rv_t func_08937398(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08937398:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089373E0; }
    goto L_089373B4;
L_089373B4:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089373BC;
L_089373BC:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089373D0;
L_089373D0:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089373B4; }
    goto L_089373E0;
L_089373E0:;
    a0 = s0 + 0;
    v0 = func_089377EC(a0);
    goto L_089373E8;
L_089373E8:;
    a0 = LD32(v0+48);
    a1 = D_08B45A9C - (23196);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = a1 + 23196;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937400;
L_08937400:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08937410 */
rv_t func_08937410(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08937410:;
    sp = sp - 80;
    s1 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08937450; }
    goto L_08937438;
L_08937438:;
    goto L_0893743C;
L_0893743C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08937450:;
    f0 = BITSF(LD32(a0+32));
    f0 = f0 + f12;
    ST32(a0+32, FBITS(f0));
    f0 = func_089377F4(a0);
    goto L_08937460;
L_08937460:;
    v1 = LD32(s1+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_089374C0; }
    goto L_08937470;
L_08937470:;
    v1 = D_08AD9CE8 - (-25368);
    v1 = v1 - 25368;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08937488u: goto L_08937488; case 0x089374C0u: goto L_089374C0; case 0x089374E8u: goto L_089374E8; case 0x08937684u: goto L_08937684; case 0x08937794u: goto L_08937794; default: rs_break(0, 0x08937480); }
L_08937488:;
    v0 = LD32(s1+40);
    v0 = v0 ^ 0x3e7;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089374D8; }
    goto L_08937498;
L_08937498:;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089374A8;
L_089374A8:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089374C4; }
    goto L_089374B0;
L_089374B0:;
    v0 = LD32(v0+8);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0893743C; }
    goto L_089374C0;
L_089374C0:;
    a0 = s1 + 0;
    goto L_089374C4;
L_089374C4:;
    a1 = 1;
    goto L_089374C8;
L_089374C8:;
    { rv_t r_ = func_08937A80(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089374D0;
L_089374D0:;
    goto L_0893743C;
L_089374D8:;
    a1 = 2;
    { rv_t r_ = func_08937A80(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089374E0;
L_089374E0:;
    a0 = s1 + 0;
    goto L_08937498;
L_089374E8:;
    a2 = LD32(s1+40);
    v0 = a2 ^ 0x3e7;
    cnd_ = v0 == 0;
    v0 = 999;
    if (cnd_) { goto L_089374C0; }
    goto L_089374F8;
L_089374F8:;
    a0 = D_08C2B4CC - (-19252);
    cnd_ = a2 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08937438; }
    goto L_08937504;
L_08937504:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08937554; }
    goto L_08937528;
L_08937528:;
    a0 = LD32(a1);
    goto L_0893752C;
L_0893752C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08937664; }
    goto L_08937544;
L_08937544:;
    a1 = LD32(a1+4);
    goto L_08937548;
L_08937548:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0893752C; }
    goto L_08937550;
L_08937550:;
    v1 = 0 + 0;
    goto L_08937554;
L_08937554:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0893743C; }
    goto L_0893755C;
L_0893755C:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937578;
L_08937578:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089377EC(a0);
    goto L_08937584;
L_08937584:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089375A4;
L_089375A4:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f0 = f0 - f2;
    f1 = f1 - f3;
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    v0 = FBITS(f0);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp, FBITS(f0));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    ST32(sp+4, FBITS(f1));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08937614;
L_08937614:;
    v1 = v0 + 0;
    v0 = D_08AED73C - (-10436);
    f0 = BITSF(LD32(v0-10436));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_08937634; }
    goto L_08937630;
L_08937630:;
    a0 = 0 + 0;
    goto L_08937634;
L_08937634:;
    v0 = v1 < 0x1u;
    v0 = a0 | v0;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893765C; }
    goto L_08937648;
L_08937648:;
    v0 = LD32(v1+8);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0893743C; }
    goto L_08937658;
L_08937658:;
    a0 = s1 + 0;
    goto L_0893765C;
L_0893765C:;
    a1 = 3;
    goto L_089374C8;
L_08937664:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08937548; }
    goto L_08937670;
L_08937670:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08937544; }
    goto L_0893767C;
L_0893767C:;
    goto L_08937554;
L_08937684:;
    a1 = LD32(s1+40);
    v0 = a1 ^ 0x3e7;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089374C4; }
    goto L_08937694;
L_08937694:;
    f0 = BITSF(LD32(s1+44));
    f1 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s1+44, FBITS(f0));
    if (cnd_) { goto L_089376BC; }
    goto L_089376B0;
L_089376B0:;
    a0 = s1 + 0;
    a1 = 4;
    goto L_089374C8;
L_089376BC:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089376CC;
L_089376CC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08937438; }
    goto L_089376D4;
L_089376D4:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089376F0;
L_089376F0:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089377EC(a0);
    goto L_089376FC;
L_089376FC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893771C;
L_0893771C:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f3;
    f1 = f1 - f0;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AED740 - (-10432);
    f0 = BITSF(LD32(v0-10432));
    a1 = 2;
    ST32(sp, FBITS(f2));
    fcc = FCMP(f0, f3, 12);
    ST32(sp+4, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08937438; }
    goto L_0893778C;
L_0893778C:;
    goto L_089374C8;
L_08937794:;
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089377A8;
L_089377A8:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893765C; }
    goto L_089377B0;
L_089377B0:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a1 = 3;
    if (cnd_) { goto L_089374C8; }
    goto L_089377C0;
L_089377C0:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AED744 - (-10428);
    if (cnd_) { goto L_089374C8; }
    goto L_089377CC;
L_089377CC:;
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-10428));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0893743C; }
    goto L_089377E4;
L_089377E4:;
    goto L_089374C8;
}

/* 089377EC */
u32 func_089377EC(u32 a0)
{
    u32 v0 = 0;
L_089377EC:;
    v0 = LD32(a0+24);
    return v0;
}

/* 089377F4 */
float func_089377F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089377F4:;
    sp = sp - 48;
    s2 = 999;
    s0 = LD32(a0+40);
    cnd_ = s0 == s2;
    s1 = a0 + 0;
    if (cnd_) { goto L_08937860; }
    goto L_08937818;
L_08937818:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a1 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893782C;
L_0893782C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08937858; }
    goto L_08937834;
L_08937834:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s1+40); goto L_08937860; }
    goto L_08937858;
L_08937858:;
    s0 = 999;
    ST32(s1+40, s2);
    goto L_08937860;
L_08937860:;
    v0 = 999;
    cnd_ = s0 == v0;
    if (cnd_) { v0 = LD32(s1+24); goto L_08937884; }
    goto L_0893786C;
L_0893786C:;
    sp = sp + 48;
    return f0;
L_08937884:;
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_0893788C;
L_0893788C:;
    a0 = v0 + 0;
    v0 = func_08962C40(a0);
    goto L_08937894;
L_08937894:;
    cnd_ = v0 == 0;
    v1 = D_08AED74C - (-10420);
    if (cnd_) { goto L_089378BC; }
    goto L_0893789C;
L_0893789C:;
    v0 = LD32(v0+4);
    f0 = BITSF(LD32(v1-10420));
    ST32(s1+40, v0);
    v0 = D_08AED748 - (-10424);
    ST32(s1+64, FBITS(f0));
    f0 = BITSF(LD32(v0-10424));
    ST32(s1+60, FBITS(f0));
    goto L_0893786C;
L_089378BC:;
    v0 = LD32(s1+24);
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_089378C8;
L_089378C8:;
    a0 = v0 + 0;
    { rv_t r_ = func_08962A00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089378D0;
L_089378D0:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0893786C; }
    goto L_089378D8;
L_089378D8:;
    v0 = LD32(v0+4);
    ST32(s1+40, v0);
    a0 = LD32(a1+8);
    v1 = a0 ^ 0x801e;
    v0 = a0 ^ 0x8014;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(a1+4); goto L_08937928; }
    goto L_08937900;
L_08937900:;
    v0 = 0x801d;
    cnd_ = a0 == v0;
    if (cnd_) { a2 = LD32(a1+4); goto L_08937928; }
    goto L_0893790C;
L_0893790C:;
    v0 = D_08AED748 - (-10424);
    goto L_08937910;
L_08937910:;
    f0 = BITSF(LD32(v0-10424));
    v0 = D_08AED74C - (-10420);
    ST32(s1+60, FBITS(f0));
    f0 = BITSF(LD32(v0-10420));
    ST32(s1+64, FBITS(f0));
    goto L_0893786C;
L_08937928:;
    v1 = D_08C2B2A8 - (-19800);
    cnd_ = a2 == s0;
    v0 = v1 - 19800;
    if (cnd_) { goto L_0893790C; }
    goto L_08937934;
L_08937934:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08937984; }
    goto L_08937958;
L_08937958:;
    a0 = LD32(a1);
    goto L_0893795C;
L_0893795C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08937A60; }
    goto L_08937974;
L_08937974:;
    a1 = LD32(a1+4);
    goto L_08937978;
L_08937978:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0893795C; }
    goto L_08937980;
L_08937980:;
    v1 = 0 + 0;
    goto L_08937984;
L_08937984:;
    cnd_ = v1 == 0;
    v0 = D_08AED748 - (-10424);
    if (cnd_) { goto L_08937910; }
    goto L_0893798C;
L_0893798C:;
    a0 = LD32(v1);
    v0 = LD32(a0-12);
    v0 = v1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089379A8; }
    goto L_089379A4;
L_089379A4:;
    a1 = LD32(v0+16);
    goto L_089379A8;
L_089379A8:;
    cnd_ = a1 == 0;
    v0 = D_08AED748 - (-10424);
    if (cnd_) { goto L_08937910; }
    goto L_089379B0;
L_089379B0:;
    v0 = LD32(a0-12);
    v0 = v1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089379C8; }
    goto L_089379C4;
L_089379C4:;
    a0 = LD32(v0+16);
    goto L_089379C8;
L_089379C8:;
    v0 = a0 + 4;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+20));
    f2 = f2 - f1;
    f3 = f3 - f0;
    f4 = f4 - f5;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AED750 - (-10416);
    f0 = BITSF(LD32(v0-10416));
    v0 = D_08AED758 - (-10408);
    f2 = BITSF(LD32(v0-10408));
    f1 = f1 * f0;
    v0 = D_08AED754 - (-10412);
    f0 = BITSF(LD32(v0-10412));
    ST32(sp+8, FBITS(f4));
    f2 = f1 + f2;
    f1 = f1 + f0;
    f2 = f2 * f2;
    f1 = f1 * f1;
    ST32(s1+64, FBITS(f2));
    ST32(s1+60, FBITS(f1));
    goto L_0893786C;
L_08937A60:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08937974; }
    goto L_08937A6C;
L_08937A6C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08937978; }
    goto L_08937A78;
L_08937A78:;
    goto L_08937984;
}

/* 08937A80 */
rv_t func_08937A80(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08937A80:;
    sp = sp - 112;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08937AF0; }
    goto L_08937AB8;
L_08937AB8:;
    v0 = v1 << 2;
    v1 = D_08AD9D00 - (-25344);
    v1 = v1 - 25344;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08937AD4u: goto L_08937AD4; case 0x08937AF0u: goto L_08937AF0; default: rs_break(0, 0x08937acc); }
L_08937AD4:;
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08937AE8;
L_08937AE8:;
    cnd_ = v0 != 0;
    ST32(sp+32, v0);
    if (cnd_) { goto L_08937F80; }
    goto L_08937AF0;
L_08937AF0:;
    v0 = s0 < 0x6u;
    goto L_08937AF4;
L_08937AF4:;
    ST32(s1+28, s0);
    cnd_ = v0 == 0;
    ST32(s1+32, 0);
    if (cnd_) { goto L_08937F70; }
    goto L_08937B00;
L_08937B00:;
    v1 = D_08AD9D18 - (-25320);
    v0 = s0 << 2;
    v1 = v1 - 25320;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08937B1Cu: goto L_08937B1C; case 0x08937C34u: goto L_08937C34; case 0x08937CECu: goto L_08937CEC; case 0x08937D50u: goto L_08937D50; case 0x08937F70u: goto L_08937F70; default: rs_break(0, 0x08937b14); }
L_08937B1C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08938564(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937B24;
L_08937B24:;
    a0 = s1 + 0;
    v0 = func_089377EC(a0);
    goto L_08937B2C;
L_08937B2C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937B4C;
L_08937B4C:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08937FB0(a0, a1);
    goto L_08937B70;
L_08937B70:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08937C20; }
    goto L_08937B78;
L_08937B78:;
    a0 = 0x8035;
    a1 = 20;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08937B8C;
L_08937B8C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08937C1C; }
    goto L_08937B94;
L_08937B94:;
    v1 = LD32(v0+24);
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    v0 = 999;
    ST32(v1, FBITS(f0));
    a0 = s1 + 0;
    a1 = 1001;
    f0 = BITSF(LD32(sp+4));
    ST32(v1+16, v0);
    a2 = s0 + 0;
    ST32(v1+4, FBITS(f0));
    ST32(v1+8, FBITS(f1));
    ST8(v1+12, 0);
    ST8(v1+13, 0);
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937BD0;
L_08937BD0:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08937C0C; }
    goto L_08937BD8;
L_08937BD8:;
    a0 = s0 + 0;
    goto L_08937BDC;
L_08937BDC:;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08937BE4;
L_08937BE4:;
    goto L_08937BE8;
L_08937BE8:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08937C0C:;
    a1 = 0 + 0;
    { rv_t r_ = func_08937A80(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937C14;
L_08937C14:;
    a0 = s0 + 0;
    goto L_08937BDC;
L_08937C1C:;
    a0 = s1 + 0;
    goto L_08937C20;
L_08937C20:;
    a1 = 0 + 0;
    goto L_08937C24;
L_08937C24:;
    { rv_t r_ = func_08937A80(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937C2C;
L_08937C2C:;
    goto L_08937BE8;
L_08937C34:;
    a0 = s1 + 0;
    func_0893850C(a0);
    goto L_08937C3C;
L_08937C3C:;
    a1 = LD32(s1+40);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08937C50;
L_08937C50:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08937C1C; }
    goto L_08937C58;
L_08937C58:;
    a0 = 0x8035;
    a1 = 20;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08937C6C;
L_08937C6C:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08937C1C; }
    goto L_08937C74;
L_08937C74:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = LD32(s3+24);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937C90;
L_08937C90:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = 999;
    ST32(s0+16, v0);
    a0 = s1 + 0;
    a1 = 1001;
    ST32(s0, FBITS(f0));
    a2 = s3 + 0;
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    ST8(s0+12, 0);
    ST8(s0+13, 0);
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937CC8;
L_08937CC8:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08937CDC; }
    goto L_08937CD4;
L_08937CD4:;
    a0 = s3 + 0;
    goto L_08937BDC;
L_08937CDC:;
    { rv_t r_ = func_08937A80(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937CE4;
L_08937CE4:;
    a0 = s3 + 0;
    goto L_08937BDC;
L_08937CEC:;
    a0 = s1 + 0;
    func_0893850C(a0);
    goto L_08937CF4;
L_08937CF4:;
    a2 = D_08B25AC0 - (23232);
    a0 = LD32(a2+23232);
    a3 = a2 + 23232;
    a1 = LD32(a3+4);
    v0 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v0;
    a0 = a0 + a1;
    v0 = a0 >> 1;
    f1 = BITSF(v0);
    v1 = D_08AED760 - (-10400);
    v0 = D_08AED75C - (-10404);
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v1-10400));
    f2 = BITSF(LD32(v0-10404));
    a1 = a1 + a0;
    f0 = f0 * f1;
    ST32(a3+4, a1);
    f0 = f0 * f2;
    ST32(a2+23232, a0);
    f0 = f0 + f2;
    ST32(s1+44, FBITS(f0));
    goto L_08937BE4;
L_08937D50:;
    s4 = D_08B25AC0 - (23232);
    a0 = s1 + 0;
    func_0893850C(a0);
    goto L_08937D5C;
L_08937D5C:;
    v1 = LD32(s4+23232);
    s5 = s4 + 23232;
    a1 = LD32(s5+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    v0 = (u32)((s32)v1 >> 16);
    a0 = v1 << 16;
    a1 = a1 + v1;
    a0 = a0 + v0;
    a0 = a0 + a1;
    v0 = a0 >> 1;
    f0 = BITSF(v0);
    v1 = v1 >> 1;
    v0 = D_08AED760 - (-10400);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    f20 = BITSF(LD32(v0-10400));
    v0 = D_08AED764 - (-10396);
    f2 = (float)(s32)FBITS(f0);
    f1 = f1 * f20;
    f0 = BITSF(LD32(v0-10396));
    ST32(s1+52, 0);
    f2 = f2 * f20;
    f1 = f1 + f0;
    s2 = s1 + 48;
    v0 = LD32(s2+4);
    f2 = f2 + f2;
    ST32(s1+56, FBITS(f1));
    {u32 a_=sp+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a1 = a1 + a0;
    f2 = f2 + f0;
    f3 = BITSF(LD32(s1+52));
    ST32(s5+4, a1);
    v1 = FBITS(f2);
    {v[12]=BITSF(v1);}
    v1 = LD32(s2+8);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(s1+48, FBITS(f2));
    fcc = FCMP(f0, f3, 2);
    cnd_ = fcc;
    ST32(s4+23232, a0);
    if (cnd_) { goto L_08937E54; }
    goto L_08937E1C;
L_08937E1C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, FBITS(f3));
    ST32(s1+48, v0);
    ST32(s2+4, v1);
    ST32(s2+8, FBITS(f3));
    goto L_08937E54;
L_08937E54:;
    a0 = 0x8035;
    a1 = 20;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08937E68;
L_08937E68:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08937F64; }
    goto L_08937E70;
L_08937E70:;
    a0 = s1 + 0;
    v0 = func_089377EC(a0);
    goto L_08937E78;
L_08937E78:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = LD32(s3+24);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937E98;
L_08937E98:;
    a2 = LD32(s4+23232);
    a0 = LD32(s5+4);
    f4 = BITSF(LD32(s2+8));
    v1 = (u32)((s32)a2 >> 16);
    a2 = a2 << 16;
    a2 = a2 + v1;
    a2 = a2 + a0;
    v1 = a2 >> 1;
    f0 = BITSF(v1);
    v1 = D_08AED768 - (-10392);
    f5 = BITSF(LD32(s1+48));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-10392));
    f3 = BITSF(LD32(s2+4));
    a0 = a0 + a2;
    f1 = f1 * f20;
    v1 = 999;
    ST32(s5+4, a0);
    a1 = 1001;
    f1 = f1 * f0;
    ST32(s4+23232, a2);
    a0 = s1 + 0;
    a2 = s3 + 0;
    f1 = f1 + f0;
    ST32(s0+16, v1);
    f4 = f4 * f1;
    f5 = f5 * f1;
    f3 = f3 * f1;
    ST8(s0+12, 0);
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f5;
    f2 = f2 + f4;
    f1 = f1 + f3;
    ST8(s0+13, 0);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937F50;
L_08937F50:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_08937BDC; }
    goto L_08937F58;
L_08937F58:;
    a0 = s1 + 0;
    a1 = 3;
    goto L_08937CDC;
L_08937F64:;
    a0 = s1 + 0;
    a1 = 3;
    goto L_08937C24;
L_08937F70:;
    a0 = s1 + 0;
    { rv_t r_ = func_08938564(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937F78;
L_08937F78:;
    goto L_08937BE8;
L_08937F80:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08937F8C;
L_08937F8C:;
    a0 = LD32(sp+32);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937F94;
L_08937F94:;
    a0 = LD32(s1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08937FA8;
L_08937FA8:;
    v0 = s0 < 0x6u;
    goto L_08937AF4;
}

/* 08937FB0 */
u32 func_08937FB0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08937FB0:;
    sp = sp - 176;
    v0 = D_08C29328 - (-27864);
    s6 = a1 + 0;
    v1 = LD32(v0-27864);
    v0 = 3;
    cnd_ = v1 == v0;
    s5 = a0 + 0;
    if (cnd_) { goto L_0893823C; }
    goto L_08937FF8;
L_08937FF8:;
    s0 = 0 + 0;
    v0 = func_089377EC(a0);
    goto L_08938000;
L_08938000:;
    a2 = D_08C2BA28 - (-17880);
    a0 = a2 - 17880;
    v1 = LD32(a0+8);
    a1 = LD32(v0+48);
    v0 = LD32(a0+4);
    v1 = v1 + 1;
    s3 = LD32(a1+12);
    ST32(a0+8, v1);
    s2 = sp + 80;
    ST32(sp+80, a0);
    ST32(sp+84, 0);
    cnd_ = v0 == 0;
    ST32(sp+88, 0);
    if (cnd_) { goto L_08938080; }
    goto L_08938034;
L_08938034:;
    a0 = LD32(a2-17880);
    a2 = v0 + 0;
    goto L_0893803C;
L_0893803C:;
    a1 = LD32(s2+4);
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08938070; }
    goto L_08938054;
L_08938054:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+88);
    if (cnd_) { goto L_08938084; }
    goto L_08938064;
L_08938064:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08938054; }
    goto L_08938070;
L_08938070:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_0893803C; }
    goto L_08938080;
L_08938080:;
    v0 = LD32(sp+88);
    goto L_08938084;
L_08938084:;
    cnd_ = v0 == 0;
    a3 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_089380D8; }
    goto L_0893808C;
L_0893808C:;
    a3 = LD32(v0);
    goto L_08938090;
L_08938090:;
    a2 = LD32(s5+36);
    a0 = s2 + 0;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == a2;
    a1 = 1;
    if (cnd_) { goto L_089380C0; }
    goto L_089380B0;
L_089380B0:;
    v0 = LD32(a3+12);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(a3+176); goto L_0893822C; }
    goto L_089380BC;
L_089380BC:;
    s0 = s0 + 1;
    goto L_089380C0;
L_089380C0:;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089380C8;
L_089380C8:;
    v0 = LD32(sp+88);
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(v0); goto L_08938090; }
    goto L_089380D4;
L_089380D4:;
    a3 = D_08B25AC0 - (23232);
    goto L_089380D8;
L_089380D8:;
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    v1 = LD32(t0+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a2 = v0 >> 1;
    { u32 x_ = a2, y_ = s0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = v1 + v0;
    ST32(t0+4, v1);
    a0 = s2 + 0;
    a1 = 1;
    ST32(a3+23232, v0);
    ST32(sp+88, 0);
    s1 = hi;
    ST32(sp+84, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08938120;
L_08938120:;
    v0 = LD32(sp+88);
    cnd_ = v0 == 0;
    s4 = (u32)-1;
    if (cnd_) { goto L_0893817C; }
    goto L_0893812C;
L_0893812C:;
    s0 = LD32(v0);
    goto L_08938130;
L_08938130:;
    v0 = LD32(s5+36);
    a0 = s2 + 0;
    a3 = LD32(s0);
    v1 = LD32(a3-16);
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    a1 = 1;
    if (cnd_) { goto L_08938168; }
    goto L_08938150;
L_08938150:;
    v0 = LD32(s0+12);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(s0+176); goto L_0893821C; }
    goto L_0893815C;
L_0893815C:;
    s1 = s1 - 1;
    goto L_08938160;
L_08938160:;
    cnd_ = s1 == s4;
    if (cnd_) { a0 = LD32(a3-12); goto L_089381D8; }
    goto L_08938168;
L_08938168:;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08938170;
L_08938170:;
    v0 = LD32(sp+88);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08938130; }
    goto L_0893817C;
L_0893817C:;
    a0 = LD32(sp+80);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089381C8; }
    goto L_08938190;
L_08938190:;
    v0 = 1;
    goto L_08938194;
L_08938194:;
    sp = sp + 176;
    return v0;
L_089381C8:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089381D0;
L_089381D0:;
    v0 = 1;
    goto L_08938194;
L_089381D8:;
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089381EC;
L_089381EC:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s6+8, FBITS(f0));
    ST32(s6, FBITS(f1));
    ST32(s6+4, FBITS(f2));
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s5+36, v1);
    goto L_0893817C;
L_0893821C:;
    cnd_ = v0 != s3;
    if (cnd_) { s1 = s1 - 1; goto L_08938160; }
    goto L_08938224;
L_08938224:;
    goto L_08938168;
L_0893822C:;
    cnd_ = v0 != s3;
    if (cnd_) { s0 = s0 + 1; goto L_089380C0; }
    goto L_08938234;
L_08938234:;
    goto L_089380C0;
L_0893823C:;
    s7 = D_08B25AC0 - (23232);
    v0 = func_089377EC(a0);
    goto L_08938244;
L_08938244:;
    v1 = LD32(v0+48);
    fp = 0 + 0;
    a0 = LD32(v1+12);
    s4 = 0 + 0;
    s1 = sp + 48;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893825C;
L_0893825C:;
    a0 = sp + 0;
    s3 = v0 + 0;
    func_0895F0BC(a0);
    goto L_08938268;
L_08938268:;
    v1 = D_08C2BAF8 - (-17672);
    s2 = v1 - 17672;
    v0 = D_08B25AC0 - (23232);
    goto L_08938274;
L_08938274:;
    v1 = LD32(s7+23232);
    v0 = v0 + 23232;
    a0 = LD32(v0+4);
    v0 = D_08B20494 - (1172);
    v0 = v0 + 1172;
    a1 = LD_U16(v0+10);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = D_08B25AC0 - (23232);
    a0 = a0 + v1;
    v0 = v0 + 23232;
    ST32(v0+4, a0);
    s0 = 1;
    a0 = 0 + 0;
    a2 = hi;
    a2 = a2 & 0xffff;
    a1 = a2 < a1;
    cnd_ = a1 == 0;
    ST32(s7+23232, v1);
    if (cnd_) { goto L_089382EC; }
    goto L_089382D0;
L_089382D0:;
    a0 = D_08B20494 - (1172);
    a0 = a0 + 1172;
    v0 = a2 << 1;
    v1 = LD32(a0+12);
    v0 = v0 + a2;
    v0 = v0 << 3;
    a0 = v1 + v0;
    goto L_089382EC;
L_089382EC:;
    v0 = LD32(s2+8);
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    v1 = LD32(s2+4);
    v0 = v0 + 1;
    ST32(s2+8, v0);
    ST32(s6, FBITS(f0));
    ST32(s6+4, FBITS(f1));
    ST32(s6+8, FBITS(f2));
    ST32(sp+48, s2);
    ST32(sp+52, 0);
    cnd_ = v1 == 0;
    ST32(sp+56, 0);
    if (cnd_) { goto L_08938378; }
    goto L_08938324;
L_08938324:;
    a1 = LD32(s1);
    a2 = LD32(a1);
    a0 = LD32(s1+4);
    goto L_08938330;
L_08938330:;
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08938360; }
    goto L_08938344;
L_08938344:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+56); goto L_0893837C; }
    goto L_08938354;
L_08938354:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08938344; }
    goto L_08938360;
L_08938360:;
    v0 = a0 + 1;
    ST32(s1+4, v0);
    v1 = LD32(a1+4);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08938330; }
    goto L_08938378;
L_08938378:;
    a0 = LD32(sp+56);
    goto L_0893837C;
L_0893837C:;
    cnd_ = a0 == 0;
    v0 = D_08AED76C - (-10388);
    if (cnd_) { goto L_08938448; }
    goto L_08938384;
L_08938384:;
    f20 = BITSF(LD32(v0-10388));
    v1 = LD32(a0);
    goto L_0893838C;
L_0893838C:;
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893842C; }
    goto L_08938394;
L_08938394:;
    v0 = LD32(v1+84);
    cnd_ = v0 == s3;
    if (cnd_) { goto L_0893842C; }
    goto L_089383A0;
L_089383A0:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089383BC;
L_089383BC:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s6));
    f3 = BITSF(LD32(s6+4));
    f4 = BITSF(LD32(s6+8));
    f2 = f2 - f0;
    f3 = f3 - f1;
    f4 = f4 - f5;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    a0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    v0 = s0 & 0x1;
    ST32(sp+64, FBITS(f2));
    fcc = FCMP(f20, f0, 12);
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f4));
    if (cnd_) { goto L_08938424; }
    goto L_08938420;
L_08938420:;
    v0 = 0 + 0;
    goto L_08938424;
L_08938424:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    goto L_0893842C;
L_0893842C:;
    a1 = 1;
    { u64 r_ = func_08ABCB74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08938434;
L_08938434:;
    a0 = LD32(sp+56);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(sp+48); goto L_0893844C; }
    goto L_08938440;
L_08938440:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0893838C; }
    goto L_08938448;
L_08938448:;
    a0 = LD32(sp+48);
    goto L_0893844C;
L_0893844C:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089384FC; }
    goto L_0893845C;
L_0893845C:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0893848C; }
    goto L_08938464;
L_08938464:;
    v0 = (s32)fp < 2;
    cnd_ = v0 == 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_0893847C; }
    goto L_08938470;
L_08938470:;
    v0 = (s32)s4 < 5;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B25AC0 - (23232); goto L_08938274; }
    goto L_0893847C;
L_0893847C:;
    a0 = sp + 0;
    func_0895F11C(a0);
    goto L_08938484;
L_08938484:;
    v0 = s0 + 0;
    goto L_08938194;
L_0893848C:;
    a0 = s5 + 0;
    v0 = func_089377EC(a0);
    goto L_08938494;
L_08938494:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893849C;
L_0893849C:;
    a0 = LD32(v0);
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(a1+20);
    t_ = v0;
    fp = fp + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089384BC;
L_089384BC:;
    a0 = s5 + 0;
    s0 = v0 + 0;
    v0 = func_089377EC(a0);
    goto L_089384C8;
L_089384C8:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_089384D0;
L_089384D0:;
    t0 = v0 + 0;
    a1 = s0 + 0;
    a0 = sp + 0;
    a2 = s6 + 0;
    a3 = 0 + 0;
    t1 = 999;
    v0 = func_0895F15C(a0, a1, a2, a3, t0, t1);
    goto L_089384EC;
L_089384EC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08938464; }
    goto L_089384F4;
L_089384F4:;
    goto L_0893847C;
L_089384FC:;
    { u64 r_ = func_08ABCCBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08938504;
L_08938504:;
    goto L_0893845C;
}

/* 0893850C */
void func_0893850C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893850C:;
    sp = sp - 16;
    a1 = a0 + 0;
    a2 = 1002;
    a3 = 0 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893852C;
L_0893852C:;
    a0 = s0 + 0;
    a1 = 1002;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08938554; }
    goto L_08938540;
L_08938540:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_08938554:;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893855C;
L_0893855C:;
    v1 = 0 < v0;
    goto L_08938540;
}

/* 08938564 */
rv_t func_08938564(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08938564:;
    sp = sp - 16;
    a1 = 1002;
    { rv_t r_ = func_0895548C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938574;
L_08938574:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08938584 */
rv_t func_08938584(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08938584:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25DAC - (23980);
    t1 = D_08C25DBC - (23996);
    t2 = D_08C25DCC - (24012);
    a1 = a1 & a0;
    v1 = t0 + 23980;
    a2 = t1 + 23996;
    cnd_ = a1 == 0;
    a3 = t2 + 24012;
    if (cnd_) { goto L_0893863C; }
    goto L_089385B4;
L_089385B4:;
    v0 = D_08AED770 - (-10384);
    f4 = BITSF(LD32(v0-10384));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+23980, FBITS(f2));
    ST32(t1+23996, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+24012, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0893863C;
L_0893863C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08938644 */
rv_t func_08938644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08938644:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08938584(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938658;
L_08938658:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08938664 */
rv_t func_08938664(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08938664:;
    sp = sp - 16;
    a2 = 1000;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893867C;
L_0893867C:;
    v0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = v0 + 23196;
    a1 = s0 + 40;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08AF8780 - (-30848);
    v0 = v0 - 30848;
    ST32(a1+8, FBITS(f0));
    a0 = s0 + 0;
    ST32(s0, v0);
    ST32(s0+40, FBITS(f2));
    ST32(a1+4, FBITS(f1));
    ST32(s0+28, 0);
    ST8(s0+36, 0);
    ST32(s0+176, 0);
    v0 = func_089389D0(a0);
    goto L_089386C4;
L_089386C4:;
    v1 = LD32(v0+48);
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089386F8; }
    goto L_089386D0;
L_089386D0:;
    v0 = D_08AED778 - (-10376);
    f0 = BITSF(LD32(v0-10376));
    goto L_089386D8;
L_089386D8:;
    ST32(s0+52, FBITS(f0));
    ST8(s0+188, 0);
    ST8(s0+180, 0);
    ST32(s0+184, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089386F8:;
    v0 = func_089389D0(a0);
    goto L_08938700;
L_08938700:;
    v1 = LD32(v0+48);
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    f0 = BITSF(LD32(v1+40));
    goto L_089386D8;
}

/* 08938718 */
rv_t func_08938718(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08938718:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = 1002;
    a0 = LD32(a0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938740;
L_08938740:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0893876C; }
    goto L_08938750;
L_08938750:;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08938758;
L_08938758:;
    v0 = 1;
    goto L_0893875C;
L_0893875C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0893876C:;
    v0 = LD32(s0+24);
    a1 = sp + 0;
    v1 = LD32(v0);
    a2 = LD32(v1+48);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938784;
L_08938784:;
    v0 = 0 + 0;
    goto L_0893875C;
}

/* 0893878C */
rv_t func_0893878C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893878C:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089387D4; }
    goto L_089387A8;
L_089387A8:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089387B0;
L_089387B0:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089387C4;
L_089387C4:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089387A8; }
    goto L_089387D4;
L_089387D4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089387E4 */
rv_t func_089387E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089387E4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089387EC */
rv_t func_089387EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089387EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089387F4 */
rv_t func_089387F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089387F4:;
    sp = sp - 32;
    v0 = 0x8037;
    s1 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08938984; }
    goto L_08938818;
L_08938818:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8038;
    if (cnd_) { goto L_089388B4; }
    goto L_08938824;
L_08938824:;
    v0 = 0x8035;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08938848; }
    goto L_08938830;
L_08938830:;
    v0 = 0 + 0;
    goto L_08938834;
L_08938834:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08938848:;
    ST32(a0+28, v0);
    a1 = 1001;
    { rv_t r_ = func_0895548C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938854;
L_08938854:;
    a0 = LD32(s0+24);
    a2 = s1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = 1001;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893886C;
L_0893886C:;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08938884; }
    goto L_08938874;
L_08938874:;
    a0 = v0 + 0;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893887C;
L_0893887C:;
    cnd_ = v0 != 0;
    a1 = LD32(sp);
    if (cnd_) { goto L_089388A4; }
    goto L_08938884;
L_08938884:;
    a0 = LD32(s0+24);
    a1 = sp + 0;
    goto L_0893888C;
L_0893888C:;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893889C;
L_0893889C:;
    v0 = 1;
    goto L_08938834;
L_089388A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089388AC;
L_089388AC:;
    v0 = 1;
    goto L_08938834;
L_089388B4:;
    cnd_ = v1 == v0;
    v0 = 0x8039;
    if (cnd_) { goto L_0893890C; }
    goto L_089388BC;
L_089388BC:;
    cnd_ = v1 != v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08938834; }
    goto L_089388C4;
L_089388C4:;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp+12, a1);
    if (cnd_) { goto L_0893889C; }
    goto L_089388D0;
L_089388D0:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089388D8;
L_089388D8:;
    a0 = LD32(sp+12);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089388E0;
L_089388E0:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089388F4;
L_089388F4:;
    v0 = LD32(s0+16);
    ST32(sp+12, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089388D0; }
    goto L_08938904;
L_08938904:;
    v0 = 1;
    goto L_08938834;
L_0893890C:;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp+8, a1);
    if (cnd_) { goto L_0893894C; }
    goto L_08938918;
L_08938918:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08938920;
L_08938920:;
    a0 = LD32(sp+8);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938928;
L_08938928:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 8;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893893C;
L_0893893C:;
    v0 = LD32(s0+16);
    ST32(sp+8, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08938918; }
    goto L_0893894C;
L_0893894C:;
    a0 = s0 + 0;
    v0 = func_089389D0(a0);
    goto L_08938954;
L_08938954:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893895C;
L_0893895C:;
    a0 = v0 + 0;
    { rv_t r_ = func_089A83D8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938964;
L_08938964:;
    v1 = 1004;
    a1 = 1005;
    if (v0 == 0) a1 = v1;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893897C;
L_0893897C:;
    v0 = 1;
    goto L_08938834;
L_08938984:;
    a1 = 1003;
    { rv_t r_ = func_0895548C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893898C;
L_0893898C:;
    a0 = LD32(s0+24);
    a2 = s1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = 1003;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089389A4;
L_089389A4:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_089389BC; }
    goto L_089389AC;
L_089389AC:;
    a0 = v0 + 0;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089389B4;
L_089389B4:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(sp+4); goto L_089388A4; }
    goto L_089389BC;
L_089389BC:;
    a0 = LD32(s0+24);
    a1 = sp + 4;
    goto L_0893888C;
}

/* 089389C8 */
rv_t func_089389C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089389C8:;
    return (rv_t){ v0, v1, f0 };
}

/* 089389D0 */
u32 func_089389D0(u32 a0)
{
    u32 v0 = 0;
L_089389D0:;
    v0 = LD32(a0+24);
    return v0;
}

/* 089389D8 */
rv_t func_089389D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089389D8:;
    sp = sp - 32;
    s1 = a0 + 0;
    f20 = f12;
    v0 = func_089389D0(a0);
    goto L_089389F8;
L_089389F8:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938A00;
L_08938A00:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+168);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938A14;
L_08938A14:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08938BE0; }
    goto L_08938A1C;
L_08938A1C:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938A24;
L_08938A24:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938A2C;
L_08938A2C:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+168);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938A40;
L_08938A40:;
    cnd_ = v0 == 0;
    f12 = f20;
    if (cnd_) { goto L_08938B48; }
    goto L_08938A48;
L_08938A48:;
    a0 = s1 + 0;
    func_089395E4(a0);
    goto L_08938A50;
L_08938A50:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938A58;
L_08938A58:;
    v1 = LD32(v0+48);
    a3 = D_08C2A6C8 - (-22840);
    a0 = LD32(v1);
    v0 = LD32(a0-16);
    v1 = v1 + v0;
    a2 = LD32(v1+4);
    v0 = 999;
    cnd_ = a2 == v0;
    a1 = a3 - 22840;
    if (cnd_) { goto L_08938AE4; }
    goto L_08938A7C;
L_08938A7C:;
    v0 = LD32(a1+4);
    v1 = LD32(a3-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { s0 = 0 + 0; goto L_08938ACC; }
    goto L_08938AA0;
L_08938AA0:;
    a0 = LD32(a1);
    goto L_08938AA4;
L_08938AA4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08938B28; }
    goto L_08938ABC;
L_08938ABC:;
    a1 = LD32(a1+4);
    goto L_08938AC0;
L_08938AC0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08938AA4; }
    goto L_08938AC8;
L_08938AC8:;
    s0 = 0 + 0;
    goto L_08938ACC;
L_08938ACC:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08938AE8; }
    goto L_08938AD4;
L_08938AD4:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08938ADC;
L_08938ADC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08938AFC; }
    goto L_08938AE4;
L_08938AE4:;
    goto L_08938AE8;
L_08938AE8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08938AFC:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938B04;
L_08938B04:;
    a0 = LD32(v0+48);
    s0 = LD32(s0+88);
    v1 = LD32(a0);
    s0 = s0 + 72;
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938B20;
L_08938B20:;
    goto L_08938AE8;
L_08938B28:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08938ABC; }
    goto L_08938B34;
L_08938B34:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08938AC0; }
    goto L_08938B40;
L_08938B40:;
    goto L_08938ACC;
L_08938B48:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938B50;
L_08938B50:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938B58;
L_08938B58:;
    v1 = LD32(v0+228);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08938B84; }
    goto L_08938B64;
L_08938B64:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938B6C;
L_08938B6C:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938B74;
L_08938B74:;
    v1 = LD32(v0+228);
    v0 = LD_U8(v1+43);
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08938BD0; }
    goto L_08938B84;
L_08938B84:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938B8C;
L_08938B8C:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938B94;
L_08938B94:;
    v1 = LD32(v0+228);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08938BB0; }
    goto L_08938BA0;
L_08938BA0:;
    f12 = f20;
    func_0893915C(a0, f12);
    goto L_08938BA8;
L_08938BA8:;
    f12 = f20;
    goto L_08938A48;
L_08938BB0:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938BB8;
L_08938BB8:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938BC0;
L_08938BC0:;
    v1 = LD32(v0+224);
    v1 = v1 ^ 0x3e7;
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08938BA0; }
    goto L_08938BD0;
L_08938BD0:;
    f12 = f20;
    func_08938C38(a0, f12);
    goto L_08938BD8;
L_08938BD8:;
    a0 = s1 + 0;
    goto L_08938BA0;
L_08938BE0:;
    a1 = s1 + 0;
    a2 = 1003;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08938BF0;
L_08938BF0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08938A1C; }
    goto L_08938BF8;
L_08938BF8:;
    v0 = LD32(v0+8);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    a1 = 1001;
    if (cnd_) { goto L_08938A1C; }
    goto L_08938C08;
L_08938C08:;
    a0 = s1 + 0;
    { rv_t r_ = func_0895548C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938C10;
L_08938C10:;
    a1 = 1003;
    a0 = s1 + 0;
    { rv_t r_ = func_0895548C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938C1C;
L_08938C1C:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938C24;
L_08938C24:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938C2C;
L_08938C2C:;
    v1 = 999;
    ST32(v0+224, v1);
    goto L_08938A1C;
}

/* 08938C38 */
void func_08938C38(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08938C38:;
    sp = sp - 192;
    s1 = a0 + 0;
    f20 = f12;
    v0 = func_089389D0(a0);
    goto L_08938C60;
L_08938C60:;
    v1 = LD32(v0+48);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08938D40; }
    goto L_08938C6C;
L_08938C6C:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938C74;
L_08938C74:;
    v1 = LD32(v0+48);
    a0 = v0 + 0;
    v0 = LD32(v1+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08939134; }
    goto L_08938C8C;
L_08938C8C:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938C94;
L_08938C94:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938C9C;
L_08938C9C:;
    a0 = s1 + 0;
    s2 = LD32(v0+228);
    v0 = func_089389D0(a0);
    goto L_08938CA8;
L_08938CA8:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08938CB0;
L_08938CB0:;
    v1 = LD_U8(s1+36);
    cnd_ = v1 == 0;
    s3 = LD32(v0+240);
    if (cnd_) { goto L_089390F0; }
    goto L_08938CBC;
L_08938CBC:;
    v0 = D_08AED77C - (-10372);
    f1 = BITSF(LD32(s1+32));
    f0 = BITSF(LD32(v0-10372));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+24); goto L_08938D1C; }
    goto L_08938CD8;
L_08938CD8:;
    v0 = D_08AED780 - (-10368);
    f0 = BITSF(LD32(v0-10368));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08938CF4; }
    goto L_08938CF0;
L_08938CF0:;
    v1 = 0 + 0;
    goto L_08938CF4;
L_08938CF4:;
    v0 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08938D40; }
    goto L_08938D04;
L_08938D04:;
    v0 = s3 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+204);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08938D44; }
    goto L_08938D18;
L_08938D18:;
    v0 = LD32(s1+24);
    goto L_08938D1C;
L_08938D1C:;
    ST32(s1+32, 0);
    a0 = LD32(v0+44);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08938D40; }
    goto L_08938D2C;
L_08938D2C:;
    v0 = func_08960A84(a0);
    goto L_08938D34;
L_08938D34:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+24); goto L_08938D5C; }
    goto L_08938D3C;
L_08938D3C:;
    goto L_08938D40;
L_08938D40:;
    goto L_08938D44;
L_08938D44:;
    sp = sp + 192;
    return;
L_08938D5C:;
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_08938D64;
L_08938D64:;
    a0 = v0 + 0;
    v0 = func_08962DAC(a0);
    goto L_08938D6C;
L_08938D6C:;
    cnd_ = v0 == 0;
    a0 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_089390E4; }
    goto L_08938D74;
L_08938D74:;
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_08938D3C; }
    goto L_08938D84;
L_08938D84:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08938DD4; }
    goto L_08938DA8;
L_08938DA8:;
    a0 = LD32(a1);
    goto L_08938DAC;
L_08938DAC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089390C4; }
    goto L_08938DC4;
L_08938DC4:;
    a1 = LD32(a1+4);
    goto L_08938DC8;
L_08938DC8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08938DAC; }
    goto L_08938DD0;
L_08938DD0:;
    v1 = 0 + 0;
    goto L_08938DD4;
L_08938DD4:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08938D40; }
    goto L_08938DDC;
L_08938DDC:;
    v0 = LD32(v1);
    f20 = BITSF(0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938DFC;
L_08938DFC:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089389D0(a0);
    goto L_08938E08;
L_08938E08:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938E28;
L_08938E28:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f3 = f3 - f0;
    f2 = f2 - f1;
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f4));
    v0 = FBITS(f3);
    a0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(a0);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    ST32(sp, FBITS(f3));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+4, FBITS(f2));
    if (cnd_) { goto L_08938EC4; }
    goto L_08938E8C;
L_08938E8C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {a0=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+16, a0);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    ST32(sp, a0);
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_08938EC4;
L_08938EC4:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08938ECC;
L_08938ECC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08938EEC;
L_08938EEC:;
    a3 = D_08B25AC0 - (23232);
    v1 = LD32(a3+23232);
    t0 = a3 + 23232;
    a1 = LD32(t0+4);
    a0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + a0;
    v1 = v1 + a1;
    a0 = (u32)((s32)v1 >> 16);
    a2 = v1 << 16;
    a1 = a1 + v1;
    a2 = a2 + a0;
    a2 = a2 + a1;
    a0 = a2 >> 1;
    v1 = v1 >> 1;
    f2 = BITSF(a0);
    f0 = BITSF(v1);
    v1 = D_08AED78C - (-10356);
    f1 = (float)(s32)FBITS(f2);
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-10356));
    v1 = D_08AED788 - (-10360);
    f2 = BITSF(LD32(v1-10360));
    f1 = f1 * f0;
    f3 = f3 * f0;
    v1 = D_08AED790 - (-10352);
    f0 = BITSF(LD32(v1-10352));
    f9 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0));
    f8 = BITSF(LD32(v0+4));
    a0 = 0 + 0;
    fcc = FCMP(f0, f1, 12);
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    f3 = f3 * f2;
    {u32 a_=sp+(112);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(a0);}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    v1 = 0xbf800000u;
    {v[2]=BITSF(v0);}
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[5]);}
    f4 = BITSF(v0);
    v0 = D_08AED784 - (-10364);
    f0 = BITSF(LD32(v0-10364));
    a1 = a1 + a2;
    {a0=FBITS(v[4]);}
    ST32(t0+4, a1);
    f6 = BITSF(a0);
    f1 = f3 + f2;
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f20));
    ST32(a3+23232, a2);
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f8));
    ST32(sp+24, FBITS(f9));
    ST32(sp+48, FBITS(f20));
    ST32(sp+64, a0);
    ST32(sp+68, FBITS(f4));
    ST32(sp+72, FBITS(f5));
    ST32(sp+32, a0);
    ST32(sp+36, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f5));
    if (cnd_) { goto L_0893900C; }
    goto L_08939008;
L_08939008:;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_0893900C;
L_0893900C:;
    f5 = f5 * f1;
    f0 = f6 * f1;
    f1 = f4 * f1;
    a1 = s1 + 40;
    f5 = f9 + f5;
    f0 = f7 + f0;
    f1 = f8 + f1;
    f2 = BITSF(LD32(s1+40));
    f3 = BITSF(LD32(a1+4));
    f4 = BITSF(LD32(a1+8));
    f2 = f0 - f2;
    f3 = f1 - f3;
    f4 = f5 - f4;
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = FBITS(f2);
    v0 = FBITS(f3);
    {v[0]=BITSF(a0);}
    a0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AED794 - (-10348);
    f0 = BITSF(LD32(v0-10348));
    ST32(sp+24, FBITS(f5));
    fcc = FCMP(f1, f0, 12);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f4));
    if (cnd_) { goto L_089390B0; }
    goto L_08939094;
L_08939094:;
    a1 = sp + 16;
    a0 = s1 + 0;
    a2 = 0 + 0;
    func_08939CB8(a0, a1, a2, 0, 0);
    goto L_089390A4;
L_089390A4:;
    v0 = 1;
    ST8(s1+36, v0);
    goto L_08938D3C;
L_089390B0:;
    a0 = s1 + 0;
    a2 = 0 + 0;
    func_08939CB8(a0, a1, a2, 0, 0);
    goto L_089390BC;
L_089390BC:;
    goto L_08938D40;
L_089390C4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08938DC4; }
    goto L_089390D0;
L_089390D0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08938DC8; }
    goto L_089390DC;
L_089390DC:;
    goto L_08938DD4;
L_089390E4:;
    ST8(s1+36, 0);
    a1 = s1 + 40;
    goto L_089390B0;
L_089390F0:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_089390F8;
L_089390F8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = s1 + 40;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939118;
L_08939118:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s1+40, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_08938CBC;
L_08939134:;
    v0 = func_08956C70(a0);
    goto L_0893913C;
L_0893913C:;
    v1 = LD_U8(v0+233);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08938C8C; }
    goto L_08939148;
L_08939148:;
    f0 = BITSF(LD32(s1+32));
    ST8(s1+36, 0);
    f0 = f0 + f20;
    ST32(s1+32, FBITS(f0));
    goto L_08938C8C;
}

/* 0893915C */
void func_0893915C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0893915C:;
    sp = sp - 48;
    s1 = a0 + 0;
    f20 = f12;
    v0 = func_089389D0(a0);
    goto L_08939184;
L_08939184:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08939330; }
    goto L_0893918C;
L_0893918C:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08939194;
L_08939194:;
    v1 = LD32(v0+48);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08939330; }
    goto L_089391A0;
L_089391A0:;
    s0 = LD32(s1+176);
    a3 = 0 + 0;
    cnd_ = s0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08939214; }
    goto L_089391B0;
L_089391B0:;
    v0 = D_08AED798 - (-10344);
    f1 = BITSF(LD32(v0-10344));
    a0 = s1 + 0;
    f0 = BITSF(LD32(a0+56));
    goto L_089391C0;
L_089391C0:;
    v0 = a2 - a3;
    v0 = v0 << 3;
    f0 = f0 + f20;
    a1 = v0 + s1;
    a2 = a2 + 1;
    cnd_ = a3 == 0;
    ST32(a0+56, FBITS(f0));
    if (cnd_) { goto L_089391EC; }
    goto L_089391DC;
L_089391DC:;
    v0 = LD32(a0+56);
    ST32(a1+56, v0);
    v1 = LD32(a0+60);
    ST32(a1+60, v1);
    goto L_089391EC;
L_089391EC:;
    f0 = BITSF(LD32(a0+56));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    a0 = a0 + 8;
    if (cnd_) { goto L_08939208; }
    goto L_08939200;
L_08939200:;
    a3 = a3 + 1;
    s0 = s0 - 1;
    goto L_08939208;
L_08939208:;
    v0 = a2 < s0;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(a0+56)); goto L_089391C0; }
    goto L_08939214;
L_08939214:;
    ST32(s1+176, s0);
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_08939220;
L_08939220:;
    v1 = LD32(v0+48);
    f0 = BITSF(LD32(s1+52));
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    f1 = BITSF(LD32(v1+40));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = s0 < 0xfu;
    if (cnd_) { goto L_089394F8; }
    goto L_08939248;
L_08939248:;
    cnd_ = v0 == 0;
    v0 = s0 << 3;
    if (cnd_) { goto L_089394F8; }
    goto L_08939250;
L_08939250:;
    v0 = v0 + s1;
    ST32(v0+56, 0);
    v1 = s0 + 1;
    f0 = BITSF(LD32(s1+52));
    ST32(s1+176, v1);
    f0 = f0 - f1;
    ST32(v0+60, FBITS(f0));
    ST32(s1+52, FBITS(f1));
    goto L_08939270;
L_08939270:;
    a1 = LD32(s1+176);
    goto L_08939274;
L_08939274:;
    f2 = BITSF(0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0893929C; }
    goto L_08939280;
L_08939280:;
    v1 = s1 + 60;
    goto L_08939284;
L_08939284:;
    f0 = BITSF(LD32(v1));
    a0 = a0 + 1;
    v0 = a0 < a1;
    f2 = f2 + f0;
    cnd_ = v0 != 0;
    v1 = v1 + 8;
    if (cnd_) { goto L_08939284; }
    goto L_0893929C;
L_0893929C:;
    v1 = D_08AED79C - (-10340);
    f0 = BITSF(LD32(v1-10340));
    v0 = LD_U8(s1+180);
    cnd_ = v0 == 0;
    f2 = f2 * f0;
    if (cnd_) { goto L_089392D8; }
    goto L_089392B0;
L_089392B0:;
    f0 = BITSF(LD32(s1+184));
    v0 = D_08AED7A0 - (-10336);
    f1 = BITSF(LD32(v0-10336));
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s1+184, FBITS(f0));
    if (cnd_) { goto L_089392D8; }
    goto L_089392D0;
L_089392D0:;
    ST8(s1+180, 0);
    ST32(s1+184, 0);
    goto L_089392D8;
L_089392D8:;
    s0 = D_08B25AC0 - (23232);
    v1 = LD32(s0+23232);
    a1 = s0 + 23232;
    a0 = LD32(a1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f1 = BITSF(v0);
    v0 = D_08AED7A8 - (-10328);
    f0 = BITSF(LD32(v0-10328));
    s3 = D_08AED7A4 - (-10332);
    a0 = a0 + v1;
    fcc = FCMP(f0, f2, 12);
    f2 = (float)(s32)FBITS(f1);
    f0 = BITSF(LD32(s3-10332));
    ST32(a1+4, a0);
    f20 = f2 * f0;
    cnd_ = fcc;
    ST32(s0+23232, v1);
    if (cnd_) { goto L_0893934C; }
    goto L_0893932C;
L_0893932C:;
    goto L_08939330;
L_08939330:;
    sp = sp + 48;
    return;
L_0893934C:;
    v0 = func_08979DF4();
    goto L_08939354;
L_08939354:;
    v1 = 2;
    cnd_ = v0 == v1;
    v0 = D_08AED7B0 - (-10320);
    if (cnd_) { goto L_089394EC; }
    goto L_08939360;
L_08939360:;
    f0 = BITSF(LD32(v0-10320));
    goto L_08939364;
L_08939364:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    v0 = LD_U8(s1+180);
    if (cnd_) { goto L_0893938C; }
    goto L_08939374;
L_08939374:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08939474; }
    goto L_0893937C;
L_0893937C:;
    v0 = 0 + 0;
    goto L_08939380;
L_08939380:;
    cnd_ = v0 == 0;
    ST8(s1+180, v1);
    if (cnd_) { goto L_0893932C; }
    goto L_08939388;
L_08939388:;
    v0 = LD_U8(s1+180);
    goto L_0893938C;
L_0893938C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08939330; }
    goto L_08939394;
L_08939394:;
    a0 = 0x8032;
    a1 = 16;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089393A8;
L_089393A8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0893932C; }
    goto L_089393B0;
L_089393B0:;
    a2 = LD32(v0+24);
    cnd_ = a2 == 0;
    v0 = 0x350000u;
    if (cnd_) { goto L_0893932C; }
    goto L_089393BC;
L_089393BC:;
    v1 = LD32(a2+8);
    a0 = LD32(a2);
    v0 = v0 | 0x807d;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a2, a0);
    a1 = s0 + 23232;
    ST32(a2+4, v0);
    ST32(a2+8, v1);
    v0 = LD32(s0+23232);
    v1 = LD32(a1+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    v1 = v1 + v0;
    ST32(s0+23232, v0);
    v0 = 24;
    a0 = s1 + 0;
    ST32(a1+4, v1);
    ST32(a2+12, v0);
    v0 = func_089389D0(a0);
    goto L_08939414;
L_08939414:;
    v1 = LD32(v0+48);
    a0 = s1 + 0;
    v0 = LD32(v1);
    a1 = LD32(v0-16);
    v1 = v1 + a1;
    v0 = LD32(v1+4);
    ST32(s2+4, v0);
    v0 = func_089389D0(a0);
    goto L_08939434;
L_08939434:;
    v1 = LD32(v0+48);
    t0 = LD32(s2+28);
    a0 = s2 + 0;
    a2 = LD32(v1);
    t0 = t0 | 0x1;
    a1 = 1;
    v0 = LD32(a2-16);
    a2 = 1;
    v1 = v1 + v0;
    a3 = LD32(v1+4);
    ST32(s2+28, t0);
    ST32(s2, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939468;
L_08939468:;
    v0 = 1;
    ST8(s1+180, v0);
    goto L_0893932C;
L_08939474:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_0893947C;
L_0893947C:;
    v1 = LD32(v0+48);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a1 = LD32(v1);
    a2 = 1;
    v0 = LD32(a1-16);
    v1 = v1 + v0;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089394A0;
L_089394A0:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0893937C; }
    goto L_089394A8;
L_089394A8:;
    a0 = LD32(v0+236);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08939380; }
    goto L_089394B4;
L_089394B4:;
    a1 = 175;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089394BC;
L_089394BC:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0893937C; }
    goto L_089394C4;
L_089394C4:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_089394CC;
L_089394CC:;
    v1 = LD32(v0+48);
    v0 = LD_U8(v1+28);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_0893937C; }
    goto L_089394DC;
L_089394DC:;
    a0 = s1 + 0;
    func_08939510(a0);
    goto L_089394E4;
L_089394E4:;
    v1 = 1;
    goto L_0893937C;
L_089394EC:;
    v0 = D_08AED7AC - (-10324);
    f0 = BITSF(LD32(v0-10324));
    goto L_08939364;
L_089394F8:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD32(s1+176); goto L_08939274; }
    goto L_08939508;
L_08939508:;
    ST32(s1+52, FBITS(f1));
    goto L_08939270;
}

/* 08939510 */
void func_08939510(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08939510:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = func_089389D0(a0);
    goto L_08939528;
L_08939528:;
    v1 = LD32(v0+48);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a1 = LD32(v1);
    a2 = 1;
    v0 = LD32(a1-16);
    v1 = v1 + v0;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893954C;
L_0893954C:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089395D0; }
    goto L_08939558;
L_08939558:;
    v0 = func_089389D0(a0);
    goto L_08939560;
L_08939560:;
    v1 = LD32(v0+48);
    a2 = LD32(s0+236);
    v1 = LD32(v1+204);
    v0 = 0 < a2;
    a0 = 0 < v1;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089395D4; }
    goto L_08939580;
L_08939580:;
    v0 = LD_U8(v1);
    a0 = a2 + 0;
    a1 = s0 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a2 = 175;
    if (cnd_) { goto L_089395D4; }
    goto L_089395A0;
L_089395A0:;
    { rv_t r_ = func_08985668(a0, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089395A8;
L_089395A8:;
    a0 = s1 + 0;
    v0 = func_089389D0(a0);
    goto L_089395B0;
L_089395B0:;
    a3 = LD32(v0+48);
    a0 = 1;
    a1 = 1;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    a2 = LD32(a3+4);
    { rv_t r_ = func_08A242DC(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089395D0;
L_089395D0:;
    goto L_089395D4;
L_089395D4:;
    sp = sp + 16;
    return;
}

/* 089395E4 */
void func_089395E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[432] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 432);
L_089395E4:;
    sp = sp - 432;
    v0 = LD32(a0+24);
    cnd_ = v0 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08939BBC; }
    goto L_08939620;
L_08939620:;
    v0 = func_089389D0(a0);
    goto L_08939628;
L_08939628:;
    v1 = LD32(v0+48);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08939BC0; }
    goto L_08939634;
L_08939634:;
    a2 = D_08C2C190 - (-15984);
    v0 = a2 - 15984;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089396AC; }
    goto L_08939660;
L_08939660:;
    a2 = LD32(a2-15984);
    a3 = a1 + 0;
    goto L_08939668;
L_08939668:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0893969C; }
    goto L_08939680;
L_08939680:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089396B0; }
    goto L_08939690;
L_08939690:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08939680; }
    goto L_0893969C;
L_0893969C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08939668; }
    goto L_089396AC;
L_089396AC:;
    v0 = LD32(sp+8);
    goto L_089396B0;
L_089396B0:;
    cnd_ = v0 == 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_08939BA4; }
    goto L_089396B8;
L_089396B8:;
    fp = D_08AED7B4 - (-10316);
    {v[0]=1.57079632679f;}
    f20 = BITSF(LD32(fp-10316));
    s5 = 0 + 0;
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a1 = 1;
    goto L_089396D0;
L_089396D0:;
    a0 = sp + 0;
    s1 = LD32(v0);
    { u64 r_ = func_08ABD538(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089396DC;
L_089396DC:;
    ST32(sp+32, 0);
    a0 = s3 + 0;
    s6 = 0 + 0;
    f3 = BITSF(LD32(sp+32));
    ST32(sp+40, FBITS(f20));
    ST32(sp+36, FBITS(f3));
    ST32(sp+20, FBITS(f3));
    ST32(sp+16, FBITS(f3));
    ST32(sp+24, FBITS(f20));
    v0 = func_089389D0(a0);
    goto L_08939704;
L_08939704:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939724;
L_08939724:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(192);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a1 = LD32(v0+32);
    v1 = LD32(v0+16);
    {u32 a_=sp+(208);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(sp+24, FBITS(f3));
    {v0=FBITS(v[17]);}
    a0 = s3 + 0;
    ST32(sp+56, FBITS(f3));
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+48, FBITS(f2));
    ST32(sp+32, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+52, v0);
    ST32(sp+36, v0);
    v0 = func_089389D0(a0);
    goto L_089397FC;
L_089397FC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893981C;
L_0893981C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+56, FBITS(f0));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939850;
L_08939850:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+40, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939878;
L_08939878:;
    f9 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0));
    f8 = BITSF(LD32(v0+4));
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f18 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+36));
    f8 = f8 * f0;
    f17 = BITSF(LD32(sp+40));
    f16 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+52));
    f15 = BITSF(LD32(sp+56));
    f9 = f9 * f0;
    f7 = f7 * f0;
    f12 = f2 + f8;
    f1 = f18 - f16;
    f2 = f2 - f4;
    f3 = f17 - f15;
    f11 = f18 + f7;
    f13 = f17 + f9;
    v0 = D_08AED7B8 - (-10312);
    f10 = BITSF(LD32(v0-10312));
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f4 = f12 - f4;
    f5 = f11 - f16;
    f6 = f13 - f15;
    fcc = FCMP(f0, f10, 12);
    f14 = BITSF(v0);
    ST32(sp+80, FBITS(f1));
    v0 = FBITS(f5);
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+84, FBITS(f2));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+88, FBITS(f3));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f6);
    ST32(sp+64, FBITS(f7));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+68, FBITS(f8));
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+72, FBITS(f9));
    ST32(sp+96, FBITS(f11));
    ST32(sp+100, FBITS(f12));
    ST32(sp+104, FBITS(f13));
    ST32(sp+80, FBITS(f5));
    ST32(sp+84, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f6));
    if (cnd_) { goto L_08939978; }
    goto L_08939968;
L_08939968:;
    fcc = FCMP(f20, f14, 12);
    cnd_ = fcc;
    if (cnd_) { s6 = 1; goto L_08939978; }
    goto L_08939978;
L_08939978:;
    fcc = FCMP(f0, f14, 12);
    cnd_ = fcc;
    s4 = 1;
    if (cnd_) { goto L_0893998C; }
    goto L_08939988;
L_08939988:;
    s4 = 0 + 0;
    goto L_0893998C;
L_0893998C:;
    f2 = f18 - f16;
    f3 = f17 - f15;
    f4 = BITSF(0);
    {u32 a_=sp+(272);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(s5);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+96, FBITS(f2));
    fcc = FCMP(f0, f4, 2);
    ST32(sp+104, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+100, FBITS(f4));
    if (cnd_) { goto L_08939A10; }
    goto L_089399D4;
L_089399D4:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+88, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, v0);
    ST32(sp+104, FBITS(f3));
    goto L_08939A10;
L_08939A10:;
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+24));
    {u32 a_=sp+(288);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[13]=BITSF(s5);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f4, 2);
    cnd_ = fcc;
    v0 = D_08AED7BC - (-10308);
    if (cnd_) { goto L_08939A94; }
    goto L_08939A4C;
L_08939A4C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    ST32(sp+24, FBITS(f2));
    {v0=FBITS(v[1]);}
    f4 = BITSF(v0);
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, v0);
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f2));
    v0 = D_08AED7BC - (-10308);
    goto L_08939A94;
L_08939A94:;
    f0 = BITSF(LD32(v0-10308));
    {u32 a_=sp+(320);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    f3 = f0;
    v0 = FBITS(f4);
    v1 = LD32(sp+100);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[6]=BITSF(v0);}
    v0 = LD32(sp+96);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+104);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    f1 = BITSF(LD32(fp-10316));
    if (cnd_) { goto L_08939B04; }
    goto L_08939AF0;
L_08939AF0:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f3 = f1;
    if (cnd_) { goto L_08939B04; }
    goto L_08939B00;
L_08939B00:;
    f3 = BITSF(v0);
    goto L_08939B04;
L_08939B04:;
    v0 = FBITS(f3);
    {u32 a_=sp+(336);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    v0 = D_08AED7C0 - (-10304);
    {u32 a_=sp+(352);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    f2 = BITSF(LD32(v0-10304));
    s2 = 1;
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { s2 = 0 + 0; goto L_08939B4C; }
    goto L_08939B4C;
L_08939B4C:;
    v1 = LD32(s1);
    v0 = LD32(v1+128);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, f15, f16, f17, f18, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939B5C;
L_08939B5C:;
    cnd_ = s6 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08939B88; }
    goto L_08939B64;
L_08939B64:;
    v0 = 0x10ed0000u;
    v0 = v0 | 0xd4e;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08939C5C; }
    goto L_08939B74;
L_08939B74:;
    cnd_ = s6 == 0;
    v0 = 0xc8d30000u;
    if (cnd_) { goto L_08939B88; }
    goto L_08939B7C;
L_08939B7C:;
    v0 = v0 | 0x46d4;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08939C00; }
    goto L_08939B88;
L_08939B88:;
    cnd_ = s7 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08939B9C; }
    goto L_08939B90;
L_08939B90:;
    v0 = LD_U8(s3+188);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08939BA4; }
    goto L_08939B9C;
L_08939B9C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_089396D0; }
    goto L_08939BA4;
L_08939BA4:;
    a0 = LD32(sp);
    ST8(s3+188, s7);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08939BF0; }
    goto L_08939BBC;
L_08939BBC:;
    goto L_08939BC0;
L_08939BC0:;
    sp = sp + 432;
    return;
L_08939BF0:;
    func_08ABD5DC(a0, 0, 0, 0);
    goto L_08939BF8;
L_08939BF8:;
    goto L_08939BC0;
L_08939C00:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08939B88; }
    goto L_08939C08;
L_08939C08:;
    v1 = LD_U8(s3+188);
    v0 = s4 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08939B88; }
    goto L_08939C18;
L_08939C18:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08939C28; }
    goto L_08939C20;
L_08939C20:;
    s7 = 1;
    goto L_08939B88;
L_08939C28:;
    a0 = s3 + 0;
    v0 = func_089389D0(a0);
    goto L_08939C30;
L_08939C30:;
    v1 = LD32(s1);
    a0 = LD32(v0+48);
    a1 = 0x511d0000u;
    v0 = LD32(v1-16);
    a1 = a1 | 0xed75;
    a3 = 1;
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939C54;
L_08939C54:;
    s7 = 1;
    goto L_08939B88;
L_08939C5C:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08939B74; }
    goto L_08939C64;
L_08939C64:;
    v1 = LD_U8(s3+188);
    v0 = s4 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08939B74; }
    goto L_08939C74;
L_08939C74:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08939C84; }
    goto L_08939C7C;
L_08939C7C:;
    s7 = 1;
    goto L_08939B74;
L_08939C84:;
    a0 = s3 + 0;
    v0 = func_089389D0(a0);
    goto L_08939C8C;
L_08939C8C:;
    v1 = LD32(s1);
    a0 = LD32(v0+48);
    a1 = 0x91f70000u;
    v0 = LD32(v1-16);
    a1 = a1 | 0x3acd;
    a3 = 1;
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939CB0;
L_08939CB0:;
    s7 = 1;
    goto L_08939B74;
}

/* 08939CB8 */
void func_08939CB8(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08939CB8:;
    sp = sp - 32;
    v0 = a2 + 0;
    a3 = 0 + 0;
    s3 = a0 + 0;
    a0 = 0x8035;
    s1 = a1 + 0;
    a2 = 0 + 0;
    a1 = 20;
    s2 = v0 & 0xff;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08939CF4;
L_08939CF4:;
    s0 = v0 + 0;
    v1 = LD32(v0+24);
    a0 = s3 + 0;
    cnd_ = v1 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08939D30; }
    goto L_08939D08;
L_08939D08:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v0 = 999;
    ST32(v1+16, v0);
    ST8(v1+12, s2);
    ST8(v1+13, 0);
    ST32(v1, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    goto L_08939D30;
L_08939D30:;
    v1 = LD32(s3);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939D40;
L_08939D40:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08939D48;
L_08939D48:;
    sp = sp + 32;
    return;
}

/* 08939D64 */
rv_t func_08939D64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08939D64:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25E5C - (24156);
    t1 = D_08C25E6C - (24172);
    t2 = D_08C25E7C - (24188);
    a1 = a1 & a0;
    v1 = t0 + 24156;
    a2 = t1 + 24172;
    cnd_ = a1 == 0;
    a3 = t2 + 24188;
    if (cnd_) { goto L_08939E1C; }
    goto L_08939D94;
L_08939D94:;
    v0 = D_08AED7C4 - (-10300);
    f4 = BITSF(LD32(v0-10300));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+24156, FBITS(f2));
    ST32(t1+24172, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+24188, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08939E1C;
L_08939E1C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08939E24 */
rv_t func_08939E24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08939E24:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08939D64(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08939E38;
L_08939E38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08939E44 */
u64 func_08939E44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08939E44:;
    sp = sp - 48;
    a2 = 1005;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08939E78;
L_08939E78:;
    v1 = 999;
    ST32(s0+40, v1);
    a3 = D_08B25AC0 - (23232);
    t0 = a3 + 23232;
    ST32(s0+36, v1);
    v1 = D_08AED7D8 - (-10280);
    v0 = LD32(a3+23232);
    a1 = LD32(t0+4);
    f3 = BITSF(LD32(v1-10280));
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + a1;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    a0 = v0 << 16;
    v1 = (u32)((s32)v0 >> 16);
    a1 = a1 + v0;
    a0 = a0 + v1;
    a0 = a0 + a1;
    f1 = (float)(s32)FBITS(f0);
    v0 = a0 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AED7D4 - (-10284);
    f1 = f1 * f3;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-10284));
    v0 = D_08AED7DC - (-10276);
    ST32(s0+32, 0);
    f1 = f1 + f0;
    f2 = f2 * f3;
    ST32(s0+44, 0);
    v1 = D_08B45A9C - (23196);
    a2 = v1 + 23196;
    ST32(s0+48, FBITS(f1));
    a1 = a1 + a0;
    f0 = BITSF(LD32(v0-10276));
    f1 = BITSF(LD32(a2+4));
    f3 = BITSF(LD32(v1+23196));
    f2 = f2 + f0;
    f0 = BITSF(LD32(a2+8));
    v0 = s0 + 52;
    ST32(v0+4, FBITS(f1));
    v1 = s0 + 92;
    a2 = 4;
    ST32(v0+8, FBITS(f0));
    v0 = D_08AF87B8 - (-30792);
    v0 = v0 - 30792;
    ST32(t0+4, a1);
    ST32(a3+23232, a0);
    ST32(s0, v0);
    ST32(s0+52, FBITS(f3));
    ST32(s0+64, FBITS(f2));
    ST32(s0+28, 0);
    ST32(s0+68, 0);
    ST32(s0+72, 0);
    ST32(s0+76, 0);
    ST32(s0+80, 0);
    ST32(s0+84, 0);
    ST32(s0+88, 0);
    goto L_08939F68;
L_08939F68:;
    a2 = a2 - 1;
    ST8(v1, 0);
    cnd_ = (s32)a2 >= 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08939F68; }
    goto L_08939F78;
L_08939F78:;
    s2 = 0x7b080000u;
    s5 = 0x8060000u;
    s7 = 0x8060000u;
    s4 = 0x7fe40000u;
    s6 = 0xf81a0000u;
    s1 = 0 + 0;
    s2 = s2 | 0x6e76;
    s5 = s5 | 0xf719;
    s7 = s7 | 0xf7ee;
    s4 = s4 | 0x2f24;
    s6 = s6 | 0xdd30;
    s3 = 1;
    goto L_08939FA8;
L_08939FA8:;
    a0 = s0 + 0;
    v0 = func_0893AC70(a0);
    goto L_08939FB0;
L_08939FB0:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_08939FB8;
L_08939FB8:;
    v1 = s1 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0+180);
    cnd_ = v1 == s2;
    v0 = s2 < v1;
    if (cnd_) { goto L_0893A034; }
    goto L_08939FCC;
L_08939FCC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0893A01C; }
    goto L_08939FD4;
L_08939FD4:;
    cnd_ = v1 == s5;
    if (cnd_) { ST8(s0+95, s3); goto L_08939FE4; }
    goto L_08939FDC;
L_08939FDC:;
    cnd_ = v1 == s7;
    if (cnd_) { ST8(s0+96, s3); goto L_08939FE4; }
    goto L_08939FE4;
L_08939FE4:;
    s1 = s1 + 1;
    goto L_08939FE8;
L_08939FE8:;
    v0 = s1 < 0x5u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08939FA8; }
    goto L_08939FF4;
L_08939FF4:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_0893A01C:;
    cnd_ = v1 == s4;
    if (cnd_) { ST8(s0+92, s3); goto L_08939FE4; }
    goto L_0893A024;
L_0893A024:;
    cnd_ = v1 == s6;
    if (cnd_) { ST8(s0+94, s3); goto L_08939FE4; }
    goto L_0893A02C;
L_0893A02C:;
    s1 = s1 + 1;
    goto L_08939FE8;
L_0893A034:;
    ST8(s0+93, s3);
    goto L_08939FE4;
}

/* 0893A03C */
rv_t func_0893A03C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893A03C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = 1006;
    a0 = LD32(a0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A064;
L_0893A064:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893A080; }
    goto L_0893A074;
L_0893A074:;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893A07C;
L_0893A07C:;
    v1 = 1;
    goto L_0893A080;
L_0893A080:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893A094 */
rv_t func_0893A094(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893A094:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_0893A0DC; }
    goto L_0893A0B0;
L_0893A0B0:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0893A0B8;
L_0893A0B8:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A0CC;
L_0893A0CC:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0893A0B0; }
    goto L_0893A0DC;
L_0893A0DC:;
    a0 = s0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893A0E4;
L_0893A0E4:;
    a0 = LD32(v0+48);
    a1 = D_08B45A9C - (23196);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = a1 + 23196;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A0FC;
L_0893A0FC:;
    a0 = s0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893A104;
L_0893A104:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893A10C;
L_0893A10C:;
    v1 = LD32(v0+172);
    a0 = s0 + 0;
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v0+172, v1);
    v0 = func_0893AC70(a0);
    goto L_0893A120;
L_0893A120:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893A128;
L_0893A128:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_0893A174; }
    goto L_0893A14C;
L_0893A14C:;
    a1 = LD32(s0+40);
    goto L_0893A150;
L_0893A150:;
    v0 = 999;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0893A168; }
    goto L_0893A15C;
L_0893A15C:;
    a0 = s0 + 0;
    { u64 r_ = func_0893C79C(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893A164;
L_0893A164:;
    goto L_0893A168;
L_0893A168:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0893A174:;
    a1 = 999;
    { rv_t r_ = func_0893C0A8(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A17C;
L_0893A17C:;
    a1 = LD32(s0+40);
    goto L_0893A150;
}

/* 0893A184 */
rv_t func_0893A184(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893A184:;
    sp = sp - 16;
    v0 = 0x8034;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_0893A1FC; }
    goto L_0893A19C;
L_0893A19C:;
    v0 = 0x806e;
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0893A1B8; }
    goto L_0893A1A8;
L_0893A1A8:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0893A1B8:;
    v0 = LD32(a0+88);
    a1 = LD32(a0+28);
    v1 = 3;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    cnd_ = a1 == v1;
    ST32(a0+88, v0);
    if (cnd_) { goto L_0893A1D8; }
    goto L_0893A1D0;
L_0893A1D0:;
    a1 = 1;
    goto L_0893A1A8;
L_0893A1D8:;
    v0 = LD32(a0+40);
    v0 = v0 ^ 0x3e7;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_0893A1EC; }
    goto L_0893A1E8;
L_0893A1E8:;
    a1 = 1;
    goto L_0893A1EC;
L_0893A1EC:;
    a2 = 0 + 0;
    { rv_t r_ = func_0893AE3C(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A1F4;
L_0893A1F4:;
    a1 = 1;
    goto L_0893A1A8;
L_0893A1FC:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    v0 = 0xb1bc0000u;
    if (cnd_) { goto L_0893A1D0; }
    goto L_0893A208;
L_0893A208:;
    a1 = LD32(a1+4);
    v0 = v0 | 0x8e33;
    cnd_ = a1 == v0;
    v0 = 0x310000u;
    if (cnd_) { goto L_0893A224; }
    goto L_0893A218;
L_0893A218:;
    v0 = v0 | 0xf42e;
    cnd_ = a1 != v0;
    a1 = 1;
    if (cnd_) { goto L_0893A1A8; }
    goto L_0893A224;
L_0893A224:;
    v1 = LD32(a2+28);
    v0 = 6;
    a0 = a2 + 0;
    cnd_ = v1 == v0;
    a1 = 4;
    if (cnd_) { goto L_0893A1EC; }
    goto L_0893A238;
L_0893A238:;
    v0 = 8;
    cnd_ = v1 != v0;
    if (cnd_) { a1 = 1; goto L_0893A1A8; }
    goto L_0893A244;
L_0893A244:;
    v0 = LD32(a2+72);
    v0 = v0 - 1;
    ST32(a2+72, v0);
    goto L_0893A1D0;
}

/* 0893A254 */
rv_t func_0893A254(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0893A254:;
    sp = sp - 80;
    s1 = a0 + 0;
    { rv_t r_ = func_0893AC78(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A270;
L_0893A270:;
    a2 = LD32(s1+40);
    v0 = a2 ^ 0x3e7;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893A310; }
    goto L_0893A280;
L_0893A280:;
    a0 = D_08C2B4CC - (-19252);
    v0 = 999;
    v1 = a0 - 19252;
    cnd_ = a2 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0893A2E4; }
    goto L_0893A294;
L_0893A294:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0893A2E4; }
    goto L_0893A2B8;
L_0893A2B8:;
    a0 = LD32(a1);
    goto L_0893A2BC;
L_0893A2BC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0893A3B4; }
    goto L_0893A2D4;
L_0893A2D4:;
    a1 = LD32(a1+4);
    goto L_0893A2D8;
L_0893A2D8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0893A2BC; }
    goto L_0893A2E0;
L_0893A2E0:;
    s0 = 0 + 0;
    goto L_0893A2E4;
L_0893A2E4:;
    a0 = s1 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893A2EC;
L_0893A2EC:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893A2F4;
L_0893A2F4:;
    v1 = 0 < v0;
    s2 = v0 + 0;
    v0 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0893A324; }
    goto L_0893A30C;
L_0893A30C:;
    goto L_0893A310;
L_0893A310:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0893A324:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A33C;
L_0893A33C:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A35C;
L_0893A35C:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A398;
L_0893A398:;
    a0 = s2 + 0;
    v1 = LD32(s2);
    v0 = LD32(v1+36);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A3AC;
L_0893A3AC:;
    goto L_0893A310;
L_0893A3B4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0893A2D4; }
    goto L_0893A3C0;
L_0893A3C0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0893A2D8; }
    goto L_0893A3CC;
L_0893A3CC:;
    goto L_0893A2E4;
}

/* 0893A3D4 */
rv_t func_0893A3D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0893A3D4:;
    sp = sp - 144;
    s1 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_0893A410; }
    goto L_0893A404;
L_0893A404:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+32)); goto L_0893A430; }
    goto L_0893A410;
L_0893A410:;
    goto L_0893A414;
L_0893A414:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_0893A430:;
    f1 = BITSF(LD32(a0+44));
    f0 = f0 + f12;
    f1 = f1 + f12;
    ST32(a0+32, FBITS(f0));
    ST32(a0+44, FBITS(f1));
    v0 = func_0893AC70(a0);
    goto L_0893A448;
L_0893A448:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893A450;
L_0893A450:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893ABDC; }
    goto L_0893A474;
L_0893A474:;
    a0 = s1 + 0;
    { rv_t r_ = func_0893AC78(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A47C;
L_0893A47C:;
    v1 = LD32(s1+28);
    v0 = v1 < 0xcu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_0893A4DC; }
    goto L_0893A48C;
L_0893A48C:;
    v1 = D_08AD9D3C - (-25284);
    v1 = v1 - 25284;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0893A410u: goto L_0893A410; case 0x0893A4A4u: goto L_0893A4A4; case 0x0893A4DCu: goto L_0893A4DC; case 0x0893A50Cu: goto L_0893A50C; case 0x0893A724u: goto L_0893A724; case 0x0893A758u: goto L_0893A758; case 0x0893A8D0u: goto L_0893A8D0; case 0x0893A940u: goto L_0893A940; case 0x0893A950u: goto L_0893A950; case 0x0893AA8Cu: goto L_0893AA8C; case 0x0893AABCu: goto L_0893AABC; default: rs_break(0, 0x0893a49c); }
L_0893A4A4:;
    v0 = LD32(s1+40);
    v0 = v0 ^ 0x3e7;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A4F8; }
    goto L_0893A4B4;
L_0893A4B4:;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893A4C4;
L_0893A4C4:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A4E0; }
    goto L_0893A4CC;
L_0893A4CC:;
    v0 = LD32(v0+8);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0893A414; }
    goto L_0893A4DC;
L_0893A4DC:;
    a0 = s1 + 0;
    goto L_0893A4E0;
L_0893A4E0:;
    a1 = 1;
    goto L_0893A4E4;
L_0893A4E4:;
    a2 = 0 + 0;
    goto L_0893A4E8;
L_0893A4E8:;
    { rv_t r_ = func_0893AE3C(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A4F0;
L_0893A4F0:;
    goto L_0893A414;
L_0893A4F8:;
    a1 = 2;
    a2 = 0 + 0;
    { rv_t r_ = func_0893AE3C(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A504;
L_0893A504:;
    a0 = s1 + 0;
    goto L_0893A4B4;
L_0893A50C:;
    a1 = LD32(s1+40);
    v0 = a1 ^ 0x3e7;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A4E0; }
    goto L_0893A51C;
L_0893A51C:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893A52C;
L_0893A52C:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0893A4DC; }
    goto L_0893A534;
L_0893A534:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A550;
L_0893A550:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893A55C;
L_0893A55C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A57C;
L_0893A57C:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f0 = f0 - f2;
    f1 = f1 - f3;
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    v0 = FBITS(f0);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp, FBITS(f0));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    ST32(sp+4, FBITS(f1));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893A5EC;
L_0893A5EC:;
    f0 = BITSF(LD32(s1+76));
    s2 = v0 + 0;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0893A608; }
    goto L_0893A604;
L_0893A604:;
    v1 = 0 + 0;
    goto L_0893A608;
L_0893A608:;
    v0 = s2 < 0x1u;
    v0 = v1 | v0;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A71C; }
    goto L_0893A61C;
L_0893A61C:;
    v1 = LD32(s2+8);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    a1 = 4;
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893A62C;
L_0893A62C:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AED7E0 - (-10272);
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893A638;
L_0893A638:;
    f0 = BITSF(LD32(v0-10272));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = D_08AED7E4 - (-10268);
    if (cnd_) { goto L_0893A670; }
    goto L_0893A64C;
L_0893A64C:;
    v0 = LD_U8(s1+92);
    cnd_ = v0 == 0;
    v0 = D_08AED7E4 - (-10268);
    if (cnd_) { goto L_0893A670; }
    goto L_0893A658;
L_0893A658:;
    v0 = LD32(s1+88);
    a0 = s1 + 0;
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    a1 = 3;
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893A66C;
L_0893A66C:;
    v0 = D_08AED7E4 - (-10268);
    goto L_0893A670;
L_0893A670:;
    f0 = BITSF(LD32(s1+44));
    f1 = BITSF(LD32(v0-10268));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0893A414; }
    goto L_0893A688;
L_0893A688:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s2 + 56;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A6A4;
L_0893A6A4:;
    f4 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s2+56));
    f3 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f2 = f2 - f4;
    f3 = f3 - f5;
    f1 = f1 - f0;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AED7E8 - (-10264);
    f0 = BITSF(LD32(v0-10264));
    ST32(sp, FBITS(f2));
    fcc = FCMP(f0, f4, 12);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    goto L_0893A708;
L_0893A708:;
    cnd_ = !fcc;
    if (cnd_) {  goto L_0893A414; }
    goto L_0893A710;
L_0893A710:;
    a0 = s1 + 0;
    goto L_0893A714;
L_0893A714:;
    a1 = 2;
    goto L_0893A4E4;
L_0893A71C:;
    a1 = 4;
    goto L_0893A4E4;
L_0893A724:;
    v0 = D_08AED7EC - (-10260);
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-10260));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0893A414; }
    goto L_0893A740;
L_0893A740:;
    v0 = LD32(s1+40);
    v0 = v0 ^ 0x3e7;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A714; }
    goto L_0893A750;
L_0893A750:;
    a1 = 1;
    goto L_0893A4E4;
L_0893A758:;
    a1 = LD32(s1+40);
    v0 = a1 ^ 0x3e7;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A4E0; }
    goto L_0893A768;
L_0893A768:;
    f1 = BITSF(LD32(s1+64));
    f2 = BITSF(LD32(s1+48));
    f3 = BITSF(LD32(s1+68));
    f1 = f1 - f20;
    f0 = BITSF(0);
    f3 = f3 - f20;
    f2 = f2 - f20;
    fcc = FCMP(f1, f0, 14);
    ST32(s1+64, FBITS(f1));
    ST32(s1+48, FBITS(f2));
    cnd_ = !fcc;
    ST32(s1+68, FBITS(f3));
    if (cnd_) { goto L_0893A7A8; }
    goto L_0893A798;
L_0893A798:;
    v0 = LD32(s1+88);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893A8B8; }
    goto L_0893A7A8;
L_0893A7A8:;
    f1 = BITSF(LD32(s1+68));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s1+48)); goto L_0893A7D4; }
    goto L_0893A7C0;
L_0893A7C0:;
    v0 = LD32(s1+88);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A8B0; }
    goto L_0893A7D0;
L_0893A7D0:;
    f1 = BITSF(LD32(s1+48));
    goto L_0893A7D4;
L_0893A7D4:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = D_08C2B4CC - (-19252); goto L_0893A7F0; }
    goto L_0893A7E4;
L_0893A7E4:;
    a0 = s1 + 0;
    a1 = 5;
    goto L_0893A4E4;
L_0893A7F0:;
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893A7FC;
L_0893A7FC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0893A4DC; }
    goto L_0893A804;
L_0893A804:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A820;
L_0893A820:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893A82C;
L_0893A82C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A84C;
L_0893A84C:;
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f3 = f3 - f1;
    f2 = f2 - f0;
    f6 = BITSF(LD32(s1+80));
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f3));
    fcc = FCMP(f6, f0, 12);
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f4));
    goto L_0893A708;
L_0893A8B0:;
    a1 = 7;
    goto L_0893A4E4;
L_0893A8B8:;
    a0 = s1 + 0;
    v0 = func_0893C11C(a0);
    goto L_0893A8C0;
L_0893A8C0:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = 6;
    goto L_0893A4E8;
L_0893A8D0:;
    f0 = BITSF(LD32(s1+64));
    f1 = BITSF(LD32(s1+68));
    a0 = s1 + 0;
    f0 = f0 - f20;
    f1 = f1 - f20;
    a1 = s1 + 0;
    a2 = 1001;
    ST32(s1+64, FBITS(f0));
    a3 = 0 + 0;
    ST32(s1+68, FBITS(f1));
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893A8FC;
L_0893A8FC:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A71C; }
    goto L_0893A904;
L_0893A904:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a1 = 4;
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893A914;
L_0893A914:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AED7F0 - (-10256);
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893A920;
L_0893A920:;
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-10256));
    goto L_0893A928;
L_0893A928:;
    fcc = FCMP(f1, f0, 12);
    goto L_0893A930;
L_0893A930:;
    cnd_ = !fcc;
    if (cnd_) {  goto L_0893A414; }
    goto L_0893A938;
L_0893A938:;
    a0 = s1 + 0;
    goto L_0893A71C;
L_0893A940:;
    v0 = D_08AED7F4 - (-10252);
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-10252));
    goto L_0893A928;
L_0893A950:;
    a1 = LD32(s1+40);
    v0 = a1 ^ 0x3e7;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A4E0; }
    goto L_0893A960;
L_0893A960:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893A970;
L_0893A970:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0893A4DC; }
    goto L_0893A978;
L_0893A978:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A994;
L_0893A994:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893A9A0;
L_0893A9A0:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893A9C0;
L_0893A9C0:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f0 = f0 - f2;
    f1 = f1 - f3;
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    v0 = FBITS(f0);
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp, FBITS(f0));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    ST32(sp+4, FBITS(f1));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893AA30;
L_0893AA30:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893AA84; }
    goto L_0893AA38;
L_0893AA38:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a1 = 8;
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893AA48;
L_0893AA48:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AED7F0 - (-10256);
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893AA54;
L_0893AA54:;
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-10256));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_0893A4E8; }
    goto L_0893AA6C;
L_0893AA6C:;
    f0 = BITSF(LD32(s1+84));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0893A414; }
    goto L_0893AA80;
L_0893AA80:;
    a0 = s1 + 0;
    goto L_0893AA84;
L_0893AA84:;
    a1 = 8;
    goto L_0893A4E4;
L_0893AA8C:;
    v0 = LD32(s1+72);
    cnd_ = (s32)v0 <= 0;
    v0 = D_08AED7F0 - (-10256);
    if (cnd_) { goto L_0893AAB0; }
    goto L_0893AA98;
L_0893AA98:;
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-10256));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0893A414; }
    goto L_0893AAB0;
L_0893AAB0:;
    a0 = s1 + 0;
    a1 = 9;
    goto L_0893A4E4;
L_0893AABC:;
    a1 = LD32(s1+40);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893AAD0;
L_0893AAD0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0893A4DC; }
    goto L_0893AAD8;
L_0893AAD8:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893AAF4;
L_0893AAF4:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893AB00;
L_0893AB00:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893AB20;
L_0893AB20:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f0 = f0 - f2;
    f1 = f1 - f3;
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    v0 = FBITS(f0);
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp, FBITS(f0));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    ST32(sp+4, FBITS(f1));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893AB90;
L_0893AB90:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893A71C; }
    goto L_0893AB98;
L_0893AB98:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a1 = 4;
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893ABA8;
L_0893ABA8:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AED7EC - (-10260);
    if (cnd_) { goto L_0893A4E4; }
    goto L_0893ABB4;
L_0893ABB4:;
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-10260));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_0893A4E8; }
    goto L_0893ABCC;
L_0893ABCC:;
    f0 = BITSF(LD32(s1+76));
    fcc = FCMP(f0, f20, 12);
    goto L_0893A930;
L_0893ABDC:;
    a1 = 10;
    a2 = 0 + 0;
    { rv_t r_ = func_0893AE3C(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893ABE8;
L_0893ABE8:;
    goto L_0893A474;
}

/* 0893ABF0 */
rv_t func_0893ABF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893ABF0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893AC04;
L_0893AC04:;
    v1 = D_08B1B550 - (-19120);
    a1 = LD32(s0+28);
    v1 = v1 - 19120;
    v0 = v0 + 52;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AED7F8 - (-10248);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-10248));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893AC40;
L_0893AC40:;
    a0 = s0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893AC48;
L_0893AC48:;
    v0 = v0 + 52;
    v1 = D_08AED7FC - (-10244);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-10244));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893AC70 */
u32 func_0893AC70(u32 a0)
{
    u32 v0 = 0;
L_0893AC70:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0893AC78 */
rv_t func_0893AC78(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893AC78:;
    sp = sp - 16;
    s2 = 999;
    s1 = 0 + 0;
    a1 = LD32(a0+40);
    cnd_ = a1 == s2;
    s0 = a0 + 0;
    if (cnd_) { goto L_0893ACF4; }
    goto L_0893ACA0;
L_0893ACA0:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893ACB0;
L_0893ACB0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0893ACDC; }
    goto L_0893ACB8;
L_0893ACB8:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD32(s0+40); goto L_0893ACF4; }
    goto L_0893ACDC;
L_0893ACDC:;
    a1 = LD32(s0+40);
    a0 = s0 + 0;
    s1 = 1;
    { u64 r_ = func_0893C79C(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893ACEC;
L_0893ACEC:;
    a1 = 999;
    ST32(s0+40, s2);
    goto L_0893ACF4;
L_0893ACF4:;
    v0 = 999;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0893AD2C; }
    goto L_0893AD00;
L_0893AD00:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0893AD18; }
    goto L_0893AD08;
L_0893AD08:;
    a1 = LD32(s0+40);
    goto L_0893AD0C;
L_0893AD0C:;
    a0 = s0 + 0;
    { rv_t r_ = func_0893C0A8(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893AD14;
L_0893AD14:;
    goto L_0893AD18;
L_0893AD18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0893AD2C:;
    a0 = s0 + 0;
    v0 = func_0893C274(a0);
    goto L_0893AD34;
L_0893AD34:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0893AD84; }
    goto L_0893AD3C;
L_0893AD3C:;
    v0 = LD32(v0+4);
    v1 = LD32(s0+88);
    ST32(s0+40, v0);
    v0 = D_08AED800 - (-10240);
    v1 = v1 | 0x1;
    f0 = BITSF(LD32(v0-10240));
    v0 = D_08AED804 - (-10236);
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+76, FBITS(f0));
    f0 = BITSF(LD32(v0-10236));
    ST32(s0+88, v1);
    ST32(s0+80, FBITS(f0));
    func_0893C878(a0);
    goto L_0893AD70;
L_0893AD70:;
    a1 = LD32(s0+40);
    a0 = s0 + 0;
    { rv_t r_ = func_0893C708(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893AD7C;
L_0893AD7C:;
    a1 = LD32(s0+40);
    goto L_0893AD0C;
L_0893AD84:;
    a0 = s0 + 0;
    { u64 r_ = func_0893C54C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893AD8C;
L_0893AD8C:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0893AD00; }
    goto L_0893AD94;
L_0893AD94:;
    v0 = LD32(s0+88);
    v1 = LD32(a1+4);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+40, v1);
    ST32(s0+88, v0);
    a0 = LD32(a1+8);
    v1 = a0 ^ 0x801e;
    v0 = a0 ^ 0x8014;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0893AE34; }
    goto L_0893ADC8;
L_0893ADC8:;
    v0 = 0x801d;
    cnd_ = a0 == v0;
    if (cnd_) { a2 = 1; goto L_0893ADD4; }
    goto L_0893ADD4;
L_0893ADD4:;
    v0 = LD32(s0+88);
    v0 = (v0 & ~(0x1u << 3)) | ((a2 & 0x1) << 3);
    v1 = v0 & 0x8;
    cnd_ = v1 == 0;
    ST32(s0+88, v0);
    if (cnd_) { goto L_0893AE0C; }
    goto L_0893ADE8;
L_0893ADE8:;
    a1 = LD32(a1+4);
    a0 = s0 + 0;
    func_0893C9C4(a0, a1);
    goto L_0893ADF4;
L_0893ADF4:;
    a1 = LD32(s0+40);
    goto L_0893ADF8;
L_0893ADF8:;
    a0 = s0 + 0;
    s1 = 1;
    { rv_t r_ = func_0893C708(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893AE04;
L_0893AE04:;
    goto L_0893AD00;
L_0893AE0C:;
    v0 = D_08AED800 - (-10240);
    f0 = BITSF(LD32(v0-10240));
    v0 = D_08AED804 - (-10236);
    a0 = s0 + 0;
    ST32(s0+76, FBITS(f0));
    f0 = BITSF(LD32(v0-10236));
    ST32(s0+80, FBITS(f0));
    func_0893C878(a0);
    goto L_0893AE2C;
L_0893AE2C:;
    a1 = LD32(s0+40);
    goto L_0893ADF8;
L_0893AE34:;
    a2 = 1;
    goto L_0893ADD4;
}

/* 0893AE3C */
rv_t func_0893AE3C(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_0893AE3C:;
    sp = sp - 272;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0xcu;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0893AF04; }
    goto L_0893AE78;
L_0893AE78:;
    v0 = v1 << 2;
    v1 = D_08AD9E5C - (-24996);
    v1 = v1 - 24996;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0893AE94u: goto L_0893AE94; case 0x0893AF04u: goto L_0893AF04; case 0x0893B86Cu: goto L_0893B86C; case 0x0893B8ACu: goto L_0893B8AC; case 0x0893B904u: goto L_0893B904; case 0x0893B960u: goto L_0893B960; default: rs_break(0, 0x0893ae8c); }
L_0893AE94:;
    t1 = D_08B25AC0 - (23232);
    v1 = LD32(t1+23232);
    t2 = t1 + 23232;
    t0 = LD32(t2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + t0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AED80C - (-10228);
    t0 = t0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-10228));
    v0 = D_08AED808 - (-10232);
    ST32(t2+4, t0);
    f1 = f1 * f0;
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0-10232));
    a1 = s1 + 0;
    a2 = 1001;
    f1 = f1 + f0;
    a3 = 0 + 0;
    ST32(t1+23232, v1);
    ST32(s1+48, FBITS(f1));
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893AEFC;
L_0893AEFC:;
    cnd_ = v0 != 0;
    ST32(sp+48, v0);
    if (cnd_) { goto L_0893B838; }
    goto L_0893AF04;
L_0893AF04:;
    v0 = s0 < 0xcu;
    goto L_0893AF08;
L_0893AF08:;
    ST32(s1+28, s0);
    cnd_ = v0 == 0;
    ST32(s1+32, 0);
    if (cnd_) { goto L_0893B828; }
    goto L_0893AF14;
L_0893AF14:;
    v1 = D_08AD9E8C - (-24948);
    v0 = s0 << 2;
    v1 = v1 - 24948;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0893AF30u: goto L_0893AF30; case 0x0893B058u: goto L_0893B058; case 0x0893B118u: goto L_0893B118; case 0x0893B17Cu: goto L_0893B17C; case 0x0893B18Cu: goto L_0893B18C; case 0x0893B4A8u: goto L_0893B4A8; case 0x0893B4FCu: goto L_0893B4FC; case 0x0893B5FCu: goto L_0893B5FC; case 0x0893B658u: goto L_0893B658; case 0x0893B810u: goto L_0893B810; case 0x0893B828u: goto L_0893B828; default: rs_break(0, 0x0893af28); }
L_0893AF30:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C05C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893AF38;
L_0893AF38:;
    v0 = LD32(s1+88);
    a0 = s1 + 0;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s1+88, v0);
    v0 = func_0893AC70(a0);
    goto L_0893AF4C;
L_0893AF4C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893AF6C;
L_0893AF6C:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_0893B99C(a0, a1);
    goto L_0893AF90;
L_0893AF90:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893B044; }
    goto L_0893AF98;
L_0893AF98:;
    a0 = 0x8035;
    a1 = 20;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893AFAC;
L_0893AFAC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0893B040; }
    goto L_0893AFB4;
L_0893AFB4:;
    v1 = LD32(v0+24);
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    v0 = 999;
    ST32(v1, FBITS(f0));
    a0 = s1 + 0;
    a1 = 1001;
    f0 = BITSF(LD32(sp+4));
    ST32(v1+16, v0);
    a2 = s0 + 0;
    ST32(v1+4, FBITS(f0));
    ST32(v1+8, FBITS(f1));
    ST8(v1+12, 0);
    ST8(v1+13, 0);
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893AFF0;
L_0893AFF0:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893B02C; }
    goto L_0893AFF8;
L_0893AFF8:;
    a0 = s0 + 0;
    goto L_0893AFFC;
L_0893AFFC:;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B004;
L_0893B004:;
    goto L_0893B008;
L_0893B008:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_0893B02C:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0893AE3C(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B038;
L_0893B038:;
    a0 = s0 + 0;
    goto L_0893AFFC;
L_0893B040:;
    a0 = s1 + 0;
    goto L_0893B044;
L_0893B044:;
    a1 = 0 + 0;
    goto L_0893B048;
L_0893B048:;
    a2 = 0 + 0;
    { rv_t r_ = func_0893AE3C(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B050;
L_0893B050:;
    goto L_0893B008;
L_0893B058:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C010(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B060;
L_0893B060:;
    a1 = LD32(s1+40);
    ST32(s1+44, 0);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B078;
L_0893B078:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0893B040; }
    goto L_0893B080;
L_0893B080:;
    a0 = 0x8035;
    a1 = 20;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B094;
L_0893B094:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0893B040; }
    goto L_0893B09C;
L_0893B09C:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = LD32(s3+24);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B0B8;
L_0893B0B8:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = 999;
    ST32(s0+16, v0);
    v0 = 1;
    a0 = s1 + 0;
    ST32(s0, FBITS(f0));
    a1 = 1001;
    a2 = s3 + 0;
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    ST8(s0+13, v0);
    ST8(s0+12, 0);
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B0F4;
L_0893B0F4:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0893B108; }
    goto L_0893B100;
L_0893B100:;
    a0 = s3 + 0;
    goto L_0893AFFC;
L_0893B108:;
    a2 = 0 + 0;
    { rv_t r_ = func_0893AE3C(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B110;
L_0893B110:;
    a0 = s3 + 0;
    goto L_0893AFFC;
L_0893B118:;
    v0 = LD32(s1+88);
    a0 = 0x803a;
    a1 = 4;
    v0 = v0 | 0x6;
    ST32(s1+88, v0);
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B138;
L_0893B138:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_0893B040; }
    goto L_0893B140;
L_0893B140:;
    v1 = LD32(v0+24);
    v0 = 0x1b670000u;
    v0 = v0 | 0x90dc;
    ST32(v1, v0);
    a0 = t0 + 0;
    v0 = 2;
    v1 = LD32(s1+24);
    a1 = 1;
    a2 = 1;
    a3 = LD32(v1+4);
    ST32(t0, v0);
    goto L_0893B16C;
L_0893B16C:;
    ST32(t0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B174;
L_0893B174:;
    goto L_0893B008;
L_0893B17C:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C010(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B184;
L_0893B184:;
    goto L_0893B008;
L_0893B18C:;
    s4 = D_08B25AC0 - (23232);
    a0 = s1 + 0;
    { u64 r_ = func_0893C010(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B198;
L_0893B198:;
    v0 = LD32(s4+23232);
    s5 = s4 + 23232;
    a1 = LD32(s5+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = (u32)((s32)v0 >> 16);
    a0 = v0 << 16;
    a1 = a1 + v0;
    a0 = a0 + v1;
    a0 = a0 + a1;
    v1 = a0 >> 1;
    f0 = BITSF(v1);
    v0 = v0 >> 1;
    v1 = D_08AED80C - (-10228);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f20 = BITSF(LD32(v1-10228));
    v0 = D_08AED818 - (-10216);
    f2 = (float)(s32)FBITS(f0);
    f1 = f1 * f20;
    f0 = BITSF(LD32(v0-10216));
    ST32(s1+56, 0);
    f2 = f2 * f20;
    f1 = f1 + f0;
    s2 = s1 + 52;
    f3 = BITSF(LD32(s1+56));
    f2 = f2 + f2;
    ST32(s1+60, FBITS(f1));
    {u32 a_=sp+(64);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a1 = a1 + a0;
    f2 = f2 + f0;
    v1 = LD32(s2+8);
    ST32(s5+4, a1);
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = LD32(s2+4);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(s1+52, FBITS(f2));
    fcc = FCMP(f0, f3, 2);
    cnd_ = fcc;
    ST32(s4+23232, a0);
    if (cnd_) { goto L_0893B290; }
    goto L_0893B258;
L_0893B258:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp, v1);
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    ST32(s1+52, v1);
    ST32(s2+4, v0);
    ST32(s2+8, FBITS(f3));
    goto L_0893B290;
L_0893B290:;
    a0 = s1 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893B298;
L_0893B298:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893B2A0;
L_0893B2A0:;
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B2C0;
L_0893B2C0:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(96);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+52);
    v0 = LD32(s2+4);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(80);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(s2+8);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[17]);}
    ST32(s1+52, v1);
    a0 = 0x8035;
    a1 = 20;
    ST32(s2+4, v0);
    a2 = 0 + 0;
    a3 = 0 + 0;
    ST32(s2+8, FBITS(f3));
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    ST32(sp, v1);
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B3A0;
L_0893B3A0:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0893B49C; }
    goto L_0893B3A8;
L_0893B3A8:;
    a0 = s1 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893B3B0;
L_0893B3B0:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = LD32(s3+24);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B3D0;
L_0893B3D0:;
    a2 = LD32(s4+23232);
    a0 = LD32(s5+4);
    f4 = BITSF(LD32(s2+8));
    v1 = (u32)((s32)a2 >> 16);
    a2 = a2 << 16;
    a2 = a2 + v1;
    a2 = a2 + a0;
    v1 = a2 >> 1;
    f0 = BITSF(v1);
    v1 = D_08AED81C - (-10212);
    f5 = BITSF(LD32(s1+52));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-10212));
    f3 = BITSF(LD32(s2+4));
    a0 = a0 + a2;
    f1 = f1 * f20;
    ST32(s5+4, a0);
    a1 = 1001;
    a0 = s1 + 0;
    f1 = f1 + f0;
    ST32(s4+23232, a2);
    a2 = s3 + 0;
    f4 = f4 * f1;
    f5 = f5 * f1;
    f3 = f3 * f1;
    ST32(sp+8, FBITS(f4));
    ST32(sp, FBITS(f5));
    ST32(sp+4, FBITS(f3));
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = f2 + f4;
    f0 = f0 + f5;
    f1 = f1 + f3;
    v0 = 999;
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(s0+16, v0);
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    goto L_0893B478;
L_0893B478:;
    ST8(s0+12, 0);
    ST8(s0+13, 0);
    goto L_0893B480;
L_0893B480:;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B488;
L_0893B488:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_0893AFFC; }
    goto L_0893B490;
L_0893B490:;
    a0 = s1 + 0;
    a1 = 4;
    goto L_0893B108;
L_0893B49C:;
    a0 = s1 + 0;
    goto L_0893B4A0;
L_0893B4A0:;
    a1 = 4;
    goto L_0893B048;
L_0893B4A8:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C010(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B4B0;
L_0893B4B0:;
    cnd_ = s2 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893B4A0; }
    goto L_0893B4B8;
L_0893B4B8:;
    a0 = 0x803a;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B4CC;
L_0893B4CC:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_0893B49C; }
    goto L_0893B4D4;
L_0893B4D4:;
    v0 = LD32(v0+24);
    v1 = LD32(s1+24);
    a0 = t0 + 0;
    ST32(v0, s2);
    v0 = 2;
    a1 = 1;
    a3 = LD32(v1+4);
    ST32(t0, v0);
    a2 = 1;
    goto L_0893B16C;
L_0893B4FC:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C010(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B504;
L_0893B504:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    t0 = a2 + 23232;
    a1 = LD32(t0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    v0 = 10;
    a0 = v1 >> 1;
    { u32 x_ = a0, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    ST32(t0+4, a1);
    ST32(a2+23232, v1);
    a3 = hi;
    a3 = a3 + 1;
    v0 = (s32)a3 < 6;
    cnd_ = v0 == 0;
    ST32(s1+72, a3);
    if (cnd_) { goto L_0893B5E8; }
    goto L_0893B550;
L_0893B550:;
    v0 = 1;
    goto L_0893B554;
L_0893B554:;
    ST32(s1+72, v0);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a1 = LD32(s1+40);
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B56C;
L_0893B56C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0893B49C; }
    goto L_0893B574;
L_0893B574:;
    a0 = 0x8035;
    a1 = 20;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B588;
L_0893B588:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0893B49C; }
    goto L_0893B590;
L_0893B590:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = LD32(s3+24);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B5AC;
L_0893B5AC:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = 999;
    ST32(s0+16, v0);
    a0 = s1 + 0;
    v0 = 1;
    a1 = 1001;
    a2 = s3 + 0;
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    ST8(s0+13, v0);
    ST8(s0+12, 0);
    goto L_0893B480;
L_0893B5E8:;
    v0 = (s32)a3 < 8;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 3; goto L_0893B554; }
    goto L_0893B5F4;
L_0893B5F4:;
    v0 = 2;
    goto L_0893B554;
L_0893B5FC:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C010(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B604;
L_0893B604:;
    a0 = s1 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893B60C;
L_0893B60C:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893B614;
L_0893B614:;
    v1 = LD32(v0+204);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0893B630; }
    goto L_0893B620;
L_0893B620:;
    v0 = LD_U8(v1);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0+4);
    goto L_0893B630;
L_0893B630:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893B4A0; }
    goto L_0893B638;
L_0893B638:;
    a0 = s1 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893B640;
L_0893B640:;
    a2 = LD32(v0+4);
    a1 = LD_U8(s1+72);
    a0 = 0 + 0;
    { rv_t r_ = func_08A242DC(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B650;
L_0893B650:;
    goto L_0893B008;
L_0893B658:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C010(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B660;
L_0893B660:;
    a1 = LD32(s1+40);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B674;
L_0893B674:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0893B49C; }
    goto L_0893B67C;
L_0893B67C:;
    a0 = 0x8035;
    a1 = 20;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B690;
L_0893B690:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0893B49C; }
    goto L_0893B698;
L_0893B698:;
    a0 = s1 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893B6A0;
L_0893B6A0:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893B6A8;
L_0893B6A8:;
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B6C8;
L_0893B6C8:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B6E8;
L_0893B6E8:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f5 = f5 - f2;
    f4 = f4 - f1;
    f3 = f3 - f0;
    {u32 a_=sp+(208);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    v0 = FBITS(f4);
    v1 = FBITS(f3);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_0893B784; }
    goto L_0893B74C;
L_0893B74C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp, v1);
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_0893B784;
L_0893B784:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = LD32(s3+24);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B7A0;
L_0893B7A0:;
    f0 = BITSF(LD32(s1+76));
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f2 = f2 * f0;
    a0 = s1 + 0;
    ST32(sp+32, FBITS(f5));
    a1 = 1001;
    a2 = s3 + 0;
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f2));
    f0 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f5;
    f3 = f3 + f2;
    f1 = f1 + f4;
    v0 = 999;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    ST32(s0+16, v0);
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f3));
    goto L_0893B478;
L_0893B810:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C05C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B818;
L_0893B818:;
    v0 = LD32(s1+8);
    v0 = v0 | 0x8;
    ST32(s1+8, v0);
    goto L_0893B004;
L_0893B828:;
    a0 = s1 + 0;
    { u64 r_ = func_0893C05C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B830;
L_0893B830:;
    goto L_0893B008;
L_0893B838:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0893B844;
L_0893B844:;
    a0 = LD32(sp+48);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B84C;
L_0893B84C:;
    a0 = LD32(s1+24);
    a1 = sp + 48;
    goto L_0893B854;
L_0893B854:;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B864;
L_0893B864:;
    v0 = s0 < 0xcu;
    goto L_0893AF08;
L_0893B86C:;
    ST32(s1+68, 0);
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B884;
L_0893B884:;
    cnd_ = v0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_0893AF04; }
    goto L_0893B88C;
L_0893B88C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0893B898;
L_0893B898:;
    a0 = LD32(sp+52);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B8A0;
L_0893B8A0:;
    a0 = LD32(s1+24);
    a1 = sp + 52;
    goto L_0893B854;
L_0893B8AC:;
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
    v0 = D_08AED80C - (-10228);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-10228));
    v0 = D_08AED810 - (-10224);
    ST32(a2+4, a0);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-10224));
    ST32(a1+23232, v1);
    f1 = f1 + f0;
    ST32(s1+64, FBITS(f1));
    goto L_0893AF04;
L_0893B904:;
    a2 = D_08B25AC0 - (23232);
    a0 = LD32(a2+23232);
    a3 = a2 + 23232;
    a1 = LD32(a3+4);
    v0 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v0;
    a0 = a0 + a1;
    v1 = a0 >> 1;
    f1 = BITSF(v1);
    v1 = D_08AED80C - (-10228);
    v0 = D_08AED814 - (-10220);
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v1-10228));
    f2 = BITSF(LD32(v0-10220));
    a1 = a1 + a0;
    f0 = f0 * f1;
    ST32(a3+4, a1);
    f0 = f0 * f2;
    ST32(a2+23232, a0);
    f0 = f0 + f2;
    ST32(s1+68, FBITS(f0));
    goto L_0893AF04;
L_0893B960:;
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1001;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893B974;
L_0893B974:;
    cnd_ = v0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_0893AF04; }
    goto L_0893B97C;
L_0893B97C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0893B988;
L_0893B988:;
    a0 = LD32(sp+56);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893B990;
L_0893B990:;
    a0 = LD32(s1+24);
    a1 = sp + 56;
    goto L_0893B854;
}

/* 0893B99C */
u32 func_0893B99C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_0893B99C:;
    sp = sp - 176;
    v0 = D_08C29328 - (-27864);
    s5 = a0 + 0;
    v1 = LD32(v0-27864);
    v0 = 3;
    cnd_ = v1 == v0;
    s4 = a1 + 0;
    if (cnd_) { goto L_0893BD48; }
    goto L_0893B9E4;
L_0893B9E4:;
    s1 = 0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893B9EC;
L_0893B9EC:;
    a2 = D_08C2BA28 - (-17880);
    a0 = a2 - 17880;
    v1 = LD32(a0+8);
    a1 = LD32(v0+48);
    v0 = LD32(a0+4);
    v1 = v1 + 1;
    s3 = LD32(a1+12);
    ST32(a0+8, v1);
    s2 = 0 + 0;
    s0 = sp + 80;
    ST32(sp+80, a0);
    ST32(sp+84, 0);
    cnd_ = v0 == 0;
    ST32(sp+88, 0);
    if (cnd_) { goto L_0893BA70; }
    goto L_0893BA24;
L_0893BA24:;
    a0 = LD32(a2-17880);
    a2 = v0 + 0;
    goto L_0893BA2C;
L_0893BA2C:;
    a1 = LD32(s0+4);
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s0+8, v1);
    if (cnd_) { goto L_0893BA60; }
    goto L_0893BA44;
L_0893BA44:;
    v1 = LD32(s0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+88);
    if (cnd_) { goto L_0893BA74; }
    goto L_0893BA54;
L_0893BA54:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_0893BA44; }
    goto L_0893BA60;
L_0893BA60:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_0893BA2C; }
    goto L_0893BA70;
L_0893BA70:;
    v0 = LD32(sp+88);
    goto L_0893BA74;
L_0893BA74:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+80);
    if (cnd_) { goto L_0893BB04; }
    goto L_0893BA7C;
L_0893BA7C:;
    a2 = LD32(v0);
    goto L_0893BA80;
L_0893BA80:;
    t0 = LD32(s5+36);
    a0 = s0 + 0;
    a3 = LD32(a2);
    v0 = LD32(a3-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == t0;
    a1 = 1;
    if (cnd_) { goto L_0893BAB0; }
    goto L_0893BAA0;
L_0893BAA0:;
    v0 = LD32(a2+12);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(a2+176); goto L_0893BD38; }
    goto L_0893BAAC;
L_0893BAAC:;
    s1 = s1 + 1;
    goto L_0893BAB0;
L_0893BAB0:;
    v0 = LD_U8(a2+5);
    goto L_0893BAB4;
L_0893BAB4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893BAE0; }
    goto L_0893BABC;
L_0893BABC:;
    v0 = LD_U8(a2+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893BAE0; }
    goto L_0893BAC8;
L_0893BAC8:;
    v0 = LD32(a3-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    v1 = v1 ^ t0;
    v1 = 0 < v1;
    s2 = s2 + v1;
    goto L_0893BAE0;
L_0893BAE0:;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BAE8;
L_0893BAE8:;
    v0 = LD32(sp+88);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(v0); goto L_0893BA80; }
    goto L_0893BAF4;
L_0893BAF4:;
    cnd_ = s1 != 0;
    a3 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_0893BC7C; }
    goto L_0893BAFC;
L_0893BAFC:;
    cnd_ = s2 != 0;
    a0 = LD32(sp+80);
    if (cnd_) { goto L_0893BB5C; }
    goto L_0893BB04;
L_0893BB04:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893BB4C; }
    goto L_0893BB14;
L_0893BB14:;
    v0 = 0 + 0;
    goto L_0893BB18;
L_0893BB18:;
    sp = sp + 176;
    return v0;
L_0893BB4C:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BB54;
L_0893BB54:;
    v0 = 0 + 0;
    goto L_0893BB18;
L_0893BB5C:;
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    v1 = LD32(t0+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a2 = v0 >> 1;
    { u32 x_ = a2, y_ = s2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = v1 + v0;
    ST32(t0+4, v1);
    a0 = s0 + 0;
    a1 = 1;
    ST32(a3+23232, v0);
    ST32(sp+88, 0);
    s2 = hi;
    ST32(sp+84, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BBA4;
L_0893BBA4:;
    v0 = LD32(sp+88);
    cnd_ = v0 == 0;
    s3 = (u32)-1;
    if (cnd_) { goto L_0893BC0C; }
    goto L_0893BBB0;
L_0893BBB0:;
    s1 = LD32(v0);
    goto L_0893BBB4;
L_0893BBB4:;
    a0 = s0 + 0;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0893BBF8; }
    goto L_0893BBC4;
L_0893BBC4:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893BBF8; }
    goto L_0893BBD0;
L_0893BBD0:;
    a3 = LD32(s1);
    v0 = LD32(s5+36);
    v1 = LD32(a3-16);
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    if (cnd_) { goto L_0893BBF8; }
    goto L_0893BBEC;
L_0893BBEC:;
    s2 = s2 - 1;
    cnd_ = s2 == s3;
    if (cnd_) { a0 = LD32(a3-12); goto L_0893BC38; }
    goto L_0893BBF8;
L_0893BBF8:;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BC00;
L_0893BC00:;
    v0 = LD32(sp+88);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_0893BBB4; }
    goto L_0893BC0C;
L_0893BC0C:;
    a0 = LD32(sp+80);
    goto L_0893BC10;
L_0893BC10:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893BC28; }
    goto L_0893BC20;
L_0893BC20:;
    v0 = 1;
    goto L_0893BB18;
L_0893BC28:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BC30;
L_0893BC30:;
    v0 = 1;
    goto L_0893BB18;
L_0893BC38:;
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893BC4C;
L_0893BC4C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s5+36, v1);
    goto L_0893BC0C;
L_0893BC7C:;
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    v1 = LD32(t0+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a2 = v0 >> 1;
    { u32 x_ = a2, y_ = s1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = v1 + v0;
    ST32(t0+4, v1);
    a0 = s0 + 0;
    a1 = 1;
    ST32(a3+23232, v0);
    ST32(sp+88, 0);
    s2 = hi;
    ST32(sp+84, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BCC4;
L_0893BCC4:;
    v0 = LD32(sp+88);
    cnd_ = v0 == 0;
    s6 = (u32)-1;
    if (cnd_) { goto L_0893BC0C; }
    goto L_0893BCD0;
L_0893BCD0:;
    s1 = LD32(v0);
    goto L_0893BCD4;
L_0893BCD4:;
    v0 = LD32(s5+36);
    a0 = s0 + 0;
    a3 = LD32(s1);
    v1 = LD32(a3-16);
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    a1 = 1;
    if (cnd_) { goto L_0893BD0C; }
    goto L_0893BCF4;
L_0893BCF4:;
    v0 = LD32(s1+12);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(s1+176); goto L_0893BD28; }
    goto L_0893BD00;
L_0893BD00:;
    s2 = s2 - 1;
    goto L_0893BD04;
L_0893BD04:;
    cnd_ = s2 == s6;
    if (cnd_) { a0 = LD32(a3-12); goto L_0893BC38; }
    goto L_0893BD0C;
L_0893BD0C:;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BD14;
L_0893BD14:;
    v0 = LD32(sp+88);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_0893BCD4; }
    goto L_0893BD20;
L_0893BD20:;
    a0 = LD32(sp+80);
    goto L_0893BC10;
L_0893BD28:;
    cnd_ = v0 != s3;
    if (cnd_) { s2 = s2 - 1; goto L_0893BD04; }
    goto L_0893BD30;
L_0893BD30:;
    goto L_0893BD0C;
L_0893BD38:;
    cnd_ = v0 != s3;
    if (cnd_) { s1 = s1 + 1; goto L_0893BAB0; }
    goto L_0893BD40;
L_0893BD40:;
    v0 = LD_U8(a2+5);
    goto L_0893BAB4;
L_0893BD48:;
    s7 = D_08B25AC0 - (23232);
    v0 = func_0893AC70(a0);
    goto L_0893BD50;
L_0893BD50:;
    v1 = LD32(v0+48);
    fp = 0 + 0;
    a0 = LD32(v1+12);
    s6 = 0 + 0;
    s1 = sp + 48;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BD68;
L_0893BD68:;
    a0 = sp + 0;
    s2 = v0 + 0;
    func_0895F0BC(a0);
    goto L_0893BD74;
L_0893BD74:;
    v1 = D_08C2BAF8 - (-17672);
    s3 = v1 - 17672;
    v0 = D_08B25AC0 - (23232);
    goto L_0893BD80;
L_0893BD80:;
    v1 = LD32(s7+23232);
    v0 = v0 + 23232;
    a0 = LD32(v0+4);
    v0 = D_08B20494 - (1172);
    v0 = v0 + 1172;
    a1 = LD_U16(v0+10);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = D_08B25AC0 - (23232);
    a0 = a0 + v1;
    v0 = v0 + 23232;
    ST32(v0+4, a0);
    s0 = 1;
    a0 = 0 + 0;
    a2 = hi;
    a2 = a2 & 0xffff;
    a1 = a2 < a1;
    cnd_ = a1 == 0;
    ST32(s7+23232, v1);
    if (cnd_) { goto L_0893BDF8; }
    goto L_0893BDDC;
L_0893BDDC:;
    a0 = D_08B20494 - (1172);
    a0 = a0 + 1172;
    v0 = a2 << 1;
    v1 = LD32(a0+12);
    v0 = v0 + a2;
    v0 = v0 << 3;
    a0 = v1 + v0;
    goto L_0893BDF8;
L_0893BDF8:;
    v0 = LD32(s3+8);
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    v1 = LD32(s3+4);
    v0 = v0 + 1;
    ST32(s3+8, v0);
    ST32(s4, FBITS(f0));
    ST32(s4+4, FBITS(f1));
    ST32(s4+8, FBITS(f2));
    ST32(sp+48, s3);
    ST32(sp+52, 0);
    cnd_ = v1 == 0;
    ST32(sp+56, 0);
    if (cnd_) { goto L_0893BE84; }
    goto L_0893BE30;
L_0893BE30:;
    a1 = LD32(s1);
    a2 = LD32(a1);
    a0 = LD32(s1+4);
    goto L_0893BE3C;
L_0893BE3C:;
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_0893BE6C; }
    goto L_0893BE50;
L_0893BE50:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+56); goto L_0893BE88; }
    goto L_0893BE60;
L_0893BE60:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0893BE50; }
    goto L_0893BE6C;
L_0893BE6C:;
    v0 = a0 + 1;
    ST32(s1+4, v0);
    v1 = LD32(a1+4);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0893BE3C; }
    goto L_0893BE84;
L_0893BE84:;
    a0 = LD32(sp+56);
    goto L_0893BE88;
L_0893BE88:;
    cnd_ = a0 == 0;
    v0 = D_08AED820 - (-10208);
    if (cnd_) { goto L_0893BF4C; }
    goto L_0893BE90;
L_0893BE90:;
    f20 = BITSF(LD32(v0-10208));
    v1 = LD32(a0);
    goto L_0893BE98;
L_0893BE98:;
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893BF38; }
    goto L_0893BEA0;
L_0893BEA0:;
    v0 = LD32(v1+84);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_0893BF38; }
    goto L_0893BEAC;
L_0893BEAC:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893BEC8;
L_0893BEC8:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s4));
    f3 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s4+8));
    f2 = f2 - f0;
    f3 = f3 - f1;
    f4 = f4 - f5;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    a0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    v0 = s0 & 0x1;
    ST32(sp+64, FBITS(f2));
    fcc = FCMP(f20, f0, 12);
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f4));
    if (cnd_) { goto L_0893BF30; }
    goto L_0893BF2C;
L_0893BF2C:;
    v0 = 0 + 0;
    goto L_0893BF30;
L_0893BF30:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    goto L_0893BF38;
L_0893BF38:;
    a1 = 1;
    { u64 r_ = func_08ABCB74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893BF40;
L_0893BF40:;
    a0 = LD32(sp+56);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0893BE98; }
    goto L_0893BF4C;
L_0893BF4C:;
    a0 = LD32(sp+48);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893C000; }
    goto L_0893BF60;
L_0893BF60:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0893BF90; }
    goto L_0893BF68;
L_0893BF68:;
    v0 = (s32)fp < 2;
    cnd_ = v0 == 0;
    s6 = s6 + 1;
    if (cnd_) { goto L_0893BF80; }
    goto L_0893BF74;
L_0893BF74:;
    v0 = (s32)s6 < 5;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B25AC0 - (23232); goto L_0893BD80; }
    goto L_0893BF80;
L_0893BF80:;
    a0 = sp + 0;
    func_0895F11C(a0);
    goto L_0893BF88;
L_0893BF88:;
    v0 = s0 + 0;
    goto L_0893BB18;
L_0893BF90:;
    a0 = s5 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893BF98;
L_0893BF98:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893BFA0;
L_0893BFA0:;
    a0 = LD32(v0);
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(a1+20);
    t_ = v0;
    fp = fp + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893BFC0;
L_0893BFC0:;
    a0 = s5 + 0;
    s0 = v0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893BFCC;
L_0893BFCC:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893BFD4;
L_0893BFD4:;
    t0 = v0 + 0;
    a1 = s0 + 0;
    a0 = sp + 0;
    a2 = s4 + 0;
    a3 = 0 + 0;
    t1 = 999;
    v0 = func_0895F15C(a0, a1, a2, a3, t0, t1);
    goto L_0893BFF0;
L_0893BFF0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0893BF68; }
    goto L_0893BFF8;
L_0893BFF8:;
    goto L_0893BF80;
L_0893C000:;
    { u64 r_ = func_08ABCCBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C008;
L_0893C008:;
    goto L_0893BF60;
}

/* 0893C010 */
u64 func_0893C010(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893C010:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893C024;
L_0893C024:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893C02C;
L_0893C02C:;
    v1 = LD32(v0+172);
    a0 = s0 + 0;
    a1 = s0 + 0;
    v1 = v1 | 0x2;
    ST32(v0+172, v1);
    a2 = 1006;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C04C;
L_0893C04C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0893C05C */
u64 func_0893C05C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893C05C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893C070;
L_0893C070:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893C078;
L_0893C078:;
    v1 = LD32(v0+172);
    a0 = s0 + 0;
    a1 = s0 + 0;
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v0+172, v1);
    a2 = 1006;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C098;
L_0893C098:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0893C0A8 */
rv_t func_0893C0A8(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893C0A8:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 4;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x803b;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C0D4;
L_0893C0D4:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_0893C108; }
    goto L_0893C0E8;
L_0893C0E8:;
    v0 = LD32(v0+24);
    v1 = LD32(s0+24);
    ST32(v0, s1);
    v0 = 2;
    a3 = LD32(v1+4);
    ST32(t0, v0);
    ST32(t0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893C108;
L_0893C108:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893C11C */
u32 func_0893C11C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_0893C11C:;
    v0 = LD32(a0+88);
    t0 = a0 + 0;
    a3 = 0 + 0;
    a1 = 0 + 0;
    a2 = v0 & 0x1;
    v1 = a0 + 92;
    goto L_0893C134;
L_0893C134:;
    a0 = (s32)a1 < 2;
    cnd_ = a2 == 0;
    v0 = (s32)a1 < 5;
    if (cnd_) { goto L_0893C264; }
    goto L_0893C140;
L_0893C140:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0893C168; }
    goto L_0893C148;
L_0893C148:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(v1); goto L_0893C15C; }
    goto L_0893C150;
L_0893C150:;
    a1 = a1 + 1;
    v1 = v1 + 1;
    goto L_0893C134;
L_0893C15C:;
    v0 = 0 < v0;
    a3 = a3 + v0;
    goto L_0893C150;
L_0893C168:;
    cnd_ = a3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893C230; }
    goto L_0893C170;
L_0893C170:;
    a1 = D_08B25AC0 - (23232);
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v1;
    ST32(a2+4, a0);
    t1 = 5;
    a2 = t0 + 92;
    ST32(a1+23232, v1);
    a0 = 0 + 0;
    t2 = (u32)-1;
    v0 = LD32(t0+88);
    a1 = v0 & 0x1;
    a3 = hi;
    goto L_0893C1C0;
L_0893C1C0:;
    v1 = (s32)a0 < 2;
    cnd_ = a1 == 0;
    v0 = (s32)a0 < 5;
    if (cnd_) { goto L_0893C254; }
    goto L_0893C1CC;
L_0893C1CC:;
    cnd_ = v1 == 0;
    v1 = 0xf81a0000u;
    if (cnd_) { goto L_0893C204; }
    goto L_0893C1D4;
L_0893C1D4:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD_U8(a2); goto L_0893C1E8; }
    goto L_0893C1DC;
L_0893C1DC:;
    a0 = a0 + 1;
    goto L_0893C1E0;
L_0893C1E0:;
    a2 = a2 + 1;
    goto L_0893C1C0;
L_0893C1E8:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a0 + 1; goto L_0893C1E0; }
    goto L_0893C1F0;
L_0893C1F0:;
    a3 = a3 - 1;
    cnd_ = a3 != t2;
    if (cnd_) { a0 = a0 + 1; goto L_0893C1E0; }
    goto L_0893C1FC;
L_0893C1FC:;
    t1 = a0 + 0;
    v1 = 0xf81a0000u;
    goto L_0893C204;
L_0893C204:;
    v0 = 2;
    goto L_0893C208;
L_0893C208:;
    cnd_ = t1 == v0;
    v1 = v1 | 0xdd30;
    if (cnd_) { goto L_0893C230; }
    goto L_0893C210;
L_0893C210:;
    v0 = (s32)t1 < 3;
    cnd_ = v0 == 0;
    v1 = 0x8060000u;
    if (cnd_) { goto L_0893C238; }
    goto L_0893C21C;
L_0893C21C:;
    v1 = 0x7b080000u;
    v1 = v1 | 0x6e76;
    v0 = 1;
    goto L_0893C228;
L_0893C228:;
    cnd_ = t1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_0893C230; }
    goto L_0893C230;
L_0893C230:;
    v0 = v1 + 0;
    return v0;
L_0893C238:;
    v0 = 3;
    cnd_ = t1 == v0;
    v1 = v1 | 0xf719;
    if (cnd_) { goto L_0893C230; }
    goto L_0893C244;
L_0893C244:;
    v1 = 0x8060000u;
    v1 = v1 | 0xf7ee;
    v0 = 4;
    goto L_0893C228;
L_0893C254:;
    cnd_ = v0 != 0;
    v1 = 0xf81a0000u;
    if (cnd_) { goto L_0893C1D4; }
    goto L_0893C25C;
L_0893C25C:;
    v0 = 2;
    goto L_0893C208;
L_0893C264:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0893C148; }
    goto L_0893C26C;
L_0893C26C:;
    goto L_0893C168;
}

/* 0893C274 */
u32 func_0893C274(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0893C274:;
    sp = sp - 96;
    s5 = 0 + 0;
    s0 = a0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893C2A4;
L_0893C2A4:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893C2AC;
L_0893C2AC:;
    a0 = LD32(v0);
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893C2CC;
L_0893C2CC:;
    v1 = LD32(s0+24);
    s1 = v0 + 0;
    v0 = D_08AED824 - (-10204);
    a0 = LD32(v1+44);
    f20 = BITSF(LD32(v0-10204));
    v0 = func_08960A84(a0);
    goto L_0893C2E4;
L_0893C2E4:;
    v1 = v0 + 52;
    a1 = v0 + 0;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+4, 0);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0893C364; }
    goto L_0893C310;
L_0893C310:;
    a2 = LD32(a1+52);
    a3 = v1 + 0;
    a1 = LD32(a0+4);
    goto L_0893C31C;
L_0893C31C:;
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0893C34C; }
    goto L_0893C330;
L_0893C330:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0893C368; }
    goto L_0893C340;
L_0893C340:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893C330; }
    goto L_0893C34C;
L_0893C34C:;
    v0 = a1 + 1;
    ST32(a0+4, v0);
    v1 = LD32(a3+4);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a0+4); goto L_0893C31C; }
    goto L_0893C364;
L_0893C364:;
    v0 = LD32(sp+8);
    goto L_0893C368;
L_0893C368:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_0893C3AC; }
    goto L_0893C370;
L_0893C370:;
    s2 = D_08C25FBC - (24508);
    s0 = 0x8002;
    s3 = 999;
    s4 = s2 + 24508;
    a1 = LD32(v0);
    goto L_0893C384;
L_0893C384:;
    v0 = LD32(a1+8);
    cnd_ = v0 == s0;
    v0 = a1 + 28;
    if (cnd_) { goto L_0893C474; }
    goto L_0893C390;
L_0893C390:;
    a0 = sp + 0;
    goto L_0893C394;
L_0893C394:;
    a1 = 1;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C39C;
L_0893C39C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(v0); goto L_0893C384; }
    goto L_0893C3A8;
L_0893C3A8:;
    s1 = LD32(sp);
    goto L_0893C3AC;
L_0893C3AC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0893C430; }
    goto L_0893C3BC;
L_0893C3BC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0893C430; }
    goto L_0893C3C8;
L_0893C3C8:;
    v0 = LD32(s1);
    goto L_0893C3CC;
L_0893C3CC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0893C420; }
    goto L_0893C3E0;
L_0893C3E0:;
    v0 = LD_U8(s0+8);
    goto L_0893C3E4;
L_0893C3E4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0893C46C; }
    goto L_0893C3EC;
L_0893C3EC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893C45C; }
    goto L_0893C3F4;
L_0893C3F4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0893C3FC;
L_0893C3FC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C408;
L_0893C408:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0893C414;
L_0893C414:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0893C3E4; }
    goto L_0893C41C;
L_0893C41C:;
    v1 = LD32(s1+4);
    goto L_0893C420;
L_0893C420:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893C3CC; }
    goto L_0893C430;
L_0893C430:;
    v0 = s5 + 0;
    sp = sp + 96;
    return v0;
L_0893C45C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0893C3FC;
L_0893C46C:;
    s0 = LD32(s0+4);
    goto L_0893C414;
L_0893C474:;
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(a1+28));
    f5 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+8));
    f1 = f1 - f0;
    f2 = f2 - f5;
    f4 = f4 - f3;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f1));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0893C390; }
    goto L_0893C4D8;
L_0893C4D8:;
    a2 = LD32(a1+4);
    cnd_ = a2 == s3;
    v1 = LD32(s2+24508);
    if (cnd_) { goto L_0893C52C; }
    goto L_0893C4E4;
L_0893C4E4:;
    v0 = LD32(s4+4);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0893C524; }
    goto L_0893C504;
L_0893C504:;
    v0 = LD32(a0);
    goto L_0893C508;
L_0893C508:;
    v1 = LD32(v0);
    cnd_ = v1 == a2;
    a3 = v0 + 0;
    if (cnd_) { goto L_0893C538; }
    goto L_0893C514;
L_0893C514:;
    a0 = LD32(a0+4);
    goto L_0893C518;
L_0893C518:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0893C508; }
    goto L_0893C520;
L_0893C520:;
    a3 = 0 + 0;
    goto L_0893C524;
L_0893C524:;
    cnd_ = a3 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0893C394; }
    goto L_0893C52C;
L_0893C52C:;
    s5 = a1 + 0;
    f20 = f0;
    goto L_0893C390;
L_0893C538:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0893C518; }
    goto L_0893C544;
L_0893C544:;
    goto L_0893C524;
}

/* 0893C54C */
u64 func_0893C54C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0893C54C:;
    sp = sp - 96;
    s5 = 0 + 0;
    s0 = a0 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893C580;
L_0893C580:;
    a0 = v0 + 0;
    v0 = func_08956C70(a0);
    goto L_0893C588;
L_0893C588:;
    a0 = LD32(v0);
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893C5A8;
L_0893C5A8:;
    v1 = LD32(s0+24);
    s1 = v0 + 0;
    v0 = D_08AED828 - (-10200);
    a0 = LD32(v1+44);
    f21 = BITSF(LD32(v0-10200));
    v0 = func_08960A84(a0);
    goto L_0893C5C0;
L_0893C5C0:;
    v0 = v0 + 52;
    v1 = LD32(v0+8);
    a0 = sp + 0;
    a1 = 1;
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C5E8;
L_0893C5E8:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    s2 = 0x8002;
    if (cnd_) { goto L_0893C698; }
    goto L_0893C5F4;
L_0893C5F4:;
    s3 = 0x8004;
    s4 = D_08C25FBC - (24508);
    s0 = LD32(v0);
    goto L_0893C600;
L_0893C600:;
    v0 = LD32(s0+8);
    cnd_ = v0 == s2;
    a0 = sp + 0;
    if (cnd_) { goto L_0893C684; }
    goto L_0893C60C;
L_0893C60C:;
    cnd_ = v0 == s3;
    v1 = s0 + 28;
    if (cnd_) { goto L_0893C684; }
    goto L_0893C614;
L_0893C614:;
    f0 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(s0+28));
    f5 = BITSF(LD32(s1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(s1+8));
    f3 = f3 - f5;
    f1 = f1 - f0;
    f4 = f4 - f2;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f20 = BITSF(v0);
    a0 = s4 + 24508;
    fcc = FCMP(f0, f21, 12);
    a2 = 1;
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f1));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0893C6EC; }
    goto L_0893C680;
L_0893C680:;
    a0 = sp + 0;
    goto L_0893C684;
L_0893C684:;
    a1 = 1;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C68C;
L_0893C68C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_0893C600; }
    goto L_0893C698;
L_0893C698:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893C6DC; }
    goto L_0893C6AC;
L_0893C6AC:;
    v0 = s5 + 0;
    goto L_0893C6B0;
L_0893C6B0:;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_0893C6DC:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C6E4;
L_0893C6E4:;
    v0 = s5 + 0;
    goto L_0893C6B0;
L_0893C6EC:;
    a1 = LD32(s0+4);
    { u64 r_ = func_08ABD784(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C6F4;
L_0893C6F4:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0893C684; }
    goto L_0893C6FC;
L_0893C6FC:;
    s5 = s0 + 0;
    f21 = f20;
    goto L_0893C684;
}

/* 0893C708 */
rv_t func_0893C708(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893C708:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 4;
    s2 = D_08C25FBC - (24508);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893C730;
L_0893C730:;
    s3 = v0 + 0;
    s0 = LD32(s1+40);
    s1 = s2 + 24508;
    a0 = 12;
    ST32(v0, s0);
    v0 = LD32(s1+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893C754;
L_0893C754:;
    a0 = LD32(s2+24508);
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
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0893C79C */
u64 func_0893C79C(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893C79C:;
    sp = sp - 16;
    s2 = D_08C25FBC - (24508);
    a2 = 1;
    s1 = s2 + 24508;
    a0 = s1 + 0;
    { u64 r_ = func_08ABD784(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C7C4;
L_0893C7C4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0893C818; }
    goto L_0893C7CC;
L_0893C7CC:;
    v0 = LD32(s1+4);
    v1 = LD32(s0);
    a0 = LD32(s2+24508);
    v0 = v0 - 1;
    v1 = v1 & v0;
    a1 = v1 << 2;
    a0 = a1 + a0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893C810; }
    goto L_0893C7F4;
L_0893C7F4:;
    v0 = LD32(a0);
    goto L_0893C7F8;
L_0893C7F8:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0893C830; }
    goto L_0893C800;
L_0893C800:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0893C7F8; }
    goto L_0893C810;
L_0893C810:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C818;
L_0893C818:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0893C830:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0893C840; }
    goto L_0893C838;
L_0893C838:;
    ST8(a0+8, v0);
    goto L_0893C810;
L_0893C840:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893C868; }
    goto L_0893C848;
L_0893C848:;
    v0 = LD32(a0+4);
    ST32(v1+4, v0);
    goto L_0893C850;
L_0893C850:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C858;
L_0893C858:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0893C810;
L_0893C868:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_0893C850;
}

/* 0893C878 */
void func_0893C878(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893C878:;
    sp = sp - 32;
    v0 = D_08AED82C - (-10196);
    s1 = a0 + 0;
    f0 = BITSF(LD32(v0-10196));
    ST32(a0+84, FBITS(f0));
    v0 = func_0893AC70(a0);
    goto L_0893C89C;
L_0893C89C:;
    a2 = LD32(v0+4);
    a0 = D_08C2B3A4 - (-19548);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_0893C920; }
    goto L_0893C8B0;
L_0893C8B0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0893C900; }
    goto L_0893C8D4;
L_0893C8D4:;
    a0 = LD32(a1);
    goto L_0893C8D8;
L_0893C8D8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0893C9A4; }
    goto L_0893C8F0;
L_0893C8F0:;
    a1 = LD32(a1+4);
    goto L_0893C8F4;
L_0893C8F4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0893C8D8; }
    goto L_0893C8FC;
L_0893C8FC:;
    s0 = 0 + 0;
    goto L_0893C900;
L_0893C900:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0893C924; }
    goto L_0893C908;
L_0893C908:;
    v1 = LD32(s0);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893C918;
L_0893C918:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0893C934; }
    goto L_0893C920;
L_0893C920:;
    goto L_0893C924;
L_0893C924:;
    sp = sp + 32;
    return;
L_0893C934:;
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893C940;
L_0893C940:;
    a1 = LD32(v0+152);
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893C958;
L_0893C958:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893C924; }
    goto L_0893C960;
L_0893C960:;
    v0 = D_08AED830 - (-10192);
    f12 = BITSF(LD32(v0-10192));
    a0 = LD32(sp);
    a1 = 0xbe0e0000u;
    a1 = a1 | 0x3ae6;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893C978;
L_0893C978:;
    v0 = D_08AED834 - (-10188);
    f1 = BITSF(LD32(v0-10188));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0893C990; }
    goto L_0893C990;
L_0893C990:;
    f1 = f0 * f0;
    f0 = BITSF(LD32(s1+84));
    f0 = f0 * f1;
    ST32(s1+84, FBITS(f0));
    goto L_0893C920;
L_0893C9A4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0893C8F0; }
    goto L_0893C9B0;
L_0893C9B0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0893C8F4; }
    goto L_0893C9BC;
L_0893C9BC:;
    goto L_0893C900;
}

/* 0893C9C4 */
void func_0893C9C4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0893C9C4:;
    sp = sp - 48;
    a2 = D_08C2B2A8 - (-19800);
    v0 = 999;
    v1 = a2 - 19800;
    s1 = a0 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0893CBE4; }
    goto L_0893C9E8;
L_0893C9E8:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-19800);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893CA38; }
    goto L_0893CA0C;
L_0893CA0C:;
    a0 = LD32(a2);
    goto L_0893CA10;
L_0893CA10:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0893CC0C; }
    goto L_0893CA28;
L_0893CA28:;
    a2 = LD32(a2+4);
    goto L_0893CA2C;
L_0893CA2C:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0893CA10; }
    goto L_0893CA34;
L_0893CA34:;
    v1 = 0 + 0;
    goto L_0893CA38;
L_0893CA38:;
    cnd_ = v1 == 0;
    v0 = D_08AED848 - (-10168);
    if (cnd_) { goto L_0893CBE8; }
    goto L_0893CA40;
L_0893CA40:;
    a0 = LD32(v1);
    v0 = LD32(a0-12);
    v0 = v1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0893CA5C; }
    goto L_0893CA58;
L_0893CA58:;
    a1 = LD32(v0+16);
    goto L_0893CA5C;
L_0893CA5C:;
    cnd_ = a1 == 0;
    v0 = D_08AED848 - (-10168);
    if (cnd_) { goto L_0893CBE8; }
    goto L_0893CA64;
L_0893CA64:;
    v0 = LD32(a0-12);
    v0 = v1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0893CA7C; }
    goto L_0893CA78;
L_0893CA78:;
    a0 = LD32(v0+16);
    goto L_0893CA7C;
L_0893CA7C:;
    v0 = a0 + 4;
    f3 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+20));
    f2 = f2 - f1;
    f4 = f4 - f0;
    f5 = f5 - f3;
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AED838 - (-10184);
    f0 = BITSF(LD32(v0-10184));
    v0 = D_08AED83C - (-10180);
    f3 = BITSF(LD32(v0-10180));
    v0 = D_08AED844 - (-10172);
    f1 = f1 * f0;
    f2 = BITSF(LD32(v0-10172));
    v0 = D_08AED840 - (-10176);
    f0 = BITSF(LD32(v0-10176));
    f3 = f1 + f3;
    f2 = f1 + f2;
    f1 = f1 + f0;
    ST32(sp+8, FBITS(f5));
    f3 = f3 * f3;
    f2 = f2 * f2;
    f1 = f1 * f1;
    ST32(s1+76, FBITS(f3));
    ST32(s1+80, FBITS(f1));
    ST32(s1+84, FBITS(f2));
    goto L_0893CB20;
L_0893CB20:;
    a0 = s1 + 0;
    v0 = func_0893AC70(a0);
    goto L_0893CB28;
L_0893CB28:;
    a1 = LD32(v0+4);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893CB3C;
L_0893CB3C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0893CB60; }
    goto L_0893CB44;
L_0893CB44:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893CB58;
L_0893CB58:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0893CB74; }
    goto L_0893CB60;
L_0893CB60:;
    goto L_0893CB64;
L_0893CB64:;
    sp = sp + 48;
    return;
L_0893CB74:;
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893CB80;
L_0893CB80:;
    a1 = LD32(v0+152);
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    a2 = sp + 16;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893CB98;
L_0893CB98:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893CB64; }
    goto L_0893CBA0;
L_0893CBA0:;
    v0 = D_08AED854 - (-10156);
    f12 = BITSF(LD32(v0-10156));
    a0 = LD32(sp+16);
    a1 = 0xbe0e0000u;
    a1 = a1 | 0x3ae6;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893CBB8;
L_0893CBB8:;
    v0 = D_08AED838 - (-10184);
    f1 = BITSF(LD32(v0-10184));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0893CBD0; }
    goto L_0893CBD0;
L_0893CBD0:;
    f1 = f0 * f0;
    f0 = BITSF(LD32(s1+84));
    f0 = f0 * f1;
    ST32(s1+84, FBITS(f0));
    goto L_0893CB60;
L_0893CBE4:;
    v0 = D_08AED848 - (-10168);
    goto L_0893CBE8;
L_0893CBE8:;
    f0 = BITSF(LD32(v0-10168));
    v0 = D_08AED84C - (-10164);
    ST32(s1+76, FBITS(f0));
    f0 = BITSF(LD32(v0-10164));
    v0 = D_08AED850 - (-10160);
    ST32(s1+80, FBITS(f0));
    f0 = BITSF(LD32(v0-10160));
    ST32(s1+84, FBITS(f0));
    goto L_0893CB20;
L_0893CC0C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0893CA28; }
    goto L_0893CC18;
L_0893CC18:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0893CA2C; }
    goto L_0893CC24;
L_0893CC24:;
    goto L_0893CA38;
}

/* 0893CC2C */
rv_t func_0893CC2C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893CC2C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893CD50; }
    goto L_0893CC60;
L_0893CC60:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AED858 - (-10152);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-10152));
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 108;
    f6 = f6 * f3;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 80;
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    f5 = f5 * f3;
    t0 = D_08C25F0C - (24332);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C25F1C - (24348);
    a3 = D_08C25F2C - (24364);
    v1 = t0 + 24332;
    a1 = v0 + 24348;
    a2 = a3 + 24364;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C25FBC - (24508);
    s0 = s3 + 24508;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0+24348, FBITS(f5));
    v0 = 4;
    ST32(t0+24332, FBITS(f1));
    ST32(a3+24364, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893CD18;
L_0893CD18:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3+24508, v0);
    if (cnd_) { goto L_0893CD44; }
    goto L_0893CD28;
L_0893CD28:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0893CD30;
L_0893CD30:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0893CD30; }
    goto L_0893CD44;
L_0893CD44:;
    v0 = s3 + 24508;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0893CD50;
L_0893CD50:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893CD74; }
    goto L_0893CD64;
L_0893CD64:;
    v0 = D_08C25FBC - (24508);
    a0 = LD32(v0+24508);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0893CD8C; }
    goto L_0893CD74;
L_0893CD74:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0893CD8C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893CD94;
L_0893CD94:;
    goto L_0893CD74;
}

/* 0893CD9C */
rv_t func_0893CD9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893CD9C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0893CC2C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893CDB0;
L_0893CDB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893CDBC */
rv_t func_0893CDBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893CDBC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0893CC2C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893CDD0;
L_0893CDD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893CDDC */
u64 func_0893CDDC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893CDDC:;
    sp = sp - 16;
    a2 = 1006;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893CDF4;
L_0893CDF4:;
    v0 = D_08AF87F0 - (-30736);
    v0 = v0 - 30736;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0893CE10 */
rv_t func_0893CE10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0893CE10:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893CE18 */
rv_t func_0893CE18(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0893CE18:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25FCC - (24524);
    t1 = D_08C25FDC - (24540);
    t2 = D_08C25FEC - (24556);
    a1 = a1 & a0;
    v1 = t0 + 24524;
    a2 = t1 + 24540;
    cnd_ = a1 == 0;
    a3 = t2 + 24556;
    if (cnd_) { goto L_0893CED0; }
    goto L_0893CE48;
L_0893CE48:;
    v0 = D_08AED85C - (-10148);
    f4 = BITSF(LD32(v0-10148));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+24524, FBITS(f2));
    ST32(t1+24540, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+24556, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0893CED0;
L_0893CED0:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893CED8 */
rv_t func_0893CED8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893CED8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0893CE18(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893CEEC;
L_0893CEEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893CEF8 */
rv_t func_0893CEF8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893CEF8:;
    sp = sp - 16;
    a2 = 1001;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893CF18;
L_0893CF18:;
    v0 = D_08AF8828 - (-30680);
    v0 = v0 - 30680;
    ST32(s0, v0);
    a0 = s0 + 44;
    ST32(s0+28, s1);
    ST16(s0+32, 0);
    ST16(s0+34, 0);
    ST32(s0+36, 0);
    ST8(s0+40, 0);
    ST8(s0+41, 0);
    func_0895F0BC(a0);
    goto L_0893CF44;
L_0893CF44:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = s0 + 88;
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(s0+88, FBITS(f2));
    ST32(s0+100, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893CF80 */
rv_t func_0893CF80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893CF80:;
    sp = sp - 16;
    v0 = 0x8035;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0893CFD0; }
    goto L_0893CFA4;
L_0893CFA4:;
    v0 = 0x8036;
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_0893CFB4; }
    goto L_0893CFB0;
L_0893CFB0:;
    a0 = 0 + 0;
    goto L_0893CFB4;
L_0893CFB4:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0893CFD0:;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = 1; goto L_0893CFB4; }
    goto L_0893CFDC;
L_0893CFDC:;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_0893CFB4; }
    goto L_0893CFE8;
L_0893CFE8:;
    a0 = LD32(v0+48);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0893CFFC; }
    goto L_0893CFF4;
L_0893CFF4:;
    a0 = 1;
    goto L_0893CFB4;
L_0893CFFC:;
    a1 = LD_U8(s1+12);
    v1 = LD32(v0+140);
    t_ = v1;
    s2 = s0 + 44;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D00C;
L_0893D00C:;
    v0 = LD_U8(s1+13);
    v1 = LD32(s0+28);
    ST8(s0+41, v0);
    a0 = LD32(v1+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D038;
L_0893D038:;
    v1 = LD32(s0+28);
    t1 = LD32(s1+16);
    a2 = s1 + 0;
    t0 = LD32(v1+48);
    a1 = v0 + 0;
    a3 = 0 + 0;
    a0 = s2 + 0;
    v0 = func_0895F15C(a0, a1, a2, a3, t0, t1);
    goto L_0893D058;
L_0893D058:;
    a0 = s2 + 0;
    func_0895F6D0(a0, 0, 0, 0);
    goto L_0893D060;
L_0893D060:;
    v1 = LD32(s2+32);
    cnd_ = v1 != 0;
    if (cnd_) { ST16(s0+34, 0); goto L_0893CFF4; }
    goto L_0893D06C;
L_0893D06C:;
    v1 = LD_U16(s2+38);
    v0 = LD_U16(s2+40);
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0893D094; }
    goto L_0893D07C;
L_0893D07C:;
    cnd_ = a0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0893D08C; }
    goto L_0893D084;
L_0893D084:;
    ST16(s0+34, 0);
    goto L_0893CFF4;
L_0893D08C:;
    ST16(s0+34, v0);
    goto L_0893CFF4;
L_0893D094:;
    v0 = LD32(s2+24);
    v0 = v0 ^ 0x1;
    a0 = v0 < 0x1u;
    goto L_0893D07C;
}

/* 0893D0A4 */
rv_t func_0893D0A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0893D0A4:;
    sp = sp - 48;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0893D0C8; }
    goto L_0893D0BC;
L_0893D0BC:;
    v1 = LD32(v0+48);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0893D0D8; }
    goto L_0893D0C8;
L_0893D0C8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0893D0D8:;
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D0F0;
L_0893D0F0:;
    v1 = s0 + 56;
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(s0+56));
    f5 = BITSF(LD32(v1+8));
    f2 = f2 - f3;
    f1 = f1 - f0;
    f4 = f4 - f5;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+4, FBITS(f2));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AED860 - (-10144);
    f0 = BITSF(LD32(v0-10144));
    ST32(sp, FBITS(f1));
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_0893D0C8; }
    goto L_0893D160;
L_0893D160:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_0893D0C8;
}

/* 0893D170 */
rv_t func_0893D170(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0893D170:;
    sp = sp - 144;
    s1 = a0 + 0;
    f20 = f12;
    a0 = LD32(a0+28);
    v0 = func_08956C70(a0);
    goto L_0893D194;
L_0893D194:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0893D4C0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D1A0;
L_0893D1A0:;
    ST8(s0+233, v0);
    v0 = LD32(s1+28);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893D1E0; }
    goto L_0893D1B0;
L_0893D1B0:;
    a0 = LD32(v0+48);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0893D1E0; }
    goto L_0893D1BC;
L_0893D1BC:;
    v0 = LD32(a0);
    f0 = BITSF(0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    f1 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a0); goto L_0893D418; }
    goto L_0893D1E0;
L_0893D1E0:;
    a0 = s1 + 0;
    { rv_t r_ = func_0893D4E8(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D1E8;
L_0893D1E8:;
    v0 = LD32(s1+28);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893D220; }
    goto L_0893D1F4;
L_0893D1F4:;
    v1 = LD32(v0+48);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_0893D224; }
    goto L_0893D200;
L_0893D200:;
    v0 = D_08AED870 - (-10128);
    f0 = BITSF(LD32(s1+36));
    f1 = BITSF(LD32(v0-10128));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(s1+100)); goto L_0893D234; }
    goto L_0893D21C;
L_0893D21C:;
    goto L_0893D220;
L_0893D220:;
    goto L_0893D224;
L_0893D224:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_0893D234:;
    f0 = f0 + f20;
    ST32(s1+100, FBITS(f0));
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s1 + 88;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D258;
L_0893D258:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s1+88));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f1 = f1 - f0;
    f2 = f2 - f4;
    f3 = f3 - f5;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AED864 - (-10140);
    f0 = BITSF(LD32(v0-10140));
    ST32(sp, FBITS(f1));
    fcc = FCMP(f0, f4, 12);
    ST32(sp+4, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_0893D3D0; }
    goto L_0893D2C0;
L_0893D2C0:;
    v0 = D_08AED874 - (-10124);
    f0 = BITSF(LD32(s1+100));
    f1 = BITSF(LD32(v0-10124));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0893D220; }
    goto L_0893D2DC;
L_0893D2DC:;
    v1 = LD32(s1+28);
    f20 = BITSF(0);
    a0 = LD32(v1+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_0893D224; }
    goto L_0893D308;
L_0893D308:;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D318;
L_0893D318:;
    v1 = D_08AED878 - (-10120);
    f1 = BITSF(LD32(v1-10120));
    ST32(sp+16, FBITS(f20));
    a0 = sp + 0;
    a1 = 1;
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+24, FBITS(f20));
    f0 = f0 + f1;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D354;
L_0893D354:;
    cnd_ = v0 != 0;
    s0 = sp + 32;
    if (cnd_) { goto L_0893D384; }
    goto L_0893D35C;
L_0893D35C:;
    v0 = LD_U8(s1+40);
    goto L_0893D360;
L_0893D360:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0893D220; }
    goto L_0893D368;
L_0893D368:;
    v0 = LD32(s1+28);
    v1 = 1;
    ST8(s1+40, v1);
    a0 = LD32(v0+48);
    v0 = 1;
    ST8(a0+136, v0);
    goto L_0893D220;
L_0893D384:;
    a1 = D_08AD9EC4 - (-24892);
    t0 = D_08AD9EC8 - (-24888);
    a1 = a1 - 24892;
    a0 = s0 + 0;
    a2 = 36;
    a3 = 1;
    t0 = t0 - 24888;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D3A4;
L_0893D3A4:;
    v0 = D_08AED87C - (-10116);
    f13 = BITSF(LD32(v0-10116));
    a2 = D_08C29E64 - (-24988);
    a0 = s0 + 0;
    a2 = a2 - 24988;
    f12 = f20;
    a1 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D3C8;
L_0893D3C8:;
    v0 = LD_U8(s1+40);
    goto L_0893D360;
L_0893D3D0:;
    v0 = LD32(s1+28);
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D3F4;
L_0893D3F4:;
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f1));
    ST32(s0+4, FBITS(f0));
    ST32(s1+88, FBITS(f2));
    ST32(s1+100, 0);
    ST8(s1+40, 0);
    goto L_0893D2C0;
L_0893D418:;
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s1 + 56;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D424;
L_0893D424:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s1+56));
    f2 = BITSF(LD32(s0+4));
    f3 = f3 - f5;
    f1 = f1 - f0;
    f2 = f2 - f4;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f3));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AED864 - (-10140);
    f0 = BITSF(LD32(v0-10140));
    ST32(sp, FBITS(f1));
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    ST32(sp+4, FBITS(f2));
    if (cnd_) { goto L_0893D1E0; }
    goto L_0893D490;
L_0893D490:;
    v0 = D_08AED868 - (-10136);
    f0 = BITSF(LD32(s1+36));
    f1 = BITSF(LD32(v0-10136));
    f0 = f0 + f20;
    fcc = FCMP(f4, f1, 12);
    cnd_ = !fcc;
    ST32(s1+36, FBITS(f0));
    if (cnd_) { goto L_0893D1E0; }
    goto L_0893D4B0;
L_0893D4B0:;
    v0 = D_08AED86C - (-10132);
    f0 = BITSF(LD32(v0-10132));
    ST32(s1+36, FBITS(f0));
    goto L_0893D1E0;
}

/* 0893D4C0 */
rv_t func_0893D4C0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0893D4C0:;
    v0 = D_08AED880 - (-10112);
    f1 = BITSF(LD32(a0+36));
    f0 = BITSF(LD32(v0-10112));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893D4E0; }
    goto L_0893D4DC;
L_0893D4DC:;
    v1 = 1;
    goto L_0893D4E0;
L_0893D4E0:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0893D4E8 */
rv_t func_0893D4E8(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_0893D4E8:;
    sp = sp - 256;
    s2 = a0 + 0;
    a1 = D_08C2A6C8 - (-22840);
    t0 = LD32(a0+28);
    v0 = LD32(t0+48);
    v1 = LD32(v0);
    a0 = LD32(v1-16);
    v1 = 999;
    v0 = v0 + a0;
    a2 = LD32(v0+4);
    cnd_ = a2 == v1;
    a3 = a1 - 22840;
    if (cnd_) { goto L_0893D5B8; }
    goto L_0893D54C;
L_0893D54C:;
    v0 = LD32(a3+4);
    v1 = LD32(a1-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0893D59C; }
    goto L_0893D570;
L_0893D570:;
    a0 = LD32(a1);
    goto L_0893D574;
L_0893D574:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0893DFF4; }
    goto L_0893D58C;
L_0893D58C:;
    a1 = LD32(a1+4);
    goto L_0893D590;
L_0893D590:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0893D574; }
    goto L_0893D598;
L_0893D598:;
    a0 = 0 + 0;
    goto L_0893D59C;
L_0893D59C:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0893D5B8; }
    goto L_0893D5A4;
L_0893D5A4:;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893D5AC;
L_0893D5AC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0893D770; }
    goto L_0893D5B4;
L_0893D5B4:;
    t0 = LD32(s2+28);
    goto L_0893D5B8;
L_0893D5B8:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_0893D770; }
    goto L_0893D5C0;
L_0893D5C0:;
    a0 = LD32(t0+48);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0893D774; }
    goto L_0893D5CC;
L_0893D5CC:;
    v0 = LD32(a0);
    f1 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_0893D778; }
    goto L_0893D5F0;
L_0893D5F0:;
    s0 = s2 + 44;
    v1 = LD_U16(s0+38);
    v0 = LD_U16(s0+40);
    ST32(sp+8, FBITS(f1));
    ST32(sp, FBITS(f1));
    cnd_ = v1 == v0;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_0893DFB4; }
    goto L_0893D60C;
L_0893D60C:;
    v0 = LD_U16(s2+34);
    goto L_0893D610;
L_0893D610:;
    v1 = v0 & 0xffff;
    goto L_0893D614;
L_0893D614:;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0893DDC0; }
    goto L_0893D61C;
L_0893D61C:;
    a1 = LD32(s0+24);
    v0 = a1 - 1;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = a1 - 2; goto L_0893DBE8; }
    goto L_0893D62C;
L_0893D62C:;
    cnd_ = v1 == a1;
    v0 = (s32)v1 < (s32)a1;
    if (cnd_) { goto L_0893DBC8; }
    goto L_0893D634;
L_0893D634:;
    cnd_ = v0 == 0;
    v0 = D_08B20494 - (1172);
    if (cnd_) { goto L_0893DB9C; }
    goto L_0893D63C;
L_0893D63C:;
    a2 = v0 + 1172;
    a0 = LD_U16(s2+32);
    v0 = LD_U16(a2+10);
    a1 = sp + 0;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893D66C; }
    goto L_0893D658;
L_0893D658:;
    v1 = LD32(a2+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0893D66C;
L_0893D66C:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(a1+8, FBITS(f0));
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_0893D684;
L_0893D684:;
    a0 = LD32(t0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D6A4;
L_0893D6A4:;
    f0 = BITSF(LD32(v0+4));
    v1 = LD32(s2+28);
    ST32(sp+4, FBITS(f0));
    a0 = LD32(v1+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D6D0;
L_0893D6D0:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 - f0;
    f2 = f2 - f4;
    f1 = f1 - f5;
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AED884 - (-10108);
    f0 = BITSF(LD32(v0-10108));
    ST32(sp+80, FBITS(f3));
    fcc = FCMP(f4, f0, 12);
    ST32(sp+84, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f1));
    if (cnd_) { goto L_0893D7B4; }
    goto L_0893D738;
L_0893D738:;
    v1 = LD32(s2+28);
    a0 = LD_U16(s2+32);
    v0 = LD32(v1+48);
    ST16(v0+138, a0);
    v1 = LD_U16(s2+34);
    v0 = LD32(s0+24);
    v1 = v1 + 1;
    a1 = v1 & 0xffff;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    ST16(s2+34, v1);
    if (cnd_) { goto L_0893D7A8; }
    goto L_0893D764;
L_0893D764:;
    v0 = (u32)-1;
    ST16(s2+32, v0);
    goto L_0893D76C;
L_0893D76C:;
    goto L_0893D770;
L_0893D770:;
    goto L_0893D774;
L_0893D774:;
    goto L_0893D778;
L_0893D778:;
    sp = sp + 256;
    return (rv_t){ v0, v1, f0 };
L_0893D7A8:;
    a0 = s0 + 0;
    v0 = func_08ABD9B0(a0, a1);
    goto L_0893D7B0;
L_0893D7B0:;
    ST16(s2+32, v0);
    goto L_0893D7B4;
L_0893D7B4:;
    v0 = LD32(s2+28);
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D7D8;
L_0893D7D8:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    ST32(sp+84, 0);
    f1 = f0 - f1;
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+8));
    ST32(sp+80, FBITS(f1));
    fcc = FCMP(f1, f3, 2);
    f0 = f0 - f2;
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f0));
    if (cnd_) { goto L_0893D818; }
    goto L_0893D808;
L_0893D808:;
    fcc = FCMP(f0, f3, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_0893D770; }
    goto L_0893D818;
L_0893D818:;
    v0 = FBITS(f1);
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = 0 + 0;
    {v[13]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f3, 2);
    cnd_ = fcc;
    f4 = f3;
    if (cnd_) { goto L_0893D894; }
    goto L_0893D850;
L_0893D850:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f4 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+72, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    goto L_0893D894;
L_0893D894:;
    v0 = D_08AED888 - (-10104);
    f0 = BITSF(LD32(v0-10104));
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0893D770; }
    goto L_0893D8AC;
L_0893D8AC:;
    a1 = D_08C2A880 - (-22400);
    v0 = a1 - 22400;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+96, v0);
    v1 = v1 + 1;
    s3 = sp + 96;
    ST32(v0+8, v1);
    ST32(sp+104, 0);
    cnd_ = a0 == 0;
    ST32(sp+100, 0);
    if (cnd_) { goto L_0893D924; }
    goto L_0893D8D8;
L_0893D8D8:;
    a1 = LD32(a1-22400);
    a2 = a0 + 0;
    goto L_0893D8E0;
L_0893D8E0:;
    a0 = LD32(s3+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s3+8, v1);
    if (cnd_) { goto L_0893D914; }
    goto L_0893D8F8;
L_0893D8F8:;
    v1 = LD32(s3+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+104); goto L_0893D928; }
    goto L_0893D908;
L_0893D908:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s3+8, v0);
    if (cnd_) { goto L_0893D8F8; }
    goto L_0893D914;
L_0893D914:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s3+4, v0);
    if (cnd_) { goto L_0893D8E0; }
    goto L_0893D924;
L_0893D924:;
    v1 = LD32(sp+104);
    goto L_0893D928;
L_0893D928:;
    s4 = D_08AED88C - (-10100);
    cnd_ = v1 == 0;
    f22 = BITSF(LD32(s4-10100));
    if (cnd_) { goto L_0893DAA4; }
    goto L_0893D934;
L_0893D934:;
    v0 = D_08AED890 - (-10096);
    f21 = BITSF(LD32(v0-10096));
    s5 = D_08AED894 - (-10092);
    s6 = D_08C29B58 - (-25768);
    s7 = 1;
    fp = D_08C2932D - (-27859);
    a1 = 1;
    goto L_0893D950;
L_0893D950:;
    a0 = s3 + 0;
    s1 = LD32(v1);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893D95C;
L_0893D95C:;
    v0 = LD32(s2+28);
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D980;
L_0893D980:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893D9A0;
L_0893D9A0:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f20 = BITSF(v0);
    ST32(sp+72, FBITS(f2));
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893DA04;
L_0893DA04:;
    fcc = FCMP(f20, f21, 12);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+28); goto L_0893DA1C; }
    goto L_0893DA10;
L_0893DA10:;
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s2+41); goto L_0893DB70; }
    goto L_0893DA18;
L_0893DA18:;
    v0 = LD32(s2+28);
    goto L_0893DA1C;
L_0893DA1C:;
    a0 = LD32(s1+12);
    a1 = LD32(v0+48);
    v1 = LD32(a1+12);
    cnd_ = a0 == v1;
    v1 = LD32(sp+104);
    if (cnd_) { goto L_0893DA9C; }
    goto L_0893DA30;
L_0893DA30:;
    v1 = LD32(a1);
    a2 = LD32(s1);
    a0 = LD32(v1-16);
    v0 = LD32(a2-16);
    a0 = a1 + a0;
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    v1 = LD32(a0+4);
    cnd_ = a1 == v1;
    if (cnd_) { v1 = LD32(sp+104); goto L_0893DA9C; }
    goto L_0893DA58;
L_0893DA58:;
    v0 = LD32(a2-12);
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = LD32(sp+104);
    if (cnd_) { goto L_0893DA9C; }
    goto L_0893DA78;
L_0893DA78:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893DA9C; }
    goto L_0893DA84;
L_0893DA84:;
    v0 = LD_U8(s1+64);
    fcc = FCMP(f20, f21, 12);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893DA9C; }
    goto L_0893DA94;
L_0893DA94:;
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s2+41); goto L_0893DB70; }
    goto L_0893DA9C;
L_0893DA9C:;
    cnd_ = v1 != 0;
    a1 = 1;
    if (cnd_) { goto L_0893D950; }
    goto L_0893DAA4;
L_0893DAA4:;
    s0 = sp + 80;
    goto L_0893DAA8;
L_0893DAA8:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    f12 = f22;
    func_0893E014(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0893DAB8;
L_0893DAB8:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    f12 = f22;
    { rv_t r_ = func_0893E67C(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893DAC8;
L_0893DAC8:;
    s1 = LD32(sp+96);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0893D76C; }
    goto L_0893DADC;
L_0893DADC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0893D76C; }
    goto L_0893DAE8;
L_0893DAE8:;
    v0 = LD32(s1);
    goto L_0893DAEC;
L_0893DAEC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0893DB40; }
    goto L_0893DB00;
L_0893DB00:;
    v0 = LD_U8(s0+8);
    goto L_0893DB04;
L_0893DB04:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0893DB68; }
    goto L_0893DB0C;
L_0893DB0C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893DB58; }
    goto L_0893DB14;
L_0893DB14:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0893DB1C;
L_0893DB1C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893DB28;
L_0893DB28:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0893DB34;
L_0893DB34:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0893DB04; }
    goto L_0893DB3C;
L_0893DB3C:;
    v1 = LD32(s1+4);
    goto L_0893DB40;
L_0893DB40:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893DAEC; }
    goto L_0893DB50;
L_0893DB50:;
    goto L_0893D770;
L_0893DB58:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0893DB1C;
L_0893DB68:;
    s0 = LD32(s0+4);
    goto L_0893DB34;
L_0893DB70:;
    cnd_ = v0 != 0;
    f22 = BITSF(LD32(s4-10100));
    if (cnd_) { goto L_0893DAA4; }
    goto L_0893DB78;
L_0893DB78:;
    v0 = LD32(s6-25768);
    cnd_ = v0 != s7;
    f22 = BITSF(LD32(s5-10092));
    if (cnd_) { goto L_0893DAA4; }
    goto L_0893DB84;
L_0893DB84:;
    v0 = LD_U8(fp-27859);
    cnd_ = v0 != 0;
    s0 = sp + 80;
    if (cnd_) { goto L_0893DAA8; }
    goto L_0893DB90;
L_0893DB90:;
    v0 = D_08AED898 - (-10088);
    f22 = BITSF(LD32(v0-10088));
    goto L_0893DAA8;
L_0893DB9C:;
    v0 = LD32(t0+48);
    ST32(sp+80, 0);
    a1 = sp + 80;
    ST32(sp+84, 0);
    ST32(sp+88, 0);
    v1 = LD32(v0);
    a2 = LD32(v1+128);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893DBC0;
L_0893DBC0:;
    goto L_0893D770;
L_0893DBC8:;
    v0 = s2 + 56;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s2+56));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    goto L_0893D684;
L_0893DBE8:;
    s3 = D_08B20494 - (1172);
    v0 = func_08ABD9B0(a0, a1);
    goto L_0893DBF0;
L_0893DBF0:;
    a1 = s3 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893DC1C; }
    goto L_0893DC08;
L_0893DC08:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0893DC1C;
L_0893DC1C:;
    a1 = LD32(s0+24);
    a0 = s0 + 0;
    f20 = BITSF(LD32(v1+12));
    a1 = a1 - 2;
    v0 = func_08ABD9B0(a0, a1);
    goto L_0893DC30;
L_0893DC30:;
    a1 = s3 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    a2 = sp + 80;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893DC60; }
    goto L_0893DC4C;
L_0893DC4C:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0893DC60;
L_0893DC60:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    a1 = LD32(s0+24);
    ST32(a2+8, FBITS(f0));
    a0 = s0 + 0;
    a1 = a1 - 1;
    ST32(a2, FBITS(f1));
    s1 = sp + 64;
    ST32(a2+4, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_0893DC8C;
L_0893DC8C:;
    a1 = s3 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893DCB8; }
    goto L_0893DCA4;
L_0893DCA4:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0893DCB8;
L_0893DCB8:;
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v1+4));
    ST32(s1+8, FBITS(f1));
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    ST32(s1+4, FBITS(f0));
    ST32(s1, FBITS(f2));
    f7 = BITSF(LD32(sp+84));
    f6 = BITSF(LD32(sp+80));
    f8 = BITSF(LD32(sp+88));
    f5 = BITSF(LD32(sp+64));
    f4 = BITSF(LD32(sp+68));
    f2 = BITSF(LD32(sp+72));
    f5 = f5 - f6;
    f4 = f4 - f7;
    f2 = f2 - f8;
    v0 = FBITS(f5);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f5));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+52, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f2));
    if (cnd_) { goto L_0893DD70; }
    goto L_0893DD34;
L_0893DD34:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+40, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_0893DD70;
L_0893DD70:;
    f0 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+56));
    f0 = f0 * f20;
    f2 = f2 * f20;
    f1 = f1 * f20;
    t0 = LD32(s2+28);
    f3 = f6 + f0;
    f4 = f7 + f2;
    f5 = f8 + f1;
    ST32(sp+16, FBITS(f0));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f1));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    goto L_0893D684;
L_0893DDC0:;
    a1 = 0 + 0;
    s3 = D_08B20494 - (1172);
    v0 = func_08ABD9B0(a0, a1);
    goto L_0893DDCC;
L_0893DDCC:;
    a1 = s3 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893DDF8; }
    goto L_0893DDE4;
L_0893DDE4:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0893DDF8;
L_0893DDF8:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    f20 = BITSF(LD32(v1+12));
    v0 = func_08ABD9B0(a0, a1);
    goto L_0893DE08;
L_0893DE08:;
    a1 = s3 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    a2 = sp + 16;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893DE38; }
    goto L_0893DE24;
L_0893DE24:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0893DE38;
L_0893DE38:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(a2+8, FBITS(f0));
    a0 = s0 + 0;
    a1 = 1;
    ST32(a2, FBITS(f1));
    s1 = sp + 32;
    ST32(a2+4, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_0893DE60;
L_0893DE60:;
    a1 = s3 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893DE8C; }
    goto L_0893DE78;
L_0893DE78:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0893DE8C;
L_0893DE8C:;
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v1+4));
    ST32(s1+8, FBITS(f1));
    {u32 a_=sp+(112);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    ST32(s1+4, FBITS(f0));
    ST32(s1, FBITS(f2));
    f6 = BITSF(LD32(sp+20));
    f8 = BITSF(LD32(sp+16));
    f7 = BITSF(LD32(sp+24));
    f5 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    f5 = f5 - f8;
    f4 = f4 - f6;
    f2 = f2 - f7;
    v0 = FBITS(f5);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f5));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+52, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f2));
    if (cnd_) { goto L_0893DF44; }
    goto L_0893DF08;
L_0893DF08:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+72, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_0893DF44;
L_0893DF44:;
    f2 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f2 = f2 * f20;
    f1 = f1 * f20;
    f0 = f0 * f20;
    a1 = LD_U16(s2+34);
    f3 = f8 + f2;
    f4 = f6 + f1;
    f5 = f7 + f0;
    ST32(sp+80, FBITS(f2));
    a0 = s0 + 0;
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    ST32(sp+64, FBITS(f3));
    ST32(sp+68, FBITS(f4));
    ST32(sp+72, FBITS(f5));
    goto L_0893DF94;
L_0893DF94:;
    v0 = func_08ABD9B0(a0, a1);
    goto L_0893DF9C;
L_0893DF9C:;
    a0 = LD32(s2+28);
    ST16(s2+32, v0);
    v1 = LD32(a0+48);
    ST16(v1+138, v0);
    t0 = LD32(s2+28);
    goto L_0893D684;
L_0893DFB4:;
    v1 = LD32(s0+24);
    v0 = 1;
    cnd_ = v1 != v0;
    v0 = LD_U16(s2+34);
    if (cnd_) { goto L_0893D610; }
    goto L_0893DFC4;
L_0893DFC4:;
    cnd_ = v0 != 0;
    v1 = v0 & 0xffff;
    if (cnd_) { goto L_0893D614; }
    goto L_0893DFCC;
L_0893DFCC:;
    v0 = s2 + 56;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s2+56));
    f1 = BITSF(LD32(v0+4));
    a0 = s0 + 0;
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    goto L_0893DF94;
L_0893DFF4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0893D590; }
    goto L_0893E000;
L_0893E000:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0893D590; }
    goto L_0893E00C;
L_0893E00C:;
    goto L_0893D59C;
}

/* 0893E014 */
void func_0893E014(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[384] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 384);
L_0893E014:;
    sp = sp - 384;
    s4 = 0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = sp + 16;
    v0 = LD32(a0+28);
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    f22 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E080;
L_0893E080:;
    a2 = D_08C2B4CC - (-19252);
    v1 = a2 - 19252;
    a0 = LD32(v1+8);
    f2 = BITSF(LD32(v0+8));
    a1 = LD32(v1+4);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = a0 + 1;
    ST32(v1+8, a0);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, v1);
    ST32(sp+20, 0);
    cnd_ = a1 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_0893E108; }
    goto L_0893E0C0;
L_0893E0C0:;
    a2 = LD32(a2-19252);
    goto L_0893E0C4;
L_0893E0C4:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_0893E0F8; }
    goto L_0893E0DC;
L_0893E0DC:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_0893E10C; }
    goto L_0893E0EC;
L_0893E0EC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0893E0DC; }
    goto L_0893E0F8;
L_0893E0F8:;
    v0 = a0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_0893E0C4; }
    goto L_0893E108;
L_0893E108:;
    a0 = LD32(sp+24);
    goto L_0893E10C;
L_0893E10C:;
    cnd_ = a0 == 0;
    v0 = D_08AED89C - (-10084);
    if (cnd_) { goto L_0893E1B4; }
    goto L_0893E114;
L_0893E114:;
    f23 = BITSF(LD32(v0-10084));
    v1 = D_08AED8A4 - (-10076);
    v0 = D_08AED8AC - (-10068);
    {v[0]=0.63661977236f;}
    f24 = BITSF(LD32(v1-10076));
    f25 = BITSF(LD32(v0-10068));
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    s5 = s2 + 56;
    s0 = LD32(a0);
    goto L_0893E138;
L_0893E138:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0893E1A0; }
    goto L_0893E140;
L_0893E140:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0893E1A0; }
    goto L_0893E14C;
L_0893E14C:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0893E1A0; }
    goto L_0893E158;
L_0893E158:;
    v1 = LD32(s0);
    f20 = BITSF(0);
    v0 = LD32(v1-12);
    a2 = s0 + v0;
    f0 = BITSF(LD32(a2+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = s1 + 0; goto L_0893E1A0; }
    goto L_0893E17C;
L_0893E17C:;
    v0 = LD32(v1-16);
    a1 = s0 + v0;
    v1 = LD_U16(a1+8);
    v0 = 0x8005;
    cnd_ = v1 == v0;
    v0 = 0x801e;
    if (cnd_) { goto L_0893E218; }
    goto L_0893E194;
L_0893E194:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s2+28); goto L_0893E21C; }
    goto L_0893E19C;
L_0893E19C:;
    a0 = s1 + 0;
    goto L_0893E1A0;
L_0893E1A0:;
    a1 = 1;
    { u64 r_ = func_08ABDA70(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893E1A8;
L_0893E1A8:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_0893E138; }
    goto L_0893E1B4;
L_0893E1B4:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893E208; }
    goto L_0893E1C8;
L_0893E1C8:;
    v0 = s4 + 0;
    goto L_0893E1CC;
L_0893E1CC:;
    sp = sp + 384;
    return;
L_0893E208:;
    func_08ABDB14(a0, 0, 0, 0);
    goto L_0893E210;
L_0893E210:;
    v0 = s4 + 0;
    goto L_0893E1CC;
L_0893E218:;
    a0 = LD32(s2+28);
    goto L_0893E21C;
L_0893E21C:;
    a1 = LD32(a1+4);
    v0 = LD32(a0+48);
    v1 = LD32(v0);
    a0 = LD32(v1-16);
    v0 = v0 + a0;
    v1 = LD32(v0+4);
    cnd_ = a1 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893E1A0; }
    goto L_0893E23C;
L_0893E23C:;
    v1 = LD32(a2);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E24C;
L_0893E24C:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f5 = f2 - f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f6 = f3 - f1;
    f7 = f4 - f0;
    v0 = FBITS(f5);
    {v[0]=BITSF(v0);}
    v1 = FBITS(f6);
    a0 = FBITS(f7);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    ST32(sp+32, FBITS(f2));
    f21 = BITSF(a1);
    fcc = FCMP(f23, f0, 12);
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f6));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f7));
    if (cnd_) { goto L_0893E19C; }
    goto L_0893E2BC;
L_0893E2BC:;
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(a0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0); goto L_0893E320; }
    goto L_0893E2E8;
L_0893E2E8:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    {a1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+64, a1);
    ST32(sp+68, v0);
    ST32(sp+72, v1);
    ST32(sp+48, a1);
    ST32(sp+52, v0);
    ST32(sp+56, v1);
    v1 = LD32(s0);
    goto L_0893E320;
L_0893E320:;
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E32C;
L_0893E32C:;
    f6 = BITSF(LD32(sp+48));
    f11 = BITSF(LD32(sp+56));
    f8 = BITSF(LD32(s3));
    f10 = BITSF(LD32(s3+4));
    f9 = BITSF(LD32(s3+8));
    a2 = LD32(sp+52);
    a1 = FBITS(f6);
    a3 = FBITS(f11);
    v1 = FBITS(f8);
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a1);}
    {v[0]=BITSF(v1);}
    {v[5]=BITSF(a2);}
    v1 = FBITS(f10);
    {v[6]=BITSF(a3);}
    {v[1]=BITSF(v1);}
    v1 = FBITS(f9);
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    a0 = LD32(v0+8);
    v1 = LD32(v0);
    f2 = f0 * f22;
    {u32 a_=sp+(144);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a1);}
    {v[0]=BITSF(v1);}
    {v[5]=BITSF(a2);}
    v1 = LD32(v0+4);
    {v[6]=BITSF(a3);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    f0 = f0 + f2;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = s1 + 0; goto L_0893E1A0; }
    goto L_0893E3D4;
L_0893E3D4:;
    f0 = f0 * f0;
    v0 = D_08AED8A0 - (-10080);
    f0 = f21 / f0;
    fcc = FCMP(f0, f24, 12);
    cnd_ = !fcc;
    f7 = BITSF(LD32(v0-10080));
    if (cnd_) { goto L_0893E19C; }
    goto L_0893E3F0;
L_0893E3F0:;
    f3 = BITSF(LD32(s2+56));
    f2 = f0 * f0;
    f0 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(s5+4));
    f5 = BITSF(LD32(s5+8));
    f3 = f3 - f0;
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    f2 = f2 * f25;
    f4 = f4 - f1;
    f5 = f5 - f0;
    v1 = FBITS(f3);
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f5);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f0 = BITSF(FBITS(f6) ^ 0x80000000u);
    f2 = f7 - f2;
    v0 = D_08AED8A8 - (-10072);
    fcc = FCMP(f1, f7, 12);
    f6 = BITSF(LD32(v0-10072));
    ST32(sp+64, FBITS(f11));
    s4 = 1;
    f6 = f2 * f6;
    ST32(sp+72, FBITS(f0));
    ST32(sp+68, FBITS(f20));
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f5));
    if (cnd_) { goto L_0893E4A8; }
    goto L_0893E47C;
L_0893E47C:;
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a1);}
    {v[1]=BITSF(a2);}
    {v[2]=BITSF(a3);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f7, 12);
    cnd_ = fcc;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_0893E55C; }
    goto L_0893E4A8;
L_0893E4A8:;
    a1 = FBITS(f6);
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a1);}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(240);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a1);}
    {v[8]=BITSF(a1);}
    {float s0=v[4];float t0=v[12];float d0=s0*t0;v[0]=d0;}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[8];float t0=v[12];float d0=s0*t0;v[4]=d0;}
    {float s0=v[20];float t0=v[12];float d0=s0*t0;v[12]=d0;}
    {u32 a_=sp+(240);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(288);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[16]=BITSF(a1);}
    {float s0=v[16];float t0=v[20];float d0=s0*t0;v[8]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[4]);}
    f4 = BITSF(v0);
    f5 = BITSF(v1);
    {float s0=v[8];float d0=sinf(s0*1.57079632679f);v[8]=d0;}
    {float s0=v[12];float d0=cosf(s0*1.57079632679f);v[12]=d0;}
    {a1=FBITS(v[8]);}
    {v0=FBITS(v[12]);}
    f2 = BITSF(a1);
    f3 = BITSF(v0);
    f4 = f8 * f4;
    f0 = f8 * f2;
    f1 = f9 * f3;
    f5 = f9 * f5;
    ST32(s3+4, FBITS(f10));
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    f1 = f1 - f0;
    f4 = f4 + f5;
    ST32(sp+100, FBITS(f10));
    ST32(s3, FBITS(f4));
    ST32(s3+8, FBITS(f1));
    ST32(sp+96, FBITS(f4));
    ST32(sp+104, FBITS(f1));
    goto L_0893E19C;
L_0893E55C:;
    ST32(s3+8, FBITS(f20));
    v0 = LD32(a0+8);
    ST32(sp+96, FBITS(f20));
    v0 = v0 - 1;
    ST32(sp+100, FBITS(f20));
    ST32(sp+104, FBITS(f20));
    ST32(s3, FBITS(f20));
    ST32(s3+4, FBITS(f20));
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893E58C; }
    goto L_0893E584;
L_0893E584:;
    v0 = 1;
    goto L_0893E1CC;
L_0893E58C:;
    func_08ABDB14(a0, 0, 0, 0);
    goto L_0893E594;
L_0893E594:;
    v0 = 1;
    goto L_0893E1CC;
}

/* 0893E59C */
rv_t func_0893E59C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893E59C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+28);
    v0 = func_08956C70(a0);
    goto L_0893E5B8;
L_0893E5B8:;
    a0 = s0 + 0;
    s1 = v0 + 0;
    { rv_t r_ = func_0893D4C0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E5C4;
L_0893E5C4:;
    ST8(s1+233, v0);
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893E5E0 */
rv_t func_0893E5E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893E5E0:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 != 0;
    ST32(sp, a1);
    if (cnd_) { goto L_0893E638; }
    goto L_0893E5FC;
L_0893E5FC:;
    a0 = LD32(s0+28);
    v0 = func_08956C70(a0);
    goto L_0893E604;
L_0893E604:;
    ST8(v0+233, 0);
    a0 = LD32(s0+28);
    v0 = func_08956C70(a0);
    goto L_0893E610;
L_0893E610:;
    v1 = LD32(v0);
    a1 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a2 = LD32(v1+128);
    t_ = a2;
    a1 = a1 + 23196;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E628;
L_0893E628:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0893E638:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0893E640;
L_0893E640:;
    a0 = LD32(s0+28);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E654;
L_0893E654:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0893E638; }
    goto L_0893E664;
L_0893E664:;
    goto L_0893E5FC;
}

/* 0893E66C */
rv_t func_0893E66C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0893E66C:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893E674 */
rv_t func_0893E674(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0893E674:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893E67C */
rv_t func_0893E67C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0893E67C:;
    sp = sp - 80;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0893E77C; }
    goto L_0893E69C;
L_0893E69C:;
    s1 = LD32(v0+48);
    a1 = sp + 0;
    v1 = 0 + 0;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893E77C; }
    goto L_0893E6B0;
L_0893E6B0:;
    ST32(s0+4, 0);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    s2 = sp + 16;
    f5 = BITSF(LD32(s0));
    f4 = BITSF(LD32(s0+8));
    f6 = BITSF(LD32(s0+4));
    v0 = FBITS(f5);
    {v[8]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f6, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    if (cnd_) { goto L_0893E740; }
    goto L_0893E6F8;
L_0893E6F8:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[0];float d0=s0/t0;v[12]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[12];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    f5 = f2;
    f6 = f0;
    ST32(sp+4, v0);
    f4 = f3;
    ST32(sp+8, FBITS(f3));
    ST32(s0, FBITS(f2));
    ST32(s0+4, v0);
    ST32(s0+8, FBITS(f3));
    goto L_0893E740;
L_0893E740:;
    f2 = f4 * f12;
    f0 = f5 * f12;
    f1 = f6 * f12;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    v0 = LD32(s1);
    v1 = LD32(v0+128);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E768;
L_0893E768:;
    v0 = LD32(s1+172);
    a1 = s0 + 0;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0893E794; }
    goto L_0893E77C;
L_0893E77C:;
    goto L_0893E780;
L_0893E780:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0893E794:;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E79C;
L_0893E79C:;
    v0 = LD32(s1);
    a1 = s2 + 0;
    v1 = LD32(v0+36);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E7B0;
L_0893E7B0:;
    goto L_0893E780;
}

/* 0893E7B8 */
rv_t func_0893E7B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0893E7B8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C25FFC - (24572);
    t1 = D_08C2600C - (24588);
    t2 = D_08C2601C - (24604);
    a1 = a1 & a0;
    v1 = t0 + 24572;
    a2 = t1 + 24588;
    cnd_ = a1 == 0;
    a3 = t2 + 24604;
    if (cnd_) { goto L_0893E870; }
    goto L_0893E7E8;
L_0893E7E8:;
    v0 = D_08AED8B8 - (-10056);
    f4 = BITSF(LD32(v0-10056));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+24572, FBITS(f2));
    ST32(t1+24588, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+24604, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0893E870;
L_0893E870:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893E878 */
rv_t func_0893E878(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893E878:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0893E7B8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893E88C;
L_0893E88C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893E898 */
u64 func_0893E898(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893E898:;
    sp = sp - 16;
    a2 = 1003;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893E8B8;
L_0893E8B8:;
    v0 = D_08AF8860 - (-30624);
    v0 = v0 - 30624;
    ST32(s0, v0);
    v0 = 999;
    ST32(s0+28, s1);
    ST32(s0+32, v0);
    ST8(s0+36, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0893E8E8 */
rv_t func_0893E8E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893E8E8:;
    v0 = D_08AF8860 - (-30624);
    v0 = v0 - 30624;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08955388(a0);
    goto L_0893E904;
L_0893E904:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893E910 */
rv_t func_0893E910(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893E910:;
    v0 = D_08AF8860 - (-30624);
    v0 = v0 - 30624;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08955388(a0);
    goto L_0893E930;
L_0893E930:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893E938;
L_0893E938:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0893E948 */
rv_t func_0893E948(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0893E948:;
    sp = sp - 16;
    v0 = 0x8037;
    s0 = a0 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0893E97C; }
    goto L_0893E968;
L_0893E968:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0893E97C:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    a0 = 1;
    if (cnd_) { goto L_0893E968; }
    goto L_0893E988;
L_0893E988:;
    v0 = LD32(a1);
    a0 = D_08C2B2A8 - (-19800);
    ST32(s0+32, v0);
    v0 = 999;
    a1 = LD32(a1);
    cnd_ = a1 == v0;
    v1 = a0 - 19800;
    if (cnd_) { goto L_0893EA28; }
    goto L_0893E9A4;
L_0893E9A4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0893E9F4; }
    goto L_0893E9C8;
L_0893E9C8:;
    a0 = LD32(a2);
    goto L_0893E9CC;
L_0893E9CC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0893EA30; }
    goto L_0893E9E4;
L_0893E9E4:;
    a2 = LD32(a2+4);
    goto L_0893E9E8;
L_0893E9E8:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0893E9CC; }
    goto L_0893E9F0;
L_0893E9F0:;
    v1 = 0 + 0;
    goto L_0893E9F4;
L_0893E9F4:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = 1; goto L_0893E968; }
    goto L_0893E9FC;
L_0893E9FC:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893EA18;
L_0893EA18:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0893EDE8(a0, a1, a2, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893EA28;
L_0893EA28:;
    a0 = 1;
    goto L_0893E968;
L_0893EA30:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0893E9E4; }
    goto L_0893EA3C;
L_0893EA3C:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0893E9E8; }
    goto L_0893EA48;
L_0893EA48:;
    goto L_0893E9F4;
}

/* 0893EA50 */
rv_t func_0893EA50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_0893EA50:;
    sp = sp - 240;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_0893EA8C; }
    goto L_0893EA80;
L_0893EA80:;
    v0 = LD32(v0+48);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a0+32); goto L_0893EAB4; }
    goto L_0893EA8C;
L_0893EA8C:;
    goto L_0893EA90;
L_0893EA90:;
    goto L_0893EA94;
L_0893EA94:;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_0893EAB4:;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893EAC4;
L_0893EAC4:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_0893EAF0; }
    goto L_0893EACC;
L_0893EACC:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD32(s3+28); goto L_0893EB20; }
    goto L_0893EAF0;
L_0893EAF0:;
    a0 = s3 + 0;
    goto L_0893EAF4;
L_0893EAF4:;
    a1 = 1001;
    v0 = func_089223A8(a0, a1);
    goto L_0893EAFC;
L_0893EAFC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0893EB10; }
    goto L_0893EB04;
L_0893EB04:;
    v0 = LD32(v0+8);
    v0 = v0 | 0x8;
    ST32(v1+8, v0);
    goto L_0893EB10;
L_0893EB10:;
    v0 = LD32(s3+8);
    v0 = v0 | 0x8;
    ST32(s3+8, v0);
    goto L_0893EA8C;
L_0893EB20:;
    v0 = LD32(v1+232);
    a0 = s4 + 0;
    v1 = LD32(a1+48);
    a2 = 0 + 0;
    a1 = LD32(v1);
    a3 = LD32(a1-16);
    v1 = v1 + a3;
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893EB44;
L_0893EB44:;
    v1 = LD32(s4);
    s0 = v0 + 0;
    v0 = LD32(v1+236);
    t_ = v0;
    a0 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893EB58;
L_0893EB58:;
    s0 = (s32)s0 < (s32)v0;
    s0 = s0 ^ 0x1;
    cnd_ = s0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0893EAF4; }
    goto L_0893EB68;
L_0893EB68:;
    v0 = LD32(s3+28);
    a1 = sp + 0;
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+144);
    t_ = v0;
    s5 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893EB84;
L_0893EB84:;
    v1 = D_08B45A9C - (23196);
    v0 = v1 + 23196;
    f1 = BITSF(LD32(v1+23196));
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f2));
    v1 = LD32(s4);
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    if (cnd_) { s5 = LD32(v0+16); goto L_0893EBBC; }
    goto L_0893EBBC;
L_0893EBBC:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_0893EA90; }
    goto L_0893EBC4;
L_0893EBC4:;
    a0 = LD32(v1-12);
    f20 = BITSF(0);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893EBE0;
L_0893EBE0:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    {u32 a_=sp+(176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+36, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_0893EC84; }
    goto L_0893EC40;
L_0893EC40:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f20 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+56, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_0893EC84;
L_0893EC84:;
    v1 = LD32(s3+28);
    s2 = sp + 64;
    a2 = sp + 32;
    v0 = LD32(v1+48);
    a1 = sp + 0;
    a0 = s2 + 0;
    a3 = LD32(v0);
    f12 = f20;
    s1 = sp + 128;
    v1 = LD32(a3-16);
    v0 = v0 + v1;
    a3 = LD32(v0+4);
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_0893ECB8;
L_0893ECB8:;
    f12 = f20;
    a0 = s1 + 0;
    func_08834F74(a0, f12);
    goto L_0893ECC4;
L_0893ECC4:;
    v0 = LD32(s4);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893ECE0;
L_0893ECE0:;
    s0 = v0 + 0;
    v0 = LD32(s4);
    a0 = LD32(v0-12);
    a0 = s4 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893ED00;
L_0893ED00:;
    a2 = v0 + 0;
    a0 = s5 + 0;
    a1 = s0 + 0;
    a3 = s2 + 0;
    t0 = s1 + 0;
    { rv_t r_ = func_0884AC90(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893ED18;
L_0893ED18:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893EA90; }
    goto L_0893ED20;
L_0893ED20:;
    v0 = D_08AED8BC - (-10052);
    f0 = BITSF(LD32(sp+128));
    f1 = BITSF(LD32(v0-10052));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0893EA94; }
    goto L_0893ED3C;
L_0893ED3C:;
    v0 = LD32(s3+24);
    a0 = s4 + 0;
    a1 = LD32(v0+4);
    v0 = D_08AED8C0 - (-10048);
    f12 = BITSF(LD32(v0-10048));
    v0 = func_089D29AC(a0, a1, f12);
    goto L_0893ED54;
L_0893ED54:;
    goto L_0893EA90;
}

/* 0893ED5C */
rv_t func_0893ED5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0893ED5C:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893ED64 */
rv_t func_0893ED64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0893ED64:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0893ED6C */
rv_t func_0893ED6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893ED6C:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0893EDA0; }
    goto L_0893ED8C;
L_0893ED8C:;
    goto L_0893ED90;
L_0893ED90:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0893EDA0:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    s0 = LD32(v0+12);
    v0 = func_089224D8(a0, a1);
    goto L_0893EDB0;
L_0893EDB0:;
    a0 = LD32(s1+28);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893EDC4;
L_0893EDC4:;
    ST32(sp, s0);
    cnd_ = s0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0893EDA0; }
    goto L_0893EDD0;
L_0893EDD0:;
    goto L_0893ED90;
}

/* 0893EDD8 */
rv_t func_0893EDD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0893EDD8:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893EDE0 */
rv_t func_0893EDE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0893EDE0:;
    return (rv_t){ v0, v1, f0 };
}

/* 0893EDE8 */
u64 func_0893EDE8(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0893EDE8:;
    sp = sp - 32;
    v0 = a2 + 0;
    a2 = 0 + 0;
    s2 = a0 + 0;
    a0 = 0x8035;
    s0 = a1 + 0;
    a3 = 0 + 0;
    a1 = 20;
    s3 = v0 & 0xff;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893EE24;
L_0893EE24:;
    a2 = LD32(v0+24);
    cnd_ = a2 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0893EE68; }
    goto L_0893EE30;
L_0893EE30:;
    f2 = BITSF(LD32(s0+8));
    v1 = LD32(s2+28);
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    a1 = v0 + 0;
    v0 = 999;
    ST32(a2+16, v0);
    a0 = v1 + 0;
    ST8(a2+12, s3);
    ST32(a2, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    cnd_ = v1 != 0;
    ST8(a2+13, 0);
    if (cnd_) { goto L_0893EE8C; }
    goto L_0893EE68;
L_0893EE68:;
    a0 = s1 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893EE70;
L_0893EE70:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0893EE8C:;
    { rv_t r_ = func_08922AA4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893EE94;
L_0893EE94:;
    goto L_0893EE68;
}

/* 0893EE9C */
rv_t func_0893EE9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0893EE9C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C260AC - (24748);
    t1 = D_08C260BC - (24764);
    t2 = D_08C260CC - (24780);
    a1 = a1 & a0;
    v1 = t0 + 24748;
    a2 = t1 + 24764;
    cnd_ = a1 == 0;
    a3 = t2 + 24780;
    if (cnd_) { goto L_0893EF54; }
    goto L_0893EECC;
L_0893EECC:;
    v0 = D_08AED8C4 - (-10044);
    f4 = BITSF(LD32(v0-10044));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f4;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f4;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f2 = f2 * f4;
    ST32(v1+4, FBITS(f5));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(v1+8, FBITS(f6));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(t0+24748, FBITS(f2));
    ST32(t1+24764, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+24780, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0893EF54;
L_0893EF54:;
    return (rv_t){ v0, v1, f0 };
}
