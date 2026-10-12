#include "game.h"

/* 08A07570 */
rv_t func_08A07570(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A07570:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08A07590;
L_08A07590:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A07590; }
    goto L_08A075B4;
L_08A075B4:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_088637F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A075C8;
L_08A075C8:;
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_08A075D0;
L_08A075D0:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A075D0; }
    goto L_08A075F4;
L_08A075F4:;
    v0 = LD_U8(sp+4);
    t0 = LD32(sp);
    v1 = 0 + 0;
    v0 = v0 & 0x1;
    ST8(s1+4, v0);
    cnd_ = t0 == 0;
    a3 = t0 + 0;
    if (cnd_) { goto L_08A07620; }
    goto L_08A07610;
L_08A07610:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    v0 = a3 < 0x5u;
    if (cnd_) { goto L_08A07628; }
    goto L_08A07620;
L_08A07620:;
    v1 = 1;
    v0 = a3 < 0x5u;
    goto L_08A07628;
L_08A07628:;
    ST8(s1+5, v1);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A07644; }
    goto L_08A07634;
L_08A07634:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A07644; }
    goto L_08A07644;
L_08A07644:;
    v0 = a3 < 0x5u;
    ST8(s1+52, v1);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A07664; }
    goto L_08A07654;
L_08A07654:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A07664; }
    goto L_08A07664;
L_08A07664:;
    v0 = a3 < 0x7u;
    ST8(s1+53, v1);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A07684; }
    goto L_08A07674;
L_08A07674:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A07684; }
    goto L_08A07684;
L_08A07684:;
    v0 = a3 < 0x8u;
    ST8(s1+6, v1);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A076A4; }
    goto L_08A07694;
L_08A07694:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A076A4; }
    goto L_08A076A4;
L_08A076A4:;
    v0 = a3 < 0x2u;
    cnd_ = v0 != 0;
    ST8(s1+54, v1);
    if (cnd_) { goto L_08A076E0; }
    goto L_08A076B0;
L_08A076B0:;
    a1 = s1 + 24;
    a2 = 0 + 0;
    goto L_08A076B8;
L_08A076B8:;
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
    if (cnd_) { goto L_08A076B8; }
    goto L_08A076E0;
L_08A076E0:;
    v0 = a3 < 0x3u;
    cnd_ = v0 != 0;
    v0 = a3 < 0x4u;
    if (cnd_) { goto L_08A07720; }
    goto L_08A076EC;
L_08A076EC:;
    a1 = s1 + 16;
    a2 = 0 + 0;
    goto L_08A076F4;
L_08A076F4:;
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
    if (cnd_) { goto L_08A076F4; }
    goto L_08A0771C;
L_08A0771C:;
    v0 = a3 < 0x4u;
    goto L_08A07720;
L_08A07720:;
    cnd_ = v0 != 0;
    v0 = a3 < 0x5u;
    if (cnd_) { goto L_08A0775C; }
    goto L_08A07728;
L_08A07728:;
    a1 = s1 + 20;
    a2 = 0 + 0;
    goto L_08A07730;
L_08A07730:;
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
    if (cnd_) { goto L_08A07730; }
    goto L_08A07758;
L_08A07758:;
    v0 = a3 < 0x5u;
    goto L_08A0775C;
L_08A0775C:;
    cnd_ = v0 != 0;
    v0 = t0 < 0x6u;
    if (cnd_) { goto L_08A077A8; }
    goto L_08A07764;
L_08A07764:;
    a1 = s1 + 8;
    a2 = 0 + 0;
    goto L_08A0776C;
L_08A0776C:;
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
    if (cnd_) { goto L_08A0776C; }
    goto L_08A07794;
L_08A07794:;
    a0 = s1 + 56;
    a1 = s0 + 0;
    func_08A26CF0(a0, a1);
    goto L_08A077A0;
L_08A077A0:;
    t0 = LD32(sp);
    v0 = t0 < 0x6u;
    goto L_08A077A8;
L_08A077A8:;
    cnd_ = v0 != 0;
    v0 = t0 < 0x7u;
    if (cnd_) { goto L_08A077E4; }
    goto L_08A077B0;
L_08A077B0:;
    a1 = s1 + 12;
    a2 = 0 + 0;
    goto L_08A077B8;
L_08A077B8:;
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
    if (cnd_) { goto L_08A077B8; }
    goto L_08A077E0;
L_08A077E0:;
    v0 = t0 < 0x7u;
    goto L_08A077E4;
L_08A077E4:;
    cnd_ = v0 != 0;
    v1 = LD32(s1);
    if (cnd_) { goto L_08A077FC; }
    goto L_08A077EC;
L_08A077EC:;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+40));
    ST32(s1+8, FBITS(f0));
    goto L_08A077FC;
L_08A077FC:;
    v0 = LD32(v1-12);
    f0 = BITSF(LD32(s1+8));
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+8, FBITS(f1)); goto L_08A0781C; }
    goto L_08A0781C;
L_08A0781C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A07830 */
rv_t func_08A07830(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A07830:;
    sp = sp - 48;
    v0 = 8;
    a2 = sp + 0;
    ST32(sp, v0);
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08A07860;
L_08A07860:;
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
    if (cnd_) { goto L_08A07860; }
    goto L_08A07888;
L_08A07888:;
    v0 = LD32(s2);
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    { rv_t r_ = func_08863504(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0789C;
L_08A0789C:;
    a1 = LD_U8(s2+53);
    a2 = LD_U8(s2+6);
    v0 = LD_U8(s2+5);
    v1 = LD_U8(s2+4);
    a0 = LD_U8(s2+52);
    s1 = (s1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    s1 = (s1 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    s1 = (s1 & ~(0x1u << 2)) | ((a0 & 0x1) << 2);
    s1 = (s1 & ~(0x1u << 3)) | ((a1 & 0x1) << 3);
    s1 = (s1 & ~(0x1u << 4)) | ((a2 & 0x1) << 4);
    ST32(sp+4, s1);
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_08A078D0;
L_08A078D0:;
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
    if (cnd_) { goto L_08A078D0; }
    goto L_08A078F8;
L_08A078F8:;
    v0 = LD32(s2+24);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_08A07908;
L_08A07908:;
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
    if (cnd_) { goto L_08A07908; }
    goto L_08A07930;
L_08A07930:;
    v0 = LD32(s2+16);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_08A07940;
L_08A07940:;
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
    if (cnd_) { goto L_08A07940; }
    goto L_08A07968;
L_08A07968:;
    v0 = LD32(s2+20);
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, v0);
    goto L_08A07978;
L_08A07978:;
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
    if (cnd_) { goto L_08A07978; }
    goto L_08A079A0;
L_08A079A0:;
    f0 = BITSF(LD32(s2+8));
    a2 = sp + 20;
    a1 = 0 + 0;
    ST32(sp+20, FBITS(f0));
    goto L_08A079B0;
L_08A079B0:;
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
    if (cnd_) { goto L_08A079B0; }
    goto L_08A079D8;
L_08A079D8:;
    a1 = s0 + 0;
    a0 = s2 + 56;
    { u64 r_ = func_08A26C74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A079E4;
L_08A079E4:;
    v0 = LD32(s2+12);
    a2 = sp + 24;
    a1 = 0 + 0;
    ST32(sp+24, v0);
    goto L_08A079F4;
L_08A079F4:;
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
    if (cnd_) { goto L_08A079F4; }
    goto L_08A07A1C;
L_08A07A1C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A07A34 */
rv_t func_08A07A34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A07A34:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_08863F58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07A4C;
L_08A07A4C:;
    v0 = v0 + 32;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A07A5C */
rv_t func_08A07A5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A07A5C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = 92;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A07A90;
L_08A07A90:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A07AC8; }
    goto L_08A07A98;
L_08A07A98:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A07AB0; }
    goto L_08A07AA8;
L_08A07AA8:;
    func_08A08244(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A07AB0;
L_08A07AB0:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07AC8;
L_08A07AC8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A07ADC */
rv_t func_08A07ADC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A07ADC:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A07B30; }
    goto L_08A07B00;
L_08A07B00:;
    a0 = v0 + 0;
    v0 = LD32(v0);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_08A07B34; }
    goto L_08A07B10;
L_08A07B10:;
    { rv_t r_ = func_088BA5D4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07B18;
L_08A07B18:;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07B28;
L_08A07B28:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A07B40; }
    goto L_08A07B30;
L_08A07B30:;
    goto L_08A07B34;
L_08A07B34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A07B40:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A07B54;
L_08A07B54:;
    goto L_08A07B34;
}

/* 08A07B5C */
rv_t func_08A07B5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A07B5C:;
    sp = sp - 32;
    v1 = D_08B45A9C - (23196);
    s2 = v1 + 23196;
    s1 = a0 + 0;
    a1 = LD32(a0);
    f1 = BITSF(LD32(v1+23196));
    f2 = BITSF(LD32(s2+4));
    v0 = LD32(a1-12);
    f0 = BITSF(LD32(s2+8));
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    cnd_ = a0 != 0;
    ST32(sp+8, FBITS(f0));
    if (cnd_) { goto L_08A07CD8; }
    goto L_08A07BA8;
L_08A07BA8:;
    v0 = LD32(a1+96);
    s0 = LD32(a1-12);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07BB8;
L_08A07BB8:;
    a0 = v0 + 0;
    { rv_t r_ = func_088BA110(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07BC0;
L_08A07BC0:;
    s0 = s1 + s0;
    ST32(s0+4, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A07BF8; }
    goto L_08A07BE0;
L_08A07BE0:;
    goto L_08A07BE4;
L_08A07BE4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A07BF8:;
    a1 = s2 + 0;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07C00;
L_08A07C00:;
    v1 = LD32(s1);
    a1 = sp + 0;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07C18;
L_08A07C18:;
    v0 = LD32(s1);
    a1 = D_08B45AA8 - (23208);
    a1 = a1 + 23208;
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07C34;
L_08A07C34:;
    v1 = LD32(s1);
    a1 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A07C4C;
L_08A07C4C:;
    v1 = LD32(s1);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A07C64;
L_08A07C64:;
    a0 = LD32(s1);
    v0 = LD32(a0-16);
    v1 = LD32(a0-12);
    v0 = s1 + v0;
    v1 = s1 + v1;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    func_088BB2C4(a0, a1);
    goto L_08A07C84;
L_08A07C84:;
    v1 = LD32(s1);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB56C(a0, a1);
    goto L_08A07C9C;
L_08A07C9C:;
    v1 = LD32(s1);
    a1 = (u32)-3;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB578(a0, a1);
    goto L_08A07CB4;
L_08A07CB4:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+120);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07CD0;
L_08A07CD0:;
    goto L_08A07BE4;
L_08A07CD8:;
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07CE0;
L_08A07CE0:;
    a0 = LD32(s1);
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(a0-12);
    ST32(sp, FBITS(f0));
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    f1 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A07D0C;
L_08A07D0C:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    ST32(v0+4, 0);
    a1 = LD32(s1);
    goto L_08A07BA8;
}

/* 08A07D24 */
rv_t func_08A07D24(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_08A07D24:;
    v0 = LD_U8(a0+29);
    cnd_ = v0 == 0;
    v0 = LD_U8(a0+28);
    if (cnd_) { goto L_08A07D7C; }
    goto L_08A07D30;
L_08A07D30:;
    f3 = BITSF(0);
    cnd_ = v0 == 0;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_08A07D80; }
    goto L_08A07D3C;
L_08A07D3C:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+44));
    f1 = BITSF(LD32(a0+32));
    f0 = f0 * f2;
    f1 = f1 - f0;
    fcc = FCMP(f1, f3, 14);
    cnd_ = !fcc;
    ST32(a0+32, FBITS(f1));
    if (cnd_) { goto L_08A07D74; }
    goto L_08A07D64;
L_08A07D64:;
    ST32(a0+32, FBITS(f3));
    ST8(a0+28, 0);
    ST8(a0+29, 0);
    return (rv_t){ v0, v1, f0 };
L_08A07D74:;
    return (rv_t){ v0, v1, f0 };
L_08A07D7C:;
    v0 = v0 & 0xff;
    goto L_08A07D80;
L_08A07D80:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A07D74; }
    goto L_08A07D88;
L_08A07D88:;
    f3 = BITSF(LD32(a0+32));
    f2 = BITSF(LD32(a0+36));
    fcc = FCMP(f3, f2, 14);
    cnd_ = !fcc;
    ST8(a0+29, 0);
    if (cnd_) { goto L_08A07D74; }
    goto L_08A07DA0;
L_08A07DA0:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+44));
    f0 = f0 * f1;
    f0 = f3 + f0;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_08A07D74; }
    goto L_08A07DC4;
L_08A07DC4:;
    ST32(a0+32, FBITS(f2));
    return (rv_t){ v0, v1, f0 };
}

/* 08A07DCC */
rv_t func_08A07DCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A07DCC:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a3 & 0xff;
    s1 = a1 + 0;
    t0 = LD32(a0);
    v0 = LD32(t0-12);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A08230; }
    goto L_08A07E08;
L_08A07E08:;
    v0 = LD32(t0-12);
    a1 = s1 + 0;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A08208; }
    goto L_08A07E20;
L_08A07E20:;
    a0 = 0x8031;
    goto L_08A07E24;
L_08A07E24:;
    a1 = 24;
    a2 = 0 + 0;
    cnd_ = s2 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A07E50; }
    goto L_08A07E34;
L_08A07E34:;
    goto L_08A07E38;
L_08A07E38:;
    sp = sp + 32;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
L_08A07E50:;
    { u64 r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A07E58;
L_08A07E58:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08A07E34; }
    goto L_08A07E60;
L_08A07E60:;
    v0 = LD32(v0+24);
    a0 = t0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A07E34; }
    goto L_08A07E74;
L_08A07E74:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    ST32(v0+8, FBITS(f2));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    {v[112]=BITSF(LD32(s3+(0)));}
    {v[113]=BITSF(LD32(s3+(4)));}
    {v[114]=BITSF(LD32(s3+(8)));}
    {v[116]=BITSF(LD32(s3+(12)));}
    {v[117]=BITSF(LD32(s3+(16)));}
    {v[118]=BITSF(LD32(s3+(20)));}
    {v[120]=BITSF(LD32(s3+(24)));}
    {v[121]=BITSF(LD32(s3+(28)));}
    {v[122]=BITSF(LD32(s3+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A0810C; }
    goto L_08A07EC8;
L_08A07EC8:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A0804C; }
    goto L_08A07ED8;
L_08A07ED8:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A07F70; }
    goto L_08A07F00;
L_08A07F00:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A07F4C; }
    goto L_08A07F3C;
L_08A07F3C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A07F4C;
L_08A07F4C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A07F90; }
    goto L_08A07F5C;
L_08A07F5C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A07F90; }
    goto L_08A07F6C;
L_08A07F6C:;
    goto L_08A07F70;
L_08A07F70:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A07F90; }
    goto L_08A07F84;
L_08A07F84:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A07F90;
L_08A07F90:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A08020; }
    goto L_08A07FB0;
L_08A07FB0:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A07FFC; }
    goto L_08A07FEC;
L_08A07FEC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A07FFC;
L_08A07FFC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A08040; }
    goto L_08A0800C;
L_08A0800C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A08040; }
    goto L_08A0801C;
L_08A0801C:;
    goto L_08A08020;
L_08A08020:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A08040; }
    goto L_08A08034;
L_08A08034:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A08040;
L_08A08040:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A081C4; }
    goto L_08A08048;
L_08A08048:;
    goto L_08A0804C;
L_08A0804C:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A080E0; }
    goto L_08A08070;
L_08A08070:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A080BC; }
    goto L_08A080AC;
L_08A080AC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A080BC;
L_08A080BC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A08100; }
    goto L_08A080CC;
L_08A080CC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A08100; }
    goto L_08A080DC;
L_08A080DC:;
    goto L_08A080E0;
L_08A080E0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A08100; }
    goto L_08A080F4;
L_08A080F4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A08100;
L_08A08100:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A081C4; }
    goto L_08A08108;
L_08A08108:;
    goto L_08A0810C;
L_08A0810C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A081A0; }
    goto L_08A08130;
L_08A08130:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=vr69;float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;vr76=d0;}
    {float s0=vr76;float t0=vr64;float d0=s0*t0;vr76=d0;}
    {float s0=vr76;float t0=vr76;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=vr73;float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=vr76;float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A0817C; }
    goto L_08A0816C;
L_08A0816C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A0817C;
L_08A0817C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A081C0; }
    goto L_08A0818C;
L_08A0818C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A081C0; }
    goto L_08A0819C;
L_08A0819C:;
    goto L_08A081A0;
L_08A081A0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A081C0; }
    goto L_08A081B4;
L_08A081B4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A081C0;
L_08A081C0:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08A081C4;
L_08A081C4:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(v0+(12),FBITS(v[96]));}
    {ST32(v0+(16),FBITS(v[97]));}
    {ST32(v0+(20),FBITS(v[98]));}
    v0 = LD32(t0+28);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v1 = 2;
    v0 = s0 + v0;
    a3 = LD32(v0+4);
    ST32(t0, v1);
    ST32(t0+4, a3);
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08200;
L_08A08200:;
    goto L_08A07E38;
L_08A08208:;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088BAB18(a0, a1, t1, t2, t3); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08210;
L_08A08210:;
    v1 = LD32(s0);
    a1 = s3 + 0;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088BAB50(a0, a1); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08228;
L_08A08228:;
    a0 = 0x8031;
    goto L_08A07E24;
L_08A08230:;
    v0 = LD32(t0+92);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0823C;
L_08A0823C:;
    t0 = LD32(s0);
    goto L_08A07E08;
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;
}

/* 08A08244 */
void func_08A08244(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A08244:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A083D8; }
    goto L_08A08268;
L_08A08268:;
    v1 = LD32(a1);
    v0 = 1;
    ST8(a1+80, v0);
    s0 = a0 + 16;
    v0 = LD32(v1-12);
    s1 = a1 + v0;
    v1 = LD32(s1);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08290;
L_08A08290:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0829C;
L_08A0829C:;
    v1 = LD32(s1);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A082AC;
L_08A082AC:;
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
    if (cnd_) { v0 = LD32(s1+12); goto L_08A082E0; }
    goto L_08A082E0;
L_08A082E0:;
    ST32(s2+32, v0);
    v1 = LD32(s1+20);
    ST32(s2+36, v1);
    v0 = LD32(s1+20);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A082FC; }
    goto L_08A082F8;
L_08A082F8:;
    a0 = LD32(s1+28);
    goto L_08A082FC;
L_08A082FC:;
    ST32(s2+40, a0);
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
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(s1+62);
    ST8(s2+66, v1);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s3+12); goto L_08A08368; }
    goto L_08A08340;
L_08A08340:;
    f1 = BITSF(LD32(s3+8));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s3+12); goto L_08A08368; }
    goto L_08A08358;
L_08A08358:;
    f0 = BITSF(LD32(s2+28));
    f0 = f0 / f1;
    ST32(s2+28, FBITS(f0));
    v1 = LD32(s3+12);
    goto L_08A08368;
L_08A08368:;
    ST32(s2+84, v1);
    v0 = LD_U8(s3+5);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A08380; }
    goto L_08A08378;
L_08A08378:;
    v0 = LD_U8(s3+64);
    a0 = 0 < v0;
    goto L_08A08380;
L_08A08380:;
    v0 = LD32(s2+88);
    v0 = (v0 & ~(0x1u << 0)) | ((a0 & 0x1) << 0);
    ST32(s2+88, v0);
    a0 = s3 + 0;
    v1 = LD32(s3+24);
    ST32(s2+68, v1);
    a1 = LD32(s3+16);
    ST32(s2+72, a1);
    v1 = LD32(s3+20);
    ST32(s2+76, v1);
    f0 = BITSF(LD32(s3+8));
    ST32(s2+80, FBITS(f0));
    v1 = LD_U8(s3+52);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(s2+88, v0);
    v1 = LD_U8(s3+53);
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s2+88, v0);
    { rv_t r_ = func_08A06E00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A083CC;
L_08A083CC:;
    v1 = LD32(s2+88);
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s2+88, v1);
    goto L_08A083D8;
L_08A083D8:;
    sp = sp + 32;
    return;
}

/* 08A083F4 */
rv_t func_08A083F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A083F4:;
    sp = sp - 128;
    s2 = a2 & 0xff;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    f20 = f12;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A084FC; }
    goto L_08A08424;
L_08A08424:;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08434;
L_08A08434:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A08500; }
    goto L_08A0843C;
L_08A0843C:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    a0 = sp + 0;
    a1 = s1 + 0;
    a2 = 92;
    f12 = f20;
    cnd_ = v1 == 0;
    ST32(s0+8, FBITS(f20));
    if (cnd_) { goto L_08A08518; }
    goto L_08A0845C;
L_08A0845C:;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08464;
L_08A08464:;
    v1 = LD32(s0);
    f1 = BITSF(LD32(sp+28));
    f0 = BITSF(LD32(sp+80));
    a0 = LD32(v1-12);
    a2 = s2 + 0;
    f1 = f1 * f0;
    a0 = s0 + a0;
    f12 = f20;
    a1 = sp + 0;
    ST32(sp+28, FBITS(f1));
    goto L_08A0848C;
L_08A0848C:;
    { rv_t r_ = func_0885DE10(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08494;
L_08A08494:;
    v0 = LD32(s0);
    a1 = LD32(s1+88);
    a0 = s0 + 0;
    a2 = LD32(v0+40);
    t_ = a2;
    a1 = a1 & 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A084AC;
L_08A084AC:;
    v1 = LD32(s1+84);
    a0 = s0 + 0;
    ST32(s0+24, v1);
    v0 = LD32(s1+68);
    ST32(s0+44, v0);
    v1 = LD32(s1+52);
    ST32(s0+28, v1);
    v0 = LD32(s1+72);
    v1 = LD32(s1+76);
    ST32(s0+32, v0);
    ST32(s0+36, v1);
    f0 = BITSF(LD32(s1+80));
    ST32(s0+52, FBITS(f0));
    a1 = LD32(s1+88);
    a2 = (a1 >> 2) & 0x1;
    a1 = (a1 >> 1) & 0x1;
    { rv_t r_ = func_08A044A4(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A084F0;
L_08A084F0:;
    v0 = LD32(s1+88);
    v0 = (v0 >> 3) & 0x1;
    ST8(s0+48, v0);
    goto L_08A084FC;
L_08A084FC:;
    goto L_08A08500;
L_08A08500:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08A08518:;
    v0 = LD32(s0);
    a2 = s2 + 0;
    a1 = s1 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    goto L_08A0848C;
}

/* 08A08530 */
void func_08A08530(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A08530:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    f20 = f12;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A08608; }
    goto L_08A08558;
L_08A08558:;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08568;
L_08A08568:;
    f13 = f20;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A08608; }
    goto L_08A08574;
L_08A08574:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    f12 = BITSF(LD32(s1+28));
    if (cnd_) { goto L_08A0858C; }
    goto L_08A08584;
L_08A08584:;
    f0 = BITSF(LD32(s1+80));
    f12 = f12 * f0;
    goto L_08A0858C;
L_08A0858C:;
    v0 = LD32(s0);
    ST32(s0+8, FBITS(f20));
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A085A0;
L_08A085A0:;
    v0 = LD32(s0);
    a1 = LD32(s1+88);
    a0 = s0 + 0;
    a2 = LD32(v0+40);
    t_ = a2;
    a1 = a1 & 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A085B8;
L_08A085B8:;
    v1 = LD32(s1+84);
    a0 = s0 + 0;
    ST32(s0+24, v1);
    v0 = LD32(s1+68);
    ST32(s0+44, v0);
    v1 = LD32(s1+52);
    ST32(s0+28, v1);
    v0 = LD32(s1+72);
    v1 = LD32(s1+76);
    ST32(s0+32, v0);
    ST32(s0+36, v1);
    f0 = BITSF(LD32(s1+80));
    ST32(s0+52, FBITS(f0));
    a1 = LD32(s1+88);
    a2 = (a1 >> 2) & 0x1;
    a1 = (a1 >> 1) & 0x1;
    { rv_t r_ = func_08A044A4(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A085FC;
L_08A085FC:;
    v0 = LD32(s1+88);
    v0 = (v0 >> 3) & 0x1;
    ST8(s0+48, v0);
    goto L_08A08608;
L_08A08608:;
    sp = sp + 32;
    return;
}

/* 08A08620 */
void func_08A08620(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A08620:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08644;
L_08A08644:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 19;
    t0 = 92;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A08660;
L_08A08660:;
    a0 = s2 + 0;
    func_08A08688(a0);
    goto L_08A08668;
L_08A08668:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_08A08670;
L_08A08670:;
    sp = sp + 16;
    return;
}

/* 08A08688 */
void func_08A08688(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A08688:;
    sp = sp - 128;
    f20 = BITSF(0);
    s0 = a0 + 0;
    func_08864D34(a0);
    goto L_08A086A4;
L_08A086A4:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 68;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A086C8;
L_08A086C8:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 72;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A086EC;
L_08A086EC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 76;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A08710;
L_08A08710:;
    v0 = D_08AEF6B8 - (-2376);
    v1 = D_08AEF6BC - (-2372);
    f13 = BITSF(LD32(v0-2376));
    f14 = BITSF(LD32(v1-2372));
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 80;
    t0 = 32;
    t1 = 10;
    t2 = 1;
    t3 = 2;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_08A08748;
L_08A08748:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 84;
    t0 = 32;
    t1 = 3;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_08A0876C;
L_08A0876C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 88;
    t0 = 32;
    t1 = 4;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_08A08790;
L_08A08790:;
    sp = sp + 128;
    return;
}

/* 08A087A4 */
rv_t func_08A087A4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A087A4:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A088C8; }
    goto L_08A087D8;
L_08A087D8:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF6C0 - (-2368);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2368));
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
    t0 = D_08C2C2EC - (-15636);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C2FC - (-15620);
    a3 = D_08C2C30C - (-15604);
    v1 = t0 - 15636;
    a1 = v0 - 15620;
    a2 = a3 - 15604;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2C31C - (-15588);
    s0 = s3 - 15588;
    ST32(v1+8, FBITS(f5));
    a0 = 128;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-15620, FBITS(f5));
    v0 = 32;
    ST32(t0-15636, FBITS(f1));
    ST32(a3-15604, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08890;
L_08A08890:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-15588, v0);
    if (cnd_) { goto L_08A088BC; }
    goto L_08A088A0;
L_08A088A0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A088A8;
L_08A088A8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A088A8; }
    goto L_08A088BC;
L_08A088BC:;
    v0 = s3 - 15588;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A088C8;
L_08A088C8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A088EC; }
    goto L_08A088DC;
L_08A088DC:;
    v0 = D_08C2C31C - (-15588);
    a0 = LD32(v0-15588);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A08904; }
    goto L_08A088EC;
L_08A088EC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A08904:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0890C;
L_08A0890C:;
    goto L_08A088EC;
}

/* 08A08914 */
rv_t func_08A08914(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A08914:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A087A4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08928;
L_08A08928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A08934 */
rv_t func_08A08934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A08934:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A087A4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08948;
L_08A08948:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A08954 */
u32 func_08A08954(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A08954:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v0 = func_08973CD8(a0, a1);
    goto L_08A0896C;
L_08A0896C:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A089A0; }
    goto L_08A08978;
L_08A08978:;
    v0 = D_08C2B89C - (-18276);
    goto L_08A0897C;
L_08A0897C:;
    v1 = LD32(v0-18276);
    cnd_ = v1 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A08990; }
    goto L_08A08988;
L_08A08988:;
    s0 = 1;
    goto L_08A0898C;
L_08A0898C:;
    v0 = s0 + 0;
    goto L_08A08990;
L_08A08990:;
    sp = sp + 16;
    return v0;
L_08A089A0:;
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A089A8;
L_08A089A8:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = 1; goto L_08A0898C; }
    goto L_08A089B0;
L_08A089B0:;
    v0 = D_08C2B89C - (-18276);
    goto L_08A0897C;
}

/* 08A089B8 */
void func_08A089B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A089B8:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = a0 + 80;
    func_08873BF8(a0);
    goto L_08A089D8;
L_08A089D8:;
    a1 = D_08B14790 - (18320);
    a1 = a1 + 18320;
    a1 = a1 + 4;
    a3 = 1;
    a2 = 999;
    a0 = s2 + 0;
    func_088AE374(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A089F4;
L_08A089F4:;
    v0 = D_08B1473C - (18236);
    v0 = v0 + 18236;
    v1 = v0 + 56;
    ST32(s2+80, v1);
    a0 = 72;
    s0 = D_08ADEB50 - (-5296);
    ST32(s2, v0);
    v0 = D_08C2C3E0 - (-15392);
    s0 = s0 - 5296;
    ST32(s2+12, 0);
    ST32(s2+16, 0);
    ST8(s2+40, 0);
    ST32(s2+44, 0);
    ST32(s2+48, 0);
    ST32(s2+52, 0);
    ST32(s2+56, 0);
    ST8(s2+60, 0);
    ST32(s2+64, 0);
    ST8(s2+68, 0);
    ST32(s2+72, 0);
    ST8(s2+76, 0);
    ST32(v0-15392, s2);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08A50;
L_08A08A50:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    func_08A5FCC0(a0);
    goto L_08A08A5C;
L_08A08A5C:;
    ST32(s2+28, s1);
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08A68;
L_08A08A68:;
    a1 = D_08C2C3E5 - (-15387);
    a0 = s0 + 0;
    a1 = a1 - 15387;
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A08ABC; }
    goto L_08A08A80;
L_08A08A80:;
    a0 = D_08C2C3E8 - (-15384);
    goto L_08A08A84;
L_08A08A84:;
    a1 = 0 + 0;
    a2 = 256;
    a0 = a0 - 15384;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08A94;
L_08A08A94:;
    a0 = s2 + 0;
    func_08A09EFC(a0);
    goto L_08A08A9C;
L_08A08A9C:;
    func_08A0BC7C();
    goto L_08A08AA4;
L_08A08AA4:;
    sp = sp + 16;
    return;
L_08A08ABC:;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08AC4;
L_08A08AC4:;
    a0 = D_08C2C3E8 - (-15384);
    goto L_08A08A84;
}

/* 08A08ACC */
rv_t func_08A08ACC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A08ACC:;
    v0 = D_08B1473C - (18236);
    v0 = v0 + 18236;
    v1 = v0 + 56;
    ST32(a0+80, v1);
    sp = sp - 16;
    ST32(a0, v0);
    s1 = a0 + 80;
    s0 = a0 + 0;
    func_08A0BD40();
    goto L_08A08AFC;
L_08A08AFC:;
    a0 = 0 + 0;
    func_08A2ABB8(a0);
    goto L_08A08B04;
L_08A08B04:;
    v1 = LD32(s0+28);
    v0 = D_08C2C3E0 - (-15392);
    ST32(v0-15392, 0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A08B48; }
    goto L_08A08B18;
L_08A08B18:;
    a1 = D_08B14790 - (18320);
    goto L_08A08B1C;
L_08A08B1C:;
    a1 = a1 + 18320;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_088AE4E4(a0, a1, 0, 0);
    goto L_08A08B2C;
L_08A08B2C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08B34;
L_08A08B34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A08B48:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08B58;
L_08A08B58:;
    a1 = D_08B14790 - (18320);
    goto L_08A08B1C;
}

/* 08A08B60 */
rv_t func_08A08B60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A08B60:;
    v0 = D_08B1473C - (18236);
    v0 = v0 + 18236;
    v1 = v0 + 56;
    ST32(a0+80, v1);
    sp = sp - 16;
    ST32(a0, v0);
    s1 = a0 + 80;
    s0 = a0 + 0;
    func_08A0BD40();
    goto L_08A08B90;
L_08A08B90:;
    a0 = 0 + 0;
    func_08A2ABB8(a0);
    goto L_08A08B98;
L_08A08B98:;
    v1 = LD32(s0+28);
    v0 = D_08C2C3E0 - (-15392);
    ST32(v0-15392, 0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A08BE4; }
    goto L_08A08BAC;
L_08A08BAC:;
    a1 = D_08B14790 - (18320);
    goto L_08A08BB0;
L_08A08BB0:;
    a1 = a1 + 18320;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_088AE4E4(a0, a1, 0, 0);
    goto L_08A08BC0;
L_08A08BC0:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08BC8;
L_08A08BC8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08BD0;
L_08A08BD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A08BE4:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08BF4;
L_08A08BF4:;
    a1 = D_08B14790 - (18320);
    goto L_08A08BB0;
}

/* 08A08BFC */
u64 func_08A08BFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A08BFC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08C10;
L_08A08C10:;
    cnd_ = s0 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A08C20; }
    goto L_08A08C18;
L_08A08C18:;
    v0 = D_08C2C3E0 - (-15392);
    v1 = LD32(v0-15392);
    goto L_08A08C20;
L_08A08C20:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A08C34 */
void func_08A08C34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A08C34:;
    sp = sp - 32;
    s0 = a0 + 0;
    { u64 r_ = func_08897BC8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08C50;
L_08A08C50:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A08C70; }
    goto L_08A08C58;
L_08A08C58:;
    goto L_08A08C5C;
L_08A08C5C:;
    sp = sp + 32;
    return;
L_08A08C70:;
    v0 = func_08A0BD4C();
    goto L_08A08C78;
L_08A08C78:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A08C5C; }
    goto L_08A08C80;
L_08A08C80:;
    s1 = D_08C2CE64 - (-12700);
    v0 = LD_U8(s1-12700);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A08CD8; }
    goto L_08A08C90;
L_08A08C90:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08C98;
L_08A08C98:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = D_08C2CE67 - (-12697);
    if (cnd_) { goto L_08A08CD8; }
    goto L_08A08CA4;
L_08A08CA4:;
    a0 = LD_U8(v0-12697);
    v1 = 1;
    v0 = D_08C2B3B4 - (-19532);
    cnd_ = a0 == 0;
    ST8(v0-19532, v1);
    if (cnd_) { goto L_08A08C58; }
    goto L_08A08CB8;
L_08A08CB8:;
    v0 = D_08C2D0BC - (-12100);
    v1 = LD32(v0-12100);
    cnd_ = v1 == 0;
    v1 = 3;
    if (cnd_) { goto L_08A08CCC; }
    goto L_08A08CC8;
L_08A08CC8:;
    v1 = 4;
    goto L_08A08CCC;
L_08A08CCC:;
    v0 = D_08C28DC8 - (-29240);
    ST32(v0-29240, v1);
    goto L_08A08C58;
L_08A08CD8:;
    a0 = LD32(s0+28);
    { rv_t r_ = func_08A5E3B8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08CE0;
L_08A08CE0:;
    v0 = D_08B2C1BC - (-15940);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A08D00; }
    goto L_08A08CF0;
L_08A08CF0:;
    a0 = LD32(s0+28);
    { rv_t r_ = func_08A5E3E0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08CF8;
L_08A08CF8:;
    goto L_08A08C5C;
L_08A08D00:;
    v0 = func_08A5D404();
    goto L_08A08D08;
L_08A08D08:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_08A08D58; }
    goto L_08A08D10;
L_08A08D10:;
    { rv_t r_ = func_08A5D450(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08D18;
L_08A08D18:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A08C5C; }
    goto L_08A08D20;
L_08A08D20:;
    a0 = LD32(s0+28);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 6;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08D34;
L_08A08D34:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_08A08C5C; }
    goto L_08A08D48;
L_08A08D48:;
    f0 = func_08A5D3BC();
    goto L_08A08D50;
L_08A08D50:;
    goto L_08A08C5C;
L_08A08D58:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08D68;
L_08A08D68:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s0+28); goto L_08A08D9C; }
    goto L_08A08D7C;
L_08A08D7C:;
    v0 = LD_U8(s1-12700);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_08A08D9C; }
    goto L_08A08D88;
L_08A08D88:;
    v1 = LD32(s0+4);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A08E94; }
    goto L_08A08D98;
L_08A08D98:;
    a0 = LD32(s0+28);
    goto L_08A08D9C;
L_08A08D9C:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08DAC;
L_08A08DAC:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A08E60; }
    goto L_08A08DC0;
L_08A08DC0:;
    v0 = LD32(s0+44);
    goto L_08A08DC4;
L_08A08DC4:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+68, 0); goto L_08A08C58; }
    goto L_08A08DCC;
L_08A08DCC:;
    v1 = LD32(s0+4);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A08DE4; }
    goto L_08A08DDC;
L_08A08DDC:;
    ST8(s0+68, 0);
    goto L_08A08C58;
L_08A08DE4:;
    ST8(s0+68, v0);
    f20 = BITSF(0);
    a0 = LD32(s0+28);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 3;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08E00;
L_08A08E00:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s0+28); goto L_08A08E34; }
    goto L_08A08E10;
L_08A08E10:;
    a0 = LD32(s0+20);
    { rv_t r_ = func_08974C50(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08E18;
L_08A08E18:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A08C58; }
    goto L_08A08E24;
L_08A08E24:;
    func_08A0AB98(a0, a1, 0, 0);
    goto L_08A08E2C;
L_08A08E2C:;
    goto L_08A08C5C;
L_08A08E34:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08E44;
L_08A08E44:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_08A08C5C; }
    goto L_08A08E54;
L_08A08E54:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08A08E24;
L_08A08E60:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08E68;
L_08A08E68:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+44); goto L_08A08DC4; }
    goto L_08A08E74;
L_08A08E74:;
    v1 = LD32(s0+4);
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s0+44); goto L_08A08DC4; }
    goto L_08A08E84;
L_08A08E84:;
    func_08A2AAF4();
    goto L_08A08E8C;
L_08A08E8C:;
    v0 = LD32(s0+44);
    goto L_08A08DC4;
L_08A08E94:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08E9C;
L_08A08E9C:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_08A08D9C; }
    goto L_08A08EA8;
L_08A08EA8:;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08EB0;
L_08A08EB0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_08A08D9C; }
    goto L_08A08EB8;
L_08A08EB8:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A08EE8; }
    goto L_08A08ECC;
L_08A08ECC:;
    a0 = 0xa4b30000u;
    goto L_08A08ED0;
L_08A08ED0:;
    a0 = a0 | 0x256b;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08EE0;
L_08A08EE0:;
    a0 = LD32(s0+28);
    goto L_08A08D9C;
L_08A08EE8:;
    a0 = 1;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A08EF0;
L_08A08EF0:;
    a0 = 0xa4b30000u;
    goto L_08A08ED0;
}

/* 08A08EF8 */
void func_08A08EF8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_08A08EF8:;
    sp = sp - 224;
    v0 = 7;
    s1 = a1 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A08F3C; }
    goto L_08A08F20;
L_08A08F20:;
    v0 = 0 + 0;
    goto L_08A08F24;
L_08A08F24:;
    sp = sp + 224;
    return;
L_08A08F3C:;
    v0 = LD32(a0+8);
    cnd_ = v0 != v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A08F24; }
    goto L_08A08F48;
L_08A08F48:;
    v0 = D_08C2933C - (-27844);
    s2 = v0 - 27844;
    v0 = func_08978770();
    goto L_08A08F54;
L_08A08F54:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = 64;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08F64;
L_08A08F64:;
    v0 = func_08978CCC();
    goto L_08A08F6C;
L_08A08F6C:;
    a1 = v0 + 0;
    a0 = sp + 64;
    a2 = 32;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08F7C;
L_08A08F7C:;
    v1 = D_08B1BB5C - (-17572);
    v0 = LD32(v1-17572);
    a1 = s2 + 8;
    a0 = sp + 100;
    a2 = 42;
    ST32(sp+96, v0);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A08F98;
L_08A08F98:;
    v1 = D_08C2C3E0 - (-15392);
    v0 = LD32(v1-15392);
    ST32(sp+144, s1);
    cnd_ = v0 == 0;
    s1 = 3;
    if (cnd_) { goto L_08A08FB0; }
    goto L_08A08FAC;
L_08A08FAC:;
    s1 = LD32(v0+24);
    goto L_08A08FB0;
L_08A08FB0:;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A08FC4; }
    goto L_08A08FB8;
L_08A08FB8:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    v0 = func_08978120(a0, a1);
    goto L_08A08FC4;
L_08A08FC4:;
    ST32(sp+148, v0);
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A08FDC; }
    goto L_08A08FD0;
L_08A08FD0:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    v0 = func_0897808C(a0, a1);
    goto L_08A08FDC;
L_08A08FDC:;
    ST32(sp+152, v0);
    cnd_ = s2 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A08FF4; }
    goto L_08A08FE8;
L_08A08FE8:;
    a0 = s2 + 1312;
    a1 = s1 + 0;
    v0 = func_0897843C(a0, a1);
    goto L_08A08FF4;
L_08A08FF4:;
    ST32(sp+156, v0);
    cnd_ = s2 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A0900C; }
    goto L_08A09000;
L_08A09000:;
    a0 = s2 + 1312;
    a1 = s1 + 0;
    v0 = func_0897848C(a0, a1);
    goto L_08A0900C;
L_08A0900C:;
    ST32(sp+160, v0);
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0901C; }
    goto L_08A09018;
L_08A09018:;
    v0 = LD32(s2+1496);
    goto L_08A0901C;
L_08A0901C:;
    cnd_ = s2 == 0;
    ST32(sp+164, v0);
    if (cnd_) { goto L_08A090F0; }
    goto L_08A09024;
L_08A09024:;
    a0 = s2 + 0;
    f0 = func_08978170(a0);
    goto L_08A0902C;
L_08A0902C:;
    cnd_ = s2 == 0;
    ST32(sp+168, FBITS(f0));
    if (cnd_) { goto L_08A090E4; }
    goto L_08A09034;
L_08A09034:;
    a0 = s2 + 0;
    f0 = func_089781D8(a0);
    goto L_08A0903C;
L_08A0903C:;
    cnd_ = s2 == 0;
    ST32(sp+172, FBITS(f0));
    if (cnd_) { goto L_08A090D8; }
    goto L_08A09044;
L_08A09044:;
    a0 = s2 + 0;
    f0 = func_08978240(a0);
    goto L_08A0904C;
L_08A0904C:;
    cnd_ = s2 == 0;
    ST32(sp+176, FBITS(f0));
    if (cnd_) { goto L_08A090CC; }
    goto L_08A09054;
L_08A09054:;
    a0 = s2 + 0;
    f0 = func_089782A8(a0);
    goto L_08A0905C;
L_08A0905C:;
    a0 = s2 + 0;
    a1 = sp + 184;
    ST32(sp+180, FBITS(f0));
    func_08978310(a0, a1);
    goto L_08A0906C;
L_08A0906C:;
    a0 = 0x8027;
    a1 = 204;
    a2 = 0 + 0;
    a3 = sp + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09080;
L_08A09080:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A08F24; }
    goto L_08A0908C;
L_08A0908C:;
    v0 = LD32(s1+28);
    v0 = v0 | 0x1;
    ST32(s1+28, v0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0909C;
L_08A0909C:;
    ST32(s1, v0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A090A4;
L_08A090A4:;
    ST32(s1+4, v0);
    a0 = s0 + 0;
    a1 = 5;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A090B4;
L_08A090B4:;
    a0 = s1 + 0;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A090C4;
L_08A090C4:;
    v0 = 1;
    goto L_08A08F24;
L_08A090CC:;
    v0 = D_08AEF6D0 - (-2352);
    f0 = BITSF(LD32(v0-2352));
    goto L_08A0905C;
L_08A090D8:;
    v0 = D_08AEF6D0 - (-2352);
    f0 = BITSF(LD32(v0-2352));
    goto L_08A0904C;
L_08A090E4:;
    v0 = D_08AEF6CC - (-2356);
    f0 = BITSF(LD32(v0-2356));
    goto L_08A0903C;
L_08A090F0:;
    v0 = D_08AEF6CC - (-2356);
    f0 = BITSF(LD32(v0-2356));
    goto L_08A0902C;
}

/* 08A090FC */
rv_t func_08A090FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A090FC:;
    sp = sp - 16;
    v0 = 4;
    a1 = 7;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A09128; }
    goto L_08A09118;
L_08A09118:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A09128:;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09130;
L_08A09130:;
    a2 = 1;
    goto L_08A09118;
}

/* 08A09138 */
rv_t func_08A09138(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A09138:;
    sp = sp - 16;
    v0 = 4;
    a1 = 1;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A09164; }
    goto L_08A09154;
L_08A09154:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A09164:;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0916C;
L_08A0916C:;
    a0 = 1;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09174;
L_08A09174:;
    a0 = 0x636b0000u;
    a2 = 1;
    a0 = a0 | 0x2446;
    a1 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09188;
L_08A09188:;
    a2 = 1;
    goto L_08A09154;
}

/* 08A09190 */
u32 func_08A09190(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A09190:;
    sp = sp - 16;
    v0 = 1;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A091B8; }
    goto L_08A091A8;
L_08A091A8:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
L_08A091B8:;
    ST32(a0+24, a1);
    func_08A0A890(a0, t2, t3);
    goto L_08A091C0;
L_08A091C0:;
    a3 = 1;
    goto L_08A091A8;
}

/* 08A091C8 */
rv_t func_08A091C8(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A091C8:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a0 + 0;
    a3 = 0 + 0;
    a1 = 0 + 0;
    v1 = 0 + 0;
    v0 = LD32(a0+4);
    v0 = v0 - 5;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    a0 = 0x802e;
    if (cnd_) { goto L_08A09218; }
    goto L_08A09200;
L_08A09200:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A09218:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09220;
L_08A09220:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    a1 = 8;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A09200; }
    goto L_08A09234;
L_08A09234:;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0923C;
L_08A0923C:;
    v0 = LD32(s0+28);
    v0 = v0 | 0x1;
    ST32(s0+28, v0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0924C;
L_08A0924C:;
    ST32(s0, v0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09254;
L_08A09254:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09268;
L_08A09268:;
    v1 = 1;
    goto L_08A09200;
}

/* 08A09270 */
u64 func_08A09270(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A09270:;
    a2 = LD32(a0+20);
    v0 = 999;
    a0 = D_08C2B3A4 - (-19548);
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_08A092E4; }
    goto L_08A09284;
L_08A09284:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A092D4; }
    goto L_08A092A8;
L_08A092A8:;
    a0 = LD32(a1);
    goto L_08A092AC;
L_08A092AC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A092EC; }
    goto L_08A092C4;
L_08A092C4:;
    a1 = LD32(a1+4);
    goto L_08A092C8;
L_08A092C8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A092AC; }
    goto L_08A092D0;
L_08A092D0:;
    v1 = 0 + 0;
    goto L_08A092D4;
L_08A092D4:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A092E4; }
    goto L_08A092DC;
L_08A092DC:;
    v0 = LD_U8(v1+196);
    return (u64)v0 | ((u64)v1 << 32);
L_08A092E4:;
    v0 = 0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A092EC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A092C4; }
    goto L_08A092F8;
L_08A092F8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A092C8; }
    goto L_08A09304;
L_08A09304:;
    goto L_08A092D4;
}

/* 08A0930C */
u32 func_08A0930C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0930C:;
    sp = sp - 16;
    v0 = 999;
    a2 = LD32(a0+20);
    a0 = D_08C2A9D8 - (-22056);
    cnd_ = a2 == v0;
    v1 = a0 - 22056;
    if (cnd_) { goto L_08A09398; }
    goto L_08A09328;
L_08A09328:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22056);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A09378; }
    goto L_08A0934C;
L_08A0934C:;
    a0 = LD32(a1);
    goto L_08A09350;
L_08A09350:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A093A0; }
    goto L_08A09368;
L_08A09368:;
    a1 = LD32(a1+4);
    goto L_08A0936C;
L_08A0936C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A09350; }
    goto L_08A09374;
L_08A09374:;
    a0 = 0 + 0;
    goto L_08A09378;
L_08A09378:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0938C; }
    goto L_08A09380;
L_08A09380:;
    v0 = func_089C6AE8(a0, t1, t2, t3);
    goto L_08A09388;
L_08A09388:;
    v0 = 0 < v0;
    goto L_08A0938C;
L_08A0938C:;
    sp = sp + 16;
    return v0;
L_08A09398:;
    v0 = 0 + 0;
    goto L_08A0938C;
L_08A093A0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A0936C; }
    goto L_08A093AC;
L_08A093AC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A0936C; }
    goto L_08A093B8;
L_08A093B8:;
    goto L_08A09378;
}

/* 08A093C0 */
rv_t func_08A093C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A093C0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A0A1C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A093D8;
L_08A093D8:;
    a0 = s0 + 0;
    func_08A08C34(a0);
    goto L_08A093E0;
L_08A093E0:;
    v1 = LD32(s0+4);
    v0 = v1 < 0x9u;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A09410; }
    goto L_08A093F0;
L_08A093F0:;
    v1 = D_08ADEB70 - (-5264);
    v1 = v1 - 5264;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A09408u: goto L_08A09408; case 0x08A095B0u: goto L_08A095B0; case 0x08A095C0u: goto L_08A095C0; case 0x08A095D0u: goto L_08A095D0; case 0x08A095E0u: goto L_08A095E0; case 0x08A095F0u: goto L_08A095F0; case 0x08A09600u: goto L_08A09600; case 0x08A09610u: goto L_08A09610; default: rs_break(0, 0x08a09400); }
L_08A09408:;
    a0 = s0 + 0;
    func_08A0A2A0();
    goto L_08A09410;
L_08A09410:;
    a0 = s0 + 0;
    func_089CB5FC(a0, 0, 0, 0);
    goto L_08A09418;
L_08A09418:;
    a3 = LD32(s0+20);
    a0 = D_08C2A6C8 - (-22840);
    v0 = 999;
    v1 = a0 - 22840;
    cnd_ = a3 == v0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A094A4; }
    goto L_08A09430;
L_08A09430:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A09480; }
    goto L_08A09454;
L_08A09454:;
    a0 = LD32(a2);
    goto L_08A09458;
L_08A09458:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A09590; }
    goto L_08A09470;
L_08A09470:;
    a2 = LD32(a2+4);
    goto L_08A09474;
L_08A09474:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08A09458; }
    goto L_08A0947C;
L_08A0947C:;
    a1 = 0 + 0;
    goto L_08A09480;
L_08A09480:;
    cnd_ = a1 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08A094A4; }
    goto L_08A09488;
L_08A09488:;
    v0 = LD_U8(a1+4);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = 0 + 0; goto L_08A094A4; }
    goto L_08A09494;
L_08A09494:;
    v0 = LD_U8(a1+68);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A094A8; }
    goto L_08A094A0;
L_08A094A0:;
    s1 = 0 + 0;
    goto L_08A094A4;
L_08A094A4:;
    a0 = s0 + 0;
    goto L_08A094A8;
L_08A094A8:;
    a1 = s1 + 0;
    func_08A0AF14(a1);
    goto L_08A094B0;
L_08A094B0:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08A0B070(a1);
    goto L_08A094BC;
L_08A094BC:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08A0B1A0(a1);
    goto L_08A094C8;
L_08A094C8:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s0+20); goto L_08A094EC; }
    goto L_08A094D8;
L_08A094D8:;
    v0 = D_08C29328 - (-27864);
    v1 = LD32(v0-27864);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = s1 + 0; goto L_08A09580; }
    goto L_08A094E8;
L_08A094E8:;
    a1 = LD32(s0+20);
    goto L_08A094EC;
L_08A094EC:;
    a0 = D_08C2A9D8 - (-22056);
    a0 = a0 - 22056;
    a2 = 1;
    v0 = func_08AC4D98(a0, a1, a2);
    goto L_08A094FC;
L_08A094FC:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A0951C; }
    goto L_08A09504;
L_08A09504:;
    v0 = LD_U8(v0+4);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 0 + 0; goto L_08A0951C; }
    goto L_08A09510;
L_08A09510:;
    v0 = LD_U8(a1+68);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 0 + 0; goto L_08A0951C; }
    goto L_08A0951C;
L_08A0951C:;
    a0 = s0 + 0;
    func_08A0B378(a1, 0, 0, 0);
    goto L_08A09524;
L_08A09524:;
    func_08A6626C();
    goto L_08A0952C;
L_08A0952C:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+72));
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 14);
    f12 = f0;
    cnd_ = fcc;
    ST32(s0+72, FBITS(f0));
    if (cnd_) { goto L_08A09554; }
    goto L_08A09550;
L_08A09550:;
    f12 = f2;
    goto L_08A09554;
L_08A09554:;
    ST32(s0+72, FBITS(f12));
    f0 = func_08A5D300(f12);
    goto L_08A0955C;
L_08A0955C:;
    a0 = s0 + 0;
    func_08A09620(a0);
    goto L_08A09564;
L_08A09564:;
    { rv_t r_ = func_08A0B78C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0956C;
L_08A0956C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A09580:;
    a0 = s0 + 0;
    func_08A0B234(a0);
    goto L_08A09588;
L_08A09588:;
    a1 = LD32(s0+20);
    goto L_08A094EC;
L_08A09590:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A09474; }
    goto L_08A0959C;
L_08A0959C:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08A09470; }
    goto L_08A095A8;
L_08A095A8:;
    goto L_08A09480;
L_08A095B0:;
    a0 = s0 + 0;
    func_08A0A2B0();
    goto L_08A095B8;
L_08A095B8:;
    goto L_08A09410;
L_08A095C0:;
    a0 = s0 + 0;
    func_08A0A358();
    goto L_08A095C8;
L_08A095C8:;
    goto L_08A09410;
L_08A095D0:;
    a0 = s0 + 0;
    func_08A0A368(a0);
    goto L_08A095D8;
L_08A095D8:;
    goto L_08A09410;
L_08A095E0:;
    a0 = s0 + 0;
    func_08A0A684(a0);
    goto L_08A095E8;
L_08A095E8:;
    goto L_08A09410;
L_08A095F0:;
    a0 = s0 + 0;
    func_08A0A860(a0);
    goto L_08A095F8;
L_08A095F8:;
    goto L_08A09410;
L_08A09600:;
    a0 = s0 + 0;
    func_08A0A2E8(a0);
    goto L_08A09608;
L_08A09608:;
    goto L_08A09410;
L_08A09610:;
    a0 = s0 + 0;
    func_08A0A850();
    goto L_08A09618;
L_08A09618:;
    goto L_08A09410;
}

/* 08A09620 */
void func_08A09620(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A09620:;
    sp = sp - 16;
    v0 = D_08C28F3C - (-28868);
    a1 = LD32(v0-28868);
    v0 = 4;
    cnd_ = a1 == v0;
    v0 = D_08C2C578 - (-14984);
    if (cnd_) { goto L_08A09654; }
    goto L_08A09640;
L_08A09640:;
    ST8(v0-14984, 0);
    goto L_08A09644;
L_08A09644:;
    goto L_08A09648;
L_08A09648:;
    goto L_08A0964C;
L_08A0964C:;
    sp = sp + 16;
    return;
L_08A09654:;
    s0 = D_08C2C578 - (-14984);
    v0 = LD_U8(s0-14984);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A09648; }
    goto L_08A09664;
L_08A09664:;
    v0 = D_08B1C16D - (-16019);
    v1 = LD_U8(v0-16019);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08A0964C; }
    goto L_08A09674;
L_08A09674:;
    v0 = D_08B1B91C - (-18148);
    v1 = LD32(a0+24);
    v0 = LD32(v0-18148);
    a0 = 0x1af50000u;
    cnd_ = v0 == v1;
    a0 = a0 | 0xaa12;
    if (cnd_) { goto L_08A09694; }
    goto L_08A0968C;
L_08A0968C:;
    a0 = 0x2f0000u;
    a0 = a0 | 0xd71e;
    goto L_08A09694;
L_08A09694:;
    a1 = 1;
    { u64 r_ = func_088D61A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0969C;
L_08A0969C:;
    v0 = 1;
    ST8(s0-14984, v0);
    goto L_08A09644;
}

/* 08A096A8 */
rv_t func_08A096A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 544);
L_08A096A8:;
    sp = sp - 544;
    v0 = D_08B2C1BC - (-15940);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A096DC; }
    goto L_08A096C8;
L_08A096C8:;
    goto L_08A096CC;
L_08A096CC:;
    sp = sp + 544;
    return (rv_t){ v0, v1, f0 };
L_08A096DC:;
    func_08A69988(a0, t0, t1, t2, t3);
    goto L_08A096E4;
L_08A096E4:;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    a0 = 27;
    if (cnd_) { goto L_08A098A4; }
    goto L_08A096F0;
L_08A096F0:;
    v0 = 7;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A09878; }
    goto L_08A096FC;
L_08A096FC:;
    cnd_ = v1 == v0;
    v0 = 6;
    if (cnd_) { goto L_08A0980C; }
    goto L_08A09704;
L_08A09704:;
    cnd_ = v1 == v0;
    v0 = D_08C2CE64 - (-12700);
    if (cnd_) { goto L_08A097E4; }
    goto L_08A0970C;
L_08A0970C:;
    v0 = D_08C28F3C - (-28868);
    goto L_08A09710;
L_08A09710:;
    a0 = LD32(v0-28868);
    goto L_08A09714;
L_08A09714:;
    v1 = 3;
    cnd_ = a0 == v1;
    v0 = 4;
    if (cnd_) { goto L_08A09778; }
    goto L_08A09720;
L_08A09720:;
    cnd_ = a0 == v0;
    v0 = 6;
    if (cnd_) { goto L_08A09730; }
    goto L_08A09728;
L_08A09728:;
    cnd_ = a0 == v0;
    a0 = D_08C2C3E8 - (-15384);
    if (cnd_) { goto L_08A09760; }
    goto L_08A09730;
L_08A09730:;
    { u64 r_ = func_08971F74(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09738;
L_08A09738:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A096CC; }
    goto L_08A09740;
L_08A09740:;
    a0 = 38;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A0974C;
L_08A0974C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A0AC2C(a1);
    goto L_08A09758;
L_08A09758:;
    goto L_08A096CC;
L_08A09760:;
    a0 = a0 - 15384;
    a1 = 0 + 0;
    a2 = 256;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09770;
L_08A09770:;
    goto L_08A09730;
L_08A09778:;
    v0 = D_08AEF6D4 - (-2348);
    v1 = D_08C28F48 - (-28856);
    f3 = BITSF(LD32(v0-2348));
    f0 = BITSF(LD32(v1-28856));
    f1 = BITSF(0);
    f2 = f0 + f3;
    f0 = f2 + f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    f20 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A097AC; }
    goto L_08A097A4;
L_08A097A4:;
    f0 = f2 - f3;
    f20 = BITSF(F2I(f0, 1));
    goto L_08A097AC;
L_08A097AC:;
    a0 = 32;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A097B8;
L_08A097B8:;
    t0 = FBITS(f20);
    a0 = sp + 0;
    a1 = v0 + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A097D0;
L_08A097D0:;
    a0 = s0 + 0;
    a1 = sp + 0;
    v0 = func_08A0AC2C(a1);
    goto L_08A097DC;
L_08A097DC:;
    goto L_08A09730;
L_08A097E4:;
    v1 = LD_U8(v0-12700);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = D_08C28F3C - (-28868); goto L_08A09710; }
    goto L_08A097F0;
L_08A097F0:;
    a0 = D_08C2C3E8 - (-15384);
    goto L_08A097F4;
L_08A097F4:;
    a0 = a0 - 15384;
    a1 = 0 + 0;
    a2 = 256;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09804;
L_08A09804:;
    v0 = D_08C28F3C - (-28868);
    goto L_08A09710;
L_08A0980C:;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 == 0;
    v0 = D_08C28F3C - (-28868);
    if (cnd_) { goto L_08A09710; }
    goto L_08A0981C;
L_08A0981C:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09824;
L_08A09824:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v0 = D_08C28F3C - (-28868);
    if (cnd_) { goto L_08A09710; }
    goto L_08A09830;
L_08A09830:;
    f1 = BITSF(LD32(s0+16));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(v0-28868); goto L_08A09714; }
    goto L_08A09848;
L_08A09848:;
    a0 = LD32(s0+24);
    v0 = func_08A08954(a0);
    goto L_08A09850;
L_08A09850:;
    cnd_ = v0 != 0;
    a0 = 25;
    if (cnd_) { goto L_08A0985C; }
    goto L_08A09858;
L_08A09858:;
    a0 = 26;
    goto L_08A0985C;
L_08A0985C:;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A09864;
L_08A09864:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A0AC2C(a1);
    goto L_08A09870;
L_08A09870:;
    a0 = D_08C2C3E8 - (-15384);
    goto L_08A097F4;
L_08A09878:;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 == 0;
    v0 = D_08C28F3C - (-28868);
    if (cnd_) { goto L_08A09710; }
    goto L_08A09888;
L_08A09888:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09890;
L_08A09890:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v0 = D_08C28F3C - (-28868);
    if (cnd_) { goto L_08A09710; }
    goto L_08A0989C;
L_08A0989C:;
    goto L_08A09848;
L_08A098A4:;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A098AC;
L_08A098AC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A0AC2C(a1);
    goto L_08A098B8;
L_08A098B8:;
    v0 = D_08C28F3C - (-28868);
    goto L_08A09710;
}

/* 08A098C0 */
void func_08A098C0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A098C0:;
    sp = sp - 16;
    a2 = 1;
    a1 = LD32(a0+20);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A098E0;
L_08A098E0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A098F8; }
    goto L_08A098E8;
L_08A098E8:;
    v0 = D_08C2C3E5 - (-15387);
    v1 = LD_U8(v0-15387);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A09908; }
    goto L_08A098F8;
L_08A098F8:;
    goto L_08A098FC;
L_08A098FC:;
    sp = sp + 16;
    return;
L_08A09908:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09910;
L_08A09910:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A098FC; }
    goto L_08A09918;
L_08A09918:;
    a0 = s0 + 0;
    func_089DD874(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A09920;
L_08A09920:;
    goto L_08A098FC;
}

/* 08A09928 */
rv_t func_08A09928(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A09928:;
    sp = sp - 48;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A099B4; }
    goto L_08A09950;
L_08A09950:;
    v1 = LD_U16(s0+16);
    v0 = 0x8021;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A09EC8; }
    goto L_08A09960;
L_08A09960:;
    cnd_ = v0 != 0;
    v0 = 0x802a;
    if (cnd_) { goto L_08A09BD0; }
    goto L_08A09968;
L_08A09968:;
    v0 = 0x8017;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A09BB4; }
    goto L_08A09974;
L_08A09974:;
    cnd_ = v0 != 0;
    v0 = 0x801c;
    if (cnd_) { goto L_08A09B0C; }
    goto L_08A0997C;
L_08A0997C:;
    v0 = 0x8000;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A09A24; }
    goto L_08A09988;
L_08A09988:;
    cnd_ = v0 != 0;
    v0 = 0x8015;
    if (cnd_) { goto L_08A099E4; }
    goto L_08A09990;
L_08A09990:;
    v0 = 128;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a0+20); goto L_08A099D4; }
    goto L_08A0999C;
L_08A0999C:;
    v0 = LD32(s1);
    goto L_08A099A0;
L_08A099A0:;
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A099B0;
L_08A099B0:;
    a1 = v0 + 0;
    goto L_08A099B4;
L_08A099B4:;
    goto L_08A099B8;
L_08A099B8:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A099D4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A65DF0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A099DC;
L_08A099DC:;
    a1 = 1;
    goto L_08A099B4;
L_08A099E4:;
    cnd_ = v1 == v0;
    v0 = 0x8016;
    if (cnd_) { goto L_08A09A0C; }
    goto L_08A099EC;
L_08A099EC:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1); goto L_08A099A0; }
    goto L_08A099F4;
L_08A099F4:;
    ST32(a0+72, 0);
    f12 = BITSF(LD32(a0+72));
    goto L_08A099FC;
L_08A099FC:;
    f0 = func_08A5D300(f12);
    goto L_08A09A04;
L_08A09A04:;
    a1 = 1;
    goto L_08A099B4;
L_08A09A0C:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09A18;
L_08A09A18:;
    f12 = BITSF(LD32(v0+4));
    ST32(a0+72, FBITS(f12));
    goto L_08A099FC;
L_08A09A24:;
    s2 = LD32(s0+24);
    cnd_ = s2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A099B4; }
    goto L_08A09A30;
L_08A09A30:;
    a1 = LD32(a0+20);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09A44;
L_08A09A44:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A09A58; }
    goto L_08A09A4C;
L_08A09A4C:;
    a0 = v0 + 0;
    func_08994B88(a0, 0, 0, 0);
    goto L_08A09A54;
L_08A09A54:;
    v1 = LD32(s1);
    goto L_08A09A58;
L_08A09A58:;
    a0 = LD32(s2);
    a1 = D_08C29F04 - (-24828);
    v0 = LD32(v1-12);
    ST32(s1+20, a0);
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a1 - 24828;
    if (cnd_) { goto L_08A099DC; }
    goto L_08A09A7C;
L_08A09A7C:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A09ACC; }
    goto L_08A09AA0;
L_08A09AA0:;
    a0 = LD32(a1);
    goto L_08A09AA4;
L_08A09AA4:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A09AEC; }
    goto L_08A09ABC;
L_08A09ABC:;
    a1 = LD32(a1+4);
    goto L_08A09AC0;
L_08A09AC0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A09AA4; }
    goto L_08A09AC8;
L_08A09AC8:;
    a0 = 0 + 0;
    goto L_08A09ACC;
L_08A09ACC:;
    cnd_ = a0 == 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09AD4;
L_08A09AD4:;
    f12 = BITSF(LD32(s0+8));
    a1 = LD32(s1+20);
    a2 = 0 + 0;
    { rv_t r_ = func_0897E148(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09AE4;
L_08A09AE4:;
    a1 = 1;
    goto L_08A099B4;
L_08A09AEC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A09AC0; }
    goto L_08A09AF8;
L_08A09AF8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A09AC0; }
    goto L_08A09B04;
L_08A09B04:;
    goto L_08A09ACC;
L_08A09B0C:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A09BA0; }
    goto L_08A09B14;
L_08A09B14:;
    cnd_ = v0 != 0;
    v0 = 0x801d;
    if (cnd_) { goto L_08A09B68; }
    goto L_08A09B1C;
L_08A09B1C:;
    v0 = 0x8018;
    cnd_ = v1 == v0;
    v0 = 0x801b;
    if (cnd_) { goto L_08A09B4C; }
    goto L_08A09B28;
L_08A09B28:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1); goto L_08A099A0; }
    goto L_08A09B30;
L_08A09B30:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09B3C;
L_08A09B3C:;
    v1 = LD32(v0+4);
    v0 = D_08B1C8A0 - (-14176);
    ST32(v0-14176, v1);
    goto L_08A099DC;
L_08A09B4C:;
    a0 = 0 + 0;
    func_08A5D2B0(a0);
    goto L_08A09B54;
L_08A09B54:;
    a0 = 0 + 0;
    goto L_08A09B58;
L_08A09B58:;
    { u64 r_ = func_08A5D2D0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09B60;
L_08A09B60:;
    a1 = 1;
    goto L_08A099B4;
L_08A09B68:;
    cnd_ = v1 == v0;
    v0 = 0x801e;
    if (cnd_) { goto L_08A09B8C; }
    goto L_08A09B70;
L_08A09B70:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1); goto L_08A099A0; }
    goto L_08A09B78;
L_08A09B78:;
    a0 = 0 + 0;
    goto L_08A09B7C;
L_08A09B7C:;
    { rv_t r_ = func_08A5D310(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09B84;
L_08A09B84:;
    a1 = 1;
    goto L_08A099B4;
L_08A09B8C:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09B98;
L_08A09B98:;
    a0 = LD32(v0+4);
    goto L_08A09B7C;
L_08A09BA0:;
    v1 = 999;
    v0 = D_08B1C8A0 - (-14176);
    a1 = 1;
    ST32(v0-14176, v1);
    goto L_08A099B4;
L_08A09BB4:;
    s0 = LD32(s0+24);
    cnd_ = s0 == 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09BC0;
L_08A09BC0:;
    a0 = LD32(s0+4);
    func_08A5D2B0(a0);
    goto L_08A09BC8;
L_08A09BC8:;
    a0 = LD32(s0+8);
    goto L_08A09B58;
L_08A09BD0:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A09E78; }
    goto L_08A09BD8;
L_08A09BD8:;
    cnd_ = v0 != 0;
    v0 = 0x804b;
    if (cnd_) { goto L_08A09D10; }
    goto L_08A09BE0;
L_08A09BE0:;
    v0 = 0x8026;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A09CF0; }
    goto L_08A09BEC;
L_08A09BEC:;
    cnd_ = v0 != 0;
    v0 = 0x8027;
    if (cnd_) { goto L_08A09C28; }
    goto L_08A09BF4;
L_08A09BF4:;
    v0 = 0x8023;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1); goto L_08A099A0; }
    goto L_08A09C00;
L_08A09C00:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09C0C;
L_08A09C0C:;
    a1 = LD32(v0+8);
    f12 = BITSF(LD32(v0+4));
    a0 = LD32(v0+12);
    a1 = 0 < a1;
    { rv_t r_ = func_08A5D390(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09C20;
L_08A09C20:;
    a1 = 1;
    goto L_08A099B4;
L_08A09C28:;
    cnd_ = v1 == v0;
    v0 = 0x8028;
    if (cnd_) { goto L_08A09C84; }
    goto L_08A09C30;
L_08A09C30:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1); goto L_08A099A0; }
    goto L_08A09C38;
L_08A09C38:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_08A099B4; }
    goto L_08A09C50;
L_08A09C50:;
    ST32(a0+12, FBITS(f1));
    v1 = LD32(s0+24);
    cnd_ = v1 == 0;
    v0 = 999;
    if (cnd_) { goto L_08A099B4; }
    goto L_08A09C60;
L_08A09C60:;
    v1 = LD32(v1);
    a1 = 4;
    cnd_ = v1 == v0;
    ST32(a0+20, v1);
    if (cnd_) { goto L_08A09C74; }
    goto L_08A09C70;
L_08A09C70:;
    a1 = 3;
    goto L_08A09C74;
L_08A09C74:;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09C7C;
L_08A09C7C:;
    a1 = 1;
    goto L_08A099B4;
L_08A09C84:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_08A099B4; }
    goto L_08A09C9C;
L_08A09C9C:;
    ST32(a0+12, FBITS(f1));
    s0 = LD32(s0+24);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A099B8; }
    goto L_08A09CAC;
L_08A09CAC:;
    func_08A4ED10();
    goto L_08A09CB4;
L_08A09CB4:;
    f20 = BITSF(LD32(s0));
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A09CE8; }
    goto L_08A09CCC;
L_08A09CCC:;
    a1 = 6;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09CD4;
L_08A09CD4:;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    f0 = f20 - f0;
    ST32(s1+16, FBITS(f0));
    goto L_08A099DC;
L_08A09CE8:;
    a1 = 7;
    goto L_08A09C74;
L_08A09CF0:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_08A099B4; }
    goto L_08A09D08;
L_08A09D08:;
    ST32(a0+12, FBITS(f1));
    goto L_08A09C74;
L_08A09D10:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A09E50; }
    goto L_08A09D18;
L_08A09D18:;
    cnd_ = v0 != 0;
    v0 = 0x8050;
    if (cnd_) { goto L_08A09DB4; }
    goto L_08A09D20;
L_08A09D20:;
    v0 = 0x802c;
    cnd_ = v1 == v0;
    v0 = 0x804a;
    if (cnd_) { goto L_08A09D94; }
    goto L_08A09D2C;
L_08A09D2C:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1); goto L_08A099A0; }
    goto L_08A09D34;
L_08A09D34:;
    a0 = 3;
    a1 = 72;
    a2 = 0 + 0;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09D44;
L_08A09D44:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 3; goto L_08A09D54; }
    goto L_08A09D4C;
L_08A09D4C:;
    ST8(s1+40, 0);
    goto L_08A099DC;
L_08A09D54:;
    f12 = BITSF(0);
    a1 = 72;
    a2 = 0 + 0;
    a3 = 1;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09D68;
L_08A09D68:;
    v0 = LD_U8(s1+40);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09D74;
L_08A09D74:;
    a0 = 0xc7450000u;
    a0 = a0 | 0xd166;
    a1 = 2;
    a2 = 1;
    { u64 r_ = func_08A6606C(a0, a1, a2, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09D88;
L_08A09D88:;
    v0 = 1;
    ST8(s1+40, v0);
    goto L_08A099DC;
L_08A09D94:;
    v1 = LD32(s0+24);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09DA0;
L_08A09DA0:;
    v0 = LD32(v1);
    ST32(a0+44, v0);
    f0 = BITSF(LD32(v1+4));
    ST32(a0+48, FBITS(f0));
    goto L_08A099DC;
L_08A09DB4:;
    cnd_ = v1 == v0;
    v0 = 0x805d;
    if (cnd_) { goto L_08A09DFC; }
    goto L_08A09DBC;
L_08A09DBC:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1); goto L_08A099A0; }
    goto L_08A09DC4;
L_08A09DC4:;
    a0 = 3;
    a1 = 398;
    a2 = 0 + 0;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09DD4;
L_08A09DD4:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_08A099B4; }
    goto L_08A09DDC;
L_08A09DDC:;
    f12 = BITSF(0);
    a0 = 3;
    a1 = 398;
    a2 = 0 + 0;
    goto L_08A09DEC;
L_08A09DEC:;
    a3 = 1;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09DF4;
L_08A09DF4:;
    a1 = 1;
    goto L_08A099B4;
L_08A09DFC:;
    s0 = LD32(s0+24);
    cnd_ = s0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A099B4; }
    goto L_08A09E08;
L_08A09E08:;
    a1 = LD32(a0+20);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09E1C;
L_08A09E1C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A099DC; }
    goto L_08A09E24;
L_08A09E24:;
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    v0 = v0 + 148;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(v1+148, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    goto L_08A099DC;
L_08A09E50:;
    a0 = 3;
    a1 = 73;
    a2 = 0 + 0;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09E60;
L_08A09E60:;
    f12 = BITSF(0);
    a0 = 3;
    cnd_ = v0 != 0;
    a1 = 73;
    if (cnd_) { goto L_08A099DC; }
    goto L_08A09E70;
L_08A09E70:;
    a2 = 0 + 0;
    goto L_08A09DEC;
L_08A09E78:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_08A099B4; }
    goto L_08A09E90;
L_08A09E90:;
    ST32(a0+12, FBITS(f1));
    v1 = LD32(s0+24);
    cnd_ = v1 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A09EB8; }
    goto L_08A09EA0;
L_08A09EA0:;
    a0 = LD32(a0+24);
    cnd_ = a0 == v0;
    v0 = LD32(v1);
    if (cnd_) { goto L_08A09EB4; }
    goto L_08A09EAC;
L_08A09EAC:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A09EB8; }
    goto L_08A09EB4;
L_08A09EB4:;
    ST32(s1+24, v0);
    goto L_08A09EB8;
L_08A09EB8:;
    func_08974E84();
    goto L_08A09EC0;
L_08A09EC0:;
    a0 = s1 + 0;
    goto L_08A09CE8;
L_08A09EC8:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08A09EF0; }
    goto L_08A09ED4;
L_08A09ED4:;
    a3 = LD32(v0+8);
    a2 = LD32(v0+4);
    a0 = D_08C2933C - (-27844);
    a0 = a0 - 27844;
    a1 = 0 + 0;
    { u64 r_ = func_08977A34(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A09EEC;
L_08A09EEC:;
    v0 = 1;
    goto L_08A09EF0;
L_08A09EF0:;
    a1 = 1;
    ST8(s1+76, v0);
    goto L_08A099B4;
}

/* 08A09EFC */
void func_08A09EFC(u32 a0)
{
    u32 v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A09EFC:;
    v1 = 999;
    a1 = 4;
    ST32(a0+20, v1);
    sp = sp - 16;
    ST32(a0+24, a1);
    ST32(a0+44, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    func_08A09F34();
    goto L_08A09F28;
L_08A09F28:;
    sp = sp + 16;
    return;
}

/* 08A09F34 */
void func_08A09F34(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A09F34:;
    sp = sp - 16;
    a0 = 0 + 0;
    func_08A5D2B0(a0);
    goto L_08A09F44;
L_08A09F44:;
    v1 = 999;
    v0 = D_08B1C8A0 - (-14176);
    a0 = 0 + 0;
    ST32(v0-14176, v1);
    { rv_t r_ = func_08A5D310(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A09F58;
L_08A09F58:;
    f12 = BITSF(0);
    f0 = func_08A5D300(f12);
    goto L_08A09F64;
L_08A09F64:;
    sp = sp + 16;
    return;
}

/* 08A09F70 */
rv_t func_08A09F70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A09F70:;
    sp = sp - 96;
    v0 = D_08B159FC - (23036);
    a2 = 1;
    s1 = a0 + 0;
    s2 = sp + 48;
    v1 = LD32(v0+23036);
    a1 = LD32(a0+20);
    a0 = D_08C2B3A4 - (-19548);
    v0 = v1 + 12;
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f8 = BITSF(LD32(v0+32));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp, FBITS(f0));
    v0 = D_08AEF6D8 - (-2344);
    a0 = a0 - 19548;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    f4 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1));
    f3 = BITSF(LD32(v1+4));
    v1 = D_08AEF6DC - (-2340);
    f1 = BITSF(LD32(v0-2344));
    f0 = BITSF(LD32(v1-2340));
    ST32(sp+48, FBITS(f2));
    f20 = f1 * f0;
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f4));
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A024;
L_08A0A024:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08A0A0A0; }
    goto L_08A0A038;
L_08A0A038:;
    v0 = LD32(v0);
    v1 = LD32(v0+280);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A048;
L_08A0A048:;
    a1 = LD32(s0);
    v0 = LD32(a1+352);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A058;
L_08A0A058:;
    a0 = s0 + 0;
    f20 = f0;
    func_089DD8AC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A0A064;
L_08A0A064:;
    a0 = s2 + 0;
    func_0881CBAC(a0);
    goto L_08A0A06C;
L_08A0A06C:;
    a0 = sp + 0;
    func_0881CBE4(a0);
    goto L_08A0A074;
L_08A0A074:;
    v0 = D_08AEF6E0 - (-2336);
    f13 = BITSF(LD32(v0-2336));
    f12 = f20;
    { rv_t r_ = func_0881D084(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A084;
L_08A0A084:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08A0A0A0:;
    v1 = LD32(s1+20);
    v0 = 999;
    cnd_ = v1 != v0;
    v0 = D_08B2AA0C - (-22004);
    if (cnd_) { goto L_08A0A064; }
    goto L_08A0A0B0;
L_08A0A0B0:;
    s0 = LD32(v0-22004);
    a1 = LD32(s1+64);
    a0 = s0 + 0;
    v0 = func_08ABFF14(a0, a1);
    goto L_08A0A0C0;
L_08A0A0C0:;
    f2 = BITSF(LD32(v0+8));
    a1 = LD32(s1+64);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = s0 + 0;
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    v0 = func_08AC0150(a0, a1);
    goto L_08A0A0E4;
L_08A0A0E4:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    goto L_08A0A064;
}

/* 08A0A130 */
u64 func_08A0A130(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0A130:;
    sp = sp - 16;
    v0 = 3;
    s0 = a0 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    a1 = 4;
    if (cnd_) { goto L_08A0A168; }
    goto L_08A0A150;
L_08A0A150:;
    v0 = 999;
    goto L_08A0A154;
L_08A0A154:;
    ST32(s0+20, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A0A168:;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A170;
L_08A0A170:;
    v0 = 999;
    goto L_08A0A154;
}

/* 08A0A178 */
rv_t func_08A0A178(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0A178:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = LD32(a0+8);
    cnd_ = v1 == a1;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0A1B0; }
    goto L_08A0A198;
L_08A0A198:;
    v0 = LD32(a0+4);
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+8, s1); goto L_08A0A1B0; }
    goto L_08A0A1A4;
L_08A0A1A4:;
    { rv_t r_ = func_08A0A1C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A1AC;
L_08A0A1AC:;
    ST32(s0+8, s1);
    goto L_08A0A1B0;
L_08A0A1B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0A1C4 */
rv_t func_08A0A1C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0A1C4:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    v0 = LD32(a0+4);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0A210; }
    goto L_08A0A1E0;
L_08A0A1E0:;
    v0 = v1 < 0x9u;
    cnd_ = v0 == 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08A0A210; }
    goto L_08A0A1EC;
L_08A0A1EC:;
    v0 = v1 << 2;
    v1 = D_08ADEB94 - (-5228);
    v1 = v1 - 5228;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A0A208u: goto L_08A0A208; case 0x08A0A210u: goto L_08A0A210; case 0x08A0A220u: goto L_08A0A220; case 0x08A0A230u: goto L_08A0A230; case 0x08A0A240u: goto L_08A0A240; case 0x08A0A250u: goto L_08A0A250; case 0x08A0A260u: goto L_08A0A260; case 0x08A0A270u: goto L_08A0A270; case 0x08A0A280u: goto L_08A0A280; default: rs_break(0, 0x08a0a200); }
L_08A0A208:;
    a0 = s0 + 0;
    func_08A0A298();
    goto L_08A0A210;
L_08A0A210:;
    goto L_08A0A214;
L_08A0A214:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0A220:;
    a0 = s0 + 0;
    func_08A0A2A8();
    goto L_08A0A228;
L_08A0A228:;
    goto L_08A0A214;
L_08A0A230:;
    a0 = s0 + 0;
    func_08A0A350();
    goto L_08A0A238;
L_08A0A238:;
    goto L_08A0A214;
L_08A0A240:;
    a0 = s0 + 0;
    func_08A0A360(a0);
    goto L_08A0A248;
L_08A0A248:;
    goto L_08A0A214;
L_08A0A250:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A0A5EC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A258;
L_08A0A258:;
    goto L_08A0A214;
L_08A0A260:;
    a0 = s0 + 0;
    { u64 r_ = func_08A0A820(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A268;
L_08A0A268:;
    goto L_08A0A214;
L_08A0A270:;
    a0 = s0 + 0;
    func_08A0A858();
    goto L_08A0A278;
L_08A0A278:;
    goto L_08A0A214;
L_08A0A280:;
    a0 = 0 + 0;
    func_08A2ABB8(a0);
    goto L_08A0A288;
L_08A0A288:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A0A2B8(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A290;
L_08A0A290:;
    goto L_08A0A214;
}

/* 08A0A298 */
void func_08A0A298(void)
{
L_08A0A298:;
    return;
}

/* 08A0A2A0 */
void func_08A0A2A0(void)
{
L_08A0A2A0:;
    return;
}

/* 08A0A2A8 */
void func_08A0A2A8(void)
{
L_08A0A2A8:;
    return;
}

/* 08A0A2B0 */
void func_08A0A2B0(void)
{
L_08A0A2B0:;
    return;
}

/* 08A0A2B8 */
rv_t func_08A0A2B8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0A2B8:;
    sp = sp - 16;
    a0 = 3;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A2C8;
L_08A0A2C8:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A2DC;
L_08A0A2DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0A2E8 */
void func_08A0A2E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0A2E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888AA60(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A304;
L_08A0A304:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0A324; }
    goto L_08A0A30C;
L_08A0A30C:;
    v0 = D_08B1BDF4 - (-16908);
    a0 = LD32(v0-16908);
    v1 = 1;
    cnd_ = a0 == v1;
    if (cnd_) { v1 = LD32(s0+8); goto L_08A0A330; }
    goto L_08A0A320;
L_08A0A320:;
    goto L_08A0A324;
L_08A0A324:;
    sp = sp + 16;
    return;
L_08A0A330:;
    v0 = LD32(s0+4);
    a0 = s0 + 0;
    cnd_ = v1 != v0;
    a1 = 1;
    if (cnd_) { goto L_08A0A320; }
    goto L_08A0A340;
L_08A0A340:;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A348;
L_08A0A348:;
    goto L_08A0A324;
}

/* 08A0A350 */
void func_08A0A350(void)
{
L_08A0A350:;
    return;
}

/* 08A0A358 */
void func_08A0A358(void)
{
L_08A0A358:;
    return;
}

/* 08A0A360 */
void func_08A0A360(u32 a0)
{
L_08A0A360:;
    ST8(a0+76, 0);
    return;
}

/* 08A0A368 */
void func_08A0A368(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0A368:;
    sp = sp - 32;
    s1 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+20);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A390;
L_08A0A390:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A0A4C0; }
    goto L_08A0A398;
L_08A0A398:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_08A0A570; }
    goto L_08A0A3BC;
L_08A0A3BC:;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_08A0A438; }
    goto L_08A0A3D4;
L_08A0A3D4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A0A424; }
    goto L_08A0A3F8;
L_08A0A3F8:;
    a0 = LD32(a1);
    goto L_08A0A3FC;
L_08A0A3FC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0A5CC; }
    goto L_08A0A414;
L_08A0A414:;
    a1 = LD32(a1+4);
    goto L_08A0A418;
L_08A0A418:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A0A3FC; }
    goto L_08A0A420;
L_08A0A420:;
    v1 = 0 + 0;
    goto L_08A0A424;
L_08A0A424:;
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A0A43C; }
    goto L_08A0A42C;
L_08A0A42C:;
    v0 = LD_U8(v1+444);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0A570; }
    goto L_08A0A438;
L_08A0A438:;
    a0 = s1 + 0;
    goto L_08A0A43C;
L_08A0A43C:;
    a1 = 4;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A444;
L_08A0A444:;
    v0 = D_08C2933C - (-27844);
    goto L_08A0A448;
L_08A0A448:;
    v0 = v0 - 27844;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+44); goto L_08A0A470; }
    goto L_08A0A454;
L_08A0A454:;
    v0 = LD_U8(v0+6);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+44); goto L_08A0A470; }
    goto L_08A0A460;
L_08A0A460:;
    v0 = LD_U8(s1+76);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0A548; }
    goto L_08A0A46C;
L_08A0A46C:;
    v0 = LD32(s1+44);
    goto L_08A0A470;
L_08A0A470:;
    cnd_ = v0 != 0;
    v0 = D_08C30614 - (1556);
    if (cnd_) { goto L_08A0A4D4; }
    goto L_08A0A478;
L_08A0A478:;
    v0 = v0 + 1556;
    v1 = LD_U8(v0+33);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(v0+33, 0); goto L_08A0A488; }
    goto L_08A0A488;
L_08A0A488:;
    f1 = BITSF(LD32(s1+48));
    goto L_08A0A48C;
L_08A0A48C:;
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A0A4C4; }
    goto L_08A0A4A0;
L_08A0A4A0:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_08A0A4BC; }
    goto L_08A0A4BC;
L_08A0A4BC:;
    ST32(s1+48, FBITS(f2));
    goto L_08A0A4C0;
L_08A0A4C0:;
    goto L_08A0A4C4;
L_08A0A4C4:;
    sp = sp + 32;
    return;
L_08A0A4D4:;
    a0 = LD32(s1+20);
    s0 = 240;
    { rv_t r_ = func_08974C50(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A4E0;
L_08A0A4E0:;
    v1 = 106;
    if (v0 == 0) s0 = v1;
    a0 = 3;
    a1 = s0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A4F8;
L_08A0A4F8:;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s1+48)); goto L_08A0A48C; }
    goto L_08A0A500;
L_08A0A500:;
    a1 = LD32(s1+44);
    a0 = 0x203e0000u;
    a2 = sp + 0;
    a0 = a0 | 0x217d;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A518;
L_08A0A518:;
    a1 = 0x330000u;
    a0 = LD32(sp);
    a1 = a1 | 0x7a8b;
    a2 = (u32)-1;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A0A52C;
L_08A0A52C:;
    f12 = BITSF(LD32(s1+48));
    a1 = s0 + 0;
    a2 = v0 + 0;
    a0 = 3;
    func_08A4EA60(a0, a1, a2, f12);
    goto L_08A0A540;
L_08A0A540:;
    f1 = BITSF(LD32(s1+48));
    goto L_08A0A48C;
L_08A0A548:;
    a0 = s1 + 0;
    { u64 r_ = func_08A09270(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A550;
L_08A0A550:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0A560; }
    goto L_08A0A558;
L_08A0A558:;
    ST8(s1+76, 0);
    goto L_08A0A46C;
L_08A0A560:;
    a0 = s1 + 0;
    func_08A0A904(a0);
    goto L_08A0A568;
L_08A0A568:;
    ST8(s1+76, 0);
    goto L_08A0A46C;
L_08A0A570:;
    { u64 r_ = func_08897BC8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A578;
L_08A0A578:;
    cnd_ = v0 == 0;
    v0 = D_08B2BB6C - (-17556);
    if (cnd_) { goto L_08A0A5A4; }
    goto L_08A0A580;
L_08A0A580:;
    v1 = LD_U8(v0-17556);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = D_08C2933C - (-27844); goto L_08A0A448; }
    goto L_08A0A58C;
L_08A0A58C:;
    v1 = LD32(s1);
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A59C;
L_08A0A59C:;
    v0 = D_08C2933C - (-27844);
    goto L_08A0A448;
L_08A0A5A4:;
    v0 = func_08A0BD4C();
    goto L_08A0A5AC;
L_08A0A5AC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B2BB6C - (-17556); goto L_08A0A580; }
    goto L_08A0A5B4;
L_08A0A5B4:;
    v1 = LD32(s0);
    v0 = LD32(v1+172);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A5C4;
L_08A0A5C4:;
    v0 = D_08B2BB6C - (-17556);
    goto L_08A0A580;
L_08A0A5CC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A0A414; }
    goto L_08A0A5D8;
L_08A0A5D8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A0A418; }
    goto L_08A0A5E4;
L_08A0A5E4:;
    goto L_08A0A424;
}

/* 08A0A5EC */
rv_t func_08A0A5EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0A5EC:;
    sp = sp - 16;
    v0 = D_08AEF6E4 - (-2332);
    v1 = a0 + 0;
    a0 = 0 + 0;
    s0 = 0 + 0;
    f0 = BITSF(LD32(v0-2332));
    ST32(v1+16, FBITS(f0));
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A618;
L_08A0A618:;
    v0 = D_08B29BF8 - (-25608);
    s1 = LD32(v0-25608);
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08A0A65C; }
    goto L_08A0A628;
L_08A0A628:;
    { u64 r_ = func_08971F68(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A630;
L_08A0A630:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0A64C; }
    goto L_08A0A638;
L_08A0A638:;
    goto L_08A0A63C;
L_08A0A63C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0A64C:;
    a0 = 0 + 0;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A654;
L_08A0A654:;
    goto L_08A0A63C;
L_08A0A65C:;
    a0 = s0 + 0;
    v0 = func_0888B184(a0);
    goto L_08A0A664;
L_08A0A664:;
    a0 = LD32(v0+144);
    s0 = s0 + 1;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A670;
L_08A0A670:;
    v1 = s0 < s1;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A0A65C; }
    goto L_08A0A67C;
L_08A0A67C:;
    goto L_08A0A628;
}

/* 08A0A684 */
void func_08A0A684(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0A684:;
    sp = sp - 16;
    f2 = BITSF(0);
    f1 = BITSF(LD32(a0+16));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0A7C0; }
    goto L_08A0A6A8;
L_08A0A6A8:;
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v0-31332));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(a0+16, FBITS(f0));
    if (cnd_) { goto L_08A0A7C0; }
    goto L_08A0A6C4;
L_08A0A6C4:;
    a0 = D_08B2BB9C - (-17508);
    v1 = LD32(a0-17508);
    v0 = D_08B2AA0C - (-22004);
    cnd_ = v1 == 0;
    a1 = LD32(v0-22004);
    if (cnd_) { goto L_08A0A814; }
    goto L_08A0A6D8;
L_08A0A6D8:;
    v0 = D_08B28F50 - (-28848);
    v0 = LD32(v0-28848);
    goto L_08A0A6E0;
L_08A0A6E0:;
    cnd_ = (s32)v0 <= 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A0A80C; }
    goto L_08A0A6E8;
L_08A0A6E8:;
    cnd_ = (s32)v1 <= 0;
    v0 = LD32(a0-17508);
    if (cnd_) { goto L_08A0A804; }
    goto L_08A0A6F0;
L_08A0A6F0:;
    cnd_ = v0 == 0;
    v0 = D_08B28F30 - (-28880);
    if (cnd_) { goto L_08A0A7FC; }
    goto L_08A0A6F8;
L_08A0A6F8:;
    v0 = D_08B28F50 - (-28848);
    v0 = LD32(v0-28848);
    goto L_08A0A700;
L_08A0A700:;
    cnd_ = (s32)v0 <= 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A0A7F4; }
    goto L_08A0A708;
L_08A0A708:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a3 = a1 + 23232;
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a3+4, a0);
    ST32(a1+23232, v0);
    a2 = hi;
    ST32(s0+64, a2);
    goto L_08A0A744;
L_08A0A744:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A74C;
L_08A0A74C:;
    v1 = D_08B285B4 - (-31308);
    v0 = D_08C28F60 - (-28832);
    f0 = BITSF(LD32(v1-31308));
    a0 = LD32(v0-28832);
    v1 = D_08C2D0CC - (-12084);
    v0 = 5;
    cnd_ = a0 == v0;
    ST32(v1-12084, FBITS(f0));
    if (cnd_) { goto L_08A0A7E0; }
    goto L_08A0A76C;
L_08A0A76C:;
    v0 = LD32(s0);
    a0 = D_08C29F04 - (-24828);
    a0 = a0 - 24828;
    v1 = LD32(v0-12);
    a2 = 1;
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    v0 = func_08AC72B0(a0, a1, a2);
    goto L_08A0A78C;
L_08A0A78C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0A7A4; }
    goto L_08A0A794;
L_08A0A794:;
    a0 = v0 + 0;
    v0 = func_0897E350(a0);
    goto L_08A0A79C;
L_08A0A79C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0A7D0; }
    goto L_08A0A7A4;
L_08A0A7A4:;
    a0 = 18;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A7AC;
L_08A0A7AC:;
    a0 = 0xf16e0000u;
    a0 = a0 | 0x6b20;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A7C0;
L_08A0A7C0:;
    goto L_08A0A7C4;
L_08A0A7C4:;
    sp = sp + 16;
    return;
L_08A0A7D0:;
    a0 = 1;
    func_08A2ABB8(a0);
    goto L_08A0A7D8;
L_08A0A7D8:;
    goto L_08A0A7A4;
L_08A0A7E0:;
    a0 = s0 + 0;
    a1 = 7;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A7EC;
L_08A0A7EC:;
    goto L_08A0A7C4;
L_08A0A7F4:;
    a2 = LD32(a1+20);
    goto L_08A0A708;
L_08A0A7FC:;
    v0 = LD32(v0-28880);
    goto L_08A0A700;
L_08A0A804:;
    ST32(s0+64, 0);
    goto L_08A0A744;
L_08A0A80C:;
    v1 = LD32(a1+20);
    goto L_08A0A6E8;
L_08A0A814:;
    v0 = D_08B28F30 - (-28880);
    v0 = LD32(v0-28880);
    goto L_08A0A6E0;
}

/* 08A0A820 */
u64 func_08A0A820(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0A820:;
    a0 = 0xc5810000u;
    sp = sp - 16;
    a1 = 1;
    a2 = 1;
    a0 = a0 | 0x23d1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A83C;
L_08A0A83C:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A844;
L_08A0A844:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A0A850 */
void func_08A0A850(void)
{
L_08A0A850:;
    return;
}

/* 08A0A858 */
void func_08A0A858(void)
{
L_08A0A858:;
    return;
}

/* 08A0A860 */
void func_08A0A860(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08A0A860:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+16));
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 14);
    f1 = f0;
    cnd_ = fcc;
    ST32(a0+16, FBITS(f0));
    if (cnd_) { goto L_08A0A888; }
    goto L_08A0A884;
L_08A0A884:;
    f1 = f2;
    goto L_08A0A888;
L_08A0A888:;
    ST32(a0+16, FBITS(f1));
    return;
}

/* 08A0A890 */
void func_08A0A890(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0A890:;
    sp = sp - 32;
    a1 = 4;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a3 = sp + 0;
    v0 = LD32(a0+24);
    a0 = 0x8029;
    ST32(sp, v0);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A8BC;
L_08A0A8BC:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A0A8E8; }
    goto L_08A0A8C8;
L_08A0A8C8:;
    v0 = LD32(v0+28);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A8E8;
L_08A0A8E8:;
    a0 = s0 + 0;
    a1 = 2;
    { rv_t r_ = func_08A0A178(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A8F4;
L_08A0A8F4:;
    sp = sp + 32;
    return;
}

/* 08A0A904 */
void func_08A0A904(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A0A904:;
    sp = sp - 64;
    v0 = D_08C2933C - (-27844);
    s0 = v0 - 27844;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A0A9CC; }
    goto L_08A0A92C;
L_08A0A92C:;
    func_08978310(a0, a1);
    goto L_08A0A934;
L_08A0A934:;
    a1 = LD32(s1+20);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A948;
L_08A0A948:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A0A95C; }
    goto L_08A0A954;
L_08A0A954:;
    f0 = func_0899E9AC(a0, a1);
    goto L_08A0A95C;
L_08A0A95C:;
    a0 = s0 + 0;
    f0 = func_08978170(a0);
    goto L_08A0A964;
L_08A0A964:;
    a0 = s0 + 0;
    ST32(sp+20, FBITS(f0));
    f0 = func_089781D8(a0);
    goto L_08A0A970;
L_08A0A970:;
    a0 = s0 + 0;
    ST32(sp+24, FBITS(f0));
    f0 = func_08978240(a0);
    goto L_08A0A97C;
L_08A0A97C:;
    a0 = s0 + 0;
    ST32(sp+28, FBITS(f0));
    f0 = func_089782A8(a0);
    goto L_08A0A988;
L_08A0A988:;
    a1 = 36;
    a0 = 0x802f;
    a2 = 0 + 0;
    a3 = sp + 0;
    ST32(sp+32, FBITS(f0));
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0A9A0;
L_08A0A9A0:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A0A9CC; }
    goto L_08A0A9AC;
L_08A0A9AC:;
    v0 = LD32(v0+28);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0A9CC;
L_08A0A9CC:;
    sp = sp + 64;
    return;
}

/* 08A0A9E0 */
rv_t func_08A0A9E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0A9E0:;
    sp = sp - 32;
    s3 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+20);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AA10;
L_08A0AA10:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A0AAB4; }
    goto L_08A0AA18;
L_08A0AA18:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+188);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AA2C;
L_08A0AA2C:;
    a1 = v0 + 0;
    a0 = 0x8025;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AA40;
L_08A0AA40:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A0AAA8; }
    goto L_08A0AA48;
L_08A0AA48:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_08A0AA7C; }
    goto L_08A0AA54;
L_08A0AA54:;
    v0 = LD32(v1+264);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AA60;
L_08A0AA60:;
    ST32(s1+36, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s1+40, v1);
    v1 = LD32(s0);
    goto L_08A0AA7C;
L_08A0AA7C:;
    a0 = s0 + 0;
    v0 = LD32(v1+192);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AA8C;
L_08A0AA8C:;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A0AB88; }
    goto L_08A0AA94;
L_08A0AA94:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AAA8;
L_08A0AAA8:;
    v0 = LD_U8(s0+444);
    goto L_08A0AAAC;
L_08A0AAAC:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+524); goto L_08A0AAD0; }
    goto L_08A0AAB4;
L_08A0AAB4:;
    goto L_08A0AAB8;
L_08A0AAB8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A0AAD0:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AAE0;
L_08A0AAE0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A0AAB4; }
    goto L_08A0AAE8;
L_08A0AAE8:;
    a0 = 0x8025;
    a1 = 60;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AAFC;
L_08A0AAFC:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A0AAB4; }
    goto L_08A0AB04;
L_08A0AB04:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_08A0AB38; }
    goto L_08A0AB10;
L_08A0AB10:;
    v0 = LD32(v1+264);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AB1C;
L_08A0AB1C:;
    ST32(s1+36, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s1+40, v1);
    v1 = LD32(s0);
    goto L_08A0AB38;
L_08A0AB38:;
    a0 = s0 + 0;
    v0 = LD32(v1+192);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AB48;
L_08A0AB48:;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A0AB78; }
    goto L_08A0AB50;
L_08A0AB50:;
    v1 = LD32(s0);
    a2 = LD32(s3);
    v0 = LD32(v1-16);
    a0 = LD32(a2-12);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    a0 = s3 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AB70;
L_08A0AB70:;
    goto L_08A0AAB8;
L_08A0AB78:;
    a0 = s2 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AB80;
L_08A0AB80:;
    goto L_08A0AAB8;
L_08A0AB88:;
    a0 = s2 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AB90;
L_08A0AB90:;
    v0 = LD_U8(s0+444);
    goto L_08A0AAAC;
}

/* 08A0AB98 */
void func_08A0AB98(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0AB98:;
    sp = sp - 16;
    v0 = a1 + 0;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a1 = 1;
    a0 = 0x802d;
    a2 = 0 + 0;
    s1 = v0 & 0xff;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0ABC8;
L_08A0ABC8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A0AC08; }
    goto L_08A0ABD0;
L_08A0ABD0:;
    a1 = v0 + 0;
    v0 = LD32(v0+24);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A0AC1C; }
    goto L_08A0ABE0;
L_08A0ABE0:;
    ST8(v0, s1);
    ST32(s0+44, 0);
    v0 = LD32(v1+28);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AC08;
L_08A0AC08:;
    goto L_08A0AC0C;
L_08A0AC0C:;
    sp = sp + 16;
    return;
L_08A0AC1C:;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AC24;
L_08A0AC24:;
    goto L_08A0AC0C;
}

/* 08A0AC2C */
u32 func_08A0AC2C(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A0AC2C:;
    sp = sp - 48;
    v0 = D_08B306F0 - (1776);
    v1 = D_08B306EC - (1772);
    s1 = a1 + 0;
    s0 = D_08B2C12C - (-16084);
    s0 = s0 - 16084;
    a0 = s0 + 0;
    f1 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(v1+1772));
    v0 = D_08AEF6EC - (-2324);
    f21 = BITSF(LD32(v0-2324));
    v0 = D_08AEF6F0 - (-2320);
    f14 = (float)(s32)FBITS(f1);
    f20 = (float)(s32)FBITS(f0);
    v1 = D_08AEF6E8 - (-2328);
    f0 = BITSF(LD32(v0-2320));
    v0 = D_08AEF6F4 - (-2316);
    f22 = BITSF(LD32(v1-2328));
    f15 = BITSF(LD32(v0-2316));
    v0 = 0xc0100000u;
    v0 = v0 | 0x1010;
    f12 = f14 * f22;
    f15 = f20 * f15;
    f14 = f14 * f0;
    f13 = f20 * f21;
    v1 = 1;
    ST32(s0+64, v0);
    v0 = (u32)-1;
    ST32(s0+84, v1);
    ST32(s0+80, v0);
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A0ACC0;
L_08A0ACC0:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0ACCC;
L_08A0ACCC:;
    v0 = func_08901790();
    goto L_08A0ACD4;
L_08A0ACD4:;
    v0 = D_08AEF6F8 - (-2312);
    f0 = BITSF(LD32(v0-2312));
    ST32(sp, FBITS(f22));
    ST32(sp+8, FBITS(f21));
    ST32(sp+12, FBITS(f0));
    ST32(sp+4, FBITS(f21));
    f0 = func_088CD39C();
    goto L_08A0ACF0;
L_08A0ACF0:;
    v1 = D_08AEF6FC - (-2308);
    f1 = BITSF(LD32(v1-2308));
    v0 = D_08AEF700 - (-2304);
    f2 = BITSF(LD32(v0-2304));
    f20 = f20 * f1;
    f12 = BITSF(0);
    a3 = s1 + 0;
    a0 = sp + 0;
    f15 = f20 / f0;
    f13 = f12;
    f14 = f12;
    a1 = (u32)-1;
    fcc = FCMP(f15, f2, 14);
    cnd_ = fcc;
    a2 = 69;
    if (cnd_) { goto L_08A0AD34; }
    goto L_08A0AD30;
L_08A0AD30:;
    f15 = f2;
    goto L_08A0AD34;
L_08A0AD34:;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AD3C;
L_08A0AD3C:;
    v0 = func_08901790();
    goto L_08A0AD44;
L_08A0AD44:;
    sp = sp + 48;
    return v0;
}

/* 08A0AD64 */
u64 func_08A0AD64(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0AD64:;
    sp = sp - 16;
    s0 = D_08C2C56C - (-14996);
    v0 = LD32(s0-14996);
    s1 = a0 + 0;
    v0 = v0 < 0x20u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0AD9C; }
    goto L_08A0AD88;
L_08A0AD88:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A0AD9C:;
    a0 = LD32(a0+64);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0ADA4;
L_08A0ADA4:;
    v1 = 1;
    a0 = D_08C2C574 - (-14988);
    cnd_ = v0 == v1;
    a1 = D_08C2C570 - (-14992);
    if (cnd_) { goto L_08A0ADEC; }
    goto L_08A0ADB4;
L_08A0ADB4:;
    v0 = LD32(a0-14988);
    v0 = v0 + 1;
    ST32(a0-14988, v0);
    goto L_08A0ADC0;
L_08A0ADC0:;
    a0 = LD32(s0-14996);
    v0 = D_08C2C4EC - (-15124);
    v0 = v0 - 15124;
    v1 = a0 << 2;
    v1 = v1 + v0;
    a0 = a0 + 1;
    v0 = D_08C2C4E8 - (-15128);
    ST32(v1, s1);
    ST32(s0-14996, a0);
    ST32(v0-15128, 0);
    goto L_08A0AD88;
L_08A0ADEC:;
    v0 = LD32(a1-14992);
    v0 = v0 + 1;
    ST32(a1-14992, v0);
    goto L_08A0ADC0;
}

/* 08A0ADFC */
u64 func_08A0ADFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0ADFC:;
    sp = sp - 16;
    s1 = D_08C2C56C - (-14996);
    v0 = LD32(s1-14996);
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0AE30; }
    goto L_08A0AE1C;
L_08A0AE1C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A0AE30:;
    a0 = LD32(a0+64);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AE38;
L_08A0AE38:;
    v1 = 1;
    cnd_ = v0 == v1;
    v1 = D_08C2C574 - (-14988);
    if (cnd_) { goto L_08A0AEB8; }
    goto L_08A0AE44;
L_08A0AE44:;
    v0 = LD32(v1-14988);
    v0 = v0 - 1;
    ST32(v1-14988, v0);
    goto L_08A0AE50;
L_08A0AE50:;
    v1 = D_08C2C4EC - (-15124);
    a2 = LD32(s1-14996);
    v0 = v1 - 15124;
    a1 = v0 - 4;
    a0 = (u32)-1;
    a0 = a0 + 1;
    goto L_08A0AE68;
L_08A0AE68:;
    v0 = (s32)a0 < (s32)a2;
    a1 = a1 + 4;
    cnd_ = v0 == 0;
    a3 = a0 << 2;
    if (cnd_) { goto L_08A0AE84; }
    goto L_08A0AE78;
L_08A0AE78:;
    v0 = LD32(a1);
    cnd_ = v0 != s0;
    if (cnd_) { a0 = a0 + 1; goto L_08A0AE68; }
    goto L_08A0AE84;
L_08A0AE84:;
    v1 = v1 - 15124;
    a0 = a2 << 2;
    a0 = a0 + v1;
    a1 = LD32(a0-4);
    v0 = D_08C2C56C - (-14996);
    a2 = a2 - 1;
    v1 = a3 + v1;
    ST32(v0-14996, a2);
    v0 = D_08C2C4E8 - (-15128);
    ST32(v1, a1);
    ST32(v0-15128, 0);
    ST32(a0-4, 0);
    goto L_08A0AE1C;
L_08A0AEB8:;
    v1 = D_08C2C570 - (-14992);
    v0 = LD32(v1-14992);
    v0 = v0 - 1;
    ST32(v1-14992, v0);
    goto L_08A0AE50;
}

/* 08A0AECC */
u32 func_08A0AECC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    int cnd_;
L_08A0AECC:;
    t0 = a0 ^ a2;
    v0 = a1 ^ a3;
    v0 = 0 < v0;
    v1 = 0 < t0;
    v1 = v1 | v0;
    a2 = a2 < a0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0AF0C; }
    goto L_08A0AEEC;
L_08A0AEEC:;
    v0 = t0 < 0x1u;
    v1 = a1 < a3;
    v1 = v0 & v1;
    cnd_ = a2 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A0AF08; }
    goto L_08A0AF00;
L_08A0AF00:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A0AF0C; }
    goto L_08A0AF08;
L_08A0AF08:;
    v0 = 1;
    goto L_08A0AF0C;
L_08A0AF0C:;
    return v0;
}

/* 08A0AF14 */
void func_08A0AF14(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0AF14:;
    sp = sp - 32;
    s2 = (u32)-1;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A0AF8C; }
    goto L_08A0AF38;
L_08A0AF38:;
    v1 = LD32(a1+432);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = D_08B1BCF0 - (-17168); goto L_08A0AF90; }
    goto L_08A0AF48;
L_08A0AF48:;
    v1 = LD32(a1+428);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = D_08B1BCF0 - (-17168); goto L_08A0AF90; }
    goto L_08A0AF58;
L_08A0AF58:;
    v0 = v1 << 2;
    v1 = D_08ADEBB8 - (-5192);
    v1 = v1 - 5192;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A0AF74u: goto L_08A0AF74; case 0x08A0AF8Cu: goto L_08A0AF8C; case 0x08A0B058u: goto L_08A0B058; case 0x08A0B060u: goto L_08A0B060; case 0x08A0B068u: goto L_08A0B068; default: rs_break(0, 0x08a0af6c); }
L_08A0AF74:;
    v0 = D_08C29328 - (-27864);
    v1 = LD32(v0-27864);
    s2 = 359;
    v0 = 285;
    v1 = v1 ^ 0x5;
    if (v1 != 0) s2 = v0;
    goto L_08A0AF8C;
L_08A0AF8C:;
    s1 = D_08B1BCF0 - (-17168);
    goto L_08A0AF90;
L_08A0AF90:;
    a0 = LD32(s1-17168);
    cnd_ = a0 == s2;
    s3 = (u32)-1;
    if (cnd_) { goto L_08A0AFD0; }
    goto L_08A0AF9C;
L_08A0AF9C:;
    cnd_ = a0 == s3;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A0AFBC; }
    goto L_08A0AFA4;
L_08A0AFA4:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AFAC;
L_08A0AFAC:;
    cnd_ = v0 != 0;
    a0 = LD32(s1-17168);
    if (cnd_) { goto L_08A0B048; }
    goto L_08A0AFB4;
L_08A0AFB4:;
    ST32(s1-17168, s3);
    goto L_08A0AFB8;
L_08A0AFB8:;
    v0 = (u32)-1;
    goto L_08A0AFBC;
L_08A0AFBC:;
    cnd_ = s2 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A0AFD0; }
    goto L_08A0AFC4;
L_08A0AFC4:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0AFCC;
L_08A0AFCC:;
    ST32(s1-17168, s2);
    goto L_08A0AFD0;
L_08A0AFD0:;
    a0 = 435;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0AFDC;
L_08A0AFDC:;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0AFF0; }
    goto L_08A0AFE8;
L_08A0AFE8:;
    v0 = LD32(s0+520);
    v0 = (v0 >> 20) & 0x1;
    goto L_08A0AFF0;
L_08A0AFF0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0B02C; }
    goto L_08A0AFF8;
L_08A0AFF8:;
    cnd_ = v1 == 0;
    a0 = 435;
    if (cnd_) { goto L_08A0B01C; }
    goto L_08A0B000;
L_08A0B000:;
    goto L_08A0B004;
L_08A0B004:;
    sp = sp + 32;
    return;
L_08A0B01C:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B024;
L_08A0B024:;
    goto L_08A0B004;
L_08A0B02C:;
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08A0B004; }
    goto L_08A0B034;
L_08A0B034:;
    a0 = 435;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B040;
L_08A0B040:;
    goto L_08A0B004;
L_08A0B048:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B050;
L_08A0B050:;
    ST32(s1-17168, s3);
    goto L_08A0AFB8;
L_08A0B058:;
    s2 = 286;
    goto L_08A0AF8C;
L_08A0B060:;
    s2 = 183;
    goto L_08A0AF8C;
L_08A0B068:;
    s2 = 37;
    goto L_08A0AF8C;
}

/* 08A0B070 */
void func_08A0B070(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0B070:;
    sp = sp - 32;
    s3 = (u32)-1;
    s1 = 0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A0B10C; }
    goto L_08A0B094;
L_08A0B094:;
    a2 = LD32(a1+436);
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08C2C6D4 - (-14636);
    if (cnd_) { goto L_08A0B10C; }
    goto L_08A0B0A4;
L_08A0B0A4:;
    v1 = a0 - 14636;
    v0 = LD32(v1+4);
    a1 = LD32(a0-14636);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A0B0F8; }
    goto L_08A0B0CC;
L_08A0B0CC:;
    a0 = LD32(a1);
    goto L_08A0B0D0;
L_08A0B0D0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0B180; }
    goto L_08A0B0E8;
L_08A0B0E8:;
    a1 = LD32(a1+4);
    goto L_08A0B0EC;
L_08A0B0EC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A0B0D0; }
    goto L_08A0B0F4;
L_08A0B0F4:;
    v1 = 0 + 0;
    goto L_08A0B0F8;
L_08A0B0F8:;
    cnd_ = v1 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_08A0B10C; }
    goto L_08A0B100;
L_08A0B100:;
    v0 = LD_U8(v1+64);
    cnd_ = v0 != 0;
    if (cnd_) { s3 = LD32(v1+68); goto L_08A0B10C; }
    goto L_08A0B10C;
L_08A0B10C:;
    s0 = D_08B1BCF4 - (-17164);
    a0 = LD32(s0-17164);
    cnd_ = a0 == s3;
    s2 = (u32)-1;
    if (cnd_) { goto L_08A0B154; }
    goto L_08A0B11C;
L_08A0B11C:;
    cnd_ = a0 == s2;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A0B13C; }
    goto L_08A0B124;
L_08A0B124:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B12C;
L_08A0B12C:;
    cnd_ = v0 != 0;
    a0 = LD32(s0-17164);
    if (cnd_) { goto L_08A0B170; }
    goto L_08A0B134;
L_08A0B134:;
    ST32(s0-17164, s2);
    goto L_08A0B138;
L_08A0B138:;
    v0 = (u32)-1;
    goto L_08A0B13C;
L_08A0B13C:;
    cnd_ = s3 == v0;
    if (cnd_) { goto L_08A0B158; }
    goto L_08A0B144;
L_08A0B144:;
    a1 = LD32(s1+76);
    a0 = s3 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B150;
L_08A0B150:;
    ST32(s0-17164, s3);
    goto L_08A0B154;
L_08A0B154:;
    goto L_08A0B158;
L_08A0B158:;
    sp = sp + 32;
    return;
L_08A0B170:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B178;
L_08A0B178:;
    ST32(s0-17164, s2);
    goto L_08A0B138;
L_08A0B180:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A0B0E8; }
    goto L_08A0B18C;
L_08A0B18C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A0B0EC; }
    goto L_08A0B198;
L_08A0B198:;
    goto L_08A0B0F8;
}

/* 08A0B1A0 */
void func_08A0B1A0(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0B1A0:;
    sp = sp - 16;
    a2 = a1 + 0;
    a0 = 328;
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A0B1E0; }
    goto L_08A0B1B8;
L_08A0B1B8:;
    v0 = LD32(a2+440);
    v1 = LD32(a2+432);
    a2 = LD_U8(a2+196);
    v0 = v0 ^ 0x3e7;
    v0 = 0 < v0;
    v1 = v1 ^ 0x3e7;
    if (v1 != 0) v0 = 0;
    if (a2 != 0) v0 = 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B210; }
    goto L_08A0B1E0;
L_08A0B1E0:;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B1E8;
L_08A0B1E8:;
    a0 = 328;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A0B200; }
    goto L_08A0B1F4;
L_08A0B1F4:;
    goto L_08A0B1F8;
L_08A0B1F8:;
    sp = sp + 16;
    return;
L_08A0B200:;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B208;
L_08A0B208:;
    goto L_08A0B1F8;
L_08A0B210:;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B218;
L_08A0B218:;
    a0 = 328;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A0B1F4; }
    goto L_08A0B224;
L_08A0B224:;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B22C;
L_08A0B22C:;
    goto L_08A0B1F8;
}

/* 08A0B234 */
void func_08A0B234(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0B234:;
    sp = sp - 16;
    f0 = BITSF(0);
    f1 = BITSF(LD32(a0+56));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0B278; }
    goto L_08A0B258;
L_08A0B258:;
    v1 = LD32(a0+20);
    v0 = 999;
    cnd_ = v1 == v0;
    v0 = D_08C28F3C - (-28868);
    if (cnd_) { goto L_08A0B278; }
    goto L_08A0B268;
L_08A0B268:;
    a0 = LD32(v0-28868);
    v1 = 2;
    cnd_ = a0 == v1;
    if (cnd_) { v1 = LD32(s0+4); goto L_08A0B288; }
    goto L_08A0B278;
L_08A0B278:;
    goto L_08A0B27C;
L_08A0B27C:;
    sp = sp + 16;
    return;
L_08A0B288:;
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A0B27C; }
    goto L_08A0B294;
L_08A0B294:;
    v0 = LD_U8(s0+60);
    cnd_ = v0 != 0;
    v0 = D_08AEF710 - (-2288);
    if (cnd_) { goto L_08A0B334; }
    goto L_08A0B2A0;
L_08A0B2A0:;
    v0 = D_08AEF704 - (-2300);
    f0 = BITSF(LD32(v0-2300));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = D_08B285A0 - (-31328); goto L_08A0B30C; }
    goto L_08A0B2B8;
L_08A0B2B8:;
    v0 = D_08C28F68 - (-28824);
    v1 = LD32(v0-28824);
    a1 = D_08B1BCF8 - (-17160);
    cnd_ = v1 == a0;
    v0 = 378;
    if (cnd_) { goto L_08A0B32C; }
    goto L_08A0B2CC;
L_08A0B2CC:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 379;
    if (cnd_) { goto L_08A0B32C; }
    goto L_08A0B2D8;
L_08A0B2D8:;
    a1 = LD32(a1-17160);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v0 = D_08AEF708 - (-2296);
    if (cnd_) { goto L_08A0B31C; }
    goto L_08A0B2E8;
L_08A0B2E8:;
    f12 = BITSF(LD32(v0-2296));
    a0 = 3;
    a2 = 0 + 0;
    a3 = 1;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B2FC;
L_08A0B2FC:;
    f1 = BITSF(LD32(s0+56));
    v0 = 1;
    ST8(s0+60, v0);
    goto L_08A0B308;
L_08A0B308:;
    v0 = D_08B285A0 - (-31328);
    goto L_08A0B30C;
L_08A0B30C:;
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 + f0;
    ST32(s0+56, FBITS(f0));
    goto L_08A0B278;
L_08A0B31C:;
    v0 = D_08AEF70C - (-2292);
    f0 = BITSF(LD32(v0-2292));
    ST32(s0+56, FBITS(f0));
    goto L_08A0B2FC;
L_08A0B32C:;
    ST32(a1-17160, v0);
    goto L_08A0B2D8;
L_08A0B334:;
    f0 = BITSF(LD32(v0-2288));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A0B30C; }
    goto L_08A0B348;
L_08A0B348:;
    v0 = D_08AEF708 - (-2296);
    f12 = BITSF(LD32(v0-2296));
    a0 = 3;
    a1 = 380;
    a2 = 0 + 0;
    a3 = 1;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B364;
L_08A0B364:;
    v0 = D_08AEF70C - (-2292);
    f0 = BITSF(LD32(v0-2292));
    ST32(s0+56, FBITS(f0));
    f1 = f0;
    goto L_08A0B308;
}

/* 08A0B378 */
void func_08A0B378(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0B378:;
    sp = sp - 16;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A0B3C4; }
    goto L_08A0B390;
L_08A0B390:;
    a0 = a1 + 0;
    v0 = func_089C6AE8(a0, t1, t2, t3);
    goto L_08A0B398;
L_08A0B398:;
    if (v0 == 0) s0 = 0;
    cnd_ = s0 == 0;
    a0 = 241;
    if (cnd_) { goto L_08A0B3C8; }
    goto L_08A0B3A4;
L_08A0B3A4:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B3AC;
L_08A0B3AC:;
    cnd_ = v0 != 0;
    a0 = 241;
    if (cnd_) { goto L_08A0B3C8; }
    goto L_08A0B3B4;
L_08A0B3B4:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A0B758; }
    goto L_08A0B3C4;
L_08A0B3C4:;
    a0 = 241;
    goto L_08A0B3C8;
L_08A0B3C8:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B3D0;
L_08A0B3D0:;
    cnd_ = v0 != 0;
    a0 = 241;
    if (cnd_) { goto L_08A0B748; }
    goto L_08A0B3D8;
L_08A0B3D8:;
    cnd_ = s0 == 0;
    a0 = 432;
    if (cnd_) { goto L_08A0B3EC; }
    goto L_08A0B3E0;
L_08A0B3E0:;
    v0 = LD_U8(s0+476);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B728; }
    goto L_08A0B3EC;
L_08A0B3EC:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B3F4;
L_08A0B3F4:;
    cnd_ = v0 != 0;
    a0 = 432;
    if (cnd_) { goto L_08A0B718; }
    goto L_08A0B3FC;
L_08A0B3FC:;
    cnd_ = s0 == 0;
    s1 = 68;
    if (cnd_) { goto L_08A0B430; }
    goto L_08A0B404;
L_08A0B404:;
    v0 = LD32(s0+92);
    cnd_ = v0 == 0;
    a0 = 360;
    if (cnd_) { goto L_08A0B434; }
    goto L_08A0B410;
L_08A0B410:;
    v0 = LD32(s0+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0B434; }
    goto L_08A0B420;
L_08A0B420:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A0B688; }
    goto L_08A0B430;
L_08A0B430:;
    a0 = 360;
    goto L_08A0B434;
L_08A0B434:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B43C;
L_08A0B43C:;
    cnd_ = v0 != 0;
    a0 = 360;
    if (cnd_) { goto L_08A0B678; }
    goto L_08A0B444;
L_08A0B444:;
    a0 = 68;
    goto L_08A0B448;
L_08A0B448:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B450;
L_08A0B450:;
    cnd_ = v0 != 0;
    a0 = 68;
    if (cnd_) { goto L_08A0B668; }
    goto L_08A0B458;
L_08A0B458:;
    cnd_ = s0 == 0;
    a0 = 69;
    if (cnd_) { goto L_08A0B494; }
    goto L_08A0B460;
L_08A0B460:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B468;
L_08A0B468:;
    cnd_ = v0 != 0;
    a0 = 69;
    if (cnd_) { goto L_08A0B494; }
    goto L_08A0B470;
L_08A0B470:;
    v0 = LD32(s0+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0B494; }
    goto L_08A0B480;
L_08A0B480:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A0B624; }
    goto L_08A0B490;
L_08A0B490:;
    a0 = 69;
    goto L_08A0B494;
L_08A0B494:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B49C;
L_08A0B49C:;
    cnd_ = v0 != 0;
    a0 = 69;
    if (cnd_) { goto L_08A0B614; }
    goto L_08A0B4A4;
L_08A0B4A4:;
    cnd_ = s0 == 0;
    a0 = 67;
    if (cnd_) { goto L_08A0B4F0; }
    goto L_08A0B4AC;
L_08A0B4AC:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B4B4;
L_08A0B4B4:;
    cnd_ = v0 != 0;
    a0 = 67;
    if (cnd_) { goto L_08A0B4F0; }
    goto L_08A0B4BC;
L_08A0B4BC:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B4F0; }
    goto L_08A0B4CC;
L_08A0B4CC:;
    v0 = LD32(s0+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B4F0; }
    goto L_08A0B4DC;
L_08A0B4DC:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A0B5E0; }
    goto L_08A0B4EC;
L_08A0B4EC:;
    a0 = 67;
    goto L_08A0B4F0;
L_08A0B4F0:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B4F8;
L_08A0B4F8:;
    cnd_ = v0 != 0;
    a0 = 67;
    if (cnd_) { goto L_08A0B5D0; }
    goto L_08A0B500;
L_08A0B500:;
    cnd_ = s0 == 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_08A0B514; }
    goto L_08A0B508;
L_08A0B508:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A0B54C; }
    goto L_08A0B514;
L_08A0B514:;
    a0 = 182;
    goto L_08A0B518;
L_08A0B518:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B520;
L_08A0B520:;
    cnd_ = v0 != 0;
    a0 = 182;
    if (cnd_) { goto L_08A0B53C; }
    goto L_08A0B528;
L_08A0B528:;
    goto L_08A0B52C;
L_08A0B52C:;
    sp = sp + 16;
    return;
L_08A0B53C:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B544;
L_08A0B544:;
    goto L_08A0B52C;
L_08A0B54C:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B554;
L_08A0B554:;
    cnd_ = v0 != 0;
    a0 = 182;
    if (cnd_) { goto L_08A0B518; }
    goto L_08A0B55C;
L_08A0B55C:;
    v1 = LD32(s0);
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B56C;
L_08A0B56C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 182; goto L_08A0B518; }
    goto L_08A0B574;
L_08A0B574:;
    v0 = LD32(s0+852);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    a0 = 182;
    if (cnd_) { goto L_08A0B518; }
    goto L_08A0B584;
L_08A0B584:;
    v0 = LD_U8(s0+444);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0B518; }
    goto L_08A0B590;
L_08A0B590:;
    v0 = LD32(s0+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B518; }
    goto L_08A0B5A0;
L_08A0B5A0:;
    v0 = LD_U8(s0+196);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B518; }
    goto L_08A0B5AC;
L_08A0B5AC:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B5B4;
L_08A0B5B4:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A0B52C; }
    goto L_08A0B5BC;
L_08A0B5BC:;
    a0 = 182;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B5C8;
L_08A0B5C8:;
    goto L_08A0B52C;
L_08A0B5D0:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B5D8;
L_08A0B5D8:;
    goto L_08A0B500;
L_08A0B5E0:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B5EC;
L_08A0B5EC:;
    cnd_ = v0 != 0;
    a0 = 67;
    if (cnd_) { goto L_08A0B4F0; }
    goto L_08A0B5F4;
L_08A0B5F4:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B5FC;
L_08A0B5FC:;
    cnd_ = v0 != 0;
    a0 = 67;
    if (cnd_) { goto L_08A0B500; }
    goto L_08A0B604;
L_08A0B604:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B60C;
L_08A0B60C:;
    goto L_08A0B500;
L_08A0B614:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B61C;
L_08A0B61C:;
    goto L_08A0B4A4;
L_08A0B624:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B630;
L_08A0B630:;
    cnd_ = v0 != 0;
    a0 = 69;
    if (cnd_) { goto L_08A0B494; }
    goto L_08A0B638;
L_08A0B638:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B494; }
    goto L_08A0B648;
L_08A0B648:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B650;
L_08A0B650:;
    cnd_ = v0 != 0;
    a0 = 69;
    if (cnd_) { goto L_08A0B4A4; }
    goto L_08A0B658;
L_08A0B658:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B660;
L_08A0B660:;
    goto L_08A0B4A4;
L_08A0B668:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B670;
L_08A0B670:;
    goto L_08A0B458;
L_08A0B678:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B680;
L_08A0B680:;
    a0 = 68;
    goto L_08A0B448;
L_08A0B688:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B694;
L_08A0B694:;
    cnd_ = v0 != 0;
    a0 = 360;
    if (cnd_) { goto L_08A0B434; }
    goto L_08A0B69C;
L_08A0B69C:;
    v1 = LD32(s0+92);
    a0 = 68;
    v0 = LD32(v1+12);
    v1 = 360;
    v0 = v0 ^ 0x1;
    if (v0 == 0) s1 = v1;
    cnd_ = s1 == a0;
    if (cnd_) { a0 = 360; goto L_08A0B700; }
    goto L_08A0B6BC;
L_08A0B6BC:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B6C4;
L_08A0B6C4:;
    cnd_ = v0 != 0;
    a0 = 68;
    if (cnd_) { goto L_08A0B6F0; }
    goto L_08A0B6CC;
L_08A0B6CC:;
    a0 = s1 + 0;
    goto L_08A0B6D0;
L_08A0B6D0:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B6D8;
L_08A0B6D8:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A0B458; }
    goto L_08A0B6E0;
L_08A0B6E0:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B6E8;
L_08A0B6E8:;
    goto L_08A0B458;
L_08A0B6F0:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B6F8;
L_08A0B6F8:;
    a0 = s1 + 0;
    goto L_08A0B6D0;
L_08A0B700:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B708;
L_08A0B708:;
    cnd_ = v0 == 0;
    a0 = 360;
    if (cnd_) { goto L_08A0B6CC; }
    goto L_08A0B710;
L_08A0B710:;
    goto L_08A0B6F0;
L_08A0B718:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B720;
L_08A0B720:;
    goto L_08A0B3FC;
L_08A0B728:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B730;
L_08A0B730:;
    cnd_ = v0 != 0;
    a0 = 432;
    if (cnd_) { goto L_08A0B3FC; }
    goto L_08A0B738;
L_08A0B738:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B740;
L_08A0B740:;
    goto L_08A0B3FC;
L_08A0B748:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B750;
L_08A0B750:;
    goto L_08A0B3D8;
L_08A0B758:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B764;
L_08A0B764:;
    cnd_ = v0 != 0;
    a0 = 241;
    if (cnd_) { goto L_08A0B3C8; }
    goto L_08A0B76C;
L_08A0B76C:;
    a1 = 0 + 0;
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B774;
L_08A0B774:;
    cnd_ = v0 != 0;
    a0 = 241;
    if (cnd_) { goto L_08A0B3D8; }
    goto L_08A0B77C;
L_08A0B77C:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B784;
L_08A0B784:;
    goto L_08A0B3D8;
}

/* 08A0B78C */
rv_t func_08A0B78C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0B78C:;
    sp = sp - 32;
    s0 = D_08C2C57C - (-14980);
    v0 = LD32(s0-14980);
    v1 = v0 ^ 0x4;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B7CC; }
    goto L_08A0B7B8;
L_08A0B7B8:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    v0 = D_08B2858C - (-31348);
    if (cnd_) { goto L_08A0B7E0; }
    goto L_08A0B7C8;
L_08A0B7C8:;
    ST32(s0-14980, 0);
    goto L_08A0B7CC;
L_08A0B7CC:;
    goto L_08A0B7D0;
L_08A0B7D0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A0B7E0:;
    f20 = BITSF(LD32(v0-31348));
    { u64 r_ = func_0883C044(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B7E8;
L_08A0B7E8:;
    cnd_ = v0 == 0;
    v0 = D_08B1BCFC - (-17156);
    if (cnd_) { goto L_08A0B8D8; }
    goto L_08A0B7F0;
L_08A0B7F0:;
    ST32(v0-17156, FBITS(f20));
    v1 = LD32(s0-14980);
    goto L_08A0B7F8;
L_08A0B7F8:;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0B7D0; }
    goto L_08A0B804;
L_08A0B804:;
    v0 = v1 << 2;
    v1 = D_08ADEBD0 - (-5168);
    v1 = v1 - 5168;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A0B7CCu: goto L_08A0B7CC; case 0x08A0B820u: goto L_08A0B820; case 0x08A0B858u: goto L_08A0B858; case 0x08A0B8BCu: goto L_08A0B8BC; default: rs_break(0, 0x08a0b818); }
L_08A0B820:;
    v0 = D_08B1BCFC - (-17156);
    v1 = D_08AEF714 - (-2284);
    f0 = BITSF(LD32(v0-17156));
    f1 = BITSF(LD32(v1-2284));
    f0 = f0 + f1;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A0B7D0; }
    goto L_08A0B844;
L_08A0B844:;
    a0 = 0 + 0;
    v0 = sceKernelPowerTick(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A0B84C;
L_08A0B84C:;
    v1 = 2;
    ST32(s0-14980, v1);
    goto L_08A0B7CC;
L_08A0B858:;
    v0 = D_08B1BCFC - (-17156);
    f1 = BITSF(LD32(v0-17156));
    v0 = D_08AEF718 - (-2280);
    f0 = BITSF(LD32(v0-2280));
    v1 = D_08B15F9C - (24476);
    f0 = f1 + f0;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    ST8(v1+24476, 0);
    if (cnd_) { goto L_08A0B8A4; }
    goto L_08A0B880;
L_08A0B880:;
    v0 = D_08AEF714 - (-2284);
    f0 = BITSF(LD32(v0-2284));
    f0 = f1 + f0;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = 3;
    if (cnd_) { goto L_08A0B7CC; }
    goto L_08A0B89C;
L_08A0B89C:;
    ST32(s0-14980, v0);
    goto L_08A0B7CC;
L_08A0B8A4:;
    v0 = 4;
    a0 = 19;
    ST32(s0-14980, v0);
    { u64 r_ = func_08970C5C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B8B4;
L_08A0B8B4:;
    goto L_08A0B7D0;
L_08A0B8BC:;
    v0 = D_08B15F9C - (24476);
    ST8(v0+24476, 0);
    { u64 r_ = func_0883C044(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0B8C8;
L_08A0B8C8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0B7D0; }
    goto L_08A0B8D0;
L_08A0B8D0:;
    v0 = 1;
    goto L_08A0B89C;
L_08A0B8D8:;
    { rv_t r_ = func_0883C098(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0B8E0;
L_08A0B8E0:;
    cnd_ = v0 == 0;
    v1 = LD32(s0-14980);
    if (cnd_) { goto L_08A0B7F8; }
    goto L_08A0B8E8;
L_08A0B8E8:;
    v0 = D_08B1BCFC - (-17156);
    goto L_08A0B7F0;
}

/* 08A0B8F0 */
void func_08A0B8F0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0B8F0:;
    sp = sp - 32;
    v0 = D_08C2C57C - (-14980);
    v1 = 2;
    a0 = LD32(v0-14980);
    cnd_ = a0 == v1;
    v0 = D_08B2858C - (-31348);
    if (cnd_) { goto L_08A0B920; }
    goto L_08A0B910;
L_08A0B910:;
    goto L_08A0B914;
L_08A0B914:;
    sp = sp + 32;
    return;
L_08A0B920:;
    f20 = BITSF(LD32(v0-31348));
    f12 = f20;
    func_08A0BA90();
    goto L_08A0B92C;
L_08A0B92C:;
    f12 = f20;
    func_08A0B93C(f12);
    goto L_08A0B934;
L_08A0B934:;
    goto L_08A0B914;
}

/* 08A0B93C */
void func_08A0B93C(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0;
    float *v = vfpu_v;
    u8 stack_[432] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 432);
L_08A0B93C:;
    f1 = BITSF(F2I(f12, 1));
    sp = sp - 432;
    {v[0]=0.63661977236f;}
    f0 = (float)(s32)FBITS(f1);
    v0 = D_08B1BCFC - (-17156);
    v1 = 0xff0000u;
    f0 = f12 - f0;
    v1 = v1 | 0xffff;
    f21 = BITSF(0);
    f0 = f0 + f0;
    f1 = BITSF(LD32(v0-17156));
    v0 = FBITS(f0);
    {v[4]=BITSF(v0);}
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    v0 = D_08B1BD04 - (-17148);
    a0 = LD32(v0-17148);
    v0 = D_08AEF71C - (-2276);
    f12 = f12 - f1;
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    f22 = BITSF(LD32(v0-2276));
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEF720 - (-2272);
    f0 = BITSF(LD32(v0-2272));
    f22 = f22 - f12;
    f1 = f1 * f0;
    f0 = BITSF(F2I(f1, 1));
    v0 = FBITS(f0);
    s0 = v0 + 85;
    s0 = s0 << 24;
    s0 = s0 | v1;
    func_088CD5B0(a0);
    goto L_08A0B9D0;
L_08A0B9D0:;
    a0 = 403;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A0B9DC;
L_08A0B9DC:;
    v1 = D_08AEF724 - (-2268);
    f20 = BITSF(LD32(v1-2268));
    a0 = D_08C2C594 - (-14956);
    f13 = f21;
    f14 = f20;
    f15 = f20;
    a3 = v0 + 0;
    a2 = 4;
    f12 = f21;
    a1 = s0 + 0;
    a0 = a0 - 14956;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0BA0C;
L_08A0BA0C:;
    v1 = D_08B1BD00 - (-17152);
    a0 = LD32(v1-17152);
    func_088CD5B0(a0);
    goto L_08A0BA18;
L_08A0BA18:;
    a0 = 402;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A0BA24;
L_08A0BA24:;
    f12 = f22;
    s0 = v0 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0BA30;
L_08A0BA30:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    t1 = v1 + 0;
    a2 = 200;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0BA4C;
L_08A0BA4C:;
    a0 = D_08C2C5A4 - (-14940);
    f12 = f21;
    f14 = f20;
    f13 = f21;
    f15 = f20;
    a0 = a0 - 14940;
    a1 = (u32)-1;
    a2 = 132;
    a3 = sp + 0;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0BA74;
L_08A0BA74:;
    sp = sp + 432;
    return;
}

/* 08A0BA90 */
void func_08A0BA90(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A0BA90:;
    sp = sp - 80;
    v0 = D_08AEF728 - (-2264);
    v1 = D_08AEF72C - (-2260);
    f12 = BITSF(0);
    fp = D_08C2C580 - (-14976);
    f13 = f12;
    s7 = D_08AEF734 - (-2252);
    s6 = D_08C2C584 - (-14972);
    s5 = D_08C2C588 - (-14968);
    s3 = 0 + 0;
    s2 = 0 + 0;
    s1 = (u32)-1;
    s0 = D_08B2C12C - (-16084);
    s0 = s0 - 16084;
    a0 = s0 + 0;
    f22 = f12;
    s4 = s0 + 0;
    f14 = BITSF(LD32(v0-2264));
    v0 = 1;
    ST32(s0+84, v0);
    v0 = 0x88000000u;
    f15 = BITSF(LD32(v1-2260));
    ST32(s0+64, v0);
    ST32(s0+80, s1);
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A0BB28;
L_08A0BB28:;
    v0 = D_08AEF730 - (-2256);
    f14 = BITSF(LD32(v0-2256));
    f12 = f22;
    a0 = s0 + 0;
    f13 = f22;
    f15 = f14;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A0BB44;
L_08A0BB44:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0BB50;
L_08A0BB50:;
    v0 = D_08C2C58C - (-14964);
    v1 = v0 - 14964;
    f0 = BITSF(LD32(v0-14964));
    f1 = BITSF(LD32(v1+4));
    ST32(s0+64, s1);
    s1 = 17;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(s0+84, 0);
    goto L_08A0BB74;
L_08A0BB74:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_08A0BC50; }
    goto L_08A0BB7C;
L_08A0BB7C:;
    s2 = LD32(s5-14968);
    goto L_08A0BB80;
L_08A0BB80:;
    f22 = BITSF(0);
    a0 = s4 + 0;
    goto L_08A0BB88;
L_08A0BB88:;
    cnd_ = s2 == 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A0BC00; }
    goto L_08A0BB90;
L_08A0BB90:;
    f12 = BITSF(LD32(s2+16));
    f13 = BITSF(LD32(s2+20));
    f1 = BITSF(LD32(s2+24));
    f0 = BITSF(LD32(s2+28));
    v0 = LD32(s2+12);
    f1 = f1 - f12;
    f0 = f0 - f13;
    ST32(s4+80, v0);
    f14 = f1;
    f20 = BITSF(LD32(s2+32));
    f21 = BITSF(LD32(s2+36));
    f15 = f0;
    f20 = f20 * f1;
    f21 = f21 * f0;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_08A0BBCC;
L_08A0BBCC:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = f20;
    f12 = f12 + f22;
    f15 = f21;
    a0 = s4 + 0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08A0BBE8;
L_08A0BBE8:;
    a0 = s4 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0BBF4;
L_08A0BBF4:;
    f0 = BITSF(LD32(sp+4));
    f0 = f0 + f21;
    ST32(sp+4, FBITS(f0));
    goto L_08A0BC00;
L_08A0BC00:;
    v0 = s3 < 0x12u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0BB74; }
    goto L_08A0BC0C;
L_08A0BC0C:;
    v0 = func_08901790();
    goto L_08A0BC14;
L_08A0BC14:;
    sp = sp + 80;
    return;
L_08A0BC50:;
    cnd_ = s3 == s1;
    v0 = LD32(s6-14972);
    if (cnd_) { goto L_08A0BC74; }
    goto L_08A0BC58;
L_08A0BC58:;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A0BB88; }
    goto L_08A0BC60;
L_08A0BC60:;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_08A0BB88; }
    goto L_08A0BC68;
L_08A0BC68:;
    f22 = BITSF(LD32(s7-2252));
    s2 = v0 + 0;
    goto L_08A0BB88;
L_08A0BC74:;
    s2 = LD32(fp-14976);
    goto L_08A0BB80;
}

/* 08A0BC7C */
void func_08A0BC7C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0BC7C:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    a0 = D_08C2C57C - (-14980);
    if (cnd_) { goto L_08A0BD38; }
    goto L_08A0BC94;
L_08A0BC94:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    if (cnd_) { ST32(a0-14980, 0); goto L_08A0BCAC; }
    goto L_08A0BCA4;
L_08A0BCA4:;
    v0 = 1;
    ST32(a0-14980, v0);
    goto L_08A0BCAC;
L_08A0BCAC:;
    v0 = LD32(a0-14980);
    a0 = D_08ADEBE4 - (-5148);
    cnd_ = v0 != 0;
    a0 = a0 - 5148;
    if (cnd_) { goto L_08A0BCC8; }
    goto L_08A0BCBC;
L_08A0BCBC:;
    sp = sp + 16;
    return;
L_08A0BCC8:;
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v0-31348));
    v1 = D_08B1BCFC - (-17156);
    ST32(v1-17156, FBITS(f0));
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0BCDC;
L_08A0BCDC:;
    a0 = D_08ADEC0C - (-5108);
    v1 = D_08B1BD00 - (-17152);
    a0 = a0 - 5108;
    ST32(v1-17152, v0);
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0BCF0;
L_08A0BCF0:;
    a0 = 0xf67a0000u;
    v1 = D_08B1BD04 - (-17148);
    a0 = a0 | 0x9b09;
    ST32(v1-17148, v0);
    v0 = func_0883AE54(a0);
    goto L_08A0BD04;
L_08A0BD04:;
    a0 = 0x7f620000u;
    v1 = D_08C2C580 - (-14976);
    a0 = a0 | 0xd76a;
    ST32(v1-14976, v0);
    v0 = func_0883AE54(a0);
    goto L_08A0BD18;
L_08A0BD18:;
    a0 = 0xfc940000u;
    v1 = D_08C2C584 - (-14972);
    a0 = a0 | 0xa3f7;
    ST32(v1-14972, v0);
    v0 = func_0883AE54(a0);
    goto L_08A0BD2C;
L_08A0BD2C:;
    v1 = D_08C2C588 - (-14968);
    ST32(v1-14968, v0);
    goto L_08A0BCBC;
L_08A0BD38:;
    ST32(a0-14980, 0);
    goto L_08A0BCAC;
}

/* 08A0BD40 */
void func_08A0BD40(void)
{
    u32 v0 = 0;
L_08A0BD40:;
    v0 = D_08C2C57C - (-14980);
    ST32(v0-14980, 0);
    return;
}

/* 08A0BD4C */
u32 func_08A0BD4C(void)
{
    u32 v0 = 0, v1 = 0;
L_08A0BD4C:;
    v1 = D_08C2C57C - (-14980);
    v0 = LD32(v1-14980);
    v0 = v0 - 2;
    v0 = v0 < 0x2u;
    return v0;
}

/* 08A0BD60 */
rv_t func_08A0BD60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
L_08A0BD60:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t3 = D_08C2C330 - (-15568);
    t4 = D_08C2C340 - (-15552);
    t9 = D_08C2C350 - (-15536);
    t5 = D_08C2C58C - (-14964);
    t8 = D_08C2C594 - (-14956);
    t6 = D_08C2C5A4 - (-14940);
    a1 = a1 & a0;
    a3 = t3 - 15568;
    t0 = t4 - 15552;
    t1 = t9 - 15536;
    t2 = t8 - 14956;
    a2 = t6 - 14940;
    cnd_ = a1 == 0;
    t7 = t5 - 14964;
    if (cnd_) { goto L_08A0BE98; }
    goto L_08A0BDA8;
L_08A0BDA8:;
    v0 = D_08AEF738 - (-2248);
    f3 = BITSF(LD32(v0-2248));
    v0 = D_08AEF74C - (-2228);
    f8 = BITSF(LD32(v0-2228));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    v1 = D_08AEF744 - (-2236);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f7 = BITSF(LD32(v1-2236));
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f6 = f6 * f3;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    ST32(t4-15552, FBITS(f6));
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AEF73C - (-2244);
    f1 = f1 * f3;
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-2244));
    v0 = D_08AEF740 - (-2240);
    ST32(t1+12, FBITS(f2));
    f4 = f4 * f3;
    f5 = f5 * f3;
    ST32(t5-14964, FBITS(f0));
    f0 = BITSF(LD32(v0-2240));
    v0 = D_08AEF750 - (-2224);
    ST32(t3-15568, FBITS(f1));
    ST32(t7+4, FBITS(f0));
    f0 = BITSF(LD32(v0-2224));
    v0 = D_08AEF758 - (-2216);
    ST32(t6-14940, FBITS(f7));
    ST32(t2+12, FBITS(f0));
    f0 = BITSF(LD32(v0-2216));
    v0 = D_08AEF748 - (-2232);
    ST32(a2+12, FBITS(f0));
    f0 = BITSF(LD32(v0-2232));
    v0 = D_08AEF754 - (-2220);
    ST32(a3+4, FBITS(f5));
    ST32(a3+12, FBITS(f2));
    ST32(t0+4, FBITS(f4));
    ST32(t0+12, FBITS(f2));
    ST32(t9-15536, FBITS(f2));
    ST32(t2+4, FBITS(f0));
    f0 = BITSF(LD32(v0-2220));
    ST32(a2+8, FBITS(f8));
    ST32(t8-14956, FBITS(f7));
    ST32(a2+4, FBITS(f0));
    ST32(a3+8, FBITS(f6));
    ST32(t1+4, FBITS(f2));
    ST32(t0+8, FBITS(f4));
    ST32(t1+8, FBITS(f2));
    ST32(t2+8, FBITS(f8));
    goto L_08A0BE98;
L_08A0BE98:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0BEA0 */
rv_t func_08A0BEA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0BEA0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A0BD60(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0BEB4;
L_08A0BEB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0BEC0 */
void func_08A0BEC0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0BEC0:;
    sp = sp - 32;
    s3 = D_08C2C664 - (-14748);
    s2 = s3 - 14748;
    s1 = a0 + 0;
    s0 = a1 + 0;
    func_08981788(a0, a1);
    goto L_08A0BEEC;
L_08A0BEEC:;
    v0 = D_08B14800 - (18432);
    v0 = v0 + 18432;
    ST32(s1, v0);
    v0 = 999;
    a0 = s0 + 0;
    ST32(s1+184, v0);
    v0 = D_08AEF768 - (-2200);
    f0 = BITSF(LD32(v0-2200));
    v0 = D_08AEF76C - (-2196);
    ST32(s1+172, 0);
    ST32(s1+196, FBITS(f0));
    f0 = BITSF(LD32(v0-2196));
    v0 = (u32)-32766;
    ST16(s1+8, v0);
    ST32(s1+200, FBITS(f0));
    ST32(s1+176, 0);
    ST32(s1+180, 0);
    ST8(s1+188, 0);
    ST32(s1+204, 0);
    v0 = func_08A636E4(a0);
    goto L_08A0BF3C;
L_08A0BF3C:;
    a1 = v0 + 0;
    a2 = 0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089824E4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0BF4C;
L_08A0BF4C:;
    a0 = s0 + 0;
    v0 = func_08A636B0(a0);
    goto L_08A0BF54;
L_08A0BF54:;
    ST32(s1+192, v0);
    a0 = 12;
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0BF70;
L_08A0BF70:;
    a0 = LD32(s3-14748);
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

/* 08A0BFB8 */
rv_t func_08A0BFB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0BFB8:;
    v0 = D_08B14800 - (18432);
    v0 = v0 + 18432;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C664 - (-14748);
    a1 = s0 + 0;
    a0 = a0 - 14748;
    func_08ACF484(a0, a1, t1, t2, t3);
    goto L_08A0BFE4;
L_08A0BFE4:;
    a0 = LD32(s0+192);
    func_08A64C7C(a0);
    goto L_08A0BFEC;
L_08A0BFEC:;
    a0 = s0 + 0;
    { u64 r_ = func_089818A8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0BFF4;
L_08A0BFF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0C004 */
rv_t func_08A0C004(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0C004:;
    v0 = D_08B14800 - (18432);
    v0 = v0 + 18432;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C664 - (-14748);
    a1 = s0 + 0;
    a0 = a0 - 14748;
    func_08ACF484(a0, a1, t1, t2, t3);
    goto L_08A0C030;
L_08A0C030:;
    a0 = LD32(s0+192);
    func_08A64C7C(a0);
    goto L_08A0C038;
L_08A0C038:;
    a0 = s0 + 0;
    { u64 r_ = func_089818A8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C040;
L_08A0C040:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C048;
L_08A0C048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0C058 */
void func_08A0C058(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0C058:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+96);
    s1 = (v0 >> 4) & 0x1;
    { u64 r_ = func_08979E1C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C078;
L_08A0C078:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0C09C; }
    goto L_08A0C080;
L_08A0C080:;
    cnd_ = s1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A0C0C4; }
    goto L_08A0C088;
L_08A0C088:;
    v0 = LD32(s0+96);
    v0 = v0 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0C0AC; }
    goto L_08A0C098;
L_08A0C098:;
    goto L_08A0C09C;
L_08A0C09C:;
    sp = sp + 16;
    return;
L_08A0C0AC:;
    func_08A0D838(a0);
    goto L_08A0C0B4;
L_08A0C0B4:;
    v0 = LD32(s0+96);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s0+96, v0);
    goto L_08A0C098;
L_08A0C0C4:;
    func_08A0DA30(a0);
    goto L_08A0C0CC;
L_08A0C0CC:;
    goto L_08A0C09C;
}

/* 08A0C0D4 */
rv_t func_08A0C0D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0C0D4:;
    sp = sp - 16;
    v1 = LD32(a0+172);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A0C150; }
    goto L_08A0C0F4;
L_08A0C0F4:;
    v0 = v1 << 2;
    v1 = D_08ADEC34 - (-5068);
    v1 = v1 - 5068;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A0C110u: goto L_08A0C110; case 0x08A0C150u: goto L_08A0C150; case 0x08A0C204u: goto L_08A0C204; case 0x08A0C250u: goto L_08A0C250; case 0x08A0C2FCu: goto L_08A0C2FC; default: rs_break(0, 0x08a0c108); }
L_08A0C110:;
    a0 = 0x8026;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C124;
L_08A0C124:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A0C150; }
    goto L_08A0C12C;
L_08A0C12C:;
    v0 = LD32(v0+28);
    a1 = v1 + 0;
    a0 = s1 + 0;
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    a2 = 3;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C148;
L_08A0C148:;
    v0 = 1;
    goto L_08A0C14C;
L_08A0C14C:;
    ST32(s1+172, v0);
    goto L_08A0C150;
L_08A0C150:;
    { u64 r_ = func_08979E1C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C158;
L_08A0C158:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0C1CC; }
    goto L_08A0C160;
L_08A0C160:;
    v1 = LD32(s1+96);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0C1A4; }
    goto L_08A0C170;
L_08A0C170:;
    f1 = BITSF(LD32(s1+200));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A0C1A4; }
    goto L_08A0C188;
L_08A0C188:;
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v0-31348));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A0C1E8; }
    goto L_08A0C1A0;
L_08A0C1A0:;
    v0 = v1 & 0x20;
    goto L_08A0C1A4;
L_08A0C1A4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0C1CC; }
    goto L_08A0C1AC;
L_08A0C1AC:;
    f1 = BITSF(LD32(s1+200));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEF770 - (-2192);
    if (cnd_) { goto L_08A0C1CC; }
    goto L_08A0C1C4;
L_08A0C1C4:;
    f0 = BITSF(LD32(v0-2192));
    ST32(s1+200, FBITS(f0));
    goto L_08A0C1CC;
L_08A0C1CC:;
    a0 = s1 + 0;
    { rv_t r_ = func_08982078(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C1D4;
L_08A0C1D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0C1E8:;
    a0 = s1 + 0;
    func_08A0D838(a0);
    goto L_08A0C1F0;
L_08A0C1F0:;
    v0 = D_08AEF770 - (-2192);
    f0 = BITSF(LD32(v0-2192));
    v1 = LD32(s1+96);
    ST32(s1+200, FBITS(f0));
    goto L_08A0C1A0;
L_08A0C204:;
    v1 = LD32(s1+88);
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A0C240; }
    goto L_08A0C214;
L_08A0C214:;
    v0 = D_08C29328 - (-27864);
    goto L_08A0C218;
L_08A0C218:;
    a0 = LD32(v0-27864);
    v1 = 5;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A0C230; }
    goto L_08A0C228;
L_08A0C228:;
    a0 = 1;
    func_089809B8(a0);
    goto L_08A0C230;
L_08A0C230:;
    a0 = s1 + 0;
    func_08A0D270(a0, t2, t3);
    goto L_08A0C238;
L_08A0C238:;
    v0 = 7;
    goto L_08A0C14C;
L_08A0C240:;
    a0 = s1 + 0;
    f0 = func_08982F58(a0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A0C248;
L_08A0C248:;
    v0 = D_08C29328 - (-27864);
    goto L_08A0C218;
L_08A0C250:;
    v1 = LD32(s1+204);
    v0 = 1;
    cnd_ = v1 != v0;
    a0 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_08A0C150; }
    goto L_08A0C260;
L_08A0C260:;
    a2 = LD32(s1+28);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08A0C150; }
    goto L_08A0C270;
L_08A0C270:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A0C2C0; }
    goto L_08A0C294;
L_08A0C294:;
    a0 = LD32(a1);
    goto L_08A0C298;
L_08A0C298:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0C2DC; }
    goto L_08A0C2B0;
L_08A0C2B0:;
    a1 = LD32(a1+4);
    goto L_08A0C2B4;
L_08A0C2B4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A0C298; }
    goto L_08A0C2BC;
L_08A0C2BC:;
    v1 = 0 + 0;
    goto L_08A0C2C0;
L_08A0C2C0:;
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A0C150; }
    goto L_08A0C2C8;
L_08A0C2C8:;
    a1 = 1;
    func_08A0D59C(a0, a1, t2, t3);
    goto L_08A0C2D0;
L_08A0C2D0:;
    v0 = 2;
    ST32(s1+204, v0);
    goto L_08A0C150;
L_08A0C2DC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A0C2B4; }
    goto L_08A0C2E8;
L_08A0C2E8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A0C2B0; }
    goto L_08A0C2F4;
L_08A0C2F4:;
    goto L_08A0C2C0;
L_08A0C2FC:;
    a0 = s1 + 0;
    func_08A0C058(a0);
    goto L_08A0C304;
L_08A0C304:;
    v1 = LD32(s1+96);
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A0C320; }
    goto L_08A0C314;
L_08A0C314:;
    v0 = v1 | 0x10;
    ST32(s1+96, v0);
    v0 = D_08B285A0 - (-31328);
    goto L_08A0C320;
L_08A0C320:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s1+176));
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s1+176, FBITS(f0));
    if (cnd_) { goto L_08A0C150; }
    goto L_08A0C340;
L_08A0C340:;
    a0 = LD32(s1+88);
    ST32(s1+176, FBITS(f2));
    a1 = 0 + 0;
    v0 = func_08973CD8(a0, a1);
    goto L_08A0C350;
L_08A0C350:;
    cnd_ = v0 != 0;
    v0 = D_08C2BA34 - (-17868);
    if (cnd_) { goto L_08A0C39C; }
    goto L_08A0C358;
L_08A0C358:;
    v1 = LD32(v0-17868);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A0C384; }
    goto L_08A0C364;
L_08A0C364:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A0D6C8(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C36C;
L_08A0C36C:;
    v0 = 3;
    goto L_08A0C370;
L_08A0C370:;
    ST32(s1+172, v0);
    goto L_08A0C374;
L_08A0C374:;
    a0 = s1 + 0;
    func_08A0D1A0(a0, 0, 0);
    goto L_08A0C37C;
L_08A0C37C:;
    goto L_08A0C150;
L_08A0C384:;
    a0 = s1 + 0;
    v1 = LD32(v0+88);
    t_ = v1;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C394;
L_08A0C394:;
    v0 = 4;
    goto L_08A0C370;
L_08A0C39C:;
    a0 = LD32(s1+88);
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C3A4;
L_08A0C3A4:;
    cnd_ = v0 == 0;
    v0 = D_08C2BA34 - (-17868);
    if (cnd_) { goto L_08A0C358; }
    goto L_08A0C3AC;
L_08A0C3AC:;
    a0 = LD32(s1+88);
    s0 = LD32(s1+192);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C3B8;
L_08A0C3B8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_08A64DAC(a0, a1);
    goto L_08A0C3C4;
L_08A0C3C4:;
    v1 = LD32(s1);
    v0 = LD32(v1+116);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C3D4;
L_08A0C3D4:;
    v1 = 3;
    ST32(s1+172, v1);
    goto L_08A0C374;
}

/* 08A0C3E0 */
rv_t func_08A0C3E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A0C3E0:;
    sp = sp - 80;
    a2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0C40C;
L_08A0C40C:;
    a1 = LD_U16(a1+16);
    v0 = a1 & 0xffff;
    v0 = v0 - 32768;
    v1 = v0 < 0x30u;
    cnd_ = v1 == 0;
    v1 = D_08ADEC54 - (-5036);
    if (cnd_) { goto L_08A0C59C; }
    goto L_08A0C424;
L_08A0C424:;
    v0 = v0 << 2;
    v1 = v1 - 5036;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A0C43Cu: goto L_08A0C43C; case 0x08A0C584u: goto L_08A0C584; case 0x08A0C59Cu: goto L_08A0C59C; case 0x08A0CAB0u: goto L_08A0CAB0; case 0x08A0CAC8u: goto L_08A0CAC8; case 0x08A0CAE4u: goto L_08A0CAE4; case 0x08A0CAFCu: goto L_08A0CAFC; case 0x08A0CB14u: goto L_08A0CB14; case 0x08A0CB28u: goto L_08A0CB28; case 0x08A0CBA4u: goto L_08A0CBA4; case 0x08A0CBC8u: goto L_08A0CBC8; case 0x08A0CD40u: goto L_08A0CD40; case 0x08A0CD84u: goto L_08A0CD84; case 0x08A0CDCCu: goto L_08A0CDCC; case 0x08A0CDFCu: goto L_08A0CDFC; default: rs_break(0, 0x08a0c434); }
L_08A0C43C:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+180));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0C454;
L_08A0C454:;
    v1 = LD32(s1+172);
    v0 = 5;
    cnd_ = v1 == v0;
    ST32(s1+180, FBITS(f1));
    if (cnd_) { goto L_08A0C574; }
    goto L_08A0C464;
L_08A0C464:;
    v0 = 3;
    goto L_08A0C468;
L_08A0C468:;
    cnd_ = v1 == v0;
    if (cnd_) { s3 = LD32(s0+24); goto L_08A0C498; }
    goto L_08A0C470;
L_08A0C470:;
    a2 = 1;
    goto L_08A0C474;
L_08A0C474:;
    v0 = a2 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A0C498:;
    a1 = LD32(s1+184);
    ST32(s1+180, FBITS(f1));
    v1 = LD32(s3+36);
    cnd_ = v1 == a1;
    if (cnd_) { v0 = LD32(s1+28); goto L_08A0C4E8; }
    goto L_08A0C4AC;
L_08A0C4AC:;
    v0 = LD_U8(s1+188);
    cnd_ = v0 != 0;
    s4 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_08A0C534; }
    goto L_08A0C4B8;
L_08A0C4B8:;
    ST32(s1+184, v1);
    a0 = s4 - 19252;
    a2 = 1;
    a1 = LD32(s3+36);
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C4CC;
L_08A0C4CC:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A0C4E4; }
    goto L_08A0C4D4;
L_08A0C4D4:;
    a0 = v0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C4DC;
L_08A0C4DC:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_08A0C520; }
    goto L_08A0C4E4;
L_08A0C4E4:;
    v0 = LD32(s1+28);
    goto L_08A0C4E8;
L_08A0C4E8:;
    a1 = LD32(s3+40);
    cnd_ = a1 != v0;
    a2 = 1;
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0C4F4;
L_08A0C4F4:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C500;
L_08A0C500:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A0C470; }
    goto L_08A0C508;
L_08A0C508:;
    v1 = LD32(v0);
    v0 = LD32(v1+4);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C518;
L_08A0C518:;
    a2 = 1;
    goto L_08A0C474;
L_08A0C520:;
    a1 = 1;
    { u64 r_ = func_089E47A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C528;
L_08A0C528:;
    v0 = 1;
    ST8(s1+188, v0);
    goto L_08A0C4E4;
L_08A0C534:;
    a0 = s4 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C540;
L_08A0C540:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A0C558; }
    goto L_08A0C548;
L_08A0C548:;
    a0 = v0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C550;
L_08A0C550:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A0C564; }
    goto L_08A0C558;
L_08A0C558:;
    ST8(s1+188, 0);
    goto L_08A0C55C;
L_08A0C55C:;
    v1 = LD32(s3+36);
    goto L_08A0C4B8;
L_08A0C564:;
    a1 = 0 + 0;
    { u64 r_ = func_089E47A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C56C;
L_08A0C56C:;
    ST8(s1+188, 0);
    goto L_08A0C55C;
L_08A0C574:;
    v0 = 3;
    ST32(s1+172, v0);
    v1 = 3;
    goto L_08A0C468;
L_08A0C584:;
    v1 = LD32(s0+24);
    cnd_ = v1 == 0;
    v0 = 999;
    if (cnd_) { goto L_08A0C59C; }
    goto L_08A0C590;
L_08A0C590:;
    v1 = LD32(v1);
    cnd_ = v1 == v0;
    if (cnd_) { a2 = LD32(s1+28); goto L_08A0C5B0; }
    goto L_08A0C59C;
L_08A0C59C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089820BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C5A8;
L_08A0C5A8:;
    a2 = v0 + 0;
    goto L_08A0C474;
L_08A0C5B0:;
    a3 = D_08C2A608 - (-23032);
    s2 = 999;
    v0 = a3 - 23032;
    cnd_ = a2 == s2;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A0C880; }
    goto L_08A0C5C4;
L_08A0C5C4:;
    v0 = LD32(v0+4);
    v1 = LD32(a3-23032);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A0C614; }
    goto L_08A0C5E8;
L_08A0C5E8:;
    a0 = LD32(a1);
    goto L_08A0C5EC;
L_08A0C5EC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0CA90; }
    goto L_08A0C604;
L_08A0C604:;
    a1 = LD32(a1+4);
    goto L_08A0C608;
L_08A0C608:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A0C5EC; }
    goto L_08A0C610;
L_08A0C610:;
    s0 = 0 + 0;
    goto L_08A0C614;
L_08A0C614:;
    cnd_ = s0 == 0;
    s3 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_08A0C87C; }
    goto L_08A0C61C;
L_08A0C61C:;
    v0 = s3 - 22400;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A0C690; }
    goto L_08A0C644;
L_08A0C644:;
    a2 = LD32(s3-22400);
    a3 = a1 + 0;
    goto L_08A0C64C;
L_08A0C64C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A0C680; }
    goto L_08A0C664;
L_08A0C664:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08A0C694; }
    goto L_08A0C674;
L_08A0C674:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A0C664; }
    goto L_08A0C680;
L_08A0C680:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A0C64C; }
    goto L_08A0C690;
L_08A0C690:;
    a0 = LD32(sp+8);
    goto L_08A0C694;
L_08A0C694:;
    cnd_ = a0 == 0;
    v0 = 999;
    if (cnd_) { goto L_08A0C6EC; }
    goto L_08A0C69C;
L_08A0C69C:;
    a0 = LD32(a0);
    goto L_08A0C6A0;
L_08A0C6A0:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_08A0C6D4; }
    goto L_08A0C6A8;
L_08A0C6A8:;
    v0 = func_089E3BC4(a0);
    goto L_08A0C6B0;
L_08A0C6B0:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A0C6D4; }
    goto L_08A0C6B8;
L_08A0C6B8:;
    v1 = LD32(sp+8);
    v0 = LD32(v1);
    a0 = LD32(v0);
    v1 = LD32(a0-16);
    v0 = v0 + v1;
    s2 = LD32(v0+4);
    a0 = sp + 0;
    goto L_08A0C6D4;
L_08A0C6D4:;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C6DC;
L_08A0C6DC:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08A0C6A0; }
    goto L_08A0C6E8;
L_08A0C6E8:;
    v0 = 999;
    goto L_08A0C6EC;
L_08A0C6EC:;
    cnd_ = s2 == v0;
    a0 = s3 - 22400;
    if (cnd_) { goto L_08A0C864; }
    goto L_08A0C6F4;
L_08A0C6F4:;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C700;
L_08A0C700:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A0C72C; }
    goto L_08A0C708;
L_08A0C708:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_08A0C7D4; }
    goto L_08A0C72C;
L_08A0C72C:;
    s1 = LD32(sp);
    goto L_08A0C730;
L_08A0C730:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A0C470; }
    goto L_08A0C740;
L_08A0C740:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A0C470; }
    goto L_08A0C74C;
L_08A0C74C:;
    v0 = LD32(s1);
    goto L_08A0C750;
L_08A0C750:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A0C7A4; }
    goto L_08A0C764;
L_08A0C764:;
    v0 = LD_U8(s0+8);
    goto L_08A0C768;
L_08A0C768:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A0C7CC; }
    goto L_08A0C770;
L_08A0C770:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A0C7BC; }
    goto L_08A0C778;
L_08A0C778:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A0C780;
L_08A0C780:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C78C;
L_08A0C78C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A0C798;
L_08A0C798:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A0C768; }
    goto L_08A0C7A0;
L_08A0C7A0:;
    v1 = LD32(s1+4);
    goto L_08A0C7A4;
L_08A0C7A4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A0C750; }
    goto L_08A0C7B4;
L_08A0C7B4:;
    a2 = 1;
    goto L_08A0C474;
L_08A0C7BC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A0C780;
L_08A0C7CC:;
    s0 = LD32(s0+4);
    goto L_08A0C798;
L_08A0C7D4:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C7EC;
L_08A0C7EC:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a3 = sp + 16;
    a0 = 0x8031;
    a1 = 12;
    a2 = 0 + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C818;
L_08A0C818:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_08A0C848; }
    goto L_08A0C820;
L_08A0C820:;
    v1 = LD32(v0+28);
    v0 = 2;
    ST32(a3, v0);
    v1 = v1 | 0x1;
    a0 = a3 + 0;
    ST32(a3+28, v1);
    a1 = 1;
    a2 = 1;
    ST32(a3+4, s2);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C848;
L_08A0C848:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C85C;
L_08A0C85C:;
    s1 = LD32(sp);
    goto L_08A0C730;
L_08A0C864:;
    v1 = LD32(s1);
    v0 = LD32(v1+116);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C874;
L_08A0C874:;
    s1 = LD32(sp);
    goto L_08A0C730;
L_08A0C87C:;
    v0 = a3 - 23032;
    goto L_08A0C880;
L_08A0C880:;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp+32, v0);
    v1 = v1 + 1;
    a0 = s0 < a1;
    ST32(v0+8, v1);
    s0 = sp + 32;
    ST32(sp+36, 0);
    cnd_ = a0 == 0;
    ST32(sp+40, 0);
    if (cnd_) { goto L_08A0C8F0; }
    goto L_08A0C8A8;
L_08A0C8A8:;
    a2 = LD32(a3-23032);
    goto L_08A0C8AC;
L_08A0C8AC:;
    a0 = LD32(s0+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s0+8, v1);
    if (cnd_) { goto L_08A0C8E0; }
    goto L_08A0C8C4;
L_08A0C8C4:;
    v1 = LD32(s0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+40); goto L_08A0C8F4; }
    goto L_08A0C8D4;
L_08A0C8D4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A0C8C4; }
    goto L_08A0C8E0;
L_08A0C8E0:;
    v0 = a0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 != 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_08A0C8AC; }
    goto L_08A0C8F0;
L_08A0C8F0:;
    a0 = LD32(sp+40);
    goto L_08A0C8F4;
L_08A0C8F4:;
    cnd_ = a0 == 0;
    v0 = 999;
    if (cnd_) { goto L_08A0C94C; }
    goto L_08A0C8FC;
L_08A0C8FC:;
    a0 = LD32(a0);
    goto L_08A0C900;
L_08A0C900:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A0C934; }
    goto L_08A0C908;
L_08A0C908:;
    v0 = func_089E3BC4(a0);
    goto L_08A0C910;
L_08A0C910:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A0C934; }
    goto L_08A0C918;
L_08A0C918:;
    v1 = LD32(sp+40);
    v0 = LD32(v1);
    a0 = LD32(v0);
    v1 = LD32(a0-16);
    v0 = v0 + v1;
    s2 = LD32(v0+4);
    a0 = s0 + 0;
    goto L_08A0C934;
L_08A0C934:;
    a1 = 1;
    func_08ACF52C(a0, a1);
    goto L_08A0C93C;
L_08A0C93C:;
    a0 = LD32(sp+40);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08A0C900; }
    goto L_08A0C948;
L_08A0C948:;
    v0 = 999;
    goto L_08A0C94C;
L_08A0C94C:;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_08A0CA80; }
    goto L_08A0C954;
L_08A0C954:;
    a0 = s1 + 0;
    v0 = func_089823D8(a0);
    goto L_08A0C95C;
L_08A0C95C:;
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    v0 = D_08AEF778 - (-2184);
    f0 = BITSF(LD32(v0-2184));
    a3 = sp + 16;
    a0 = 0x8031;
    f1 = f1 - f0;
    a1 = 12;
    a2 = 0 + 0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+20, FBITS(f1));
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0C994;
L_08A0C994:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_08A0C9C4; }
    goto L_08A0C99C;
L_08A0C99C:;
    v1 = LD32(v0+28);
    v0 = 2;
    ST32(a3, v0);
    v1 = v1 | 0x1;
    a0 = a3 + 0;
    ST32(a3+28, v1);
    a1 = 1;
    a2 = 1;
    ST32(a3+4, s2);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C9C4;
L_08A0C9C4:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0C9D8;
L_08A0C9D8:;
    s1 = LD32(sp+32);
    goto L_08A0C9DC;
L_08A0C9DC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A0C470; }
    goto L_08A0C9EC;
L_08A0C9EC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A0C470; }
    goto L_08A0C9F8;
L_08A0C9F8:;
    v0 = LD32(s1);
    goto L_08A0C9FC;
L_08A0C9FC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A0CA50; }
    goto L_08A0CA10;
L_08A0CA10:;
    v0 = LD_U8(s0+8);
    goto L_08A0CA14;
L_08A0CA14:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A0CA78; }
    goto L_08A0CA1C;
L_08A0CA1C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A0CA68; }
    goto L_08A0CA24;
L_08A0CA24:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A0CA2C;
L_08A0CA2C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0CA38;
L_08A0CA38:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A0CA44;
L_08A0CA44:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A0CA14; }
    goto L_08A0CA4C;
L_08A0CA4C:;
    v1 = LD32(s1+4);
    goto L_08A0CA50;
L_08A0CA50:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A0C9FC; }
    goto L_08A0CA60;
L_08A0CA60:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CA68:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A0CA2C;
L_08A0CA78:;
    s0 = LD32(s0+4);
    goto L_08A0CA44;
L_08A0CA80:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A0D6C8(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CA88;
L_08A0CA88:;
    s1 = LD32(sp+32);
    goto L_08A0C9DC;
L_08A0CA90:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A0C608; }
    goto L_08A0CA9C;
L_08A0CA9C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0C604; }
    goto L_08A0CAA8;
L_08A0CAA8:;
    goto L_08A0C614;
L_08A0CAB0:;
    v0 = LD32(s0+24);
    a0 = s1 + 0;
    f12 = BITSF(LD32(v0+4));
    { rv_t r_ = func_08A0D2D4(a0, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CAC0;
L_08A0CAC0:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CAC8:;
    v0 = LD32(s0+24);
    a0 = s1 + 0;
    a2 = LD32(v0+8);
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A0D344(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CADC;
L_08A0CADC:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CAE4:;
    v0 = LD32(s0+24);
    a0 = s1 + 0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A0D3C8(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CAF4;
L_08A0CAF4:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CAFC:;
    v0 = LD32(s0+24);
    a0 = s1 + 0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A0D438(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CB0C;
L_08A0CB0C:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CB14:;
    a1 = a1 & 0xffff;
    a0 = s1 + 0;
    { rv_t r_ = func_08A0D540(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CB20;
L_08A0CB20:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CB28:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 0x8021;
    a1 = 12;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0CB3C;
L_08A0CB3C:;
    a3 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0CB48;
L_08A0CB48:;
    v0 = LD32(v0+24);
    v1 = LD32(s0+24);
    a0 = s1 + 0;
    a1 = a3 + 0;
    a2 = LDU32(v1);
    t0 = LDU32(v1+4);
    t1 = LDU32(v1+8);
    STU32(v0, a2);
    STU32(v0+4, t0);
    STU32(v0+8, t1);
    a2 = 3;
    v0 = LD32(a3+28);
    v0 = v0 | 0x1;
    ST32(a3+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CB9C;
L_08A0CB9C:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CBA4:;
    v0 = LD32(s0+24);
    a0 = s1 + 0;
    a2 = LD32(v0+8);
    f12 = BITSF(LD32(v0+4));
    a1 = LD32(v0+12);
    a2 = 0 < a2;
    { rv_t r_ = func_08A0D4A8(a0, a1, a2, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CBC0;
L_08A0CBC0:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CBC8:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+180));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0CBE0;
L_08A0CBE0:;
    ST32(s1+180, FBITS(f1));
    s0 = LD32(s0+24);
    v0 = func_08978770();
    goto L_08A0CBEC;
L_08A0CBEC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 64;
    v0 = func_08A89AFC(a0, a1, a2);
    goto L_08A0CBFC;
L_08A0CBFC:;
    cnd_ = v0 != 0;
    v0 = D_08B1BB5C - (-17572);
    if (cnd_) { goto L_08A0CC14; }
    goto L_08A0CC04;
L_08A0CC04:;
    a0 = LD32(v0-17572);
    v1 = LD32(s0+96);
    cnd_ = v1 == a0;
    if (cnd_) { v0 = LD32(s0+144); goto L_08A0CC28; }
    goto L_08A0CC14;
L_08A0CC14:;
    a0 = LD32(s1+4);
    { rv_t r_ = func_08A6377C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CC1C;
L_08A0CC1C:;
    v0 = 6;
    ST32(s1+172, v0);
    goto L_08A0C470;
L_08A0CC28:;
    f0 = BITSF(LD32(s0+168));
    a1 = s0 + 184;
    ST32(s1+104, v0);
    a0 = s1 + 0;
    v0 = LD32(s0+156);
    ST32(s1+132, FBITS(f0));
    ST32(s1+116, v0);
    v1 = LD32(s0+160);
    f0 = BITSF(LD32(s0+172));
    ST32(s1+120, v1);
    a2 = LD32(s0+164);
    ST32(s1+136, FBITS(f0));
    ST32(s1+124, a2);
    f0 = BITSF(LD32(s0+176));
    v0 = LD32(s0+148);
    ST32(s1+140, FBITS(f0));
    ST32(s1+108, v0);
    f0 = BITSF(LD32(s0+180));
    v0 = LD32(s0+152);
    ST32(s1+92, a2);
    ST32(s1+112, v0);
    ST32(s1+144, FBITS(f0));
    func_08982480(a0, a1);
    goto L_08A0CC84;
L_08A0CC84:;
    a0 = LD32(s1+88);
    a1 = 0 + 0;
    v0 = func_08973CD8(a0, a1);
    goto L_08A0CC90;
L_08A0CC90:;
    cnd_ = v0 != 0;
    v0 = D_08C2BA34 - (-17868);
    if (cnd_) { goto L_08A0CCFC; }
    goto L_08A0CC98;
L_08A0CC98:;
    v1 = LD32(v0-17868);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A0CCD8; }
    goto L_08A0CCA4;
L_08A0CCA4:;
    v0 = D_08AEF774 - (-2188);
    v1 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-2188));
    f12 = BITSF(LD32(v1-31308));
    v0 = 5;
    a0 = s1 + 0;
    f12 = f12 + f0;
    ST32(s1+172, v0);
    ST32(s1+176, FBITS(f0));
    goto L_08A0CCC8;
L_08A0CCC8:;
    { rv_t r_ = func_08A0D204(a0, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CCD0;
L_08A0CCD0:;
    a2 = 1;
    goto L_08A0C474;
L_08A0CCD8:;
    a0 = s1 + 0;
    v1 = LD32(v0+88);
    t_ = v1;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CCE8;
L_08A0CCE8:;
    v0 = 4;
    goto L_08A0CCEC;
L_08A0CCEC:;
    ST32(s1+172, v0);
    f12 = BITSF(0);
    a0 = s1 + 0;
    goto L_08A0CCC8;
L_08A0CCFC:;
    a0 = LD32(s1+88);
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0CD04;
L_08A0CD04:;
    cnd_ = v0 == 0;
    v0 = D_08C2BA34 - (-17868);
    if (cnd_) { goto L_08A0CC98; }
    goto L_08A0CD0C;
L_08A0CD0C:;
    v1 = LD32(s1);
    v0 = 5;
    ST32(s1+172, v0);
    v0 = LD32(v1+84);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CD24;
L_08A0CD24:;
    v0 = D_08B285B4 - (-31308);
    f1 = BITSF(LD32(v0-31308));
    ST32(s1+176, FBITS(f0));
    a0 = s1 + 0;
    f0 = f0 + f1;
    f12 = f0;
    goto L_08A0CCC8;
L_08A0CD40:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+180));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0CD58;
L_08A0CD58:;
    a2 = LD32(s0+24);
    v1 = LD32(s1);
    ST32(s1+180, FBITS(f1));
    a0 = s1 + 0;
    v0 = LD32(v1+104);
    t_ = v0;
    a1 = LD32(a2);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CD74;
L_08A0CD74:;
    v0 = 2;
    a2 = 1;
    ST32(s1+172, v0);
    goto L_08A0C474;
L_08A0CD84:;
    a0 = LD32(s0+24);
    cnd_ = a0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0CD90;
L_08A0CD90:;
    v0 = LD_U8(a0);
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A0CDAC; }
    goto L_08A0CD9C;
L_08A0CD9C:;
    s0 = LD32(s1+172);
    v0 = 3;
    cnd_ = s0 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A0CDB4; }
    goto L_08A0CDAC;
L_08A0CDAC:;
    ST32(s1+204, v0);
    goto L_08A0C470;
L_08A0CDB4:;
    a0 = LD32(s1+28);
    { rv_t r_ = func_08974C50(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CDBC;
L_08A0CDBC:;
    cnd_ = v0 != 0;
    v0 = 4;
    if (cnd_) { goto L_08A0CDAC; }
    goto L_08A0CDC4;
L_08A0CDC4:;
    ST32(s1+204, s0);
    goto L_08A0C470;
L_08A0CDCC:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+180));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0CDE4;
L_08A0CDE4:;
    v1 = LD32(s1+172);
    v0 = 5;
    cnd_ = v1 != v0;
    ST32(s1+180, FBITS(f1));
    if (cnd_) { goto L_08A0C474; }
    goto L_08A0CDF4;
L_08A0CDF4:;
    v0 = 4;
    goto L_08A0CCEC;
L_08A0CDFC:;
    s2 = LD32(s0+24);
    cnd_ = s2 == 0;
    a0 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_08A0C470; }
    goto L_08A0CE08;
L_08A0CE08:;
    a2 = LD32(s1+28);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_08A0C470; }
    goto L_08A0CE18;
L_08A0CE18:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A0CE68; }
    goto L_08A0CE3C;
L_08A0CE3C:;
    a0 = LD32(a1);
    goto L_08A0CE40;
L_08A0CE40:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0CF04; }
    goto L_08A0CE58;
L_08A0CE58:;
    a1 = LD32(a1+4);
    goto L_08A0CE5C;
L_08A0CE5C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A0CE40; }
    goto L_08A0CE64;
L_08A0CE64:;
    s0 = 0 + 0;
    goto L_08A0CE68;
L_08A0CE68:;
    cnd_ = s0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A0C470; }
    goto L_08A0CE70;
L_08A0CE70:;
    a1 = s2 + 0;
    func_08982480(a0, a1);
    goto L_08A0CE78;
L_08A0CE78:;
    f1 = BITSF(LD32(s2+20));
    a0 = s0 + 0;
    a1 = s2 + 0;
    ST32(s1+132, FBITS(f1));
    f0 = BITSF(LD32(s2+24));
    ST32(s1+136, FBITS(f0));
    f1 = BITSF(LD32(s2+28));
    ST32(s1+140, FBITS(f1));
    f0 = BITSF(LD32(s2+32));
    ST32(s1+144, FBITS(f0));
    func_089E4770(a0, a1);
    goto L_08A0CEA4;
L_08A0CEA4:;
    v1 = LD32(s0);
    a1 = s2 + 0;
    v0 = LD32(v1+224);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CEB8;
L_08A0CEB8:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+132));
    v0 = LD32(s0);
    f0 = f0 / f1;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    f12 = BITSF(LD32(a0+40));
    f12 = f12 * f0;
    func_0886422C(a0, f12);
    goto L_08A0CEDC;
L_08A0CEDC:;
    f1 = BITSF(LD32(s1+132));
    a2 = 1;
    ST32(s0+8, FBITS(f1));
    f0 = BITSF(LD32(s1+136));
    ST32(s0+104, FBITS(f0));
    f1 = BITSF(LD32(s1+140));
    ST32(s0+308, FBITS(f1));
    f0 = BITSF(LD32(s1+144));
    ST32(s0+312, FBITS(f0));
    goto L_08A0C474;
L_08A0CF04:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A0CE5C; }
    goto L_08A0CF10;
L_08A0CF10:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0CE58; }
    goto L_08A0CF1C;
L_08A0CF1C:;
    goto L_08A0CE68;
}

/* 08A0CF24 */
void func_08A0CF24(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0CF24:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089826E8(a0, t1, t2, t3);
    goto L_08A0CF38;
L_08A0CF38:;
    v1 = 5;
    ST32(s0+204, v1);
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_08A0D59C(a0, a1, 0, 0);
    goto L_08A0CF4C;
L_08A0CF4C:;
    sp = sp + 16;
    return;
}

/* 08A0CF5C */
void func_08A0CF5C(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0CF5C:;
    v0 = 6;
    ST32(a0+204, v0);
    sp = sp - 16;
    a1 = 0 + 0;
    func_08A0D59C(a0, a1, t2, t3);
    goto L_08A0CF74;
L_08A0CF74:;
    sp = sp + 16;
    return;
}

/* 08A0CF80 */
void func_08A0CF80(u32 a0)
{
L_08A0CF80:;
    ST32(a0+204, 0);
    return;
}

/* 08A0CF88 */
rv_t func_08A0CF88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0CF88:;
    sp = sp - 16;
    s1 = 4;
    ST32(a0+172, s1);
    s0 = a0 + 0;
    { rv_t r_ = func_08982530(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0CFA8;
L_08A0CFA8:;
    v0 = 3;
    v1 = LD32(s0+204);
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+204, s1); goto L_08A0CFB8; }
    goto L_08A0CFB8;
L_08A0CFB8:;
    a0 = LD32(s0+192);
    func_08A64DF8(a0);
    goto L_08A0CFC0;
L_08A0CFC0:;
    v0 = LD_U8(s0+188);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A0D008; }
    goto L_08A0CFD4;
L_08A0CFD4:;
    { u64 r_ = func_08979E1C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0CFDC;
L_08A0CFDC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0CFF8; }
    goto L_08A0CFE4;
L_08A0CFE4:;
    goto L_08A0CFE8;
L_08A0CFE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0CFF8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A0DA40(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D000;
L_08A0D000:;
    goto L_08A0CFE8;
L_08A0D008:;
    a1 = LD32(s0+184);
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D010;
L_08A0D010:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A0D030; }
    goto L_08A0D01C;
L_08A0D01C:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D024;
L_08A0D024:;
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A0D038; }
    goto L_08A0D030;
L_08A0D030:;
    ST8(s0+188, 0);
    goto L_08A0CFD4;
L_08A0D038:;
    { u64 r_ = func_089E47A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D040;
L_08A0D040:;
    ST8(s0+188, 0);
    goto L_08A0CFD4;
}

/* 08A0D048 */
rv_t func_08A0D048(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D048:;
    sp = sp - 16;
    s0 = a1 & 0xff;
    a1 = s0 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08982634(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D068;
L_08A0D068:;
    a1 = s0 + 0;
    a0 = LD32(s1+192);
    { u64 r_ = func_08A64EDC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D074;
L_08A0D074:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D088 */
rv_t func_08A0D088(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D088:;
    sp = sp - 16;
    s0 = (u32)(s32)(s16)a1;
    a1 = s0 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08982ECC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D0A8;
L_08A0D0A8:;
    a1 = s0 + 0;
    a0 = LD32(s1+192);
    { u64 r_ = func_08A64F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D0B4;
L_08A0D0B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D0C8 */
rv_t func_08A0D0C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D0C8:;
    sp = sp - 16;
    v0 = 999;
    s1 = a0 + 0;
    a0 = D_08C2C664 - (-14748);
    v1 = a0 - 14748;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08A0D154; }
    goto L_08A0D0EC;
L_08A0D0EC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-14748);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A0D130; }
    goto L_08A0D110;
L_08A0D110:;
    v1 = LD32(a0);
    goto L_08A0D114;
L_08A0D114:;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0D180; }
    goto L_08A0D120;
L_08A0D120:;
    a0 = LD32(a0+4);
    goto L_08A0D124;
L_08A0D124:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08A0D114; }
    goto L_08A0D12C;
L_08A0D12C:;
    v1 = 0 + 0;
    goto L_08A0D130;
L_08A0D130:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A0D154; }
    goto L_08A0D138;
L_08A0D138:;
    ST32(v1+180, 0);
    ST32(v1+172, 0);
    goto L_08A0D144;
L_08A0D144:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0D154:;
    a0 = 208;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D15C;
L_08A0D15C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08A0BEC0(a0, a1);
    goto L_08A0D16C;
L_08A0D16C:;
    a0 = LD32(s0+192);
    a1 = s1 + 0;
    { rv_t r_ = func_08A649A8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D178;
L_08A0D178:;
    goto L_08A0D144;
L_08A0D180:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A0D124; }
    goto L_08A0D18C;
L_08A0D18C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A0D124; }
    goto L_08A0D198;
L_08A0D198:;
    goto L_08A0D130;
}

/* 08A0D1A0 */
void func_08A0D1A0(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D1A0:;
    sp = sp - 16;
    a1 = 4;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8028;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D1C4;
L_08A0D1C4:;
    t0 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D1F4; }
    goto L_08A0D1D8;
L_08A0D1D8:;
    v1 = LD32(v0+24);
    a3 = LD32(s0+28);
    ST32(v1, a3);
    v0 = LD32(v0+28);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D1F4;
L_08A0D1F4:;
    sp = sp + 16;
    return;
}

/* 08A0D204 */
rv_t func_08A0D204(u32 a0, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0D204:;
    sp = sp - 32;
    a1 = 4;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8027;
    a3 = 0 + 0;
    f20 = f12;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D230;
L_08A0D230:;
    a3 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D25C; }
    goto L_08A0D244;
L_08A0D244:;
    v1 = LD32(v0+24);
    ST32(v1, FBITS(f20));
    v0 = LD32(v0+28);
    v0 = v0 | 0x1;
    ST32(a3+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D25C;
L_08A0D25C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D270 */
void func_08A0D270(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D270:;
    sp = sp - 16;
    a1 = 4;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x802a;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D294;
L_08A0D294:;
    t0 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D2C4; }
    goto L_08A0D2A8;
L_08A0D2A8:;
    v1 = LD32(v0+24);
    a3 = LD32(s0+88);
    ST32(v1, a3);
    v0 = LD32(v0+28);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D2C4;
L_08A0D2C4:;
    sp = sp + 16;
    return;
}

/* 08A0D2D4 */
rv_t func_08A0D2D4(u32 a0, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0D2D4:;
    sp = sp - 32;
    a1 = 8;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8015;
    a3 = 0 + 0;
    f20 = f12;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D300;
L_08A0D300:;
    v1 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D330; }
    goto L_08A0D314;
L_08A0D314:;
    v0 = LD32(v0+24);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+4, FBITS(f20)); goto L_08A0D320; }
    goto L_08A0D320;
L_08A0D320:;
    v0 = LD32(v1+28);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D330;
L_08A0D330:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D344 */
rv_t func_08A0D344(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D344:;
    sp = sp - 16;
    a3 = 0 + 0;
    s2 = a1 + 0;
    a1 = 12;
    s1 = a2 + 0;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a0 = 0x8017;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D378;
L_08A0D378:;
    v1 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D3B0; }
    goto L_08A0D38C;
L_08A0D38C:;
    v0 = LD32(v0+24);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+28); goto L_08A0D3A4; }
    goto L_08A0D398;
L_08A0D398:;
    ST32(v0+8, s1);
    ST32(v0+4, s2);
    v0 = LD32(v1+28);
    goto L_08A0D3A4;
L_08A0D3A4:;
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D3B0;
L_08A0D3B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D3C8 */
rv_t func_08A0D3C8(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D3C8:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 8;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x801b;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D3F4;
L_08A0D3F4:;
    v1 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D424; }
    goto L_08A0D408;
L_08A0D408:;
    v0 = LD32(v0+24);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+4, s1); goto L_08A0D414; }
    goto L_08A0D414;
L_08A0D414:;
    v0 = LD32(v1+28);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D424;
L_08A0D424:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D438 */
rv_t func_08A0D438(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D438:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 8;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x801d;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D464;
L_08A0D464:;
    v1 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D494; }
    goto L_08A0D478;
L_08A0D478:;
    v0 = LD32(v0+24);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+4, s1); goto L_08A0D484; }
    goto L_08A0D484;
L_08A0D484:;
    v0 = LD32(v1+28);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D494;
L_08A0D494:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D4A8 */
rv_t func_08A0D4A8(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0D4A8:;
    sp = sp - 32;
    v0 = a2 + 0;
    a2 = 0 + 0;
    s2 = a1 + 0;
    a1 = 16;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x8023;
    s1 = v0 & 0xff;
    f20 = f12;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D4E8;
L_08A0D4E8:;
    v1 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D524; }
    goto L_08A0D4FC;
L_08A0D4FC:;
    v0 = LD32(v0+24);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+28); goto L_08A0D518; }
    goto L_08A0D508;
L_08A0D508:;
    ST32(v0+8, s1);
    ST32(v0+12, s2);
    ST32(v0+4, FBITS(f20));
    v0 = LD32(v1+28);
    goto L_08A0D518;
L_08A0D518:;
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D524;
L_08A0D524:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D540 */
rv_t func_08A0D540(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D540:;
    sp = sp - 16;
    a1 = a1 & 0xffff;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = a1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D568;
L_08A0D568:;
    v1 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D58C; }
    goto L_08A0D57C;
L_08A0D57C:;
    v0 = LD32(v0+28);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D58C;
L_08A0D58C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D59C */
void func_08A0D59C(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0D59C:;
    sp = sp - 32;
    v0 = a1 + 0;
    a2 = 0 + 0;
    s2 = a0 + 0;
    a3 = 0 + 0;
    a1 = 8;
    a0 = 0x802c;
    s0 = v0 & 0xff;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D5D4;
L_08A0D5D4:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A0D61C; }
    goto L_08A0D5DC;
L_08A0D5DC:;
    s3 = LD32(v0+24);
    cnd_ = s0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0D638; }
    goto L_08A0D5E8;
L_08A0D5E8:;
    ST32(s3, v0);
    goto L_08A0D5EC;
L_08A0D5EC:;
    a0 = LD32(s2+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D5F4;
L_08A0D5F4:;
    a0 = v0 + 0;
    f0 = func_08974C38(a0);
    goto L_08A0D5FC;
L_08A0D5FC:;
    ST32(s3+4, FBITS(f0));
    a0 = s2 + 0;
    a1 = s1 + 0;
    v0 = LD32(s1+28);
    a2 = 3;
    v0 = v0 | 0x1;
    ST32(s1+28, v0);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D61C;
L_08A0D61C:;
    sp = sp + 32;
    return;
L_08A0D638:;
    { u64 r_ = func_08988228(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D640;
L_08A0D640:;
    a0 = LD32(s2+88);
    s0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D64C;
L_08A0D64C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089881E4(a0, a1);
    goto L_08A0D658;
L_08A0D658:;
    ST32(s3, v0);
    goto L_08A0D5EC;
}

/* 08A0D660 */
rv_t func_08A0D660(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D660:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08983F48(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D674;
L_08A0D674:;
    a0 = 0x8000;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D688;
L_08A0D688:;
    v1 = v0 + 0;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 3;
    if (cnd_) { goto L_08A0D6B8; }
    goto L_08A0D69C;
L_08A0D69C:;
    v0 = LD32(v0+28);
    a3 = LD32(v1+24);
    v0 = v0 | 0x1;
    ST32(v1+28, v0);
    v1 = LD32(s0+28);
    ST32(a3, v1);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D6B8;
L_08A0D6B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0D6C8 */
rv_t func_08A0D6C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A0D6C8:;
    sp = sp - 80;
    s1 = a0 + 0;
    a0 = 304;
    s2 = sp + 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D6EC;
L_08A0D6EC:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    a1 = 999;
    { rv_t r_ = func_08992E6C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D6FC;
L_08A0D6FC:;
    cnd_ = s0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A0D71C; }
    goto L_08A0D704;
L_08A0D704:;
    goto L_08A0D708;
L_08A0D708:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A0D71C:;
    v1 = LD32(s0);
    a1 = LD32(s1);
    v0 = LD32(v1-16);
    a2 = LD32(a1+88);
    v0 = s0 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D738;
L_08A0D738:;
    v1 = D_08B45A9C - (23196);
    a0 = D_08B45AA8 - (23208);
    v0 = a0 + 23208;
    a1 = v1 + 23196;
    f8 = BITSF(LD32(v1+23196));
    f9 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1+4));
    f10 = BITSF(LD32(a0+23208));
    f11 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    a3 = s2 + 0;
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f9));
    ST32(sp+16, FBITS(f10));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f11));
    func_0898383C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A0D7BC;
L_08A0D7BC:;
    a0 = s0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1+32);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D7D0;
L_08A0D7D0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D7E4;
L_08A0D7E4:;
    goto L_08A0D708;
}

/* 08A0D7EC */
rv_t func_08A0D7EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0D7EC:;
    sp = sp - 16;
    v0 = D_08C28F60 - (-28832);
    v1 = 5;
    a1 = LD32(v0-28832);
    cnd_ = a1 == v1;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_08A0D814; }
    goto L_08A0D808;
L_08A0D808:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A0D828; }
    goto L_08A0D814;
L_08A0D814:;
    v0 = D_08AEF77C - (-2180);
    f0 = BITSF(LD32(v0-2180));
    goto L_08A0D820;
L_08A0D820:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0D828:;
    { rv_t r_ = func_0898404C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0D830;
L_08A0D830:;
    goto L_08A0D820;
}

/* 08A0D838 */
void func_08A0D838(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A0D838:;
    sp = sp - 64;
    v0 = D_08AEF780 - (-2176);
    f0 = BITSF(LD32(a0+200));
    f1 = BITSF(LD32(v0-2176));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0D9CC; }
    goto L_08A0D874;
L_08A0D874:;
    a2 = D_08C2C664 - (-14748);
    v0 = a2 - 14748;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A0D8F0; }
    goto L_08A0D8A0;
L_08A0D8A0:;
    a2 = LD32(a2-14748);
    a3 = a1 + 0;
    goto L_08A0D8A8;
L_08A0D8A8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A0D8DC; }
    goto L_08A0D8C0;
L_08A0D8C0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_08A0D8F0; }
    goto L_08A0D8D0;
L_08A0D8D0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A0D8C0; }
    goto L_08A0D8DC;
L_08A0D8DC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A0D8A8; }
    goto L_08A0D8EC;
L_08A0D8EC:;
    a0 = sp + 0;
    goto L_08A0D8F0;
L_08A0D8F0:;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D900;
L_08A0D900:;
    v1 = LD32(sp+8);
    cnd_ = v1 == 0;
    v0 = D_08AEF784 - (-2172);
    if (cnd_) { goto L_08A0D944; }
    goto L_08A0D90C;
L_08A0D90C:;
    f20 = BITSF(LD32(v0-2172));
    a2 = LD32(v1);
    goto L_08A0D914;
L_08A0D914:;
    a0 = sp + 0;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A0D930; }
    goto L_08A0D920;
L_08A0D920:;
    v1 = LD32(a2+88);
    v0 = LD32(s0+88);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A0DA08; }
    goto L_08A0D930;
L_08A0D930:;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D938;
L_08A0D938:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1); goto L_08A0D914; }
    goto L_08A0D944;
L_08A0D944:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A0D9CC; }
    goto L_08A0D958;
L_08A0D958:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A0D9CC; }
    goto L_08A0D964;
L_08A0D964:;
    v0 = LD32(s1);
    goto L_08A0D968;
L_08A0D968:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A0D9BC; }
    goto L_08A0D97C;
L_08A0D97C:;
    v0 = LD_U8(s0+8);
    goto L_08A0D980;
L_08A0D980:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A0DA00; }
    goto L_08A0D988;
L_08A0D988:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A0D9F0; }
    goto L_08A0D990;
L_08A0D990:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A0D998;
L_08A0D998:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0D9A4;
L_08A0D9A4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A0D9B0;
L_08A0D9B0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A0D980; }
    goto L_08A0D9B8;
L_08A0D9B8:;
    v1 = LD32(s1+4);
    goto L_08A0D9BC;
L_08A0D9BC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A0D968; }
    goto L_08A0D9CC;
L_08A0D9CC:;
    sp = sp + 64;
    return;
L_08A0D9F0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A0D998;
L_08A0DA00:;
    s0 = LD32(s0+4);
    goto L_08A0D9B0;
L_08A0DA08:;
    cnd_ = a2 == s0;
    if (cnd_) { goto L_08A0D930; }
    goto L_08A0DA10;
L_08A0DA10:;
    f1 = BITSF(LD32(a2+196));
    f0 = BITSF(LD32(s0+196));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f2 = f1 - f20;
    if (cnd_) { goto L_08A0D930; }
    goto L_08A0DA28;
L_08A0DA28:;
    ST32(s0+196, FBITS(f2));
    goto L_08A0D930;
}

/* 08A0DA30 */
void func_08A0DA30(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_08A0DA30:;
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v0-31348));
    ST32(a0+196, FBITS(f0));
    return;
}

/* 08A0DA40 */
u64 func_08A0DA40(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A0DA40:;
    sp = sp - 48;
    v1 = D_08C2C664 - (-14748);
    v1 = v1 - 14748;
    a1 = 1;
    s3 = a0 + 0;
    a0 = sp + 0;
    s2 = 0 + 0;
    s1 = 0 + 0;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DA90;
L_08A0DA90:;
    a0 = sp + 0;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DAA4;
L_08A0DAA4:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s2 - s1; goto L_08A0DAFC; }
    goto L_08A0DAB0;
L_08A0DAB0:;
    s0 = LD32(v0);
    goto L_08A0DAB4;
L_08A0DAB4:;
    cnd_ = s0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A0DAE4; }
    goto L_08A0DABC;
L_08A0DABC:;
    a0 = LD32(s0+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DAC4;
L_08A0DAC4:;
    a0 = LD32(s0+88);
    v0 = v0 ^ 0x1;
    v0 = v0 < 0x1u;
    s2 = s2 + v0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DAD8;
L_08A0DAD8:;
    v0 = v0 < 0x1u;
    s1 = s1 + v0;
    a0 = sp + 0;
    goto L_08A0DAE4;
L_08A0DAE4:;
    a1 = 1;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DAEC;
L_08A0DAEC:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A0DAB4; }
    goto L_08A0DAF8;
L_08A0DAF8:;
    v0 = s2 - s1;
    goto L_08A0DAFC;
L_08A0DAFC:;
    v0 = (s32)v0 < 2;
    cnd_ = v0 == 0;
    v0 = s1 - s2;
    if (cnd_) { goto L_08A0DB74; }
    goto L_08A0DB08;
L_08A0DB08:;
    v0 = (s32)v0 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0DB54; }
    goto L_08A0DB14;
L_08A0DB14:;
    a0 = LD32(sp);
    goto L_08A0DB18;
L_08A0DB18:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A0DB44; }
    goto L_08A0DB28;
L_08A0DB28:;
    goto L_08A0DB2C;
L_08A0DB2C:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08A0DB44:;
    { u64 r_ = func_08ABCFE8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DB4C;
L_08A0DB4C:;
    goto L_08A0DB2C;
L_08A0DB54:;
    a0 = LD32(s3+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DB5C;
L_08A0DB5C:;
    cnd_ = v0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A0DB18; }
    goto L_08A0DB64;
L_08A0DB64:;
    v0 = LD32(s3+96);
    goto L_08A0DB68;
L_08A0DB68:;
    v0 = v0 | 0x20;
    ST32(s3+96, v0);
    goto L_08A0DB14;
L_08A0DB74:;
    a0 = LD32(s3+88);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DB7C;
L_08A0DB7C:;
    v1 = 1;
    cnd_ = v0 != v1;
    if (cnd_) { v0 = s1 - s2; goto L_08A0DB08; }
    goto L_08A0DB88;
L_08A0DB88:;
    v0 = LD32(s3+96);
    goto L_08A0DB68;
}

/* 08A0DB90 */
rv_t func_08A0DB90(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0DB90:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0DCB4; }
    goto L_08A0DBC4;
L_08A0DBC4:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF788 - (-2168);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2168));
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
    t0 = D_08C2C5B4 - (-14924);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C5C4 - (-14908);
    a3 = D_08C2C5D4 - (-14892);
    v1 = t0 - 14924;
    a1 = v0 - 14908;
    a2 = a3 - 14892;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2C664 - (-14748);
    s0 = s3 - 14748;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-14908, FBITS(f5));
    v0 = 4;
    ST32(t0-14924, FBITS(f1));
    ST32(a3-14892, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0DC7C;
L_08A0DC7C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-14748, v0);
    if (cnd_) { goto L_08A0DCA8; }
    goto L_08A0DC8C;
L_08A0DC8C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A0DC94;
L_08A0DC94:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A0DC94; }
    goto L_08A0DCA8;
L_08A0DCA8:;
    v0 = s3 - 14748;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A0DCB4;
L_08A0DCB4:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0DCD8; }
    goto L_08A0DCC8;
L_08A0DCC8:;
    v0 = D_08C2C664 - (-14748);
    a0 = LD32(v0-14748);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A0DCF0; }
    goto L_08A0DCD8;
L_08A0DCD8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A0DCF0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DCF8;
L_08A0DCF8:;
    goto L_08A0DCD8;
}

/* 08A0DD00 */
rv_t func_08A0DD00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0DD00:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A0DB90(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0DD14;
L_08A0DD14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0DD20 */
rv_t func_08A0DD20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0DD20:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A0DB90(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0DD34;
L_08A0DD34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0DD40 */
rv_t func_08A0DD40(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0DD40:;
    sp = sp - 16;
    s1 = a0 + 36;
    s0 = a0 + 0;
    a0 = s1 + 0;
    func_08873BF8(a0);
    goto L_08A0DD60;
L_08A0DD60:;
    a1 = D_08B148E0 - (18656);
    a1 = a1 + 18656;
    a0 = s0 + 0;
    a1 = a1 + 4;
    f0 = func_08874764(a0, a1);
    goto L_08A0DD74;
L_08A0DD74:;
    v0 = (u32)-1;
    v1 = D_08B14894 - (18580);
    v1 = v1 + 18580;
    ST32(s0+8, v0);
    v0 = 20;
    a2 = v1 + 48;
    ST32(s0, v1);
    a0 = s0 + 20;
    ST32(s0+12, v0);
    ST8(s0+4, 0);
    ST8(s0+5, 0);
    ST8(s0+6, 0);
    ST32(s0+16, 0);
    ST32(s0+36, a2);
    a1 = LD32(s1+4);
    func_08A25B58(a0, a1);
    goto L_08A0DDB4;
L_08A0DDB4:;
    v0 = (u32)-32740;
    ST16(s1+8, v0);
    a0 = s0 + 0;
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0DDC4;
L_08A0DDC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0DDD8 */
rv_t func_08A0DDD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0DDD8:;
    v0 = D_08B14894 - (18580);
    v0 = v0 + 18580;
    v1 = v0 + 48;
    ST32(a0+36, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s1 = a0 + 36;
    s0 = a0 + 0;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_08A0DE0C;
L_08A0DE0C:;
    a1 = D_08B148E0 - (18656);
    a1 = a1 + 18656;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08A0DE20;
L_08A0DE20:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DE28;
L_08A0DE28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0DE3C */
rv_t func_08A0DE3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0DE3C:;
    v0 = D_08B14894 - (18580);
    v0 = v0 + 18580;
    v1 = v0 + 48;
    ST32(a0+36, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s1 = a0 + 36;
    s0 = a0 + 0;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_08A0DE70;
L_08A0DE70:;
    a1 = D_08B148E0 - (18656);
    a1 = a1 + 18656;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08A0DE84;
L_08A0DE84:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DE8C;
L_08A0DE8C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DE94;
L_08A0DE94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0DEA8 */
rv_t func_08A0DEA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0DEA8:;
    sp = sp - 16;
    a2 = 999;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0E0F8; }
    goto L_08A0DEC8;
L_08A0DEC8:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A0DEDC; }
    goto L_08A0DED8;
L_08A0DED8:;
    a2 = LD32(v0+20);
    goto L_08A0DEDC;
L_08A0DEDC:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22840;
    if (cnd_) { goto L_08A0E040; }
    goto L_08A0DEEC;
L_08A0DEEC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A0DF3C; }
    goto L_08A0DF10;
L_08A0DF10:;
    a1 = LD32(a0);
    goto L_08A0DF14;
L_08A0DF14:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0E0D8; }
    goto L_08A0DF2C;
L_08A0DF2C:;
    a0 = LD32(a0+4);
    goto L_08A0DF30;
L_08A0DF30:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_08A0DF14; }
    goto L_08A0DF38;
L_08A0DF38:;
    a1 = 0 + 0;
    goto L_08A0DF3C;
L_08A0DF3C:;
    cnd_ = a1 == 0;
    a0 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_08A0E044; }
    goto L_08A0DF44;
L_08A0DF44:;
    a0 = s0 + 0;
    v0 = func_08A0E228(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A0DF4C;
L_08A0DF4C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A0DF60; }
    goto L_08A0DF54;
L_08A0DF54:;
    v0 = LD_U8(s0+6);
    cnd_ = v0 == 0;
    a0 = 5;
    if (cnd_) { goto L_08A0DFE8; }
    goto L_08A0DF60;
L_08A0DF60:;
    ST8(s0+6, s1);
    goto L_08A0DF64;
L_08A0DF64:;
    a0 = LD32(s0+8);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A0DF80; }
    goto L_08A0DF74;
L_08A0DF74:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0DFC4; }
    goto L_08A0DF80;
L_08A0DF80:;
    a1 = LD32(s0+16);
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DF88;
L_08A0DF88:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+8); goto L_08A0DFB4; }
    goto L_08A0DF90;
L_08A0DF90:;
    v0 = LD32(s0);
    goto L_08A0DF94;
L_08A0DF94:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873E44(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0DFA0;
L_08A0DFA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0DFB4:;
    a1 = LD32(s0+16);
    { rv_t r_ = func_08A4EC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0DFBC;
L_08A0DFBC:;
    v0 = LD32(s0);
    goto L_08A0DF94;
L_08A0DFC4:;
    a1 = LD32(s0+16);
    { u64 r_ = func_08A4EBBC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DFCC;
L_08A0DFCC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A0DF94; }
    goto L_08A0DFD4;
L_08A0DFD4:;
    a0 = LD32(s0+8);
    a1 = LD32(s0+16);
    { rv_t r_ = func_08A4EB24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0DFE0;
L_08A0DFE0:;
    v0 = LD32(s0);
    goto L_08A0DF94;
L_08A0DFE8:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0DFF8;
L_08A0DFF8:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08A0DF60; }
    goto L_08A0E000;
L_08A0E000:;
    v1 = LD32(s0);
    a0 = v0 + 0;
    a1 = 1;
    v0 = LD32(v1-12);
    a2 = 1;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t0+4, v1);
    a3 = LD32(s0);
    v0 = LD32(a3-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t0, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E038;
L_08A0E038:;
    ST8(s0+6, s1);
    goto L_08A0DF64;
L_08A0E040:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_08A0E044;
L_08A0E044:;
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_08A0DF60; }
    goto L_08A0E050;
L_08A0E050:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A0E0A0; }
    goto L_08A0E074;
L_08A0E074:;
    a1 = LD32(a0);
    goto L_08A0E078;
L_08A0E078:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0E0B8; }
    goto L_08A0E090;
L_08A0E090:;
    a0 = LD32(a0+4);
    goto L_08A0E094;
L_08A0E094:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_08A0E078; }
    goto L_08A0E09C;
L_08A0E09C:;
    a1 = 0 + 0;
    goto L_08A0E0A0;
L_08A0E0A0:;
    cnd_ = a1 == 0;
    if (cnd_) { ST8(s0+6, s1); goto L_08A0DF64; }
    goto L_08A0E0A8;
L_08A0E0A8:;
    a0 = s0 + 0;
    v0 = func_08A0E3DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A0E0B0;
L_08A0E0B0:;
    goto L_08A0DF4C;
L_08A0E0B8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A0E094; }
    goto L_08A0E0C4;
L_08A0E0C4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A0E094; }
    goto L_08A0E0D0;
L_08A0E0D0:;
    goto L_08A0E0A0;
L_08A0E0D8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A0DF30; }
    goto L_08A0E0E4;
L_08A0E0E4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A0DF30; }
    goto L_08A0E0F0;
L_08A0E0F0:;
    goto L_08A0DF3C;
L_08A0E0F8:;
    ST8(a0+6, 0);
    goto L_08A0DF64;
}

/* 08A0E100 */
rv_t func_08A0E100(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0E100:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a0 + 20;
    s0 = a1 + 0;
    { rv_t r_ = func_08A25B8C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E120;
L_08A0E120:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A0E14C; }
    goto L_08A0E128;
L_08A0E128:;
    v1 = LD_U16(s0+16);
    v0 = 90;
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A0E164; }
    goto L_08A0E138;
L_08A0E138:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E148;
L_08A0E148:;
    v1 = v0 + 0;
    goto L_08A0E14C;
L_08A0E14C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0E164:;
    a1 = LD32(s0+24);
    cnd_ = a1 == 0;
    if (cnd_) { v1 = 1; goto L_08A0E14C; }
    goto L_08A0E170;
L_08A0E170:;
    v0 = LD_U8(a1);
    ST8(s1+4, v0);
    v0 = 4095;
    v1 = LD32(a1+4);
    ST32(s1+12, v1);
    a0 = LD32(a1+8);
    cnd_ = a0 == v0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A0E1BC; }
    goto L_08A0E190;
L_08A0E190:;
    ST32(s1+8, v1);
    v0 = 4095;
    v1 = LD32(a1+12);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A0E1B0; }
    goto L_08A0E1A4;
L_08A0E1A4:;
    ST32(s1+16, a0);
    v1 = 1;
    goto L_08A0E14C;
L_08A0E1B0:;
    v0 = D_08ADED94 - (-4716);
    a0 = LD32(v0-4716);
    goto L_08A0E1A4;
L_08A0E1BC:;
    v0 = D_08ADED94 - (-4716);
    v1 = LD32(v0-4716);
    goto L_08A0E190;
}

/* 08A0E1C8 */
rv_t func_08A0E1C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0E1C8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E1E4;
L_08A0E1E4:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_08A0DD40(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E1F0;
L_08A0E1F0:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A0E210; }
    goto L_08A0E1FC;
L_08A0E1FC:;
    goto L_08A0E200;
L_08A0E200:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0E210:;
    v1 = LD32(s1);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E220;
L_08A0E220:;
    goto L_08A0E200;
}

/* 08A0E228 */
u32 func_08A0E228(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0E228:;
    sp = sp - 16;
    v1 = LD32(a0+12);
    v0 = v1 < 0x15u;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0E264; }
    goto L_08A0E240;
L_08A0E240:;
    v0 = v1 << 2;
    v1 = D_08ADED14 - (-4844);
    v1 = v1 - 4844;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A0E25Cu: goto L_08A0E25C; case 0x08A0E270u: goto L_08A0E270; case 0x08A0E28Cu: goto L_08A0E28C; case 0x08A0E2A4u: goto L_08A0E2A4; case 0x08A0E2B0u: goto L_08A0E2B0; case 0x08A0E2D8u: goto L_08A0E2D8; case 0x08A0E2ECu: goto L_08A0E2EC; case 0x08A0E304u: goto L_08A0E304; case 0x08A0E30Cu: goto L_08A0E30C; case 0x08A0E320u: goto L_08A0E320; case 0x08A0E328u: goto L_08A0E328; case 0x08A0E33Cu: goto L_08A0E33C; case 0x08A0E390u: goto L_08A0E390; case 0x08A0E3C4u: goto L_08A0E3C4; case 0x08A0E3D4u: goto L_08A0E3D4; default: rs_break(0, 0x08a0e254); }
L_08A0E25C:;
    v0 = LD32(a1+520);
    v0 = (v0 >> 15) & 0x1;
    goto L_08A0E264;
L_08A0E264:;
    goto L_08A0E268;
L_08A0E268:;
    sp = sp + 16;
    return v0;
L_08A0E270:;
    v1 = LD32(a1);
    v0 = LD32(v1+452);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E280;
L_08A0E280:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    goto L_08A0E264;
L_08A0E28C:;
    v1 = LD32(a1);
    v0 = LD32(v1+196);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E29C;
L_08A0E29C:;
    goto L_08A0E268;
L_08A0E2A4:;
    v0 = LD32(a1+520);
    v0 = (v0 >> 11) & 0x1;
    goto L_08A0E264;
L_08A0E2B0:;
    a0 = LD32(a1+236);
    a1 = 0xda0c0000u;
    v0 = 0 + 0;
    a1 = a1 | 0xae3b;
    goto L_08A0E2C0;
L_08A0E2C0:;
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_08A0E268; }
    goto L_08A0E2C8;
L_08A0E2C8:;
    v0 = func_08985AC8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A0E2D0;
L_08A0E2D0:;
    goto L_08A0E268;
L_08A0E2D8:;
    a0 = LD32(a1+236);
    a1 = 0x87d10000u;
    v0 = 0 + 0;
    a1 = a1 | 0x68ab;
    goto L_08A0E2C0;
L_08A0E2EC:;
    a0 = LD32(a1+236);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0E264; }
    goto L_08A0E2F8;
L_08A0E2F8:;
    a1 = 0xdf190000u;
    a1 = a1 | 0xa556;
    goto L_08A0E2C8;
L_08A0E304:;
    v0 = 0 < a1;
    goto L_08A0E264;
L_08A0E30C:;
    v1 = LD32(a1+236);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0E264; }
    goto L_08A0E318;
L_08A0E318:;
    v0 = LD_U8(v1+124);
    goto L_08A0E264;
L_08A0E320:;
    v0 = LD_U8(a1+196);
    goto L_08A0E264;
L_08A0E328:;
    v1 = D_08C29B58 - (-25768);
    v0 = LD32(v1-25768);
    v0 = v0 ^ 0x1;
    goto L_08A0E334;
L_08A0E334:;
    v0 = v0 < 0x1u;
    goto L_08A0E264;
L_08A0E33C:;
    v1 = LD32(a1);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E34C;
L_08A0E34C:;
    a2 = v0 + 0;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A0E264; }
    goto L_08A0E358;
L_08A0E358:;
    v0 = LD32(a2+80);
    cnd_ = (s32)v0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A0E37C; }
    goto L_08A0E364;
L_08A0E364:;
    v0 = LD32(a2+100);
    cnd_ = (s32)v0 <= 0;
    v0 = v1 & 0xff;
    if (cnd_) { goto L_08A0E264; }
    goto L_08A0E370;
L_08A0E370:;
    v0 = LD32(a2+88);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v0 = LD32(a2+84); goto L_08A0E384; }
    goto L_08A0E37C;
L_08A0E37C:;
    v0 = v1 & 0xff;
    goto L_08A0E264;
L_08A0E384:;
    v0 = (s32)v1 < (s32)v0;
    v1 = v0 < 0x1u;
    goto L_08A0E37C;
L_08A0E390:;
    v1 = LD32(a1);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E3A0;
L_08A0E3A0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A0E3BC; }
    goto L_08A0E3A8;
L_08A0E3A8:;
    v1 = LD32(v0+20);
    v0 = 0xda0c0000u;
    v0 = v0 | 0xae3b;
    v1 = v1 ^ v0;
    v1 = v1 < 0x1u;
    goto L_08A0E3BC;
L_08A0E3BC:;
    v0 = v1 + 0;
    goto L_08A0E264;
L_08A0E3C4:;
    v0 = func_08979DF4();
    goto L_08A0E3CC;
L_08A0E3CC:;
    v0 = v0 ^ 0x2;
    goto L_08A0E334;
L_08A0E3D4:;
    v0 = 0 + 0;
    goto L_08A0E264;
}

/* 08A0E3DC */
u32 func_08A0E3DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0E3DC:;
    sp = sp - 16;
    v1 = LD32(a0+12);
    v1 = v1 - 10;
    v0 = v1 < 0xbu;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08A0E44C; }
    goto L_08A0E3F8;
L_08A0E3F8:;
    v0 = v1 << 2;
    v1 = D_08ADED68 - (-4760);
    v1 = v1 - 4760;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A0E414u: goto L_08A0E414; case 0x08A0E45Cu: goto L_08A0E45C; case 0x08A0E470u: goto L_08A0E470; case 0x08A0E47Cu: goto L_08A0E47C; case 0x08A0E498u: goto L_08A0E498; case 0x08A0E4B0u: goto L_08A0E4B0; case 0x08A0E4B8u: goto L_08A0E4B8; default: rs_break(0, 0x08a0e40c); }
L_08A0E414:;
    v0 = D_08AEF78C - (-2164);
    f1 = BITSF(LD32(a1+504));
    f0 = BITSF(LD32(v0-2164));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08A0E44C; }
    goto L_08A0E430;
L_08A0E430:;
    v0 = D_08AEF790 - (-2160);
    f0 = BITSF(LD32(v0-2160));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A0E44C; }
    goto L_08A0E448;
L_08A0E448:;
    v1 = 1;
    goto L_08A0E44C;
L_08A0E44C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A0E45C:;
    v1 = D_08C29B58 - (-25768);
    v0 = LD32(v1-25768);
    v0 = v0 ^ 0x1;
    v1 = v0 < 0x1u;
    goto L_08A0E44C;
L_08A0E470:;
    v0 = LD32(a1+844);
    v1 = (v0 >> 7) & 0x1;
    goto L_08A0E44C;
L_08A0E47C:;
    v1 = LD32(a1);
    v0 = LD32(v1+268);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E48C;
L_08A0E48C:;
    v0 = v0 ^ 0x3e7;
    v1 = 0 < v0;
    goto L_08A0E44C;
L_08A0E498:;
    v1 = LD32(a1);
    v0 = LD32(v1+200);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E4A8;
L_08A0E4A8:;
    v1 = v0 + 0;
    goto L_08A0E44C;
L_08A0E4B0:;
    v1 = 0 < a1;
    goto L_08A0E44C;
L_08A0E4B8:;
    v1 = 0 + 0;
    goto L_08A0E44C;
}

/* 08A0E4C0 */
rv_t func_08A0E4C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A0E4C0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2C674 - (-14732);
    t1 = D_08C2C684 - (-14716);
    t2 = D_08C2C694 - (-14700);
    a1 = a1 & a0;
    v1 = t0 - 14732;
    a2 = t1 - 14716;
    cnd_ = a1 == 0;
    a3 = t2 - 14700;
    if (cnd_) { goto L_08A0E578; }
    goto L_08A0E4F0;
L_08A0E4F0:;
    v0 = D_08AEF794 - (-2156);
    f4 = BITSF(LD32(v0-2156));
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
    ST32(t0-14732, FBITS(f2));
    ST32(t1-14716, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-14700, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A0E578;
L_08A0E578:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0E580 */
rv_t func_08A0E580(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0E580:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A0E4C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E594;
L_08A0E594:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0E5A0 */
void func_08A0E5A0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08A0E5A0:;
    sp = sp - 160;
    s3 = a0 + 116;
    s5 = a0 + 0;
    a0 = s3 + 0;
    s6 = s5 + 4;
    s4 = a2 + 0;
    s2 = D_08C2C6D4 - (-14636);
    s1 = s2 - 14636;
    s0 = a1 + 0;
    func_08873BF8(a0);
    goto L_08A0E5E8;
L_08A0E5E8:;
    a1 = D_08B14AD0 - (19152);
    a1 = a1 + 19152;
    a2 = s0 + 0;
    a3 = s4 + 0;
    a0 = s5 + 80;
    a1 = a1 + 12;
    func_088680F0(a0, a1, a2, a3);
    goto L_08A0E604;
L_08A0E604:;
    v1 = D_08B14A00 - (18944);
    v1 = v1 + 18944;
    v0 = v1 + 88;
    ST32(s5+80, v0);
    v0 = 999;
    a0 = 12;
    ST32(s5, v1);
    v1 = v1 + 180;
    ST32(s6+4, 0);
    ST32(s6+8, 0);
    ST32(s5+52, v0);
    v0 = (u32)-32737;
    ST32(s5+56, 0);
    ST32(s5+72, 0);
    ST32(s5+76, 0);
    ST16(s3+8, v0);
    a2 = LD32(s5);
    a1 = LD32(s1+4);
    ST32(s5+116, v1);
    a1 = a1 - 1;
    v0 = LD32(a2-16);
    ST32(s5+4, 0);
    v0 = s5 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & a1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0E66C;
L_08A0E66C:;
    a0 = LD32(s2-14636);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    a3 = sp + 112;
    a2 = 0 + 0;
    ST32(v0+4, a1);
    ST32(v0, s5);
    ST32(s0, v0);
    ST8(v0+8, 0);
    goto L_08A0E6A0;
L_08A0E6A0:;
    v0 = LD32(s4);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s4, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A0E6A0; }
    goto L_08A0E6C4;
L_08A0E6C4:;
    v0 = LD32(sp+112);
    cnd_ = (s32)v0 < 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08A0E7C4; }
    goto L_08A0E6D0;
L_08A0E6D0:;
    a1 = 0 + 0;
    goto L_08A0E6D4;
L_08A0E6D4:;
    v0 = LD32(s4);
    a1 = a1 + 1;
    a0 = a1 < 0x4cu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s4, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A0E6D4; }
    goto L_08A0E6F8;
L_08A0E6F8:;
    f10 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    v1 = LD32(sp+48);
    a0 = LD32(sp+56);
    a1 = LD32(sp+60);
    a2 = LD_U8(sp+66);
    a3 = LD32(sp+68);
    f11 = BITSF(LD32(sp+12));
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    f6 = BITSF(LD32(sp+28));
    f7 = BITSF(LD32(sp+32));
    f8 = BITSF(LD32(sp+36));
    f9 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    v0 = s5 + 16;
    ST32(s5+52, v1);
    ST32(s5+4, FBITS(f10));
    ST32(s6+8, FBITS(f1));
    ST32(s6+4, FBITS(f2));
    ST32(v0+32, FBITS(f0));
    ST32(v0+4, FBITS(f3));
    ST32(v0+8, FBITS(f4));
    ST32(v0+12, FBITS(f5));
    ST32(v0+16, FBITS(f6));
    ST32(v0+20, FBITS(f7));
    ST32(v0+24, FBITS(f8));
    ST32(v0+28, FBITS(f9));
    ST32(s5+16, FBITS(f11));
    ST32(s5+72, a0);
    ST32(s5+60, a1);
    ST8(s5+64, a2);
    ST32(s5+68, a3);
    v0 = LD32(sp+72);
    v1 = LD32(sp+52);
    ST32(s5+76, v0);
    ST32(s5+56, v1);
    v0 = LD32(sp+112);
    cnd_ = (s32)v0 <= 0;
    s0 = sp + 80;
    if (cnd_) { goto L_08A0E7C4; }
    goto L_08A0E7A0;
L_08A0E7A0:;
    a2 = 0 + 0;
    a0 = s0 + 0;
    a1 = 999;
    func_08A26584(a0, a1, a2);
    goto L_08A0E7B0;
L_08A0E7B0:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    func_08A26CF0(a0, a1);
    goto L_08A0E7BC;
L_08A0E7BC:;
    a0 = s0 + 0;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A0E7C4;
L_08A0E7C4:;
    sp = sp + 160;
    return;
}

/* 08A0E7EC */
rv_t func_08A0E7EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0E7EC:;
    v1 = D_08B14A00 - (18944);
    sp = sp - 16;
    v1 = v1 + 18944;
    v0 = v1 + 88;
    s0 = a0 + 0;
    a0 = v1 + 180;
    ST32(s0, v1);
    a1 = s0 + 0;
    ST32(s0+116, a0);
    a0 = D_08C2C6D4 - (-14636);
    a0 = a0 - 14636;
    ST32(s0+80, v0);
    func_08ACF748(a0, a1, t1, t2, t3);
    goto L_08A0E82C;
L_08A0E82C:;
    a1 = D_08B14AD0 - (19152);
    s1 = s0 + 80;
    a1 = a1 + 19152;
    a0 = s1 + 0;
    a1 = a1 + 12;
    s0 = s0 + 116;
    func_088682A8(a0, a1, 0, 0, 0);
    goto L_08A0E848;
L_08A0E848:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0E850;
L_08A0E850:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0E864 */
rv_t func_08A0E864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0E864:;
    v1 = D_08B14A00 - (18944);
    sp = sp - 16;
    v1 = v1 + 18944;
    v0 = v1 + 88;
    s0 = a0 + 0;
    a0 = v1 + 180;
    ST32(s0, v1);
    a1 = s0 + 0;
    ST32(s0+116, a0);
    a0 = D_08C2C6D4 - (-14636);
    a0 = a0 - 14636;
    ST32(s0+80, v0);
    s2 = s0 + 116;
    func_08ACF748(a0, a1, t1, t2, t3);
    goto L_08A0E8AC;
L_08A0E8AC:;
    a1 = D_08B14AD0 - (19152);
    s1 = s0 + 80;
    a1 = a1 + 19152;
    a1 = a1 + 12;
    a0 = s1 + 0;
    func_088682A8(a0, a1, 0, 0, 0);
    goto L_08A0E8C4;
L_08A0E8C4:;
    a0 = s2 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0E8CC;
L_08A0E8CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0E8D4;
L_08A0E8D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0E8EC */
void func_08A0E8EC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08A0E8EC:;
    sp = sp - 176;
    s2 = a0 + 52;
    s3 = a0 + 0;
    a0 = s2 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    func_08873BF8(a0);
    goto L_08A0E91C;
L_08A0E91C:;
    a1 = D_08B14990 - (18832);
    a1 = a1 + 18832;
    a1 = a1 + 4;
    a2 = s0 + 0;
    a0 = s3 + 0;
    func_088747D4(a0, a1, a2);
    goto L_08A0E934;
L_08A0E934:;
    v0 = D_08B1494C - (18764);
    v0 = v0 + 18764;
    a3 = s3 + 4;
    v1 = v0 + 40;
    ST32(s3, v0);
    a2 = sp + 64;
    a1 = 0 + 0;
    ST32(s3+52, v1);
    ST32(s3+4, 0);
    ST32(a3+4, 0);
    ST32(a3+8, 0);
    goto L_08A0E960;
L_08A0E960:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A0E960; }
    goto L_08A0E984;
L_08A0E984:;
    a1 = a3 + 0;
    a2 = 0 + 0;
    goto L_08A0E98C;
L_08A0E98C:;
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0xcu;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08A0E98C; }
    goto L_08A0E9B4;
L_08A0E9B4:;
    v0 = LD32(sp+64);
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    if (cnd_) { goto L_08A0EAFC; }
    goto L_08A0E9C4;
L_08A0E9C4:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08A0E9CC;
L_08A0E9CC:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0xcu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A0E9CC; }
    goto L_08A0E9F0;
L_08A0E9F0:;
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
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
    {ST32(s3+(16),FBITS(v[96]));}
    {ST32(s3+(20),FBITS(v[97]));}
    {ST32(s3+(24),FBITS(v[98]));}
    {ST32(s3+(28),FBITS(v[100]));}
    {ST32(s3+(32),FBITS(v[101]));}
    {ST32(s3+(36),FBITS(v[102]));}
    {ST32(s3+(40),FBITS(v[104]));}
    {ST32(s3+(44),FBITS(v[105]));}
    {ST32(s3+(48),FBITS(v[106]));}
    goto L_08A0EA80;
L_08A0EA80:;
    v0 = (u32)-32736;
    ST16(s2+8, v0);
    s2 = D_08C2C6E4 - (-14620);
    s1 = s2 - 14620;
    a1 = LD32(s3);
    v1 = LD32(s1+4);
    a0 = 12;
    v0 = LD32(a1-12);
    v1 = v1 - 1;
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EAB4;
L_08A0EAB4:;
    a0 = LD32(s2-14620);
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
    sp = sp + 176;
    return;
L_08A0EAFC:;
    {v1=FBITS(v[50]);}
    f0 = BITSF(v1);
    {v1=FBITS(v[54]);}
    f9 = BITSF(v1);
    {v1=FBITS(v[58]);}
    f7 = BITSF(v1);
    {v1=FBITS(v[48]);}
    f6 = BITSF(v1);
    {v1=FBITS(v[49]);}
    f4 = BITSF(v1);
    {v1=FBITS(v[52]);}
    f5 = BITSF(v1);
    {v1=FBITS(v[53]);}
    f2 = BITSF(v1);
    {v1=FBITS(v[56]);}
    f3 = BITSF(v1);
    v0 = s3 + 16;
    f8 = f0;
    ST32(v0+32, FBITS(f7));
    {v1=FBITS(v[57]);}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f8));
    ST32(sp+28, FBITS(f5));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f9));
    ST32(sp+40, FBITS(f3));
    ST32(sp+44, v1);
    ST32(sp+48, FBITS(f7));
    ST32(s3+16, FBITS(f6));
    ST32(v0+4, FBITS(f4));
    ST32(v0+8, FBITS(f8));
    ST32(v0+12, FBITS(f5));
    ST32(v0+16, FBITS(f2));
    ST32(v0+20, FBITS(f9));
    ST32(v0+24, FBITS(f3));
    ST32(v0+28, v1);
    goto L_08A0EA80;
}

/* 08A0EBA4 */
rv_t func_08A0EBA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0EBA4:;
    v0 = D_08B1494C - (18764);
    v0 = v0 + 18764;
    v1 = v0 + 40;
    sp = sp - 16;
    ST32(a0+52, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C6E4 - (-14620);
    a1 = s0 + 0;
    a0 = a0 - 14620;
    func_08ACF804(a0, a1, t1, t2, t3);
    goto L_08A0EBD8;
L_08A0EBD8:;
    a1 = D_08B14990 - (18832);
    a1 = a1 + 18832;
    a0 = s0 + 0;
    a1 = a1 + 4;
    s0 = s0 + 52;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08A0EBF0;
L_08A0EBF0:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0EBF8;
L_08A0EBF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0EC08 */
rv_t func_08A0EC08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0EC08:;
    v0 = D_08B1494C - (18764);
    v0 = v0 + 18764;
    v1 = v0 + 40;
    sp = sp - 16;
    ST32(a0+52, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C6E4 - (-14620);
    a1 = s0 + 0;
    a0 = a0 - 14620;
    func_08ACF804(a0, a1, t1, t2, t3);
    goto L_08A0EC40;
L_08A0EC40:;
    a1 = D_08B14990 - (18832);
    a1 = a1 + 18832;
    a1 = a1 + 4;
    s1 = s0 + 52;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08A0EC58;
L_08A0EC58:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0EC60;
L_08A0EC60:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0EC68;
L_08A0EC68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0EC7C */
rv_t func_08A0EC7C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0EC7C:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0EDA8; }
    goto L_08A0ECB4;
L_08A0ECB4:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF798 - (-2152);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2152));
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
    t0 = D_08C2C6A4 - (-14684);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C6B4 - (-14668);
    a3 = D_08C2C6C4 - (-14652);
    s3 = D_08C2C6D4 - (-14636);
    v1 = t0 - 14684;
    a1 = v0 - 14668;
    a2 = a3 - 14652;
    f1 = f1 * f3;
    s0 = s3 - 14636;
    ST32(v0-14668, FBITS(f5));
    v0 = 16;
    a0 = 64;
    ST32(v1+4, FBITS(f4));
    ST32(v1+8, FBITS(f5));
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(s0+4, v0);
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(t0-14684, FBITS(f1));
    ST32(a3-14652, FBITS(f2));
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0ED6C;
L_08A0ED6C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-14636, v0);
    if (cnd_) { goto L_08A0ED98; }
    goto L_08A0ED7C;
L_08A0ED7C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A0ED84;
L_08A0ED84:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A0ED84; }
    goto L_08A0ED98;
L_08A0ED98:;
    v0 = s3 - 14636;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    v1 = s2 < 0x1u;
    goto L_08A0EDA8;
L_08A0EDA8:;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s2 = D_08C2C6E4 - (-14620);
    if (cnd_) { goto L_08A0EE38; }
    goto L_08A0EDB8;
L_08A0EDB8:;
    s0 = s4 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_08A0EDE0; }
    goto L_08A0EDCC;
L_08A0EDCC:;
    v0 = D_08C2C6E4 - (-14620);
    a0 = LD32(v0-14620);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A0EE28; }
    goto L_08A0EDDC;
L_08A0EDDC:;
    v0 = s1 < 0x1u;
    goto L_08A0EDE0;
L_08A0EDE0:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0EDFC; }
    goto L_08A0EDEC;
L_08A0EDEC:;
    v0 = D_08C2C6D4 - (-14636);
    a0 = LD32(v0-14636);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A0EE18; }
    goto L_08A0EDFC;
L_08A0EDFC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A0EE18:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0EE20;
L_08A0EE20:;
    goto L_08A0EDFC;
L_08A0EE28:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0EE30;
L_08A0EE30:;
    v0 = s1 < 0x1u;
    goto L_08A0EDE0;
L_08A0EE38:;
    s0 = s2 - 14620;
    v0 = 16;
    ST32(s0+4, v0);
    a0 = 64;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EE4C;
L_08A0EE4C:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s2-14620, v0);
    if (cnd_) { goto L_08A0EE78; }
    goto L_08A0EE5C;
L_08A0EE5C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A0EE64;
L_08A0EE64:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A0EE64; }
    goto L_08A0EE78;
L_08A0EE78:;
    v0 = s2 - 14620;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A0EDB8;
}

/* 08A0EE88 */
rv_t func_08A0EE88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0EE88:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A0EC7C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EE9C;
L_08A0EE9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0EEA8 */
rv_t func_08A0EEA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0EEA8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A0EC7C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EEBC;
L_08A0EEBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0EEC8 */
void func_08A0EEC8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A0EEC8:;
    sp = sp - 112;
    s3 = a0 + 76;
    s5 = a0 + 0;
    a0 = s3 + 0;
    s7 = 2;
    s6 = s5 + 8;
    s4 = a2 + 0;
    s2 = D_08C2C758 - (-14504);
    s1 = s2 - 14504;
    s0 = a1 + 0;
    func_08873BF8(a0);
    goto L_08A0EF18;
L_08A0EF18:;
    a1 = D_08B14D38 - (19768);
    a1 = a1 + 19768;
    a2 = s0 + 0;
    a1 = a1 + 4;
    a0 = s5 + 0;
    func_088747D4(a0, a1, a2);
    goto L_08A0EF30;
L_08A0EF30:;
    v0 = D_08B14CF4 - (19700);
    v0 = v0 + 19700;
    ST32(s5, v0);
    a0 = 12;
    v1 = LD32(v0-12);
    a1 = LD32(s1+4);
    v0 = v0 + 44;
    v1 = s5 + v1;
    s0 = LD32(v1+4);
    ST32(s5+76, v0);
    a1 = a1 - 1;
    s0 = s0 & a1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EF64;
L_08A0EF64:;
    v1 = LD32(s2-14504);
    s0 = s0 << 2;
    a2 = LD32(s1+12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v1 = (u32)-32726;
    a2 = a2 + 1;
    ST32(v0+4, a1);
    a0 = s4 + 0;
    a1 = sp + 48;
    ST16(s3+8, v1);
    ST32(s0, v0);
    ST32(v0, s5);
    ST8(v0+8, 0);
    ST32(s1+12, a2);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EFA4;
L_08A0EFA4:;
    a1 = s5 + 4;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EFB0;
L_08A0EFB0:;
    a1 = s6 + 0;
    a0 = s4 + 0;
    s7 = s7 - 1;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EFC0;
L_08A0EFC0:;
    cnd_ = (s32)s7 >= 0;
    s6 = s6 + 4;
    if (cnd_) { goto L_08A0EFB0; }
    goto L_08A0EFC8;
L_08A0EFC8:;
    a1 = s5 + 20;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EFD4;
L_08A0EFD4:;
    a1 = s5 + 24;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EFE0;
L_08A0EFE0:;
    a1 = s5 + 28;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EFEC;
L_08A0EFEC:;
    a1 = s5 + 32;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0EFF8;
L_08A0EFF8:;
    s0 = s5 + 36;
    s1 = 3;
    goto L_08A0F000;
L_08A0F000:;
    a1 = s0 + 0;
    a0 = s4 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F010;
L_08A0F010:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A0F000; }
    goto L_08A0F018;
L_08A0F018:;
    a1 = s5 + 52;
    a0 = s4 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F024;
L_08A0F024:;
    a1 = s5 + 64;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F030;
L_08A0F030:;
    a1 = s5 + 68;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F03C;
L_08A0F03C:;
    v1 = LD32(s5+4);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(s5+68); goto L_08A0F0B8; }
    goto L_08A0F04C;
L_08A0F04C:;
    v0 = LD32(s5+68);
    ST32(s5+72, 0);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A0F08C; }
    goto L_08A0F05C;
L_08A0F05C:;
    s1 = sp + 32;
    a0 = s4 + 0;
    goto L_08A0F064;
L_08A0F064:;
    a1 = sp + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A0F06C;
L_08A0F06C:;
    a0 = s4 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F078;
L_08A0F078:;
    v1 = LD32(s5+68);
    s0 = s0 + 1;
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A0F064; }
    goto L_08A0F08C;
L_08A0F08C:;
    goto L_08A0F090;
L_08A0F090:;
    sp = sp + 112;
    return;
L_08A0F0B8:;
    a0 = s0 << 2;
    a0 = a0 + s0;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F0C8;
L_08A0F0C8:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_08A0F0E4; }
    goto L_08A0F0D4;
L_08A0F0D4:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08A0F0DC;
L_08A0F0DC:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08A0F0DC; }
    goto L_08A0F0E4;
L_08A0F0E4:;
    v0 = LD32(s5+68);
    ST32(s5+72, a0);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A0F08C; }
    goto L_08A0F0F4;
L_08A0F0F4:;
    s0 = 0 + 0;
    goto L_08A0F0F8;
L_08A0F0F8:;
    a1 = LD32(s5+72);
    a0 = s4 + 0;
    s1 = s1 + 1;
    a1 = a1 + s0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A0F10C;
L_08A0F10C:;
    a1 = LD32(s5+72);
    a0 = s4 + 0;
    a1 = a1 + s0;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F120;
L_08A0F120:;
    v1 = LD32(s5+68);
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    s0 = s0 + 40;
    if (cnd_) { goto L_08A0F0F8; }
    goto L_08A0F130;
L_08A0F130:;
    goto L_08A0F090;
}

/* 08A0F138 */
rv_t func_08A0F138(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0F138:;
    v0 = D_08B14CF4 - (19700);
    v0 = v0 + 19700;
    v1 = v0 + 44;
    sp = sp - 16;
    ST32(a0+76, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C758 - (-14504);
    a0 = a0 - 14504;
    a1 = s0 + 0;
    s1 = s0 + 76;
    func_08ACF92C(a0, a1, t1, t2, t3);
    goto L_08A0F174;
L_08A0F174:;
    v1 = LD32(s0+72);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A0F1B0; }
    goto L_08A0F180;
L_08A0F180:;
    a1 = D_08B14D38 - (19768);
    goto L_08A0F184;
L_08A0F184:;
    a1 = a1 + 19768;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08A0F194;
L_08A0F194:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0F19C;
L_08A0F19C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0F1B0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0F1B8;
L_08A0F1B8:;
    a1 = D_08B14D38 - (19768);
    goto L_08A0F184;
}

/* 08A0F1C0 */
rv_t func_08A0F1C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0F1C0:;
    v0 = D_08B14CF4 - (19700);
    v0 = v0 + 19700;
    v1 = v0 + 44;
    sp = sp - 16;
    ST32(a0+76, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C758 - (-14504);
    a0 = a0 - 14504;
    a1 = s0 + 0;
    s1 = s0 + 76;
    func_08ACF92C(a0, a1, t1, t2, t3);
    goto L_08A0F1FC;
L_08A0F1FC:;
    v1 = LD32(s0+72);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A0F240; }
    goto L_08A0F208;
L_08A0F208:;
    a1 = D_08B14D38 - (19768);
    goto L_08A0F20C;
L_08A0F20C:;
    a1 = a1 + 19768;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08A0F21C;
L_08A0F21C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0F224;
L_08A0F224:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0F22C;
L_08A0F22C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0F240:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0F248;
L_08A0F248:;
    a1 = D_08B14D38 - (19768);
    goto L_08A0F20C;
}

/* 08A0F250 */
rv_t func_08A0F250(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0F250:;
    sp = sp - 16;
    a2 = a0 + 0;
    a3 = 1;
    v1 = LD_U16(a1+16);
    v0 = v1 ^ 0x3;
    v1 = v1 - 3;
    v1 = v1 < 0x2u;
    cnd_ = v1 == 0;
    a0 = v0 < 0x1u;
    if (cnd_) { goto L_08A0F294; }
    goto L_08A0F278;
L_08A0F278:;
    v0 = LD32(a2+4);
    v0 = (v0 & ~(0x1u << 3)) | ((a0 & 0x1) << 3);
    ST32(a2+4, v0);
    goto L_08A0F284;
L_08A0F284:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A0F294:;
    v0 = LD32(a2);
    a0 = LD32(v0-12);
    a0 = a2 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F2A4;
L_08A0F2A4:;
    a3 = v0 + 0;
    goto L_08A0F284;
}

/* 08A0F2AC */
void func_08A0F2AC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0F2AC:;
    v0 = D_08B161F4 - (25076);
    v1 = D_08B161F8 - (25080);
    f3 = BITSF(LD32(v0+25076));
    f2 = BITSF(LD32(v1+25080));
    v0 = D_08B161FC - (25084);
    v1 = D_08B16200 - (25088);
    f1 = BITSF(LD32(v0+25084));
    f0 = BITSF(LD32(v1+25088));
    f4 = (float)(s32)FBITS(f3);
    f5 = (float)(s32)FBITS(f2);
    f3 = (float)(s32)FBITS(f1);
    f2 = (float)(s32)FBITS(f0);
    v0 = D_08AEF79C - (-2148);
    f0 = BITSF(LD32(v0-2148));
    v1 = D_08B2BFA8 - (-16472);
    f6 = BITSF(LD32(v1-16472));
    a0 = v1 - 16472;
    v0 = D_08B2BFBC - (-16452);
    v1 = D_08B2BFC0 - (-16448);
    f2 = f2 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f3 = f3 * f0;
    f9 = BITSF(LD32(v0-16452));
    f8 = BITSF(LD32(v1-16448));
    v0 = D_08B2BFC4 - (-16444);
    v1 = D_08B2BFCC - (-16436);
    f10 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    f7 = BITSF(LD32(v0-16444));
    f0 = BITSF(LD32(v1-16436));
    a1 = D_08C2C710 - (-14576);
    v1 = D_08C2C6F4 - (-14604);
    v0 = v1 - 14604;
    a0 = a1 - 14576;
    sp = sp - 16;
    ST32(v1-14604, FBITS(f6));
    ST32(v0+24, FBITS(f0));
    ST32(a1-14576, FBITS(f4));
    ST32(a0+12, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f10));
    ST32(v0+12, FBITS(f9));
    ST32(v0+16, FBITS(f8));
    ST32(v0+20, FBITS(f7));
    ST32(a0+4, FBITS(f5));
    ST32(a0+8, FBITS(f3));
    sp = sp + 16;
    return;
}

/* 08A0F370 */
void func_08A0F370(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A0F370:;
    sp = sp - 80;
    v0 = D_08B159FC - (23036);
    a1 = D_08C2C758 - (-14504);
    s4 = 999;
    s3 = 999;
    s1 = sp + 16;
    v1 = LD32(v0+23036);
    v0 = a1 - 14504;
    a0 = LD32(v0+8);
    f2 = BITSF(LD32(v1+8));
    a2 = LD32(v0+4);
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    a0 = a0 + 1;
    ST32(v0+8, a0);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, v0);
    ST32(sp+20, 0);
    cnd_ = a2 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08A0F428; }
    goto L_08A0F3E0;
L_08A0F3E0:;
    a1 = LD32(a1-14504);
    goto L_08A0F3E4;
L_08A0F3E4:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08A0F418; }
    goto L_08A0F3FC;
L_08A0F3FC:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08A0F42C; }
    goto L_08A0F40C;
L_08A0F40C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A0F3FC; }
    goto L_08A0F418;
L_08A0F418:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A0F3E4; }
    goto L_08A0F428;
L_08A0F428:;
    v0 = LD32(sp+24);
    goto L_08A0F42C;
L_08A0F42C:;
    cnd_ = v0 != 0;
    a1 = D_08B1BD08 - (-17144);
    if (cnd_) { goto L_08A0F630; }
    goto L_08A0F434;
L_08A0F434:;
    v0 = LD32(a1-17144);
    cnd_ = v0 == s3;
    t2 = D_08C2C74C - (-14516);
    if (cnd_) { goto L_08A0F4A0; }
    goto L_08A0F440;
L_08A0F440:;
    v0 = D_08B2BFA8 - (-16472);
    f3 = BITSF(LD32(v0-16472));
    a0 = v0 - 16472;
    v1 = D_08B2BFC0 - (-16448);
    v0 = D_08B2BFBC - (-16452);
    f5 = BITSF(LD32(v0-16452));
    f4 = BITSF(LD32(v1-16448));
    v0 = D_08B2BFC4 - (-16444);
    v1 = D_08B2BFCC - (-16436);
    f6 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(v0-16444));
    f0 = BITSF(LD32(v1-16436));
    v1 = D_08C2C720 - (-14560);
    v0 = v1 - 14560;
    ST32(a1-17144, s3);
    ST32(v1-14560, FBITS(f3));
    ST32(v0+24, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f6));
    ST32(v0+12, FBITS(f5));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f2));
    ST32(t2-14516, 0);
    goto L_08A0F4A0;
L_08A0F4A0:;
    t0 = D_08B1BD0C - (-17140);
    v0 = LD32(t0-17140);
    cnd_ = v0 == s4;
    t1 = D_08C2C750 - (-14512);
    if (cnd_) { goto L_08A0F538; }
    goto L_08A0F4B0;
L_08A0F4B0:;
    v0 = D_08B161F4 - (25076);
    a3 = LD32(v0+25076);
    v1 = D_08B161F8 - (25080);
    a2 = LD32(v1+25080);
    f0 = BITSF(a3);
    v0 = D_08B161FC - (25084);
    a1 = LD32(v0+25084);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(a2);
    v1 = D_08B16200 - (25088);
    a0 = LD32(v1+25088);
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(a1);
    v0 = D_08AEF7A0 - (-2144);
    v1 = D_08C2C73C - (-14532);
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(a0);
    ST32(t0-17140, s4);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-2144));
    v0 = v1 - 14532;
    ST32(t1-14512, 0);
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    ST32(v0+12, FBITS(f1));
    ST32(v1-14532, FBITS(f2));
    ST32(v0+4, FBITS(f3));
    ST32(v0+8, FBITS(f4));
    ST32(sp+32, a3);
    ST32(sp+36, a2);
    ST32(sp+40, a1);
    ST32(sp+44, a0);
    goto L_08A0F538;
L_08A0F538:;
    v1 = D_08C2C754 - (-14508);
    v0 = LD_U8(v1-14508);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = D_08AEF7A4 - (-2140); goto L_08A0F5A8; }
    goto L_08A0F548;
L_08A0F548:;
    v0 = D_08AEF7A4 - (-2140);
    f0 = BITSF(LD32(v0-2140));
    ST8(v1-14508, 0);
    ST32(t1-14512, FBITS(f0));
    ST32(t2-14516, FBITS(f0));
    goto L_08A0F55C;
L_08A0F55C:;
    func_08A0F81C();
    goto L_08A0F564;
L_08A0F564:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A0F598; }
    goto L_08A0F578;
L_08A0F578:;
    goto L_08A0F57C;
L_08A0F57C:;
    sp = sp + 80;
    return;
L_08A0F598:;
    func_08ACFA8C(a0, 0, 0, 0);
    goto L_08A0F5A0;
L_08A0F5A0:;
    goto L_08A0F57C;
L_08A0F5A8:;
    f1 = BITSF(LD32(t2-14516));
    f2 = BITSF(LD32(v1-2140));
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(t1-14512)); goto L_08A0F5F4; }
    goto L_08A0F5C0;
L_08A0F5C0:;
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v0-31332));
    f0 = f0 + f0;
    f0 = f1 + f0;
    fcc = FCMP(f0, f2, 14);
    f1 = f0;
    cnd_ = fcc;
    ST32(t2-14516, FBITS(f0));
    if (cnd_) { goto L_08A0F5E4; }
    goto L_08A0F5E0;
L_08A0F5E0:;
    f1 = f2;
    goto L_08A0F5E4;
L_08A0F5E4:;
    v0 = D_08C2C74C - (-14516);
    ST32(v0-14516, FBITS(f1));
    f2 = BITSF(LD32(v1-2140));
    f1 = BITSF(LD32(t1-14512));
    goto L_08A0F5F4;
L_08A0F5F4:;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08B2859C - (-31332);
    if (cnd_) { goto L_08A0F55C; }
    goto L_08A0F604;
L_08A0F604:;
    f0 = BITSF(LD32(v0-31332));
    f0 = f0 + f0;
    f0 = f1 + f0;
    fcc = FCMP(f0, f2, 14);
    f1 = f0;
    cnd_ = fcc;
    ST32(t1-14512, FBITS(f0));
    if (cnd_) { goto L_08A0F624; }
    goto L_08A0F620;
L_08A0F620:;
    f1 = f2;
    goto L_08A0F624;
L_08A0F624:;
    v0 = D_08C2C750 - (-14512);
    ST32(v0-14512, FBITS(f1));
    goto L_08A0F55C;
L_08A0F630:;
    s0 = LD32(v0);
    goto L_08A0F634;
L_08A0F634:;
    a0 = s1 + 0;
    a1 = 1;
    func_08ACF9E8(a0, a1);
    goto L_08A0F640;
L_08A0F640:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08A0F690; }
    goto L_08A0F648;
L_08A0F648:;
    a0 = LD32(s0+4);
    v0 = (a0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08A0F690; }
    goto L_08A0F658;
L_08A0F658:;
    v1 = a0 ^ 0x2;
    s2 = s3 ^ 0x3e7;
    v1 = (v1 >> 1) & 0x1;
    v0 = 0 < s2;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v1 = a0 ^ 0x4;
    if (cnd_) { goto L_08A0F6A0; }
    goto L_08A0F674;
L_08A0F674:;
    v0 = s4 ^ 0x3e7;
    v1 = (v1 >> 2) & 0x1;
    v0 = 0 < v0;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A0F6A4; }
    goto L_08A0F68C;
L_08A0F68C:;
    v0 = LD32(sp+24);
    goto L_08A0F690;
L_08A0F690:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A0F634; }
    goto L_08A0F698;
L_08A0F698:;
    a1 = D_08B1BD08 - (-17144);
    goto L_08A0F434;
L_08A0F6A0:;
    a0 = s0 + 0;
    goto L_08A0F6A4;
L_08A0F6A4:;
    a1 = sp + 0;
    v0 = func_08A0F714(a0, a1);
    goto L_08A0F6AC;
L_08A0F6AC:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08A0F690; }
    goto L_08A0F6B4;
L_08A0F6B4:;
    a0 = LD32(s0+4);
    v0 = a0 & 0x2;
    cnd_ = v0 == 0;
    v0 = a0 & 0x4;
    if (cnd_) { goto L_08A0F6DC; }
    goto L_08A0F6C4;
L_08A0F6C4:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    s3 = LD32(v0+4);
    s2 = s3 ^ 0x3e7;
    v0 = a0 & 0x4;
    goto L_08A0F6DC;
L_08A0F6DC:;
    cnd_ = v0 == 0;
    v0 = s4 ^ 0x3e7;
    if (cnd_) { goto L_08A0F6F8; }
    goto L_08A0F6E4;
L_08A0F6E4:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    s4 = LD32(v0+4);
    v0 = s4 ^ 0x3e7;
    goto L_08A0F6F8;
L_08A0F6F8:;
    v1 = 0 < s2;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08A0F690; }
    goto L_08A0F70C;
L_08A0F70C:;
    a1 = D_08B1BD08 - (-17144);
    goto L_08A0F434;
}

/* 08A0F714 */
u32 func_08A0F714(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A0F714:;
    sp = sp - 48;
    s3 = a1 + 0;
    v0 = LD32(a0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A0F7A4; }
    goto L_08A0F740;
L_08A0F740:;
    v0 = LD32(a0+68);
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A0F780; }
    goto L_08A0F74C;
L_08A0F74C:;
    s1 = 0 + 0;
    a0 = LD32(s0+72);
    goto L_08A0F754;
L_08A0F754:;
    a1 = s3 + 0;
    s2 = s2 + 1;
    a0 = a0 + s1;
    { rv_t r_ = func_08836448(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0F764;
L_08A0F764:;
    s1 = s1 + 40;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A0F784; }
    goto L_08A0F770;
L_08A0F770:;
    v0 = LD32(s0+68);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+72); goto L_08A0F754; }
    goto L_08A0F780;
L_08A0F780:;
    v1 = 0 + 0;
    goto L_08A0F784;
L_08A0F784:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A0F7A4:;
    v0 = a0 + 52;
    f6 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a0+52));
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f3 = BITSF(LD32(a1+4));
    f4 = BITSF(LD32(a0+64));
    f2 = f2 - f0;
    f5 = f5 - f6;
    f3 = f3 - f1;
    f4 = f4 * f4;
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    v0 = 1;
    fcc = FCMP(f0, f4, 14);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_08A0F814; }
    goto L_08A0F810;
L_08A0F810:;
    v0 = 0 + 0;
    goto L_08A0F814;
L_08A0F814:;
    v1 = v0 + 0;
    goto L_08A0F784;
}

/* 08A0F81C */
void func_08A0F81C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A0F81C:;
    sp = sp - 80;
    v0 = D_08B1BD08 - (-17144);
    a0 = D_08C2C758 - (-14504);
    v1 = a0 - 14504;
    a3 = LD32(v0-17144);
    v0 = 999;
    cnd_ = a3 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A0F89C; }
    goto L_08A0F84C;
L_08A0F84C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-14504);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v0 = D_08B1BD0C - (-17140);
    if (cnd_) { goto L_08A0F8A0; }
    goto L_08A0F870;
L_08A0F870:;
    a1 = LD32(a2);
    goto L_08A0F874;
L_08A0F874:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A0FB30; }
    goto L_08A0F88C;
L_08A0F88C:;
    a2 = LD32(a2+4);
    goto L_08A0F890;
L_08A0F890:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_08A0F874; }
    goto L_08A0F898;
L_08A0F898:;
    s0 = 0 + 0;
    goto L_08A0F89C;
L_08A0F89C:;
    v0 = D_08B1BD0C - (-17140);
    goto L_08A0F8A0;
L_08A0F8A0:;
    a1 = LD32(v0-17140);
    a0 = a0 - 14504;
    a2 = 1;
    v0 = func_08ACFB58(a0, a1, a2);
    goto L_08A0F8B0;
L_08A0F8B0:;
    cnd_ = s0 == 0;
    t2 = v0 + 0;
    if (cnd_) { goto L_08A0FAEC; }
    goto L_08A0F8B8;
L_08A0F8B8:;
    v0 = LD32(s0+8);
    ST32(sp, v0);
    v1 = LD32(s0+12);
    ST32(sp+4, v1);
    v0 = LD32(s0+16);
    ST32(sp+8, v0);
    v1 = LD32(s0+20);
    ST32(sp+12, v1);
    v0 = LD32(s0+24);
    ST32(sp+16, v0);
    v1 = LD32(s0+28);
    ST32(sp+20, v1);
    v0 = LD32(s0+32);
    ST32(sp+24, v0);
    goto L_08A0F8F0;
L_08A0F8F0:;
    cnd_ = t2 == 0;
    v1 = D_08C2C710 - (-14576);
    if (cnd_) { goto L_08A0FAC4; }
    goto L_08A0F8F8;
L_08A0F8F8:;
    v0 = LD32(t2+36);
    ST32(sp+28, v0);
    v1 = LD32(t2+40);
    ST32(sp+32, v1);
    v0 = LD32(t2+44);
    ST32(sp+36, v0);
    v1 = LD32(t2+48);
    ST32(sp+40, v1);
    goto L_08A0F918;
L_08A0F918:;
    s1 = D_08C2C74C - (-14516);
    v0 = D_08AEF7A8 - (-2136);
    f20 = BITSF(LD32(v0-2136));
    f1 = BITSF(LD32(s1-14516));
    v0 = D_08C2C720 - (-14560);
    s0 = v0 - 14560;
    f2 = f20 - f1;
    f3 = BITSF(LD32(v0-14560));
    f4 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s0+8));
    f12 = BITSF(LD32(sp));
    f14 = BITSF(LD32(sp+8));
    f13 = BITSF(LD32(sp+4));
    f3 = f3 * f2;
    f4 = f4 * f2;
    f0 = f0 * f2;
    f12 = f12 * f1;
    f14 = f14 * f1;
    f13 = f13 * f1;
    f12 = f12 + f3;
    f14 = f14 + f0;
    f13 = f13 + f4;
    func_088CADC8(f12, f13, f14);
    goto L_08A0F974;
L_08A0F974:;
    f1 = BITSF(LD32(s1-14516));
    f0 = BITSF(LD32(s0+12));
    f12 = BITSF(LD32(sp+12));
    f2 = f20 - f1;
    f12 = f12 * f1;
    f0 = f0 * f2;
    f12 = f12 + f0;
    func_088CAEC0(f12);
    goto L_08A0F994;
L_08A0F994:;
    f1 = BITSF(LD32(s1-14516));
    f0 = BITSF(LD32(s0+16));
    f12 = BITSF(LD32(sp+16));
    f2 = f20 - f1;
    f12 = f12 * f1;
    f0 = f0 * f2;
    f12 = f12 + f0;
    func_088CAEE0(f12);
    goto L_08A0F9B4;
L_08A0F9B4:;
    f1 = BITSF(LD32(s1-14516));
    f0 = BITSF(LD32(s0+20));
    f12 = BITSF(LD32(sp+20));
    f2 = f20 - f1;
    f12 = f12 * f1;
    f0 = f0 * f2;
    f12 = f12 + f0;
    func_088CAF00(f12);
    goto L_08A0F9D4;
L_08A0F9D4:;
    f1 = BITSF(LD32(s1-14516));
    f0 = BITSF(LD32(s0+24));
    f12 = BITSF(LD32(sp+24));
    f2 = f20 - f1;
    f12 = f12 * f1;
    f0 = f0 * f2;
    f12 = f12 + f0;
    func_088CAF20(f12);
    goto L_08A0F9F4;
L_08A0F9F4:;
    v0 = D_08B51050 - (4176);
    v1 = LD_U8(v0+4176);
    cnd_ = v1 != 0;
    v0 = D_08C2C750 - (-14512);
    if (cnd_) { goto L_08A0FA1C; }
    goto L_08A0FA04;
L_08A0FA04:;
    goto L_08A0FA08;
L_08A0FA08:;
    sp = sp + 80;
    return;
L_08A0FA1C:;
    f0 = BITSF(LD32(v0-14512));
    v1 = D_08C2C73C - (-14532);
    v0 = v1 - 14532;
    f5 = f20 - f0;
    f9 = BITSF(LD32(v0+12));
    f6 = BITSF(LD32(v0+4));
    f8 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v1-14532));
    f4 = BITSF(LD32(sp+28));
    f3 = BITSF(LD32(sp+40));
    f2 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f9 = f9 * f5;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f7 = f7 * f5;
    f2 = f2 * f0;
    f6 = f6 * f5;
    f1 = f1 * f0;
    f8 = f8 * f5;
    f4 = f4 + f7;
    f2 = f2 + f6;
    f3 = f3 + f9;
    f1 = f1 + f8;
    v0 = D_08AEF7AC - (-2132);
    f0 = BITSF(LD32(v0-2132));
    f3 = f3 * f0;
    f4 = f4 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    f5 = BITSF(F2I(f3, 1));
    f0 = BITSF(F2I(f4, 1));
    f3 = BITSF(F2I(f2, 1));
    f4 = BITSF(F2I(f1, 1));
    t0 = FBITS(f5);
    a1 = FBITS(f0);
    a2 = FBITS(f3);
    a3 = FBITS(f4);
    a0 = 1;
    func_08902914(a0, a1, a2, a3, t0);
    goto L_08A0FABC;
L_08A0FABC:;
    goto L_08A0FA08;
L_08A0FAC4:;
    v0 = v1 - 14576;
    a1 = LD32(v1-14576);
    a2 = LD32(v0+12);
    v1 = LD32(v0+4);
    a0 = LD32(v0+8);
    ST32(sp+28, a1);
    ST32(sp+32, v1);
    ST32(sp+36, a0);
    ST32(sp+40, a2);
    goto L_08A0F918;
L_08A0FAEC:;
    v1 = D_08C2C6F4 - (-14604);
    v0 = v1 - 14604;
    t0 = LD32(v1-14604);
    t1 = LD32(v0+24);
    v1 = LD32(v0+4);
    a0 = LD32(v0+8);
    a1 = LD32(v0+12);
    a2 = LD32(v0+16);
    a3 = LD32(v0+20);
    ST32(sp, t0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a1);
    ST32(sp+16, a2);
    ST32(sp+20, a3);
    ST32(sp+24, t1);
    goto L_08A0F8F0;
L_08A0FB30:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A0F88C; }
    goto L_08A0FB3C;
L_08A0FB3C:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A0F890; }
    goto L_08A0FB48;
L_08A0FB48:;
    v0 = D_08B1BD0C - (-17140);
    goto L_08A0F8A0;
}

/* 08A0FB50 */
rv_t func_08A0FB50(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A0FB50:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A0FBD0; }
    goto L_08A0FB84;
L_08A0FB84:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A0FBA8; }
    goto L_08A0FB98;
L_08A0FB98:;
    v0 = D_08C2C758 - (-14504);
    a0 = LD32(v0-14504);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A0FBC0; }
    goto L_08A0FBA8;
L_08A0FBA8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A0FBC0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0FBC8;
L_08A0FBC8:;
    goto L_08A0FBA8;
L_08A0FBD0:;
    s3 = D_08C2C758 - (-14504);
    s0 = s3 - 14504;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0FBE8;
L_08A0FBE8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-14504, v0);
    if (cnd_) { goto L_08A0FC14; }
    goto L_08A0FBF8;
L_08A0FBF8:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A0FC00;
L_08A0FC00:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A0FC00; }
    goto L_08A0FC14;
L_08A0FC14:;
    v0 = s3 - 14504;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A0FB84;
}

/* 08A0FC24 */
rv_t func_08A0FC24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0FC24:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A0FB50(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0FC38;
L_08A0FC38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0FC44 */
rv_t func_08A0FC44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0FC44:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A0FB50(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0FC58;
L_08A0FC58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0FC64 */
void func_08A0FC64(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A0FC64:;
    sp = sp - 80;
    s3 = a0 + 0;
    s1 = s3 + 52;
    s0 = a2 + 0;
    func_08872328(a0, a1, a2);
    goto L_08A0FC8C;
L_08A0FC8C:;
    v0 = D_08B14DA0 - (19872);
    v0 = v0 + 19872;
    a1 = LD32(s3+4);
    ST32(s3, v0);
    a2 = 1;
    a0 = s1 + 0;
    func_08A26584(a0, a1, a2);
    goto L_08A0FCA8;
L_08A0FCA8:;
    a2 = sp + 32;
    a1 = 0 + 0;
    goto L_08A0FCB0;
L_08A0FCB0:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A0FCB0; }
    goto L_08A0FCD4;
L_08A0FCD4:;
    v1 = LD32(sp+32);
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A0FD3C; }
    goto L_08A0FCE4;
L_08A0FCE4:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08A0FCEC;
L_08A0FCEC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0xcu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A0FCEC; }
    goto L_08A0FD10;
L_08A0FD10:;
    v0 = LD32(sp+4);
    a2 = LD32(sp+8);
    v1 = LD32(sp);
    ST32(s3+44, v0);
    a0 = s1 + 0;
    a1 = s0 + 0;
    ST32(s3+40, v1);
    ST32(s3+48, a2);
    func_08A26CF0(a0, a1);
    goto L_08A0FD34;
L_08A0FD34:;
    v1 = LD32(sp+32);
    v0 = 1;
    goto L_08A0FD3C;
L_08A0FD3C:;
    cnd_ = v1 == v0;
    a2 = sp + 16;
    if (cnd_) { goto L_08A0FDFC; }
    goto L_08A0FD44;
L_08A0FD44:;
    cnd_ = v1 != 0;
    if (cnd_) { s2 = D_08C2C798 - (-14440); goto L_08A0FD88; }
    goto L_08A0FD4C;
L_08A0FD4C:;
    a2 = sp + 36;
    a1 = 0 + 0;
    goto L_08A0FD54;
L_08A0FD54:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A0FD54; }
    goto L_08A0FD78;
L_08A0FD78:;
    v0 = LD32(sp+36);
    ST32(s3+44, 0);
    ST32(s3+40, v0);
    s2 = D_08C2C798 - (-14440);
    goto L_08A0FD88;
L_08A0FD88:;
    s1 = s2 - 14440;
    v1 = LD32(s1+4);
    v0 = (u32)-32740;
    s0 = LD32(s3+4);
    ST16(s3+8, v0);
    v1 = v1 - 1;
    a0 = 12;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0FDAC;
L_08A0FDAC:;
    a0 = LD32(s2-14440);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(v0, s3);
    a0 = s3 + 0;
    ST32(v0+4, a1);
    ST32(s1+12, v1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    { rv_t r_ = func_0887424C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0FDE0;
L_08A0FDE0:;
    sp = sp + 80;
    return;
L_08A0FDFC:;
    a1 = 0 + 0;
    goto L_08A0FE00;
L_08A0FE00:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x8u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A0FE00; }
    goto L_08A0FE24;
L_08A0FE24:;
    v1 = LD32(sp+20);
    v0 = LD32(sp+16);
    ST32(s3+48, 0);
    ST32(s3+40, v0);
    ST32(s3+44, v1);
    v1 = LD32(sp+32);
    goto L_08A0FD44;
}

/* 08A0FE40 */
rv_t func_08A0FE40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0FE40:;
    v0 = D_08B14DA0 - (19872);
    v0 = v0 + 19872;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C798 - (-14440);
    a1 = s0 + 0;
    a0 = a0 - 14440;
    func_08ACFBF4(a0, a1, t1, t2, t3);
    goto L_08A0FE6C;
L_08A0FE6C:;
    a0 = s0 + 52;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A0FE74;
L_08A0FE74:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0FE88;
L_08A0FE88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0FE98 */
rv_t func_08A0FE98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0FE98:;
    v0 = D_08B14DA0 - (19872);
    v0 = v0 + 19872;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C798 - (-14440);
    a1 = s0 + 0;
    a0 = a0 - 14440;
    func_08ACFBF4(a0, a1, t1, t2, t3);
    goto L_08A0FEC4;
L_08A0FEC4:;
    a0 = s0 + 52;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A0FECC;
L_08A0FECC:;
    v0 = D_08AF6018 - (24600);
    v0 = v0 + 24600;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0FEE0;
L_08A0FEE0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0FEE8;
L_08A0FEE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0FEF8 */
rv_t func_08A0FEF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A0FEF8:;
    sp = sp - 64;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08872684(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0FF14;
L_08A0FF14:;
    v0 = 3;
    ST32(sp+32, v0);
    a2 = sp + 32;
    a1 = 0 + 0;
    goto L_08A0FF24;
L_08A0FF24:;
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
    if (cnd_) { goto L_08A0FF24; }
    goto L_08A0FF4C;
L_08A0FF4C:;
    v0 = LD32(s1+40);
    v1 = LD32(s1+44);
    a0 = LD32(s1+48);
    ST32(sp, v0);
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    goto L_08A0FF78;
L_08A0FF78:;
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
    if (cnd_) { goto L_08A0FF78; }
    goto L_08A0FFA0;
L_08A0FFA0:;
    a0 = s1 + 52;
    a1 = s0 + 0;
    { u64 r_ = func_08A26C74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A0FFAC;
L_08A0FFAC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0FFC0 */
rv_t func_08A0FFC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0FFC0:;
    sp = sp - 16;
    { rv_t r_ = func_08872664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A0FFD0;
L_08A0FFD0:;
    v0 = v0 + 24;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A0FFE0 */
void func_08A0FFE0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A0FFE0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 76;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10000;
L_08A10000:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_08A0FC64(a0, a1, a2);
    goto L_08A10010;
L_08A10010:;
    sp = sp + 16;
    return;
}

/* 08A10024 */
rv_t func_08A10024(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A10024:;
    sp = sp - 16;
    a1 = 16;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a2 = LD_U16(a0+8);
    a0 = 90;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10048;
L_08A10048:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_08A10094; }
    goto L_08A10058;
L_08A10058:;
    t1 = LD32(v0+24);
    cnd_ = t1 == 0;
    if (cnd_) { goto L_08A1008C; }
    goto L_08A10064;
L_08A10064:;
    v0 = LD32(s0+44);
    v1 = LD32(s0+28);
    t0 = LD32(s0+40);
    v0 = v0 & 0xfff;
    ST32(t1+8, v0);
    v1 = v1 & 0x1;
    a3 = LD32(s0+48);
    ST8(t1, v1);
    ST32(t1+12, a3);
    ST32(t1+4, t0);
    goto L_08A1008C;
L_08A1008C:;
    { rv_t r_ = func_08873D6C(a0, a1, a2, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10094;
L_08A10094:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A100A4 */
rv_t func_08A100A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A100A4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 52;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A100C4;
L_08A100C4:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A100FC; }
    goto L_08A100CC;
L_08A100CC:;
    v1 = LD_U16(s1+16);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A1015C; }
    goto L_08A100DC;
L_08A100DC:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08A10114; }
    goto L_08A100E4;
L_08A100E4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0887424C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A100EC;
L_08A100EC:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08869FCC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A100F8;
L_08A100F8:;
    v1 = v0 + 0;
    goto L_08A100FC;
L_08A100FC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A10114:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A10128; }
    goto L_08A10120;
L_08A10120:;
    v1 = 1;
    goto L_08A100FC;
L_08A10128:;
    v1 = LD32(v0+76);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10134;
L_08A10134:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_08A10144;
L_08A10144:;
    ST32(s0+28, v0);
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1014C;
L_08A1014C:;
    a0 = s0 + 0;
    { rv_t r_ = func_0887424C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10154;
L_08A10154:;
    v1 = 1;
    goto L_08A100FC;
L_08A1015C:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A100FC; }
    goto L_08A1016C;
L_08A1016C:;
    v0 = LD32(s0);
    v1 = LD32(v0+72);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1017C;
L_08A1017C:;
    v0 = LD32(s0+28);
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x1;
    goto L_08A10144;
}

/* 08A10190 */
rv_t func_08A10190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A10190:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_088725B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A101A4;
L_08A101A4:;
    v1 = LD32(s0+28);
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A101D8; }
    goto L_08A101B4;
L_08A101B4:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+28, v1);
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A101C8;
L_08A101C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A101D8:;
    v0 = LD32(s0);
    v1 = LD32(v0+76);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A101E8;
L_08A101E8:;
    v1 = LD32(s0+28);
    goto L_08A101B4;
}

/* 08A101F0 */
void func_08A101F0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A101F0:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10214;
L_08A10214:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 4;
    t0 = 16;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A10230;
L_08A10230:;
    a0 = s2 + 0;
    func_08A10258(a0);
    goto L_08A10238;
L_08A10238:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_08A10240;
L_08A10240:;
    sp = sp + 16;
    return;
}

/* 08A10258 */
void func_08A10258(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A10258:;
    sp = sp - 32;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a2 = 16;
    a3 = 0 + 0;
    t0 = 8;
    t1 = 1;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_08A10288;
L_08A10288:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 4;
    t0 = 32;
    t1 = 4;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_08A102AC;
L_08A102AC:;
    a0 = s0 + 0;
    t3 = 1;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 8;
    t0 = 32;
    t1 = 14;
    t2 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_08A102D0;
L_08A102D0:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 12;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A102F4;
L_08A102F4:;
    sp = sp + 32;
    return;
}

/* 08A10304 */
rv_t func_08A10304(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A10304:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A10428; }
    goto L_08A10338;
L_08A10338:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF7B0 - (-2128);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2128));
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
    t0 = D_08C2C768 - (-14488);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C778 - (-14472);
    a3 = D_08C2C788 - (-14456);
    v1 = t0 - 14488;
    a1 = v0 - 14472;
    a2 = a3 - 14456;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2C798 - (-14440);
    s0 = s3 - 14440;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-14472, FBITS(f5));
    v0 = 8;
    ST32(t0-14488, FBITS(f1));
    ST32(a3-14456, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A103F0;
L_08A103F0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-14440, v0);
    if (cnd_) { goto L_08A1041C; }
    goto L_08A10400;
L_08A10400:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A10408;
L_08A10408:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A10408; }
    goto L_08A1041C;
L_08A1041C:;
    v0 = s3 - 14440;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A10428;
L_08A10428:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1044C; }
    goto L_08A1043C;
L_08A1043C:;
    v0 = D_08C2C798 - (-14440);
    a0 = LD32(v0-14440);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A10464; }
    goto L_08A1044C;
L_08A1044C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A10464:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1046C;
L_08A1046C:;
    goto L_08A1044C;
}

/* 08A10474 */
rv_t func_08A10474(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A10474:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A10304(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10488;
L_08A10488:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A10494 */
rv_t func_08A10494(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A10494:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A10304(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A104A8;
L_08A104A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A104B4 */
void func_08A104B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A104B4:;
    sp = sp - 48;
    s3 = a0 + 0;
    s1 = s3 + 64;
    s0 = a2 + 0;
    func_0886A840(a0, a1, a2);
    goto L_08A104DC;
L_08A104DC:;
    v0 = D_08B14E10 - (19984);
    v0 = v0 + 19984;
    a1 = LD32(s3+4);
    ST32(s3, v0);
    a2 = 0 + 0;
    a0 = s1 + 0;
    ST8(s3+60, 0);
    func_08A26584(a0, a1, a2);
    goto L_08A104FC;
L_08A104FC:;
    ST32(sp, 0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08A10508;
L_08A10508:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A10508; }
    goto L_08A1052C;
L_08A1052C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08A26CF0(a0, a1);
    goto L_08A10538;
L_08A10538:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { s2 = D_08C2C858 - (-14248); goto L_08A10584; }
    goto L_08A10544;
L_08A10544:;
    ST32(sp+4, 0);
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_08A10550;
L_08A10550:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A10550; }
    goto L_08A10574;
L_08A10574:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x1;
    ST8(s3+60, v0);
    s2 = D_08C2C858 - (-14248);
    goto L_08A10584;
L_08A10584:;
    s1 = s2 - 14248;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A105A0;
L_08A105A0:;
    a0 = LD32(s2-14248);
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

/* 08A105E8 */
rv_t func_08A105E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A105E8:;
    v0 = D_08B14E10 - (19984);
    v0 = v0 + 19984;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C858 - (-14248);
    a1 = s0 + 0;
    a0 = a0 - 14248;
    func_08ACFC9C(a0, a1, t1, t2, t3);
    goto L_08A10614;
L_08A10614:;
    a0 = s0 + 64;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A1061C;
L_08A1061C:;
    a0 = s0 + 0;
    { u64 r_ = func_0886AB90(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10624;
L_08A10624:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A10634 */
rv_t func_08A10634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A10634:;
    v0 = D_08B14E10 - (19984);
    v0 = v0 + 19984;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C858 - (-14248);
    a1 = s0 + 0;
    a0 = a0 - 14248;
    func_08ACFC9C(a0, a1, t1, t2, t3);
    goto L_08A10660;
L_08A10660:;
    a0 = s0 + 64;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A10668;
L_08A10668:;
    a0 = s0 + 0;
    { u64 r_ = func_0886AB90(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10670;
L_08A10670:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10678;
L_08A10678:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A10688 */
rv_t func_08A10688(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A10688:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 64;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A106A8;
L_08A106A8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A106D0; }
    goto L_08A106B8;
L_08A106B8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A106D0:;
    { rv_t r_ = func_08869FCC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A106D8;
L_08A106D8:;
    v1 = v0 + 0;
    goto L_08A106B8;
}

/* 08A106E0 */
rv_t func_08A106E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A106E0:;
    sp = sp - 64;
    v1 = LD_U8(a0+60);
    cnd_ = v1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A10970; }
    goto L_08A10708;
L_08A10708:;
    a2 = D_08C2C190 - (-15984);
    v1 = a2 - 15984;
    cnd_ = v1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A10858; }
    goto L_08A10718;
L_08A10718:;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A10784; }
    goto L_08A10738;
L_08A10738:;
    a2 = LD32(a2-15984);
    a3 = a1 + 0;
    goto L_08A10740;
L_08A10740:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A10774; }
    goto L_08A10758;
L_08A10758:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A10788; }
    goto L_08A10768;
L_08A10768:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A10758; }
    goto L_08A10774;
L_08A10774:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A10740; }
    goto L_08A10784;
L_08A10784:;
    v0 = LD32(sp+8);
    goto L_08A10788;
L_08A10788:;
    cnd_ = v0 == 0;
    s1 = 0x3e2c0000u;
    if (cnd_) { goto L_08A107D0; }
    goto L_08A10790;
L_08A10790:;
    s1 = s1 | 0x2ac5;
    s0 = LD32(v0);
    goto L_08A10798;
L_08A10798:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A107B8; }
    goto L_08A107A0;
L_08A107A0:;
    v1 = LD32(s0);
    v0 = LD32(v1+128);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A107B0;
L_08A107B0:;
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(s0); goto L_08A10894; }
    goto L_08A107B8;
L_08A107B8:;
    a0 = sp + 0;
    goto L_08A107BC;
L_08A107BC:;
    a1 = 1;
    { u64 r_ = func_08ABD538(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A107C4;
L_08A107C4:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A10798; }
    goto L_08A107D0;
L_08A107D0:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A10858; }
    goto L_08A107E4;
L_08A107E4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A10858; }
    goto L_08A107F0;
L_08A107F0:;
    v0 = LD32(s1);
    goto L_08A107F4;
L_08A107F4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A10848; }
    goto L_08A10808;
L_08A10808:;
    v0 = LD_U8(s0+8);
    goto L_08A1080C;
L_08A1080C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A1088C; }
    goto L_08A10814;
L_08A10814:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1087C; }
    goto L_08A1081C;
L_08A1081C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A10824;
L_08A10824:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10830;
L_08A10830:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A1083C;
L_08A1083C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A1080C; }
    goto L_08A10844;
L_08A10844:;
    v1 = LD32(s1+4);
    goto L_08A10848;
L_08A10848:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A107F4; }
    goto L_08A10858;
L_08A10858:;
    v0 = 0 + 0;
    goto L_08A1085C;
L_08A1085C:;
    goto L_08A10860;
L_08A10860:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A1087C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A10824;
L_08A1088C:;
    s0 = LD32(s0+4);
    goto L_08A1083C;
L_08A10894:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A108AC;
L_08A108AC:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    v0 = LD32(v1+104);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A108C0;
L_08A108C0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_08A107BC; }
    goto L_08A108C8;
L_08A108C8:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A10950; }
    goto L_08A108DC;
L_08A108DC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A10950; }
    goto L_08A108E8;
L_08A108E8:;
    v0 = LD32(s1);
    goto L_08A108EC;
L_08A108EC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A10940; }
    goto L_08A10900;
L_08A10900:;
    v0 = LD_U8(s0+8);
    goto L_08A10904;
L_08A10904:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A10968; }
    goto L_08A1090C;
L_08A1090C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A10958; }
    goto L_08A10914;
L_08A10914:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A1091C;
L_08A1091C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10928;
L_08A10928:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A10934;
L_08A10934:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A10904; }
    goto L_08A1093C;
L_08A1093C:;
    v1 = LD32(s1+4);
    goto L_08A10940;
L_08A10940:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A108EC; }
    goto L_08A10950;
L_08A10950:;
    v0 = 1;
    goto L_08A1085C;
L_08A10958:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A1091C;
L_08A10968:;
    s0 = LD32(s0+4);
    goto L_08A10934;
L_08A10970:;
    a2 = LD32(a0+44);
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08C2A08C - (-24436);
    if (cnd_) { goto L_08A10ABC; }
    goto L_08A10980;
L_08A10980:;
    v1 = a0 - 24436;
    v0 = LD32(v1+4);
    a1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A109C8; }
    goto L_08A109A8;
L_08A109A8:;
    a0 = LD32(v1);
    goto L_08A109AC;
L_08A109AC:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A10A9C; }
    goto L_08A109B8;
L_08A109B8:;
    v1 = LD32(v1+4);
    goto L_08A109BC;
L_08A109BC:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08A109AC; }
    goto L_08A109C4;
L_08A109C4:;
    a0 = 0 + 0;
    goto L_08A109C8;
L_08A109C8:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08C2B4CC - (-19252); goto L_08A109F4; }
    goto L_08A109D0;
L_08A109D0:;
    v0 = func_089823D8(a0);
    goto L_08A109D8;
L_08A109D8:;
    v1 = LD32(s2);
    goto L_08A109DC;
L_08A109DC:;
    a1 = v0 + 0;
    v0 = LD32(v1+104);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A109EC;
L_08A109EC:;
    goto L_08A10860;
L_08A109F4:;
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08A10858; }
    goto L_08A10A00;
L_08A10A00:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A10A50; }
    goto L_08A10A24;
L_08A10A24:;
    a0 = LD32(a1);
    goto L_08A10A28;
L_08A10A28:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A10A7C; }
    goto L_08A10A40;
L_08A10A40:;
    a1 = LD32(a1+4);
    goto L_08A10A44;
L_08A10A44:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A10A28; }
    goto L_08A10A4C;
L_08A10A4C:;
    v1 = 0 + 0;
    goto L_08A10A50;
L_08A10A50:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_08A1085C; }
    goto L_08A10A58;
L_08A10A58:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10A74;
L_08A10A74:;
    v1 = LD32(s2);
    goto L_08A109DC;
L_08A10A7C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A10A40; }
    goto L_08A10A88;
L_08A10A88:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A10A44; }
    goto L_08A10A94;
L_08A10A94:;
    goto L_08A10A50;
L_08A10A9C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A109BC; }
    goto L_08A10AA8;
L_08A10AA8:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A109BC; }
    goto L_08A10AB4;
L_08A10AB4:;
    goto L_08A109C8;
L_08A10ABC:;
    a2 = D_08C2A08C - (-24436);
    a0 = a2 - 24436;
    cnd_ = a0 == 0;
    s1 = sp + 16;
    if (cnd_) { goto L_08A10858; }
    goto L_08A10ACC;
L_08A10ACC:;
    v0 = LD32(a0+8);
    a1 = LD32(a0+4);
    ST32(sp+16, a0);
    v0 = v0 + 1;
    v1 = v1 < a1;
    ST32(a0+8, v0);
    ST32(sp+20, 0);
    cnd_ = v1 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08A10B38; }
    goto L_08A10AF0;
L_08A10AF0:;
    a2 = LD32(a2-24436);
    goto L_08A10AF4;
L_08A10AF4:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08A10B28; }
    goto L_08A10B0C;
L_08A10B0C:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_08A10B3C; }
    goto L_08A10B1C;
L_08A10B1C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A10B0C; }
    goto L_08A10B28;
L_08A10B28:;
    v0 = a0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A10AF4; }
    goto L_08A10B38;
L_08A10B38:;
    a0 = LD32(sp+24);
    goto L_08A10B3C;
L_08A10B3C:;
    cnd_ = a0 == 0;
    if (cnd_) { s1 = LD32(sp+16); goto L_08A10B90; }
    goto L_08A10B44;
L_08A10B44:;
    s0 = LD32(a0);
    goto L_08A10B48;
L_08A10B48:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A10B74; }
    goto L_08A10B50;
L_08A10B50:;
    v0 = func_089823D8(a0);
    goto L_08A10B58;
L_08A10B58:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    v0 = LD32(v1+104);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10B6C;
L_08A10B6C:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s0+28); goto L_08A10C34; }
    goto L_08A10B74;
L_08A10B74:;
    a0 = s1 + 0;
    a1 = 1;
    { u64 r_ = func_08ABC97C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10B80;
L_08A10B80:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08A10B48; }
    goto L_08A10B8C;
L_08A10B8C:;
    s1 = LD32(sp+16);
    goto L_08A10B90;
L_08A10B90:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A10858; }
    goto L_08A10BA0;
L_08A10BA0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A10858; }
    goto L_08A10BAC;
L_08A10BAC:;
    v0 = LD32(s1);
    goto L_08A10BB0;
L_08A10BB0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A10C04; }
    goto L_08A10BC4;
L_08A10BC4:;
    v0 = LD_U8(s0+8);
    goto L_08A10BC8;
L_08A10BC8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A10C2C; }
    goto L_08A10BD0;
L_08A10BD0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A10C1C; }
    goto L_08A10BD8;
L_08A10BD8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A10BE0;
L_08A10BE0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10BEC;
L_08A10BEC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A10BF8;
L_08A10BF8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A10BC8; }
    goto L_08A10C00;
L_08A10C00:;
    v1 = LD32(s1+4);
    goto L_08A10C04;
L_08A10C04:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A10BB0; }
    goto L_08A10C14;
L_08A10C14:;
    v0 = 0 + 0;
    goto L_08A1085C;
L_08A10C1C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A10BE0;
L_08A10C2C:;
    s0 = LD32(s0+4);
    goto L_08A10BF8;
L_08A10C34:;
    a0 = D_08C2B2A8 - (-19800);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19800;
    if (cnd_) { goto L_08A10D50; }
    goto L_08A10C44;
L_08A10C44:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A10C94; }
    goto L_08A10C68;
L_08A10C68:;
    a0 = LD32(a1);
    goto L_08A10C6C;
L_08A10C6C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A10DF8; }
    goto L_08A10C84;
L_08A10C84:;
    a1 = LD32(a1+4);
    goto L_08A10C88;
L_08A10C88:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A10C6C; }
    goto L_08A10C90;
L_08A10C90:;
    a0 = 0 + 0;
    goto L_08A10C94;
L_08A10C94:;
    cnd_ = a0 == 0;
    s1 = LD32(sp+16);
    if (cnd_) { goto L_08A10D54; }
    goto L_08A10C9C;
L_08A10C9C:;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10CA4;
L_08A10CA4:;
    cnd_ = v0 != 0;
    s1 = LD32(sp+16);
    if (cnd_) { goto L_08A10D54; }
    goto L_08A10CAC;
L_08A10CAC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A10858; }
    goto L_08A10CBC;
L_08A10CBC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A10858; }
    goto L_08A10CC8;
L_08A10CC8:;
    v0 = LD32(s1);
    goto L_08A10CCC;
L_08A10CCC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A10D20; }
    goto L_08A10CE0;
L_08A10CE0:;
    v0 = LD_U8(s0+8);
    goto L_08A10CE4;
L_08A10CE4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A10D48; }
    goto L_08A10CEC;
L_08A10CEC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A10D38; }
    goto L_08A10CF4;
L_08A10CF4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A10CFC;
L_08A10CFC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10D08;
L_08A10D08:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A10D14;
L_08A10D14:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A10CE4; }
    goto L_08A10D1C;
L_08A10D1C:;
    v1 = LD32(s1+4);
    goto L_08A10D20;
L_08A10D20:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A10CCC; }
    goto L_08A10D30;
L_08A10D30:;
    v0 = 0 + 0;
    goto L_08A1085C;
L_08A10D38:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A10CFC;
L_08A10D48:;
    s0 = LD32(s0+4);
    goto L_08A10D14;
L_08A10D50:;
    s1 = LD32(sp+16);
    goto L_08A10D54;
L_08A10D54:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A10950; }
    goto L_08A10D64;
L_08A10D64:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A10950; }
    goto L_08A10D70;
L_08A10D70:;
    v0 = LD32(s1);
    goto L_08A10D74;
L_08A10D74:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A10DC8; }
    goto L_08A10D88;
L_08A10D88:;
    v0 = LD_U8(s0+8);
    goto L_08A10D8C;
L_08A10D8C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A10DF0; }
    goto L_08A10D94;
L_08A10D94:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A10DE0; }
    goto L_08A10D9C;
L_08A10D9C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A10DA4;
L_08A10DA4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10DB0;
L_08A10DB0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A10DBC;
L_08A10DBC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A10D8C; }
    goto L_08A10DC4;
L_08A10DC4:;
    v1 = LD32(s1+4);
    goto L_08A10DC8;
L_08A10DC8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A10D74; }
    goto L_08A10DD8;
L_08A10DD8:;
    v0 = 1;
    goto L_08A1085C;
L_08A10DE0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A10DA4;
L_08A10DF0:;
    s0 = LD32(s0+4);
    goto L_08A10DBC;
L_08A10DF8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A10C88; }
    goto L_08A10E04;
L_08A10E04:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A10C88; }
    goto L_08A10E10;
L_08A10E10:;
    goto L_08A10C94;
}

/* 08A10E18 */
void func_08A10E18(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A10E18:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 88;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10E38;
L_08A10E38:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_08A104B4(a0, a1, a2);
    goto L_08A10E48;
L_08A10E48:;
    sp = sp + 16;
    return;
}

/* 08A10E5C */
rv_t func_08A10E5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A10E5C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0886AE90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10E78;
L_08A10E78:;
    v0 = 1;
    ST32(sp, v0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08A10E88;
L_08A10E88:;
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
    if (cnd_) { goto L_08A10E88; }
    goto L_08A10EB0;
L_08A10EB0:;
    a1 = s0 + 0;
    a0 = s1 + 64;
    { u64 r_ = func_08A26C74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A10EBC;
L_08A10EBC:;
    v0 = LD_U8(s1+60);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_08A10ECC;
L_08A10ECC:;
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
    if (cnd_) { goto L_08A10ECC; }
    goto L_08A10EF4;
L_08A10EF4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A10F08 */
rv_t func_08A10F08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A10F08:;
    sp = sp - 16;
    { rv_t r_ = func_0886AE4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A10F18;
L_08A10F18:;
    v0 = v0 + 16;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A10F28 */
rv_t func_08A10F28(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A10F28:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1104C; }
    goto L_08A10F5C;
L_08A10F5C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF7B4 - (-2124);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2124));
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
    t0 = D_08C2C7A8 - (-14424);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C7B8 - (-14408);
    a3 = D_08C2C7C8 - (-14392);
    v1 = t0 - 14424;
    a1 = v0 - 14408;
    a2 = a3 - 14392;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2C858 - (-14248);
    s0 = s3 - 14248;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-14408, FBITS(f5));
    v0 = 8;
    ST32(t0-14424, FBITS(f1));
    ST32(a3-14392, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A11014;
L_08A11014:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-14248, v0);
    if (cnd_) { goto L_08A11040; }
    goto L_08A11024;
L_08A11024:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A1102C;
L_08A1102C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A1102C; }
    goto L_08A11040;
L_08A11040:;
    v0 = s3 - 14248;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A1104C;
L_08A1104C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A11070; }
    goto L_08A11060;
L_08A11060:;
    v0 = D_08C2C858 - (-14248);
    a0 = LD32(v0-14248);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A11088; }
    goto L_08A11070;
L_08A11070:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A11088:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A11090;
L_08A11090:;
    goto L_08A11070;
}

/* 08A11098 */
rv_t func_08A11098(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A11098:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A10F28(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A110AC;
L_08A110AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A110B8 */
rv_t func_08A110B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A110B8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A10F28(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A110CC;
L_08A110CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A110D8 */
void func_08A110D8(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A110D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0886CEFC(a0, a1);
    goto L_08A110EC;
L_08A110EC:;
    v0 = D_08B14E88 - (20104);
    v0 = v0 + 20104;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08A11108 */
rv_t func_08A11108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A11108:;
    sp = sp - 16;
    { rv_t r_ = func_0886D45C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A11118;
L_08A11118:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A11124 */
rv_t func_08A11124(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A11124:;
    sp = sp - 64;
    v0 = LD32(a0+64);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A1134C; }
    goto L_08A11154;
L_08A11154:;
    a2 = D_08C2B4CC - (-19252);
    v1 = a2 - 19252;
    cnd_ = v1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1134C; }
    goto L_08A11164;
L_08A11164:;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A111D0; }
    goto L_08A11184;
L_08A11184:;
    a2 = LD32(a2-19252);
    a3 = a1 + 0;
    goto L_08A1118C;
L_08A1118C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A111C0; }
    goto L_08A111A4;
L_08A111A4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A111D4; }
    goto L_08A111B4;
L_08A111B4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A111A4; }
    goto L_08A111C0;
L_08A111C0:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A1118C; }
    goto L_08A111D0;
L_08A111D0:;
    v0 = LD32(sp+8);
    goto L_08A111D4;
L_08A111D4:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08A112C8; }
    goto L_08A111DC;
L_08A111DC:;
    f20 = BITSF(0);
    s0 = LD32(v0);
    goto L_08A111E4;
L_08A111E4:;
    cnd_ = s0 == 0;
    s1 = s2 + 28;
    if (cnd_) { goto L_08A112AC; }
    goto L_08A111EC;
L_08A111EC:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A11208;
L_08A11208:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s2+28));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A112B0; }
    goto L_08A11220;
L_08A11220:;
    f0 = BITSF(LD32(s1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A112B0; }
    goto L_08A11234;
L_08A11234:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A112B0; }
    goto L_08A1124C;
L_08A1124C:;
    f0 = BITSF(LD32(s1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A112B0; }
    goto L_08A11260;
L_08A11260:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A112B0; }
    goto L_08A11278;
L_08A11278:;
    f0 = BITSF(LD32(s1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A112B0; }
    goto L_08A1128C;
L_08A1128C:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A11388; }
    goto L_08A112AC;
L_08A112AC:;
    a0 = sp + 0;
    goto L_08A112B0;
L_08A112B0:;
    a1 = 1;
    { u64 r_ = func_08ABDA70(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A112B8;
L_08A112B8:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A111E4; }
    goto L_08A112C4;
L_08A112C4:;
    s1 = LD32(sp);
    goto L_08A112C8;
L_08A112C8:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A1134C; }
    goto L_08A112D8;
L_08A112D8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A1134C; }
    goto L_08A112E4;
L_08A112E4:;
    v0 = LD32(s1);
    goto L_08A112E8;
L_08A112E8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A1133C; }
    goto L_08A112FC;
L_08A112FC:;
    v0 = LD_U8(s0+8);
    goto L_08A11300;
L_08A11300:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A11380; }
    goto L_08A11308;
L_08A11308:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A11370; }
    goto L_08A11310;
L_08A11310:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A11318;
L_08A11318:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A11324;
L_08A11324:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A11330;
L_08A11330:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A11300; }
    goto L_08A11338;
L_08A11338:;
    v1 = LD32(s1+4);
    goto L_08A1133C;
L_08A1133C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A112E8; }
    goto L_08A1134C;
L_08A1134C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A11370:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A11318;
L_08A11380:;
    s0 = LD32(s0+4);
    goto L_08A11330;
L_08A11388:;
    func_08A11398(a0, a1);
    goto L_08A11390;
L_08A11390:;
    a0 = sp + 0;
    goto L_08A112B0;
}

/* 08A11398 */
void func_08A11398(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A11398:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    func_0897A7A0(a0);
    goto L_08A113B8;
L_08A113B8:;
    a0 = s0 + 0;
    v0 = LD32(s1+64);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A113FC; }
    goto L_08A113CC;
L_08A113CC:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    a2 = LD32(v1+12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    t_ = a2;
    ST32(sp+12, FBITS(f0));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A113E8;
L_08A113E8:;
    goto L_08A113EC;
L_08A113EC:;
    sp = sp + 48;
    return;
L_08A113FC:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s1+52));
    v1 = LD32(s0);
    a0 = s0 + 0;
    f0 = f0 * f1;
    v0 = LD32(v1+8);
    t_ = v0;
    ST32(sp+12, FBITS(f0));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A11420;
L_08A11420:;
    goto L_08A113EC;
}

/* 08A11428 */
void func_08A11428(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A11428:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 68;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1144C;
L_08A1144C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08A110D8(a0, a1);
    goto L_08A1145C;
L_08A1145C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A11470;
L_08A11470:;
    sp = sp + 16;
    return;
}

/* 08A11488 */
rv_t func_08A11488(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A11488:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2C868 - (-14232);
    t1 = D_08C2C878 - (-14216);
    t2 = D_08C2C888 - (-14200);
    a1 = a1 & a0;
    v1 = t0 - 14232;
    a2 = t1 - 14216;
    cnd_ = a1 == 0;
    a3 = t2 - 14200;
    if (cnd_) { goto L_08A11540; }
    goto L_08A114B8;
L_08A114B8:;
    v0 = D_08AEF7B8 - (-2120);
    f4 = BITSF(LD32(v0-2120));
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
    ST32(t0-14232, FBITS(f2));
    ST32(t1-14216, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-14200, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A11540;
L_08A11540:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A11548 */
rv_t func_08A11548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A11548:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A11488(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1155C;
L_08A1155C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A11568 */
void func_08A11568(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A11568:;
    sp = sp - 128;
    s5 = a0 + 108;
    s4 = a0 + 0;
    a0 = s5 + 0;
    s6 = s4 + 84;
    s3 = a2 + 0;
    func_0886A840(a0, a1, a2);
    goto L_08A115A4;
L_08A115A4:;
    v0 = D_08B14F2C - (20268);
    v0 = v0 + 20268;
    ST32(s4, v0);
    v0 = v0 + 172;
    a2 = 0 + 0;
    a1 = LD32(s5+4);
    ST32(s4+108, v0);
    a0 = s6 + 0;
    func_08A26584(a0, a1, a2);
    goto L_08A115C8;
L_08A115C8:;
    a2 = sp + 80;
    a1 = 0 + 0;
    goto L_08A115D0;
L_08A115D0:;
    v0 = LD32(s3);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s3, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A115D0; }
    goto L_08A115F4;
L_08A115F4:;
    v0 = (u32)-32737;
    ST16(s5+8, v0);
    v1 = 999;
    v0 = (u32)-1;
    a1 = LD32(s4);
    ST16(s4+72, v0);
    s2 = D_08C2C8C8 - (-14136);
    s1 = s2 - 14136;
    ST32(s4+68, v1);
    a0 = 12;
    ST32(s4+4, v1);
    ST32(s4+8, v1);
    ST8(s4+74, 0);
    ST32(s4+76, 0);
    ST32(s4+80, 0);
    v0 = LD32(a1-12);
    v1 = LD32(s1+4);
    v0 = s4 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1164C;
L_08A1164C:;
    a0 = LD32(s2-14136);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s4);
    v1 = v1 + 1;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    v0 = LD32(sp+80);
    cnd_ = (s32)v0 < 0;
    ST32(s1+12, v1);
    if (cnd_) { goto L_08A11768; }
    goto L_08A11680;
L_08A11680:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08A11688;
L_08A11688:;
    v0 = LD32(s3);
    a1 = a1 + 1;
    a0 = a1 < 0x4cu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s3, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A11688; }
    goto L_08A116AC;
L_08A116AC:;
    f10 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    a1 = LD32(sp+52);
    v0 = LD32(sp+48);
    a2 = LD32(sp+56);
    a3 = LD32(sp+60);
    t0 = LD_U16(sp+64);
    f11 = BITSF(LD32(sp+12));
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    f6 = BITSF(LD32(sp+28));
    f7 = BITSF(LD32(sp+32));
    f8 = BITSF(LD32(sp+36));
    f9 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    v1 = s4 + 24;
    a0 = s4 + 12;
    ST32(s4+8, v0);
    ST32(s4+12, FBITS(f10));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    ST32(v1+32, FBITS(f0));
    ST32(v1+4, FBITS(f3));
    ST32(v1+8, FBITS(f4));
    ST32(v1+12, FBITS(f5));
    ST32(v1+16, FBITS(f6));
    ST32(v1+20, FBITS(f7));
    ST32(v1+24, FBITS(f8));
    ST32(v1+28, FBITS(f9));
    ST32(s4+24, FBITS(f11));
    ST32(s4+60, a1);
    ST32(s4+64, a2);
    ST32(s4+68, a3);
    ST16(s4+72, t0);
    a1 = LD32(sp+68);
    v1 = LD32(sp+72);
    a0 = LD32(sp+80);
    v0 = LD_U8(sp+66);
    ST32(s4+80, v1);
    ST8(s4+74, v0);
    cnd_ = (s32)a0 <= 0;
    ST32(s4+76, a1);
    if (cnd_) { goto L_08A11768; }
    goto L_08A1175C;
L_08A1175C:;
    a0 = s6 + 0;
    a1 = s3 + 0;
    func_08A26CF0(a0, a1);
    goto L_08A11768;
L_08A11768:;
    a0 = s5 + 0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A11770;
L_08A11770:;
    sp = sp + 128;
    return;
}

/* 08A11798 */
rv_t func_08A11798(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A11798:;
    sp = sp - 16;
    a2 = a0 + 0;
    v0 = 0xffff;
    v1 = LD_U16(a0+72);
    a0 = D_08B29170 - (-28304);
    f12 = BITSF(0);
    a0 = a0 - 28304;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08A117D4; }
    goto L_08A117C0;
L_08A117C0:;
    v0 = LD32(a2);
    v1 = LD32(v0-12);
    v1 = a2 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A117D4;
L_08A117D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A117E0 */
rv_t func_08A117E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A117E0:;
    v0 = D_08B14F2C - (20268);
    v0 = v0 + 20268;
    v1 = v0 + 172;
    sp = sp - 16;
    ST32(a0+108, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C8C8 - (-14136);
    a1 = s0 + 0;
    a0 = a0 - 14136;
    func_08ACFF58(a0, a1, t1, t2, t3);
    goto L_08A11814;
L_08A11814:;
    a0 = s0 + 84;
    s0 = s0 + 108;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A11820;
L_08A11820:;
    a0 = s0 + 0;
    { u64 r_ = func_0886AB90(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A11828;
L_08A11828:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A11838 */
rv_t func_08A11838(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A11838:;
    v0 = D_08B14F2C - (20268);
    v0 = v0 + 20268;
    v1 = v0 + 172;
    sp = sp - 16;
    ST32(a0+108, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C8C8 - (-14136);
    a1 = s0 + 0;
    a0 = a0 - 14136;
    func_08ACFF58(a0, a1, t1, t2, t3);
    goto L_08A11870;
L_08A11870:;
    s1 = s0 + 108;
    a0 = s0 + 84;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A1187C;
L_08A1187C:;
    a0 = s1 + 0;
    { u64 r_ = func_0886AB90(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A11884;
L_08A11884:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1188C;
L_08A1188C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A118A0 */
float func_08A118A0(float f12, float f13)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08A118A0:;
    f0 = f12 - f13;
    v0 = D_08AEF7BC - (-2116);
    f1 = BITSF(LD32(v0-2116));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A118D0; }
    goto L_08A118BC;
L_08A118BC:;
    f0 = f0 - f1;
    goto L_08A118C0;
L_08A118C0:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f0 - f1; goto L_08A118C0; }
    goto L_08A118D0;
L_08A118D0:;
    f2 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEF7BC - (-2116);
    if (cnd_) { goto L_08A118FC; }
    goto L_08A118E4;
L_08A118E4:;
    f1 = BITSF(LD32(v0-2116));
    f0 = f0 + f1;
    goto L_08A118EC;
L_08A118EC:;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f0 + f1; goto L_08A118EC; }
    goto L_08A118FC;
L_08A118FC:;
    return f0;
}

/* 08A11904 */
rv_t func_08A11904(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78];
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_08A11904:;
    sp = sp - 208;
    s2 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(s0);
    goto L_08A11934;
L_08A11934:;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+40);
    v0 = (u32)((s32)v0 >> (s2 & 31));
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A11970; }
    goto L_08A11950;
L_08A11950:;
    v0 = 1;
    cnd_ = s2 == v0;
    v0 = (s32)s2 < 2;
    if (cnd_) { goto L_08A12328; }
    goto L_08A1195C;
L_08A1195C:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A11A90; }
    goto L_08A11964;
L_08A11964:;
    cnd_ = s2 == v0;
    if (cnd_) { a2 = LD32(v1+44); goto L_08A119B4; }
    goto L_08A1196C;
L_08A1196C:;
    s2 = s2 + 1;
    goto L_08A11970;
L_08A11970:;
    v0 = (s32)s2 < 3;
    goto L_08A11974;
L_08A11974:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A11934; }
    goto L_08A1197C;
L_08A1197C:;
    v0 = 999;
    ST32(s0+4, v0);
    a0 = 0 + 0;
    goto L_08A11988;
L_08A11988:;
    v0 = a0 + 0;
    sp = sp + 208;
    { v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
L_08A119B4:;
    a0 = D_08B28EF4 - (-28940);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 28940;
    if (cnd_) { goto L_08A1196C; }
    goto L_08A119C4;
L_08A119C4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A11A14; }
    goto L_08A119E8;
L_08A119E8:;
    a0 = LD32(a1);
    goto L_08A119EC;
L_08A119EC:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A11A70; }
    goto L_08A11A04;
L_08A11A04:;
    a1 = LD32(a1+4);
    goto L_08A11A08;
L_08A11A08:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A119EC; }
    goto L_08A11A10;
L_08A11A10:;
    a0 = 0 + 0;
    goto L_08A11A14;
L_08A11A14:;
    cnd_ = a0 == 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A11970; }
    goto L_08A11A1C;
L_08A11A1C:;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A11A2C;
L_08A11A2C:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+104);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A11A4C;
L_08A11A4C:;
    cnd_ = v0 == 0;
    v0 = (s32)s2 < 3;
    if (cnd_) { goto L_08A11974; }
    goto L_08A11A54;
L_08A11A54:;
    v0 = LD32(s0);
    a0 = 1;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+44);
    ST32(s0+4, v0);
    goto L_08A11988;
L_08A11A70:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A11A08; }
    goto L_08A11A7C;
L_08A11A7C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A11A08; }
    goto L_08A11A88;
L_08A11A88:;
    goto L_08A11A14;
L_08A11A90:;
    cnd_ = s2 != 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A11970; }
    goto L_08A11A98;
L_08A11A98:;
    a3 = D_08C2C664 - (-14748);
    v0 = a3 - 14748;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = s2 < a2;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08A11B10; }
    goto L_08A11AC8;
L_08A11AC8:;
    a3 = LD32(a3-14748);
    goto L_08A11ACC;
L_08A11ACC:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08A11B00; }
    goto L_08A11AE4;
L_08A11AE4:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08A11B14; }
    goto L_08A11AF4;
L_08A11AF4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08A11AE4; }
    goto L_08A11B00;
L_08A11B00:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08A11ACC; }
    goto L_08A11B10;
L_08A11B10:;
    a0 = LD32(sp+8);
    goto L_08A11B14;
L_08A11B14:;
    cnd_ = a0 == 0;
    v0 = D_08AEF7C0 - (-2112);
    if (cnd_) { goto L_08A122D4; }
    goto L_08A11B1C;
L_08A11B1C:;
    f20 = BITSF(LD32(v0-2112));
    v1 = D_08AEF7C4 - (-2108);
    v0 = D_08AEF7C8 - (-2104);
    f22 = BITSF(LD32(v1-2108));
    f21 = BITSF(LD32(v0-2104));
    s1 = s0 + 24;
    s3 = LD32(a0);
    goto L_08A11B38;
L_08A11B38:;
    a0 = s3 + 0;
    v0 = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_089823D8(a0); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; });
    goto L_08A11B40;
L_08A11B40:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+104);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A11B60;
L_08A11B60:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A122BC; }
    goto L_08A11B68;
L_08A11B68:;
    v0 = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_0898242C(a0); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; });
    goto L_08A11B70;
L_08A11B70:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f8 = BITSF(LD32(s0+24));
    f9 = BITSF(LD32(s1+4));
    f10 = BITSF(LD32(s1+8));
    f11 = BITSF(LD32(s1+12));
    f12 = BITSF(LD32(s1+16));
    f13 = BITSF(LD32(s1+20));
    f15 = BITSF(LD32(v0+32));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f14 = BITSF(LD32(s1+24));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f15));
    {v[112]=BITSF(LD32(sp+(16)));}
    {v[113]=BITSF(LD32(sp+(20)));}
    {v[114]=BITSF(LD32(sp+(24)));}
    {v[116]=BITSF(LD32(sp+(28)));}
    {v[117]=BITSF(LD32(sp+(32)));}
    {v[118]=BITSF(LD32(sp+(36)));}
    {v[120]=BITSF(LD32(sp+(40)));}
    {v[121]=BITSF(LD32(sp+(44)));}
    {v[122]=BITSF(LD32(sp+(48)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11E54; }
    goto L_08A11C10;
L_08A11C10:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11D94; }
    goto L_08A11C20;
L_08A11C20:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A11CB8; }
    goto L_08A11C48;
L_08A11C48:;
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
    if (cnd_) { goto L_08A11C94; }
    goto L_08A11C84;
L_08A11C84:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A11C94;
L_08A11C94:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11CD8; }
    goto L_08A11CA4;
L_08A11CA4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A11CD8; }
    goto L_08A11CB4;
L_08A11CB4:;
    goto L_08A11CB8;
L_08A11CB8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11CD8; }
    goto L_08A11CCC;
L_08A11CCC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A11CD8;
L_08A11CD8:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A11D68; }
    goto L_08A11CF8;
L_08A11CF8:;
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
    if (cnd_) { goto L_08A11D44; }
    goto L_08A11D34;
L_08A11D34:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A11D44;
L_08A11D44:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11D88; }
    goto L_08A11D54;
L_08A11D54:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A11D88; }
    goto L_08A11D64;
L_08A11D64:;
    goto L_08A11D68;
L_08A11D68:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11D88; }
    goto L_08A11D7C;
L_08A11D7C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A11D88;
L_08A11D88:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A11F0C; }
    goto L_08A11D90;
L_08A11D90:;
    goto L_08A11D94;
L_08A11D94:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A11E28; }
    goto L_08A11DB8;
L_08A11DB8:;
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
    if (cnd_) { goto L_08A11E04; }
    goto L_08A11DF4;
L_08A11DF4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A11E04;
L_08A11E04:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11E48; }
    goto L_08A11E14;
L_08A11E14:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A11E48; }
    goto L_08A11E24;
L_08A11E24:;
    goto L_08A11E28;
L_08A11E28:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11E48; }
    goto L_08A11E3C;
L_08A11E3C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A11E48;
L_08A11E48:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A11F0C; }
    goto L_08A11E50;
L_08A11E50:;
    goto L_08A11E54;
L_08A11E54:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A11EE8; }
    goto L_08A11E78;
L_08A11E78:;
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
    if (cnd_) { goto L_08A11EC4; }
    goto L_08A11EB4;
L_08A11EB4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A11EC4;
L_08A11EC4:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11F08; }
    goto L_08A11ED4;
L_08A11ED4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A11F08; }
    goto L_08A11EE4;
L_08A11EE4:;
    goto L_08A11EE8;
L_08A11EE8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A11F08; }
    goto L_08A11EFC;
L_08A11EFC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A11F08;
L_08A11F08:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08A11F0C;
L_08A11F0C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    ST32(sp+80, FBITS(f8));
    ST32(sp+84, FBITS(f9));
    ST32(sp+88, FBITS(f10));
    ST32(sp+92, FBITS(f11));
    ST32(sp+96, FBITS(f12));
    ST32(sp+100, FBITS(f13));
    ST32(sp+104, FBITS(f14));
    f0 = BITSF(LD32(s1+28));
    f1 = BITSF(LD32(s1+32));
    f13 = BITSF(LD32(sp+68));
    ST32(sp+108, FBITS(f0));
    ST32(sp+112, FBITS(f1));
    {v[112]=BITSF(LD32(sp+(80)));}
    {v[113]=BITSF(LD32(sp+(84)));}
    {v[114]=BITSF(LD32(sp+(88)));}
    {v[116]=BITSF(LD32(sp+(92)));}
    {v[117]=BITSF(LD32(sp+(96)));}
    {v[118]=BITSF(LD32(sp+(100)));}
    {v[120]=BITSF(LD32(sp+(104)));}
    {v[121]=BITSF(LD32(sp+(108)));}
    {v[122]=BITSF(LD32(sp+(112)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A121CC; }
    goto L_08A11F88;
L_08A11F88:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A1210C; }
    goto L_08A11F98;
L_08A11F98:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A12030; }
    goto L_08A11FC0;
L_08A11FC0:;
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
    if (cnd_) { goto L_08A1200C; }
    goto L_08A11FFC;
L_08A11FFC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A1200C;
L_08A1200C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A12050; }
    goto L_08A1201C;
L_08A1201C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A12050; }
    goto L_08A1202C;
L_08A1202C:;
    goto L_08A12030;
L_08A12030:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A12050; }
    goto L_08A12044;
L_08A12044:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A12050;
L_08A12050:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A120E0; }
    goto L_08A12070;
L_08A12070:;
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
    if (cnd_) { goto L_08A120BC; }
    goto L_08A120AC;
L_08A120AC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A120BC;
L_08A120BC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A12100; }
    goto L_08A120CC;
L_08A120CC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A12100; }
    goto L_08A120DC;
L_08A120DC:;
    goto L_08A120E0;
L_08A120E0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A12100; }
    goto L_08A120F4;
L_08A120F4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A12100;
L_08A12100:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A12284; }
    goto L_08A12108;
L_08A12108:;
    goto L_08A1210C;
L_08A1210C:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A121A0; }
    goto L_08A12130;
L_08A12130:;
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
    if (cnd_) { goto L_08A1217C; }
    goto L_08A1216C;
L_08A1216C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A1217C;
L_08A1217C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A121C0; }
    goto L_08A1218C;
L_08A1218C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A121C0; }
    goto L_08A1219C;
L_08A1219C:;
    goto L_08A121A0;
L_08A121A0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A121C0; }
    goto L_08A121B4;
L_08A121B4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A121C0;
L_08A121C0:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08A12284; }
    goto L_08A121C8;
L_08A121C8:;
    goto L_08A121CC;
L_08A121CC:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A12260; }
    goto L_08A121F0;
L_08A121F0:;
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
    if (cnd_) { goto L_08A1223C; }
    goto L_08A1222C;
L_08A1222C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08A1223C;
L_08A1223C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A12280; }
    goto L_08A1224C;
L_08A1224C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A12280; }
    goto L_08A1225C;
L_08A1225C:;
    goto L_08A12260;
L_08A12260:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A12280; }
    goto L_08A12274;
L_08A12274:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A12280;
L_08A12280:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_08A12284;
L_08A12284:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(128),FBITS(v[96]));}
    {ST32(sp+(132),FBITS(v[97]));}
    {ST32(sp+(136),FBITS(v[98]));}
    f12 = BITSF(LD32(sp+132));
    f0 = func_08A118A0(f12, f13);
    goto L_08A1229C;
L_08A1229C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f22 - f0; goto L_08A122AC; }
    goto L_08A122AC;
L_08A122AC:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s3+28); goto L_08A122F8; }
    goto L_08A122BC;
L_08A122BC:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A122C8;
L_08A122C8:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s3 = LD32(a0); goto L_08A11B38; }
    goto L_08A122D4;
L_08A122D4:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A1196C; }
    goto L_08A122E8;
L_08A122E8:;
    s2 = s2 + 1;
    { u64 r_ = func_08ABCFE8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A122F0;
L_08A122F0:;
    v0 = (s32)s2 < 3;
    goto L_08A11974;
L_08A122F8:;
    a0 = LD32(sp);
    ST32(s0+4, v1);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A12318; }
    goto L_08A12310;
L_08A12310:;
    a0 = 1;
    goto L_08A11988;
L_08A12318:;
    { u64 r_ = func_08ABCFE8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A12320;
L_08A12320:;
    a0 = 1;
    goto L_08A11988;
L_08A12328:;
    a2 = D_08C29FC4 - (-24636);
    v0 = a2 - 24636;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+144, v0);
    v1 = v1 + 1;
    a1 = sp + 144;
    ST32(v0+8, v1);
    ST32(sp+152, 0);
    cnd_ = a0 == 0;
    ST32(sp+148, 0);
    if (cnd_) { goto L_08A123A0; }
    goto L_08A12354;
L_08A12354:;
    a2 = LD32(a2-24636);
    a3 = a0 + 0;
    goto L_08A1235C;
L_08A1235C:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08A12390; }
    goto L_08A12374;
L_08A12374:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+152); goto L_08A123A4; }
    goto L_08A12384;
L_08A12384:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08A12374; }
    goto L_08A12390;
L_08A12390:;
    v0 = a0 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08A1235C; }
    goto L_08A123A0;
L_08A123A0:;
    a0 = LD32(sp+152);
    goto L_08A123A4;
L_08A123A4:;
    cnd_ = a0 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08A123D0; }
    goto L_08A123AC;
L_08A123AC:;
    a0 = LD32(sp+144);
    goto L_08A123B0;
L_08A123B0:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A1196C; }
    goto L_08A123C0;
L_08A123C0:;
    s2 = s2 + 1;
    { u64 r_ = func_08AD0014(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A123C8;
L_08A123C8:;
    v0 = (s32)s2 < 3;
    goto L_08A11974;
L_08A123D0:;
    s1 = LD32(a0);
    goto L_08A123D4;
L_08A123D4:;
    a0 = s1 + 0;
    v0 = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_089823D8(a0); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; });
    goto L_08A123DC;
L_08A123DC:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+104);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr69=v[69];vr70=v[70];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A123FC;
L_08A123FC:;
    a0 = s3 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A12424; }
    goto L_08A12408;
L_08A12408:;
    { u64 r_ = func_08ABF6B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A12410;
L_08A12410:;
    a0 = LD32(sp+152);
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_08A123D4; }
    goto L_08A1241C;
L_08A1241C:;
    a0 = LD32(sp+144);
    goto L_08A123B0;
L_08A12424:;
    v1 = LD32(s1+28);
    a0 = LD32(sp+144);
    ST32(s0+4, v1);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A12310; }
    goto L_08A12440;
L_08A12440:;
    { u64 r_ = func_08AD0014(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A12448;
L_08A12448:;
    a0 = 1;
    goto L_08A11988;
    v[64]=vr64;v[65]=vr65;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;
}

/* 08A12450 */
rv_t func_08A12450(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08A12450:;
    sp = sp - 192;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_0886AE90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12478;
L_08A12478:;
    v0 = 1;
    ST32(sp+160, v0);
    a2 = sp + 160;
    a1 = 0 + 0;
    goto L_08A12488;
L_08A12488:;
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
    if (cnd_) { goto L_08A12488; }
    goto L_08A124B0;
L_08A124B0:;
    v0 = s1 + 24;
    v1 = s1 + 12;
    a1 = LD32(s1+8);
    t1 = LD32(s1+68);
    a2 = LD32(s1+60);
    a3 = LD32(s1+64);
    t0 = LD_U16(s1+72);
    f10 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(s1+12));
    f11 = BITSF(LD32(v0+32));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0+12));
    f6 = BITSF(LD32(v0+16));
    f7 = BITSF(LD32(v0+20));
    f8 = BITSF(LD32(v0+24));
    f9 = BITSF(LD32(v0+28));
    f2 = BITSF(LD32(s1+24));
    ST32(sp+16, FBITS(f3));
    t3 = sp + 80;
    t2 = 0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f10));
    ST32(sp+12, FBITS(f2));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f6));
    ST32(sp+32, FBITS(f7));
    ST32(sp+36, FBITS(f8));
    ST32(sp+40, FBITS(f9));
    ST32(sp+44, FBITS(f11));
    ST32(sp+48, a1);
    ST32(sp+60, t1);
    ST32(sp+52, a2);
    ST32(sp+56, a3);
    ST16(sp+64, t0);
    v0 = LD_U8(s1+74);
    v1 = LD32(s1+76);
    a0 = LD32(s1+80);
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f10));
    ST32(sp+92, FBITS(f2));
    ST32(sp+96, FBITS(f3));
    ST32(sp+100, FBITS(f4));
    ST32(sp+104, FBITS(f5));
    ST32(sp+108, FBITS(f6));
    ST32(sp+112, FBITS(f7));
    ST32(sp+116, FBITS(f8));
    ST32(sp+120, FBITS(f9));
    ST32(sp+124, FBITS(f11));
    ST32(sp+128, a1);
    ST32(sp+132, a2);
    ST32(sp+136, a3);
    ST32(sp+140, t1);
    ST16(sp+144, t0);
    ST8(sp+146, v0);
    ST32(sp+148, v1);
    ST32(sp+152, a0);
    ST8(sp+66, v0);
    ST32(sp+68, v1);
    ST32(sp+72, a0);
    goto L_08A125B0;
L_08A125B0:;
    v0 = LD_U8(t3);
    v1 = LD32(s0);
    t2 = t2 + 1;
    a0 = t2 < 0x4cu;
    ST8(v1, v0);
    t3 = t3 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08A125B0; }
    goto L_08A125D8;
L_08A125D8:;
    a0 = s1 + 84;
    a1 = s0 + 0;
    { u64 r_ = func_08A26C74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A125E4;
L_08A125E4:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
}

/* 08A125F8 */
rv_t func_08A125F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A125F8:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    { rv_t r_ = func_0886AE4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12610;
L_08A12610:;
    v0 = v0 + 88;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A12620 */
void func_08A12620(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A12620:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 168;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12640;
L_08A12640:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_08A11568(a0, a1, a2);
    goto L_08A12650;
L_08A12650:;
    sp = sp + 16;
    return;
}

/* 08A12664 */
rv_t func_08A12664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A12664:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+56);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A126A8; }
    goto L_08A12694;
L_08A12694:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A126A8:;
    v1 = LD32(v1);
    v0 = LD32(v1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A126B8;
L_08A126B8:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A12694; }
    goto L_08A126C0;
L_08A126C0:;
    v0 = LD32(s0);
    a1 = 1;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+56);
    v0 = v0 | 0x1;
    ST32(v1+56, v0);
    goto L_08A12694;
}

/* 08A126E0 */
rv_t func_08A126E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A126E0:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+56);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A12724; }
    goto L_08A12710;
L_08A12710:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A12724:;
    v1 = LD32(v1);
    v0 = LD32(v1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12734;
L_08A12734:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A12710; }
    goto L_08A1273C;
L_08A1273C:;
    v0 = LD32(s0);
    a1 = 1;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+56);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(v1+56, v0);
    goto L_08A12710;
}

/* 08A1275C */
rv_t func_08A1275C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1275C:;
    sp = sp - 16;
    a1 = LD32(a0);
    v1 = LD32(a1-12);
    v1 = a0 + v1;
    v0 = LD32(v1+56);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A12794; }
    goto L_08A12784;
L_08A12784:;
    v0 = LD32(v1+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A127B0; }
    goto L_08A12794;
L_08A12794:;
    a0 = LD32(a1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_088725B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A127A0;
L_08A127A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A127B0:;
    v0 = LD32(v1);
    v1 = LD32(v0+76);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A127C0;
L_08A127C0:;
    a0 = LD32(s0);
    a1 = 1;
    v0 = LD32(a0-12);
    v0 = s0 + v0;
    v1 = LD32(v0+28);
    a0 = v0 + 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(v0+28, v1);
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A127E4;
L_08A127E4:;
    v0 = 999;
    ST32(s0+4, v0);
    a1 = LD32(s0);
    goto L_08A12794;
}

/* 08A127F4 */
rv_t func_08A127F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A127F4:;
    sp = sp - 16;
    a1 = LD32(a0);
    v1 = LD32(a1-12);
    v1 = a0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A12830; }
    goto L_08A1281C;
L_08A1281C:;
    v0 = LD32(v1+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = 999;
    if (cnd_) { goto L_08A12840; }
    goto L_08A1282C;
L_08A1282C:;
    ST32(a0+4, v0);
    goto L_08A12830;
L_08A12830:;
    goto L_08A12834;
L_08A12834:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A12840:;
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1284C;
L_08A1284C:;
    v1 = LD32(s0);
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1285C;
L_08A1285C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A1287C; }
    goto L_08A12864;
L_08A12864:;
    v0 = LD32(s0);
    v1 = LD32(v0+52);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12874;
L_08A12874:;
    goto L_08A12834;
L_08A1287C:;
    v1 = LD32(s0);
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1288C;
L_08A1288C:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A12834; }
    goto L_08A12894;
L_08A12894:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A128B0;
L_08A128B0:;
    goto L_08A12834;
}

/* 08A128B8 */
rv_t func_08A128B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A128B8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 84;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A128D8;
L_08A128D8:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08A12924; }
    goto L_08A128E0;
L_08A128E0:;
    a2 = LD32(s0);
    v0 = LD32(a2-12);
    v0 = s0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A12928; }
    goto L_08A128FC;
L_08A128FC:;
    cnd_ = s1 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A12914; }
    goto L_08A12904;
L_08A12904:;
    v1 = LD_U16(s1+16);
    v0 = 0x8077;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A1293C; }
    goto L_08A12914;
L_08A12914:;
    a0 = LD32(a2-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08869FCC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12920;
L_08A12920:;
    a0 = v0 + 0;
    goto L_08A12924;
L_08A12924:;
    goto L_08A12928;
L_08A12928:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A1293C:;
    v0 = LD32(a2+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12948;
L_08A12948:;
    a0 = 1;
    goto L_08A12924;
}

/* 08A12950 */
u32 func_08A12950(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A12950:;
    sp = sp - 32;
    a2 = D_08C2C8C8 - (-14136);
    v1 = a2 - 14136;
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
    if (cnd_) { goto L_08A129DC; }
    goto L_08A12990;
L_08A12990:;
    a2 = LD32(a2-14136);
    a3 = a1 + 0;
    goto L_08A12998;
L_08A12998:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A129CC; }
    goto L_08A129B0;
L_08A129B0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A129E0; }
    goto L_08A129C0;
L_08A129C0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A129B0; }
    goto L_08A129CC;
L_08A129CC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A12998; }
    goto L_08A129DC;
L_08A129DC:;
    v0 = LD32(sp+8);
    goto L_08A129E0;
L_08A129E0:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A12A38; }
    goto L_08A129E8;
L_08A129E8:;
    s0 = LD32(v0);
    goto L_08A129EC;
L_08A129EC:;
    a1 = LD32(s0);
    v0 = LD32(a1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+28);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A12A1C; }
    goto L_08A12A08;
L_08A12A08:;
    v0 = LD32(a1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12A14;
L_08A12A14:;
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(s0); goto L_08A12A70; }
    goto L_08A12A1C;
L_08A12A1C:;
    a0 = sp + 0;
    a1 = 1;
    func_08AD00E0(a0, a1);
    goto L_08A12A28;
L_08A12A28:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A129EC; }
    goto L_08A12A34;
L_08A12A34:;
    a0 = LD32(sp);
    goto L_08A12A38;
L_08A12A38:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A12A60; }
    goto L_08A12A48;
L_08A12A48:;
    v0 = 999;
    goto L_08A12A4C;
L_08A12A4C:;
    sp = sp + 32;
    return v0;
L_08A12A60:;
    func_08AD0184(a0, t1, t2, t3);
    goto L_08A12A68;
L_08A12A68:;
    v0 = 999;
    goto L_08A12A4C;
L_08A12A70:;
    a1 = LD32(sp);
    v1 = LD32(v0-12);
    a0 = LD32(a1+8);
    v1 = s0 + v1;
    a0 = a0 - 1;
    s0 = LD32(v1+4);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08A12A98; }
    goto L_08A12A90;
L_08A12A90:;
    v0 = s0 + 0;
    goto L_08A12A4C;
L_08A12A98:;
    a0 = a1 + 0;
    func_08AD0184(a0, 0, 0, 0);
    goto L_08A12AA0;
L_08A12AA0:;
    v0 = s0 + 0;
    goto L_08A12A4C;
}

/* 08A12AA8 */
rv_t func_08A12AA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A12AA8:;
    v0 = D_08B14ED8 - (20184);
    v0 = v0 + 20184;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C8D8 - (-14120);
    a1 = s0 + 0;
    a0 = a0 - 14120;
    func_08AD0250(a0, a1, t1, t2, t3);
    goto L_08A12AD4;
L_08A12AD4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A12ADC;
L_08A12ADC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A12AEC */
rv_t func_08A12AEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A12AEC:;
    v0 = D_08B14ED8 - (20184);
    v0 = v0 + 20184;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C8D8 - (-14120);
    a1 = s0 + 0;
    a0 = a0 - 14120;
    func_08AD0250(a0, a1, t1, t2, t3);
    goto L_08A12B18;
L_08A12B18:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A12B20;
L_08A12B20:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A12B28;
L_08A12B28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A12B38 */
void func_08A12B38(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08A12B38:;
    sp = sp - 176;
    s3 = a0 + 0;
    s0 = a2 + 0;
    func_08873E94(a0, a1);
    goto L_08A12B5C;
L_08A12B5C:;
    v0 = D_08B14ED8 - (20184);
    v0 = v0 + 20184;
    ST32(s3, v0);
    a2 = sp + 64;
    a1 = 0 + 0;
    goto L_08A12B70;
L_08A12B70:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A12B70; }
    goto L_08A12B94;
L_08A12B94:;
    a1 = s3 + 28;
    a2 = 0 + 0;
    goto L_08A12B9C;
L_08A12B9C:;
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
    if (cnd_) { goto L_08A12B9C; }
    goto L_08A12BC4;
L_08A12BC4:;
    v0 = LD32(sp+64);
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    if (cnd_) { goto L_08A12D10; }
    goto L_08A12BD4;
L_08A12BD4:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08A12BDC;
L_08A12BDC:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0xcu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A12BDC; }
    goto L_08A12C00;
L_08A12C00:;
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
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
    {ST32(s3+(40),FBITS(v[96]));}
    {ST32(s3+(44),FBITS(v[97]));}
    {ST32(s3+(48),FBITS(v[98]));}
    {ST32(s3+(52),FBITS(v[100]));}
    {ST32(s3+(56),FBITS(v[101]));}
    {ST32(s3+(60),FBITS(v[102]));}
    {ST32(s3+(64),FBITS(v[104]));}
    {ST32(s3+(68),FBITS(v[105]));}
    {ST32(s3+(72),FBITS(v[106]));}
    goto L_08A12C90;
L_08A12C90:;
    s2 = D_08C2C8D8 - (-14120);
    s1 = s2 - 14120;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12CB0;
L_08A12CB0:;
    v1 = LD32(s2-14120);
    s0 = s0 << 2;
    a1 = LD32(s1+12);
    s0 = s0 + v1;
    a2 = LD32(s0);
    v1 = (u32)-32736;
    ST16(s3+8, v1);
    a1 = a1 + 1;
    a0 = s3 + 0;
    ST32(v0+4, a2);
    ST32(v0, s3);
    ST32(s0, v0);
    ST8(v0+8, 0);
    ST32(s1+12, a1);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A12CEC;
L_08A12CEC:;
    a0 = s3 + 0;
    { rv_t r_ = func_0887424C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A12CF4;
L_08A12CF4:;
    sp = sp + 176;
    return;
L_08A12D10:;
    {v1=FBITS(v[50]);}
    f0 = BITSF(v1);
    {v1=FBITS(v[54]);}
    f9 = BITSF(v1);
    {v1=FBITS(v[58]);}
    f7 = BITSF(v1);
    {v1=FBITS(v[48]);}
    f6 = BITSF(v1);
    {v1=FBITS(v[49]);}
    f4 = BITSF(v1);
    {v1=FBITS(v[52]);}
    f5 = BITSF(v1);
    {v1=FBITS(v[53]);}
    f2 = BITSF(v1);
    {v1=FBITS(v[56]);}
    f3 = BITSF(v1);
    v0 = s3 + 40;
    f8 = f0;
    ST32(v0+32, FBITS(f7));
    {v1=FBITS(v[57]);}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f8));
    ST32(sp+28, FBITS(f5));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f9));
    ST32(sp+40, FBITS(f3));
    ST32(sp+44, v1);
    ST32(sp+48, FBITS(f7));
    ST32(s3+40, FBITS(f6));
    ST32(v0+4, FBITS(f4));
    ST32(v0+8, FBITS(f8));
    ST32(v0+12, FBITS(f5));
    ST32(v0+16, FBITS(f2));
    ST32(v0+20, FBITS(f9));
    ST32(v0+24, FBITS(f3));
    ST32(v0+28, v1);
    goto L_08A12C90;
}

/* 08A12DB8 */
rv_t func_08A12DB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A12DB8:;
    v0 = 28;
    return (rv_t){ v0, v1, f0 };
}

/* 08A12DC0 */
rv_t func_08A12DC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr118 = v[118], vr125 = v[125];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A12DC0:;
    sp = sp - 64;
    v0 = 2;
    ST32(sp+48, v0);
    t0 = a0 + 0;
    a3 = sp + 48;
    a2 = 0 + 0;
    goto L_08A12DD8;
L_08A12DD8:;
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
    if (cnd_) { goto L_08A12DD8; }
    goto L_08A12E00;
L_08A12E00:;
    v0 = t0 + 28;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(t0+28));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f0));
    a3 = sp + 0;
    a2 = 0 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    goto L_08A12E24;
L_08A12E24:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0xcu;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08A12E24; }
    goto L_08A12E4C;
L_08A12E4C:;
    {v[112]=BITSF(LD32(t0+(40)));}
    {v[113]=BITSF(LD32(t0+(44)));}
    {v[114]=BITSF(LD32(t0+(48)));}
    {v[116]=BITSF(LD32(t0+(52)));}
    {v[117]=BITSF(LD32(t0+(56)));}
    {vr118=BITSF(LD32(t0+(60)));}
    {v[120]=BITSF(LD32(t0+(64)));}
    {v[121]=BITSF(LD32(t0+(68)));}
    {v[122]=BITSF(LD32(t0+(72)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A130CC; }
    goto L_08A12E88;
L_08A12E88:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A1300C; }
    goto L_08A12E98;
L_08A12E98:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A12F30; }
    goto L_08A12EC0;
L_08A12EC0:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
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
    if (cnd_) { goto L_08A12F0C; }
    goto L_08A12EFC;
L_08A12EFC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A12F0C;
L_08A12F0C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A12F50; }
    goto L_08A12F1C;
L_08A12F1C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A12F50; }
    goto L_08A12F2C;
L_08A12F2C:;
    goto L_08A12F30;
L_08A12F30:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A12F50; }
    goto L_08A12F44;
L_08A12F44:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A12F50;
L_08A12F50:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A12FE0; }
    goto L_08A12F70;
L_08A12F70:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
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
    if (cnd_) { goto L_08A12FBC; }
    goto L_08A12FAC;
L_08A12FAC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A12FBC;
L_08A12FBC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A13000; }
    goto L_08A12FCC;
L_08A12FCC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A13000; }
    goto L_08A12FDC;
L_08A12FDC:;
    goto L_08A12FE0;
L_08A12FE0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A13000; }
    goto L_08A12FF4;
L_08A12FF4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A13000;
L_08A13000:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_08A13184; }
    goto L_08A13008;
L_08A13008:;
    goto L_08A1300C;
L_08A1300C:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A130A0; }
    goto L_08A13030;
L_08A13030:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
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
    if (cnd_) { goto L_08A1307C; }
    goto L_08A1306C;
L_08A1306C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A1307C;
L_08A1307C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A130C0; }
    goto L_08A1308C;
L_08A1308C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A130C0; }
    goto L_08A1309C;
L_08A1309C:;
    goto L_08A130A0;
L_08A130A0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A130C0; }
    goto L_08A130B4;
L_08A130B4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A130C0;
L_08A130C0:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_08A13184; }
    goto L_08A130C8;
L_08A130C8:;
    goto L_08A130CC;
L_08A130CC:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08A13160; }
    goto L_08A130F0;
L_08A130F0:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);vr70=d0;}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
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
    if (cnd_) { goto L_08A1313C; }
    goto L_08A1312C;
L_08A1312C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08A1313C;
L_08A1313C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A13180; }
    goto L_08A1314C;
L_08A1314C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08A13180; }
    goto L_08A1315C;
L_08A1315C:;
    goto L_08A13160;
L_08A13160:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08A13180; }
    goto L_08A13174;
L_08A13174:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08A13180;
L_08A13180:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_08A13184;
L_08A13184:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=v[124];vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(16),FBITS(vr96));}
    {ST32(sp+(20),FBITS(vr97));}
    {ST32(sp+(24),FBITS(vr98));}
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+24));
    a3 = sp + 32;
    ST32(sp+32, FBITS(f0));
    a2 = 0 + 0;
    f0 = BITSF(LD32(sp+20));
    ST32(sp+40, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    goto L_08A131B4;
L_08A131B4:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0xcu;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08A131B4; }
    goto L_08A131DC;
L_08A131DC:;
    sp = sp + 64;
    { v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[118]=vr118;v[125]=vr125;return (rv_t){ v0, v1, f0 }; }
    v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[118]=vr118;v[125]=vr125;
}

/* 08A131E4 */
rv_t func_08A131E4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A131E4:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A13310; }
    goto L_08A1321C;
L_08A1321C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF7CC - (-2100);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2100));
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
    t0 = D_08C2C898 - (-14184);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C8A8 - (-14168);
    a3 = D_08C2C8B8 - (-14152);
    s3 = D_08C2C8C8 - (-14136);
    v1 = t0 - 14184;
    a1 = v0 - 14168;
    a2 = a3 - 14152;
    f1 = f1 * f3;
    s0 = s3 - 14136;
    ST32(v0-14168, FBITS(f5));
    v0 = 32;
    a0 = 128;
    ST32(v1+4, FBITS(f4));
    ST32(v1+8, FBITS(f5));
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(s0+4, v0);
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(t0-14184, FBITS(f1));
    ST32(a3-14152, FBITS(f2));
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A132D4;
L_08A132D4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-14136, v0);
    if (cnd_) { goto L_08A13300; }
    goto L_08A132E4;
L_08A132E4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A132EC;
L_08A132EC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A132EC; }
    goto L_08A13300;
L_08A13300:;
    v0 = s3 - 14136;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    v1 = s2 < 0x1u;
    goto L_08A13310;
L_08A13310:;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s2 = D_08C2C8D8 - (-14120);
    if (cnd_) { goto L_08A133A0; }
    goto L_08A13320;
L_08A13320:;
    s0 = s4 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s1 < 0x1u;
    if (cnd_) { goto L_08A13348; }
    goto L_08A13334;
L_08A13334:;
    v0 = D_08C2C8D8 - (-14120);
    a0 = LD32(v0-14120);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A13390; }
    goto L_08A13344;
L_08A13344:;
    v0 = s1 < 0x1u;
    goto L_08A13348;
L_08A13348:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A13364; }
    goto L_08A13354;
L_08A13354:;
    v0 = D_08C2C8C8 - (-14136);
    a0 = LD32(v0-14136);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A13380; }
    goto L_08A13364;
L_08A13364:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A13380:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13388;
L_08A13388:;
    goto L_08A13364;
L_08A13390:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13398;
L_08A13398:;
    v0 = s1 < 0x1u;
    goto L_08A13348;
L_08A133A0:;
    s0 = s2 - 14120;
    v0 = 32;
    ST32(s0+4, v0);
    a0 = 128;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A133B4;
L_08A133B4:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s2-14120, v0);
    if (cnd_) { goto L_08A133E0; }
    goto L_08A133C4;
L_08A133C4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A133CC;
L_08A133CC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A133CC; }
    goto L_08A133E0;
L_08A133E0:;
    v0 = s2 - 14120;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A13320;
}

/* 08A133F0 */
rv_t func_08A133F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A133F0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A131E4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13404;
L_08A13404:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13410 */
rv_t func_08A13410(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13410:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A131E4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13424;
L_08A13424:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13430 */
void func_08A13430(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A13430:;
    sp = sp - 96;
    s2 = D_08C2C8E8 - (-14104);
    s6 = 2;
    s4 = a0 + 0;
    s5 = s4 + 32;
    s3 = a2 + 0;
    s1 = s2 - 14104;
    func_08873E94(a0, a1);
    goto L_08A13470;
L_08A13470:;
    v0 = D_08B15050 - (20560);
    v1 = LD32(s1+4);
    v0 = v0 + 20560;
    s0 = LD32(s4+4);
    ST32(s4, v0);
    v1 = v1 - 1;
    a0 = 12;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13494;
L_08A13494:;
    v1 = LD32(s2-14104);
    s0 = s0 << 2;
    a2 = LD32(s1+12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v1 = (u32)-32726;
    a2 = a2 + 1;
    ST32(v0+4, a1);
    a0 = s3 + 0;
    a1 = sp + 48;
    ST16(s4+8, v1);
    ST32(s0, v0);
    ST32(v0, s4);
    ST8(v0+8, 0);
    ST32(s1+12, a2);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A134D4;
L_08A134D4:;
    a1 = s4 + 28;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A134E0;
L_08A134E0:;
    a1 = s5 + 0;
    a0 = s3 + 0;
    s6 = s6 - 1;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A134F0;
L_08A134F0:;
    cnd_ = (s32)s6 >= 0;
    s5 = s5 + 4;
    if (cnd_) { goto L_08A134E0; }
    goto L_08A134F8;
L_08A134F8:;
    a1 = s4 + 44;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13504;
L_08A13504:;
    a1 = s4 + 48;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13510;
L_08A13510:;
    a1 = s4 + 52;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1351C;
L_08A1351C:;
    a1 = s4 + 56;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13528;
L_08A13528:;
    s0 = s4 + 60;
    s1 = 3;
    goto L_08A13530;
L_08A13530:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13540;
L_08A13540:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A13530; }
    goto L_08A13548;
L_08A13548:;
    a1 = s4 + 76;
    a0 = s3 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13554;
L_08A13554:;
    a1 = s4 + 88;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13560;
L_08A13560:;
    a1 = s4 + 92;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1356C;
L_08A1356C:;
    v1 = LD32(s4+28);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(s4+92); goto L_08A135F8; }
    goto L_08A1357C;
L_08A1357C:;
    v0 = LD32(s4+92);
    ST32(s4+96, 0);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A135BC; }
    goto L_08A1358C;
L_08A1358C:;
    s1 = sp + 32;
    a0 = s3 + 0;
    goto L_08A13594;
L_08A13594:;
    a1 = sp + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1359C;
L_08A1359C:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A135A8;
L_08A135A8:;
    v1 = LD32(s4+92);
    s0 = s0 + 1;
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A13594; }
    goto L_08A135BC;
L_08A135BC:;
    a0 = s4 + 0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A135C4;
L_08A135C4:;
    a0 = s4 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A135D0;
L_08A135D0:;
    sp = sp + 96;
    return;
L_08A135F8:;
    a0 = s0 << 2;
    a0 = a0 + s0;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13608;
L_08A13608:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_08A13624; }
    goto L_08A13614;
L_08A13614:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08A1361C;
L_08A1361C:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08A1361C; }
    goto L_08A13624;
L_08A13624:;
    v0 = LD32(s4+92);
    ST32(s4+96, a0);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A135BC; }
    goto L_08A13634;
L_08A13634:;
    s0 = 0 + 0;
    goto L_08A13638;
L_08A13638:;
    a1 = LD32(s4+96);
    a0 = s3 + 0;
    s1 = s1 + 1;
    a1 = a1 + s0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1364C;
L_08A1364C:;
    a1 = LD32(s4+96);
    a0 = s3 + 0;
    a1 = a1 + s0;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13660;
L_08A13660:;
    v1 = LD32(s4+92);
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    s0 = s0 + 40;
    if (cnd_) { goto L_08A13638; }
    goto L_08A13670;
L_08A13670:;
    goto L_08A135BC;
}

/* 08A13678 */
rv_t func_08A13678(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13678:;
    v0 = D_08B15050 - (20560);
    v0 = v0 + 20560;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C8E8 - (-14104);
    a0 = a0 - 14104;
    a1 = s0 + 0;
    func_08AD0308(a0, a1, t1, t2, t3);
    goto L_08A136A4;
L_08A136A4:;
    v1 = LD32(s0+96);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A136C8; }
    goto L_08A136B0;
L_08A136B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A136B8;
L_08A136B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A136C8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A136D0;
L_08A136D0:;
    goto L_08A136B0;
}

/* 08A136D8 */
rv_t func_08A136D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A136D8:;
    v0 = D_08B15050 - (20560);
    v0 = v0 + 20560;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C8E8 - (-14104);
    a0 = a0 - 14104;
    a1 = s0 + 0;
    func_08AD0308(a0, a1, t1, t2, t3);
    goto L_08A13704;
L_08A13704:;
    v1 = LD32(s0+96);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A13730; }
    goto L_08A13710;
L_08A13710:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13718;
L_08A13718:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13720;
L_08A13720:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A13730:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13738;
L_08A13738:;
    goto L_08A13710;
}

/* 08A13740 */
void func_08A13740(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13740:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 100;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13760;
L_08A13760:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_08A13430(a0, a1, a2);
    goto L_08A13770;
L_08A13770:;
    sp = sp + 16;
    return;
}

/* 08A13784 */
rv_t func_08A13784(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A13784:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A1378C */
rv_t func_08A1378C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A1378C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13794 */
rv_t func_08A13794(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A13794:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s2 + 0;
    s3 = 2;
    s0 = s1 + 32;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A137C8;
L_08A137C8:;
    a0 = s2 + 0;
    a1 = LD32(s1+28);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A137D4;
L_08A137D4:;
    f12 = BITSF(LD32(s0));
    a0 = s2 + 0;
    s3 = s3 - 1;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A137E4;
L_08A137E4:;
    cnd_ = (s32)s3 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A137D4; }
    goto L_08A137EC;
L_08A137EC:;
    f12 = BITSF(LD32(s1+44));
    a0 = s2 + 0;
    s0 = s1 + 60;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A137FC;
L_08A137FC:;
    f12 = BITSF(LD32(s1+48));
    a0 = s2 + 0;
    s3 = 3;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1380C;
L_08A1380C:;
    f12 = BITSF(LD32(s1+52));
    a0 = s2 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13818;
L_08A13818:;
    f12 = BITSF(LD32(s1+56));
    a0 = s2 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13824;
L_08A13824:;
    f12 = BITSF(LD32(s0));
    a0 = s2 + 0;
    s3 = s3 - 1;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13834;
L_08A13834:;
    cnd_ = (s32)s3 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A13824; }
    goto L_08A1383C;
L_08A1383C:;
    a1 = s1 + 76;
    a0 = s2 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13848;
L_08A13848:;
    f12 = BITSF(LD32(s1+88));
    a0 = s2 + 0;
    s3 = 0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13858;
L_08A13858:;
    a1 = LD32(s1+92);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13864;
L_08A13864:;
    v1 = LD32(s1+92);
    cnd_ = (s32)v1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A138A8; }
    goto L_08A13870;
L_08A13870:;
    a1 = LD32(s1+96);
    a0 = s2 + 0;
    s3 = s3 + 1;
    a1 = a1 + s0;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13884;
L_08A13884:;
    a1 = LD32(s1+96);
    a0 = s2 + 0;
    a1 = a1 + s0;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DCBC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13898;
L_08A13898:;
    v1 = LD32(s1+92);
    v1 = (s32)s3 < (s32)v1;
    cnd_ = v1 != 0;
    s0 = s0 + 40;
    if (cnd_) { goto L_08A13870; }
    goto L_08A138A8;
L_08A138A8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A138C4 */
rv_t func_08A138C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A138C4:;
    sp = sp - 16;
    a3 = 1;
    t0 = a0 + 0;
    v0 = LD_U16(a1+16);
    v1 = v0 ^ 0x3;
    v0 = v0 - 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v1 = v1 < 0x1u;
    if (cnd_) { goto L_08A13918; }
    goto L_08A138EC;
L_08A138EC:;
    v0 = LD32(a0+28);
    v0 = (v0 & ~(0x1u << 3)) | ((v1 & 0x1) << 3);
    a2 = LD32(a0+4);
    ST32(t0+28, v0);
    a0 = a1 + 0;
    a1 = 2;
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13908;
L_08A13908:;
    v0 = 1;
    goto L_08A13910;
L_08A13910:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A13918:;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13920;
L_08A13920:;
    goto L_08A13910;
}

/* 08A13928 */
rv_t func_08A13928(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A13928:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A139A8; }
    goto L_08A1395C;
L_08A1395C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A13980; }
    goto L_08A13970;
L_08A13970:;
    v0 = D_08C2C8E8 - (-14104);
    a0 = LD32(v0-14104);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A13998; }
    goto L_08A13980;
L_08A13980:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A13998:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A139A0;
L_08A139A0:;
    goto L_08A13980;
L_08A139A8:;
    s3 = D_08C2C8E8 - (-14104);
    s0 = s3 - 14104;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A139C0;
L_08A139C0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-14104, v0);
    if (cnd_) { goto L_08A139EC; }
    goto L_08A139D0;
L_08A139D0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A139D8;
L_08A139D8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A139D8; }
    goto L_08A139EC;
L_08A139EC:;
    v0 = s3 - 14104;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A1395C;
}

/* 08A139FC */
rv_t func_08A139FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A139FC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A13928(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13A10;
L_08A13A10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13A1C */
rv_t func_08A13A1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13A1C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A13928(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13A30;
L_08A13A30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13A3C */
void func_08A13A3C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A13A3C:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s1 = (s32)s1 < 5;
    s0 = a0 + 0;
    func_08871C84(a0, a1, a2);
    goto L_08A13A6C;
L_08A13A6C:;
    v0 = D_08B150A0 - (20640);
    v0 = v0 + 20640;
    ST32(s0, v0);
    s0 = s0 + 52;
    a1 = s2 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    func_08A26584(a0, a1, a2);
    goto L_08A13A8C;
L_08A13A8C:;
    a0 = s0 + 0;
    cnd_ = s1 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A13AB4; }
    goto L_08A13A98;
L_08A13A98:;
    goto L_08A13A9C;
L_08A13A9C:;
    sp = sp + 32;
    return;
L_08A13AB4:;
    func_08A26CF0(a0, a1);
    goto L_08A13ABC;
L_08A13ABC:;
    goto L_08A13A9C;
}

/* 08A13AC4 */
rv_t func_08A13AC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13AC4:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 5;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13AE8;
L_08A13AE8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s0 = s0 + 52;
    { rv_t r_ = func_088721D0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13AF8;
L_08A13AF8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A26BD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13B04;
L_08A13B04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13B18 */
rv_t func_08A13B18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A13B18:;
    sp = sp - 32;
    v0 = 5;
    a2 = sp + 0;
    ST32(sp, v0);
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08A13B40;
L_08A13B40:;
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
    if (cnd_) { goto L_08A13B40; }
    goto L_08A13B68;
L_08A13B68:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088720C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13B74;
L_08A13B74:;
    a0 = s1 + 52;
    a1 = s0 + 0;
    { u64 r_ = func_08A26C74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13B80;
L_08A13B80:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13B94 */
rv_t func_08A13B94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13B94:;
    sp = sp - 16;
    { rv_t r_ = func_088720A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13BA4;
L_08A13BA4:;
    v0 = v0 + 12;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13BB4 */
void func_08A13BB4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A13BB4:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a0 = 0 + 0;
    ST32(sp, 0);
    a1 = LD32(a1);
    goto L_08A13BDC;
L_08A13BDC:;
    v0 = a1 + a0;
    v1 = LD_U8(v0);
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST8(a2, v1);
    cnd_ = v0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A13BDC; }
    goto L_08A13BF8;
L_08A13BF8:;
    v0 = LD32(sp);
    a3 = sp + 0;
    v0 = (s32)v0 < 5;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A13C30; }
    goto L_08A13C0C;
L_08A13C0C:;
    v0 = LD_U8(a1);
    a2 = a2 + 1;
    v1 = a1 + 1;
    a0 = a2 < 0x4u;
    ST8(a3, v0);
    a1 = v1 + 0;
    a3 = a3 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v1);
    if (cnd_) { goto L_08A13C0C; }
    goto L_08A13C30;
L_08A13C30:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13C38;
L_08A13C38:;
    a3 = LD32(sp);
    a1 = s1 + 0;
    a2 = s0 + 0;
    a0 = v0 + 0;
    func_08A13A3C(a0, a1, a2, a3);
    goto L_08A13C4C;
L_08A13C4C:;
    sp = sp + 32;
    return;
}

/* 08A13C60 */
rv_t func_08A13C60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13C60:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 52;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13C80;
L_08A13C80:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A13CA8; }
    goto L_08A13C90;
L_08A13C90:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A13CA8:;
    { rv_t r_ = func_08872230(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13CB0;
L_08A13CB0:;
    v1 = v0 + 0;
    goto L_08A13C90;
}

/* 08A13CB8 */
rv_t func_08A13CB8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A13CB8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2C8F8 - (-14088);
    t1 = D_08C2C908 - (-14072);
    t2 = D_08C2C918 - (-14056);
    a1 = a1 & a0;
    v1 = t0 - 14088;
    a2 = t1 - 14072;
    cnd_ = a1 == 0;
    a3 = t2 - 14056;
    if (cnd_) { goto L_08A13D70; }
    goto L_08A13CE8;
L_08A13CE8:;
    v0 = D_08AEF7D0 - (-2096);
    f4 = BITSF(LD32(v0-2096));
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
    ST32(t0-14088, FBITS(f2));
    ST32(t1-14072, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-14056, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A13D70;
L_08A13D70:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13D78 */
rv_t func_08A13D78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13D78:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A13CB8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13D8C;
L_08A13D8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13D98 */
rv_t func_08A13D98(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A13D98:;
    sp = sp - 32;
    s0 = a0 + 52;
    s1 = a0 + 0;
    a0 = s0 + 0;
    s3 = D_08C2C958 - (-13992);
    func_08873BF8(a0);
    goto L_08A13DC4;
L_08A13DC4:;
    a1 = D_08B15160 - (20832);
    a1 = a1 + 20832;
    a0 = s1 + 0;
    a1 = a1 + 4;
    f0 = func_08874764(a0, a1);
    goto L_08A13DD8;
L_08A13DD8:;
    v0 = D_08B1511C - (20764);
    v0 = v0 + 20764;
    ST32(s1, v0);
    v0 = v0 + 44;
    a0 = s1 + 36;
    a1 = LD32(s0+4);
    ST32(s1+52, v0);
    s2 = s3 - 13992;
    func_08A25B58(a0, a1);
    goto L_08A13DFC;
L_08A13DFC:;
    f0 = BITSF(0);
    v1 = s1 + 4;
    v0 = (u32)-32728;
    ST16(s0+8, v0);
    v0 = 1;
    a0 = 12;
    ST32(v1+4, FBITS(f0));
    ST32(v1+20, FBITS(f0));
    ST32(v1+16, FBITS(f0));
    ST32(v1+12, FBITS(f0));
    ST32(v1+8, FBITS(f0));
    v1 = 999;
    a1 = LD32(s1);
    ST32(s1+4, FBITS(f0));
    ST8(s1+28, v0);
    ST32(s1+32, v1);
    v0 = LD32(a1-12);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13E58;
L_08A13E58:;
    a0 = LD32(s3-13992);
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
    return (rv_t){ v0, v1, f0 };
}

/* 08A13EA0 */
rv_t func_08A13EA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13EA0:;
    v0 = D_08B1511C - (20764);
    v0 = v0 + 20764;
    v1 = v0 + 44;
    sp = sp - 16;
    ST32(a0+52, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C958 - (-13992);
    a1 = s0 + 0;
    a0 = a0 - 13992;
    func_08AD04BC(a0, a1, t1, t2, t3);
    goto L_08A13ED4;
L_08A13ED4:;
    a1 = D_08B15160 - (20832);
    a1 = a1 + 20832;
    a0 = s0 + 0;
    a1 = a1 + 4;
    s0 = s0 + 52;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08A13EEC;
L_08A13EEC:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13EF4;
L_08A13EF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13F04 */
rv_t func_08A13F04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13F04:;
    v0 = D_08B1511C - (20764);
    v0 = v0 + 20764;
    v1 = v0 + 44;
    sp = sp - 16;
    ST32(a0+52, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C958 - (-13992);
    a1 = s0 + 0;
    a0 = a0 - 13992;
    func_08AD04BC(a0, a1, t1, t2, t3);
    goto L_08A13F3C;
L_08A13F3C:;
    a1 = D_08B15160 - (20832);
    a1 = a1 + 20832;
    a1 = a1 + 4;
    s1 = s0 + 52;
    a0 = s0 + 0;
    func_08874844(a0, a1, 0, 0, 0);
    goto L_08A13F54;
L_08A13F54:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13F5C;
L_08A13F5C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A13F64;
L_08A13F64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13F78 */
rv_t func_08A13F78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13F78:;
    sp = sp - 16;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13F88;
L_08A13F88:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A13D98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13F90;
L_08A13F90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A13F9C */
rv_t func_08A13F9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A13F9C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 36;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B8C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13FBC;
L_08A13FBC:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A14000; }
    goto L_08A13FC4;
L_08A13FC4:;
    v1 = LD_U16(s1+16);
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 5;
    if (cnd_) { goto L_08A14080; }
    goto L_08A13FD4;
L_08A13FD4:;
    cnd_ = v0 == 0;
    v0 = 90;
    if (cnd_) { goto L_08A14024; }
    goto L_08A13FDC;
L_08A13FDC:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A14018; }
    goto L_08A13FE8;
L_08A13FE8:;
    v0 = LD32(s0);
    goto L_08A13FEC;
L_08A13FEC:;
    a1 = s1 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A13FFC;
L_08A13FFC:;
    v1 = v0 + 0;
    goto L_08A14000;
L_08A14000:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A14018:;
    v1 = 1;
    ST8(s0+28, v0);
    goto L_08A14000;
L_08A14024:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s0); goto L_08A13FEC; }
    goto L_08A1402C;
L_08A1402C:;
    a1 = LD32(s1+24);
    cnd_ = a1 == 0;
    if (cnd_) { v1 = 1; goto L_08A14000; }
    goto L_08A14038;
L_08A14038:;
    f0 = BITSF(LD32(a1));
    ST32(s0+4, FBITS(f0));
    f1 = BITSF(LD32(a1+4));
    ST32(s0+8, FBITS(f1));
    f0 = BITSF(LD32(a1+8));
    ST32(s0+12, FBITS(f0));
    f1 = BITSF(LD32(a1+12));
    ST32(s0+16, FBITS(f1));
    f0 = BITSF(LD32(a1+16));
    ST32(s0+20, FBITS(f0));
    f1 = BITSF(LD32(a1+20));
    ST32(s0+24, FBITS(f1));
    v0 = LD_U8(a1+24);
    ST8(s0+28, v0);
    v1 = LD32(a1+28);
    ST32(s0+32, v1);
    v1 = 1;
    goto L_08A14000;
L_08A14080:;
    v1 = 1;
    ST8(s0+28, 0);
    goto L_08A14000;
}

/* 08A1408C */
rv_t func_08A1408C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1408C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A141B0; }
    goto L_08A140C0;
L_08A140C0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF7D4 - (-2092);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2092));
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
    t0 = D_08C2C928 - (-14040);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C938 - (-14024);
    a3 = D_08C2C948 - (-14008);
    v1 = t0 - 14040;
    a1 = v0 - 14024;
    a2 = a3 - 14008;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2C958 - (-13992);
    s0 = s3 - 13992;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-14024, FBITS(f5));
    v0 = 4;
    ST32(t0-14040, FBITS(f1));
    ST32(a3-14008, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14178;
L_08A14178:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-13992, v0);
    if (cnd_) { goto L_08A141A4; }
    goto L_08A14188;
L_08A14188:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A14190;
L_08A14190:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A14190; }
    goto L_08A141A4;
L_08A141A4:;
    v0 = s3 - 13992;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A141B0;
L_08A141B0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A141D4; }
    goto L_08A141C4;
L_08A141C4:;
    v0 = D_08C2C958 - (-13992);
    a0 = LD32(v0-13992);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A141EC; }
    goto L_08A141D4;
L_08A141D4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A141EC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A141F4;
L_08A141F4:;
    goto L_08A141D4;
}

/* 08A141FC */
rv_t func_08A141FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A141FC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A1408C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14210;
L_08A14210:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A1421C */
rv_t func_08A1421C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1421C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A1408C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14230;
L_08A14230:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A1423C */
void func_08A1423C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1423C:;
    sp = sp - 32;
    s3 = D_08C2C998 - (-13928);
    s2 = s3 - 13928;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08A14264;
L_08A14264:;
    v0 = D_08B151C8 - (20936);
    f0 = BITSF(0);
    v0 = v0 + 20936;
    ST32(s1, v0);
    v0 = 1;
    v1 = s1 + 28;
    ST8(s1+52, v0);
    v0 = (u32)-32735;
    a0 = s1 + 0;
    ST16(s1+8, v0);
    ST32(s1+32, 0);
    ST32(s1+36, 0);
    ST32(s1+40, 0);
    ST32(s1+44, 0);
    ST32(s1+48, 0);
    ST8(s1+53, 0);
    ST32(s1+28, FBITS(f0));
    ST32(v1+4, FBITS(f0));
    ST32(v1+20, FBITS(f0));
    ST32(v1+16, FBITS(f0));
    ST32(v1+12, FBITS(f0));
    ST32(v1+8, FBITS(f0));
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A142C0;
L_08A142C0:;
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A142D8;
L_08A142D8:;
    a0 = LD32(s3-13928);
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

/* 08A14320 */
rv_t func_08A14320(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14320:;
    v0 = D_08B151C8 - (20936);
    v0 = v0 + 20936;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C998 - (-13928);
    a1 = s0 + 0;
    a0 = a0 - 13928;
    func_08AD0588(a0, a1, t1, t2, t3);
    goto L_08A1434C;
L_08A1434C:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14354;
L_08A14354:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14364 */
rv_t func_08A14364(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14364:;
    v0 = D_08B151C8 - (20936);
    v0 = v0 + 20936;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C998 - (-13928);
    a1 = s0 + 0;
    a0 = a0 - 13928;
    func_08AD0588(a0, a1, t1, t2, t3);
    goto L_08A14390;
L_08A14390:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14398;
L_08A14398:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A143A0;
L_08A143A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A143B0 */
u32 func_08A143B0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A143B0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A143CC;
L_08A143CC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08A1423C(a0, a1);
    goto L_08A143DC;
L_08A143DC:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A143F4 */
rv_t func_08A143F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A143F4:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14418;
L_08A14418:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14424;
L_08A14424:;
    a1 = s0 + 28;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14430;
L_08A14430:;
    a1 = LD_U8(s0+52);
    v1 = LD_U8(s0+53);
    a0 = s1 + 0;
    a1 = 0 < a1;
    v0 = a1 | 0x2;
    if (v1 != 0) a1 = v0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1444C;
L_08A1444C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14460 */
rv_t func_08A14460(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A14460:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    s2 = 1;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14490;
L_08A14490:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1449C;
L_08A1449C:;
    v0 = LD32(sp);
    cnd_ = v0 == s2;
    if (cnd_) { a1 = s0 + 28; goto L_08A145A4; }
    goto L_08A144A8;
L_08A144A8:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s0 + 28; goto L_08A14574; }
    goto L_08A144B0;
L_08A144B0:;
    v0 = D_08AEF7D8 - (-2088);
    goto L_08A144B4;
L_08A144B4:;
    f6 = BITSF(LD32(v0-2088));
    f1 = BITSF(LD32(s0+28));
    v0 = D_08AEF7DC - (-2084);
    f2 = BITSF(FBITS(f6) ^ 0x80000000u);
    f5 = BITSF(LD32(v0-2084));
    f3 = f6;
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    f4 = BITSF(FBITS(f5) ^ 0x80000000u);
    if (cnd_) { goto L_08A144E0; }
    goto L_08A144DC;
L_08A144DC:;
    f1 = f2;
    goto L_08A144E0;
L_08A144E0:;
    f0 = BITSF(LD32(s0+36));
    fcc = FCMP(f4, f0, 14);
    cnd_ = fcc;
    ST32(s0+28, FBITS(f1));
    if (cnd_) { goto L_08A144F8; }
    goto L_08A144F4;
L_08A144F4:;
    f0 = f4;
    goto L_08A144F8;
L_08A144F8:;
    f1 = BITSF(LD32(s0+44));
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    ST32(s0+36, FBITS(f0));
    if (cnd_) { goto L_08A14510; }
    goto L_08A1450C;
L_08A1450C:;
    f1 = f2;
    goto L_08A14510;
L_08A14510:;
    f0 = BITSF(LD32(s0+32));
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    ST32(s0+44, FBITS(f1));
    if (cnd_) { goto L_08A14528; }
    goto L_08A14524;
L_08A14524:;
    f0 = f3;
    goto L_08A14528;
L_08A14528:;
    f1 = BITSF(LD32(s0+40));
    fcc = FCMP(f1, f5, 14);
    cnd_ = fcc;
    ST32(s0+32, FBITS(f0));
    if (cnd_) { goto L_08A14540; }
    goto L_08A1453C;
L_08A1453C:;
    f1 = f5;
    goto L_08A14540;
L_08A14540:;
    f0 = BITSF(LD32(s0+48));
    fcc = FCMP(f0, f6, 14);
    cnd_ = fcc;
    ST32(s0+40, FBITS(f1));
    if (cnd_) { goto L_08A14558; }
    goto L_08A14554;
L_08A14554:;
    f0 = f6;
    goto L_08A14558;
L_08A14558:;
    ST32(s0+48, FBITS(f0));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A14574:;
    a0 = s1 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1457C;
L_08A1457C:;
    a0 = s1 + 0;
    a1 = sp + 8;
    ST32(sp+8, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1458C;
L_08A1458C:;
    v0 = LD32(sp+8);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST8(s0+52, 0);
    if (cnd_) { goto L_08A144B0; }
    goto L_08A1459C;
L_08A1459C:;
    ST8(s0+52, s2);
    goto L_08A144B0;
L_08A145A4:;
    a0 = s1 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A145AC;
L_08A145AC:;
    a0 = s1 + 0;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A145BC;
L_08A145BC:;
    v1 = LD32(sp+4);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    ST8(s0+52, 0);
    if (cnd_) { goto L_08A145D0; }
    goto L_08A145CC;
L_08A145CC:;
    ST8(s0+52, s2);
    goto L_08A145D0;
L_08A145D0:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+53, s2); goto L_08A144B0; }
    goto L_08A145DC;
L_08A145DC:;
    v0 = D_08AEF7D8 - (-2088);
    goto L_08A144B4;
}

/* 08A145E4 */
u64 func_08A145E4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A145E4:;
    sp = sp - 32;
    a2 = D_08C2C998 - (-13928);
    v0 = a2 - 13928;
    s1 = a0 & 0xff;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A14670; }
    goto L_08A14624;
L_08A14624:;
    a2 = LD32(a2-13928);
    a3 = a1 + 0;
    goto L_08A1462C;
L_08A1462C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A14660; }
    goto L_08A14644;
L_08A14644:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A14674; }
    goto L_08A14654;
L_08A14654:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A14644; }
    goto L_08A14660;
L_08A14660:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A1462C; }
    goto L_08A14670;
L_08A14670:;
    v0 = LD32(sp+8);
    goto L_08A14674;
L_08A14674:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A146A8; }
    goto L_08A1467C;
L_08A1467C:;
    s0 = LD32(v0);
    goto L_08A14680;
L_08A14680:;
    a0 = sp + 0;
    v0 = LD_U8(s0+53);
    cnd_ = v0 == s1;
    a1 = 1;
    if (cnd_) { goto L_08A146E0; }
    goto L_08A14690;
L_08A14690:;
    { u64 r_ = func_08ACC960(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14698;
L_08A14698:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A14680; }
    goto L_08A146A4;
L_08A146A4:;
    a0 = LD32(sp);
    goto L_08A146A8;
L_08A146A8:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A146D0; }
    goto L_08A146B8;
L_08A146B8:;
    v0 = 0 + 0;
    goto L_08A146BC;
L_08A146BC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A146D0:;
    { u64 r_ = func_08ACC9F8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A146D8;
L_08A146D8:;
    v0 = 0 + 0;
    goto L_08A146BC;
L_08A146E0:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A146FC; }
    goto L_08A146F4;
L_08A146F4:;
    v0 = s0 + 0;
    goto L_08A146BC;
L_08A146FC:;
    { u64 r_ = func_08ACC9F8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14704;
L_08A14704:;
    v0 = s0 + 0;
    goto L_08A146BC;
}

/* 08A1470C */
rv_t func_08A1470C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1470C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A14830; }
    goto L_08A14740;
L_08A14740:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF7E0 - (-2080);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2080));
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
    t0 = D_08C2C968 - (-13976);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C978 - (-13960);
    a3 = D_08C2C988 - (-13944);
    v1 = t0 - 13976;
    a1 = v0 - 13960;
    a2 = a3 - 13944;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2C998 - (-13928);
    s0 = s3 - 13928;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-13960, FBITS(f5));
    v0 = 4;
    ST32(t0-13976, FBITS(f1));
    ST32(a3-13944, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A147F8;
L_08A147F8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-13928, v0);
    if (cnd_) { goto L_08A14824; }
    goto L_08A14808;
L_08A14808:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A14810;
L_08A14810:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A14810; }
    goto L_08A14824;
L_08A14824:;
    v0 = s3 - 13928;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A14830;
L_08A14830:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A14854; }
    goto L_08A14844;
L_08A14844:;
    v0 = D_08C2C998 - (-13928);
    a0 = LD32(v0-13928);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A1486C; }
    goto L_08A14854;
L_08A14854:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A1486C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14874;
L_08A14874:;
    goto L_08A14854;
}

/* 08A1487C */
rv_t func_08A1487C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1487C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A1470C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14890;
L_08A14890:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A1489C */
rv_t func_08A1489C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1489C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A1470C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A148B0;
L_08A148B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A148BC */
void func_08A148BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A148BC:;
    sp = sp - 32;
    s3 = D_08C2C9A8 - (-13912);
    s2 = s3 - 13912;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08A148E4;
L_08A148E4:;
    f0 = BITSF(0);
    v0 = D_08B15218 - (21016);
    v0 = v0 + 21016;
    a1 = s1 + 28;
    ST32(s1, v0);
    v0 = (u32)-32727;
    a0 = 12;
    ST16(s1+8, v0);
    v0 = 1;
    ST32(a1+4, FBITS(f0));
    ST32(a1+20, FBITS(f0));
    ST32(a1+16, FBITS(f0));
    ST32(a1+12, FBITS(f0));
    ST32(a1+8, FBITS(f0));
    ST32(s1+28, FBITS(f0));
    v1 = LD32(s2+4);
    s0 = LD32(s1+4);
    ST8(s1+52, v0);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14938;
L_08A14938:;
    a0 = LD32(s3-13912);
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
    goto L_08A1496C;
L_08A1496C:;
    sp = sp + 32;
    return;
}

/* 08A14988 */
rv_t func_08A14988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14988:;
    v0 = D_08B15218 - (21016);
    v0 = v0 + 21016;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C9A8 - (-13912);
    a1 = s0 + 0;
    a0 = a0 - 13912;
    func_08AD0640(a0, a1, t1, t2, t3);
    goto L_08A149B4;
L_08A149B4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A149BC;
L_08A149BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A149CC */
rv_t func_08A149CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A149CC:;
    v0 = D_08B15218 - (21016);
    v0 = v0 + 21016;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C9A8 - (-13912);
    a1 = s0 + 0;
    a0 = a0 - 13912;
    func_08AD0640(a0, a1, t1, t2, t3);
    goto L_08A149F8;
L_08A149F8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14A00;
L_08A14A00:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14A08;
L_08A14A08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14A18 */
u32 func_08A14A18(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14A18:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14A34;
L_08A14A34:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08A148BC(a0, a1);
    goto L_08A14A44;
L_08A14A44:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A14A5C */
rv_t func_08A14A5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14A5C:;
    sp = sp - 16;
    v0 = 3;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a3 = 1;
    if (cnd_) { goto L_08A14A9C; }
    goto L_08A14A74;
L_08A14A74:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { ST8(a0+52, 0); goto L_08A14A8C; }
    goto L_08A14A80;
L_08A14A80:;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14A88;
L_08A14A88:;
    a3 = v0 + 0;
    goto L_08A14A8C;
L_08A14A8C:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A14A9C:;
    v0 = 1;
    ST8(a0+52, v0);
    goto L_08A14A8C;
}

/* 08A14AA8 */
rv_t func_08A14AA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14AA8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14ACC;
L_08A14ACC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14AD8;
L_08A14AD8:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14AE4;
L_08A14AE4:;
    a1 = LD_U8(s1+52);
    a0 = s0 + 0;
    a1 = 0 < a1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14AF4;
L_08A14AF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14B08 */
rv_t func_08A14B08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A14B08:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14B30;
L_08A14B30:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14B3C;
L_08A14B3C:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A14B48;
L_08A14B48:;
    a0 = s0 + 0;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14B58;
L_08A14B58:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST8(s1+52, 0);
    if (cnd_) { goto L_08A14B70; }
    goto L_08A14B68;
L_08A14B68:;
    v0 = 1;
    ST8(s1+52, v0);
    goto L_08A14B70;
L_08A14B70:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14B84 */
rv_t func_08A14B84(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A14B84:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A14C04; }
    goto L_08A14BB8;
L_08A14BB8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A14BDC; }
    goto L_08A14BCC;
L_08A14BCC:;
    v0 = D_08C2C9A8 - (-13912);
    a0 = LD32(v0-13912);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A14BF4; }
    goto L_08A14BDC;
L_08A14BDC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A14BF4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14BFC;
L_08A14BFC:;
    goto L_08A14BDC;
L_08A14C04:;
    s3 = D_08C2C9A8 - (-13912);
    s0 = s3 - 13912;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14C1C;
L_08A14C1C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-13912, v0);
    if (cnd_) { goto L_08A14C48; }
    goto L_08A14C2C;
L_08A14C2C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A14C34;
L_08A14C34:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A14C34; }
    goto L_08A14C48;
L_08A14C48:;
    v0 = s3 - 13912;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A14BB8;
}

/* 08A14C58 */
rv_t func_08A14C58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14C58:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A14B84(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14C6C;
L_08A14C6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14C78 */
rv_t func_08A14C78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14C78:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A14B84(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14C8C;
L_08A14C8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14C98 */
void func_08A14C98(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A14C98:;
    sp = sp - 32;
    s3 = D_08C2C9B8 - (-13896);
    s2 = s3 - 13896;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08A14CC0;
L_08A14CC0:;
    f0 = BITSF(0);
    v0 = D_08B15268 - (21096);
    v0 = v0 + 21096;
    a1 = s1 + 28;
    ST32(s1, v0);
    v0 = (u32)-32742;
    a0 = 12;
    ST16(s1+8, v0);
    v0 = 1;
    ST32(a1+4, FBITS(f0));
    ST32(a1+20, FBITS(f0));
    ST32(a1+16, FBITS(f0));
    ST32(a1+12, FBITS(f0));
    ST32(a1+8, FBITS(f0));
    ST32(s1+28, FBITS(f0));
    v1 = LD32(s2+4);
    s0 = LD32(s1+4);
    ST8(s1+52, v0);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14D14;
L_08A14D14:;
    a0 = LD32(s3-13896);
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
    goto L_08A14D48;
L_08A14D48:;
    sp = sp + 32;
    return;
}

/* 08A14D64 */
rv_t func_08A14D64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14D64:;
    v0 = D_08B15268 - (21096);
    v0 = v0 + 21096;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C9B8 - (-13896);
    a1 = s0 + 0;
    a0 = a0 - 13896;
    func_08AD06F8(a0, a1, t1, t2, t3);
    goto L_08A14D90;
L_08A14D90:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14D98;
L_08A14D98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14DA8 */
rv_t func_08A14DA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14DA8:;
    v0 = D_08B15268 - (21096);
    v0 = v0 + 21096;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2C9B8 - (-13896);
    a1 = s0 + 0;
    a0 = a0 - 13896;
    func_08AD06F8(a0, a1, t1, t2, t3);
    goto L_08A14DD4;
L_08A14DD4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14DDC;
L_08A14DDC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14DE4;
L_08A14DE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14DF4 */
u32 func_08A14DF4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14DF4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14E10;
L_08A14E10:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08A14C98(a0, a1);
    goto L_08A14E20;
L_08A14E20:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A14E38 */
rv_t func_08A14E38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14E38:;
    sp = sp - 16;
    v0 = 3;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a3 = 1;
    if (cnd_) { goto L_08A14E78; }
    goto L_08A14E50;
L_08A14E50:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { ST8(a0+52, 0); goto L_08A14E68; }
    goto L_08A14E5C;
L_08A14E5C:;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14E64;
L_08A14E64:;
    a3 = v0 + 0;
    goto L_08A14E68;
L_08A14E68:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A14E78:;
    v0 = 1;
    ST8(a0+52, v0);
    goto L_08A14E68;
}

/* 08A14E84 */
rv_t func_08A14E84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A14E84:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14EA8;
L_08A14EA8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14EB4;
L_08A14EB4:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14EC0;
L_08A14EC0:;
    a1 = LD_U8(s1+52);
    a0 = s0 + 0;
    a1 = 0 < a1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14ED0;
L_08A14ED0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14EE4 */
rv_t func_08A14EE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A14EE4:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14F0C;
L_08A14F0C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14F18;
L_08A14F18:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A14F24;
L_08A14F24:;
    a0 = s0 + 0;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14F34;
L_08A14F34:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST8(s1+52, 0);
    if (cnd_) { goto L_08A14F4C; }
    goto L_08A14F44;
L_08A14F44:;
    v0 = 1;
    ST8(s1+52, v0);
    goto L_08A14F4C;
L_08A14F4C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A14F60 */
rv_t func_08A14F60(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A14F60:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A14FE0; }
    goto L_08A14F94;
L_08A14F94:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A14FB8; }
    goto L_08A14FA8;
L_08A14FA8:;
    v0 = D_08C2C9B8 - (-13896);
    a0 = LD32(v0-13896);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A14FD0; }
    goto L_08A14FB8;
L_08A14FB8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A14FD0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A14FD8;
L_08A14FD8:;
    goto L_08A14FB8;
L_08A14FE0:;
    s3 = D_08C2C9B8 - (-13896);
    s0 = s3 - 13896;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A14FF8;
L_08A14FF8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-13896, v0);
    if (cnd_) { goto L_08A15024; }
    goto L_08A15008;
L_08A15008:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A15010;
L_08A15010:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A15010; }
    goto L_08A15024;
L_08A15024:;
    v0 = s3 - 13896;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A14F94;
}

/* 08A15034 */
rv_t func_08A15034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15034:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A14F60(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15048;
L_08A15048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A15054 */
rv_t func_08A15054(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15054:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A14F60(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15068;
L_08A15068:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A15074 */
void func_08A15074(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A15074:;
    sp = sp - 32;
    s3 = D_08C2CA78 - (-13704);
    s2 = s3 - 13704;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08A1509C;
L_08A1509C:;
    v0 = D_08B152B8 - (21176);
    v0 = v0 + 21176;
    a1 = LD32(s1+4);
    ST32(s1, v0);
    a0 = s1 + 60;
    a2 = 0 + 0;
    func_08A26584(a0, a1, a2);
    goto L_08A150B8;
L_08A150B8:;
    f0 = BITSF(0);
    v0 = (u32)-32728;
    ST16(s1+8, v0);
    v1 = s1 + 28;
    v0 = 999;
    ST32(v1+4, FBITS(f0));
    a0 = 12;
    ST32(v1+20, FBITS(f0));
    ST32(v1+16, FBITS(f0));
    ST32(v1+12, FBITS(f0));
    ST32(v1+8, FBITS(f0));
    ST32(s1+28, FBITS(f0));
    ST32(s1+56, v0);
    v0 = 1;
    v1 = LD32(s2+4);
    s0 = LD32(s1+4);
    ST8(s1+52, v0);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15108;
L_08A15108:;
    a0 = LD32(s3-13704);
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

/* 08A15150 */
rv_t func_08A15150(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15150:;
    v0 = D_08B152B8 - (21176);
    v0 = v0 + 21176;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2CA78 - (-13704);
    a1 = s0 + 0;
    a0 = a0 - 13704;
    func_08AD07B0(a0, a1, t1, t2, t3);
    goto L_08A1517C;
L_08A1517C:;
    a0 = s0 + 60;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A15184;
L_08A15184:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1518C;
L_08A1518C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A1519C */
rv_t func_08A1519C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1519C:;
    v0 = D_08B152B8 - (21176);
    v0 = v0 + 21176;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2CA78 - (-13704);
    a1 = s0 + 0;
    a0 = a0 - 13704;
    func_08AD07B0(a0, a1, t1, t2, t3);
    goto L_08A151C8;
L_08A151C8:;
    a0 = s0 + 60;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A151D0;
L_08A151D0:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A151D8;
L_08A151D8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A151E0;
L_08A151E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A151F0 */
u32 func_08A151F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A151F0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1520C;
L_08A1520C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08A15074(a0, a1);
    goto L_08A1521C;
L_08A1521C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A15234 */
u32 func_08A15234(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A15234:;
    sp = sp - 48;
    a2 = D_08C2CA78 - (-13704);
    v1 = a2 - 13704;
    s0 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A152CC; }
    goto L_08A15280;
L_08A15280:;
    a2 = LD32(a2-13704);
    a3 = a1 + 0;
    goto L_08A15288;
L_08A15288:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A152BC; }
    goto L_08A152A0;
L_08A152A0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08A152D0; }
    goto L_08A152B0;
L_08A152B0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A152A0; }
    goto L_08A152BC;
L_08A152BC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A15288; }
    goto L_08A152CC;
L_08A152CC:;
    v1 = LD32(sp+8);
    goto L_08A152D0;
L_08A152D0:;
    cnd_ = v1 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08A15304; }
    goto L_08A152D8;
L_08A152D8:;
    v1 = LD32(v1);
    goto L_08A152DC;
L_08A152DC:;
    a0 = sp + 0;
    v0 = LD32(v1+56);
    cnd_ = v0 == s0;
    a1 = 1;
    if (cnd_) { goto L_08A153C4; }
    goto L_08A152EC;
L_08A152EC:;
    func_08AD0858(a0, a1);
    goto L_08A152F4;
L_08A152F4:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(v1); goto L_08A152DC; }
    goto L_08A15300;
L_08A15300:;
    s1 = LD32(sp);
    goto L_08A15304;
L_08A15304:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A15388; }
    goto L_08A15314;
L_08A15314:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A15388; }
    goto L_08A15320;
L_08A15320:;
    v0 = LD32(s1);
    goto L_08A15324;
L_08A15324:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A15378; }
    goto L_08A15338;
L_08A15338:;
    v0 = LD_U8(s0+8);
    goto L_08A1533C;
L_08A1533C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A153BC; }
    goto L_08A15344;
L_08A15344:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A153AC; }
    goto L_08A1534C;
L_08A1534C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A15354;
L_08A15354:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A15360;
L_08A15360:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A1536C;
L_08A1536C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A1533C; }
    goto L_08A15374;
L_08A15374:;
    v1 = LD32(s1+4);
    goto L_08A15378;
L_08A15378:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A15324; }
    goto L_08A15388;
L_08A15388:;
    v0 = 0 + 0;
    goto L_08A1538C;
L_08A1538C:;
    sp = sp + 48;
    return v0;
L_08A153AC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A15354;
L_08A153BC:;
    s0 = LD32(s0+4);
    goto L_08A1536C;
L_08A153C4:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A1544C; }
    goto L_08A153D8;
L_08A153D8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A1544C; }
    goto L_08A153E4;
L_08A153E4:;
    v0 = LD32(s1);
    goto L_08A153E8;
L_08A153E8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A1543C; }
    goto L_08A153FC;
L_08A153FC:;
    v0 = LD_U8(s0+8);
    goto L_08A15400;
L_08A15400:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A15464; }
    goto L_08A15408;
L_08A15408:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A15454; }
    goto L_08A15410;
L_08A15410:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A15418;
L_08A15418:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A15424;
L_08A15424:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A15430;
L_08A15430:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A15400; }
    goto L_08A15438;
L_08A15438:;
    v1 = LD32(s1+4);
    goto L_08A1543C;
L_08A1543C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A153E8; }
    goto L_08A1544C;
L_08A1544C:;
    v0 = 1;
    goto L_08A1538C;
L_08A15454:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A15418;
L_08A15464:;
    s0 = LD32(s0+4);
    goto L_08A15430;
}

/* 08A1546C */
rv_t func_08A1546C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1546C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 60;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1548C;
L_08A1548C:;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A154BC; }
    goto L_08A15494;
L_08A15494:;
    v1 = LD_U16(s1+16);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A154DC; }
    goto L_08A154A4;
L_08A154A4:;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A154D4; }
    goto L_08A154B0;
L_08A154B0:;
    { rv_t r_ = func_08874198(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A154B8;
L_08A154B8:;
    a2 = v0 + 0;
    goto L_08A154BC;
L_08A154BC:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A154D4:;
    ST8(s0+52, 0);
    goto L_08A154BC;
L_08A154DC:;
    v0 = 1;
    ST8(s0+52, v0);
    goto L_08A154BC;
}

/* 08A154E8 */
rv_t func_08A154E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A154E8:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1550C;
L_08A1550C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15518;
L_08A15518:;
    a1 = s0 + 28;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15524;
L_08A15524:;
    a1 = LD_U8(s0+52);
    a0 = s1 + 0;
    a1 = 0 < a1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15534;
L_08A15534:;
    a1 = LD32(s0+56);
    a0 = s1 + 0;
    s0 = s0 + 60;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15544;
L_08A15544:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A26BD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15550;
L_08A15550:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A15564 */
rv_t func_08A15564(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A15564:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1558C;
L_08A1558C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15598;
L_08A15598:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A155A4;
L_08A155A4:;
    a0 = s0 + 0;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A155B4;
L_08A155B4:;
    a1 = s1 + 56;
    v0 = LD32(sp+4);
    a0 = s0 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST8(s1+52, 0);
    if (cnd_) { goto L_08A155D4; }
    goto L_08A155CC;
L_08A155CC:;
    v0 = 1;
    ST8(s1+52, v0);
    goto L_08A155D4;
L_08A155D4:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A155DC;
L_08A155DC:;
    a0 = s1 + 60;
    a1 = s0 + 0;
    { rv_t r_ = func_08A26C18(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A155E8;
L_08A155E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A155FC */
u32 func_08A155FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A155FC:;
    sp = sp - 32;
    v1 = D_08C2CA78 - (-13704);
    v1 = v1 - 13704;
    s2 = a0 + 0;
    a1 = 1;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    func_08AD0858(a0, a1);
    goto L_08A15640;
L_08A15640:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A15718; }
    goto L_08A1564C;
L_08A1564C:;
    s0 = LD32(v0);
    goto L_08A15650;
L_08A15650:;
    v0 = LD_U8(s0+52);
    cnd_ = v0 == 0;
    s1 = s0 + 28;
    if (cnd_) { goto L_08A156FC; }
    goto L_08A1565C;
L_08A1565C:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15678;
L_08A15678:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s0+28));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A15700; }
    goto L_08A15690;
L_08A15690:;
    f0 = BITSF(LD32(s1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A15700; }
    goto L_08A156A4;
L_08A156A4:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A15700; }
    goto L_08A156BC;
L_08A156BC:;
    f0 = BITSF(LD32(s1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A15700; }
    goto L_08A156D0;
L_08A156D0:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A15700; }
    goto L_08A156E8;
L_08A156E8:;
    f0 = BITSF(LD32(s1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A15754; }
    goto L_08A156FC;
L_08A156FC:;
    a0 = sp + 0;
    goto L_08A15700;
L_08A15700:;
    a1 = 1;
    func_08AD0858(a0, a1);
    goto L_08A15708;
L_08A15708:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A15650; }
    goto L_08A15714;
L_08A15714:;
    a0 = LD32(sp);
    goto L_08A15718;
L_08A15718:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A15744; }
    goto L_08A15728;
L_08A15728:;
    v0 = 999;
    goto L_08A1572C;
L_08A1572C:;
    sp = sp + 32;
    return v0;
L_08A15744:;
    func_08AD08F0(a0, 0, 0, 0);
    goto L_08A1574C;
L_08A1574C:;
    v0 = 999;
    goto L_08A1572C;
L_08A15754:;
    s0 = LD32(s0+56);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A15770; }
    goto L_08A15768;
L_08A15768:;
    v0 = s0 + 0;
    goto L_08A1572C;
L_08A15770:;
    func_08AD08F0(a0, 0, 0, 0);
    goto L_08A15778;
L_08A15778:;
    v0 = s0 + 0;
    goto L_08A1572C;
}

/* 08A15780 */
rv_t func_08A15780(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A15780:;
    sp = sp - 32;
    a1 = 32;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a2 = LD_U16(a0+8);
    a0 = 90;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A157A4;
L_08A157A4:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_08A1581C; }
    goto L_08A157B4;
L_08A157B4:;
    a3 = LD32(v0+24);
    cnd_ = a3 == 0;
    t0 = s0 + 28;
    if (cnd_) { goto L_08A15814; }
    goto L_08A157C0;
L_08A157C0:;
    f1 = BITSF(LD32(s0+28));
    v1 = LD_U8(s0+52);
    v0 = LD32(s0+56);
    ST32(a3, FBITS(f1));
    f0 = BITSF(LD32(t0+4));
    ST32(a3+4, FBITS(f0));
    f1 = BITSF(LD32(t0+8));
    ST32(a3+8, FBITS(f1));
    f0 = BITSF(LD32(t0+12));
    ST32(a3+12, FBITS(f0));
    f1 = BITSF(LD32(t0+16));
    ST32(a3+16, FBITS(f1));
    f2 = BITSF(LD32(t0+20));
    f0 = BITSF(LD32(t0+4));
    f1 = BITSF(LD32(t0+12));
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(a3+28, v0);
    ST8(a3+24, v1);
    ST32(a3+20, FBITS(f2));
    goto L_08A15814;
L_08A15814:;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1581C;
L_08A1581C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A1582C */
void func_08A1582C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1582C:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15850;
L_08A15850:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 8;
    t0 = 32;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A1586C;
L_08A1586C:;
    a0 = s2 + 0;
    func_08A15894(a0);
    goto L_08A15874;
L_08A15874:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_08A1587C;
L_08A1587C:;
    sp = sp + 16;
    return;
}

/* 08A15894 */
void func_08A15894(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f20 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A15894:;
    sp = sp - 64;
    f20 = BITSF(0);
    a1 = 0 + 0;
    s0 = a0 + 0;
    f12 = f20;
    a2 = 6;
    a3 = 0 + 0;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A158CC;
L_08A158CC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 4;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A158F0;
L_08A158F0:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 8;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A15914;
L_08A15914:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 12;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A15938;
L_08A15938:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 16;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A1595C;
L_08A1595C:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 6;
    a3 = 20;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A15980;
L_08A15980:;
    a0 = s0 + 0;
    t3 = 1;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 24;
    t0 = 8;
    t1 = 1;
    t2 = 0 + 0;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_08A159A4;
L_08A159A4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 28;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_08A159C8;
L_08A159C8:;
    sp = sp + 64;
    return;
}

/* 08A159DC */
rv_t func_08A159DC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A159DC:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A15B00; }
    goto L_08A15A10;
L_08A15A10:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF7E4 - (-2076);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2076));
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
    t0 = D_08C2C9C8 - (-13880);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2C9D8 - (-13864);
    a3 = D_08C2C9E8 - (-13848);
    v1 = t0 - 13880;
    a1 = v0 - 13864;
    a2 = a3 - 13848;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2CA78 - (-13704);
    s0 = s3 - 13704;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-13864, FBITS(f5));
    v0 = 4;
    ST32(t0-13880, FBITS(f1));
    ST32(a3-13848, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15AC8;
L_08A15AC8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-13704, v0);
    if (cnd_) { goto L_08A15AF4; }
    goto L_08A15AD8;
L_08A15AD8:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A15AE0;
L_08A15AE0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A15AE0; }
    goto L_08A15AF4;
L_08A15AF4:;
    v0 = s3 - 13704;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A15B00;
L_08A15B00:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A15B24; }
    goto L_08A15B14;
L_08A15B14:;
    v0 = D_08C2CA78 - (-13704);
    a0 = LD32(v0-13704);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A15B3C; }
    goto L_08A15B24;
L_08A15B24:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A15B3C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A15B44;
L_08A15B44:;
    goto L_08A15B24;
}

/* 08A15B4C */
rv_t func_08A15B4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15B4C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A159DC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15B60;
L_08A15B60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A15B6C */
rv_t func_08A15B6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15B6C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A159DC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15B80;
L_08A15B80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A15B8C */
void func_08A15B8C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A15B8C:;
    sp = sp - 32;
    s3 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08A15BAC;
L_08A15BAC:;
    v0 = D_08B15308 - (21256);
    v0 = v0 + 21256;
    a1 = LD32(s3+4);
    ST32(s3, v0);
    a0 = s3 + 120;
    a2 = 0 + 0;
    func_08A26584(a0, a1, a2);
    goto L_08A15BC8;
L_08A15BC8:;
    v0 = (u32)-32741;
    ST16(s3+8, v0);
    v0 = D_08AEF7EC - (-2068);
    v1 = 1;
    f0 = BITSF(LD32(v0-2068));
    v0 = 4;
    ST8(s3+29, v1);
    a1 = 0 + 0;
    a0 = s3 + 40;
    ST32(s3+36, FBITS(f0));
    ST32(s3+32, v0);
    ST8(s3+28, v1);
    ST8(s3+30, 0);
    ST8(s3+144, 0);
    goto L_08A15C00;
L_08A15C00:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A15C00; }
    goto L_08A15C14;
L_08A15C14:;
    v0 = 1;
    ST32(s3+56, v0);
    a0 = 0 + 0;
    v1 = s3 + 60;
    goto L_08A15C24;
L_08A15C24:;
    a0 = a0 + 1;
    v0 = a0 < 0x2u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A15C24; }
    goto L_08A15C38;
L_08A15C38:;
    v0 = 999;
    ST32(s3+68, v0);
    a0 = 0 + 0;
    a1 = 999;
    v1 = s3 + 96;
    goto L_08A15C4C;
L_08A15C4C:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, a1);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A15C4C; }
    goto L_08A15C60;
L_08A15C60:;
    v0 = 4;
    ST32(s3+112, v0);
    s2 = D_08C2CB38 - (-13512);
    s1 = s2 - 13512;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    ST32(s3+116, 0);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15C8C;
L_08A15C8C:;
    a0 = LD32(s2-13512);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    a2 = s3 + 72;
    a3 = s3 + 84;
    v1 = v1 + 1;
    ST32(v0+4, a1);
    a0 = s3 + 0;
    ST32(s1+12, v1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    ST32(v0, s3);
    v0 = D_08C2CB48 - (-13496);
    ST32(a2+4, 0);
    ST32(a2+8, 0);
    ST32(s3+72, 0);
    ST32(s3+84, 0);
    ST32(a3+4, 0);
    ST32(a3+8, 0);
    ST8(v0-13496, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A15CE8;
L_08A15CE8:;
    sp = sp + 32;
    return;
}

/* 08A15D04 */
rv_t func_08A15D04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15D04:;
    v0 = D_08B15308 - (21256);
    v0 = v0 + 21256;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2CB38 - (-13512);
    a1 = s0 + 0;
    a0 = a0 - 13512;
    func_08AD09CC(a0, a1, t1, t2, t3);
    goto L_08A15D30;
L_08A15D30:;
    a0 = s0 + 120;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A15D38;
L_08A15D38:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A15D40;
L_08A15D40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A15D50 */
rv_t func_08A15D50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15D50:;
    v0 = D_08B15308 - (21256);
    v0 = v0 + 21256;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2CB38 - (-13512);
    a1 = s0 + 0;
    a0 = a0 - 13512;
    func_08AD09CC(a0, a1, t1, t2, t3);
    goto L_08A15D7C;
L_08A15D7C:;
    a0 = s0 + 120;
    func_08A26640(a0, 0, 0, 0);
    goto L_08A15D84;
L_08A15D84:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A15D8C;
L_08A15D8C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A15D94;
L_08A15D94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A15DA4 */
u32 func_08A15DA4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15DA4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 148;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15DC0;
L_08A15DC0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08A15B8C(a0, a1);
    goto L_08A15DD0;
L_08A15DD0:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A15DE8 */
rv_t func_08A15DE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A15DE8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 120;
    s1 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15E08;
L_08A15E08:;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A15E38; }
    goto L_08A15E10;
L_08A15E10:;
    v1 = LD_U16(s1+16);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A15E58; }
    goto L_08A15E20;
L_08A15E20:;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A15E50; }
    goto L_08A15E2C;
L_08A15E2C:;
    { rv_t r_ = func_08874198(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15E34;
L_08A15E34:;
    a2 = v0 + 0;
    goto L_08A15E38;
L_08A15E38:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A15E50:;
    ST8(s0+28, 0);
    goto L_08A15E38;
L_08A15E58:;
    v0 = 1;
    ST8(s0+28, v0);
    goto L_08A15E38;
}

/* 08A15E64 */
rv_t func_08A15E64(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A15E64:;
    sp = sp - 96;
    s2 = 0 + 0;
    s1 = a0 + 0;
    a3 = LD32(a0+32);
    cnd_ = a3 == 0;
    ST8(a0+144, 0);
    if (cnd_) { goto L_08A15F60; }
    goto L_08A15EA8;
L_08A15EA8:;
    v0 = D_08AEF7F0 - (-2064);
    f21 = BITSF(LD32(v0-2064));
    f20 = BITSF(0);
    s5 = D_08C2B2A8 - (-19800);
    s6 = s5 - 19800;
    s3 = 999;
    s4 = a0 + 72;
    s0 = a0 + 96;
    s7 = 1;
    goto L_08A15ECC;
L_08A15ECC:;
    a2 = LD32(s0);
    cnd_ = a2 == s3;
    v1 = LD32(s5-19800);
    if (cnd_) { goto L_08A15F4C; }
    goto L_08A15ED8;
L_08A15ED8:;
    v0 = LD32(s6+4);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A15F24; }
    goto L_08A15EF8;
L_08A15EF8:;
    a0 = LD32(a1);
    goto L_08A15EFC;
L_08A15EFC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A16014; }
    goto L_08A15F14;
L_08A15F14:;
    a1 = LD32(a1+4);
    goto L_08A15F18;
L_08A15F18:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A15EFC; }
    goto L_08A15F20;
L_08A15F20:;
    a0 = 0 + 0;
    goto L_08A15F24;
L_08A15F24:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0, s3); goto L_08A15F50; }
    goto L_08A15F2C;
L_08A15F2C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a0); goto L_08A15F94; }
    goto L_08A15F4C;
L_08A15F4C:;
    ST32(s0, s3);
    goto L_08A15F50;
L_08A15F50:;
    s2 = s2 + 1;
    v0 = s2 < a3;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A15ECC; }
    goto L_08A15F60;
L_08A15F60:;
    sp = sp + 96;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_08A15F94:;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A15FA0;
L_08A15FA0:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s1+72));
    f3 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s4+8));
    f2 = f2 - f0;
    f3 = f3 - f1;
    f4 = f4 - f5;
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {vr0=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    fcc = FCMP(f0, f21, 12);
    ST32(sp+4, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08A1600C; }
    goto L_08A16000;
L_08A16000:;
    a3 = LD32(s1+32);
    ST8(s1+144, s7);
    goto L_08A15F50;
L_08A1600C:;
    a3 = LD32(s1+32);
    goto L_08A15F50;
L_08A16014:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A15F18; }
    goto L_08A16020;
L_08A16020:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A15F18; }
    goto L_08A1602C;
L_08A1602C:;
    goto L_08A15F24;
    v[0]=vr0;
}

/* 08A16034 */
u64 func_08A16034(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A16034:;
    a2 = LD32(a0+32);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A16068; }
    goto L_08A16040;
L_08A16040:;
    a0 = a0 + 96;
    t0 = 999;
    v0 = LD32(a0);
    goto L_08A1604C;
L_08A1604C:;
    a1 = a1 + 1;
    v1 = a1 < a2;
    a0 = a0 + 4;
    cnd_ = v0 == t0;
    a3 = 1;
    if (cnd_) { goto L_08A1606C; }
    goto L_08A16060;
L_08A16060:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08A1604C; }
    goto L_08A16068;
L_08A16068:;
    a3 = 0 + 0;
    goto L_08A1606C;
L_08A1606C:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A16074 */
void func_08A16074(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A16074:;
    a2 = 0 + 0;
    a3 = 999;
    goto L_08A1607C;
L_08A1607C:;
    v0 = LD32(a0+96);
    a2 = a2 + 1;
    cnd_ = v0 == a3;
    v1 = a2 < 0x4u;
    if (cnd_) { goto L_08A1609C; }
    goto L_08A1608C;
L_08A1608C:;
    cnd_ = v1 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A1607C; }
    goto L_08A16094;
L_08A16094:;
    return;
L_08A1609C:;
    ST32(a0+96, a1);
    return;
}

/* 08A160A4 */
void func_08A160A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A160A4:;
    a3 = LD32(a0+68);
    a1 = D_08C2BA28 - (-17880);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a1 - 17880;
    if (cnd_) { goto L_08A16118; }
    goto L_08A160B8;
L_08A160B8:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-17880);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A16108; }
    goto L_08A160DC;
L_08A160DC:;
    a1 = LD32(a2);
    goto L_08A160E0;
L_08A160E0:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A16120; }
    goto L_08A160F8;
L_08A160F8:;
    a2 = LD32(a2+4);
    goto L_08A160FC;
L_08A160FC:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_08A160E0; }
    goto L_08A16104;
L_08A16104:;
    v1 = 0 + 0;
    goto L_08A16108;
L_08A16108:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A16118; }
    goto L_08A16110;
L_08A16110:;
    v0 = LD32(v1+12);
    ST32(a0+112, v0);
    goto L_08A16118;
L_08A16118:;
    return;
L_08A16120:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08A160F8; }
    goto L_08A1612C;
L_08A1612C:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A160FC; }
    goto L_08A16138;
L_08A16138:;
    goto L_08A16108;
}

/* 08A16140 */
u32 func_08A16140(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A16140:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = 0 + 0;
    goto L_08A16158;
L_08A16158:;
    a0 = 0x360000u;
    a0 = a0 | 0x34ea;
    v0 = func_0881C478(a0);
    goto L_08A16164;
L_08A16164:;
    v0 = (s32)s0 < (s32)v0;
    a0 = 0x360000u;
    a1 = s0 + 0;
    a0 = a0 | 0x34ea;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A161B0; }
    goto L_08A1617C;
L_08A1617C:;
    v0 = func_0881C4B0(a0, a1);
    goto L_08A16184;
L_08A16184:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A16198; }
    goto L_08A1618C;
L_08A1618C:;
    v0 = LD32(v0);
    cnd_ = s1 != v0;
    v1 = 1;
    if (cnd_) { goto L_08A16158; }
    goto L_08A16198;
L_08A16198:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A161B0:;
    v1 = 0 + 0;
    goto L_08A16198;
}

/* 08A161B8 */
u32 func_08A161B8(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A161B8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = 0 + 0;
    goto L_08A161D0;
L_08A161D0:;
    a0 = 0xcc980000u;
    a0 = a0 | 0x70f0;
    v0 = func_0881C478(a0);
    goto L_08A161DC;
L_08A161DC:;
    v0 = (s32)s0 < (s32)v0;
    a0 = 0xcc980000u;
    a1 = s0 + 0;
    a0 = a0 | 0x70f0;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A16228; }
    goto L_08A161F4;
L_08A161F4:;
    v0 = func_0881C4B0(a0, a1);
    goto L_08A161FC;
L_08A161FC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A16210; }
    goto L_08A16204;
L_08A16204:;
    v0 = LD32(v0);
    cnd_ = s1 != v0;
    v1 = 1;
    if (cnd_) { goto L_08A161D0; }
    goto L_08A16210;
L_08A16210:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A16228:;
    v1 = 0 + 0;
    goto L_08A16210;
}

/* 08A16230 */
u32 func_08A16230(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A16230:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = 0 + 0;
    goto L_08A16248;
L_08A16248:;
    a0 = 0x5d00000u;
    a0 = a0 | 0x4860;
    v0 = func_0881C478(a0);
    goto L_08A16254;
L_08A16254:;
    v0 = (s32)s0 < (s32)v0;
    a0 = 0x5d00000u;
    a1 = s0 + 0;
    a0 = a0 | 0x4860;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A162A0; }
    goto L_08A1626C;
L_08A1626C:;
    v0 = func_0881C4B0(a0, a1);
    goto L_08A16274;
L_08A16274:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A16288; }
    goto L_08A1627C;
L_08A1627C:;
    v0 = LD32(v0);
    cnd_ = s1 != v0;
    v1 = 1;
    if (cnd_) { goto L_08A16248; }
    goto L_08A16288;
L_08A16288:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A162A0:;
    v1 = 0 + 0;
    goto L_08A16288;
}

/* 08A162A8 */
u64 func_08A162A8(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A162A8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = 0 + 0;
    goto L_08A162C0;
L_08A162C0:;
    a0 = 0xd09a0000u;
    a0 = a0 | 0x5036;
    v0 = func_0881C478(a0);
    goto L_08A162CC;
L_08A162CC:;
    v0 = (s32)s0 < (s32)v0;
    a0 = 0xd09a0000u;
    a1 = s0 + 0;
    a0 = a0 | 0x5036;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A16318; }
    goto L_08A162E4;
L_08A162E4:;
    v0 = func_0881C4B0(a0, a1);
    goto L_08A162EC;
L_08A162EC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A16300; }
    goto L_08A162F4;
L_08A162F4:;
    v0 = LD32(v0);
    cnd_ = s1 != v0;
    v1 = 1;
    if (cnd_) { goto L_08A162C0; }
    goto L_08A16300;
L_08A16300:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A16318:;
    v1 = 0 + 0;
    goto L_08A16300;
}

/* 08A16320 */
rv_t func_08A16320(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A16320:;
    sp = sp - 96;
    s1 = a0 + 0;
    func_08A160A4(a0);
    goto L_08A16344;
L_08A16344:;
    v1 = LD32(s1+112);
    v0 = v1 < 0x4u;
    cnd_ = v0 != 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A16374; }
    goto L_08A16354;
L_08A16354:;
    goto L_08A16358;
L_08A16358:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08A16374:;
    v0 = v0 + s1;
    s3 = LD32(v0+40);
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16380;
L_08A16380:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A16660; }
    goto L_08A16388;
L_08A16388:;
    a0 = D_08B204FC - (1276);
    goto L_08A1638C;
L_08A1638C:;
    a0 = a0 + 1276;
    a1 = s3 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16398;
L_08A16398:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A16354; }
    goto L_08A163A0;
L_08A163A0:;
    a0 = v0 + 0;
    v0 = func_08817BF8(a0);
    goto L_08A163A8;
L_08A163A8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A16358; }
    goto L_08A163B0;
L_08A163B0:;
    a0 = s0 + 0;
    v0 = func_08817BF8(a0);
    goto L_08A163B8;
L_08A163B8:;
    v0 = v0 + 4;
    v1 = D_08AEF7F4 - (-2060);
    f5 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1-2060));
    a0 = s1 + 72;
    f2 = BITSF(LD32(a0+4));
    f0 = f5 + f0;
    f4 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0+4));
    f6 = BITSF(LD32(a0+8));
    f2 = f2 - f0;
    f3 = BITSF(LD32(s1+72));
    a0 = s0 + 0;
    ST32(sp, FBITS(f1));
    s4 = sp + 16;
    ST32(sp+8, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    {v[112]=BITSF(LD32(s1+(84)));}
    {v[113]=BITSF(LD32(s1+(88)));}
    {v[114]=BITSF(LD32(s1+(92)));}
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
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    {ST32(sp+(28),FBITS(v[100]));}
    {ST32(sp+(32),FBITS(v[101]));}
    {ST32(sp+(36),FBITS(v[102]));}
    {ST32(sp+(40),FBITS(v[104]));}
    {ST32(sp+(44),FBITS(v[105]));}
    {ST32(sp+(48),FBITS(v[106]));}
    ST32(sp, FBITS(f3));
    ST32(sp+8, FBITS(f6));
    ST32(sp+4, FBITS(f2));
    v0 = func_08817BF8(a0);
    goto L_08A1649C;
L_08A1649C:;
    a3 = v0 + 0;
    v0 = D_08C2CB48 - (-13496);
    v1 = LD_U8(v0-13496);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A16644; }
    goto L_08A164B0;
L_08A164B0:;
    v0 = LD_U8(s1+30);
    goto L_08A164B4;
L_08A164B4:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s1+28, 0); goto L_08A164BC; }
    goto L_08A164BC;
L_08A164BC:;
    a0 = s1 + 0;
    a1 = s3 + 0;
    v0 = func_08A16230(a1);
    goto L_08A164C8;
L_08A164C8:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A165A0; }
    goto L_08A164D0;
L_08A164D0:;
    a0 = 672;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A164D8;
L_08A164D8:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089B04F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A164E8;
L_08A164E8:;
    s2 = s0 + 0;
    goto L_08A164EC;
L_08A164EC:;
    cnd_ = s2 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A16354; }
    goto L_08A164F4;
L_08A164F4:;
    v0 = LD32(s2);
    a1 = s3 + 0;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16514;
L_08A16514:;
    a0 = s2 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1651C;
L_08A1651C:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16530;
L_08A16530:;
    a2 = LD32(s2);
    a1 = s4 + 0;
    v1 = LD32(a2+36);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16544;
L_08A16544:;
    v0 = LD32(s2+232);
    v0 = (v0 & ~(0x1u << 2)) | ((s0 & 0x1) << 2);
    ST32(s2+232, v0);
    v0 = LD32(s2);
    v1 = LD32(v0+112);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16560;
L_08A16560:;
    a1 = LD32(s2);
    a0 = s1 + 0;
    v0 = LD32(a1-16);
    v0 = s2 + v0;
    a1 = LD32(v0+4);
    func_08A16074(a0, a1);
    goto L_08A16578;
L_08A16578:;
    v1 = LD32(s1+132);
    v0 = s2 + 56;
    ST8(s1+29, 0);
    a0 = s2 + 0;
    ST8(v0+22, s0);
    ST32(v0+12, v1);
    ST32(s1+116, 0);
    { rv_t r_ = func_089D52E0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16598;
L_08A16598:;
    goto L_08A16358;
L_08A165A0:;
    a1 = s3 + 0;
    v0 = func_08A16140(a1);
    goto L_08A165A8;
L_08A165A8:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A165D0; }
    goto L_08A165B0;
L_08A165B0:;
    a0 = 648;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A165B8;
L_08A165B8:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089B534C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A165C8;
L_08A165C8:;
    s2 = s0 + 0;
    goto L_08A164EC;
L_08A165D0:;
    a1 = s3 + 0;
    v0 = func_08A161B8(a1);
    goto L_08A165D8;
L_08A165D8:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A16614; }
    goto L_08A165E0;
L_08A165E0:;
    a0 = 684;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A165E8;
L_08A165E8:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = 999;
    { rv_t r_ = func_089BB248(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A165F8;
L_08A165F8:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+188);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1660C;
L_08A1660C:;
    goto L_08A164EC;
L_08A16614:;
    a1 = s3 + 0;
    { u64 r_ = func_08A162A8(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1661C;
L_08A1661C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A16358; }
    goto L_08A16624;
L_08A16624:;
    a0 = 700;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1662C;
L_08A1662C:;
    a0 = v0 + 0;
    a1 = 999;
    s0 = v0 + 0;
    { rv_t r_ = func_089C12C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1663C;
L_08A1663C:;
    s2 = s0 + 0;
    goto L_08A164EC;
L_08A16644:;
    a1 = sp + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_08A16D80(a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16650;
L_08A16650:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s1+30); goto L_08A164B4; }
    goto L_08A16658;
L_08A16658:;
    ST32(s1+116, 0);
    goto L_08A16354;
L_08A16660:;
    a1 = s3 + 0;
    v0 = func_08A16230(a1);
    goto L_08A16668;
L_08A16668:;
    cnd_ = v0 == 0;
    a0 = D_08B204FC - (1276);
    if (cnd_) { goto L_08A1638C; }
    goto L_08A16670;
L_08A16670:;
    a0 = LD32(s1+112);
    v0 = func_08A3CD38(a0);
    goto L_08A16678;
L_08A16678:;
    v1 = LD32(s1+56);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    a0 = D_08B204FC - (1276);
    if (cnd_) { goto L_08A1638C; }
    goto L_08A16688;
L_08A16688:;
    a0 = LD32(s1+112);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16690;
L_08A16690:;
    v0 = v0 << 2;
    v0 = v0 + s1;
    s3 = LD32(v0+60);
    goto L_08A16388;
}

/* 08A166A0 */
rv_t func_08A166A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A166A0:;
    sp = sp - 16;
    v0 = LD_U8(a0+28);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A16704; }
    goto L_08A166BC;
L_08A166BC:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+116));
    f2 = BITSF(LD32(a0+36));
    v0 = LD_U8(a0+29);
    f0 = f0 + f1;
    s1 = 0 < v0;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    ST32(a0+116, FBITS(f0));
    if (cnd_) { goto L_08A166EC; }
    goto L_08A166E8;
L_08A166E8:;
    s1 = 1;
    goto L_08A166EC;
L_08A166EC:;
    { rv_t r_ = func_08A15E64(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A166F4;
L_08A166F4:;
    v0 = LD_U8(s0+144);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A16718; }
    goto L_08A16700;
L_08A16700:;
    ST32(s0+116, 0);
    goto L_08A16704;
L_08A16704:;
    goto L_08A16708;
L_08A16708:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A16718:;
    cnd_ = s1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A16704; }
    goto L_08A16720;
L_08A16720:;
    { u64 r_ = func_08A16034(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16728;
L_08A16728:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A16708; }
    goto L_08A16730;
L_08A16730:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A16320(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16738;
L_08A16738:;
    goto L_08A16708;
}

/* 08A16740 */
rv_t func_08A16740(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A16740:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = 3;
    s3 = a0 + 0;
    a0 = s1 + 0;
    s2 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16770;
L_08A16770:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1677C;
L_08A1677C:;
    a1 = LD_U8(s3+28);
    a0 = LD_U8(s3+29);
    a2 = LD_U8(s3+30);
    a1 = 0 < a1;
    v0 = a1 | 0x2;
    if (a0 != 0) a1 = v0;
    v1 = a1 | 0x4;
    a0 = s1 + 0;
    if (a2 != 0) a1 = v1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A167A4;
L_08A167A4:;
    f12 = BITSF(LD32(s3+36));
    a0 = s1 + 0;
    s0 = s3 + 40;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A167B4;
L_08A167B4:;
    a1 = LD32(s0);
    a0 = s1 + 0;
    s2 = s2 + 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A167C4;
L_08A167C4:;
    v1 = s2 < 0x4u;
    cnd_ = v1 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A167B4; }
    goto L_08A167D0;
L_08A167D0:;
    a1 = LD32(s3+68);
    a0 = s1 + 0;
    s0 = s3 + 60;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A167E0;
L_08A167E0:;
    f12 = BITSF(LD32(s3+72));
    a0 = s1 + 0;
    s2 = 0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A167F0;
L_08A167F0:;
    f12 = BITSF(LD32(s3+76));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A167FC;
L_08A167FC:;
    f12 = BITSF(LD32(s3+80));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16808;
L_08A16808:;
    f12 = BITSF(LD32(s3+84));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16814;
L_08A16814:;
    f12 = BITSF(LD32(s3+88));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16820;
L_08A16820:;
    f12 = BITSF(LD32(s3+92));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1682C;
L_08A1682C:;
    a0 = s3 + 120;
    a1 = s1 + 0;
    { rv_t r_ = func_08A26BD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16838;
L_08A16838:;
    a1 = LD32(s3+32);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16844;
L_08A16844:;
    a1 = LD32(s3+56);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16850;
L_08A16850:;
    a1 = LD32(s0);
    a0 = s1 + 0;
    s2 = s2 + 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16860;
L_08A16860:;
    v1 = s2 < 0x2u;
    cnd_ = v1 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A16850; }
    goto L_08A1686C;
L_08A1686C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A16888 */
rv_t func_08A16888(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A16888:;
    sp = sp - 48;
    s3 = a1 + 0;
    a1 = sp + 0;
    s2 = a0 + 0;
    a0 = s3 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A168B8;
L_08A168B8:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A168C4;
L_08A168C4:;
    a0 = s3 + 0;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A168D4;
L_08A168D4:;
    v1 = LD32(sp+4);
    ST8(s2+28, 0);
    v0 = v1 & 0x1;
    ST8(s2+29, 0);
    cnd_ = v0 == 0;
    ST8(s2+30, 0);
    if (cnd_) { goto L_08A168F4; }
    goto L_08A168EC;
L_08A168EC:;
    v0 = 1;
    ST8(s2+28, v0);
    goto L_08A168F4;
L_08A168F4:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = v1 & 0x4;
    if (cnd_) { goto L_08A1690C; }
    goto L_08A16900;
L_08A16900:;
    v0 = 1;
    ST8(s2+29, v0);
    v0 = v1 & 0x4;
    goto L_08A1690C;
L_08A1690C:;
    cnd_ = v0 == 0;
    a1 = s2 + 36;
    if (cnd_) { goto L_08A1691C; }
    goto L_08A16914;
L_08A16914:;
    v0 = 1;
    ST8(s2+30, v0);
    goto L_08A1691C;
L_08A1691C:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16924;
L_08A16924:;
    s1 = 0 + 0;
    s0 = s2 + 40;
    goto L_08A1692C;
L_08A1692C:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1693C;
L_08A1693C:;
    v1 = s1 < 0x4u;
    cnd_ = v1 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A1692C; }
    goto L_08A16948;
L_08A16948:;
    a1 = s2 + 68;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16954;
L_08A16954:;
    a1 = s2 + 72;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16960;
L_08A16960:;
    a1 = s2 + 76;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1696C;
L_08A1696C:;
    a1 = s2 + 80;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16978;
L_08A16978:;
    a1 = s2 + 84;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16984;
L_08A16984:;
    a1 = s2 + 88;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16990;
L_08A16990:;
    a1 = s2 + 92;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1699C;
L_08A1699C:;
    v1 = LD32(sp);
    cnd_ = (s32)v1 <= 0;
    a0 = s2 + 120;
    if (cnd_) { goto L_08A169B4; }
    goto L_08A169A8;
L_08A169A8:;
    a1 = s3 + 0;
    { rv_t r_ = func_08A26C18(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A169B0;
L_08A169B0:;
    v1 = LD32(sp);
    goto L_08A169B4;
L_08A169B4:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s2 + 32; goto L_08A16A1C; }
    goto L_08A169C0;
L_08A169C0:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A169E4; }
    goto L_08A169CC;
L_08A169CC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A169E4:;
    a1 = s2 + 56;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A169F0;
L_08A169F0:;
    s0 = s2 + 60;
    s1 = 0 + 0;
    goto L_08A169F8;
L_08A169F8:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16A08;
L_08A16A08:;
    v1 = s1 < 0x2u;
    cnd_ = v1 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A169F8; }
    goto L_08A16A14;
L_08A16A14:;
    goto L_08A169CC;
L_08A16A1C:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16A24;
L_08A16A24:;
    v1 = LD32(sp);
    goto L_08A169C0;
}

/* 08A16A2C */
void func_08A16A2C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A16A2C:;
    sp = sp - 64;
    a2 = D_08C2CB38 - (-13512);
    v0 = a2 - 13512;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A16AC4; }
    goto L_08A16A78;
L_08A16A78:;
    a2 = LD32(a2-13512);
    a3 = a1 + 0;
    goto L_08A16A80;
L_08A16A80:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A16AB4; }
    goto L_08A16A98;
L_08A16A98:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08A16AC8; }
    goto L_08A16AA8;
L_08A16AA8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A16A98; }
    goto L_08A16AB4;
L_08A16AB4:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A16A80; }
    goto L_08A16AC4;
L_08A16AC4:;
    v1 = LD32(sp+8);
    goto L_08A16AC8;
L_08A16AC8:;
    cnd_ = v1 == 0;
    v0 = D_08AEF7F8 - (-2056);
    if (cnd_) { goto L_08A16AFC; }
    goto L_08A16AD0;
L_08A16AD0:;
    f20 = BITSF(LD32(v0-2056));
    v0 = LD32(v1);
    goto L_08A16AD8;
L_08A16AD8:;
    a0 = sp + 0;
    a1 = 1;
    f0 = BITSF(LD32(v0+116));
    f0 = f0 - f20;
    ST32(v0+116, FBITS(f0));
    { u64 r_ = func_08AD0A74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16AF0;
L_08A16AF0:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A16AD8; }
    goto L_08A16AFC;
L_08A16AFC:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A16B84; }
    goto L_08A16B10;
L_08A16B10:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A16B84; }
    goto L_08A16B1C;
L_08A16B1C:;
    v0 = LD32(s1);
    goto L_08A16B20;
L_08A16B20:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A16B74; }
    goto L_08A16B34;
L_08A16B34:;
    v0 = LD_U8(s0+8);
    goto L_08A16B38;
L_08A16B38:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A16BB8; }
    goto L_08A16B40;
L_08A16B40:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A16BA8; }
    goto L_08A16B48;
L_08A16B48:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A16B50;
L_08A16B50:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16B5C;
L_08A16B5C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A16B68;
L_08A16B68:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A16B38; }
    goto L_08A16B70;
L_08A16B70:;
    v1 = LD32(s1+4);
    goto L_08A16B74;
L_08A16B74:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A16B20; }
    goto L_08A16B84;
L_08A16B84:;
    sp = sp + 64;
    return;
L_08A16BA8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A16B50;
L_08A16BB8:;
    s0 = LD32(s0+4);
    goto L_08A16B68;
}

/* 08A16BC0 */
void func_08A16BC0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A16BC0:;
    sp = sp - 32;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A16C70; }
    goto L_08A16BD4;
L_08A16BD4:;
    v1 = D_08C2CB38 - (-13512);
    v1 = v1 - 13512;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AD0A74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16C00;
L_08A16C00:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(sp); goto L_08A16C60; }
    goto L_08A16C0C;
L_08A16C0C:;
    v1 = LD32(s0);
    goto L_08A16C10;
L_08A16C10:;
    a0 = LD32(a0);
    a3 = 0 + 0;
    v0 = LD32(v1-16);
    a1 = a0 + 96;
    t0 = s0 + v0;
    v1 = LD32(a1);
    v0 = LD32(t0+4);
    goto L_08A16C2C;
L_08A16C2C:;
    a3 = a3 + 1;
    a2 = a3 < 0x4u;
    cnd_ = v1 == v0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A16C90; }
    goto L_08A16C3C;
L_08A16C3C:;
    cnd_ = a2 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_08A16C2C; }
    goto L_08A16C44;
L_08A16C44:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AD0A74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16C50;
L_08A16C50:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A16C10; }
    goto L_08A16C5C;
L_08A16C5C:;
    a0 = LD32(sp);
    goto L_08A16C60;
L_08A16C60:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A16C80; }
    goto L_08A16C70;
L_08A16C70:;
    goto L_08A16C74;
L_08A16C74:;
    sp = sp + 32;
    return;
L_08A16C80:;
    func_08AD0B0C(a0, 0, 0, 0);
    goto L_08A16C88;
L_08A16C88:;
    goto L_08A16C74;
L_08A16C90:;
    a1 = 10013;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16C98;
L_08A16C98:;
    a0 = LD32(sp);
    goto L_08A16C60;
}

/* 08A16CA0 */
void func_08A16CA0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A16CA0:;
    sp = sp - 32;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A16D50; }
    goto L_08A16CB4;
L_08A16CB4:;
    v1 = D_08C2CB38 - (-13512);
    v1 = v1 - 13512;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AD0A74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16CE0;
L_08A16CE0:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(sp); goto L_08A16D40; }
    goto L_08A16CEC;
L_08A16CEC:;
    v1 = LD32(s0);
    goto L_08A16CF0;
L_08A16CF0:;
    a0 = LD32(a0);
    a3 = 0 + 0;
    v0 = LD32(v1-16);
    a1 = a0 + 96;
    t0 = s0 + v0;
    v1 = LD32(a1);
    v0 = LD32(t0+4);
    goto L_08A16D0C;
L_08A16D0C:;
    a3 = a3 + 1;
    a2 = a3 < 0x4u;
    cnd_ = v1 == v0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A16D70; }
    goto L_08A16D1C;
L_08A16D1C:;
    cnd_ = a2 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_08A16D0C; }
    goto L_08A16D24;
L_08A16D24:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AD0A74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16D30;
L_08A16D30:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A16CF0; }
    goto L_08A16D3C;
L_08A16D3C:;
    a0 = LD32(sp);
    goto L_08A16D40;
L_08A16D40:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A16D60; }
    goto L_08A16D50;
L_08A16D50:;
    goto L_08A16D54;
L_08A16D54:;
    sp = sp + 32;
    return;
L_08A16D60:;
    func_08AD0B0C(a0, 0, 0, 0);
    goto L_08A16D68;
L_08A16D68:;
    goto L_08A16D54;
L_08A16D70:;
    a1 = 10015;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16D78;
L_08A16D78:;
    a0 = LD32(sp);
    goto L_08A16D40;
}

/* 08A16D80 */
rv_t func_08A16D80(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A16D80:;
    sp = sp - 32;
    v0 = D_08AEF7FC - (-2052);
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    f20 = BITSF(LD32(v0-2052));
    a0 = s0 + 0;
    goto L_08A16DB0;
L_08A16DB0:;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = 4;
    t0 = (u32)-1;
    t1 = 0xffff;
    t2 = 0 + 0;
    t3 = 0 + 0;
    { rv_t r_ = func_088B08D8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16DD0;
L_08A16DD0:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A16DE8; }
    goto L_08A16DD8;
L_08A16DD8:;
    f0 = BITSF(LD32(s0+4));
    f0 = f0 - f20;
    ST32(s0+4, FBITS(f0));
    goto L_08A16DB0;
L_08A16DE8:;
    a1 = s1 + 0;
    a2 = s2 + 0;
    a3 = 4;
    t0 = (u32)-1;
    t1 = 0xffff;
    t2 = 1;
    t3 = 1;
    { rv_t r_ = func_088B08D8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16E08;
L_08A16E08:;
    v0 = 0 < v0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A16E28 */
rv_t func_08A16E28(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A16E28:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A16F4C; }
    goto L_08A16E5C;
L_08A16E5C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF800 - (-2048);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-2048));
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
    t0 = D_08C2CA88 - (-13688);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2CA98 - (-13672);
    a3 = D_08C2CAA8 - (-13656);
    v1 = t0 - 13688;
    a1 = v0 - 13672;
    a2 = a3 - 13656;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2CB38 - (-13512);
    s0 = s3 - 13512;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-13672, FBITS(f5));
    v0 = 4;
    ST32(t0-13688, FBITS(f1));
    ST32(a3-13656, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16F14;
L_08A16F14:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-13512, v0);
    if (cnd_) { goto L_08A16F40; }
    goto L_08A16F24;
L_08A16F24:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A16F2C;
L_08A16F2C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A16F2C; }
    goto L_08A16F40;
L_08A16F40:;
    v0 = s3 - 13512;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A16F4C;
L_08A16F4C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A16F70; }
    goto L_08A16F60;
L_08A16F60:;
    v0 = D_08C2CB38 - (-13512);
    a0 = LD32(v0-13512);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A16F88; }
    goto L_08A16F70;
L_08A16F70:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A16F88:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A16F90;
L_08A16F90:;
    goto L_08A16F70;
}

/* 08A16F98 */
rv_t func_08A16F98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A16F98:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A16E28(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16FAC;
L_08A16FAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A16FB8 */
rv_t func_08A16FB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A16FB8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A16E28(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A16FCC;
L_08A16FCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A16FD8 */
void func_08A16FD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A16FD8:;
    sp = sp - 128;
    v0 = D_08AEF838 - (-1992);
    s7 = D_08AEF83C - (-1988);
    f1 = BITSF(LD32(v0-1992));
    f0 = BITSF(LD32(s7-1988));
    v1 = D_08AEF830 - (-2000);
    v0 = D_08AEF834 - (-1996);
    f1 = f1 * f0;
    f2 = BITSF(LD32(v1-2000));
    f0 = BITSF(LD32(v0-1996));
    v1 = 20;
    s0 = a0 + 0;
    t1 = 999;
    v0 = 5;
    ST32(s0+80, v1);
    v1 = D_08AEF844 - (-1980);
    a0 = (u32)-1;
    fp = D_08AEF840 - (-1984);
    s6 = D_08AEF848 - (-1976);
    s1 = a1 + 0;
    ST32(s0+76, v0);
    v0 = 1;
    ST32(s0+92, FBITS(f0));
    ST32(s0+96, FBITS(f1));
    ST32(s0+60, FBITS(f2));
    ST32(sp+44, a2);
    ST32(s0, 0);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    ST32(s0+36, 0);
    ST32(s0+40, 0);
    ST32(s0+44, 0);
    ST32(s0+48, 0);
    ST32(s0+52, 0);
    ST32(s0+56, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST32(s0+72, 0);
    ST32(s0+84, 0);
    ST32(s0+88, 0);
    ST32(s0+100, 0);
    ST32(s0+104, 0);
    ST32(s0+108, 0);
    ST32(s0+112, 0);
    ST32(s0+116, 0);
    ST8(s0+268, a3);
    ST8(s0+269, t0);
    ST32(s0+120, 0);
    ST32(s0+124, 0);
    ST32(s0+128, 0);
    ST32(s0+132, 0);
    ST32(s0+136, 0);
    ST32(s0+140, 0);
    ST32(s0+144, 0);
    ST32(s0+148, 0);
    ST32(s0+152, 0);
    ST32(s0+156, 0);
    ST32(s0+160, 0);
    ST32(s0+164, 0);
    ST32(s0+168, 0);
    ST32(s0+172, 0);
    ST32(s0+176, 0);
    ST32(s0+180, 0);
    ST32(s0+184, t1);
    ST32(s0+188, 0);
    ST32(s0+192, 0);
    f0 = BITSF(LD32(v1-1980));
    v1 = 1062;
    ST32(s0+364, v1);
    f1 = BITSF(LD32(s6-1976));
    ST8(s0+324, v0);
    f20 = BITSF(LD32(fp-1984));
    v0 = LD32(sp+44);
    ST32(s0+196, a0);
    ST32(s0+200, 0);
    ST32(s0+204, 0);
    ST32(s0+208, 0);
    ST32(s0+212, 0);
    ST32(s0+216, 0);
    ST32(s0+220, a0);
    ST32(s0+236, 0);
    ST32(s0+256, 0);
    ST32(s0+260, 0);
    ST32(s0+264, t1);
    ST32(s0+272, 0);
    ST32(s0+276, 0);
    ST32(s0+344, a0);
    ST32(s0+332, FBITS(f0));
    ST32(s0+340, FBITS(f1));
    ST32(s0+352, t1);
    ST32(s0+280, 0);
    ST32(s0+284, a0);
    ST32(s0+288, 0);
    ST32(s0+296, 0);
    ST32(s0+300, 0);
    ST32(s0+304, v0);
    ST32(s0+308, 0);
    ST32(s0+312, 0);
    ST32(s0+316, 0);
    ST32(s0+320, 0);
    ST32(s0+328, FBITS(f20));
    ST8(s0+336, 0);
    ST32(s0+348, 0);
    ST32(s0+356, 0);
    cnd_ = a1 == 0;
    ST8(s0+360, 0);
    if (cnd_) { goto L_08A171D0; }
    goto L_08A171C8;
L_08A171C8:;
    v0 = LD32(a1);
    ST32(s0+152, v0);
    goto L_08A171D0;
L_08A171D0:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, t1, t2, t3);
    goto L_08A171DC;
L_08A171DC:;
    a1 = 0xc0aa0000u;
    a2 = 0x10000u;
    a0 = s1 + 0;
    a1 = a1 | 0x4661;
    a2 = a2 | 0xa7d2;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A171F4;
L_08A171F4:;
    ST32(s0+292, v0);
    a1 = 0xe9770000u;
    a0 = s1 + 0;
    a1 = a1 | 0x2a8d;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1720C;
L_08A1720C:;
    ST32(s0+12, v0);
    a1 = 0xaca90000u;
    a0 = s1 + 0;
    a1 = a1 | 0xcfad;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17224;
L_08A17224:;
    ST32(s0+4, v0);
    a1 = 0x4efe0000u;
    a0 = s1 + 0;
    a1 = a1 | 0xb1b3;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1723C;
L_08A1723C:;
    ST32(s0+320, v0);
    a1 = 0x8a940000u;
    a0 = s1 + 0;
    a1 = a1 | 0xc9e9;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17254;
L_08A17254:;
    ST32(s0+20, v0);
    a1 = 0x29920000u;
    a0 = s1 + 0;
    ST32(s0+16, v0);
    a1 = a1 | 0x8219;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17270;
L_08A17270:;
    ST32(s0+24, v0);
    a1 = 0x4ae10000u;
    a0 = s1 + 0;
    a1 = a1 | 0x7df0;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17288;
L_08A17288:;
    ST32(s0+28, v0);
    a1 = 0x94f20000u;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = a1 | 0xa763;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A172A0;
L_08A172A0:;
    cnd_ = v0 != 0;
    ST32(s0+32, v0);
    if (cnd_) { goto L_08A172B0; }
    goto L_08A172A8;
L_08A172A8:;
    v0 = LD32(s0+28);
    ST32(s0+32, v0);
    goto L_08A172B0;
L_08A172B0:;
    a1 = 0xe8b10000u;
    a0 = s1 + 0;
    a1 = a1 | 0x62ce;
    a2 = 0 + 0;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A172C4;
L_08A172C4:;
    ST32(s0+188, v0);
    a1 = 0xb57e0000u;
    a0 = s1 + 0;
    a1 = a1 | 0xd3a4;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A172DC;
L_08A172DC:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 4)) | ((v0 & 0x1) << 4);
    ST32(s0+364, v1);
    a1 = 0x84990000u;
    a0 = s1 + 0;
    a1 = a1 | 0x61b0;
    a2 = 1;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A172FC;
L_08A172FC:;
    ST8(s0+324, v0);
    a1 = 0xb37c0000u;
    a1 = a1 | 0x6f57;
    f12 = f20;
    a0 = s1 + 0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17314;
L_08A17314:;
    a1 = LD32(s0+16);
    cnd_ = a1 != 0;
    ST32(s0+204, FBITS(f0));
    if (cnd_) { goto L_08A17778; }
    goto L_08A17320;
L_08A17320:;
    a0 = LD32(s0+20);
    goto L_08A17324;
L_08A17324:;
    v1 = 0xc56c0000u;
    v0 = 0x72ab0000u;
    v1 = v1 | 0x8efd;
    v0 = v0 | 0x24ac;
    v1 = a0 ^ v1;
    v0 = a0 ^ v0;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    v0 = D_08AEF854 - (-1964);
    if (cnd_) { goto L_08A17770; }
    goto L_08A17350;
L_08A17350:;
    v0 = 0x25c30000u;
    v0 = v0 | 0x90ed;
    cnd_ = a0 == v0;
    v0 = 0x4b530000u;
    if (cnd_) { goto L_08A1776C; }
    goto L_08A17360;
L_08A17360:;
    v0 = v0 | 0xe4cf;
    cnd_ = a0 == v0;
    v0 = 0x769e0000u;
    if (cnd_) { goto L_08A1776C; }
    goto L_08A1736C;
L_08A1736C:;
    v0 = v0 | 0x4a0b;
    cnd_ = a0 == v0;
    f12 = BITSF(LD32(fp-1984));
    if (cnd_) { goto L_08A1776C; }
    goto L_08A17378;
L_08A17378:;
    a1 = 0xaab70000u;
    a0 = s1 + 0;
    a1 = a1 | 0x656d;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17388;
L_08A17388:;
    f12 = BITSF(LD32(s6-1976));
    ST32(s0+52, FBITS(f0));
    a1 = 0xb5c40000u;
    a0 = s1 + 0;
    a1 = a1 | 0x5fe6;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A173A0;
L_08A173A0:;
    ST32(s0+68, FBITS(f0));
    a1 = 0x18870000u;
    a0 = s1 + 0;
    a1 = a1 | 0xe03f;
    a2 = 4;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A173B8;
L_08A173B8:;
    ST32(s0+76, v0);
    a1 = 0x713b0000u;
    a0 = s1 + 0;
    a1 = a1 | 0x1b5f;
    a2 = 20;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A173D0;
L_08A173D0:;
    v1 = LD32(s0+76);
    ST32(s0+80, v0);
    a1 = 0xabd80000u;
    v1 = v1 - 1;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(s0+84, v0);
    a2 = 1;
    a0 = s1 + 0;
    a1 = a1 | 0xfd60;
    v1 = lo;
    ST32(s0+88, v1);
    s4 = 0x578d0000u;
    s3 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17408;
L_08A17408:;
    v1 = D_08AEF838 - (-1992);
    f12 = BITSF(LD32(v1-1992));
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 10)) | ((v0 & 0x1) << 10);
    ST32(s0+364, v1);
    a1 = 0x25b10000u;
    a0 = s1 + 0;
    a1 = a1 | 0xcdad;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1742C;
L_08A1742C:;
    f1 = BITSF(LD32(s7-1988));
    a1 = 0xe5bb0000u;
    a2 = 1;
    f0 = f0 * f1;
    a0 = s1 + 0;
    a1 = a1 | 0xaead;
    s4 = s4 | 0x33e1;
    ST32(s0+96, FBITS(f0));
    s2 = s0 + 240;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A17454;
L_08A17454:;
    ST32(s0+100, v0);
    f12 = BITSF(0);
    a1 = 0x95780000u;
    a0 = s1 + 0;
    a1 = a1 | 0xabed;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1746C;
L_08A1746C:;
    ST32(s0+56, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0x78ed0000u;
    a0 = s1 + 0;
    a1 = a1 | 0x25f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17484;
L_08A17484:;
    ST32(s0+104, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0x54940000u;
    a0 = s1 + 0;
    a1 = a1 | 0xfb81;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1749C;
L_08A1749C:;
    ST32(s0+112, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0x64a50000u;
    a0 = s1 + 0;
    a1 = a1 | 0x5217;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A174B4;
L_08A174B4:;
    v0 = D_08AEF858 - (-1960);
    f12 = BITSF(LD32(v0-1960));
    ST32(s0+116, FBITS(f0));
    a1 = 0xb5300000u;
    a0 = s1 + 0;
    a1 = a1 | 0x16b3;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A174D0;
L_08A174D0:;
    ST32(s0+72, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0xdbe60000u;
    a0 = s1 + 0;
    a1 = a1 | 0xf52a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A174E8;
L_08A174E8:;
    ST32(s0+180, FBITS(f0));
    a1 = 0xdb970000u;
    a0 = s1 + 0;
    a1 = a1 | 0x2e04;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17500;
L_08A17500:;
    ST32(s0+272, v0);
    a1 = 0xd0a00000u;
    a0 = s1 + 0;
    a1 = a1 | 0xea22;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17518;
L_08A17518:;
    ST32(s0+280, v0);
    a1 = 0x1c500000u;
    a0 = s1 + 0;
    a1 = a1 | 0x2915;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17530;
L_08A17530:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 8)) | ((v0 & 0x1) << 8);
    ST32(s0+364, v1);
    a1 = 0xff380000u;
    a2 = 0 + 0;
    a0 = s1 + 0;
    a1 = a1 | 0x674c;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17550;
L_08A17550:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 9)) | ((v0 & 0x1) << 9);
    ST32(s0+364, v1);
    f12 = BITSF(0);
    a1 = 0x8e930000u;
    a0 = s1 + 0;
    a1 = a1 | 0x9053;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17570;
L_08A17570:;
    ST32(s0+124, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0x8c230000u;
    a0 = s1 + 0;
    a1 = a1 | 0xf176;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17588;
L_08A17588:;
    ST32(s0+128, FBITS(f0));
    f12 = BITSF(0);
    a1 = 0xeb940000u;
    a0 = s1 + 0;
    a1 = a1 | 0x7aa6;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A175A0;
L_08A175A0:;
    ST32(s0+132, FBITS(f0));
    a1 = 0x83930000u;
    a0 = s1 + 0;
    a1 = a1 | 0xd2a5;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A175B8;
L_08A175B8:;
    ST32(s0+148, v0);
    a1 = 0xd38e0000u;
    a0 = s1 + 0;
    a1 = a1 | 0x50c3;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A175D0;
L_08A175D0:;
    ST32(s0+208, v0);
    a1 = 0x90150000u;
    a0 = s1 + 0;
    a1 = a1 | 0xce1e;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A175E8;
L_08A175E8:;
    ST32(s0+212, v0);
    a1 = 0x45a60000u;
    a0 = s1 + 0;
    a1 = a1 | 0xc0d0;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17600;
L_08A17600:;
    ST32(s0+216, v0);
    a1 = 0x676c0000u;
    a0 = s1 + 0;
    a1 = a1 | 0x34f2;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17618;
L_08A17618:;
    ST32(s0+260, v0);
    a1 = 0x972f0000u;
    a0 = s1 + 0;
    a1 = a1 | 0x54b9;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17630;
L_08A17630:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s0+364, v1);
    a1 = 0xf6910000u;
    a0 = s1 + 0;
    a1 = a1 | 0x7aef;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17650;
L_08A17650:;
    ST32(s0+192, v0);
    a1 = 0xd03d0000u;
    a0 = s1 + 0;
    a1 = a1 | 0x14d8;
    a2 = 1;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17668;
L_08A17668:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s0+364, v1);
    a1 = 0xc8b90000u;
    a0 = s1 + 0;
    a1 = a1 | 0xe1b8;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17688;
L_08A17688:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s0+364, v1);
    a1 = 0xac4b0000u;
    a0 = s1 + 0;
    a1 = a1 | 0xe1c5;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A176A8;
L_08A176A8:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 17)) | ((v0 & 0x1) << 17);
    ST32(s0+364, v1);
    a2 = s1 + 0;
    a0 = s0 + 0;
    a1 = LD32(s0+20);
    func_08A209B4(a0, a1, a2);
    goto L_08A176C4;
L_08A176C4:;
    a1 = 0xf09d0000u;
    a0 = s1 + 0;
    a1 = a1 | 0x3355;
    a2 = 1;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A176D8;
L_08A176D8:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 5)) | ((v0 & 0x1) << 5);
    ST32(s0+364, v1);
    a1 = 0xc4d20000u;
    a0 = s1 + 0;
    a1 = a1 | 0xb1e2;
    a2 = 0 + 0;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A176F8;
L_08A176F8:;
    ST32(s0+236, v0);
    goto L_08A176FC;
L_08A176FC:;
    f12 = BITSF(LD32(s6-1976));
    a1 = s3 + s4;
    a0 = s1 + 0;
    s3 = s3 + 1;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17710;
L_08A17710:;
    v0 = s3 < 0x4u;
    ST32(s2, FBITS(f0));
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08A176FC; }
    goto L_08A17720;
L_08A17720:;
    a1 = LD32(sp+44);
    a0 = s0 + 0;
    { rv_t r_ = func_08A19C8C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1772C;
L_08A1772C:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17734;
L_08A17734:;
    sp = sp + 128;
    return;
L_08A1776C:;
    v0 = D_08AEF854 - (-1964);
    goto L_08A17770;
L_08A17770:;
    f0 = BITSF(LD32(v0-1964));
    goto L_08A17388;
L_08A17778:;
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    a2 = sp + 32;
    ST32(sp+32, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1778C;
L_08A1778C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A17B24; }
    goto L_08A17794;
L_08A17794:;
    v0 = D_08ADEF2C - (-4308);
    s4 = LD32(v0-4308);
    goto L_08A1779C;
L_08A1779C:;
    cnd_ = v1 == 0;
    v1 = D_08ADEE88 - (-4472);
    if (cnd_) { goto L_08A17AE4; }
    goto L_08A177A4;
L_08A177A4:;
    v0 = LD32(v1-4472);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A17804; }
    goto L_08A177B0;
L_08A177B0:;
    a1 = v1 - 4472;
    a0 = 0 + 0;
    s5 = a1 + 0;
    goto L_08A177BC;
L_08A177BC:;
    v0 = a0 + a1;
    s2 = LD32(v0);
    a2 = sp + 36;
    a0 = s4 + 0;
    a1 = s2 + 0;
    ST32(sp+36, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A177D8;
L_08A177D8:;
    s3 = s3 + 1;
    a1 = s4 + 0;
    a2 = s2 + 0;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A17ACC; }
    goto L_08A177EC;
L_08A177EC:;
    v0 = s3 << 2;
    goto L_08A177F0;
L_08A177F0:;
    v1 = v0 + s5;
    a0 = v0 + 0;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    a1 = s5 + 0;
    if (cnd_) { goto L_08A177BC; }
    goto L_08A17804;
L_08A17804:;
    f20 = BITSF(LD32(fp-1984));
    a0 = LD32(sp+32);
    a1 = 0x8fbb0000u;
    a1 = a1 | 0x8757;
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1781C;
L_08A1781C:;
    f21 = BITSF(LD32(s6-1976));
    a0 = LD32(sp+32);
    ST32(s0+36, FBITS(f0));
    a1 = 0xbdde0000u;
    a1 = a1 | 0x31c2;
    f12 = f21;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17838;
L_08A17838:;
    ST32(s0+40, FBITS(f0));
    f12 = BITSF(0);
    a0 = LD32(sp+32);
    a1 = 0x63c10000u;
    a1 = a1 | 0x3f0f;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17850;
L_08A17850:;
    ST32(s0+164, FBITS(f0));
    f12 = BITSF(0);
    a0 = LD32(sp+32);
    a1 = 0x1a0c0000u;
    a1 = a1 | 0x46ff;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17868;
L_08A17868:;
    ST32(s0+168, FBITS(f0));
    f12 = BITSF(0);
    a0 = LD32(sp+32);
    a1 = 0xde190000u;
    a1 = a1 | 0x495a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17880;
L_08A17880:;
    v1 = D_08AEF830 - (-2000);
    f12 = BITSF(LD32(v1-2000));
    a0 = LD32(sp+32);
    ST32(s0+172, FBITS(f0));
    a1 = 0x84220000u;
    a1 = a1 | 0xfffe;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1789C;
L_08A1789C:;
    ST32(s0+60, FBITS(f0));
    f12 = BITSF(0);
    a0 = LD32(sp+32);
    a1 = 0x24d90000u;
    a1 = a1 | 0xc517;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A178B4;
L_08A178B4:;
    v0 = D_08AEF834 - (-1996);
    f12 = BITSF(LD32(v0-1996));
    a0 = LD32(sp+32);
    ST32(s0+64, FBITS(f0));
    a1 = 0x19560000u;
    a1 = a1 | 0x5259;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A178D0;
L_08A178D0:;
    ST32(s0+92, FBITS(f0));
    a1 = 0xaf3e0000u;
    a2 = (u32)-1;
    a0 = LD32(sp+32);
    a1 = a1 | 0xbdcc;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A178E8;
L_08A178E8:;
    ST32(s0+224, v0);
    v0 = D_08AEF84C - (-1972);
    a1 = 0xc3f10000u;
    f12 = BITSF(LD32(v0-1972));
    a0 = LD32(sp+32);
    a1 = a1 | 0xf774;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17904;
L_08A17904:;
    ST32(s0+228, FBITS(f0));
    a1 = 0x7ff0000u;
    f12 = f21;
    a0 = LD32(sp+32);
    a1 = a1 | 0x779a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1791C;
L_08A1791C:;
    ST32(s0+232, FBITS(f0));
    a1 = 0xc5d0000u;
    a1 = a1 | 0x69e4;
    a0 = LD32(sp+32);
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17934;
L_08A17934:;
    ST32(s0+328, FBITS(f0));
    a1 = 0xc8ab0000u;
    f12 = f20;
    a0 = LD32(sp+32);
    a1 = a1 | 0x3688;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1794C;
L_08A1794C:;
    f1 = BITSF(LD32(s7-1988));
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(sp+32);
    f0 = f0 * f1;
    a1 = 0x87ba0000u;
    a1 = a1 | 0x7997;
    a2 = 0 + 0;
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[0]=0.63661977236f;}
    {u32 a_=sp+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(s0+340, v0);
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17990;
L_08A17990:;
    v1 = LD32(s0+364);
    v1 = (v1 & ~(0x1u << 15)) | ((v0 & 0x1) << 15);
    ST32(s0+364, v1);
    a1 = 0x47280000u;
    a1 = a1 | 0xcc13;
    a0 = LD32(sp+32);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A179B0;
L_08A179B0:;
    ST32(s0+316, v0);
    a0 = LD32(s0+152);
    { rv_t r_ = func_088E9FDC(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A179BC;
L_08A179BC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+152); goto L_08A17AC4; }
    goto L_08A179C4;
L_08A179C4:;
    v0 = LD32(s0+316);
    cnd_ = v0 != 0;
    a1 = 0xaf3e0000u;
    if (cnd_) { goto L_08A17A34; }
    goto L_08A179D0;
L_08A179D0:;
    a1 = LD32(s0+24);
    goto L_08A179D4;
L_08A179D4:;
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s0+20); goto L_08A17324; }
    goto L_08A179DC;
L_08A179DC:;
    a0 = 0x8a940000u;
    a0 = a0 | 0xc9e9;
    a2 = sp + 40;
    ST32(sp+40, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A179F0;
L_08A179F0:;
    cnd_ = v0 != 0;
    v1 = D_08AEF844 - (-1980);
    if (cnd_) { goto L_08A17A18; }
    goto L_08A179F8;
L_08A179F8:;
    a1 = LD32(s0+24);
    a0 = 0x5f6b0000u;
    a0 = a0 | 0x9be0;
    a2 = sp + 40;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17A0C;
L_08A17A0C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+20); goto L_08A17324; }
    goto L_08A17A14;
L_08A17A14:;
    v1 = D_08AEF844 - (-1980);
    goto L_08A17A18;
L_08A17A18:;
    f12 = BITSF(LD32(v1-1980));
    a0 = LD32(sp+40);
    a1 = 0xc5d0000u;
    a1 = a1 | 0x69e4;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17A2C;
L_08A17A2C:;
    ST32(s0+332, FBITS(f0));
    goto L_08A17320;
L_08A17A34:;
    a0 = s1 + 0;
    a1 = a1 | 0xbdcc;
    a2 = (u32)-1;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17A44;
L_08A17A44:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = v1 >> 24;
    if (cnd_) { goto L_08A179D0; }
    goto L_08A17A54;
L_08A17A54:;
    f6 = BITSF(v0);
    v0 = v1 & 0xff;
    f0 = BITSF(v0);
    v0 = (v1 >> 8) & 0xff;
    v1 = (v1 >> 16) & 0xff;
    f1 = BITSF(v0);
    f2 = BITSF(v1);
    f3 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f1);
    f5 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f6);
    v0 = D_08AEF850 - (-1968);
    f0 = BITSF(LD32(v0-1968));
    a0 = LD32(s0+316);
    a1 = LD32(s0+152);
    f1 = f1 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    a2 = sp + 16;
    ST32(sp+24, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+16, FBITS(f5));
    ST32(sp+28, FBITS(f1));
    v0 = func_089FB4AC(a0, a1, a2, 0, 0, 0);
    goto L_08A17AB8;
L_08A17AB8:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+24); goto L_08A179D4; }
    goto L_08A17AC0;
L_08A17AC0:;
    v0 = LD32(s0+152);
    goto L_08A17AC4;
L_08A17AC4:;
    ST32(s0+316, v0);
    goto L_08A179D0;
L_08A17ACC:;
    a0 = LD32(sp+32);
    { u64 r_ = func_0881BB34(a0, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17AD4;
L_08A17AD4:;
    cnd_ = v0 == 0;
    v0 = s3 << 2;
    if (cnd_) { goto L_08A177F0; }
    goto L_08A17ADC;
L_08A17ADC:;
    ST32(s0+20, s2);
    goto L_08A17804;
L_08A17AE4:;
    a1 = LD32(s0+16);
    a0 = 0x5f6b0000u;
    a0 = a0 | 0x9be0;
    a2 = sp + 32;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17AF8;
L_08A17AF8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A17B18; }
    goto L_08A17B00;
L_08A17B00:;
    v0 = D_08ADEF28 - (-4312);
    s4 = LD32(v0-4312);
    goto L_08A17B08;
L_08A17B08:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s0+20); goto L_08A17324; }
    goto L_08A17B10;
L_08A17B10:;
    v1 = D_08ADEE88 - (-4472);
    goto L_08A177A4;
L_08A17B18:;
    v0 = D_08ADEE80 - (-4480);
    s4 = LD32(v0-4480);
    goto L_08A17B08;
L_08A17B24:;
    v0 = D_08ADEE80 - (-4480);
    s4 = LD32(v0-4480);
    goto L_08A1779C;
}

/* 08A17B30 */
void func_08A17B30(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A17B30:;
    sp = sp - 16;
    a1 = a0 + 8;
    s1 = a0 + 0;
    v0 = LD32(a0+8);
    a0 = D_08B30B5C - (2908);
    cnd_ = v0 != 0;
    a0 = a0 + 2908;
    if (cnd_) { goto L_08A17BA4; }
    goto L_08A17B58;
L_08A17B58:;
    s0 = LD32(s1+276);
    goto L_08A17B5C;
L_08A17B5C:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A17B8C; }
    goto L_08A17B64;
L_08A17B64:;
    a0 = s1 + 0;
    func_08A20CB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A17B6C;
L_08A17B6C:;
    a1 = s1 + 220;
    a0 = s1 + 0;
    { rv_t r_ = func_08A23554(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17B78;
L_08A17B78:;
    sp = sp + 16;
    return;
L_08A17B8C:;
    func_08A23BB8();
    goto L_08A17B94;
L_08A17B94:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A17B9C;
L_08A17B9C:;
    goto L_08A17B64;
L_08A17BA4:;
    func_088E89F8(a0, a1);
    goto L_08A17BAC;
L_08A17BAC:;
    s0 = LD32(s1+276);
    goto L_08A17B5C;
}

/* 08A17BB4 */
u32 func_08A17BB4(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A17BB4:;
    f1 = BITSF(LD32(a0+48));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A17BD0; }
    goto L_08A17BCC;
L_08A17BCC:;
    v0 = 1;
    goto L_08A17BD0;
L_08A17BD0:;
    return v0;
}

/* 08A17BD8 */
rv_t func_08A17BD8(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A17BD8:;
    sp = sp - 16;
    v1 = LD32(a0+364);
    v0 = v1 & 0x40;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A17C34; }
    goto L_08A17BF0;
L_08A17BF0:;
    v0 = v1 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A17C38; }
    goto L_08A17BFC;
L_08A17BFC:;
    v0 = LD32(a0+80);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) {  goto L_08A17C38; }
    goto L_08A17C08;
L_08A17C08:;
    a2 = LD32(a0+100);
    cnd_ = (s32)a2 <= 0;
    if (cnd_) { a2 = 1; goto L_08A17C34; }
    goto L_08A17C14;
L_08A17C14:;
    a3 = LD32(a0+84);
    v0 = (s32)a3 < (s32)a2;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x10;
    if (cnd_) { goto L_08A17C44; }
    goto L_08A17C28;
L_08A17C28:;
    v0 = a3 - a2;
    ST32(a0+84, v0);
    a2 = 1;
    goto L_08A17C34;
L_08A17C34:;
    goto L_08A17C38;
L_08A17C38:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A17C44:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A17C54; }
    goto L_08A17C4C;
L_08A17C4C:;
    a2 = 0 + 0;
    goto L_08A17C34;
L_08A17C54:;
    a1 = 0 + 0;
    f0 = func_08A19804(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A17C5C;
L_08A17C5C:;
    a2 = 0 + 0;
    goto L_08A17C34;
}

/* 08A17C64 */
float func_08A17C64(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A17C64:;
    sp = sp - 16;
    v0 = LD32(a0+304);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A17C88; }
    goto L_08A17C7C;
L_08A17C7C:;
    v0 = LD_U8(v0+232);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A17DE0; }
    goto L_08A17C88;
L_08A17C88:;
    a1 = LD32(s0);
    v0 = LD32(s0+364);
    v1 = a1 ^ 0x3;
    v1 = v1 < 0x1u;
    a0 = a1 < 0x2u;
    a0 = a0 | v1;
    v1 = v0 | 0x800;
    cnd_ = a0 == 0;
    ST32(s0+364, v1);
    if (cnd_) { goto L_08A17DDC; }
    goto L_08A17CAC;
L_08A17CAC:;
    f2 = BITSF(LD32(s0+52));
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s0+100); goto L_08A17D00; }
    goto L_08A17CC4;
L_08A17CC4:;
    f1 = BITSF(LD32(s0+48));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v1 & 0x2;
    if (cnd_) { goto L_08A17CE8; }
    goto L_08A17CD8;
L_08A17CD8:;
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A17DE0; }
    goto L_08A17CE4;
L_08A17CE4:;
    v0 = v1 & 0x2;
    goto L_08A17CE8;
L_08A17CE8:;
    cnd_ = v0 == 0;
    v0 = (v1 >> 13) & 0x1;
    if (cnd_) { goto L_08A17EE0; }
    goto L_08A17CF0;
L_08A17CF0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A17EE0; }
    goto L_08A17CF8;
L_08A17CF8:;
    ST32(s0+48, FBITS(f2));
    goto L_08A17CFC;
L_08A17CFC:;
    a0 = LD32(s0+100);
    goto L_08A17D00;
L_08A17D00:;
    v0 = (s32)a0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s0+104)); goto L_08A17D48; }
    goto L_08A17D0C;
L_08A17D0C:;
    f1 = BITSF(LD32(s0+56));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+104)); goto L_08A17D4C; }
    goto L_08A17D24;
L_08A17D24:;
    v0 = LD32(s0+296);
    cnd_ = v0 != 0;
    v0 = v0 < 0x2u;
    if (cnd_) { goto L_08A17D3C; }
    goto L_08A17D30;
L_08A17D30:;
    ST32(s0+296, a0);
    v0 = a0 + 0;
    v0 = v0 < 0x2u;
    goto L_08A17D3C;
L_08A17D3C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+48, FBITS(f1)); goto L_08A17D44; }
    goto L_08A17D44;
L_08A17D44:;
    f1 = BITSF(LD32(s0+104));
    goto L_08A17D48;
L_08A17D48:;
    f0 = BITSF(0);
    goto L_08A17D4C;
L_08A17D4C:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+112)); goto L_08A17D6C; }
    goto L_08A17D5C;
L_08A17D5C:;
    v0 = a1 ^ 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A17ED8; }
    goto L_08A17D68;
L_08A17D68:;
    f1 = BITSF(LD32(s0+112));
    goto L_08A17D6C;
L_08A17D6C:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A17E24; }
    goto L_08A17D80;
L_08A17D80:;
    v0 = LD32(s0+80);
    cnd_ = (s32)v0 <= 0;
    v0 = 1;
    if (cnd_) { goto L_08A17DAC; }
    goto L_08A17D8C;
L_08A17D8C:;
    cnd_ = (s32)a0 <= 0;
    if (cnd_) { goto L_08A17DAC; }
    goto L_08A17D94;
L_08A17D94:;
    v1 = LD32(s0+84);
    v0 = (s32)v1 < (s32)a0;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = (s32)v1 < (s32)a0;
    if (cnd_) { goto L_08A17E04; }
    goto L_08A17DA8;
L_08A17DA8:;
    v0 = 1;
    goto L_08A17DAC;
L_08A17DAC:;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(s0+84); goto L_08A17E00; }
    goto L_08A17DB4;
L_08A17DB4:;
    a0 = s0 + 0;
    a1 = 4;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17DC0;
L_08A17DC0:;
    v0 = D_08AEF85C - (-1956);
    goto L_08A17DC4;
L_08A17DC4:;
    f0 = BITSF(LD32(s0+120));
    goto L_08A17DC8;
L_08A17DC8:;
    f1 = BITSF(LD32(v0-1956));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A17DEC; }
    goto L_08A17DDC;
L_08A17DDC:;
    goto L_08A17DE0;
L_08A17DE0:;
    sp = sp + 16;
    return f0;
L_08A17DEC:;
    a1 = 6;
    goto L_08A17DF0;
L_08A17DF0:;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17DF8;
L_08A17DF8:;
    goto L_08A17DE0;
L_08A17E00:;
    v0 = (s32)v1 < (s32)a0;
    goto L_08A17E04;
L_08A17E04:;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08AEF85C - (-1956); goto L_08A17DC4; }
    goto L_08A17E10;
L_08A17E10:;
    a0 = s0 + 0;
    goto L_08A17E14;
L_08A17E14:;
    a1 = 0 + 0;
    f0 = func_08A19804(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A17E1C;
L_08A17E1C:;
    v0 = D_08AEF85C - (-1956);
    goto L_08A17DC4;
L_08A17E24:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A17BD8(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17E2C;
L_08A17E2C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A17DE0; }
    goto L_08A17E34;
L_08A17E34:;
    a1 = 1;
    a0 = s0 + 0;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A17E40;
L_08A17E40:;
    a1 = LD32(s0+20);
    a0 = s0 + 0;
    a2 = 0 + 0;
    f0 = func_08A17F10(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A17E50;
L_08A17E50:;
    a0 = LD32(s0+20);
    v1 = 0xc56c0000u;
    v0 = 0x72ab0000u;
    v1 = v1 | 0x8efd;
    v0 = v0 | 0x24ac;
    v1 = a0 ^ v1;
    v0 = a0 ^ v0;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A17ED0; }
    goto L_08A17E80;
L_08A17E80:;
    v0 = 0x25c30000u;
    v0 = v0 | 0x90ed;
    cnd_ = a0 == v0;
    v0 = 0x4b530000u;
    if (cnd_) { goto L_08A17ED0; }
    goto L_08A17E90;
L_08A17E90:;
    v0 = v0 | 0xe4cf;
    cnd_ = a0 == v0;
    v0 = 0x769e0000u;
    if (cnd_) { goto L_08A17ED0; }
    goto L_08A17E9C;
L_08A17E9C:;
    v0 = v0 | 0x4a0b;
    cnd_ = a0 == v0;
    if (cnd_) { a1 = 1; goto L_08A17EA8; }
    goto L_08A17EA8;
L_08A17EA8:;
    v0 = LD32(s0+84);
    v1 = LD32(s0+100);
    v0 = (s32)v0 < (s32)v1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEF85C - (-1956);
    if (cnd_) { goto L_08A17DC4; }
    goto L_08A17EC0;
L_08A17EC0:;
    cnd_ = a1 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+120)); goto L_08A17DC8; }
    goto L_08A17EC8;
L_08A17EC8:;
    a0 = s0 + 0;
    goto L_08A17E14;
L_08A17ED0:;
    a1 = 1;
    goto L_08A17EA8;
L_08A17ED8:;
    a1 = 3;
    goto L_08A17DF0;
L_08A17EE0:;
    f3 = BITSF(0);
    fcc = FCMP(f1, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s0+100); goto L_08A17D00; }
    goto L_08A17EF4;
L_08A17EF4:;
    f0 = f1 + f2;
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    f1 = f0;
    if (cnd_) { goto L_08A17EF4; }
    goto L_08A17F08;
L_08A17F08:;
    ST32(s0+48, FBITS(f0));
    goto L_08A17CFC;
}

/* 08A17F10 */
float func_08A17F10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A17F10:;
    sp = sp - 48;
    v1 = 0x2a940000u;
    v1 = v1 | 0x5544;
    s2 = a0 + 0;
    s3 = a2 & 0xff;
    s1 = a1 + 0;
    v0 = LD32(a0+16);
    a0 = 0x8060000u;
    a0 = a0 | 0xf7ee;
    v0 = v0 ^ v1;
    cnd_ = a1 == a0;
    v1 = 0 < v0;
    if (cnd_) { goto L_08A186C0; }
    goto L_08A17F54;
L_08A17F54:;
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    v0 = 0x7b080000u;
    if (cnd_) { goto L_08A186C8; }
    goto L_08A17F60;
L_08A17F60:;
    v0 = 0x8060000u;
    v0 = v0 | 0xf719;
    goto L_08A17F68;
L_08A17F68:;
    cnd_ = s1 == v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A17F70; }
    goto L_08A17F70;
L_08A17F70:;
    cnd_ = v1 == 0;
    v0 = 0x72ab0000u;
    if (cnd_) { goto L_08A17F88; }
    goto L_08A17F78;
L_08A17F78:;
    v0 = LD32(s2+148);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s2 + 0; goto L_08A18698; }
    goto L_08A17F84;
L_08A17F84:;
    v0 = 0x72ab0000u;
    goto L_08A17F88;
L_08A17F88:;
    v0 = v0 | 0x24ac;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18168; }
    goto L_08A17F94;
L_08A17F94:;
    cnd_ = v0 != 0;
    v0 = 0xc8d30000u;
    if (cnd_) { goto L_08A183C4; }
    goto L_08A17F9C;
L_08A17F9C:;
    v0 = 0x2a940000u;
    v0 = v0 | 0x5544;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A1817C; }
    goto L_08A17FAC;
L_08A17FAC:;
    cnd_ = v0 != 0;
    v0 = 0x3e2c0000u;
    if (cnd_) { goto L_08A18250; }
    goto L_08A17FB4;
L_08A17FB4:;
    v0 = 0x84a0000u;
    v0 = v0 | 0xfbe2;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A181F8; }
    goto L_08A17FC4;
L_08A17FC4:;
    cnd_ = v0 != 0;
    v0 = 0x23650000u;
    if (cnd_) { goto L_08A180A8; }
    goto L_08A17FCC;
L_08A17FCC:;
    v0 = 0x6740000u;
    v0 = v0 | 0x326a;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18090; }
    goto L_08A17FDC;
L_08A17FDC:;
    cnd_ = v0 != 0;
    v0 = 0x8060000u;
    if (cnd_) { goto L_08A18068; }
    goto L_08A17FE4;
L_08A17FE4:;
    v0 = 0x350000u;
    v0 = v0 | 0x4b4d;
    cnd_ = s1 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A18058; }
    goto L_08A17FF4;
L_08A17FF4:;
    a0 = LD32(s2+304);
    goto L_08A17FF8;
L_08A17FF8:;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18008;
L_08A18008:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1801C;
L_08A1801C:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A1802C;
L_08A1802C:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = s3 + 0;
    f0 = func_08A1C5E4(a0, a1, a2);
    goto L_08A1803C;
L_08A1803C:;
    goto L_08A18040;
L_08A18040:;
    sp = sp + 48;
    return f0;
L_08A18058:;
    a1 = 12;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18060;
L_08A18060:;
    ST32(s2+196, 0);
    goto L_08A1803C;
L_08A18068:;
    v0 = v0 | 0xf719;
    cnd_ = s1 == v0;
    v0 = 0x8060000u;
    if (cnd_) { goto L_08A18080; }
    goto L_08A18074;
L_08A18074:;
    v0 = v0 | 0xf7ee;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A18080;
L_08A18080:;
    a0 = s2 + 0;
    f0 = func_08A22630(a0);
    goto L_08A18088;
L_08A18088:;
    goto L_08A18040;
L_08A18090:;
    a0 = s2 + 0;
    a1 = 12;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1809C;
L_08A1809C:;
    v1 = 1;
    goto L_08A180A0;
L_08A180A0:;
    ST32(s2+196, v1);
    goto L_08A1803C;
L_08A180A8:;
    v0 = v0 | 0x8cc3;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A1817C; }
    goto L_08A180B4;
L_08A180B4:;
    cnd_ = v0 != 0;
    v0 = 0x25c30000u;
    if (cnd_) { goto L_08A1810C; }
    goto L_08A180BC;
L_08A180BC:;
    v0 = 0x10ed0000u;
    v0 = v0 | 0xd4e;
    cnd_ = s1 == v0;
    v0 = 0x1b670000u;
    if (cnd_) { goto L_08A180F0; }
    goto L_08A180CC;
L_08A180CC:;
    v0 = v0 | 0x90dc;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A180D8;
L_08A180D8:;
    a0 = s2 + 0;
    func_08A207FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A180E0;
L_08A180E0:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A1A190(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A180E8;
L_08A180E8:;
    goto L_08A18040;
L_08A180F0:;
    a0 = s2 + 0;
    a1 = 8;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A180FC;
L_08A180FC:;
    a0 = s2 + 0;
    f0 = func_08A1E8A8(a0);
    goto L_08A18104;
L_08A18104:;
    goto L_08A18040;
L_08A1810C:;
    v0 = v0 | 0x90ed;
    cnd_ = s1 == v0;
    v0 = 0x29890000u;
    if (cnd_) { goto L_08A18168; }
    goto L_08A18118;
L_08A18118:;
    v0 = v0 | 0x3637;
    cnd_ = s1 != v0;
    a0 = LD32(s2+304);
    if (cnd_) { goto L_08A17FF8; }
    goto L_08A18124;
L_08A18124:;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18134;
L_08A18134:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A18148;
L_08A18148:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A18158;
L_08A18158:;
    a0 = s2 + 0;
    f0 = func_08A1E05C(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A18160;
L_08A18160:;
    goto L_08A18040;
L_08A18168:;
    a0 = s2 + 0;
    goto L_08A1816C;
L_08A1816C:;
    a1 = s1 + 0;
    f0 = func_08A1EE08(a0, a1);
    goto L_08A18174;
L_08A18174:;
    goto L_08A18040;
L_08A1817C:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A1E8E8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18184;
L_08A18184:;
    v1 = LD32(s2+16);
    v0 = 0x2a940000u;
    v0 = v0 | 0x5544;
    cnd_ = v1 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A181E8; }
    goto L_08A18198;
L_08A18198:;
    a0 = LD32(s2+304);
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A181AC;
L_08A181AC:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A181C0;
L_08A181C0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A181D0;
L_08A181D0:;
    a1 = LD32(s2+16);
    a0 = s2 + 0;
    a2 = s1 + 0;
    f0 = func_08A1F478(a0, a1, a2, 0, 0);
    goto L_08A181E0;
L_08A181E0:;
    goto L_08A18040;
L_08A181E8:;
    a1 = 8;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A181F0;
L_08A181F0:;
    goto L_08A18040;
L_08A181F8:;
    a0 = LD32(s2+304);
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1820C;
L_08A1820C:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A18220;
L_08A18220:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A18230;
L_08A18230:;
    a1 = 0x84a0000u;
    a0 = s2 + 0;
    a2 = s3 + 0;
    a1 = a1 | 0xfbe2;
    goto L_08A18240;
L_08A18240:;
    f0 = func_08A1CD78(a0, a1, a2);
    goto L_08A18248;
L_08A18248:;
    goto L_08A18040;
L_08A18250:;
    v0 = v0 | 0x2ac5;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18374; }
    goto L_08A1825C;
L_08A1825C:;
    cnd_ = v0 != 0;
    v0 = 0x4b0a0000u;
    if (cnd_) { goto L_08A1830C; }
    goto L_08A18264;
L_08A18264:;
    v0 = 0x31120000u;
    v0 = v0 | 0x5d8a;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A1817C; }
    goto L_08A18274;
L_08A18274:;
    cnd_ = v0 != 0;
    v0 = 0x36220000u;
    if (cnd_) { goto L_08A18294; }
    goto L_08A1827C;
L_08A1827C:;
    v0 = 0x2ea50000u;
    v0 = v0 | 0xd87d;
    goto L_08A18284;
L_08A18284:;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A1828C;
L_08A1828C:;
    goto L_08A1817C;
L_08A18294:;
    v0 = v0 | 0x332a;
    cnd_ = s1 == v0;
    v0 = 0x391b0000u;
    if (cnd_) { goto L_08A182F0; }
    goto L_08A182A0;
L_08A182A0:;
    v0 = v0 | 0xd415;
    cnd_ = s1 != v0;
    a0 = LD32(s2+304);
    if (cnd_) { goto L_08A17FF8; }
    goto L_08A182AC;
L_08A182AC:;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A182BC;
L_08A182BC:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A182D0;
L_08A182D0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A182E0;
L_08A182E0:;
    a0 = s2 + 0;
    f0 = func_08A1D1E4(a0, 0);
    goto L_08A182E8;
L_08A182E8:;
    goto L_08A18040;
L_08A182F0:;
    a0 = s2 + 0;
    a1 = 9;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A182FC;
L_08A182FC:;
    a0 = s2 + 0;
    f0 = func_08A1E8C8(a0);
    goto L_08A18304;
L_08A18304:;
    goto L_08A18040;
L_08A1830C:;
    v0 = v0 | 0x5cc9;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18360; }
    goto L_08A18318;
L_08A18318:;
    cnd_ = v0 != 0;
    v0 = 0x4b530000u;
    if (cnd_) { goto L_08A18338; }
    goto L_08A18320;
L_08A18320:;
    v0 = 0x42270000u;
    v0 = v0 | 0xf65a;
    cnd_ = s1 == v0;
    v0 = 0x46650000u;
    if (cnd_) { goto L_08A1817C; }
    goto L_08A18330;
L_08A18330:;
    v0 = v0 | 0x7316;
    goto L_08A18284;
L_08A18338:;
    v0 = v0 | 0xe4cf;
    cnd_ = s1 == v0;
    v0 = 0x536c0000u;
    if (cnd_) { goto L_08A18168; }
    goto L_08A18344;
L_08A18344:;
    v0 = v0 | 0x95a9;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A18350;
L_08A18350:;
    a0 = s2 + 0;
    f0 = func_08A1E934(a0, t2, t3);
    goto L_08A18358;
L_08A18358:;
    goto L_08A18040;
L_08A18360:;
    a0 = s2 + 0;
    goto L_08A18364;
L_08A18364:;
    a1 = s1 + 0;
    f0 = func_08A216C8(a0, a1, t2, t3);
    goto L_08A1836C;
L_08A1836C:;
    goto L_08A18040;
L_08A18374:;
    v0 = LD32(s2+364);
    v0 = v0 & 0x80;
    cnd_ = v0 == 0;
    a1 = 9;
    if (cnd_) { goto L_08A183A8; }
    goto L_08A18384;
L_08A18384:;
    a1 = 10;
    a0 = s2 + 0;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18390;
L_08A18390:;
    a0 = s2 + 0;
    func_08A1E92C();
    goto L_08A18398;
L_08A18398:;
    v0 = LD32(s2+364);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    goto L_08A183A0;
L_08A183A0:;
    ST32(s2+364, v0);
    goto L_08A1803C;
L_08A183A8:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A183B0;
L_08A183B0:;
    a0 = s2 + 0;
    f0 = func_08A1E8C8(a0);
    goto L_08A183B8;
L_08A183B8:;
    v0 = LD32(s2+364);
    v0 = v0 | 0x80;
    goto L_08A183A0;
L_08A183C4:;
    v0 = v0 | 0x46d4;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A1817C; }
    goto L_08A183D0;
L_08A183D0:;
    cnd_ = v0 != 0;
    v0 = 0xf4a20000u;
    if (cnd_) { goto L_08A18568; }
    goto L_08A183D8;
L_08A183D8:;
    v0 = 0x8ee80000u;
    v0 = v0 | 0xd26f;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18554; }
    goto L_08A183E8;
L_08A183E8:;
    cnd_ = v0 != 0;
    v0 = 0xb39c0000u;
    if (cnd_) { goto L_08A1848C; }
    goto L_08A183F0;
L_08A183F0:;
    v0 = 0x769e0000u;
    v0 = v0 | 0x4a0b;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18168; }
    goto L_08A18400;
L_08A18400:;
    cnd_ = v0 != 0;
    v0 = 0x7b080000u;
    if (cnd_) { goto L_08A18420; }
    goto L_08A18408;
L_08A18408:;
    v0 = 0x769b0000u;
    v0 = v0 | 0xead1;
    goto L_08A18410;
L_08A18410:;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A18418;
L_08A18418:;
    a0 = s2 + 0;
    goto L_08A18364;
L_08A18420:;
    v0 = v0 | 0x6e76;
    cnd_ = s1 == v0;
    v0 = 0x8af70000u;
    if (cnd_) { goto L_08A1847C; }
    goto L_08A1842C;
L_08A1842C:;
    v0 = v0 | 0x5923;
    cnd_ = s1 != v0;
    a0 = LD32(s2+304);
    if (cnd_) { goto L_08A17FF8; }
    goto L_08A18438;
L_08A18438:;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18448;
L_08A18448:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1845C;
L_08A1845C:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A1846C;
L_08A1846C:;
    a0 = s2 + 0;
    f0 = func_08A21D00(a0, 0, 0);
    goto L_08A18474;
L_08A18474:;
    goto L_08A18040;
L_08A1847C:;
    a0 = s2 + 0;
    f0 = func_08A23088(a0);
    goto L_08A18484;
L_08A18484:;
    goto L_08A18040;
L_08A1848C:;
    v0 = v0 | 0x40a8;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18540; }
    goto L_08A18498;
L_08A18498:;
    cnd_ = v0 != 0;
    v0 = 0xb8a10000u;
    if (cnd_) { goto L_08A18520; }
    goto L_08A184A0;
L_08A184A0:;
    v0 = 0xadd30000u;
    v0 = v0 | 0x66ea;
    cnd_ = s1 == v0;
    v0 = 0xb07b0000u;
    if (cnd_) { goto L_08A184B8; }
    goto L_08A184B0;
L_08A184B0:;
    v0 = v0 | 0x16df;
    goto L_08A18410;
L_08A184B8:;
    a0 = LD32(s2+304);
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A184C0;
L_08A184C0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A184D8; }
    goto L_08A184C8;
L_08A184C8:;
    a0 = s2 + 0;
    f0 = func_08A21780(a0);
    goto L_08A184D0;
L_08A184D0:;
    goto L_08A18040;
L_08A184D8:;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A184E8;
L_08A184E8:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A184FC;
L_08A184FC:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A1850C;
L_08A1850C:;
    a1 = 0xadd30000u;
    a0 = s2 + 0;
    a1 = a1 | 0x66ea;
    a2 = 0 + 0;
    goto L_08A18240;
L_08A18520:;
    v0 = v0 | 0x6d10;
    cnd_ = s1 == v0;
    v0 = 0xc56c0000u;
    if (cnd_) { goto L_08A1817C; }
    goto L_08A1852C;
L_08A1852C:;
    v0 = v0 | 0x8efd;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A18538;
L_08A18538:;
    a0 = s2 + 0;
    goto L_08A1816C;
L_08A18540:;
    a0 = s2 + 0;
    a1 = 12;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1854C;
L_08A1854C:;
    v1 = 2;
    goto L_08A180A0;
L_08A18554:;
    a0 = s2 + 0;
    a1 = 12;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18560;
L_08A18560:;
    v1 = 3;
    goto L_08A180A0;
L_08A18568:;
    v0 = v0 | 0xac2b;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18688; }
    goto L_08A18574;
L_08A18574:;
    cnd_ = v0 != 0;
    v0 = 0xf9b70000u;
    if (cnd_) { goto L_08A18610; }
    goto L_08A1857C;
L_08A1857C:;
    v0 = 0xe3740000u;
    v0 = v0 | 0xc413;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A182F0; }
    goto L_08A1858C;
L_08A1858C:;
    cnd_ = v0 != 0;
    v0 = 0xeeda0000u;
    if (cnd_) { goto L_08A185E8; }
    goto L_08A18594;
L_08A18594:;
    v0 = 0xda0c0000u;
    v0 = v0 | 0xae3b;
    cnd_ = s1 != v0;
    a0 = LD32(s2+304);
    if (cnd_) { goto L_08A17FF8; }
    goto L_08A185A4;
L_08A185A4:;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A185B4;
L_08A185B4:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A185C8;
L_08A185C8:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A185D8;
L_08A185D8:;
    a0 = s2 + 0;
    f0 = func_08A1F9B0(a0);
    goto L_08A185E0;
L_08A185E0:;
    goto L_08A18040;
L_08A185E8:;
    v0 = v0 | 0x80d;
    cnd_ = s1 == v0;
    v0 = 0xf3030000u;
    if (cnd_) { goto L_08A1817C; }
    goto L_08A185F4;
L_08A185F4:;
    v0 = v0 | 0x830d;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A18600;
L_08A18600:;
    a0 = s2 + 0;
    f0 = func_08A212C0(a0);
    goto L_08A18608;
L_08A18608:;
    goto L_08A18040;
L_08A18610:;
    v0 = v0 | 0x706b;
    cnd_ = s1 == v0;
    v0 = v0 < s1;
    if (cnd_) { goto L_08A18600; }
    goto L_08A1861C;
L_08A1861C:;
    cnd_ = v0 != 0;
    v0 = 0xfcab0000u;
    if (cnd_) { goto L_08A18660; }
    goto L_08A18624;
L_08A18624:;
    v0 = 0xf81a0000u;
    v0 = v0 | 0xdd30;
    cnd_ = s1 == v0;
    v0 = 0xf9680000u;
    if (cnd_) { goto L_08A18650; }
    goto L_08A18634;
L_08A18634:;
    v0 = v0 | 0xc3bb;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A18640;
L_08A18640:;
    a0 = s2 + 0;
    f0 = func_08A1E9D0(a0, t2, t3);
    goto L_08A18648;
L_08A18648:;
    goto L_08A18040;
L_08A18650:;
    a0 = s2 + 0;
    f0 = func_08A22D54(a0);
    goto L_08A18658;
L_08A18658:;
    goto L_08A18040;
L_08A18660:;
    v0 = v0 | 0x2c09;
    cnd_ = s1 == v0;
    v0 = 0xfd900000u;
    if (cnd_) { goto L_08A180F0; }
    goto L_08A1866C;
L_08A1866C:;
    v0 = v0 | 0x85c9;
    cnd_ = s1 != v0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A17FF8; }
    goto L_08A18678;
L_08A18678:;
    a0 = s2 + 0;
    f0 = func_08A215E8(a0, t1, t2, t3);
    goto L_08A18680;
L_08A18680:;
    goto L_08A18040;
L_08A18688:;
    a0 = s2 + 0;
    f0 = func_08A20394(a0);
    goto L_08A18690;
L_08A18690:;
    goto L_08A18040;
L_08A18698:;
    a2 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A186A4;
L_08A186A4:;
    a1 = LD32(s2+148);
    a0 = s2 + 0;
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A186B8;
L_08A186B8:;
    v0 = 0x72ab0000u;
    goto L_08A17F88;
L_08A186C0:;
    v1 = 0 + 0;
    goto L_08A17F70;
L_08A186C8:;
    v0 = v0 | 0x6e76;
    cnd_ = a1 == v0;
    v0 = 0xf81a0000u;
    if (cnd_) { goto L_08A186C0; }
    goto L_08A186D4;
L_08A186D4:;
    v0 = v0 | 0xdd30;
    goto L_08A17F68;
}

/* 08A186DC */
void func_08A186DC(u32 a0)
{
    u32 v0 = 0;
L_08A186DC:;
    v0 = LD32(a0+364);
    v0 = (v0 & ~(0x1u << 11)) | ((0 & 0x1) << 11);
    ST32(a0+364, v0);
    return;
}

/* 08A186EC */
void func_08A186EC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A186EC:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_08A1BA0C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A18704;
L_08A18704:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    cnd_ = s1 == v0;
    if (cnd_) { f1 = BITSF(LD32(s0+44)); goto L_08A1874C; }
    goto L_08A18714;
L_08A18714:;
    a0 = s0 + 0;
    func_08A1A36C(a0, 0, 0);
    goto L_08A1871C;
L_08A1871C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18728;
L_08A18728:;
    v0 = LD32(s0+344);
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    if (cnd_) { f1 = BITSF(LD32(s0+44)); goto L_08A1874C; }
    goto L_08A18738;
L_08A18738:;
    f0 = BITSF(LD32(s0+348));
    ST32(s0, v0);
    ST32(s0+344, v1);
    ST32(s0+44, FBITS(f0));
    f1 = BITSF(LD32(s0+44));
    goto L_08A1874C;
L_08A1874C:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = LD32(s0+364);
    if (cnd_) { goto L_08A187A0; }
    goto L_08A18760;
L_08A18760:;
    v0 = a0 & 0x10;
    cnd_ = v0 == 0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_08A187A4; }
    goto L_08A1876C;
L_08A1876C:;
    v0 = LD32(s0+84);
    cnd_ = v0 != 0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_08A187A4; }
    goto L_08A18778;
L_08A18778:;
    v1 = LD32(s0);
    v0 = 13;
    cnd_ = v1 == v0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_08A187A4; }
    goto L_08A18788;
L_08A18788:;
    a0 = s0 + 0;
    func_08A1A36C(a0, 0, 0);
    goto L_08A18790;
L_08A18790:;
    a0 = s0 + 0;
    a1 = 13;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1879C;
L_08A1879C:;
    a0 = LD32(s0+364);
    goto L_08A187A0;
L_08A187A0:;
    v0 = a0 & 0x2;
    goto L_08A187A4;
L_08A187A4:;
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s0+120)); goto L_08A187C4; }
    goto L_08A187AC;
L_08A187AC:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+48));
    f0 = f0 - f1;
    ST32(s0+48, FBITS(f0));
    f2 = BITSF(LD32(s0+120));
    goto L_08A187C4;
L_08A187C4:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s0+312); goto L_08A18824; }
    goto L_08A187D8;
L_08A187D8:;
    v1 = LD32(s0);
    v0 = 6;
    cnd_ = v1 == v0;
    v0 = 5;
    if (cnd_) { goto L_08A18820; }
    goto L_08A187E8;
L_08A187E8:;
    cnd_ = v1 == v0;
    v0 = a0 & 0x4000;
    if (cnd_) { goto L_08A18820; }
    goto L_08A187F0;
L_08A187F0:;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_08A189E0; }
    goto L_08A187F8;
L_08A187F8:;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+128));
    goto L_08A18800;
L_08A18800:;
    f0 = f1 * f0;
    f1 = BITSF(0);
    f0 = f2 - f0;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A1881C; }
    goto L_08A1881C;
L_08A1881C:;
    ST32(s0+120, FBITS(f0));
    goto L_08A18820;
L_08A18820:;
    a0 = LD32(s0+312);
    goto L_08A18824;
L_08A18824:;
    cnd_ = a0 == 0;
    if (cnd_) { a1 = LD32(s0+8); goto L_08A18898; }
    goto L_08A1882C;
L_08A1882C:;
    f1 = BITSF(LD32(s0+52));
    f2 = BITSF(0);
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    v1 = D_08AEF868 - (-1944);
    if (cnd_) { goto L_08A1884C; }
    goto L_08A18844;
L_08A18844:;
    f0 = BITSF(LD32(s0+48));
    f2 = f0 / f1;
    goto L_08A1884C;
L_08A1884C:;
    f0 = BITSF(LD32(v1-1944));
    v0 = D_08AEF864 - (-1948);
    f1 = BITSF(LD32(v0-1948));
    f2 = f2 + f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = f1;
    if (cnd_) { goto L_08A18880; }
    goto L_08A1886C;
L_08A1886C:;
    f2 = f2 - f0;
    goto L_08A18870;
L_08A18870:;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = f2 - f0; goto L_08A18870; }
    goto L_08A18880;
L_08A18880:;
    f0 = BITSF(LD32(a0+52));
    f1 = BITSF(LD32(s0+120));
    f0 = f2 * f0;
    ST32(a0+120, FBITS(f1));
    ST32(a0+48, FBITS(f0));
    a1 = LD32(s0+8);
    goto L_08A18898;
L_08A18898:;
    cnd_ = a1 != 0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_08A18978; }
    goto L_08A188A0;
L_08A188A0:;
    v0 = LD32(s0+364);
    goto L_08A188A4;
L_08A188A4:;
    v1 = 4608;
    v0 = v0 & 0x1200;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(s0+304); goto L_08A18944; }
    goto L_08A188B4;
L_08A188B4:;
    f1 = BITSF(LD32(s0+300));
    goto L_08A188B8;
L_08A188B8:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+20); goto L_08A188F0; }
    goto L_08A188CC;
L_08A188CC:;
    v0 = LD32(s0+364);
    v0 = v0 & 0x800;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+20); goto L_08A188F0; }
    goto L_08A188DC;
L_08A188DC:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(s0+300, FBITS(f0));
    v1 = LD32(s0+20);
    goto L_08A188F0;
L_08A188F0:;
    v0 = 0x29890000u;
    v0 = v0 | 0x3637;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A18934; }
    goto L_08A18900;
L_08A18900:;
    v0 = 0xf4a20000u;
    v0 = v0 | 0xac2b;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A18924; }
    goto L_08A18910;
L_08A18910:;
    goto L_08A18914;
L_08A18914:;
    sp = sp + 32;
    return;
L_08A18924:;
    a0 = s0 + 0;
    func_08A189F0(a0);
    goto L_08A1892C;
L_08A1892C:;
    goto L_08A18914;
L_08A18934:;
    a0 = s0 + 0;
    func_08A192CC(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1893C;
L_08A1893C:;
    v1 = LD32(s0+20);
    goto L_08A18900;
L_08A18944:;
    v1 = LD32(a0);
    v0 = LD32(v1+208);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18954;
L_08A18954:;
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s0+300)); goto L_08A188B8; }
    goto L_08A1895C;
L_08A1895C:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+412);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18970;
L_08A18970:;
    f1 = BITSF(LD32(s0+300));
    goto L_08A188B8;
L_08A18978:;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A18980;
L_08A18980:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A189D8; }
    goto L_08A18988;
L_08A18988:;
    a0 = LD32(s0+304);
    a1 = LD32(s0+292);
    a2 = sp + 0;
    v1 = LD32(a0);
    a3 = 0 + 0;
    t0 = 1;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A189B8;
L_08A189B8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+364); goto L_08A188A4; }
    goto L_08A189C0;
L_08A189C0:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088E4910(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A189D0;
L_08A189D0:;
    v0 = LD32(s0+364);
    goto L_08A188A4;
L_08A189D8:;
    ST32(s0+8, 0);
    goto L_08A188A0;
L_08A189E0:;
    v1 = D_08AEF860 - (-1952);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(v1-1952));
    goto L_08A18800;
}

/* 08A189F0 */
void func_08A189F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_08A189F0:;
    sp = sp - 336;
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    f20 = BITSF(0);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+288));
    f0 = f0 - f1;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    ST32(a0+288, FBITS(f0));
    if (cnd_) { goto L_08A18A84; }
    goto L_08A18A4C;
L_08A18A4C:;
    goto L_08A18A50;
L_08A18A50:;
    sp = sp + 336;
    return;
L_08A18A84:;
    a0 = LD32(a0+304);
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A18A8C;
L_08A18A8C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+288, 0); goto L_08A18A4C; }
    goto L_08A18A94;
L_08A18A94:;
    a0 = LD32(s0+304);
    a1 = LD32(a0);
    v0 = LD32(a1-12);
    v1 = a0 + v0;
    f0 = BITSF(LD32(v1+80));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+288, 0); goto L_08A18A4C; }
    goto L_08A18AB8;
L_08A18AB8:;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+288, 0); goto L_08A18A4C; }
    goto L_08A18AC4;
L_08A18AC4:;
    v0 = LD_U8(a0+68);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+288, 0); goto L_08A18A4C; }
    goto L_08A18AD0;
L_08A18AD0:;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+288, 0); goto L_08A18A4C; }
    goto L_08A18ADC;
L_08A18ADC:;
    v0 = LD32(s0+308);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a1+240); goto L_08A18AF4; }
    goto L_08A18AEC;
L_08A18AEC:;
    ST32(s0+288, 0);
    goto L_08A18A4C;
L_08A18AF4:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18AFC;
L_08A18AFC:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp, FBITS(f0));
    a1 = D_08C2A6C8 - (-22840);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    v0 = LD32(s0+304);
    v1 = LD32(v0);
    a0 = LD32(v1-16);
    v1 = 999;
    v0 = v0 + a0;
    a2 = LD32(v0+4);
    cnd_ = a2 == v1;
    a3 = a1 - 22840;
    if (cnd_) { goto L_08A18C18; }
    goto L_08A18B68;
L_08A18B68:;
    v0 = LD32(a3+4);
    v1 = LD32(a1-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A18BB8; }
    goto L_08A18B8C;
L_08A18B8C:;
    a0 = LD32(a1);
    goto L_08A18B90;
L_08A18B90:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A192AC; }
    goto L_08A18BA8;
L_08A18BA8:;
    a1 = LD32(a1+4);
    goto L_08A18BAC;
L_08A18BAC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A18B90; }
    goto L_08A18BB4;
L_08A18BB4:;
    a0 = 0 + 0;
    goto L_08A18BB8;
L_08A18BB8:;
    cnd_ = a0 == 0;
    f0 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_08A18C1C; }
    goto L_08A18BC0;
L_08A18BC0:;
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18BD0;
L_08A18BD0:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    goto L_08A18C18;
L_08A18C18:;
    f0 = BITSF(LD32(sp+8));
    goto L_08A18C1C;
L_08A18C1C:;
    a1 = D_08C2C054 - (-16300);
    v1 = a1 - 16300;
    v0 = LD32(v1+8);
    a0 = LD32(v1+4);
    ST32(sp+48, FBITS(f0));
    v0 = v0 + 1;
    s1 = sp + 64;
    f0 = BITSF(LD32(sp+32));
    ST32(sp+52, 0);
    ST32(v1+8, v0);
    ST32(sp+56, FBITS(f0));
    ST32(sp+64, v1);
    ST32(sp+68, 0);
    cnd_ = a0 == 0;
    ST32(sp+72, 0);
    if (cnd_) { goto L_08A18CA4; }
    goto L_08A18C58;
L_08A18C58:;
    a1 = LD32(a1-16300);
    a2 = a0 + 0;
    goto L_08A18C60;
L_08A18C60:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08A18C94; }
    goto L_08A18C78;
L_08A18C78:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+72); goto L_08A18CA8; }
    goto L_08A18C88;
L_08A18C88:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A18C78; }
    goto L_08A18C94;
L_08A18C94:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A18C60; }
    goto L_08A18CA4;
L_08A18CA4:;
    a0 = LD32(sp+72);
    goto L_08A18CA8;
L_08A18CA8:;
    cnd_ = a0 == 0;
    v0 = D_08AEF86C - (-1940);
    if (cnd_) { goto L_08A18F40; }
    goto L_08A18CB0;
L_08A18CB0:;
    f20 = BITSF(LD32(v0-1940));
    v1 = D_08AEF87C - (-1924);
    v0 = D_08AEF878 - (-1928);
    f23 = BITSF(LD32(v1-1924));
    f22 = BITSF(LD32(v0-1928));
    f21 = BITSF(0);
    s6 = D_08B25AC0 - (23232);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    s5 = s6 + 23232;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    s3 = LD32(a0);
    goto L_08A18CDC;
L_08A18CDC:;
    a1 = 1;
    a0 = s1 + 0;
    func_08ACD4F4(a0, a1);
    goto L_08A18CE8;
L_08A18CE8:;
    a0 = LD32(s3+24);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A18CF0;
L_08A18CF0:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A18F34; }
    goto L_08A18CF8;
L_08A18CF8:;
    s4 = sp + 80;
    a1 = v0 + 0;
    a0 = s4 + 0;
    func_088EB720(a0, a1);
    goto L_08A18D08;
L_08A18D08:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18D1C;
L_08A18D1C:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+80));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f0 - f2;
    f1 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+88));
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f1 - f3;
    f4 = f0 - f4;
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v1 = FBITS(f3);
    a0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    ST32(sp+96, FBITS(f2));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+100, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+104, FBITS(f4));
    if (cnd_) { goto L_08A18F34; }
    goto L_08A18D7C;
L_08A18D7C:;
    {u32 a_=sp+(208);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(v0);}
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(a0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    f2 = BITSF(LD32(sp+96));
    if (cnd_) { goto L_08A18DE4; }
    goto L_08A18DA8;
L_08A18DA8:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(224);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f4 = BITSF(v0);
    {a1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+112, a1);
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f4));
    ST32(sp+96, a1);
    ST32(sp+100, v0);
    ST32(sp+104, FBITS(f4));
    f2 = BITSF(LD32(sp+96));
    goto L_08A18DE4;
L_08A18DE4:;
    f3 = BITSF(LD32(sp+100));
    f4 = BITSF(LD32(sp+104));
    v0 = D_08AEF870 - (-1936);
    f1 = BITSF(LD32(v0-1936));
    a1 = FBITS(f2);
    v0 = LD32(sp+48);
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a1);}
    {v[0]=BITSF(v0);}
    a1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[5]=BITSF(v0);}
    v0 = LD32(sp+52);
    {v[6]=BITSF(a1);}
    {v[1]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = D_08AEF874 - (-1932);
    if (cnd_) { goto L_08A18E5C; }
    goto L_08A18E48;
L_08A18E48:;
    f1 = BITSF(LD32(v0-1932));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08A18E5C; }
    goto L_08A18E5C;
L_08A18E5C:;
    fcc = FCMP(f22, f1, 12);
    cnd_ = !fcc;
    a0 = LD32(sp+72);
    if (cnd_) { goto L_08A18F38; }
    goto L_08A18E6C;
L_08A18E6C:;
    a0 = LD32(s0+304);
    ST32(sp+148, 0);
    ST32(sp+144, 0);
    ST32(sp+140, 0);
    ST32(sp+136, 0);
    ST32(sp+132, 0);
    cnd_ = a0 != 0;
    ST32(sp+128, 0);
    if (cnd_) { goto L_08A191B8; }
    goto L_08A18E8C;
L_08A18E8C:;
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(FBITS(f3) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    {u32 a_=sp+(272);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    a1 = FBITS(f2);
    v0 = FBITS(f3);
    {v[8]=BITSF(a1);}
    a1 = FBITS(f4);
    {v[9]=BITSF(v0);}
    {v[10]=BITSF(a1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+112, FBITS(f2));
    fcc = FCMP(f0, f21, 2);
    ST32(sp+116, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+120, FBITS(f4));
    if (cnd_) { goto L_08A18F0C; }
    goto L_08A18ED4;
L_08A18ED4:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(224);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {a1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+160, a1);
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f3));
    ST32(sp+112, a1);
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f3));
    goto L_08A18F0C;
L_08A18F0C:;
    a0 = s4 + 0;
    a1 = sp + 112;
    a2 = sp + 128;
    a3 = 0 + 0;
    t0 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_08834B8C(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A18F2C;
L_08A18F2C:;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp+132));
    if (cnd_) { goto L_08A18FE8; }
    goto L_08A18F34;
L_08A18F34:;
    a0 = LD32(sp+72);
    goto L_08A18F38;
L_08A18F38:;
    cnd_ = a0 != 0;
    if (cnd_) { s3 = LD32(a0); goto L_08A18CDC; }
    goto L_08A18F40;
L_08A18F40:;
    s1 = LD32(sp+64);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A18A4C; }
    goto L_08A18F54;
L_08A18F54:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A18A4C; }
    goto L_08A18F60;
L_08A18F60:;
    v0 = LD32(s1);
    goto L_08A18F64;
L_08A18F64:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A18FB8; }
    goto L_08A18F78;
L_08A18F78:;
    v0 = LD_U8(s0+8);
    goto L_08A18F7C;
L_08A18F7C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A18FE0; }
    goto L_08A18F84;
L_08A18F84:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A18FD0; }
    goto L_08A18F8C;
L_08A18F8C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A18F94;
L_08A18F94:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A18FA0;
L_08A18FA0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A18FAC;
L_08A18FAC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A18F7C; }
    goto L_08A18FB4;
L_08A18FB4:;
    v1 = LD32(s1+4);
    goto L_08A18FB8;
L_08A18FB8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A18F64; }
    goto L_08A18FC8;
L_08A18FC8:;
    goto L_08A18A50;
L_08A18FD0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A18F94;
L_08A18FE0:;
    s0 = LD32(s0+4);
    goto L_08A18FAC;
L_08A18FE8:;
    f2 = BITSF(LD32(sp+128));
    f3 = BITSF(LD32(sp+136));
    f1 = BITSF(LD32(sp+144));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+140));
    a2 = LD32(s0+304);
    a1 = 0xece0000u;
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+148));
    f2 = f2 * f23;
    a1 = a1 | 0xdb34;
    f1 = f1 + f0;
    f3 = f3 * f23;
    ST32(sp+160, FBITS(f2));
    s1 = sp + 160;
    f1 = f1 * f23;
    ST32(sp+164, FBITS(f3));
    ST32(sp+168, FBITS(f1));
    v0 = LD32(a2);
    v1 = LD32(v0-12);
    a2 = a2 + v1;
    a0 = LD32(a2+100);
    { rv_t r_ = func_0880A7A0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19044;
L_08A19044:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A191A8; }
    goto L_08A1904C;
L_08A1904C:;
    v1 = LD32(s6+23232);
    goto L_08A19050;
L_08A19050:;
    a3 = LD32(s5+4);
    a0 = 5;
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a3;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a2 = LD32(s0+304);
    a3 = a3 + v1;
    a0 = s0 + 0;
    ST32(s6+23232, v1);
    ST32(s5+4, a3);
    a1 = hi;
    a1 = a1 + 2;
    { rv_t r_ = func_08A1C248(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19090;
L_08A19090:;
    v0 = s2 + 56;
    f0 = BITSF(LD32(s2+56));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    a2 = 0x38b30000u;
    a0 = s1 + 0;
    a1 = sp + 176;
    a2 = a2 | 0x6a6b;
    a3 = 0 + 0;
    t0 = 15;
    ST32(sp+176, FBITS(f0));
    ST32(sp+180, FBITS(f1));
    ST32(sp+184, FBITS(f2));
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A190D4;
L_08A190D4:;
    v0 = D_08AEF880 - (-1920);
    f0 = BITSF(LD32(v0-1920));
    a3 = LD32(s0+304);
    a1 = s1 + 0;
    ST32(s0+288, FBITS(f0));
    a0 = s3 + 0;
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    a2 = LD32(a3+4);
    func_089FA828(a0, a1, a2);
    goto L_08A19100;
L_08A19100:;
    s1 = LD32(sp+64);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A18A4C; }
    goto L_08A19114;
L_08A19114:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A18A4C; }
    goto L_08A19120;
L_08A19120:;
    v0 = LD32(s1);
    goto L_08A19124;
L_08A19124:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A19178; }
    goto L_08A19138;
L_08A19138:;
    v0 = LD_U8(s0+8);
    goto L_08A1913C;
L_08A1913C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A191A0; }
    goto L_08A19144;
L_08A19144:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A19190; }
    goto L_08A1914C;
L_08A1914C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A19154;
L_08A19154:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A19160;
L_08A19160:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A1916C;
L_08A1916C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A1913C; }
    goto L_08A19174;
L_08A19174:;
    v1 = LD32(s1+4);
    goto L_08A19178;
L_08A19178:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A19124; }
    goto L_08A19188;
L_08A19188:;
    goto L_08A18A50;
L_08A19190:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A19154;
L_08A191A0:;
    s0 = LD32(s0+4);
    goto L_08A1916C;
L_08A191A8:;
    a1 = s1 + 0;
    func_08969A7C(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A191B0;
L_08A191B0:;
    v1 = LD32(s6+23232);
    goto L_08A19050;
L_08A191B8:;
    { rv_t r_ = func_08A05694(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A191C0;
L_08A191C0:;
    cnd_ = v0 != 0;
    f2 = BITSF(LD32(sp+96));
    if (cnd_) { goto L_08A191D4; }
    goto L_08A191C8;
L_08A191C8:;
    f3 = BITSF(LD32(sp+100));
    f4 = BITSF(LD32(sp+104));
    goto L_08A18E8C;
L_08A191D4:;
    a0 = LD32(s0+304);
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A191DC;
L_08A191DC:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    if (cnd_) { f2 = BITSF(LD32(sp+96)); goto L_08A191C8; }
    goto L_08A191E8;
L_08A191E8:;
    a0 = LD32(s0+304);
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A191F0;
L_08A191F0:;
    a1 = LD32(v0+16);
    a2 = LD32(s0+304);
    v1 = LD32(a1+4);
    a1 = a1 + 4;
    ST32(sp+128, v1);
    v0 = LD32(a1+4);
    ST32(sp+132, v0);
    v1 = LD32(a1+8);
    ST32(sp+136, v1);
    v0 = LD32(a1+12);
    ST32(sp+140, v0);
    v1 = LD32(a1+16);
    ST32(sp+144, v1);
    v0 = LD32(a1+20);
    ST32(sp+148, v0);
    v1 = LD32(a2);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1923C;
L_08A1923C:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+132));
    f2 = BITSF(LD32(sp+96));
    f3 = BITSF(LD32(sp+100));
    f0 = f0 + f1;
    f4 = BITSF(LD32(sp+104));
    ST32(sp+132, FBITS(f0));
    f0 = BITSF(LD32(sp+128));
    f1 = BITSF(LD32(v0));
    f0 = f0 + f1;
    ST32(sp+128, FBITS(f0));
    f0 = BITSF(LD32(sp+140));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f1;
    ST32(sp+140, FBITS(f0));
    f0 = BITSF(LD32(sp+136));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f1;
    ST32(sp+136, FBITS(f0));
    f0 = BITSF(LD32(sp+148));
    f1 = BITSF(LD32(v0+8));
    f0 = f0 + f1;
    ST32(sp+148, FBITS(f0));
    f0 = BITSF(LD32(sp+144));
    f1 = BITSF(LD32(v0+8));
    f0 = f0 + f1;
    ST32(sp+144, FBITS(f0));
    goto L_08A18E8C;
L_08A192AC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A18BAC; }
    goto L_08A192B8;
L_08A192B8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A18BAC; }
    goto L_08A192C4;
L_08A192C4:;
    goto L_08A18BB8;
}

/* 08A192CC */
void func_08A192CC(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A192CC:;
    sp = sp - 112;
    v0 = 999;
    a2 = LD32(a0+184);
    cnd_ = a2 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A196F8; }
    goto L_08A192F4;
L_08A192F4:;
    a0 = D_08C2C0A0 - (-16224);
    v1 = a0 - 16224;
    v0 = LD32(v1+4);
    a1 = LD32(a0-16224);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A1934C; }
    goto L_08A19320;
L_08A19320:;
    a0 = LD32(a1);
    goto L_08A19324;
L_08A19324:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A196D8; }
    goto L_08A1933C;
L_08A1933C:;
    a1 = LD32(a1+4);
    goto L_08A19340;
L_08A19340:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A19324; }
    goto L_08A19348;
L_08A19348:;
    a0 = 0 + 0;
    goto L_08A1934C;
L_08A1934C:;
    cnd_ = a0 == 0;
    v0 = 999;
    if (cnd_) { goto L_08A196D0; }
    goto L_08A19354;
L_08A19354:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v0 = 999;
    a0 = a0 + v1;
    a2 = LD32(a0+252);
    cnd_ = a2 == v0;
    if (cnd_) { v1 = LD32(a0); goto L_08A196B0; }
    goto L_08A19370;
L_08A19370:;
    a0 = D_08C2AEC8 - (-20792);
    v1 = a0 - 20792;
    v0 = LD32(v1+4);
    a1 = LD32(a0-20792);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A193C8; }
    goto L_08A1939C;
L_08A1939C:;
    a0 = LD32(a1);
    goto L_08A193A0;
L_08A193A0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A19690; }
    goto L_08A193B8;
L_08A193B8:;
    a1 = LD32(a1+4);
    goto L_08A193BC;
L_08A193BC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A193A0; }
    goto L_08A193C4;
L_08A193C4:;
    s1 = 0 + 0;
    goto L_08A193C8;
L_08A193C8:;
    v1 = LD32(s2+304);
    goto L_08A193CC;
L_08A193CC:;
    a1 = D_08C2A9D8 - (-22056);
    a3 = a1 - 22056;
    a0 = LD32(v1);
    v0 = LD32(a0-16);
    v1 = v1 + v0;
    a2 = LD32(v1+4);
    v0 = 999;
    cnd_ = a2 == v0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A19440; }
    goto L_08A193F0;
L_08A193F0:;
    v0 = LD32(a3+4);
    v1 = LD32(a1-22056);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A19440; }
    goto L_08A19414;
L_08A19414:;
    a1 = LD32(a0);
    goto L_08A19418;
L_08A19418:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A19670; }
    goto L_08A19430;
L_08A19430:;
    a0 = LD32(a0+4);
    goto L_08A19434;
L_08A19434:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_08A19418; }
    goto L_08A1943C;
L_08A1943C:;
    s3 = 0 + 0;
    goto L_08A19440;
L_08A19440:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = s2 + 0; goto L_08A19660; }
    goto L_08A19448;
L_08A19448:;
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s2 + 0; goto L_08A19660; }
    goto L_08A19454;
L_08A19454:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s2 + 0; goto L_08A19660; }
    goto L_08A19460;
L_08A19460:;
    v0 = LD32(s1);
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_08A19660; }
    goto L_08A1947C;
L_08A1947C:;
    v1 = LD32(s2+276);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A194D0; }
    goto L_08A19488;
L_08A19488:;
    v0 = LD_U8(v1+24);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s2 + 0; goto L_08A19660; }
    goto L_08A19494;
L_08A19494:;
    v0 = LD32(s3+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_08A19660; }
    goto L_08A194A4;
L_08A194A4:;
    v0 = LD32(v1+4);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+16); goto L_08A19588; }
    goto L_08A194B4;
L_08A194B4:;
    v0 = LD32(s2+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    a0 = 0x8001;
    if (cnd_) { goto L_08A194E8; }
    goto L_08A194C4;
L_08A194C4:;
    a0 = LD32(s2+276);
    func_08A23FC4(a0);
    goto L_08A194CC;
L_08A194CC:;
    goto L_08A194D0;
L_08A194D0:;
    sp = sp + 112;
    return;
L_08A194E8:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A194F8;
L_08A194F8:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A194C4; }
    goto L_08A19500;
L_08A19500:;
    s0 = LD32(v0+24);
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_08A1950C;
L_08A1950C:;
    v0 = D_08AEF884 - (-1916);
    f0 = BITSF(LD32(v0-1916));
    a2 = LD32(s2+304);
    ST32(s0+12, FBITS(f0));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19540;
L_08A19540:;
    ST32(s0+8, v0);
    a0 = s3 + 0;
    a1 = 1;
    v1 = LD32(s1);
    a3 = LD32(s2+304);
    a2 = 1;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s3, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(s3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19580;
L_08A19580:;
    goto L_08A194C4;
L_08A19588:;
    v0 = D_08B1BD10 - (-17136);
    v0 = v0 - 17136;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a1 = LD32(v1);
    a0 = s1 + 0;
    a2 = sp + 0;
    func_089C07BC(a0, a1, a2);
    goto L_08A195A8;
L_08A195A8:;
    f0 = BITSF(LD32(sp+4));
    s0 = sp + 16;
    a2 = 1;
    ST32(s3+860, FBITS(f0));
    a0 = s0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A195C4;
L_08A195C4:;
    a0 = LD32(s2+276);
    a1 = s0 + 0;
    func_08A23E9C(a0, a1);
    goto L_08A195D0;
L_08A195D0:;
    a0 = sp + 32;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A195E0;
L_08A195E0:;
    f0 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+36));
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(s2+92));
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+40));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    f3 = f3 - f0;
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    ST32(sp+16, FBITS(f2));
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A19660; }
    goto L_08A19650;
L_08A19650:;
    a1 = sp + 0;
    func_08A1E738(a0, a1);
    goto L_08A19658;
L_08A19658:;
    goto L_08A194C4;
L_08A19660:;
    a1 = s3 + 0;
    func_08A1E844(a0, a1);
    goto L_08A19668;
L_08A19668:;
    goto L_08A194D0;
L_08A19670:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08A19430; }
    goto L_08A1967C;
L_08A1967C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A19434; }
    goto L_08A19688;
L_08A19688:;
    goto L_08A19440;
L_08A19690:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A193B8; }
    goto L_08A1969C;
L_08A1969C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A193BC; }
    goto L_08A196A8;
L_08A196A8:;
    v1 = LD32(s2+304);
    goto L_08A193CC;
L_08A196B0:;
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A196BC;
L_08A196BC:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    func_08A1E738(a0, a1);
    goto L_08A196C8;
L_08A196C8:;
    goto L_08A194D0;
L_08A196D0:;
    ST32(s2+184, v0);
    goto L_08A194CC;
L_08A196D8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A19340; }
    goto L_08A196E4;
L_08A196E4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A19340; }
    goto L_08A196F0;
L_08A196F0:;
    goto L_08A1934C;
L_08A196F8:;
    a1 = D_08C2C0A0 - (-16224);
    v0 = a1 - 16224;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+48, v0);
    v1 = v1 + 1;
    s0 = sp + 48;
    ST32(v0+8, v1);
    ST32(sp+56, 0);
    cnd_ = a0 == 0;
    ST32(sp+52, 0);
    if (cnd_) { goto L_08A19770; }
    goto L_08A19724;
L_08A19724:;
    a1 = LD32(a1-16224);
    a2 = a0 + 0;
    goto L_08A1972C;
L_08A1972C:;
    a0 = LD32(s0+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s0+8, v1);
    if (cnd_) { goto L_08A19760; }
    goto L_08A19744;
L_08A19744:;
    v1 = LD32(s0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+56);
    if (cnd_) { goto L_08A19774; }
    goto L_08A19754;
L_08A19754:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A19744; }
    goto L_08A19760;
L_08A19760:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_08A1972C; }
    goto L_08A19770;
L_08A19770:;
    v0 = LD32(sp+56);
    goto L_08A19774;
L_08A19774:;
    cnd_ = v0 == 0;
    s1 = 0x29890000u;
    if (cnd_) { goto L_08A197A8; }
    goto L_08A1977C;
L_08A1977C:;
    s1 = s1 | 0x3637;
    t0 = LD32(v0);
    goto L_08A19784;
L_08A19784:;
    a0 = s0 + 0;
    v0 = LD32(t0+84);
    cnd_ = v0 == s1;
    a1 = 1;
    if (cnd_) { goto L_08A197CC; }
    goto L_08A19794;
L_08A19794:;
    { u64 r_ = func_08AC4ED0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1979C;
L_08A1979C:;
    v0 = LD32(sp+56);
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(v0); goto L_08A19784; }
    goto L_08A197A8;
L_08A197A8:;
    a0 = LD32(sp+48);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A194CC; }
    goto L_08A197BC;
L_08A197BC:;
    func_08AD0C6C(a0, t1, t2, t3);
    goto L_08A197C4;
L_08A197C4:;
    goto L_08A194D0;
L_08A197CC:;
    v0 = LD32(s2+304);
    a3 = LD32(t0+104);
    v1 = LD32(v0);
    a2 = LD32(v1-16);
    v0 = v0 + a2;
    v1 = LD32(v0+4);
    cnd_ = a3 != v1;
    if (cnd_) { goto L_08A19794; }
    goto L_08A197EC;
L_08A197EC:;
    v0 = LD32(t0);
    v1 = LD32(v0-16);
    v1 = t0 + v1;
    v0 = LD32(v1+4);
    ST32(s2+184, v0);
    goto L_08A197A8;
}

/* 08A19804 */
float func_08A19804(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A19804:;
    sp = sp - 32;
    s1 = a1 & 0xff;
    v0 = LD32(a0);
    v0 = v0 ^ 0x2;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A198FC; }
    goto L_08A1982C;
L_08A1982C:;
    v0 = LD32(a0+364);
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A19900; }
    goto L_08A1983C;
L_08A1983C:;
    v0 = LD_U8(a0+336);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A19900; }
    goto L_08A19848;
L_08A19848:;
    v0 = D_08C2CBFC - (-13316);
    v1 = LD_U8(v0-13316);
    cnd_ = v1 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A199A4; }
    goto L_08A19858;
L_08A19858:;
    a0 = LD32(a0+304);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08A199AC; }
    goto L_08A19864;
L_08A19864:;
    v1 = LD32(s0+76);
    goto L_08A19868;
L_08A19868:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { s2 = 1; goto L_08A19874; }
    goto L_08A19874;
L_08A19874:;
    a1 = LD32(s0+80);
    v0 = LD32(s0+84);
    v1 = a1 - v0;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s0+88); goto L_08A19894; }
    goto L_08A19888;
L_08A19888:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A19900; }
    goto L_08A19890;
L_08A19890:;
    a0 = LD32(s0+88);
    goto L_08A19894;
L_08A19894:;
    v0 = (s32)a0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A198A8; }
    goto L_08A198A0;
L_08A198A0:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A19948; }
    goto L_08A198A8;
L_08A198A8:;
    cnd_ = s2 != 0;
    ST32(s0+84, a1);
    if (cnd_) { goto L_08A198B8; }
    goto L_08A198B0;
L_08A198B0:;
    v0 = a0 - v1;
    ST32(s0+88, v0);
    goto L_08A198B8;
L_08A198B8:;
    a0 = s0 + 0;
    func_08A1A36C(a0, t2, t3);
    goto L_08A198C0;
L_08A198C0:;
    a0 = s0 + 0;
    a1 = 2;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A198CC;
L_08A198CC:;
    v1 = LD32(s0+76);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A19900; }
    goto L_08A198D8;
L_08A198D8:;
    v0 = LD32(s0+364);
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    a0 = LD32(s0+304);
    if (cnd_) { goto L_08A19914; }
    goto L_08A198E8;
L_08A198E8:;
    v1 = LD32(a0);
    v0 = LD32(v1+408);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A198F8;
L_08A198F8:;
    ST32(s0+256, 0);
    goto L_08A198FC;
L_08A198FC:;
    goto L_08A19900;
L_08A19900:;
    sp = sp + 32;
    return f0;
L_08A19914:;
    v1 = LD32(a0);
    v0 = LD32(v1+296);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19924;
L_08A19924:;
    a1 = v0 + 0;
    v0 = D_08AEF88C - (-1908);
    f12 = BITSF(LD32(v0-1908));
    a2 = LD32(s0+304);
    a0 = s0 + 0;
    f13 = f12;
    { rv_t r_ = func_08A1BF8C(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19940;
L_08A19940:;
    a0 = LD32(s0+304);
    goto L_08A198E8;
L_08A19948:;
    cnd_ = (s32)a0 <= 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A1995C; }
    goto L_08A19950;
L_08A19950:;
    ST32(s0+84, a0);
    ST32(s0+88, 0);
    goto L_08A198B8;
L_08A1995C:;
    a1 = 14;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19964;
L_08A19964:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A19900; }
    goto L_08A1996C;
L_08A1996C:;
    v0 = D_08AEF888 - (-1912);
    f0 = BITSF(LD32(v0-1912));
    a1 = s0 + 0;
    a0 = sp + 0;
    ST32(s0+44, FBITS(f0));
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A19988;
L_08A19988:;
    a1 = LD32(s0+260);
    a0 = s0 + 0;
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1999C;
L_08A1999C:;
    goto L_08A19900;
L_08A199A4:;
    s2 = 1;
    goto L_08A19874;
L_08A199AC:;
    v0 = LD32(v1+112);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A199B8;
L_08A199B8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+76); goto L_08A19868; }
    goto L_08A199C0;
L_08A199C0:;
    v0 = LD32(s0+304);
    v1 = LD_U8(v0+195);
    cnd_ = v1 == 0;
    if (cnd_) { s2 = 1; goto L_08A19874; }
    goto L_08A199D0;
L_08A199D0:;
    v1 = LD32(s0+76);
    goto L_08A19868;
}

/* 08A199D8 */
rv_t func_08A199D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A199D8:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v0 = LD32(a0+364);
    v0 = v0 & 0x1000;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A19A3C; }
    goto L_08A199F8;
L_08A199F8:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A19A0C; }
    goto L_08A19A00;
L_08A19A00:;
    a0 = LD32(a0+304);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08A19AB0; }
    goto L_08A19A0C;
L_08A19A0C:;
    a0 = s0 + 0;
    v0 = func_08A20AAC(a0);
    goto L_08A19A14;
L_08A19A14:;
    v1 = LD32(s0+280);
    goto L_08A19A18;
L_08A19A18:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s0+364); goto L_08A19A2C; }
    goto L_08A19A20;
L_08A19A20:;
    v0 = LD32(s0+304);
    ST32(v0+200, v1);
    v0 = LD32(s0+364);
    goto L_08A19A2C;
L_08A19A2C:;
    v0 = v0 | 0x1000;
    v1 = v0 & 0x40;
    cnd_ = v1 != 0;
    ST32(s0+364, v0);
    if (cnd_) { goto L_08A19A58; }
    goto L_08A19A3C;
L_08A19A3C:;
    a1 = s0 + 220;
    goto L_08A19A40;
L_08A19A40:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A23554(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19A48;
L_08A19A48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A19A58:;
    v1 = LD32(s0+304);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a1 = LD32(v1);
    a2 = 1;
    v0 = LD32(a1-16);
    v1 = v1 + v0;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A19A7C;
L_08A19A7C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A19A3C; }
    goto L_08A19A84;
L_08A19A84:;
    v0 = LD_U8(s0+268);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A19AA0; }
    goto L_08A19A90;
L_08A19A90:;
    a1 = LD_U8(s0+269);
    func_0899EA14(a0, a1);
    goto L_08A19A98;
L_08A19A98:;
    a1 = s0 + 220;
    goto L_08A19A40;
L_08A19AA0:;
    a1 = LD_U8(s0+269);
    func_0899EA1C(a0, a1);
    goto L_08A19AA8;
L_08A19AA8:;
    a1 = s0 + 220;
    goto L_08A19A40;
L_08A19AB0:;
    v0 = LD32(v1+304);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19ABC;
L_08A19ABC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A19A0C; }
    goto L_08A19AC4;
L_08A19AC4:;
    v0 = LD_U8(s0+268);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A19A0C; }
    goto L_08A19AD0;
L_08A19AD0:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+304);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19AE4;
L_08A19AE4:;
    a2 = LD32(s0+304);
    a0 = s0 + 0;
    a1 = v0 + 0;
    { rv_t r_ = func_08A1C248(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19AF4;
L_08A19AF4:;
    a0 = s0 + 0;
    a1 = 5;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19B00;
L_08A19B00:;
    v1 = LD32(s0+280);
    goto L_08A19A18;
}

/* 08A19B08 */
float func_08A19B08(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A19B08:;
    sp = sp - 16;
    v1 = 11;
    s0 = a0 + 0;
    v0 = LD32(a0+364);
    a1 = LD32(a0);
    v0 = (v0 & ~(0x1u << 12)) | ((0 & 0x1) << 12);
    cnd_ = a1 == v1;
    ST32(a0+364, v0);
    if (cnd_) { goto L_08A19B98; }
    goto L_08A19B30;
L_08A19B30:;
    a0 = LD32(s0+308);
    goto L_08A19B34;
L_08A19B34:;
    ST32(s0+300, 0);
    cnd_ = a0 == 0;
    ST32(s0+296, 0);
    if (cnd_) { goto L_08A19B4C; }
    goto L_08A19B40;
L_08A19B40:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A19B88; }
    goto L_08A19B4C;
L_08A19B4C:;
    a0 = s0 + 0;
    func_08A186DC(a0);
    goto L_08A19B54;
L_08A19B54:;
    v1 = LD32(s0);
    v0 = 5;
    a1 = s0 + 220;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A19B80; }
    goto L_08A19B68;
L_08A19B68:;
    { rv_t r_ = func_08A23554(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19B70;
L_08A19B70:;
    sp = sp + 16;
    return f0;
L_08A19B80:;
    ST32(s0, 0);
    goto L_08A19B68;
L_08A19B88:;
    { rv_t r_ = func_0880D8EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19B90;
L_08A19B90:;
    goto L_08A19B4C;
L_08A19B98:;
    func_08A1A36C(a0, t2, t3);
    goto L_08A19BA0;
L_08A19BA0:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19BAC;
L_08A19BAC:;
    a0 = LD32(s0+308);
    goto L_08A19B34;
}

/* 08A19BB4 */
void func_08A19BB4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A19BB4:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v0 = func_08A19C3C(a0, a1);
    goto L_08A19BCC;
L_08A19BCC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A19BE4; }
    goto L_08A19BD4;
L_08A19BD4:;
    v0 = LD32(s0+88);
    v1 = LD32(s0+80);
    v0 = v0 + v1;
    ST32(s0+88, v0);
    goto L_08A19BE4;
L_08A19BE4:;
    sp = sp + 16;
    return;
}

/* 08A19BF0 */
u32 func_08A19BF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A19BF0:;
    v1 = LD32(a0+364);
    a3 = 0 + 0;
    a1 = a1 & 0xff;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A19C34; }
    goto L_08A19C08;
L_08A19C08:;
    cnd_ = a1 != 0;
    v0 = (v1 >> 5) & 0x1;
    if (cnd_) { goto L_08A19C18; }
    goto L_08A19C10;
L_08A19C10:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+80); goto L_08A19C20; }
    goto L_08A19C18;
L_08A19C18:;
    a2 = 1;
    v0 = LD32(a0+80);
    goto L_08A19C20;
L_08A19C20:;
    v1 = LD32(a0+84);
    a0 = 0 < a2;
    v1 = (s32)v1 < (s32)v0;
    if (v1 != 0) a3 = a0;
    a2 = a3 + 0;
    goto L_08A19C34;
L_08A19C34:;
    v0 = a2 + 0;
    return v0;
}

/* 08A19C3C */
u32 func_08A19C3C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A19C3C:;
    a3 = LD32(a0+80);
    a2 = a0 + 0;
    cnd_ = (s32)a3 <= 0;
    a0 = a1 & 0xff;
    if (cnd_) { goto L_08A19C84; }
    goto L_08A19C4C;
L_08A19C4C:;
    v0 = LD32(a2+364);
    a1 = 1;
    v1 = (v0 >> 5) & 0x1;
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    if (a0 == 0) a1 = v1;
    if (cnd_) { goto L_08A19C84; }
    goto L_08A19C64;
L_08A19C64:;
    v0 = LD32(a2+88);
    v1 = LD32(a2+76);
    { s32 x_ = (s32)v0, y_ = (s32)a3; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v0 = lo;
    v0 = (s32)v0 < (s32)v1;
    if (v0 == 0) a1 = 0;
    v0 = a1 + 0;
    return v0;
L_08A19C84:;
    v0 = 0 + 0;
    return v0;
}

/* 08A19C8C */
rv_t func_08A19C8C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A19C8C:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    ST32(a0+304, a1);
    if (cnd_) { goto L_08A19D40; }
    goto L_08A19CAC;
L_08A19CAC:;
    v0 = LD32(a1);
    a2 = D_08C2ADE8 - (-21016);
    a0 = a2 - 21016;
    v1 = LD32(v0-16);
    v0 = 999;
    v1 = a1 + v1;
    a1 = LD32(v1+4);
    cnd_ = a1 == v0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A19D20; }
    goto L_08A19CD0;
L_08A19CD0:;
    v0 = LD32(a0+4);
    v1 = LD32(a2-21016);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    if (cnd_) { a0 = LD32(s0+304); goto L_08A19D24; }
    goto L_08A19CF4;
L_08A19CF4:;
    a0 = LD32(a2);
    goto L_08A19CF8;
L_08A19CF8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A19E08; }
    goto L_08A19D10;
L_08A19D10:;
    a2 = LD32(a2+4);
    goto L_08A19D14;
L_08A19D14:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08A19CF8; }
    goto L_08A19D1C;
L_08A19D1C:;
    s1 = 0 + 0;
    goto L_08A19D20;
L_08A19D20:;
    a0 = LD32(s0+304);
    goto L_08A19D24;
L_08A19D24:;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A19D58; }
    goto L_08A19D30;
L_08A19D30:;
    s2 = 1;
    goto L_08A19D34;
L_08A19D34:;
    v0 = LD32(s0+364);
    goto L_08A19D38;
L_08A19D38:;
    v0 = (v0 & ~(0x1u << 6)) | ((s2 & 0x1) << 6);
    ST32(s0+364, v0);
    goto L_08A19D40;
L_08A19D40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A19D58:;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19D68;
L_08A19D68:;
    a1 = v0 + 0;
    a0 = D_08C29FC4 - (-24636);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 24636;
    if (cnd_) { goto L_08A19DC8; }
    goto L_08A19D7C;
L_08A19D7C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24636);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A19DC0; }
    goto L_08A19DA0;
L_08A19DA0:;
    v1 = LD32(a0);
    goto L_08A19DA4;
L_08A19DA4:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A19DE8; }
    goto L_08A19DB0;
L_08A19DB0:;
    a0 = LD32(a0+4);
    goto L_08A19DB4;
L_08A19DB4:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08A19DA4; }
    goto L_08A19DBC;
L_08A19DBC:;
    v1 = 0 + 0;
    goto L_08A19DC0;
L_08A19DC0:;
    cnd_ = v1 != 0;
    if (cnd_) { s2 = 1; goto L_08A19D34; }
    goto L_08A19DC8;
L_08A19DC8:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s0+364); goto L_08A19D38; }
    goto L_08A19DD0;
L_08A19DD0:;
    v0 = LD32(s1+172);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+364); goto L_08A19D38; }
    goto L_08A19DE0;
L_08A19DE0:;
    s2 = 1;
    goto L_08A19D34;
L_08A19DE8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A19DB4; }
    goto L_08A19DF4;
L_08A19DF4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08A19DB4; }
    goto L_08A19E00;
L_08A19E00:;
    goto L_08A19DC0;
L_08A19E08:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A19D10; }
    goto L_08A19E14;
L_08A19E14:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A19D14; }
    goto L_08A19E20;
L_08A19E20:;
    a0 = LD32(s0+304);
    goto L_08A19D24;
}

/* 08A19E28 */
rv_t func_08A19E28(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A19E28:;
    sp = sp - 16;
    a2 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A19E74; }
    goto L_08A19E40;
L_08A19E40:;
    v0 = a1 < 0xfu;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A19E74; }
    goto L_08A19E4C;
L_08A19E4C:;
    v1 = D_08ADED98 - (-4712);
    v0 = a1 << 2;
    v1 = v1 - 4712;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A19E68u: goto L_08A19E68; case 0x08A19E84u: goto L_08A19E84; case 0x08A19E94u: goto L_08A19E94; case 0x08A19EA4u: goto L_08A19EA4; case 0x08A19EB4u: goto L_08A19EB4; case 0x08A19EC4u: goto L_08A19EC4; case 0x08A19ED4u: goto L_08A19ED4; case 0x08A19EE4u: goto L_08A19EE4; case 0x08A19EF4u: goto L_08A19EF4; case 0x08A19F04u: goto L_08A19F04; case 0x08A19F14u: goto L_08A19F14; case 0x08A19F24u: goto L_08A19F24; case 0x08A19F34u: goto L_08A19F34; case 0x08A19F44u: goto L_08A19F44; case 0x08A19F54u: goto L_08A19F54; default: rs_break(0, 0x08a19e60); }
L_08A19E68:;
    a0 = a2 + 0;
    v0 = func_08A19F64(a0);
    goto L_08A19E70;
L_08A19E70:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19E74:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A19E84:;
    a0 = a2 + 0;
    v0 = func_08A19FF0(a0);
    goto L_08A19E8C;
L_08A19E8C:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19E94:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A0B0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19E9C;
L_08A19E9C:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19EA4:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A19F98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19EAC;
L_08A19EAC:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19EB4:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A014(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19EBC;
L_08A19EBC:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19EC4:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A164(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19ECC;
L_08A19ECC:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19ED4:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A0D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19EDC;
L_08A19EDC:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19EE4:;
    a0 = a2 + 0;
    v0 = func_08A1A0C8();
    goto L_08A19EEC;
L_08A19EEC:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19EF4:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A190(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19EFC;
L_08A19EFC:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19F04:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A1A8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19F0C;
L_08A19F0C:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19F14:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A1C0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19F1C;
L_08A19F1C:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19F24:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A1D8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19F2C;
L_08A19F2C:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19F34:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A274(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19F3C;
L_08A19F3C:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19F44:;
    a0 = a2 + 0;
    { rv_t r_ = func_08A1A334(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19F4C;
L_08A19F4C:;
    v1 = v0 + 0;
    goto L_08A19E74;
L_08A19F54:;
    a0 = a2 + 0;
    v0 = func_08A1A34C(a0);
    goto L_08A19F5C;
L_08A19F5C:;
    v1 = v0 + 0;
    goto L_08A19E74;
}

/* 08A19F64 */
u32 func_08A19F64(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A19F64:;
    v1 = LD32(a0+20);
    v0 = 0xda0c0000u;
    v0 = v0 | 0xae3b;
    cnd_ = v1 == v0;
    ST32(a0, 0);
    if (cnd_) { goto L_08A19F80; }
    goto L_08A19F78;
L_08A19F78:;
    v0 = 1;
    return v0;
L_08A19F80:;
    v1 = LD32(a0+364);
    v0 = 999;
    ST32(a0+264, v0);
    v1 = (v1 & ~(0x1u << 18)) | ((0 & 0x1) << 18);
    ST32(a0+364, v1);
    goto L_08A19F78;
}

/* 08A19F98 */
rv_t func_08A19F98(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A19F98:;
    ST32(a0+44, 0);
    sp = sp - 32;
    a1 = a0 + 0;
    a2 = 1;
    s0 = a0 + 0;
    a0 = sp + 0;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A19FBC;
L_08A19FBC:;
    a0 = s0 + 0;
    a1 = LD32(s0+208);
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A19FD0;
L_08A19FD0:;
    v0 = 3;
    ST32(s0, v0);
    v0 = 1;
    ST32(s0+108, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A19FF0 */
u32 func_08A19FF0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A19FF0:;
    v0 = LD32(a0);
    v0 = v0 ^ 0x2;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A1A00C; }
    goto L_08A1A000;
L_08A1A000:;
    v0 = 1;
    ST32(a0, v0);
    v1 = 1;
    goto L_08A1A00C;
L_08A1A00C:;
    v0 = v1 + 0;
    return v0;
}

/* 08A1A014 */
rv_t func_08A1A014(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1A014:;
    sp = sp - 32;
    a1 = a0 + 0;
    a2 = 1;
    s0 = a0 + 0;
    a0 = sp + 0;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A034;
L_08A1A034:;
    a3 = s0 + 220;
    a1 = LD32(s0+208);
    a2 = sp + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A048;
L_08A1A048:;
    v0 = LD32(s0+320);
    cnd_ = v0 == 0;
    v1 = 4;
    if (cnd_) { goto L_08A1A064; }
    goto L_08A1A054;
L_08A1A054:;
    v1 = LD32(s0+304);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A1A080; }
    goto L_08A1A060;
L_08A1A060:;
    v1 = 4;
    goto L_08A1A064;
L_08A1A064:;
    ST32(s0+108, 0);
    v0 = 1;
    ST32(s0, v1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A1A080:;
    v1 = LD32(v1);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A090;
L_08A1A090:;
    a2 = LD32(s0+320);
    a0 = sp + 0;
    a1 = v0 + 0;
    a3 = 0 + 0;
    t0 = 143;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A0A8;
L_08A1A0A8:;
    ST32(s0+8, v0);
    goto L_08A1A060;
}

/* 08A1A0B0 */
rv_t func_08A1A0B0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A1A0B0:;
    f0 = BITSF(LD32(a0+68));
    v0 = 2;
    ST32(a0, v0);
    v0 = 1;
    ST32(a0+44, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 08A1A0C8 */
u32 func_08A1A0C8(void)
{
    u32 v0 = 0;
L_08A1A0C8:;
    v0 = 1;
    return v0;
}

/* 08A1A0D0 */
rv_t func_08A1A0D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1A0D0:;
    sp = sp - 32;
    a1 = a0 + 220;
    s0 = a0 + 0;
    { rv_t r_ = func_08A23554(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A0E8;
L_08A1A0E8:;
    a1 = s0 + 0;
    v0 = LD32(s0+216);
    a2 = 1;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1A140; }
    goto L_08A1A0FC;
L_08A1A0FC:;
    f0 = BITSF(LD32(s0+132));
    goto L_08A1A100;
L_08A1A100:;
    v1 = 6;
    a0 = LD32(s0+364);
    ST32(s0, v1);
    v1 = D_08AEF890 - (-1904);
    a0 = (a0 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    ST32(s0+44, FBITS(f0));
    v0 = 1;
    f0 = BITSF(LD32(v1-1904));
    ST32(s0+300, 0);
    ST32(s0+296, 0);
    ST32(s0+364, a0);
    ST32(s0+120, FBITS(f0));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A1A140:;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A148;
L_08A1A148:;
    a1 = LD32(s0+216);
    a0 = s0 + 0;
    a3 = 0 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A15C;
L_08A1A15C:;
    f0 = BITSF(LD32(s0+132));
    goto L_08A1A100;
}

/* 08A1A164 */
rv_t func_08A1A164(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
L_08A1A164:;
    v0 = D_08AEF894 - (-1900);
    a1 = LD32(a0);
    f1 = BITSF(LD32(a0+44));
    f0 = BITSF(LD32(v0-1900));
    v1 = 5;
    v0 = 1;
    ST32(a0+44, FBITS(f0));
    ST32(a0+344, a1);
    ST32(a0, v1);
    ST32(a0+348, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 08A1A190 */
rv_t func_08A1A190(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A1A190:;
    f0 = BITSF(LD32(a0+72));
    v0 = 8;
    ST32(a0, v0);
    v0 = 1;
    ST32(a0+44, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 08A1A1A8 */
rv_t func_08A1A1A8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A1A1A8:;
    f0 = BITSF(LD32(a0+72));
    v0 = 9;
    ST32(a0, v0);
    v0 = 1;
    ST32(a0+44, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 08A1A1C0 */
rv_t func_08A1A1C0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A1A1C0:;
    f0 = BITSF(LD32(a0+72));
    v0 = 10;
    ST32(a0, v0);
    v0 = 1;
    ST32(a0+44, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 08A1A1D8 */
rv_t func_08A1A1D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1A1D8:;
    v0 = 11;
    ST32(a0, v0);
    sp = sp - 32;
    a1 = a0 + 0;
    a2 = 1;
    s0 = a0 + 0;
    a0 = sp + 0;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A200;
L_08A1A200:;
    a0 = s0 + 0;
    a1 = LD32(s0+208);
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A214;
L_08A1A214:;
    a0 = LD32(s0+304);
    a1 = 0x8b250000u;
    a1 = a1 | 0x1982;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    v0 = LD32(a0+100);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1A248; }
    goto L_08A1A238;
L_08A1A238:;
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A240;
L_08A1A240:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1A25C; }
    goto L_08A1A248;
L_08A1A248:;
    goto L_08A1A24C;
L_08A1A24C:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A1A25C:;
    v1 = LD32(v0);
    v0 = LD32(v1+80);
    t_ = v0;
    f12 = BITSF(LD32(s0+92));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A26C;
L_08A1A26C:;
    goto L_08A1A24C;
}

/* 08A1A274 */
rv_t func_08A1A274(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A1A274:;
    sp = sp - 64;
    a2 = D_08B45AA8 - (23208);
    v0 = 12;
    a1 = a2 + 23208;
    s0 = a0 + 0;
    v1 = LD32(a0+192);
    cnd_ = v1 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08A1A2B8; }
    goto L_08A1A29C;
L_08A1A29C:;
    f0 = BITSF(LD32(s0+68));
    v0 = 1;
    ST32(s0+44, FBITS(f0));
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A1A2B8:;
    f7 = BITSF(LD32(a2+23208));
    f8 = BITSF(LD32(a1+32));
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+12));
    f3 = BITSF(LD32(a1+16));
    f4 = BITSF(LD32(a1+20));
    f5 = BITSF(LD32(a1+24));
    f6 = BITSF(LD32(a1+28));
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f6));
    ST32(sp+32, FBITS(f8));
    a0 = LD32(a0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A314;
L_08A1A314:;
    a2 = LD32(s0+192);
    a0 = v0 + 0;
    a1 = sp + 0;
    a3 = 0 + 0;
    t0 = 143;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A32C;
L_08A1A32C:;
    ST32(s0+200, v0);
    goto L_08A1A29C;
}

/* 08A1A334 */
rv_t func_08A1A334(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A1A334:;
    f0 = BITSF(LD32(a0+180));
    v0 = 13;
    ST32(a0, v0);
    v0 = 1;
    ST32(a0+44, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 08A1A34C */
u32 func_08A1A34C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A1A34C:;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A1A364; }
    goto L_08A1A358;
L_08A1A358:;
    v0 = 14;
    ST32(a0, v0);
    v1 = 1;
    goto L_08A1A364;
L_08A1A364:;
    v0 = v1 + 0;
    return v0;
}

/* 08A1A36C */
void func_08A1A36C(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1A36C:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = v1 < 0xfu;
    cnd_ = v0 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08A1A3A8; }
    goto L_08A1A384;
L_08A1A384:;
    v0 = v1 << 2;
    v1 = D_08ADEDD4 - (-4652);
    v1 = v1 - 4652;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A1A3A0u: goto L_08A1A3A0; case 0x08A1A3B4u: goto L_08A1A3B4; case 0x08A1A3C4u: goto L_08A1A3C4; case 0x08A1A3D4u: goto L_08A1A3D4; case 0x08A1A3E4u: goto L_08A1A3E4; case 0x08A1A3F4u: goto L_08A1A3F4; case 0x08A1A404u: goto L_08A1A404; case 0x08A1A414u: goto L_08A1A414; case 0x08A1A424u: goto L_08A1A424; case 0x08A1A434u: goto L_08A1A434; case 0x08A1A444u: goto L_08A1A444; case 0x08A1A454u: goto L_08A1A454; case 0x08A1A464u: goto L_08A1A464; case 0x08A1A474u: goto L_08A1A474; case 0x08A1A484u: goto L_08A1A484; default: rs_break(0, 0x08a1a398); }
L_08A1A3A0:;
    a0 = a1 + 0;
    func_08A1A494();
    goto L_08A1A3A8;
L_08A1A3A8:;
    goto L_08A1A3AC;
L_08A1A3AC:;
    sp = sp + 16;
    return;
L_08A1A3B4:;
    a0 = a1 + 0;
    func_08A1A49C(a0);
    goto L_08A1A3BC;
L_08A1A3BC:;
    goto L_08A1A3AC;
L_08A1A3C4:;
    a0 = a1 + 0;
    func_08A1A748();
    goto L_08A1A3CC;
L_08A1A3CC:;
    goto L_08A1A3AC;
L_08A1A3D4:;
    a0 = a1 + 0;
    func_08A1A548(a0);
    goto L_08A1A3DC;
L_08A1A3DC:;
    goto L_08A1A3AC;
L_08A1A3E4:;
    a0 = a1 + 0;
    func_08A1A5B0(a0);
    goto L_08A1A3EC;
L_08A1A3EC:;
    goto L_08A1A3AC;
L_08A1A3F4:;
    a0 = a1 + 0;
    func_08A1A760(a0);
    goto L_08A1A3FC;
L_08A1A3FC:;
    goto L_08A1A3AC;
L_08A1A404:;
    a0 = a1 + 0;
    func_08A1A758();
    goto L_08A1A40C;
L_08A1A40C:;
    goto L_08A1A3AC;
L_08A1A414:;
    a0 = a1 + 0;
    func_08A1A750();
    goto L_08A1A41C;
L_08A1A41C:;
    goto L_08A1A3AC;
L_08A1A424:;
    a0 = a1 + 0;
    func_08A1A77C(a0);
    goto L_08A1A42C;
L_08A1A42C:;
    goto L_08A1A3AC;
L_08A1A434:;
    a0 = a1 + 0;
    func_08A1B448(a0, t2, t3);
    goto L_08A1A43C;
L_08A1A43C:;
    goto L_08A1A3AC;
L_08A1A444:;
    a0 = a1 + 0;
    func_08A1B824(a0, t2, t3);
    goto L_08A1A44C;
L_08A1A44C:;
    goto L_08A1A3AC;
L_08A1A454:;
    a0 = a1 + 0;
    func_08A1B8F4(a0);
    goto L_08A1A45C;
L_08A1A45C:;
    goto L_08A1A3AC;
L_08A1A464:;
    a0 = a1 + 0;
    func_08A1B98C(a0);
    goto L_08A1A46C;
L_08A1A46C:;
    goto L_08A1A3AC;
L_08A1A474:;
    a0 = a1 + 0;
    func_08A1B9F8(a0);
    goto L_08A1A47C;
L_08A1A47C:;
    goto L_08A1A3AC;
L_08A1A484:;
    a0 = a1 + 0;
    func_08A1BA04();
    goto L_08A1A48C;
L_08A1A48C:;
    goto L_08A1A3AC;
}

/* 08A1A494 */
void func_08A1A494(void)
{
L_08A1A494:;
    return;
}

/* 08A1A49C */
void func_08A1A49C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1A49C:;
    sp = sp - 32;
    a1 = a0 + 220;
    s0 = a0 + 0;
    { rv_t r_ = func_08A23554(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A4B4;
L_08A1A4B4:;
    f0 = BITSF(0);
    f1 = BITSF(LD32(s0+104));
    a1 = s0 + 0;
    a2 = 1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1A524; }
    goto L_08A1A4D4;
L_08A1A4D4:;
    a1 = LD32(s0+8);
    goto L_08A1A4D8;
L_08A1A4D8:;
    v1 = 0x391b0000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0xd415;
    if (cnd_) { goto L_08A1A4F4; }
    goto L_08A1A4E4;
L_08A1A4E4:;
    v0 = LD32(s0+20);
    a0 = D_08B30B5C - (2908);
    cnd_ = v0 == v1;
    a0 = a0 + 2908;
    if (cnd_) { goto L_08A1A504; }
    goto L_08A1A4F4;
L_08A1A4F4:;
    sp = sp + 32;
    return;
L_08A1A504:;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A50C;
L_08A1A50C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A1A51C; }
    goto L_08A1A514;
L_08A1A514:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_08A1A51C;
L_08A1A51C:;
    ST32(s0+8, 0);
    goto L_08A1A4F4;
L_08A1A524:;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A52C;
L_08A1A52C:;
    a1 = LD32(s0+216);
    a0 = s0 + 0;
    a3 = 0 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A540;
L_08A1A540:;
    a1 = LD32(s0+8);
    goto L_08A1A4D8;
}

/* 08A1A548 */
void func_08A1A548(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1A548:;
    sp = sp - 32;
    a1 = a0 + 0;
    s0 = a0 + 0;
    a2 = 1;
    f1 = BITSF(LD32(a0+108));
    f0 = BITSF(LD32(a0+104));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1A58C; }
    goto L_08A1A578;
L_08A1A578:;
    ST32(s0+108, 0);
    goto L_08A1A57C;
L_08A1A57C:;
    sp = sp + 32;
    return;
L_08A1A58C:;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A594;
L_08A1A594:;
    a1 = LD32(s0+216);
    a0 = s0 + 0;
    a3 = 0 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A5A8;
L_08A1A5A8:;
    ST32(s0+108, 0);
    goto L_08A1A57C;
}

/* 08A1A5B0 */
void func_08A1A5B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A1A5B0:;
    sp = sp - 48;
    a1 = a0 + 220;
    s2 = a0 + 0;
    { rv_t r_ = func_08A23554(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A5D0;
L_08A1A5D0:;
    a0 = sp + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A5E0;
L_08A1A5E0:;
    a1 = LD32(s2+216);
    a0 = s2 + 0;
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A5F4;
L_08A1A5F4:;
    a1 = LD32(s2+8);
    cnd_ = a1 != 0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_08A1A728; }
    goto L_08A1A600;
L_08A1A600:;
    a0 = LD32(s2+304);
    v1 = LD32(a0);
    v0 = LD32(v1+212);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A614;
L_08A1A614:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+304); goto L_08A1A68C; }
    goto L_08A1A61C;
L_08A1A61C:;
    v0 = LD32(s2+84);
    goto L_08A1A620;
L_08A1A620:;
    v1 = LD32(s2+100);
    v0 = (s32)v0 < (s32)v1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A1A67C; }
    goto L_08A1A634;
L_08A1A634:;
    v0 = D_08AEF898 - (-1896);
    goto L_08A1A638;
L_08A1A638:;
    f0 = BITSF(LD32(s2+120));
    f1 = BITSF(LD32(v0-1896));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A1A66C; }
    goto L_08A1A650;
L_08A1A650:;
    ST32(s2+108, 0);
    goto L_08A1A654;
L_08A1A654:;
    sp = sp + 48;
    return;
L_08A1A66C:;
    a1 = 6;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A674;
L_08A1A674:;
    ST32(s2+108, 0);
    goto L_08A1A654;
L_08A1A67C:;
    a1 = 0 + 0;
    f0 = func_08A19804(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1A684;
L_08A1A684:;
    v0 = D_08AEF898 - (-1896);
    goto L_08A1A638;
L_08A1A68C:;
    v1 = LD32(a0);
    v0 = LD32(v1+208);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A69C;
L_08A1A69C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2+84); goto L_08A1A620; }
    goto L_08A1A6A4;
L_08A1A6A4:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A17BD8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A6AC;
L_08A1A6AC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+84); goto L_08A1A620; }
    goto L_08A1A6B4;
L_08A1A6B4:;
    a0 = LD32(s2+304);
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    s1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A6C8;
L_08A1A6C8:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A6DC;
L_08A1A6DC:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A1A6EC;
L_08A1A6EC:;
    f1 = BITSF(LD32(s2+108));
    f0 = BITSF(LD32(s2+112));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = LD32(s2+20);
    if (cnd_) { goto L_08A1A71C; }
    goto L_08A1A704;
L_08A1A704:;
    a0 = s2 + 0;
    a2 = 1;
    goto L_08A1A70C;
L_08A1A70C:;
    f0 = func_08A17F10(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1A714;
L_08A1A714:;
    v0 = LD32(s2+84);
    goto L_08A1A620;
L_08A1A71C:;
    a0 = s2 + 0;
    a2 = 0 + 0;
    goto L_08A1A70C;
L_08A1A728:;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A730;
L_08A1A730:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1A740; }
    goto L_08A1A738;
L_08A1A738:;
    a1 = 1;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A740;
L_08A1A740:;
    ST32(s2+8, 0);
    goto L_08A1A600;
}

/* 08A1A748 */
void func_08A1A748(void)
{
L_08A1A748:;
    return;
}

/* 08A1A750 */
void func_08A1A750(void)
{
L_08A1A750:;
    return;
}

/* 08A1A758 */
void func_08A1A758(void)
{
L_08A1A758:;
    return;
}

/* 08A1A760 */
void func_08A1A760(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1A760:;
    sp = sp - 16;
    v0 = func_08A20AAC(a0);
    goto L_08A1A770;
L_08A1A770:;
    sp = sp + 16;
    return;
}

/* 08A1A77C */
void func_08A1A77C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08A1A77C:;
    sp = sp - 288;
    v0 = 0x2a940000u;
    v0 = v0 | 0x5544;
    v1 = LD32(a0+16);
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A1AE34; }
    goto L_08A1A7B0;
L_08A1A7B0:;
    v0 = LD32(s1+364);
    goto L_08A1A7B4;
L_08A1A7B4:;
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A1AAD8; }
    goto L_08A1A7C0;
L_08A1A7C0:;
    s2 = LD32(s1+20);
    v0 = 0x36220000u;
    v0 = v0 | 0x332a;
    ST32(sp, 0);
    s5 = 0 + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    cnd_ = s2 == v0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08A1A844; }
    goto L_08A1A7EC;
L_08A1A7EC:;
    v0 = v0 < s2;
    cnd_ = v0 != 0;
    v0 = 0xe3740000u;
    if (cnd_) { goto L_08A1AD9C; }
    goto L_08A1A7F8;
L_08A1A7F8:;
    v0 = 0x23650000u;
    v0 = v0 | 0x8cc3;
    cnd_ = s2 == v0;
    v0 = v0 < s2;
    if (cnd_) { goto L_08A1AD80; }
    goto L_08A1A808;
L_08A1A808:;
    cnd_ = v0 != 0;
    v0 = 0x31120000u;
    if (cnd_) { goto L_08A1AD20; }
    goto L_08A1A810;
L_08A1A810:;
    v0 = 0x10ed0000u;
    v0 = v0 | 0xd4e;
    goto L_08A1A818;
L_08A1A818:;
    cnd_ = s2 == v0;
    if (cnd_) { a0 = LD32(s1+304); goto L_08A1A848; }
    goto L_08A1A820;
L_08A1A820:;
    goto L_08A1A824;
L_08A1A824:;
    sp = sp + 288;
    return;
L_08A1A844:;
    a0 = LD32(s1+304);
    goto L_08A1A848;
L_08A1A848:;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s3 = sp + 48;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A858;
L_08A1A858:;
    v1 = D_08AEF89C - (-1892);
    f2 = BITSF(LD32(v1-1892));
    f1 = BITSF(LD32(s1+64));
    ST32(sp+56, 0);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+52, FBITS(f2));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+48, 0);
    f0 = f0 - f2;
    f4 = BITSF(LD32(s1+60));
    f3 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f3));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f4));
    ST32(sp+16, 0);
    a0 = LD32(s1+304);
    v1 = LD32(a0);
    v0 = LD32(v1+196);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A8C8;
L_08A1A8C8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+304); goto L_08A1ABB0; }
    goto L_08A1A8D0;
L_08A1A8D0:;
    a0 = LD32(s1+304);
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A8E4;
L_08A1A8E4:;
    s0 = v0 + 0;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A8F8;
L_08A1A8F8:;
    a2 = s3 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08A1D760(a0, a1, a2);
    goto L_08A1A908;
L_08A1A908:;
    a0 = 0x805e;
    a1 = 60;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A91C;
L_08A1A91C:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A1AAD4; }
    goto L_08A1A924;
L_08A1A924:;
    s0 = LD32(v0+24);
    f0 = BITSF(LD32(sp));
    ST32(s0+4, s2);
    a0 = s0 + 28;
    v0 = LD32(s1+20);
    ST32(s0+28, FBITS(f0));
    ST32(s0+8, v0);
    f0 = BITSF(LD32(sp+8));
    v1 = LD32(s1+152);
    ST32(a0+8, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(s0+20, v1);
    ST32(a0+4, FBITS(f0));
    v1 = LD32(s1+304);
    a1 = LD32(v1);
    a0 = v1 + 0;
    a2 = LD32(a1-16);
    v0 = LD32(a1+48);
    v1 = v1 + a2;
    t_ = v0;
    s2 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A978;
L_08A1A978:;
    a0 = LD32(s1+304);
    s4 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1A990;
L_08A1A990:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a1 = s2 + 0;
    a2 = 1;
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+76, FBITS(f3));
    ST32(sp+80, FBITS(f4));
    ST32(sp+84, FBITS(f5));
    ST32(sp+88, FBITS(f6));
    ST32(sp+92, FBITS(f7));
    ST32(sp+96, FBITS(f8));
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1A9EC;
L_08A1A9EC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1AA4C; }
    goto L_08A1A9F4;
L_08A1A9F4:;
    v1 = LD32(v0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1AA04;
L_08A1AA04:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f2));
    ST32(sp+76, FBITS(f3));
    ST32(sp+80, FBITS(f4));
    ST32(sp+84, FBITS(f5));
    ST32(sp+88, FBITS(f6));
    ST32(sp+92, FBITS(f7));
    ST32(sp+96, FBITS(f8));
    goto L_08A1AA4C;
L_08A1AA4C:;
    cnd_ = s5 == 0;
    a3 = s0 + 40;
    if (cnd_) { goto L_08A1AAEC; }
    goto L_08A1AA54;
L_08A1AA54:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    ST32(sp+48, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    goto L_08A1AA6C;
L_08A1AA6C:;
    f0 = BITSF(LD32(sp+48));
    v1 = D_08AEF8A8 - (-1880);
    v0 = 999;
    ST32(a3, FBITS(f0));
    a0 = s3 + 0;
    a1 = 1;
    f0 = BITSF(LD32(sp+56));
    ST32(s0+12, s4);
    a2 = 1;
    ST32(a3+8, FBITS(f0));
    f0 = BITSF(LD32(sp+52));
    ST32(s0+52, v0);
    ST32(a3+4, FBITS(f0));
    f0 = BITSF(LD32(v1-1880));
    ST32(s0+16, s2);
    ST32(s0+56, FBITS(f0));
    v0 = LD_U8(s1+268);
    ST8(s0, v0);
    v1 = LD_U8(s1+269);
    ST8(s0+24, v1);
    v0 = LD32(s3+28);
    ST32(s3, s2);
    v0 = v0 | 0x1;
    ST32(s3+28, v0);
    ST32(s3+4, s2);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1AAD4;
L_08A1AAD4:;
    v0 = LD32(s1+296);
    goto L_08A1AAD8;
L_08A1AAD8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1A824; }
    goto L_08A1AAE0;
L_08A1AAE0:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    goto L_08A1A824;
L_08A1AAEC:;
    v1 = LD32(sp+64);
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+68);
    {u32 a_=sp+(208);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+72);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(sp+76);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(sp+80);
    {u32 a_=sp+(224);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+84);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+92);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+88);
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+96);
    {v[33]=BITSF(v0);}
    {v[34]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(128);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[17]);}
    ST32(sp+48, v1);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, v1);
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_08A1AA6C;
L_08A1ABB0:;
    s0 = D_08C2C21C - (-15844);
    v1 = LD32(a0);
    v0 = LD32(v1+272);
    t_ = v0;
    s3 = s0 - 15844;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1ABC4;
L_08A1ABC4:;
    a2 = v0 + 0;
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = LD32(s0-15844);
    if (cnd_) { goto L_08A1ACF8; }
    goto L_08A1ABD4;
L_08A1ABD4:;
    v0 = LD32(s3+4);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A1AC20; }
    goto L_08A1ABF4;
L_08A1ABF4:;
    a0 = LD32(a1);
    goto L_08A1ABF8;
L_08A1ABF8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A1AD00; }
    goto L_08A1AC10;
L_08A1AC10:;
    a1 = LD32(a1+4);
    goto L_08A1AC14;
L_08A1AC14:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A1ABF8; }
    goto L_08A1AC1C;
L_08A1AC1C:;
    a0 = 0 + 0;
    goto L_08A1AC20;
L_08A1AC20:;
    cnd_ = a0 == 0;
    s3 = sp + 48;
    if (cnd_) { goto L_08A1A8D0; }
    goto L_08A1AC28;
L_08A1AC28:;
    v0 = LD32(a0);
    f12 = BITSF(0);
    v1 = LD32(v0+56);
    a1 = s3 + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1AC40;
L_08A1AC40:;
    f2 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+56));
    v0 = 0 + 0;
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+8));
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+20);
    f1 = f1 - f0;
    v1 = FBITS(f2);
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = 0xfcab0000u;
    v1 = v1 | 0x2c09;
    ST32(sp+56, FBITS(f1));
    ST32(sp+48, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AEF8A0 - (-1888);
    ST32(sp+52, 0);
    cnd_ = a0 == v1;
    f1 = BITSF(LD32(v0-1888));
    if (cnd_) { goto L_08A1ACE8; }
    goto L_08A1ACA8;
L_08A1ACA8:;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_08A1ACBC; }
    goto L_08A1ACB8;
L_08A1ACB8:;
    f0 = f3;
    goto L_08A1ACBC;
L_08A1ACBC:;
    f3 = f0 / f1;
    f2 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+20));
    f2 = f2 * f3;
    f1 = f1 * f3;
    f0 = f0 * f3;
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    goto L_08A1A8D0;
L_08A1ACE8:;
    v0 = D_08AEF8A4 - (-1884);
    f0 = BITSF(LD32(v0-1884));
    f1 = f1 * f0;
    goto L_08A1ACA8;
L_08A1ACF8:;
    s3 = sp + 48;
    goto L_08A1A8D0;
L_08A1AD00:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A1AC14; }
    goto L_08A1AD0C;
L_08A1AD0C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A1AC14; }
    goto L_08A1AD18;
L_08A1AD18:;
    goto L_08A1AC20;
L_08A1AD20:;
    v0 = v0 | 0x5d8a;
    cnd_ = s2 != v0;
    if (cnd_) { goto L_08A1A824; }
    goto L_08A1AD2C;
L_08A1AD2C:;
    s3 = sp + 48;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1AD40;
L_08A1AD40:;
    f2 = BITSF(LD32(s1+60));
    s2 = 0x10ed0000u;
    s2 = s2 | 0xd4e;
    goto L_08A1AD4C;
L_08A1AD4C:;
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    ST32(sp+24, FBITS(f2));
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(sp+56));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, FBITS(f2));
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    goto L_08A1A8D0;
L_08A1AD80:;
    s3 = sp + 48;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1AD94;
L_08A1AD94:;
    f2 = BITSF(LD32(s1+60));
    goto L_08A1AD4C;
L_08A1AD9C:;
    v0 = v0 | 0xc413;
    cnd_ = s2 == v0;
    v0 = v0 < s2;
    if (cnd_) { goto L_08A1AD80; }
    goto L_08A1ADA8;
L_08A1ADA8:;
    cnd_ = v0 != 0;
    v0 = 0xfcab0000u;
    if (cnd_) { goto L_08A1AE2C; }
    goto L_08A1ADB0;
L_08A1ADB0:;
    v0 = 0xc8d30000u;
    v0 = v0 | 0x46d4;
    cnd_ = s2 != v0;
    if (cnd_) { goto L_08A1A824; }
    goto L_08A1ADC0;
L_08A1ADC0:;
    s3 = sp + 48;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1ADD4;
L_08A1ADD4:;
    f0 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(s1+60));
    f1 = BITSF(LD32(sp+56));
    ST32(sp, FBITS(f0));
    a1 = sp + 16;
    f12 = f2;
    f0 = BITSF(LD32(sp+52));
    a0 = s1 + 0;
    a2 = sp + 0;
    s2 = 0x2a940000u;
    ST32(sp+4, FBITS(f0));
    s2 = s2 | 0x5544;
    ST32(sp+8, FBITS(f1));
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, FBITS(f2));
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, FBITS(f2));
    v0 = func_08A1AE60(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1AE24;
L_08A1AE24:;
    s5 = v0 + 0;
    goto L_08A1A8D0;
L_08A1AE2C:;
    v0 = v0 | 0x2c09;
    goto L_08A1A818;
L_08A1AE34:;
    a1 = a0 + 0;
    a2 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1AE44;
L_08A1AE44:;
    a1 = LD32(s1+148);
    a0 = s1 + 0;
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1AE58;
L_08A1AE58:;
    v0 = LD32(s1+364);
    goto L_08A1A7B4;
}

/* 08A1AE60 */
u32 func_08A1AE60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr8 = v[8];
    u8 stack_[368] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 368);
L_08A1AE60:;
    sp = sp - 368;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+304);
    cnd_ = a0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08A1AEB0; }
    goto L_08A1AE90;
L_08A1AE90:;
    v0 = 0 + 0;
    goto L_08A1AE94;
L_08A1AE94:;
    sp = sp + 368;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;return v0; }
L_08A1AEB0:;
    v1 = LD32(a0);
    v0 = LD32(v1+196);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1AEC0;
L_08A1AEC0:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A1AE94; }
    goto L_08A1AEC8;
L_08A1AEC8:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1AEDC;
L_08A1AEDC:;
    a2 = v0 + 0;
    a0 = D_08C2B3A4 - (-19548);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_08A1AE90; }
    goto L_08A1AEF0;
L_08A1AEF0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A1AF40; }
    goto L_08A1AF14;
L_08A1AF14:;
    a0 = LD32(a1);
    goto L_08A1AF18;
L_08A1AF18:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A1B428; }
    goto L_08A1AF30;
L_08A1AF30:;
    a1 = LD32(a1+4);
    goto L_08A1AF34;
L_08A1AF34:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A1AF18; }
    goto L_08A1AF3C;
L_08A1AF3C:;
    s0 = 0 + 0;
    goto L_08A1AF40;
L_08A1AF40:;
    cnd_ = s0 == 0;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08A1AE90; }
    goto L_08A1AF48;
L_08A1AF48:;
    v1 = v0 + 23196;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(sp+32, FBITS(f1));
    a1 = sp + 32;
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f2));
    v0 = LD32(s0);
    v1 = LD32(v0+276);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1AF90;
L_08A1AF90:;
    v0 = D_08AEF8AC - (-1876);
    f2 = BITSF(LD32(v0-1876));
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    v1 = 0x8005;
    f5 = f0 * f2;
    f0 = BITSF(LD32(sp+40));
    f3 = f1 * f2;
    f4 = f0 * f2;
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f4));
    a1 = LD32(s0);
    v0 = LD32(a1-16);
    v0 = s0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A1B400; }
    goto L_08A1AFE4;
L_08A1AFE4:;
    v0 = LD32(a1+56);
    f12 = BITSF(0);
    a1 = sp + 16;
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1AFF8;
L_08A1AFF8:;
    f2 = BITSF(LD32(s1));
    f0 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(s1+4));
    f5 = f0 - f2;
    a2 = LD32(sp+32);
    a3 = LD32(sp+36);
    t0 = LD32(sp+40);
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    {u32 a_=sp+(128);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {vr4=BITSF(a2);}
    {vr5=BITSF(a3);}
    {vr6=BITSF(t0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    f3 = f1 - f3;
    f4 = f0 - f4;
    v0 = D_08AEF8B0 - (-1872);
    f2 = BITSF(LD32(v0-1872));
    v1 = FBITS(f5);
    a0 = FBITS(f3);
    a1 = FBITS(f4);
    {float s0=vr4;float d0=sqrtf(s0);vr4=d0;}
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v0=FBITS(vr4);}
    {vr0=BITSF(v1);}
    f0 = BITSF(v0);
    {vr1=BITSF(a0);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    fcc = FCMP(f2, f0, 12);
    f1 = BITSF(v0);
    {u32 a_=sp+(160);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {vr8=BITSF(v1);}
    {vr4=BITSF(a2);}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v[9]=BITSF(a0);}
    {v0=FBITS(vr0);}
    {v[10]=BITSF(a1);}
    f7 = BITSF(v0);
    {vr5=BITSF(a3);}
    ST32(sp+48, FBITS(f5));
    {vr6=BITSF(t0);}
    {float s0=vr8;float s1=v[9];float s2=v[10];float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    ST32(sp+52, FBITS(f3));
    {v0=FBITS(vr8);}
    f6 = BITSF(v0);
    ST32(sp+56, FBITS(f4));
    ST32(sp, FBITS(f5));
    ST32(sp+4, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08A1B348; }
    goto L_08A1B0CC;
L_08A1B0CC:;
    fcc = FCMP(f2, f7, 12);
    cnd_ = !fcc;
    if (cnd_) { f5 = BITSF(LD32(sp+48)); goto L_08A1B34C; }
    goto L_08A1B0DC;
L_08A1B0DC:;
    fcc = FCMP(f2, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { f5 = BITSF(LD32(sp+48)); goto L_08A1B34C; }
    goto L_08A1B0EC;
L_08A1B0EC:;
    f0 = f7 * f1;
    f3 = f1 / f20;
    v0 = D_08AEF8B4 - (-1868);
    f2 = BITSF(LD32(v0-1868));
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[20]=1.57079632679f;}
    {u32 a_=sp+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f0 = f6 / f0;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    {float s0=vr0;float d0=(s0<-1?-1:(s0>1?1:s0));vr0=d0;}
    {float s0=vr0;float d0=asinf(s0)*0.63661977236f;vr0=d0;}
    {float s0=vr0;float d0=1.0f-s0;vr0=d0;}
    {float s0=vr0;float t0=v[20];float d0=s0*t0;vr0=d0;}
    {v0=FBITS(vr0);}
    {vr0=0.63661977236f;}
    {vr4=BITSF(v0);}
    {float s0=vr4;float t0=vr0;float d0=s0*t0;vr0=d0;}
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f3 = f3 * f0;
    fcc = FCMP(f3, f2, 14);
    cnd_ = !fcc;
    f5 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_08A1B34C; }
    goto L_08A1B158;
L_08A1B158:;
    v0 = D_08AEF8B8 - (-1864);
    f0 = BITSF(LD32(v0-1864));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(sp+52)); goto L_08A1B350; }
    goto L_08A1B170;
L_08A1B170:;
    v0 = FBITS(f3);
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr4=BITSF(v1);}
    {float s0=vr0;float d0=(s0<-1?-1:(s0>1?1:s0));v[12]=d0;}
    {vr5=BITSF(a0);}
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr6=BITSF(a1);}
    {vr0=BITSF(a2);}
    {vr1=BITSF(a3);}
    {vr2=BITSF(t0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[10]);}
    f5 = BITSF(v0);
    {v0=FBITS(vr8);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    {u32 a_=sp+(272);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[16]=BITSF(v0);}
    {v0=FBITS(v[9]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    {float s0=v[12];float d0=asinf(s0)*0.63661977236f;v[12]=d0;}
    v0 = FBITS(f0);
    f1 = BITSF(0);
    {v[17]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[18]=BITSF(v0);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[16];float t1=v[17];float t2=v[18];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    {float s0=v[12];float t0=v[20];float d0=s0*t0;v[12]=d0;}
    ST32(sp+80, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    {v0=FBITS(v[12]);}
    ST32(sp+84, FBITS(f3));
    f6 = BITSF(v0);
    ST32(sp+88, FBITS(f5));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f5));
    if (cnd_) { goto L_08A1B25C; }
    goto L_08A1B220;
L_08A1B220:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+88, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    goto L_08A1B25C;
L_08A1B25C:;
    {vr4=0.31830988618f;}
    v0 = FBITS(f6);
    {u32 a_=sp+(304);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr4=d0;}
    v1 = LD32(sp+64);
    v0 = LD32(sp+68);
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    v1 = LD32(sp+72);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr8;float d0=s0;v[3]=d0;}
    {v0=FBITS(v[3]);}
    f4 = BITSF(v0);
    {v0=FBITS(vr0);}
    f3 = BITSF(v0);
    {v0=FBITS(vr1);}
    f2 = BITSF(v0);
    ST32(sp+96, FBITS(f3));
    {v0=FBITS(vr2);}
    ST32(sp+100, FBITS(f2));
    ST32(sp+104, v0);
    ST32(sp+108, FBITS(f4));
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    ST32(sp+112, v0);
    ST32(sp+116, v1);
    v0 = LD32(sp+104);
    v1 = LD32(sp+108);
    ST32(sp+120, v0);
    ST32(sp+124, v1);
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
    {v[115]=BITSF(LD32(sp+(108)));}
    {v[116]=BITSF(LD32(sp+(0)));}
    {v[117]=BITSF(LD32(sp+(4)));}
    {v[118]=BITSF(LD32(sp+(8)));}
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
    {ST32(sp+(48),FBITS(v[120]));}
    {ST32(sp+(52),FBITS(v[121]));}
    {ST32(sp+(56),FBITS(v[122]));}
    goto L_08A1B348;
L_08A1B348:;
    f5 = BITSF(LD32(sp+48));
    goto L_08A1B34C;
L_08A1B34C:;
    f3 = BITSF(LD32(sp+52));
    goto L_08A1B350;
L_08A1B350:;
    f4 = BITSF(LD32(sp+56));
    v0 = FBITS(f5);
    {u32 a_=sp+(320);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    f0 = f4 * f20;
    if (cnd_) { goto L_08A1B3D8; }
    goto L_08A1B390;
L_08A1B390:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f4 = BITSF(v0);
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    f5 = BITSF(v0);
    ST32(sp+56, FBITS(f4));
    {v0=FBITS(vr1);}
    f3 = BITSF(v0);
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, v0);
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f4));
    f0 = f4 * f20;
    goto L_08A1B3D8;
L_08A1B3D8:;
    f1 = f5 * f20;
    f2 = f3 * f20;
    v0 = 1;
    ST32(s2+8, FBITS(f0));
    ST32(s2, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f0));
    goto L_08A1AE94;
L_08A1B400:;
    v0 = LD32(a1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B40C;
L_08A1B40C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+24, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    goto L_08A1AFF8;
L_08A1B428:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A1AF30; }
    goto L_08A1B434;
L_08A1B434:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A1AF34; }
    goto L_08A1B440;
L_08A1B440:;
    goto L_08A1AF40;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;
}

/* 08A1B448 */
void func_08A1B448(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08A1B448:;
    sp = sp - 272;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A1B4A4; }
    goto L_08A1B474;
L_08A1B474:;
    v0 = LD32(s0+296);
    goto L_08A1B478;
L_08A1B478:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1B488; }
    goto L_08A1B480;
L_08A1B480:;
    v0 = v0 - 1;
    ST32(s0+296, v0);
    goto L_08A1B488;
L_08A1B488:;
    sp = sp + 272;
    return;
L_08A1B4A4:;
    a0 = 0x805e;
    a1 = 60;
    a2 = 0 + 0;
    a3 = 0 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1B4C8;
L_08A1B4C8:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A1B474; }
    goto L_08A1B4D0;
L_08A1B4D0:;
    s1 = LD32(v0+24);
    v0 = LD32(s0+16);
    a1 = LD32(s0+304);
    s2 = s1 + 28;
    ST32(s1+4, v0);
    v0 = LD32(s0+20);
    ST32(s1+8, v0);
    v1 = LD32(a1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B4FC;
L_08A1B4FC:;
    v1 = D_08AEF8BC - (-1860);
    f1 = BITSF(LD32(v1-1860));
    ST32(sp+16, 0);
    {u32 a_=sp+(176);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f1));
    {u32 a_=sp+(208);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0+4));
    ST32(sp+24, 0);
    f0 = f0 - f1;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    t0 = LD32(s0+304);
    v0 = LD32(s0+152);
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(s1+20, v0);
    ST32(s1+28, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    cnd_ = t0 != 0;
    ST32(s2+8, FBITS(f2));
    if (cnd_) { goto L_08A1B7DC; }
    goto L_08A1B558;
L_08A1B558:;
    a1 = LD32(t0);
    a0 = t0 + 0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v1 = LD32(a1-16);
    v0 = LD32(a1+48);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v1 = t0 + v1;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    t_ = v0;
    s2 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B584;
L_08A1B584:;
    a0 = LD32(s0+304);
    s4 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B59C;
L_08A1B59C:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a1 = s2 + 0;
    a2 = 1;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST32(sp+44, FBITS(f3));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f5));
    ST32(sp+56, FBITS(f6));
    ST32(sp+60, FBITS(f7));
    ST32(sp+64, FBITS(f8));
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1B5F8;
L_08A1B5F8:;
    {u32 a_=sp+(176);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A1B678; }
    goto L_08A1B60C;
L_08A1B60C:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B620;
L_08A1B620:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+32, FBITS(f0));
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    ST32(sp+36, FBITS(f1));
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    ST32(sp+40, FBITS(f2));
    ST32(sp+44, FBITS(f3));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f5));
    ST32(sp+56, FBITS(f6));
    ST32(sp+60, FBITS(f7));
    ST32(sp+64, FBITS(f8));
    goto L_08A1B678;
L_08A1B678:;
    a0 = LD32(s0+304);
    a1 = sp + 16;
    v1 = LD32(a0);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+276);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B69C;
L_08A1B69C:;
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+40);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+48);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+44);
    {v[16]=BITSF(v1);}
    v1 = LD32(sp+52);
    {v[17]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[18]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(sp+60);
    {v[33]=BITSF(v1);}
    v1 = 0x3dcc0000u;
    v0 = LD32(sp+64);
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[34]=BITSF(v0);}
    v1 = v1 | 0xcccd;
    v0 = 0 + 0;
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[20]=BITSF(v0);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[21]=BITSF(v1);}
    v0 = 0x41200000u;
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[22]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f1 = BITSF(v0);
    v0 = D_08AEF8C0 - (-1856);
    f0 = BITSF(LD32(v0-1856));
    v0 = D_08AEF8C4 - (-1852);
    a3 = s1 + 40;
    ST32(sp+84, FBITS(f0));
    a0 = s3 + 0;
    a1 = 1;
    f0 = BITSF(LD32(v0-1852));
    v0 = 999;
    ST32(s1+52, v0);
    v0 = D_08AEF8C8 - (-1848);
    a2 = 1;
    ST32(sp+88, FBITS(f0));
    f0 = BITSF(LD32(v0-1848));
    ST32(sp+80, 0);
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f3));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f3));
    ST32(s1+12, s4);
    ST32(s1+40, FBITS(f2));
    ST32(s1+56, FBITS(f0));
    ST32(s1+16, s2);
    v0 = LD_U8(s0+268);
    ST8(s1, v0);
    v1 = LD_U8(s0+269);
    ST8(s1+24, v1);
    v0 = LD32(s3+28);
    ST32(s3, s2);
    v0 = v0 | 0x1;
    ST32(s3+28, v0);
    ST32(s3+4, s2);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B7D4;
L_08A1B7D4:;
    v0 = LD32(s0+296);
    goto L_08A1B478;
L_08A1B7DC:;
    v0 = LD32(t0);
    a1 = 0x66760000u;
    a2 = s2 + 0;
    a0 = LD32(v0-12);
    a1 = a1 | 0x4f6;
    a3 = 0 + 0;
    a0 = t0 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B80C;
L_08A1B80C:;
    t0 = LD32(s0+304);
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_08A1B558;
}

/* 08A1B824 */
void func_08A1B824(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1B824:;
    sp = sp - 16;
    a1 = 8;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = LD32(a0+304);
    v1 = LD_U8(v0+195);
    cnd_ = v1 != 0;
    a0 = 0x8063;
    if (cnd_) { goto L_08A1B870; }
    goto L_08A1B850;
L_08A1B850:;
    v0 = LD32(s0+296);
    goto L_08A1B854;
L_08A1B854:;
    cnd_ = v0 == 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_08A1B860; }
    goto L_08A1B85C;
L_08A1B85C:;
    ST32(s0+296, v1);
    goto L_08A1B860;
L_08A1B860:;
    sp = sp + 16;
    return;
L_08A1B870:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1B878;
L_08A1B878:;
    cnd_ = v0 == 0;
    t2 = v0 + 0;
    if (cnd_) { goto L_08A1B850; }
    goto L_08A1B880;
L_08A1B880:;
    a0 = LD32(v0+24);
    cnd_ = a0 == 0;
    t1 = LD32(s0+304);
    if (cnd_) { goto L_08A1B8A8; }
    goto L_08A1B88C;
L_08A1B88C:;
    v1 = LD32(t1);
    v0 = LD32(v1-16);
    v0 = t1 + v0;
    v1 = LD32(v0+4);
    ST32(a0+4, v1);
    v0 = LD32(s0+20);
    ST32(a0, v0);
    goto L_08A1B8A8;
L_08A1B8A8:;
    v1 = LD32(t1);
    t0 = LD32(t2+28);
    a0 = t2 + 0;
    v0 = LD32(v1-16);
    t0 = t0 | 0x1;
    a1 = 1;
    v0 = t1 + v0;
    v1 = LD32(v0+4);
    a2 = 1;
    ST32(t2, v1);
    a3 = LD32(t1);
    v0 = LD32(a3-16);
    v0 = t1 + v0;
    v1 = LD32(v0+4);
    ST32(t2+28, t0);
    ST32(t2+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B8EC;
L_08A1B8EC:;
    v0 = LD32(s0+296);
    goto L_08A1B854;
}

/* 08A1B8F4 */
void func_08A1B8F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1B8F4:;
    sp = sp - 32;
    a1 = a0 + 220;
    s0 = a0 + 0;
    { rv_t r_ = func_08A23554(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B90C;
L_08A1B90C:;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1B91C;
L_08A1B91C:;
    a1 = LD32(s0+216);
    a0 = s0 + 0;
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B930;
L_08A1B930:;
    a0 = LD32(s0+304);
    a1 = 0x8b250000u;
    a1 = a1 | 0x1982;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    v0 = LD32(a0+100);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1B964; }
    goto L_08A1B954;
L_08A1B954:;
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B95C;
L_08A1B95C:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1B974; }
    goto L_08A1B964;
L_08A1B964:;
    goto L_08A1B968;
L_08A1B968:;
    sp = sp + 32;
    return;
L_08A1B974:;
    v0 = LD32(v0);
    v1 = LD32(v0+84);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1B984;
L_08A1B984:;
    goto L_08A1B968;
}

/* 08A1B98C */
void func_08A1B98C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1B98C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+200);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A1B9DC; }
    goto L_08A1B9B0;
L_08A1B9B0:;
    v1 = LD32(s0+196);
    v0 = (u32)-1;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08A1B9CC; }
    goto L_08A1B9C4;
L_08A1B9C4:;
    func_08A1F86C(a0, a1);
    goto L_08A1B9CC;
L_08A1B9CC:;
    sp = sp + 16;
    return;
L_08A1B9DC:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1B9E4;
L_08A1B9E4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A1B9B0; }
    goto L_08A1B9EC;
L_08A1B9EC:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_08A1B9B0;
}

/* 08A1B9F8 */
void func_08A1B9F8(u32 a0)
{
    u32 v0 = 0;
L_08A1B9F8:;
    v0 = 1;
    ST32(a0+84, v0);
    return;
}

/* 08A1BA04 */
void func_08A1BA04(void)
{
L_08A1BA04:;
    return;
}

/* 08A1BA0C */
u32 func_08A1BA0C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1BA0C:;
    sp = sp - 16;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(0);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+44));
    a1 = a0 + 0;
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(a0+44, FBITS(f0));
    if (cnd_) { goto L_08A1BB68; }
    goto L_08A1BA3C;
L_08A1BA3C:;
    v1 = LD32(a0);
    ST32(a0+44, FBITS(f2));
    v0 = v1 < 0xfu;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A1BA78; }
    goto L_08A1BA50;
L_08A1BA50:;
    v0 = v1 << 2;
    v1 = D_08ADEE10 - (-4592);
    v1 = v1 - 4592;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A1BA6Cu: goto L_08A1BA6C; case 0x08A1BA88u: goto L_08A1BA88; case 0x08A1BA98u: goto L_08A1BA98; case 0x08A1BAA8u: goto L_08A1BAA8; case 0x08A1BAB8u: goto L_08A1BAB8; case 0x08A1BAC8u: goto L_08A1BAC8; case 0x08A1BAD8u: goto L_08A1BAD8; case 0x08A1BAE8u: goto L_08A1BAE8; case 0x08A1BAF8u: goto L_08A1BAF8; case 0x08A1BB08u: goto L_08A1BB08; case 0x08A1BB18u: goto L_08A1BB18; case 0x08A1BB28u: goto L_08A1BB28; case 0x08A1BB38u: goto L_08A1BB38; case 0x08A1BB48u: goto L_08A1BB48; case 0x08A1BB58u: goto L_08A1BB58; default: rs_break(0, 0x08a1ba64); }
L_08A1BA6C:;
    a0 = a1 + 0;
    v0 = func_08A1BB70();
    goto L_08A1BA74;
L_08A1BA74:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BA78:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_08A1BA88:;
    a0 = a1 + 0;
    v0 = func_08A1BB78(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A1BA90;
L_08A1BA90:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BA98:;
    a0 = a1 + 0;
    v0 = func_08A1BEE8();
    goto L_08A1BAA0;
L_08A1BAA0:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BAA8:;
    a0 = a1 + 0;
    v0 = func_08A1BCA4(a0);
    goto L_08A1BAB0;
L_08A1BAB0:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BAB8:;
    a0 = a1 + 0;
    v0 = func_08A1BCE8(a0);
    goto L_08A1BAC0;
L_08A1BAC0:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BAC8:;
    a0 = a1 + 0;
    v0 = func_08A1BF00();
    goto L_08A1BAD0;
L_08A1BAD0:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BAD8:;
    a0 = a1 + 0;
    v0 = func_08A1BEF8();
    goto L_08A1BAE0;
L_08A1BAE0:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BAE8:;
    a0 = a1 + 0;
    v0 = func_08A1BEF0();
    goto L_08A1BAF0;
L_08A1BAF0:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BAF8:;
    a0 = a1 + 0;
    v0 = func_08A1BF08();
    goto L_08A1BB00;
L_08A1BB00:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BB08:;
    a0 = a1 + 0;
    v0 = func_08A1BF10();
    goto L_08A1BB10;
L_08A1BB10:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BB18:;
    a0 = a1 + 0;
    v0 = func_08A1BF18();
    goto L_08A1BB20;
L_08A1BB20:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BB28:;
    a0 = a1 + 0;
    v0 = func_08A1BF20(a0);
    goto L_08A1BB30;
L_08A1BB30:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BB38:;
    a0 = a1 + 0;
    v0 = func_08A1BF7C();
    goto L_08A1BB40;
L_08A1BB40:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BB48:;
    a0 = a1 + 0;
    v0 = func_08A1BF74();
    goto L_08A1BB50;
L_08A1BB50:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BB58:;
    a0 = a1 + 0;
    v0 = func_08A1BF84();
    goto L_08A1BB60;
L_08A1BB60:;
    a0 = v0 + 0;
    goto L_08A1BA78;
L_08A1BB68:;
    a0 = LD32(a0);
    goto L_08A1BA78;
}

/* 08A1BB70 */
u32 func_08A1BB70(void)
{
    u32 v0 = 0;
L_08A1BB70:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BB78 */
u32 func_08A1BB78(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1BB78:;
    sp = sp - 32;
    f0 = BITSF(0);
    f1 = BITSF(LD32(a0+104));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A1BC58; }
    goto L_08A1BBA0;
L_08A1BBA0:;
    a0 = LD32(s0+284);
    goto L_08A1BBA4;
L_08A1BBA4:;
    s1 = (u32)-1;
    cnd_ = a0 == s1;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A1BBC0; }
    goto L_08A1BBB0;
L_08A1BBB0:;
    v0 = func_08A68F5C(a0);
    goto L_08A1BBB8;
L_08A1BBB8:;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A1BC4C; }
    goto L_08A1BBC0;
L_08A1BBC0:;
    v1 = LD32(s0+20);
    v0 = 0xfd900000u;
    v0 = v0 | 0x85c9;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+304); goto L_08A1BC24; }
    goto L_08A1BBD4;
L_08A1BBD4:;
    v0 = LD32(s0+160);
    goto L_08A1BBD8;
L_08A1BBD8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A1BC14; }
    goto L_08A1BBE0;
L_08A1BBE0:;
    v0 = LD32(s0+364);
    v0 = v0 & 0x800;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A1BBFC; }
    goto L_08A1BBF0;
L_08A1BBF0:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A1BBFC; }
    goto L_08A1BBF8;
L_08A1BBF8:;
    v1 = 1;
    goto L_08A1BBFC;
L_08A1BBFC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A1BC14:;
    a0 = s0 + 0;
    f0 = func_08A17C64(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A1BC1C;
L_08A1BC1C:;
    v1 = 1;
    goto L_08A1BBFC;
L_08A1BC24:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+160); goto L_08A1BBD8; }
    goto L_08A1BC2C;
L_08A1BC2C:;
    v0 = LD32(v0+84);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+160); goto L_08A1BBD8; }
    goto L_08A1BC38;
L_08A1BC38:;
    v0 = LD_U8(v0+8);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A1BBFC; }
    goto L_08A1BC44;
L_08A1BC44:;
    v0 = LD32(s0+160);
    goto L_08A1BBD8;
L_08A1BC4C:;
    v1 = 0 + 0;
    ST32(s0+284, s1);
    goto L_08A1BBFC;
L_08A1BC58:;
    a1 = s0 + 0;
    a0 = sp + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1BC68;
L_08A1BC68:;
    a1 = LD32(s0+220);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { a1 = LD32(s0+212); goto L_08A1BC8C; }
    goto L_08A1BC78;
L_08A1BC78:;
    a0 = s0 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_08A234FC(a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1BC84;
L_08A1BC84:;
    a0 = LD32(s0+284);
    goto L_08A1BBA4;
L_08A1BC8C:;
    a3 = s0 + 220;
    a0 = s0 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1BC9C;
L_08A1BC9C:;
    a0 = LD32(s0+284);
    goto L_08A1BBA4;
}

/* 08A1BCA4 */
u32 func_08A1BCA4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A1BCA4:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+108));
    v0 = LD32(a0+364);
    v1 = 0 + 0;
    f1 = f0 + f1;
    v0 = v0 & 0x800;
    cnd_ = v0 == 0;
    ST32(a0+108, FBITS(f1));
    if (cnd_) { goto L_08A1BCE0; }
    goto L_08A1BCC8;
L_08A1BCC8:;
    f0 = BITSF(LD32(a0+104));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v1 = 3;
    if (cnd_) { goto L_08A1BCE0; }
    goto L_08A1BCDC;
L_08A1BCDC:;
    v1 = 1;
    goto L_08A1BCE0;
L_08A1BCE0:;
    v0 = v1 + 0;
    return v0;
}

/* 08A1BCE8 */
u32 func_08A1BCE8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A1BCE8:;
    sp = sp - 48;
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    a1 = s0 + 0;
    a2 = 1;
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+108));
    a0 = sp + 0;
    f0 = f0 + f1;
    ST32(s0+108, FBITS(f0));
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1BD24;
L_08A1BD24:;
    a1 = LD32(s0+220);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A1BED0; }
    goto L_08A1BD34;
L_08A1BD34:;
    a2 = sp + 0;
    { rv_t r_ = func_08A234FC(a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1BD3C;
L_08A1BD3C:;
    f2 = BITSF(LD32(s0+112));
    goto L_08A1BD40;
L_08A1BD40:;
    f3 = BITSF(0);
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    v0 = D_08AEF8CC - (-1844);
    if (cnd_) { goto L_08A1BEA0; }
    goto L_08A1BD54;
L_08A1BD54:;
    f0 = BITSF(LD32(v0-1844));
    a1 = LD32(s0+220);
    goto L_08A1BD5C;
L_08A1BD5C:;
    f12 = f0;
    a0 = s0 + 0;
    func_08A2352C(a1, f12);
    goto L_08A1BD68;
L_08A1BD68:;
    v1 = LD32(s0+20);
    v0 = 0x391b0000u;
    v0 = v0 | 0xd415;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s0+304); goto L_08A1BDAC; }
    goto L_08A1BD7C;
L_08A1BD7C:;
    v0 = LD32(s0+364);
    goto L_08A1BD80;
L_08A1BD80:;
    a0 = 4;
    goto L_08A1BD84;
L_08A1BD84:;
    v1 = 1;
    v0 = v0 & 0x800;
    if (v0 == 0) a0 = v1;
    goto L_08A1BD90;
L_08A1BD90:;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
L_08A1BDAC:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(s0+364); goto L_08A1BD80; }
    goto L_08A1BDB4;
L_08A1BDB4:;
    v0 = LD_U8(a1+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1BDD4; }
    goto L_08A1BDC0;
L_08A1BDC0:;
    v0 = LD32(s0+364);
    v0 = v0 & 0x800;
    cnd_ = v0 == 0;
    a0 = 0x8084;
    if (cnd_) { goto L_08A1BE14; }
    goto L_08A1BDD0;
L_08A1BDD0:;
    v0 = LD_U8(a1+195);
    goto L_08A1BDD4;
L_08A1BDD4:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+364); goto L_08A1BD80; }
    goto L_08A1BDDC;
L_08A1BDDC:;
    v0 = LD_U8(s0+360);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+364); goto L_08A1BD80; }
    goto L_08A1BDE8;
L_08A1BDE8:;
    v1 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = 4;
    if (cnd_) { goto L_08A1BD90; }
    goto L_08A1BE0C;
L_08A1BE0C:;
    v0 = LD32(s0+364);
    goto L_08A1BD84;
L_08A1BE14:;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1BE24;
L_08A1BE24:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A1BD7C; }
    goto L_08A1BE2C;
L_08A1BE2C:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    a0 = D_08ADEE4C - (-4532);
    if (cnd_) { goto L_08A1BD7C; }
    goto L_08A1BE38;
L_08A1BE38:;
    a0 = a0 - 4532;
    { u64 r_ = func_088FB130(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1BE40;
L_08A1BE40:;
    a2 = s1 + 4;
    a1 = s1 + 0;
    a0 = s0 + 0;
    func_08A236AC(a0, a1, a2);
    goto L_08A1BE50;
L_08A1BE50:;
    a3 = LD32(s0+304);
    t0 = LD32(s2+28);
    a0 = s2 + 0;
    v1 = LD32(a3);
    t0 = t0 | 0x1;
    a1 = 1;
    v0 = LD32(v1-16);
    a2 = 1;
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(s2, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(s2+28, t0);
    ST32(s2+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1BE98;
L_08A1BE98:;
    v0 = LD32(s0+364);
    goto L_08A1BD80;
L_08A1BEA0:;
    f0 = BITSF(LD32(s0+108));
    f1 = BITSF(LD32(v0-1844));
    f0 = f0 / f2;
    a0 = sp + 16;
    a1 = sp + 20;
    a2 = sp + 24;
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    f0 = func_08A23AD0(a0, a1, a2);
    goto L_08A1BEC8;
L_08A1BEC8:;
    a1 = LD32(s0+220);
    goto L_08A1BD5C;
L_08A1BED0:;
    a1 = LD32(s0+212);
    a3 = s0 + 220;
    a2 = sp + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1BEE0;
L_08A1BEE0:;
    f2 = BITSF(LD32(s0+112));
    goto L_08A1BD40;
}

/* 08A1BEE8 */
u32 func_08A1BEE8(void)
{
    u32 v0 = 0;
L_08A1BEE8:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BEF0 */
u32 func_08A1BEF0(void)
{
    u32 v0 = 0;
L_08A1BEF0:;
    v0 = 7;
    return v0;
}

/* 08A1BEF8 */
u32 func_08A1BEF8(void)
{
    u32 v0 = 0;
L_08A1BEF8:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BF00 */
u32 func_08A1BF00(void)
{
    u32 v0 = 0;
L_08A1BF00:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BF08 */
u32 func_08A1BF08(void)
{
    u32 v0 = 0;
L_08A1BF08:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BF10 */
u32 func_08A1BF10(void)
{
    u32 v0 = 0;
L_08A1BF10:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BF18 */
u32 func_08A1BF18(void)
{
    u32 v0 = 0;
L_08A1BF18:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BF20 */
u32 func_08A1BF20(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1BF20:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A212F8(a0);
    goto L_08A1BF34;
L_08A1BF34:;
    v0 = D_08AEF8D0 - (-1840);
    f0 = BITSF(LD32(s0+120));
    f1 = BITSF(LD32(v0-1840));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v1 = 6;
    if (cnd_) { goto L_08A1BF60; }
    goto L_08A1BF50;
L_08A1BF50:;
    v0 = LD32(s0+364);
    v1 = 11;
    v0 = v0 & 0x800;
    if (v0 == 0) v1 = 0;
    goto L_08A1BF60;
L_08A1BF60:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A1BF74 */
u32 func_08A1BF74(void)
{
    u32 v0 = 0;
L_08A1BF74:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BF7C */
u32 func_08A1BF7C(void)
{
    u32 v0 = 0;
L_08A1BF7C:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BF84 */
u32 func_08A1BF84(void)
{
    u32 v0 = 0;
L_08A1BF84:;
    v0 = 0 + 0;
    return v0;
}

/* 08A1BF8C */
rv_t func_08A1BF8C(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A1BF8C:;
    sp = sp - 48;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = a2 + 0;
    f21 = f13;
    f20 = f12;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A1BFF0; }
    goto L_08A1BFC8;
L_08A1BFC8:;
    goto L_08A1BFCC;
L_08A1BFCC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A1BFF0:;
    a0 = a2 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1BFF8;
L_08A1BFF8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+88); goto L_08A1C0D8; }
    goto L_08A1C000;
L_08A1C000:;
    a0 = LD32(s0);
    goto L_08A1C004;
L_08A1C004:;
    v0 = LD32(a0-12);
    v0 = s0 + v0;
    v1 = LD32(v0+100);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A1BFCC; }
    goto L_08A1C018;
L_08A1C018:;
    v0 = LD32(a0+248);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C024;
L_08A1C024:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1BFCC; }
    goto L_08A1C02C;
L_08A1C02C:;
    v1 = LD32(s0);
    v0 = LD32(v1+248);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C03C;
L_08A1C03C:;
    v1 = LD32(s0);
    s3 = v0 + 0;
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C050;
L_08A1C050:;
    v1 = LD32(s0);
    s4 = v0 + 0;
    v0 = LD32(v1+292);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C064;
L_08A1C064:;
    v1 = v0 + 0;
    v0 = LD32(s3+56);
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    a1 = 3507;
    if (cnd_) { goto L_08A1C0BC; }
    goto L_08A1C078;
L_08A1C078:;
    v0 = LD32(s3+60);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A1C0C0; }
    goto L_08A1C088;
L_08A1C088:;
    v0 = LD32(s3+64);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = s0 + 0; goto L_08A1C0C4; }
    goto L_08A1C098;
L_08A1C098:;
    v0 = s4 << 2;
    v0 = v0 + s3;
    a1 = LD32(v0+4);
    v1 = v1 << 2;
    v0 = s1 << 2;
    v1 = v1 + a1;
    a0 = LD32(v1);
    v0 = v0 + a0;
    a1 = LD32(v0);
    goto L_08A1C0BC;
L_08A1C0BC:;
    a0 = s2 + 0;
    goto L_08A1C0C0;
L_08A1C0C0:;
    a2 = s0 + 0;
    goto L_08A1C0C4;
L_08A1C0C4:;
    f12 = f20;
    f13 = f21;
    { rv_t r_ = func_08A1C0FC(a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C0D0;
L_08A1C0D0:;
    goto L_08A1BFCC;
L_08A1C0D8:;
    a0 = LD32(v0+56);
    v1 = LD32(a0);
    v0 = LD32(v1+64);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C0EC;
L_08A1C0EC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1BFCC; }
    goto L_08A1C0F4;
L_08A1C0F4:;
    a0 = LD32(s0);
    goto L_08A1C004;
}

/* 08A1C0FC */
rv_t func_08A1C0FC(u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1C0FC:;
    sp = sp - 32;
    v0 = 3507;
    a0 = a2 + 0;
    s0 = a1 + 0;
    f21 = f13;
    f20 = f12;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A1C15C; }
    goto L_08A1C130;
L_08A1C130:;
    v1 = LD32(a2);
    v0 = LD32(v1-12);
    v0 = a2 + v0;
    s1 = LD32(v0+100);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A1C160; }
    goto L_08A1C148;
L_08A1C148:;
    v0 = LD32(v1+248);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C154;
L_08A1C154:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A1C17C; }
    goto L_08A1C15C;
L_08A1C15C:;
    goto L_08A1C160;
L_08A1C160:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A1C17C:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C184;
L_08A1C184:;
    a0 = v0 + 0;
    f12 = f20;
    f13 = f21;
    a1 = 0 + 0;
    s2 = v0 + 0;
    func_08810C7C(a0, a1, f12, f13);
    goto L_08A1C19C;
L_08A1C19C:;
    v1 = LD32(s1+52);
    cnd_ = v1 == 0;
    a3 = s1 + 52;
    if (cnd_) { goto L_08A1C1D4; }
    goto L_08A1C1A8;
L_08A1C1A8:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08A1C1B0;
L_08A1C1B0:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_08A1C1E0; }
    goto L_08A1C1C8;
L_08A1C1C8:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08A1C1B0; }
    goto L_08A1C1D4;
L_08A1C1D4:;
    a0 = LD32(a3+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A1C234; }
    goto L_08A1C1E0;
L_08A1C1E0:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A1C1EC; }
    goto L_08A1C1E8;
L_08A1C1E8:;
    v0 = LD32(a2);
    goto L_08A1C1EC;
L_08A1C1EC:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A1C1FC; }
    goto L_08A1C1F4;
L_08A1C1F4:;
    a1 = s0 + 0;
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C1FC;
L_08A1C1FC:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    t1 = s2 + 0;
    a2 = 9;
    a3 = 0 + 0;
    t0 = s0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C21C;
L_08A1C21C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1C15C; }
    goto L_08A1C224;
L_08A1C224:;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1C22C;
L_08A1C22C:;
    goto L_08A1C160;
L_08A1C234:;
    a2 = 1;
    a1 = s0 + 0;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1C240;
L_08A1C240:;
    a2 = v0 + 0;
    goto L_08A1C1E0;
}

/* 08A1C248 */
rv_t func_08A1C248(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1C248:;
    sp = sp - 16;
    v0 = LD32(a0+272);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08AEF8D4 - (-1836); goto L_08A1C27C; }
    goto L_08A1C25C;
L_08A1C25C:;
    a1 = v0 + 0;
    v0 = D_08AEF8D4 - (-1836);
    f12 = BITSF(LD32(v0-1836));
    f13 = f12;
    { rv_t r_ = func_08A1C0FC(a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C270;
L_08A1C270:;
    goto L_08A1C274;
L_08A1C274:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A1C27C:;
    f12 = BITSF(LD32(v0-1836));
    f13 = f12;
    { rv_t r_ = func_08A1BF8C(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C288;
L_08A1C288:;
    goto L_08A1C274;
}

/* 08A1C290 */
u32 func_08A1C290(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A1C290:;
    v1 = LD32(a0);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A1C2A8; }
    goto L_08A1C2A0;
L_08A1C2A0:;
    v0 = LD32(a0+28);
    return v0;
L_08A1C2A8:;
    v0 = LD32(a0+32);
    return v0;
}

/* 08A1C2B0 */
u64 func_08A1C2B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1C2B0:;
    sp = sp - 32;
    s3 = a2 & 0xff;
    s2 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a1+304);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    s1 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C2EC;
L_08A1C2EC:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v0 = LD32(s1+308);
    a2 = s0 + 0;
    a3 = 0 + 0;
    t0 = s3 + 0;
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    cnd_ = v0 == 0;
    ST32(s0+8, FBITS(f2));
    if (cnd_) { goto L_08A1C31C; }
    goto L_08A1C318;
L_08A1C318:;
    s2 = LD32(v0+16);
    goto L_08A1C31C;
L_08A1C31C:;
    a0 = LD32(s1+304);
    a1 = LD32(s1+292);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    t2 = LD32(a0);
    v0 = LD32(t2+60);
    t_ = v0;
    t1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C340;
L_08A1C340:;
    cnd_ = v0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A1C384; }
    goto L_08A1C348;
L_08A1C348:;
    v0 = (u32)-1;
    t0 = s3 + 0;
    a2 = s0 + 0;
    a3 = 0 + 0;
    cnd_ = s2 == v0;
    t1 = (u32)-1;
    if (cnd_) { goto L_08A1C380; }
    goto L_08A1C360;
L_08A1C360:;
    a0 = LD32(s1+304);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    t2 = LD32(a0);
    v0 = LD32(t2+60);
    t_ = v0;
    a1 = LD32(s1+292);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C380;
L_08A1C380:;
    v0 = s0 + 0;
    goto L_08A1C384;
L_08A1C384:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A1C3A0 */
void func_08A1C3A0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_08A1C3A0:;
    sp = sp - 240;
    s4 = (u32)-1;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    a0 = LD32(a0+304);
    v1 = LD32(a0);
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+244);
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C3EC;
L_08A1C3EC:;
    v1 = D_08AEF8D8 - (-1832);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f9 = BITSF(LD32(v1-1832));
    ST32(s2+8, FBITS(f0));
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    ST32(s2, FBITS(f1));
    {u32 a_=sp+(144);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    ST32(s2+4, FBITS(f2));
    {u32 a_=sp+(176);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    ST32(s0+8, FBITS(f9));
    ST32(s0, 0);
    ST32(s0+4, 0);
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    f7 = BITSF(LD32(v1+23208));
    v0 = LD32(s1+308);
    ST32(sp, 0);
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+28, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+44, FBITS(f6));
    ST32(sp+48, FBITS(f8));
    ST32(sp+4, 0);
    cnd_ = v0 == 0;
    ST32(sp+8, FBITS(f9));
    if (cnd_) { goto L_08A1C490; }
    goto L_08A1C48C;
L_08A1C48C:;
    s4 = LD32(v0+16);
    goto L_08A1C490;
L_08A1C490:;
    a0 = LD32(s1+304);
    a1 = LD32(s1+292);
    s3 = sp + 16;
    v0 = LD32(a0);
    a2 = s2 + 0;
    a3 = s3 + 0;
    t2 = LD32(v0-12);
    t0 = 1;
    t1 = s4 + 0;
    a0 = a0 + t2;
    v1 = LD32(a0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+60);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C4D4;
L_08A1C4D4:;
    cnd_ = v0 != 0;
    {u32 a_=sp+(192);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A1C518; }
    goto L_08A1C4DC;
L_08A1C4DC:;
    v0 = (u32)-1;
    cnd_ = s4 == v0;
    a2 = s2 + 0;
    if (cnd_) { goto L_08A1C518; }
    goto L_08A1C4E8;
L_08A1C4E8:;
    a0 = LD32(s1+304);
    a1 = LD32(s1+292);
    v1 = LD32(a0);
    a3 = s3 + 0;
    t0 = 1;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C514;
L_08A1C514:;
    {u32 a_=sp+(192);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_08A1C518;
L_08A1C518:;
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {u32 a_=sp+(96);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+24);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(80);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+32);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+28);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(112);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+36);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+44);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+40);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+48);
    {v[33]=BITSF(v0);}
    v0 = LD32(s0+4);
    {v[34]=BITSF(v1);}
    v1 = LD32(s0);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(s0+8);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(s0+8, FBITS(f3));
    {v0=FBITS(v[17]);}
    ST32(s0, FBITS(f2));
    ST32(s0+4, v0);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    sp = sp + 240;
    return;
}

/* 08A1C5E4 */
float func_08A1C5E4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[432] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 432);
L_08A1C5E4:;
    sp = sp - 432;
    s0 = a2 & 0xff;
    s3 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A1C634; }
    goto L_08A1C62C;
L_08A1C62C:;
    v0 = LD32(a0+24);
    if (v0 != 0) s3 = v0;
    goto L_08A1C634;
L_08A1C634:;
    v0 = LD32(s1+304);
    cnd_ = v0 != 0;
    s2 = D_08AEF8DC - (-1828);
    if (cnd_) { goto L_08A1C67C; }
    goto L_08A1C640;
L_08A1C640:;
    goto L_08A1C644;
L_08A1C644:;
    sp = sp + 432;
    return f0;
L_08A1C67C:;
    f20 = BITSF(0);
    f0 = BITSF(LD32(s2-1828));
    s6 = sp + 16;
    a0 = s6 + 0;
    a1 = s1 + 0;
    a2 = 1;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f20));
    ST32(sp+4, FBITS(f20));
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1C6A4;
L_08A1C6A4:;
    a0 = LD32(s1+304);
    v1 = LD32(a0);
    v0 = LD32(v1+196);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C6B8;
L_08A1C6B8:;
    cnd_ = v0 == 0;
    a0 = LD32(s1+304);
    if (cnd_) { goto L_08A1CBE0; }
    goto L_08A1C6C0;
L_08A1C6C0:;
    v1 = LD32(a0);
    v0 = LD32(v1+272);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C6D0;
L_08A1C6D0:;
    a0 = D_08C2C21C - (-15844);
    a0 = a0 - 15844;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1C6E4;
L_08A1C6E4:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A1C7AC; }
    goto L_08A1C6EC;
L_08A1C6EC:;
    a0 = LD32(s1+304);
    a1 = sp + 32;
    v1 = LD32(a0);
    v0 = LD32(v1+64);
    t_ = v0;
    a3 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C704;
L_08A1C704:;
    f0 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+20));
    {u32 a_=sp+(176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    goto L_08A1C720;
L_08A1C720:;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+24));
    f2 = f2 - f0;
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f4));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f2));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_08A1C7AC; }
    goto L_08A1C770;
L_08A1C770:;
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
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_08A1C7AC;
L_08A1C7AC:;
    a0 = 0x5f6b0000u;
    a2 = sp + 160;
    a0 = a0 | 0x9be0;
    a1 = s3 + 0;
    ST32(sp+160, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1C7C4;
L_08A1C7C4:;
    v1 = D_08AEF8E0 - (-1824);
    f20 = BITSF(LD32(v1-1824));
    a0 = LD32(sp+160);
    a1 = 0x8fbb0000u;
    a1 = a1 | 0x8757;
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C7E0;
L_08A1C7E0:;
    a0 = LD32(sp+160);
    a1 = 0xbdde0000u;
    f12 = f20;
    a1 = a1 | 0x31c2;
    f23 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C7F8;
L_08A1C7F8:;
    cnd_ = s0 != 0;
    f22 = f0;
    if (cnd_) { goto L_08A1C828; }
    goto L_08A1C800;
L_08A1C800:;
    v1 = LD32(s1+100);
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+304); goto L_08A1C82C; }
    goto L_08A1C810;
L_08A1C810:;
    f0 = BITSF(LD32(s1+56));
    f21 = BITSF(0);
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+364); goto L_08A1C90C; }
    goto L_08A1C828;
L_08A1C828:;
    v1 = LD32(s1+304);
    goto L_08A1C82C;
L_08A1C82C:;
    a1 = LD32(v1);
    a0 = v1 + 0;
    a2 = LD32(a1-16);
    v0 = LD32(a1+48);
    v1 = v1 + a2;
    t_ = v0;
    s0 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C848;
L_08A1C848:;
    t0 = LD32(s1+364);
    t2 = LD32(s1+152);
    a0 = s6 + 0;
    t0 = (t0 >> 6) & 0x1;
    a2 = s0 + 0;
    a3 = v0 + 0;
    t1 = s3 + 0;
    a1 = sp + 0;
    v0 = func_089FBDBC(a0, a1, a2, a3, t0, t1, t2, 0);
    goto L_08A1C86C;
L_08A1C86C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1C87C; }
    goto L_08A1C874;
L_08A1C874:;
    ST32(v0+16, FBITS(f22));
    ST32(v0+12, FBITS(f23));
    goto L_08A1C87C;
L_08A1C87C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A1E8E8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C884;
L_08A1C884:;
    f1 = BITSF(LD32(s1+124));
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A1C8F0; }
    goto L_08A1C89C;
L_08A1C89C:;
    v1 = LD32(s1+364);
    v0 = v1 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A1C8F0; }
    goto L_08A1C8AC;
L_08A1C8AC:;
    f0 = BITSF(LD32(s1+56));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s1+120)); goto L_08A1C904; }
    goto L_08A1C8C0;
L_08A1C8C0:;
    v0 = LD32(s1+100);
    f2 = BITSF(LD32(s1+120));
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 * f1;
    cnd_ = v0 != 0;
    f0 = f2 + f0;
    if (cnd_) { goto L_08A1C8E0; }
    goto L_08A1C8DC;
L_08A1C8DC:;
    f0 = f2 + f1;
    goto L_08A1C8E0;
L_08A1C8E0:;
    v0 = v1 | 0x4000;
    ST32(s1+120, FBITS(f0));
    ST32(s1+364, v0);
    v0 = LD32(s1+296);
    goto L_08A1C8F0;
L_08A1C8F0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1C644; }
    goto L_08A1C8F8;
L_08A1C8F8:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    goto L_08A1C644;
L_08A1C904:;
    f0 = f0 + f1;
    goto L_08A1C8E0;
L_08A1C90C:;
    v0 = v0 & 0x400;
    cnd_ = v0 == 0;
    a0 = sp + 64;
    if (cnd_) { goto L_08A1C9D0; }
    goto L_08A1C918;
L_08A1C918:;
    cnd_ = (s32)v1 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A1C87C; }
    goto L_08A1C920;
L_08A1C920:;
    v0 = D_08AEF8E4 - (-1820);
    f20 = BITSF(LD32(v0-1820));
    s5 = sp + 144;
    s4 = sp + 128;
    f12 = BITSF(LD32(s1+96));
    goto L_08A1C934;
L_08A1C934:;
    f13 = BITSF(0);
    a1 = sp + 0;
    f12 = f12 * f20;
    a0 = s4 + 0;
    s2 = s2 + 1;
    func_088F79C0(a0, a1, f12, f13);
    goto L_08A1C94C;
L_08A1C94C:;
    f0 = BITSF(LD32(sp+128));
    f1 = BITSF(LD32(sp+132));
    v1 = LD32(s1+304);
    ST32(sp+144, FBITS(f0));
    a0 = v1 + 0;
    f0 = BITSF(LD32(sp+136));
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f0));
    a1 = LD32(v1);
    a2 = LD32(a1-16);
    v0 = LD32(a1+48);
    v1 = v1 + a2;
    t_ = v0;
    s0 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C984;
L_08A1C984:;
    t0 = LD32(s1+364);
    t2 = LD32(s1+152);
    a2 = s0 + 0;
    t0 = (t0 >> 6) & 0x1;
    a3 = v0 + 0;
    a0 = s6 + 0;
    a1 = s5 + 0;
    t1 = s3 + 0;
    v0 = func_089FBDBC(a0, a1, a2, a3, t0, t1, t2, 0);
    goto L_08A1C9A8;
L_08A1C9A8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+100); goto L_08A1C9BC; }
    goto L_08A1C9B0;
L_08A1C9B0:;
    ST32(v0+16, FBITS(f22));
    ST32(v0+12, FBITS(f23));
    v0 = LD32(s1+100);
    goto L_08A1C9BC;
L_08A1C9BC:;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s1+96)); goto L_08A1C934; }
    goto L_08A1C9C8;
L_08A1C9C8:;
    goto L_08A1C87C;
L_08A1C9D0:;
    a1 = sp + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1C9D8;
L_08A1C9D8:;
    f1 = BITSF(LD32(s1+112));
    fcc = FCMP(f21, f1, 12);
    cnd_ = fcc;
    f24 = BITSF(LD32(s1+96));
    if (cnd_) { goto L_08A1CBAC; }
    goto L_08A1C9EC;
L_08A1C9EC:;
    v1 = LD32(s1+100);
    f2 = BITSF(FBITS(f24) ^ 0x80000000u);
    s2 = 0 + 0;
    v0 = v1 - 1;
    f0 = BITSF(v0);
    v0 = D_08AEF8E4 - (-1820);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-1820));
    f21 = f24 / f1;
    cnd_ = (s32)v1 <= 0;
    f20 = f2 * f0;
    if (cnd_) { goto L_08A1C87C; }
    goto L_08A1CA18;
L_08A1CA18:;
    {v[0]=0.63661977236f;}
    s5 = sp + 48;
    s4 = 0 + 0;
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v1 = LD32(sp+64);
    goto L_08A1CA2C;
L_08A1CA2C:;
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+68);
    {u32 a_=sp+(304);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    {v[49]=BITSF(v0);}
    v0 = FBITS(f20);
    {v[52]=BITSF(v0);}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(208);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[20];float t0=v[0];float d0=s0*t0;v[52]=d0;}
    v1 = LD32(sp+72);
    v0 = LD32(sp+76);
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(336);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(sp+80);
    {float s0=v[52];float d0=cosf(s0*1.57079632679f);v[36]=d0;}
    {u32 a_=sp+(320);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[52];float d0=sinf(s0*1.57079632679f);v[52]=d0;}
    {v[48]=BITSF(v0);}
    v0 = LD32(sp+84);
    {v[49]=BITSF(v1);}
    v1 = LD32(sp+88);
    {v[50]=BITSF(v0);}
    {v[32]=BITSF(v1);}
    v0 = LD32(sp+92);
    {v[33]=BITSF(v0);}
    {v0=FBITS(v[36]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[52]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(240);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+96);
    f4 = BITSF(v0);
    {v[34]=BITSF(v1);}
    v0 = FBITS(f0);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(224);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[20];float s1=v[21];float s2=v[22];float s3=v[23];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[16]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[17]=BITSF(s4);}
    {v[18]=BITSF(v0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[20]);}
    f2 = BITSF(v0);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {v0=FBITS(v[21]);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(sp+48, FBITS(f2));
    f20 = f20 + f21;
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+128, FBITS(f4));
    ST32(sp+136, FBITS(f5));
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f3));
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, v0);
    ST32(sp+132, 0);
    ST32(sp+120, FBITS(f3));
    v1 = LD32(s1+304);
    a1 = LD32(v1);
    a0 = v1 + 0;
    a2 = LD32(a1-16);
    v0 = LD32(a1+48);
    v1 = v1 + a2;
    t_ = v0;
    s0 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1CB5C;
L_08A1CB5C:;
    t0 = LD32(s1+364);
    t2 = LD32(s1+152);
    a2 = s0 + 0;
    t0 = (t0 >> 6) & 0x1;
    a3 = v0 + 0;
    a0 = s6 + 0;
    a1 = s5 + 0;
    t1 = s3 + 0;
    v0 = func_089FBDBC(a0, a1, a2, a3, t0, t1, t2, 0);
    goto L_08A1CB80;
L_08A1CB80:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+100); goto L_08A1CB94; }
    goto L_08A1CB88;
L_08A1CB88:;
    ST32(v0+16, FBITS(f22));
    ST32(v0+12, FBITS(f23));
    v0 = LD32(s1+100);
    goto L_08A1CB94;
L_08A1CB94:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = LD32(sp+64);
    if (cnd_) { goto L_08A1CA2C; }
    goto L_08A1CBA4;
L_08A1CBA4:;
    goto L_08A1C87C;
L_08A1CBAC:;
    f0 = BITSF(LD32(s1+108));
    f20 = BITSF(LD32(s2-1828));
    a0 = sp + 164;
    f0 = f0 / f1;
    a1 = sp + 168;
    a2 = sp + 172;
    ST32(sp+172, FBITS(f20));
    ST32(sp+168, FBITS(f21));
    ST32(sp+164, FBITS(f0));
    f0 = func_08A23AD0(a0, a1, a2);
    goto L_08A1CBD4;
L_08A1CBD4:;
    f20 = f20 - f0;
    f24 = f24 * f20;
    goto L_08A1C9EC;
L_08A1CBE0:;
    a1 = sp + 32;
    v1 = LD32(a0);
    v0 = LD32(v1+68);
    t_ = v0;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1CBF4;
L_08A1CBF4:;
    f0 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+20));
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    goto L_08A1C720;
}

/* 08A1CC14 */
rv_t func_08A1CC14(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A1CC14:;
    sp = sp - 64;
    s2 = D_08B1BD20 - (-17120);
    v0 = (u32)-1;
    s0 = s2 - 17120;
    v1 = LD32(s0+24);
    s4 = sp + 16;
    s3 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A1CD68; }
    goto L_08A1CC50;
L_08A1CC50:;
    v0 = LD32(s1+224);
    f6 = BITSF(LD32(s1+228));
    a3 = s0 + 28;
    v1 = v0 & 0xff;
    v0 = v0 >> 8;
    f1 = BITSF(v1);
    v1 = v0 & 0xff;
    v0 = v0 >> 8;
    f4 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = v0 & 0xff;
    f5 = BITSF(v1);
    f0 = BITSF(v0);
    f3 = (float)(s32)FBITS(f1);
    f2 = (float)(s32)FBITS(f4);
    f1 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f5);
    v0 = D_08AEF8E8 - (-1816);
    f0 = BITSF(LD32(v0-1816));
    ST32(s2-17120, FBITS(f6));
    v0 = D_08AEF8EC - (-1812);
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    f4 = f4 * f0;
    f5 = BITSF(LD32(v0-1812));
    f0 = BITSF(LD32(s1+228));
    t0 = s0 + 44;
    t1 = s0 + 60;
    v1 = s0 + 76;
    ST32(t0+12, FBITS(f5));
    a0 = s4 + 0;
    a1 = s1 + 0;
    ST32(s0+4, FBITS(f0));
    a2 = 1;
    ST32(sp+12, FBITS(f4));
    ST32(a3+12, FBITS(f5));
    ST32(t1+12, 0);
    ST32(s0+76, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f3));
    ST32(v1+12, 0);
    ST32(sp+8, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(s0+28, FBITS(f1));
    ST32(a3+4, FBITS(f2));
    ST32(a3+8, FBITS(f3));
    ST32(s0+44, FBITS(f1));
    ST32(t0+4, FBITS(f2));
    ST32(t0+8, FBITS(f3));
    ST32(s0+60, FBITS(f1));
    ST32(t1+4, FBITS(f2));
    ST32(t1+8, FBITS(f3));
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1CD2C;
L_08A1CD2C:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1CD3C;
L_08A1CD3C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1CD4C; }
    goto L_08A1CD44;
L_08A1CD44:;
    f0 = BITSF(LD32(s1+232));
    ST32(v0+32, FBITS(f0));
    goto L_08A1CD4C;
L_08A1CD4C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A1CD68:;
    a0 = LD32(s0+20);
    v0 = func_0883AE14(a0);
    goto L_08A1CD70;
L_08A1CD70:;
    ST32(s0+24, v0);
    goto L_08A1CC50;
}

/* 08A1CD78 */
float func_08A1CD78(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08A1CD78:;
    sp = sp - 192;
    s6 = D_08AEF8F0 - (-1808);
    v0 = a2 + 0;
    f0 = BITSF(LD32(s6-1808));
    s2 = sp + 16;
    a2 = s2 + 0;
    s5 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    s3 = v0 & 0xff;
    ST32(sp+24, FBITS(f0));
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    func_08A1C3A0(a0, a1, a2);
    goto L_08A1CDE0;
L_08A1CDE0:;
    v0 = LD32(s1+364);
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+304); goto L_08A1CE2C; }
    goto L_08A1CDF0;
L_08A1CDF0:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f0));
    f1 = BITSF(LD32(v1+32));
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(v1+44));
    ST32(sp+24, FBITS(f0));
    v0 = LD32(s1+304);
    goto L_08A1CE2C;
L_08A1CE2C:;
    f12 = BITSF(LD32(s1+92));
    s0 = sp + 48;
    v1 = LD32(v0);
    a2 = s2 + 0;
    a1 = sp + 0;
    a0 = LD32(v1-16);
    t0 = 0 + 0;
    s2 = s5 + 0;
    v0 = v0 + a0;
    a3 = LD32(v0+4);
    a0 = s0 + 0;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08A1CE5C;
L_08A1CE5C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1CE64;
L_08A1CE64:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    a1 = sp + 32;
    a0 = s1 + 0;
    s4 = v0 + 0;
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f4));
    ST32(sp+120, FBITS(f3));
    { rv_t r_ = func_08A1CC14(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1CEC0;
L_08A1CEC0:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s1+364); goto L_08A1CED4; }
    goto L_08A1CEC8;
L_08A1CEC8:;
    v0 = LD32(s1+24);
    if (v0 != 0) s2 = v0;
    v0 = LD32(s1+364);
    goto L_08A1CED4;
L_08A1CED4:;
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A1D034; }
    goto L_08A1CEE0;
L_08A1CEE0:;
    s3 = LD32(s4+4);
    cnd_ = s3 != 0;
    a0 = D_08C2B3A4 - (-19548);
    if (cnd_) { goto L_08A1CF18; }
    goto L_08A1CEEC;
L_08A1CEEC:;
    goto L_08A1CEF0;
L_08A1CEF0:;
    sp = sp + 192;
    return f0;
L_08A1CF18:;
    a0 = a0 - 19548;
    a1 = s3 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1CF28;
L_08A1CF28:;
    cnd_ = v0 == 0;
    s7 = v0 + 0;
    if (cnd_) { goto L_08A1CF64; }
    goto L_08A1CF30;
L_08A1CF30:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1CF44;
L_08A1CF44:;
    a0 = LD32(s1+304);
    s0 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1CF5C;
L_08A1CF5C:;
    cnd_ = s0 == v0;
    v0 = D_08C29338 - (-27848);
    if (cnd_) { goto L_08A1D1D0; }
    goto L_08A1CF64;
L_08A1CF64:;
    v0 = 0x84a0000u;
    goto L_08A1CF68;
L_08A1CF68:;
    v0 = v0 | 0xfbe2;
    cnd_ = s5 == v0;
    a0 = 0x8a940000u;
    if (cnd_) { goto L_08A1D048; }
    goto L_08A1CF74;
L_08A1CF74:;
    a0 = 0x8001;
    goto L_08A1CF78;
L_08A1CF78:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1CF88;
L_08A1CF88:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A1D030; }
    goto L_08A1CF90;
L_08A1CF90:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s2, s3); goto L_08A1D018; }
    goto L_08A1CF9C;
L_08A1CF9C:;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_08A1CFA4;
L_08A1CFA4:;
    cnd_ = s7 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+40)); goto L_08A1CFCC; }
    goto L_08A1CFAC;
L_08A1CFAC:;
    v1 = LD32(s7);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = s7 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { f0 = BITSF(LD32(s1+36)); goto L_08A1CFCC; }
    goto L_08A1CFC8;
L_08A1CFC8:;
    f0 = BITSF(LD32(s1+40));
    goto L_08A1CFCC;
L_08A1CFCC:;
    a2 = LD32(s1+304);
    ST32(s0+12, FBITS(f0));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1CFF8;
L_08A1CFF8:;
    ST32(s0+8, v0);
    v0 = LD32(s4+8);
    ST32(s0+20, v0);
    v1 = LD32(s4+12);
    ST32(s0+16, v1);
    v0 = LD32(s1+152);
    ST32(s0, v0);
    ST32(s2, s3);
    goto L_08A1D018;
L_08A1D018:;
    a0 = s2 + 0;
    a1 = 1;
    v0 = LD32(s0+4);
    a2 = 1;
    ST32(s2+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D030;
L_08A1D030:;
    v0 = LD32(s1+296);
    goto L_08A1D034;
L_08A1D034:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1CEF0; }
    goto L_08A1D03C;
L_08A1D03C:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    goto L_08A1CEF0;
L_08A1D048:;
    a1 = s2 + 0;
    a0 = a0 | 0xc9e9;
    a2 = sp + 128;
    ST32(sp+128, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D05C;
L_08A1D05C:;
    a1 = 0x47ad0000u;
    a0 = LD32(sp+128);
    a1 = a1 | 0x7c99;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D070;
L_08A1D070:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a1 = s3 + 0;
    a2 = 1;
    s2 = v0 + 0;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D088;
L_08A1D088:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1CEEC; }
    goto L_08A1D090;
L_08A1D090:;
    v1 = LD32(v0);
    v0 = LD32(v1+432);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D0A0;
L_08A1D0A0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1CEF0; }
    goto L_08A1D0A8;
L_08A1D0A8:;
    a0 = 0x8032;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D0BC;
L_08A1D0BC:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_08A1CF74; }
    goto L_08A1D0C4;
L_08A1D0C4:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    a1 = 0xaed20000u;
    if (cnd_) { goto L_08A1D16C; }
    goto L_08A1D0D0;
L_08A1D0D0:;
    v0 = LD32(s0);
    v1 = LD32(s0+8);
    a0 = 0xb4840000u;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+8, v1);
    a0 = a0 | 0x3a97;
    ST32(s0, v0);
    a1 = a1 | 0xc55;
    a2 = 0 + 0;
    ST32(s0+4, a0);
    ST32(s0+12, s2);
    v0 = LD32(s1+304);
    a0 = LD32(sp+128);
    a3 = LD32(v0);
    v1 = LD32(a3-16);
    v0 = v0 + v1;
    a3 = LD32(v0+4);
    ST32(s0+16, a3);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D120;
L_08A1D120:;
    ST32(s0+24, v0);
    a1 = 0xaa780000u;
    a1 = a1 | 0x6674;
    a0 = LD32(sp+128);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D138;
L_08A1D138:;
    f2 = BITSF(LD32(s1+112));
    f3 = BITSF(0);
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    ST32(s0+20, v0);
    if (cnd_) { goto L_08A1D1A0; }
    goto L_08A1D150;
L_08A1D150:;
    f2 = BITSF(LD32(s6-1808));
    goto L_08A1D154;
L_08A1D154:;
    f1 = BITSF(LD32(s1+328));
    f0 = BITSF(LD32(s1+332));
    f0 = f0 - f1;
    f0 = f2 * f0;
    f1 = f1 + f0;
    ST32(s0+28, FBITS(f1));
    goto L_08A1D16C;
L_08A1D16C:;
    v1 = LD32(s1+304);
    a0 = s5 + 0;
    a1 = 1;
    a3 = LD32(v1);
    a2 = 1;
    v0 = LD32(a3-16);
    v1 = v1 + v0;
    a3 = LD32(v1+4);
    ST32(s5, s3);
    ST32(s5+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D198;
L_08A1D198:;
    a0 = 0x8001;
    goto L_08A1CF78;
L_08A1D1A0:;
    f0 = BITSF(LD32(s1+108));
    f1 = BITSF(LD32(s6-1808));
    a0 = sp + 132;
    f0 = f0 / f2;
    a1 = sp + 136;
    a2 = sp + 140;
    ST32(sp+136, FBITS(f3));
    ST32(sp+140, FBITS(f1));
    ST32(sp+132, FBITS(f0));
    f0 = func_08A23AD0(a0, a1, a2);
    goto L_08A1D1C8;
L_08A1D1C8:;
    f2 = f0;
    goto L_08A1D154;
L_08A1D1D0:;
    v1 = LD_U8(v0-27848);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A1CEF0; }
    goto L_08A1D1DC;
L_08A1D1DC:;
    v0 = 0x84a0000u;
    goto L_08A1CF68;
}

/* 08A1D1E4 */
float func_08A1D1E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08A1D1E4:;
    sp = sp - 304;
    s1 = a0 + 0;
    a0 = LD32(a0+304);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A1D244; }
    goto L_08A1D224;
L_08A1D224:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = a0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { a1 = LD32(s1+152); goto L_08A1D274; }
    goto L_08A1D240;
L_08A1D240:;
    goto L_08A1D244;
L_08A1D244:;
    sp = sp + 304;
    return f0;
L_08A1D274:;
    a0 = 0xd0cd0000u;
    a2 = sp + 96;
    a0 = a0 | 0xc21c;
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D294;
L_08A1D294:;
    v0 = D_08AEF8F4 - (-1804);
    f12 = BITSF(LD32(v0-1804));
    a0 = LD32(sp+96);
    a1 = 0xf98f0000u;
    a1 = a1 | 0x95d3;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D2AC;
L_08A1D2AC:;
    v0 = D_08AEF8F8 - (-1800);
    f20 = BITSF(LD32(v0-1800));
    a0 = LD32(sp+96);
    a1 = 0x279a0000u;
    a1 = a1 | 0xac41;
    f12 = f20;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D2CC;
L_08A1D2CC:;
    a0 = LD32(sp+96);
    a1 = 0x19560000u;
    f12 = f20;
    a1 = a1 | 0x5259;
    f22 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D2E4;
L_08A1D2E4:;
    v0 = D_08AEF8FC - (-1796);
    f12 = BITSF(LD32(v0-1796));
    a0 = LD32(sp+96);
    a1 = 0x5d910000u;
    a1 = a1 | 0xdceb;
    f23 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D300;
L_08A1D300:;
    a0 = LD32(sp+96);
    a1 = 0xaed20000u;
    a2 = 0xe67d0000u;
    a1 = a1 | 0xc55;
    a2 = a2 | 0x578;
    f24 = f0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D31C;
L_08A1D31C:;
    f1 = BITSF(LD32(s1+112));
    f0 = BITSF(0);
    s4 = v0 + 0;
    f2 = f21;
    fcc = FCMP(f1, f0, 2);
    v0 = D_08AEF900 - (-1792);
    {u32 a_=sp+(176);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = fcc;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A1D368; }
    goto L_08A1D34C;
L_08A1D34C:;
    f0 = BITSF(LD32(s1+108));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A1D360; }
    goto L_08A1D360;
L_08A1D360:;
    f2 = f0 / f1;
    v0 = D_08AEF900 - (-1792);
    goto L_08A1D368;
L_08A1D368:;
    f0 = f21 - f22;
    f20 = BITSF(LD32(v0-1792));
    v0 = D_08AEF904 - (-1788);
    a1 = s1 + 0;
    f0 = f0 * f2;
    f1 = f20 - f2;
    a2 = 1;
    a0 = sp + 0;
    f22 = f0 + f22;
    f0 = BITSF(LD32(v0-1788));
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    f21 = f1 * f0;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D3A8;
L_08A1D3A8:;
    v0 = D_08C2CC00 - (-13312);
    v1 = v0 - 13312;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v0-13312));
    f2 = BITSF(LD32(v1+4));
    f0 = f0 + f20;
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f0));
    a0 = LD32(s1+304);
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, FBITS(f20));
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D3EC;
L_08A1D3EC:;
    {u32 a_=sp+(224);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(144);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    {v[21]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v1 = LD32(sp+40);
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    a1 = sp + 100;
    ST32(sp+20, v0);
    a0 = s1 + 0;
    v0 = 999;
    a2 = sp + 104;
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+100, v0);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f3));
    ST32(sp+104, 0);
    func_08A239A8(a0, a1, a2);
    goto L_08A1D4C0;
L_08A1D4C0:;
    a1 = LD32(sp+100);
    cnd_ = a1 == 0;
    if (cnd_) { a2 = LD32(s1+304); goto L_08A1D4F8; }
    goto L_08A1D4CC;
L_08A1D4CC:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D4DC;
L_08A1D4DC:;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+104));
    if (cnd_) { goto L_08A1D4F4; }
    goto L_08A1D4E4;
L_08A1D4E4:;
    fcc = FCMP(f0, f23, 12);
    cnd_ = fcc;
    if (cnd_) { a1 = LD32(s1+304); goto L_08A1D724; }
    goto L_08A1D4F4;
L_08A1D4F4:;
    a2 = LD32(s1+304);
    goto L_08A1D4F8;
L_08A1D4F8:;
    v0 = D_08AE6A40 - (27200);
    a1 = LD32(v0+27200);
    a0 = LD32(a2);
    v0 = D_08AEF908 - (-1784);
    f12 = BITSF(LD32(v0-1784));
    v1 = LD32(a0-16);
    a3 = D_08B1CAA0 - (-13664);
    t0 = D_08ADEFC0 - (-4160);
    a2 = a2 + v1;
    a0 = LD32(a2+4);
    a3 = a3 - 13664;
    t0 = t0 - 4160;
    a2 = 3;
    { rv_t r_ = func_08A68D34(a0, a1, a2, a3, t0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D530;
L_08A1D530:;
    ST32(s1+284, v0);
    goto L_08A1D534;
L_08A1D534:;
    v0 = (u32)-1;
    a0 = LD32(s1+284);
    cnd_ = a0 == v0;
    a1 = LD32(sp+100);
    if (cnd_) { goto L_08A1D560; }
    goto L_08A1D544;
L_08A1D544:;
    v0 = func_08A68F5C(a0);
    goto L_08A1D54C;
L_08A1D54C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1D55C; }
    goto L_08A1D554;
L_08A1D554:;
    f12 = f21;
    f0 = func_08A68A40(a0, f12);
    goto L_08A1D55C;
L_08A1D55C:;
    a1 = LD32(sp+100);
    goto L_08A1D560;
L_08A1D560:;
    v0 = 999;
    cnd_ = a1 == v0;
    a0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_08A1D240; }
    goto L_08A1D56C;
L_08A1D56C:;
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D578;
L_08A1D578:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A1D240; }
    goto L_08A1D580;
L_08A1D580:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D594;
L_08A1D594:;
    a0 = LD32(s1+304);
    s0 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D5AC;
L_08A1D5AC:;
    cnd_ = s0 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A1D70C; }
    goto L_08A1D5B4;
L_08A1D5B4:;
    a1 = s4 + 0;
    func_0899E8D8(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1D5BC;
L_08A1D5BC:;
    a2 = 0 + 0;
    a0 = 0x8001;
    a1 = 32;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D5D0;
L_08A1D5D0:;
    a2 = LD32(s1+364);
    s3 = v0 + 0;
    v0 = a2 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_08A1D674; }
    goto L_08A1D5E4;
L_08A1D5E4:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_08A1D64C; }
    goto L_08A1D5EC;
L_08A1D5EC:;
    s0 = LD32(s3+24);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_08A1D644; }
    goto L_08A1D5F8;
L_08A1D5F8:;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_08A1D600;
L_08A1D600:;
    a2 = LD32(s1+304);
    ST32(s0+12, FBITS(f22));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D62C;
L_08A1D62C:;
    ST32(s0+8, v0);
    ST32(s0+20, 0);
    ST32(s0+16, 0);
    v0 = LD32(s1+152);
    ST32(s0, v0);
    v0 = LD32(s0+4);
    goto L_08A1D644;
L_08A1D644:;
    ST32(s3+4, v0);
    v0 = LD32(s2);
    goto L_08A1D64C;
L_08A1D64C:;
    a2 = 1;
    a0 = s3 + 0;
    v1 = LD32(v0-16);
    a1 = 0 + 0;
    v1 = s2 + v1;
    v0 = LD32(v1+4);
    ST32(s3, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D66C;
L_08A1D66C:;
    a2 = LD32(s1+364);
    v1 = LD32(s2);
    goto L_08A1D674;
L_08A1D674:;
    v0 = 1;
    ST32(sp+108, v0);
    a1 = 1;
    a3 = 999;
    v0 = LD32(v1-16);
    a0 = sp + 84;
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(sp+80, v1);
    goto L_08A1D698;
L_08A1D698:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST32(a0, a3);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A1D698; }
    goto L_08A1D6AC;
L_08A1D6AC:;
    a0 = LD32(s2);
    f12 = f24 * f24;
    v1 = a2 & 0x40;
    v0 = LD32(a0-16);
    t0 = 0 + 0;
    if (v1 != 0) t0 = s3;
    v0 = s2 + v0;
    a1 = LD32(v0+4);
    a2 = sp + 80;
    f13 = f21;
    t1 = s4 + 0;
    a0 = s1 + 0;
    a3 = sp + 108;
    { rv_t r_ = func_08A1D818(a0, a1, a2, a3, t0, t1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D6E4;
L_08A1D6E4:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A1D6F8; }
    goto L_08A1D6EC;
L_08A1D6EC:;
    a0 = s3 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D6F4;
L_08A1D6F4:;
    v0 = LD32(s1+296);
    goto L_08A1D6F8;
L_08A1D6F8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1D244; }
    goto L_08A1D700;
L_08A1D700:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    goto L_08A1D244;
L_08A1D70C:;
    v0 = D_08C29338 - (-27848);
    v1 = LD_U8(v0-27848);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A1D244; }
    goto L_08A1D71C;
L_08A1D71C:;
    a0 = s2 + 0;
    goto L_08A1D5B4;
L_08A1D724:;
    v0 = D_08AE6A40 - (27200);
    a2 = LD32(v0+27200);
    a0 = LD32(a1);
    t0 = D_08B1CAA0 - (-13664);
    t1 = D_08ADEF30 - (-4304);
    v1 = LD32(a0-16);
    t0 = t0 - 13664;
    t1 = t1 - 4304;
    a1 = a1 + v1;
    a0 = LD32(a1+4);
    a1 = LD32(sp+100);
    a3 = 3;
    { rv_t r_ = func_08A68BEC(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D758;
L_08A1D758:;
    ST32(s1+284, v0);
    goto L_08A1D534;
}

/* 08A1D760 */
void func_08A1D760(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1D760:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+8);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A1D7E0; }
    goto L_08A1D798;
L_08A1D798:;
    v0 = LD32(s1+4);
    a0 = s3 + 0;
    a1 = s2 + 0;
    a3 = 0 + 0;
    t0 = 143;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A1D7D0; }
    goto L_08A1D7B4;
L_08A1D7B4:;
    goto L_08A1D7B8;
L_08A1D7B8:;
    sp = sp + 32;
    return;
L_08A1D7D0:;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D7D8;
L_08A1D7D8:;
    ST32(s1+8, v0);
    goto L_08A1D7B4;
L_08A1D7E0:;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D7E8;
L_08A1D7E8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A1D810; }
    goto L_08A1D7F8;
L_08A1D7F8:;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D800;
L_08A1D800:;
    a0 = s0 + 0;
    { rv_t r_ = func_088E4564(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D808;
L_08A1D808:;
    goto L_08A1D7B8;
L_08A1D810:;
    ST32(s1+8, 0);
    goto L_08A1D798;
}

/* 08A1D818 */
rv_t func_08A1D818(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08A1D818:;
    sp = sp - 272;
    fp = t1 + 0;
    s7 = a1 + 0;
    s6 = t0 + 0;
    s5 = a2 + 0;
    s4 = a0 + 0;
    s3 = a3 + 0;
    f22 = f13;
    v0 = LD32(a3);
    v0 = v0 < 0x4u;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08A1D8D0; }
    goto L_08A1D888;
L_08A1D888:;
    goto L_08A1D88C;
L_08A1D88C:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_08A1D8D0:;
    s1 = D_08C2A6C8 - (-22840);
    s0 = s1 - 22840;
    a0 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D8E4;
L_08A1D8E4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A1D888; }
    goto L_08A1D8EC;
L_08A1D8EC:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A1D88C; }
    goto L_08A1D900;
L_08A1D900:;
    v0 = LD32(s0+8);
    v1 = LD32(s0+4);
    ST32(sp, s0);
    v0 = v0 + 1;
    a0 = sp + 0;
    ST32(s0+8, v0);
    ST32(sp+8, 0);
    cnd_ = v1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A1D974; }
    goto L_08A1D924;
L_08A1D924:;
    a2 = LD32(s1-22840);
    a3 = v1 + 0;
    goto L_08A1D92C;
L_08A1D92C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A1D960; }
    goto L_08A1D944;
L_08A1D944:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_08A1D974; }
    goto L_08A1D954;
L_08A1D954:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A1D944; }
    goto L_08A1D960;
L_08A1D960:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A1D92C; }
    goto L_08A1D970;
L_08A1D970:;
    a0 = sp + 0;
    goto L_08A1D974;
L_08A1D974:;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1D984;
L_08A1D984:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    v0 = D_08AEF90C - (-1780);
    if (cnd_) { goto L_08A1DA80; }
    goto L_08A1D990;
L_08A1D990:;
    v1 = D_08AEF910 - (-1776);
    f24 = BITSF(LD32(v0-1780));
    f25 = BITSF(LD32(v1-1776));
    v1 = LD32(s2);
    goto L_08A1D9A0;
L_08A1D9A0:;
    s1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D9B0;
L_08A1D9B0:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1D9C4;
L_08A1D9C4:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f0;
    f1 = f1 - f3;
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f21 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    ST32(sp+20, FBITS(f1));
    if (cnd_) { goto L_08A1DA68; }
    goto L_08A1DA2C;
L_08A1DA2C:;
    a0 = LD32(s1);
    f0 = BITSF(0);
    v0 = LD32(a0-12);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = sp + 0; goto L_08A1DA6C; }
    goto L_08A1DA50;
L_08A1DA50:;
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(a0+52); goto L_08A1DB28; }
    goto L_08A1DA68;
L_08A1DA68:;
    a0 = sp + 0;
    goto L_08A1DA6C;
L_08A1DA6C:;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1DA74;
L_08A1DA74:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_08A1D9A0; }
    goto L_08A1DA80;
L_08A1DA80:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A1D888; }
    goto L_08A1DA94;
L_08A1DA94:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A1D888; }
    goto L_08A1DAA0;
L_08A1DAA0:;
    v0 = LD32(s1);
    goto L_08A1DAA4;
L_08A1DAA4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A1DAF8; }
    goto L_08A1DAB8;
L_08A1DAB8:;
    v0 = LD_U8(s0+8);
    goto L_08A1DABC;
L_08A1DABC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A1DB20; }
    goto L_08A1DAC4;
L_08A1DAC4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1DB10; }
    goto L_08A1DACC;
L_08A1DACC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A1DAD4;
L_08A1DAD4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1DAE0;
L_08A1DAE0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A1DAEC;
L_08A1DAEC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A1DABC; }
    goto L_08A1DAF4;
L_08A1DAF4:;
    v1 = LD32(s1+4);
    goto L_08A1DAF8;
L_08A1DAF8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1DAA4; }
    goto L_08A1DB08;
L_08A1DB08:;
    goto L_08A1D88C;
L_08A1DB10:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A1DAD4;
L_08A1DB20:;
    s0 = LD32(s0+4);
    goto L_08A1DAEC;
L_08A1DB28:;
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DB30;
L_08A1DB30:;
    a0 = LD32(s4+304);
    s0 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DB48;
L_08A1DB48:;
    cnd_ = s0 == v0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1DA6C; }
    goto L_08A1DB50;
L_08A1DB50:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == s7;
    if (cnd_) { goto L_08A1DA6C; }
    goto L_08A1DB68;
L_08A1DB68:;
    t0 = LD32(s3);
    cnd_ = t0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A1DBAC; }
    goto L_08A1DB74;
L_08A1DB74:;
    a3 = v0 + 0;
    v1 = s5 + 0;
    v0 = LD32(v1);
    goto L_08A1DB80;
L_08A1DB80:;
    a2 = a2 + 1;
    a1 = a2 < t0;
    cnd_ = v0 == a3;
    a0 = a2 < 0x4u;
    if (cnd_) { goto L_08A1DA68; }
    goto L_08A1DB90;
L_08A1DB90:;
    cnd_ = a0 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A1DBAC; }
    goto L_08A1DB98;
L_08A1DB98:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A1DB80; }
    goto L_08A1DBA0;
L_08A1DBA0:;
    v0 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1DA6C; }
    goto L_08A1DBAC;
L_08A1DBAC:;
    v1 = LD32(s2);
    f23 = BITSF(0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DBC0;
L_08A1DBC0:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DBD4;
L_08A1DBD4:;
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f3 = f3 - f1;
    f2 = f2 - f0;
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f3);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f23, 2);
    cnd_ = fcc;
    ST32(sp+20, FBITS(f2));
    if (cnd_) { goto L_08A1DC7C; }
    goto L_08A1DC38;
L_08A1DC38:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f23 = BITSF(v0);
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
    goto L_08A1DC7C;
L_08A1DC7C:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DC8C;
L_08A1DC8C:;
    ST32(sp+116, FBITS(f24));
    a1 = sp + 32;
    a2 = sp + 16;
    f0 = BITSF(LD32(v0+4));
    ST32(sp+112, 0);
    a3 = 999;
    f0 = f0 + f24;
    ST32(sp+120, 0);
    f12 = f23;
    t0 = 0 + 0;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    a0 = sp + 48;
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08A1DCD0;
L_08A1DCD0:;
    a0 = sp + 48;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DCD8;
L_08A1DCD8:;
    s0 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 != 0;
    v0 = D_08C29E84 - (-24956);
    if (cnd_) { goto L_08A1DD00; }
    goto L_08A1DCE8;
L_08A1DCE8:;
    v1 = LD32(s0+4);
    v0 = D_08C29E64 - (-24988);
    v0 = v0 - 24988;
    cnd_ = v1 == 0;
    ST32(sp+176, v0);
    if (cnd_) { goto L_08A1DD08; }
    goto L_08A1DCFC;
L_08A1DCFC:;
    v0 = D_08C29E84 - (-24956);
    goto L_08A1DD00;
L_08A1DD00:;
    v0 = v0 - 24956;
    ST32(sp+176, v0);
    goto L_08A1DD08;
L_08A1DD08:;
    f5 = BITSF(LD32(sp+60));
    f4 = BITSF(LD32(sp+64));
    f3 = BITSF(LD32(sp+68));
    f5 = f5 * f23;
    f4 = f4 * f23;
    f3 = f3 * f23;
    f2 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    a2 = LD32(sp+176);
    a0 = sp + 48;
    a1 = sp + 112;
    f12 = f25;
    a3 = 0 + 0;
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f3));
    func_0897BFA8(a0, a1, a2, a3, f12);
    goto L_08A1DD68;
L_08A1DD68:;
    v0 = D_08AEF914 - (-1772);
    f0 = BITSF(LD32(s0));
    f3 = BITSF(LD32(sp+68));
    f5 = BITSF(LD32(sp+60));
    f4 = BITSF(LD32(sp+64));
    f3 = f3 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f0 = BITSF(LD32(sp+56));
    f2 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    f0 = f0 + f3;
    f2 = f2 + f5;
    f1 = f1 + f4;
    a2 = LD32(sp+176);
    ST32(sp+120, FBITS(f0));
    a0 = sp + 112;
    a1 = sp + 128;
    f0 = BITSF(LD32(v0-1772));
    f12 = f25;
    a3 = 0 + 0;
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, FBITS(f1));
    ST32(sp+128, FBITS(f0));
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f3));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DDD8;
L_08A1DDD8:;
    v1 = LD_U8(s0+32);
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(sp); goto L_08A1DFB8; }
    goto L_08A1DDE4;
L_08A1DDE4:;
    v0 = LD32(s2);
    a0 = LD32(s1);
    v1 = LD32(v0-16);
    a3 = LD32(a0-16);
    v0 = D_08AE6A44 - (27204);
    v1 = s2 + v1;
    a3 = s1 + a3;
    a2 = LD32(v0+27204);
    a0 = LD32(v1+4);
    a1 = LD32(a3+4);
    v0 = D_08B1CAA0 - (-13664);
    t0 = v0 - 13664;
    v0 = D_08ADEF78 - (-4232);
    a3 = 3;
    t1 = v0 - 4232;
    { rv_t r_ = func_08A68BEC(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DE24;
L_08A1DE24:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A1DE4C; }
    goto L_08A1DE30;
L_08A1DE30:;
    a0 = LD32(s4+284);
    v0 = func_08A68F5C(a0);
    goto L_08A1DE38;
L_08A1DE38:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A1DE48; }
    goto L_08A1DE40;
L_08A1DE40:;
    f12 = f22;
    f0 = func_08A68A40(a0, f12);
    goto L_08A1DE48;
L_08A1DE48:;
    a0 = s1 + 0;
    goto L_08A1DE4C;
L_08A1DE4C:;
    a1 = fp + 0;
    func_0899E8D8(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A1DE54;
L_08A1DE54:;
    v0 = LD32(s4+364);
    v1 = 0 < s6;
    v0 = (v0 >> 6) & 0x1;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1DF90; }
    goto L_08A1DE6C;
L_08A1DE6C:;
    a0 = LD32(s1);
    goto L_08A1DE70;
L_08A1DE70:;
    v1 = LD32(s3);
    v0 = LD32(a0-16);
    v1 = v1 << 2;
    v1 = v1 + s5;
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    ST32(v1, a0);
    v0 = LD32(s3);
    v0 = v0 + 1;
    v1 = v0 < 0x4u;
    cnd_ = v1 != 0;
    ST32(s3, v0);
    if (cnd_) { goto L_08A1DF58; }
    goto L_08A1DEA0;
L_08A1DEA0:;
    v0 = LD32(s3);
    goto L_08A1DEA4;
L_08A1DEA4:;
    v0 = v0 < 0x4u;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1DA6C; }
    goto L_08A1DEB0;
L_08A1DEB0:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A1D888; }
    goto L_08A1DEC4;
L_08A1DEC4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A1D888; }
    goto L_08A1DED0;
L_08A1DED0:;
    v0 = LD32(s1);
    goto L_08A1DED4;
L_08A1DED4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A1DF28; }
    goto L_08A1DEE8;
L_08A1DEE8:;
    v0 = LD_U8(s0+8);
    goto L_08A1DEEC;
L_08A1DEEC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A1DF50; }
    goto L_08A1DEF4;
L_08A1DEF4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1DF40; }
    goto L_08A1DEFC;
L_08A1DEFC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A1DF04;
L_08A1DF04:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1DF10;
L_08A1DF10:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A1DF1C;
L_08A1DF1C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A1DEEC; }
    goto L_08A1DF24;
L_08A1DF24:;
    v1 = LD32(s1+4);
    goto L_08A1DF28;
L_08A1DF28:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1DED4; }
    goto L_08A1DF38;
L_08A1DF38:;
    goto L_08A1D88C;
L_08A1DF40:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A1DF04;
L_08A1DF50:;
    s0 = LD32(s0+4);
    goto L_08A1DF1C;
L_08A1DF58:;
    v1 = LD32(s1);
    f12 = f20 - f21;
    a0 = s4 + 0;
    v0 = LD32(v1-16);
    a2 = s5 + 0;
    a3 = s3 + 0;
    v0 = s1 + v0;
    a1 = LD32(v0+4);
    t0 = s6 + 0;
    f13 = f22;
    t1 = fp + 0;
    { rv_t r_ = func_08A1D818(a0, a1, a2, a3, t0, t1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DF88;
L_08A1DF88:;
    v0 = LD32(s3);
    goto L_08A1DEA4;
L_08A1DF90:;
    a0 = s6 + 0;
    a1 = 0 + 0;
    v1 = LD32(v0-16);
    a2 = 1;
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    ST32(s6, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1DFB0;
L_08A1DFB0:;
    a0 = LD32(s1);
    goto L_08A1DE70;
L_08A1DFB8:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A1D888; }
    goto L_08A1DFC8;
L_08A1DFC8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A1D888; }
    goto L_08A1DFD4;
L_08A1DFD4:;
    v0 = LD32(s1);
    goto L_08A1DFD8;
L_08A1DFD8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A1E02C; }
    goto L_08A1DFEC;
L_08A1DFEC:;
    v0 = LD_U8(s0+8);
    goto L_08A1DFF0;
L_08A1DFF0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A1E054; }
    goto L_08A1DFF8;
L_08A1DFF8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1E044; }
    goto L_08A1E000;
L_08A1E000:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A1E008;
L_08A1E008:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E014;
L_08A1E014:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A1E020;
L_08A1E020:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A1DFF0; }
    goto L_08A1E028;
L_08A1E028:;
    v1 = LD32(s1+4);
    goto L_08A1E02C;
L_08A1E02C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1DFD8; }
    goto L_08A1E03C;
L_08A1E03C:;
    goto L_08A1D88C;
L_08A1E044:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A1E008;
L_08A1E054:;
    s0 = LD32(s0+4);
    goto L_08A1E020;
}
